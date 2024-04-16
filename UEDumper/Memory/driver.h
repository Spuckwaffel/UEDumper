// ReSharper disable CppNonInlineFunctionDefinitionInHeaderFile
#pragma once

//add any other includes here your driver might use
#include <Windows.h>
#include <tlhelp32.h>
#include <vmmdll.h>

/*
██████╗░██╗░░░░░███████╗░█████╗░░██████╗███████╗  ██████╗░███████╗░█████╗░██████╗░██╗
██╔══██╗██║░░░░░██╔════╝██╔══██╗██╔════╝██╔════╝  ██╔══██╗██╔════╝██╔══██╗██╔══██╗██║
██████╔╝██║░░░░░█████╗░░███████║╚█████╗░█████╗░░  ██████╔╝█████╗░░███████║██║░░██║██║
██╔═══╝░██║░░░░░██╔══╝░░██╔══██║░╚═══██╗██╔══╝░░  ██╔══██╗██╔══╝░░██╔══██║██║░░██║╚═╝
██║░░░░░███████╗███████╗██║░░██║██████╔╝███████╗  ██║░░██║███████╗██║░░██║██████╔╝██╗
╚═╝░░░░░╚══════╝╚══════╝╚═╝░░╚═╝╚═════╝░╚══════╝  ╚═╝░░╚═╝╚══════╝╚═╝░░╚═╝╚═════╝░╚═╝
*/


/// here should be your driver functions
///	DO NOT call any of those functions from any class,
///	they should only get called from the memory class (memory.cpp and memory.h)
/// DO NOT include this file in any other file, you might get linker errors!
/// ANY CHANGES you do to the params in functions, make sure you also edit the memory.cpp and memory.h file!

//global variables here
HANDLE procHandle = nullptr;
VMM_HANDLE hVMM = nullptr;
DWORD pid = 0;

//in case you need to initialize anything BEFORE your com works, you can do this in here.
//this function IS NOT DESIGNED to already take the process name as input or anything related to the target process
//use the function "load" below which will contain data about the process name
inline void init()
{
    char arg1[] = "-printf";
    char arg2[] = "-v";
    char arg3[] = "-device";
    char arg4[] = "fpga";
    char arg5[] = "-memmap";
    char arg6[] = "mmap.txt";
    LPSTR argv[] = { arg1, arg2, arg3, arg4, arg5, arg6 };
    DWORD argc = sizeof(argv) / sizeof(LPSTR);

    hVMM = VMMDLL_Initialize(argc, argv); // Removed local VMM_HANDLE declaration to set the global hVMM
    if (hVMM == NULL)
    {
        printf("Failed to initialize VMM\n");
        return;
    }
}

uint64_t _getBaseAddress(const wchar_t* processName, int& pid);

void attachToProcess(const int& pid);

inline int getPID(const wchar_t* processName) {
    DWORD dwPID;

    // Convert the wide string to a standard string because VMMDLL_PidGetFromName expects LPSTR.
    std::wstring ws(processName);
    const std::string str(ws.begin(), ws.end());

    if (VMMDLL_PidGetFromName(hVMM, const_cast<char*>(str.c_str()), &dwPID)) {
        return dwPID; // Return PID if the process is found.
    }
    else {
        // Log error: "Failed to get PID for process: <processName>"
        return 0; // Return 0 if the process is not found.
    }
}

/**
 * \brief use this function to initialize the target process
 * \param processName process name as input
 * \param baseAddress base address of the process gets returned
 * \param processID process id of the process gets returned
 */
inline void loadData(std::string& processName, uint64_t& baseAddress, int& processID)
{
    // Convert the standard string to a wide string because getPID and getBaseAddress expect const wchar_t*
    std::wstring wProcessName(processName.begin(), processName.end());

    processID = getPID(wProcessName.c_str());  // Now passing const wchar_t*
    if (processID == 0) {
        // Log an error message here saying "Failed to get PID for process: <processName>"
        return;
    }

    attachToProcess(processID);  // Now, pid is set correctly.
    baseAddress = _getBaseAddress(wProcessName.c_str(), processID);  // Now passing const wchar_t*
}

/**
 * \brief read function (replace with your read logic)
 * \param address memory address to read from
 * \param buffer memory address to write to
 * \param size size of memory to read (expects the buffer/address to have this size too)
 */
inline void _read(const void* address, void* buffer, const DWORD64 size)
{
    BOOL b = VMMDLL_MemRead(hVMM, pid, (ULONG64)address, (PBYTE)buffer, (DWORD)size);
    if (!b)
    {
        //if failed, try with lower byte amount
        for (DWORD i = 1; i < size && !b; i += 10)
        {
            b = VMMDLL_MemRead(hVMM, pid, (ULONG64)address, (PBYTE)buffer, (DWORD)(size - i));
        }

        // Handle read failure, if all attempts failed.
        if (!b)
        {
            // You might want to log the error or perform some cleanup actions here.
        }
    }
}


/**
 * \brief write function (replace with your write logic)
 * \param address memory address to write to
 * \param buffer memory address to write from
 * \param size size of memory to write (expects the buffer/address to have this size too)
 */
inline void _write(void* address, const void* buffer, const DWORD64 size)
{
    BOOL b = VMMDLL_MemWrite(hVMM, pid, (ULONG64)address, (PBYTE)buffer, (DWORD)size);
    if (!b)
    {
        // Handle write failure.
        // You might want to log the error or perform some cleanup actions here.
    }
}


/**
 * \brief gets the process base address. If you adjust the params, make sure to change them in memory.cpp too
 * \param processName the name of the process
 * \param pid returns the process id
 * \return process base address
 */
uint64_t _getBaseAddress(const wchar_t* processName, int& pid)
{
    // Assume pid is already set correctly.
    // processName is considered as the module name here.
    const ULONG64 baseAddress = VMMDLL_ProcessGetModuleBaseW(hVMM, pid, const_cast<LPWSTR>(processName));
    if (baseAddress == 0)
    {
        // Handle error. Maybe log an error message or perform some cleanup actions here.
    }
    return baseAddress;
}

/**
 * \brief this function might not be needed for your driver, this just attaches to the process
 * \param pid process id of the target process
 */
void attachToProcess(const int& _pid)
{
    // Instead of OpenProcess, perform any setup or initialization needed for MemProcFS
    // For example, you might set global variables or configure internal state.
    pid = _pid;
}