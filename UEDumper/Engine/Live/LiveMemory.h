#pragma once


#include "stdafx.h"

//delay between every memory block update in ms
#define MEMORY_UPDATE_SPEED 500

class LiveMemory
{
public:
	///MemoryBlock struct.
	///A MemoryBlock holds memory of the targets process with additional information
	///to keep track of its validity
	struct MemoryBlock
	{
		uint64_t gameAddress = 0;
		uint64_t buffer = 0;
		int size = 0;
		int usageCounter = 0;
		__int64 updateTimeStamp = 0;

		//whether data has not yet been filled
		bool valid() const
		{
			return updateTimeStamp != 0;
		}

		template <typename T>
		T read(int offset)
		{
			T obj = T();
			if(offset + sizeof(T) > size)
			{
				return obj;
			}
			return *reinterpret_cast<T*>(buffer + offset);
		}
		//fake write, this is mostly just used for ui purposes as this just writes to our memory block and not game memory
		template <typename T>
		void write(int offset, T& data)
		{
			T obj = T();
			if (offset + sizeof(T) > size)
			{
				return;
			}
			*reinterpret_cast<T*>(buffer + offset) = data;
		}
	};
private:

	//map that returns the memory block for its gameAddress
	static inline std::unordered_map<uint64_t, MemoryBlock>memoryBlocks{};

	/**
	 * \brief DO NOT CALL! Function that updates all the blocks
	 */
	static void memoryLoop();
	

public:

	

	LiveMemory();

	//adds a new block or returns a existing block for the given game address 
	static MemoryBlock* addNewBlock(uint64_t address, int size);

	//have to call erase on your own!
	static void freeBlock(uint64_t address);

	static void cacheBlocks();

	//gets the memory block for a given address
	static MemoryBlock* getMemoryBlock(uint64_t address);

	static std::string getBlockInfo(uint64_t address);
	
};