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

static unsigned int dword_113C6B04 = 0;

//use the Memory::read function for reading any memory.
static void fname_decrypt(char* inputBuf, int namelength)
{
	//reversed either by me or credits to the people who post it on uc

	int v14 = namelength; // r15d
	int v15; // r8d
	int v16; // ecx
	char* v17 = inputBuf; // rdx
	int v18; // eax
	unsigned int v19; // ecx

	v15 = 0;
	v16 = 28;
	if (v14)
	{
		do
		{
			v18 = v15++;
			v19 = (v18 | 0xB000) + v16;
			v18 = v19 ^ ~*v17;
			LOBYTE(v18);
			v16 = v19 >> 2;
			*v17++ = v18;
		} while (v15 < v14);
	}
}