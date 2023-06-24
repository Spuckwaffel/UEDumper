#pragma once
#include <cstdint>

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

//static uint64_t dword_4B64088 = 0;

//use the Memory::read function for reading any memory.
static void fname_decrypt(char* inputBuf, int namelength)
{
	char* v2 = inputBuf; // rdi
	int v4 = namelength; // ebx
	int v5 = 0;
	uint64_t result = 38i64;
	if (v4)
	{
		do
		{
			uint64_t v7 = v5 | result;
			++v2;
			++v5;
			BYTE v8 = ~(BYTE)v7;
			result = (unsigned int)(2 * v7);
			*(BYTE*)(v2 - 1) ^= v8;
		} while (v5 < v4);
	}
}