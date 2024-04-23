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
    int v5; // eax
    int v6; // er8
    unsigned int v7; // edx
    __int64 v8; // rcx
    __int64 v9; // rax

    v2 = inputBuf;
    v4 = namelength;
    v6 = 0;
    v7 = Memory::read<unsigned int>(Memory::getBaseAddress() + 0x1270893C) >> 5;
    if (v4)
    {
        do
        {
            v7 += v6 + 160;
            ++v6;
            v5 = (16 * *v2) | (v7 ^ ((unsigned int)(char)*v2 >> 4)) & 0xF;
            *v2++ = static_cast<char>(v5 & 0xFF);
        } while (v6 < v4);
    }
}