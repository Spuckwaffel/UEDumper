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
static unsigned int dword_E8A9618 = 0;

//use the Memory::read function for reading any memory.
static void fname_decrypt(char* inputBuf, int namelength)
{
    //reversed either by me or credits to the people who post it on uc


    char* v2; // rdi
    unsigned int v4; // ebx
    unsigned int v5; // eax
    int v6; // edx
    unsigned int v7; // er8
    __int64 v8; // rax
    __int16 v9; // ax

    v2 = inputBuf;
    v4 = namelength;
    if (!dword_E8A9618)
        dword_E8A9618 = Memory::read<__int64>(Memory::getBaseAddress() + 0xEC1A818);
    v6 = 0;
    v7 = 38;
    if (v4)
    {
        do
        {
            v8 = v6++ | v7;
            v9 = v8;
            v7 = 2 * v8;
            dword_E8A9618 = ~v9;
            *v2++ ^= dword_E8A9618;
        } while (v6 < v4);
    }
}