#pragma once
#include <cstdint>

#include "Memory/memory.h"

/*
 * DO NOT INCLUDE THIS FILE ANYWHERE OR ADD FUNCTIONS HERE
 *
 * This function is used in the EngineCore::FNameToString function and
 * should decrypt the name buffer, as some games encrypt the fnames
 *
 * you shouldnt have to change anything in the params.
 * The function expects you to write the data back into the input buffer.
 * In case your decryption routine somehow writes the decrypted data into a second buffer,
 * just use memcpy to copy it into the input buffer
*/

//you can add here any global variables in case the games decryption function uses any global variables
//you can (or should) mark the global variables as "static"

// example:
// static uint64_t dword_4B64088 = 0;

static uint64_t dword_4CF88E4 = 0;
static uint64_t dword_4BF84A4 = 0;


static unsigned int dword_5A1DA78 = 0;

//use the Memory::read function for reading any memory.
static void fname_decrypt(char* inputBuf, int namelength)
{
	/// Example:
	///	char* v2 = inputBuf; // rdi
	///	int v4 = namelength; // ebx
	///	int v5 = 0;
	///	uint64_t result = 38i64;
	///	if (v4)
	///	{
	///		do
	///		{
	///			uint64_t v7 = v5 | result;
	///			++v2;
	///			++v5;
	///			BYTE v8 = ~(BYTE)v7;
	///			result = (unsigned int)(2 * v7);
	///			*(BYTE*)(v2 - 1) ^= v8;
	///		} while (v5 < v4);
	///	}
	///
	char decname[1024];
	ZeroMemory(decname, sizeof(decname));

	__int64 outputBuff = reinterpret_cast<__int64>(&decname);

	if(dword_5A1DA78 == 0)
	{
		dword_5A1DA78 = Memory::read<unsigned int>(Memory::getBaseAddress() + 0x5A1DA78);;
	}
	char v9;
	char v4 = *inputBuf;
	unsigned int v5 = dword_5A1DA78 % 0x21;
	unsigned int v6 = dword_5A1DA78 % 0x21 + (dword_5A1DA78 ^ 0x9C677CC5);
	*decname = static_cast<BYTE>(v6 ^ *inputBuf);
	if (v4 != (BYTE)v6)
	{
		char* v7 = decname;
		__int64 v8 = (uint64_t)inputBuf - outputBuff;
		do
		{
			v6 += v5 + (DWORD)++v7 - (DWORD)outputBuff;
			v9 = v6 ^ v7[v8];
			*v7 = v9;
		} while (v9);
	}

	//if (dword_4CF88E4 == 0)
	//	dword_4CF88E4 = Memory::read<uint64_t>(Memory::getBaseAddress() + 0x4CF88E4);
	//
	//if (dword_4BF84A4 == 0)
	//	dword_4BF84A4 = Memory::read<uint64_t>(Memory::getBaseAddress() + 0x4BF84A4);
	//
	//const int v4 = dword_4BF84A4 ^ 0x9C677CC5;
	//unsigned int v5 = dword_4CF88E4 + v4;
	//char result = v5 ^ *inputBuf;
	//*(BYTE*)outputBuff = result;
	//const char* v7;
	//__int64 v8;
	//if (result)
	//{
	//	v7 = &inputBuf[-outputBuff];
	//	v8 = -outputBuff;
	//	do
	//	{
	//		v5 += dword_4CF88E4 + v8 + ++outputBuff;
	//		result = v5 ^ v7[outputBuff];
	//		*(BYTE*)outputBuff = result;
	//	} while (result);
	//}



	//memcpy here, also inputBuf should have the same size as decname otherwise buffer overflow
	memcpy(inputBuf, decname, sizeof(decname));
}