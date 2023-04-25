#pragma once
#include "stdafx.h"

/****************************************************
*													*
*	Memory.h - The wrapper class for all the reads	*
*	This class is used for all the read calls made	*
*	by the engine. The actual reading logic is in	*
*	driver.h. This class just calls those functions	*
*													*
****************************************************/

/*
██████╗░██╗░░░░░███████╗░█████╗░░██████╗███████╗  ██████╗░███████╗░█████╗░██████╗░██╗
██╔══██╗██║░░░░░██╔════╝██╔══██╗██╔════╝██╔════╝  ██╔══██╗██╔════╝██╔══██╗██╔══██╗██║
██████╔╝██║░░░░░█████╗░░███████║╚█████╗░█████╗░░  ██████╔╝█████╗░░███████║██║░░██║██║
██╔═══╝░██║░░░░░██╔══╝░░██╔══██║░╚═══██╗██╔══╝░░  ██╔══██╗██╔══╝░░██╔══██║██║░░██║╚═╝
██║░░░░░███████╗███████╗██║░░██║██████╔╝███████╗  ██║░░██║███████╗██║░░██║██████╔╝██╗
╚═╝░░░░░╚══════╝╚══════╝╚═╝░░╚═╝╚═════╝░╚══════╝  ╚═╝░░╚═╝╚══════╝╚═╝░░╚═╝╚═════╝░╚═╝
*/

///Core memory class, every function that does any memory operations will use this class.
///Feel free to add any members here and your own logic. However, this class should be static.
///Keep in mind that it should be in general enough to just add your logic in driver.h and nothing
///really here, as this is just a wrapper class. 
class Memory
{
public:
	//enums
	enum LoadError
	{
		noProcessID,
		noBaseAddress,
		success
	};

	enum MemoryStatus
	{
		bad,
		inizilaized,
		loaded
	};

protected:
	//values that can be shared over more class instances
	inline static uint64_t baseAddress = 0;
	inline static int processID = 0;

private:

	//these values have to be set to true once the driver is initilized and basic variables has been set
	inline static MemoryStatus status = bad;

	//counter for all reads done
	inline static int totalReads = 0;

	//counter for all writes done
	inline static int totalWrites = 0;
	
	

public:
	//add your initializers here
	//the initializers should call the init function and set the initOnce bool to true
	//you should preferably a initializer that needs no additional parameters
	Memory();

	/**
	 * \brief REQUIRED! Gets base address and pid from the given process name
	 * \param processName target process name
	 * \return LoadError value
	 */
	static LoadError load(std::string processName);

	static void checkStatus();

	static MemoryStatus getStatus();

	//process informations
	static uint64_t getBaseAddress();

	static int getProcessID();

	static int getTotalReads();
	
	static int getTotalWrites();
	

	/*
	 * Memory operations here. If you change any params on the templates,
	 * you have to change them in all the source files too.
	 * In general you dont have to change them.
	 */

	//read function that gets called from the templates
	static void read(const void* address, void* buffer, DWORD64 size);


	static void read(DWORD64 address, DWORD64 buffer, DWORD64 size)
	{
		read(reinterpret_cast<void*>(address), reinterpret_cast<void*>(buffer), size);
	}

	template <typename T>
	static T read(void* address)
	{
		T buffer{};
		memset(&buffer, 0, sizeof(T));
		read(address, &buffer, sizeof(T));

		return buffer;
	}

	template <typename T>
	static T read(uint64_t address)
	{
		return read<T>(reinterpret_cast<void*>(address));
	}


	//write function that gets called from the templates
	static void write(void* address, const void* buffer, DWORD64 size);

	template <typename T>
	static void write(void* address, T& data)
	{
		write(address, &data, sizeof(T));
	}

	template <typename T>
	static void write(uint64_t address, T& data)
	{
		write<T>(reinterpret_cast<void*>(address), data);
	}

	/**
	 * \brief pattern scans the text section and returns 0 if unsuccessful
	 * \param flag accepts OffsetFlags enums
	 * \param pattern the pattern
	 * \param mask the mask
	 * \return the address
	 */
	static uint64_t patternScan(int flag, const char* pattern, const std::string& mask);
};
