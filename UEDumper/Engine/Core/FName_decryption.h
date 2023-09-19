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
static unsigned int dword_E851E58 = 0;

//use the Memory::read function for reading any memory.
static void fname_decrypt(char* inputBuf, int namelength)
{
    //reversed either by me or credits to the people who post it on uc

    char* v25 = inputBuf; // rdi
    int v26 = namelength; // ebx
    int v27;
    unsigned int v28;
    char* v29;
    char v30;

    v27 = 0;

    if (!dword_E851E58)
        dword_E851E58 = Memory::read<unsigned int>(Memory::getBaseAddress() + 0xE851E58) >> 5;
    v28 = dword_E851E58;

    result = 26i64;
    v5 = v4;
    if (v5)
    {
        v6 = v5;
        do
        {
            v7 = *v2++;
            v8 = result + 45297;
            *(v2 - 1) = v8 + ~v7;
            result = (v8 << 8) | (v8 >> 8);
            --v6;
        } while (v6);
    }
}