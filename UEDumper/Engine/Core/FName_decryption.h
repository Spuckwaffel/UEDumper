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

    unsigned int v4 = namelength; // ebx
    char* v2 = inputBuf; // r8
    unsigned int v5; // eax
    int v6; // edx
    unsigned int v7; // r8d
    __int64 v8; // rax


    v5 = Memory::read<unsigned int>((Memory::getBaseAddress() + 0x1200051C));
    v6 = (v5 << 8) | (v5 >> 8);
    v7 = v5 >> 7;
    if (v4)
    {
        v8 = v4;
        do
        {
            v6 += v7;
            *v2++ ^= v6;
            --v8;
        } while (v8);
    }
}