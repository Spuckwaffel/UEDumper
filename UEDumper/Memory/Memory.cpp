#include "memory.h"

#include "driver.h"
#include "Frontend/Windows/LogWindow.h"
#include <Engine/Userdefined/Offsets.h>


Memory::Memory()
{
	windows::LogWindow::Log(windows::LogWindow::logLevels::LOGLEVEL_ONLY_LOG, "MEMORY", "Initializing memory class...");
	//only call the init function if status is bad
	if (status == bad)
	{
		//call the init function
		init();

		//set the status to inizilized
		status = inizilaized;
		windows::LogWindow::Log(windows::LogWindow::logLevels::LOGLEVEL_INFO, "MEMORY", "Initialized Memory class!");
	}

}

Memory::LoadError Memory::load(std::string processName)
{
	//should not happen!
	if (status == bad) DebugBreak();

	//only call the load function if the status is initialized
	if (status == inizilaized)
	{
		loadData(processName, baseAddress, processID);

		if (!baseAddress) {
			windows::LogWindow::Log(windows::LogWindow::logLevels::LOGLEVEL_ERROR, "MEMORY", "Error getting base address!");
			return noBaseAddress;
		}

		if (!processID) {
			windows::LogWindow::Log(windows::LogWindow::logLevels::LOGLEVEL_ERROR, "MEMORY", "Error getting process ID!");
			return noProcessID;
		}

		windows::LogWindow::Log(windows::LogWindow::logLevels::LOGLEVEL_INFO, "MEMORY", "Loaded Memory class!");
	}

	status = loaded;
	return success;
}

Memory::LoadError Memory::load(int processPID)
{
	//should not happen!
	if (status == bad) DebugBreak();

	//only call the load function if the status is initialized
	if (status == inizilaized)
	{
		baseAddress = _getBaseAddress(nullptr, processPID);

		if (!baseAddress) {
			windows::LogWindow::Log(windows::LogWindow::logLevels::LOGLEVEL_ERROR, "MEMORY", "Error getting base address!");
			return noBaseAddress;
		}

		processID = processPID;
		if (!processID) {
			windows::LogWindow::Log(windows::LogWindow::logLevels::LOGLEVEL_ERROR, "MEMORY", "Error getting process ID!");
			return noProcessID;
		}

		attachToProcess(processID);

		windows::LogWindow::Log(windows::LogWindow::logLevels::LOGLEVEL_INFO, "MEMORY", "Loaded Memory class!");
	}

	status = loaded;
	return success;
}

void Memory::checkStatus()
{
	if (status != loaded) DebugBreak();
}

Memory::MemoryStatus Memory::getStatus()
{
	return status;
}

uint64_t Memory::getBaseAddress()
{
	return baseAddress;
}

int Memory::getProcessID()
{
	return processID;
}

int Memory::getTotalReads()
{
	return totalReads;
}

int Memory::getTotalWrites()
{
	return totalWrites;
}

void Memory::read(const void* address, void* buffer, const DWORD64 size)
{
	totalReads++;
	checkStatus();

	_read(address, buffer, size);
}

void Memory::write(void* address, const void* buffer, const DWORD64 size)
{
	totalWrites++;
	checkStatus();

	_write(address, buffer, size);
}

BOOLEAN CheckMask(const char* Base, const char* Pattern, const char* Mask) {
	for (; *Mask; ++Base, ++Pattern, ++Mask) {
		if (*Mask == 'x' && *Base != *Pattern) {
			return FALSE;
		}
	}
	return TRUE;
}

uint64_t Memory::patternScan(int flag, const char* pattern, const std::string& mask)
{
	//technically not write if you use the same pattern but once with RVA flag and once without
	//but i dont see any case where both results are needed so i cba
	static std::unordered_map<const char*, uint64_t> patternMap{};

	static std::vector<IMAGE_SECTION_HEADER> sectionHeaders;
	static char* textBuff = nullptr;
	static bool init = false;
	static DWORD virtualSize = 0;
	static uint64_t vaStart = 0;

	if (patternMap.contains(pattern))
		return patternMap[pattern];

	if (!init)
	{
		init = true;

		static IMAGE_DOS_HEADER dosHeader;
		static IMAGE_NT_HEADERS ntHeaders;

		dosHeader = read<IMAGE_DOS_HEADER>(baseAddress);


		if (dosHeader.e_magic != IMAGE_DOS_SIGNATURE)
			throw std::runtime_error("dosHeader.e_magic invalid!");

		ntHeaders = read<IMAGE_NT_HEADERS>(baseAddress + dosHeader.e_lfanew);


		if (ntHeaders.Signature != IMAGE_NT_SIGNATURE)
			throw std::runtime_error("ntHeaders.Signature invalid!");

		DWORD sectionHeadersSize = ntHeaders.FileHeader.NumberOfSections * sizeof(IMAGE_SECTION_HEADER);
		sectionHeaders.resize(ntHeaders.FileHeader.NumberOfSections);

		//ReadProcessMemory(hProcess, (LPBYTE)baseAddress + dosHeader.e_lfanew + sizeof(DWORD) + sizeof(IMAGE_FILE_HEADER),
		//sectionHeaders.data(), sectionHeadersSize, nullptr)
		read(baseAddress + dosHeader.e_lfanew + sizeof(DWORD) + sizeof(IMAGE_FILE_HEADER) + ntHeaders.FileHeader.SizeOfOptionalHeader, reinterpret_cast<DWORD64>(sectionHeaders.data()), sectionHeadersSize);


		for (const auto& section : sectionHeaders) {
			std::string sectionName(reinterpret_cast<const char*>(section.Name));
			if (sectionName == ".text") {
				textBuff = static_cast<char*>(calloc(section.Misc.VirtualSize, 1));
				read(baseAddress + section.VirtualAddress, reinterpret_cast<DWORD64>(textBuff), section.Misc.VirtualSize);
				virtualSize = section.Misc.VirtualSize;
				vaStart = baseAddress + section.VirtualAddress;
			}
		}
	}


	const int length = virtualSize - mask.length();

	for (int i = 0; i <= length; ++i)
	{
		char* addr = &textBuff[i];

		if (!CheckMask(addr, pattern, mask.c_str()))
			continue;

		const uint64_t uAddr = reinterpret_cast<uint64_t>(addr);
		if (flag & OFFSET_SIG_RVA)
		{
			const auto res = vaStart + i + *reinterpret_cast<int*>(uAddr + 3) + 7;
			patternMap.insert(std::pair(pattern, res));
			return res;
		}

		const auto res = vaStart + i;
		patternMap.insert(std::pair(pattern, res));
		return res;
	}
	return 0;

	//ReadProcessMemory(hProcess, (LPBYTE)baseAddress + dosHeader.e_lfanew + sizeof(DWORD), &fileHeader, sizeof(IMAGE_FILE_HEADER), nullptr)
}