#pragma once
#include "stdafx.h"

/****************************************************
*													*
*	Offsets.h - Add here your offsets. The engine	*
*	won't be able to work without some important	*
*	offsets that change from game to game.			*
*													*
****************************************************/

/*
██████╗░██╗░░░░░███████╗░█████╗░░██████╗███████╗  ██████╗░███████╗░█████╗░██████╗░██╗
██╔══██╗██║░░░░░██╔════╝██╔══██╗██╔════╝██╔════╝  ██╔══██╗██╔════╝██╔══██╗██╔══██╗██║
██████╔╝██║░░░░░█████╗░░███████║╚█████╗░█████╗░░  ██████╔╝█████╗░░███████║██║░░██║██║
██╔═══╝░██║░░░░░██╔══╝░░██╔══██║░╚═══██╗██╔══╝░░  ██╔══██╗██╔══╝░░██╔══██║██║░░██║╚═╝
██║░░░░░███████╗███████╗██║░░██║██████╔╝███████╗  ██║░░██║███████╗██║░░██║██████╔╝██╗
╚═╝░░░░░╚══════╝╚══════╝╚═╝░░╚═╝╚═════╝░╚══════╝  ╚═╝░░╚═╝╚══════╝╚═╝░░╚═╝╚═════╝░╚═╝
*/

/// - Add all your offsets here and those you need in the live editor or that are needed in the engine.
///	- The offsets with the name OFFSET_GNAMES and OFFSET_GOBJECTS have to be defined
///	- Most of the time the offset should actually lead to a pointer that leads to the data, not directly to it.
///	  For example in all versions, even if ue changed a lot, the GNAMES offset is just a pointer or start of a struct of pointers
///	  to the actual GNAMES. If you are unsure, take a look in Core.cpp of the implementation or just remember that all valid offsets have
///	  the format base + offset.
///	- Keep in mind that all offsets used for the live editor should be valid uobjects or nothing will be displayed and defined with OFFSET_LIVE_EDITOR.
///	  For example the uworld offset. If you use the OFFSET_ADDRESS format, base + 0xABCDE is already enough (even if there's just a pointer to the actual uworld)
///	  The same applies to any signatures.
///	- When using the flag OFFSET_SIGNATURE_FOLLOW, it expects the found address to have the format mov rax, cs:dword, a 7 byte instruction.
/// - When using signatures, keep in mind that the first result will be used.

enum OffsetFlags
{
	OFFSET_LIVE_EDITOR = 1 << 0, //use this if the offset should be displayed in the live editor
	OFFSET_DS = 1 << 1, //use this if the offset should be added to dumpspace when creating dumpspace files
	OFFSET_ADDRESS = 1 << 2, //use this if the offset is at base + address
	OFFSET_SIGNATURE = 1 << 3, //dont use directly
	OFFSET_SIG_RVA = 1 << 4, //dont use directly
	OFFSET_SIG_DIR = 1 << 5, //dont use directly
	OFFSET_SINGNATURE_DIRECT = OFFSET_SIGNATURE | OFFSET_SIG_DIR, //use this if the signature start is the offset
	OFFSET_SIGNATURE_FOLLOW = OFFSET_SIGNATURE | OFFSET_SIG_RVA, //use this if the offset is at the signature + rva

};

struct Offset
{
	int flag = -1; //flag of the Offset struct
	std::string name = ""; //name of the Offset struct
	uint64_t offset = 0; //if using flag OFFSET_ADDRESS, set the address here (dont write base +..., just write the offset)
	//leave the rest empty if not using a sig
	const char* sig = ""; //sig bytes in format \xAB\xCD\xEF\x00\x...
	std::string mask = ""; //xxxxxxx??xxx??x? where x compares the byte and ? is a wildcard.

	operator bool() const { return flag != -1; }

	nlohmann::json toJson() const
	{
		nlohmann::json j;
		j["flag"] = flag;
		j["name"] = name;
		j["offset"] = offset;
		nlohmann::json jSig;
		for (int i = 0; i < mask.length(); i++)
		{
			BYTE b = *(sig + i);
			jSig.push_back(b);
		}
		j["sig"] = jSig;
		j["mask"] = mask;
		return j;
	}

	static Offset fromJson(const nlohmann::json& json)
	{
		Offset o;
		o.flag = json["flag"];
		o.name = json["name"];
		o.offset = json["offset"];
		o.mask = json["mask"];
		nlohmann::json jSig = json["sig"];
		char* sig = new char[o.mask.length()];
		int i = 0;
		for (const BYTE byte : jSig)
		{
			sig[i++] = byte;
		}
		return o;
	}
};

//examples:
//for uworld: STAT_UGameEngine_Tick_TickWorldTravel or seamlesstravel
//fnametostring: E8 ? ? ? ? 83 7D E8 00 4C 8D 05 ? ? ? ? 48 8D 15 ? ? ? ? follow the sub // WorldPartitionLevelStreaming_%s and sub above
//or 48 8D 0D ? ? ? ? E8 ? ? ? ? 4C 8B C0 C6 05
//gobjects: 48 8B 05 ? ? ? ? 48 8B 0C C8 48 8D 04 D1 48 85 C0

/// Example:
///	Signatures need OFFSET_SIGNATURE_FOLLOW or OFFSET_SINGNATURE_DIRECT
/// offsets.push_back({ OFFSET_SIGNATURE_FOLLOW | OFFSET_DS, "OFFSET_GNAMES", 0, "\x4C\x8B\x0D\x73\x3C\x94\x03", "xxxxxxx" });
///	Addresses need OFFSET_ADDRESS
/// offsets.push_back({ OFFSET_ADDRESS | OFFSET_DS, "OFFSET_GOBJECTS", 0x4D01930 });
///	Use OFFSET_LIVE_EDITOR to display the address in the live editor
/// offsets.push_back({ OFFSET_ADDRESS | OFFSET_DS | OFFSET_LIVE_EDITOR, "OFFSET_GWORLD", 0x4E0EFF0 });

inline std::vector<Offset> setOffsets()
{
	std::vector<Offset> offsets;

	offsets.push_back({ OFFSET_ADDRESS | OFFSET_DS, "OFFSET_GNAMES", 0xDEADBEEF });
	offsets.push_back({ OFFSET_ADDRESS | OFFSET_DS, "OFFSET_GOBJECTS", 0xDEADBEEF });
	offsets.push_back({ OFFSET_ADDRESS | OFFSET_DS | OFFSET_LIVE_EDITOR, "OFFSET_GWORLD", 0xDEADBEEF });

	return offsets;
}

// No need to change this. If you're reading this file and changed your offsets, you're good.
// This is part of a check for those who can't read README.md files =)
#define SHOW_README_IF_OFFSETS_ARE_VALUE 0xDEADBEEF