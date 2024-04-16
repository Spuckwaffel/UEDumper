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

    int v7 = namelength;
    char* v9 = inputBuf;
    __int64 v10;
    int v11;
    unsigned int v12;
    char v13;

    v10 = 0;
    v11 = Memory::read<unsigned int>(Memory::getBaseAddress() + 0x1223FB2C) >> 5; //if 0x12492C68 return nothing : 0x1223FB2C
    if (v7)
    {
        do
        {
            v12 = (unsigned int)*v9 >> 4;
            v13 = v11 ^ v12 ^ (16 * *v9);
            v11 += 8 * v10;
            v10 = (unsigned int)(v10 + 1);
            *v9++ = v12 ^ v13 & 0xF0;
        } while ((int)v10 < v7);
    }
}