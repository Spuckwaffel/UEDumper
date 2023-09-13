#include "LiveMemory.h"

#include "Frontend/Windows/LogWindow.h"
#include "Memory/memory.h"


void LiveMemory::memoryLoop()
{
	windows::LogWindow::Log(windows::LogWindow::log_1, "LIVEMEM", "Started block loop!");
	while(true)
	{

		// Store the current time in a variable
		const auto time = std::chrono::system_clock::to_time_t(std::chrono::system_clock::now());
		auto i = memoryBlocks.begin();
		while(i != memoryBlocks.end())
		{
			if ((*i).second.usageCounter == 0)
			{
				++i;
				continue;
			}
				

			//if((*i).second.updateTimeStamp + 3000 < time)
			//{
			//	freeBlock((*i).second.gameAddress);
			//	i = memoryBlocks.erase(i);
			//	continue;
			//}
				


			(*i).second.updateTimeStamp = time;
			Memory::read((*i).first, (*i).second.buffer, (*i).second.size);
			(*i).second.usageCounter = 0; //reset the usage counter to 0. Only update if there are usages.
			++i;
		}
		for(auto& idx : memoryBlocks)
		{
			//check if there were usages since last read
			if (idx.second.usageCounter == 0)
				continue;
			
			
			idx.second.updateTimeStamp = time;
			Memory::read(idx.first, idx.second.buffer, idx.second.size);
			idx.second.usageCounter = 0; //reset the usage counter to 0. Only update if there are usages.
		}
		Sleep(MEMORY_UPDATE_SPEED);
	}
}

LiveMemory::LiveMemory()
{
}

LiveMemory::MemoryBlock* LiveMemory::addNewBlock(uint64_t address, int size)
{
	//increase usageCounter because the block was accessed

	if (memoryBlocks.contains(address))
	{
		memoryBlocks[address].usageCounter++;
		return &memoryBlocks[address];
	}
	MemoryBlock b;
	b.gameAddress = address;
	b.buffer = reinterpret_cast<uint64_t>(calloc(1, size));
	if(!b.buffer)
	{
		windows::LogWindow::Log(windows::LogWindow::log_2, "LIVEMEM", "Couldnt add memory block with size %d", size);
		return nullptr;
	}
	b.usageCounter++;
	b.size = size;
	memoryBlocks.insert(std::pair(address, b));
	windows::LogWindow::Log(windows::LogWindow::log_2, "LIVEMEM", "Added block for 0x%p at 0x%p!", address, b.buffer);
	return &memoryBlocks[address];
	
}

void LiveMemory::freeBlock(uint64_t address)
{
	if (!memoryBlocks.contains(address))
		return;

	free(reinterpret_cast<void*>(memoryBlocks[address].buffer));

	windows::LogWindow::Log(windows::LogWindow::log_2, "LIVEMEM", "Deleted block for 0x%p!", address);
	
}

void LiveMemory::cacheBlocks()
{
	static bool done = false;
	if (done)
		return;

	done = true;
	CreateThread(nullptr, 0, reinterpret_cast<LPTHREAD_START_ROUTINE>(memoryLoop), nullptr, 0, nullptr);
}

LiveMemory::MemoryBlock* LiveMemory::getMemoryBlock(uint64_t address)
{
	//increase usageCounter because the block was accessed

	if(memoryBlocks.contains(address))
	{
		memoryBlocks[address].usageCounter++;
		return &memoryBlocks[address];
	}

	return nullptr;
}

std::string LiveMemory::getBlockInfo(uint64_t address)
{
	if (!memoryBlocks.contains(address))
		return "";

	const auto& block = memoryBlocks[address];
	std::tm time_info;
	localtime_s(&time_info, &block.updateTimeStamp);
	// Format time as a string
	std::ostringstream oss;
	oss << std::put_time(&time_info, "%H:%M:%S");
	ImGui::SameLine();
	return "updated at " + oss.str() + std::to_string(block.usageCounter);
}
