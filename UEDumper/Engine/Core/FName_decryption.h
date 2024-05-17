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

    char* v2; // rdi
    int v4; // ebx
    __int16 result; // ax
    int v6; // edx
    int v7; // ecx
    int v8; // ecx
    __int16 v9; // ax

    v2 = inputBuf;
    v4 = namelength;
    result = Memory::read<unsigned int>(Memory::getBaseAddress() + 0x12879BBC); //12AD4EA8
    v6 = 0;
    v7 = 42;
    if (v4)
    {
        do
        {
            v8 = v6++ | v7;
            v9 = v8;
            v7 = 2 * v8;
            result = ~v9;
            *v2++ ^= result;
        } while (v6 < v4);
    }
}