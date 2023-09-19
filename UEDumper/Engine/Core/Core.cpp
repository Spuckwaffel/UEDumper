#include "Core.h"

#include "FName_decryption.h"
#include "../UEClasses/UnrealClasses.h"
#include "../Userdefined/StructDefinitions.h"
#include "Frontend/Windows/LogWindow.h"
#include "Frontend/Windows/PackageViewerWindow.h"
#include "Settings/EngineSettings.h"


//https://github.com/EpicGames/UnrealEngine/blob/4.25/Engine/Source/Runtime/Core/Private/UObject/UnrealNames.cpp
//https://github.com/EpicGames/UnrealEngine/blob/4.25/Engine/Source/Runtime/Core/Public/UObject/NameTypes.h
//FName::ToString
//https://github.com/EpicGames/UnrealEngine/blob/5.1/Engine/Source/Runtime/Core/Private/UObject/UnrealNames.cpp#L3375
//https://github.com/EpicGames/UnrealEngine/blob/release/Engine/Source/Runtime/Core/Private/UObject/UnrealNames.cpp#L251


//we always compare this function to FName::ToString(FString& Out) in the source code
std::string EngineCore::FNameToString(FName fname)
{
	if(FNameCache.contains(fname.ComparisonIndex))
	{
		return FNameCache[fname.ComparisonIndex];
	}

	//unreal engine 4.19 - 4.22 fname read function
#if UE_VERSION < UE_4_23

	// the game doesnt use chunks so its completely different
	// lets take a look at the func at
	// https://github.com/EpicGames/UnrealEngine/blob/4.19/Engine/Source/Runtime/Core/Private/UObject/UnrealNames.cpp#L942
	// we first get how the FNameEntry is determined and then how FNameEntry::AppendNameToString( FString& String ) works which
	// returns the plain string.
	// lets look at how the FNameEntry is determined. The ToString function calls FName::GetDisplayNameEntry() to return a FNameEntry*
	// and the func is at
	// https://github.com/EpicGames/UnrealEngine/blob/4.19/Engine/Source/Runtime/Core/Private/UObject/UnrealNames.cpp#L919
	// that gets the Names array and the index via GetDisplayIndex() which is at
	// https://github.com/EpicGames/UnrealEngine/blob/4.19/Engine/Source/Runtime/Core/Public/UObject/NameTypes.h#L579
	// which just calls GetDisplayIndexFast() and returns the DisplayIndex or ComparisonIndex depending on WITH_CASE_PRESERVING_NAME. See
	// https://github.com/EpicGames/UnrealEngine/blob/4.19/Engine/Source/Runtime/Core/Public/UObject/NameTypes.h#L1192
	// now lets determine the Names array. The Names array is a TNameEntryArray. But what is TNameEntryArray? Its defined at
	// https://github.com/EpicGames/UnrealEngine/blob/4.19/Engine/Source/Runtime/Core/Public/UObject/NameTypes.h#L489
	// which is a TStaticIndirectArrayThreadSafeRead thats defined at
	// https://github.com/EpicGames/UnrealEngine/blob/4.19/Engine/Source/Runtime/Core/Public/UObject/NameTypes.h#L342
	// where we look at the function that returns the pointer at
	// https://github.com/EpicGames/UnrealEngine/blob/4.19/Engine/Source/Runtime/Core/Public/UObject/NameTypes.h#L391
	// we see it takes a Index as param like the one from GetDisplayIndex() and does following:
	// int32 ChunkIndex = Index / ElementsPerChunk;
	// int32 WithinChunkIndex = Index % ElementsPerChunk;
	// where ElementsPerChunk is 16384 or 0x4000.
	// and gets the ElementType** Chunk = Chunks[ChunkIndex]; (ElementType is FNameEntry)
	// where the Chunks array is just the gnames array.
	// the gnames array holds pointers to the FNameEntries
	// the following gets returned: Chunk + WithinChunkIndex;
	// this will be our FNameEntry**!
	// now lets go to FNameEntry::AppendNameToString( FString& String ) which is at
	// https://github.com/EpicGames/UnrealEngine/blob/4.19/Engine/Source/Runtime/Core/Private/UObject/UnrealNames.cpp#L126
	// which just returns the WideName or AnsiName
	// which is at FNameEntry at offset 0x16 looking at
	// https://github.com/EpicGames/UnrealEngine/blob/4.19/Engine/Source/Runtime/Core/Public/UObject/NameTypes.h#L138
	// thats it, we just need to get the bytes there!
	// the representative code:
	constexpr auto ElementsPerChunk = 0x4000;

	enum { NAME_SIZE = 1024 };

	char name[NAME_SIZE] = { 0 };

#if WITH_CASE_PRESERVING_NAME
	const int32_t Index = fname.DisplayIndex;
#else
	const int32_t Index = fname.ComparisonIndex;
#endif

	const int32_t ChunkIndex = Index / ElementsPerChunk;
	const int32_t WithinChunkIndex = Index % ElementsPerChunk;

	//GNAMES_POOL_OFFSET exists as theres always a offset for whatever reason. Check this in IDA!!!!!!!!!
	const uint64_t ElementType = Memory::read<uint64_t>(gNames + 8 * ChunkIndex + GNAMES_POOL_OFFSET);

	//WithinChunkIndex * 8 as its full of pointers
	const auto FNameEntryPtrPtr = ElementType + (WithinChunkIndex * 8);

	const auto FNameEntryPtr = Memory::read<uint64_t>(FNameEntryPtrPtr);
	
	//read the bytes
#if UE_VERSION == UE_4_22
	const uint64_t AnsiName = FNameEntryPtr + 0xC;
#else
	const uint64_t AnsiName = FNameEntryPtr + 0x10;
#endif

	int nameLength = NAME_SIZE - 1;
	Memory::read(reinterpret_cast<void*>(AnsiName), name, nameLength);
	
#else // >= 4_23

	enum { NAME_SIZE = 1024 };

	char name[NAME_SIZE] = { 0 };

	//>4.23 name chunks exist
	const unsigned int chunkOffset = fname.ComparisonIndex >> 16;
	const unsigned short nameOffset = fname.ComparisonIndex;
	
	
	//average function since 4.25
	//https://github.com/EpicGames/UnrealEngine/blob/5.1/Engine/Source/Runtime/Core/Private/UObject/UnrealNames.cpp#L3375

#if WITH_CASE_PRESERVING_NAME
	uint64_t namePoolChunk = Memory::read<uint64_t>(gNames + 8 * (chunkOffset + 2)) + 4 * nameOffset;

	const auto nameLength = Memory::read<uint16_t>(namePoolChunk + 4) >> 1;

	Memory::read(reinterpret_cast<void*>(namePoolChunk + 6), name, nameLength);
#else
	int64_t namePoolChunk = Memory::read<uint64_t>(gNames + 8 * (chunkOffset + 2)) + 2 * nameOffset;

	const auto nameLength = Memory::read<uint16_t>(namePoolChunk) >> 6;

	Memory::read(reinterpret_cast<void*>(namePoolChunk + 2), name, nameLength);
#endif

#endif

#if USE_FNAME_ENCRYPTION
	//decrypt the FNames buffer
	fname_decrypt(name, nameLength);
#endif
	

	std::string finalName = std::string(name);

	if (finalName.empty())
		finalName = "null";
		//throw std::runtime_error("empty name is trying to get cached");
	

	FNameCache.insert(std::pair(fname.ComparisonIndex, std::string(name)));

	return finalName;
}

uint64_t EngineCore::getOffsetAddress(const Offset& offset)
{
	if (!offset)
		return 0;

	if (offset.flag & OFFSET_SIGNATURE)
	{
		return Memory::patternScan(offset.flag, offset.sig, offset.mask);
	}
	if (offset.flag & OFFSET_ADDRESS)
	{
		return Memory::getBaseAddress() + offset.offset;
	}
	return 0;
}

Offset EngineCore::getOffsetForName(const std::string& name)
{
	for(auto& offset : offsets)
	{
		if (offset.name == name)
			return offset;
	}
	return{};
}

std::vector<Offset> EngineCore::getOffsets()
{
	return offsets;
}

bool EngineCore::generateStructOrClass(UStruct* object, std::vector<EngineStructs::Struct>& data)
{
	//this struct is completely useless
	if (object->PropertiesSize == 0) return false;

	EngineStructs::Struct eStruct;
	eStruct.memoryAddress = object->objectptr;
	eStruct.size = object->PropertiesSize;
	eStruct.fullName = object->getFullName();
	eStruct.cppName = object->getCName();

	//supers?
	if (object->SuperStruct)
	{
		if(const auto super = object->getSuper())
		{
			for (auto& obj : object->getAllSupers())
			{
				//add them to a vector
				eStruct.supers.push_back(obj->getCName());
			}
			eStruct.inherited = true;
			eStruct.inheretedSize = super->PropertiesSize;
		}
		
	}


	//flag some invalid characters in a name
	auto generateValidVarName = [](const std::string& str)
	{
		std::string result = "";
		for (const char c : str)
		{
			if (static_cast<int>(c) < 0 || !std::isalnum(c))
				result += '_';
			else
				result += c;

		}
		//guaranteed 0 termination
		result += '\0';
		return result;
	};

#if UE_VERSION < UE_4_25
	if(object->Children)
	{
		
		for (auto child = object->getChildren(); child; child = child->getNext())
		{
			if (!ObjectsManager::operationSuccess())
				return false;

			if (!child || !child->IsA<UProperty>())
				continue;

			auto prop = child->castTo<UProperty>();
			EngineStructs::Member member;
			member.size = prop->ElementSize * prop->ArrayDim;
			member.name = generateValidVarName(prop->getName());
			//should not happen
			if (member.size == 0)
			{
				windows::LogWindow::Log(windows::LogWindow::log_2, "CORE", "member %s size is 0! ", member.name.c_str());
				//DebugBreak();
				continue;
			}
			auto type = prop->getType();
			member.type = type;
			member.offset = prop->getOffset();

			if (type.propertyType == PropertyType::Unknown)
			{
				windows::LogWindow::Log(windows::LogWindow::log_1, "CORE", "Struct %s: %s at 0x%p is unknown prop! Missing support?", object->getCName().c_str(), member.name.c_str(), member.offset);
				continue;
			}
			if (type.propertyType == PropertyType::BoolProperty && prop->castTo<UBoolProperty>()->isBitField())
			{
				auto boolProp = child->castTo<UBoolProperty>();

				const auto bitPos = boolProp->getBitPosition(boolProp->ByteMask);
				member.isBit = true;
				member.bitOffset = bitPos;
			}
			eStruct.definedMembers.push_back(member);
		}
	}

#else


	if(object->ChildProperties)
	{
		for (auto child = object->getChildProperties(); child; child = child->getNext())
		{
			EngineStructs::Member member;
			member.size = child->ElementSize * child->ArrayDim;
			member.name = generateValidVarName(child->getName());
			if (member.size == 0)
			{
				windows::LogWindow::Log(windows::LogWindow::log_2, "CORE", "member %s size is 0! ", member.name.c_str());
				//DebugBreak();
				continue;
			}

			auto type = child->getType();
			member.type = type;

			member.offset = child->getOffset();
			if(type.propertyType == PropertyType::Unknown)
			{
				windows::LogWindow::Log(windows::LogWindow::log_1, "CORE", "Struct %s: %s at offset 0x%llX is unknown prop! Missing support?", object->getCName().c_str(), member.name.c_str(), member.offset);
				continue;
			}

			if(type.propertyType == PropertyType::BoolProperty && child->castTo<FBoolProperty>()->isBitField())
			{
				auto boolProp = child->castTo<FBoolProperty>();

				const auto bitPos = boolProp->getBitPosition(boolProp->ByteMask);

				member.isBit = true;
				member.bitOffset = bitPos;
			}
			eStruct.definedMembers.push_back(member);
		}
	}
#endif
	// get struct functions
	generateFunctions(object, eStruct.functions);

	cookMemberArray(eStruct);

	data.push_back(eStruct);
	return true;
}

bool EngineCore::generateEnum(const UEnum* object, std::vector<EngineStructs::Enum>& data)
{
	EngineStructs::Enum eEnum;
	eEnum.fullName = object->getFullName();
	eEnum.memoryAddress = object->objectptr;

	int64_t maxNum = 0;

	const auto names = object->getNames();

	if (!names.size())
		return false;

	for(auto& name : names)
	{
		if (name.Value() > maxNum) maxNum = name.Value();

		auto fname = FNameToString(name.Key());
		std::ranges::replace(fname, ':', '_');
		eEnum.members.push_back(std::pair(fname, name.Value()));
	}
	eEnum.type = maxNum > 256 ? TYPE_UI32 : TYPE_UI8;

	eEnum.cppName = object->getName();

	data.push_back(eEnum);

	return true;
}


bool EngineCore::generateFunctions(const UStruct* object, std::vector<EngineStructs::Function>& data)
{

#if UE_VERSION < UE_4_25
	if (!object->Children)
		return false;
#else
	if (!object->Children || !object->ChildProperties)
		return false;

#endif

//i am so sorry for the indent here but fucking reSharper from intellij is so bad and fucks up the
//indenting for the entire rest of the core.cpp file just because some #define shit
//this made me so mad i couldnt care less the code misses now a indent

//in every version we have to go through the children to 
for (auto fieldChild = object->getChildren(); fieldChild; fieldChild = fieldChild->getNext())
{
	if (!fieldChild || !fieldChild->IsA<UFunction>())
		continue;


	const auto fn = fieldChild->castTo<UFunction>();

	EngineStructs::Function eFunction;
	eFunction.fullName = fn->getFullName();
	eFunction.memoryAddress = fn->objectptr;
	eFunction.functionFlags = fn->getFunctionFlagsString();
	eFunction.binaryOffset = fn->Func - Memory::getBaseAddress();

#if UE_VERSION < UE_4_25

	//ue < 4.25 uses the children but we have to cast them to a UProperty to use the flags
	for (auto child = fn->getChildren(); child; child = child->getNext())
	{
		const auto propChild = child->castTo<UProperty>();
#else

	//ue >= 4.25 we go through the childproperties and we dont have to cast as they are already FProperties
	for (auto child = fn->getChildProperties(); child; child = child->getNext())
	{
		const auto propChild = child;

#endif

		//rest of the code is identical, nothing changed here
		const auto propertyFlags = propChild->PropertyFlags;

		if (propertyFlags & EPropertyFlags::CPF_ReturnParm && !eFunction.returnType)
			eFunction.returnType = propChild->getType();
		else if (propertyFlags & EPropertyFlags::CPF_Parm)
		{
			eFunction.params.push_back(std::tuple(propChild->getType(), propChild->getName(), propertyFlags, propChild->ArrayDim));
		}
	}

	// no defined return type => void
	if (!eFunction.returnType)
		eFunction.returnType = { false, PropertyType::StructProperty, "void" };

	eFunction.cppName = fn->getName();



	data.push_back(eFunction);
}
return true;

}

bool EngineCore::RUNAddMemberToMemberArray(EngineStructs::Struct& eStruct, const EngineStructs::Member& newMember)
{
	//basic 0(1) checks before iterating

	//below class base offset? 
	if (newMember.offset < eStruct.inheretedSize) { 
		windows::LogWindow::Log(windows::LogWindow::log_0, "CORE", "Add member failed: offset 0x%X is below base class offset 0x%X!", newMember.offset, eStruct.inheretedSize);
		return false;
	}
	//above class?
	if (newMember.offset > eStruct.size) {
		windows::LogWindow::Log(windows::LogWindow::log_0, "CORE", "Add member failed: offset 0x%X is greater than class size 0x%X!", newMember.offset, eStruct.size);
		return false;
	}
	//offset + size larger than class size?
	if (newMember.offset + newMember.size > eStruct.size)
	{
		windows::LogWindow::Log(windows::LogWindow::log_0, "CORE", "Add member failed: offset 0x%X with size %d is greater than class size 0x%X!", newMember.offset + newMember.size, eStruct.size);
		return false;
	}

	//larger than class size? Thats weird and will only happen if offset is negative otherwise handled by above
	if (newMember.size > eStruct.size - eStruct.inheretedSize)
	{
		windows::LogWindow::Log(windows::LogWindow::log_0, "CORE", "Add member failed: member is too large for class (%d / %d)", newMember.size, eStruct.size - eStruct.inheretedSize);
		return false;
	}

	//empty? Mostly the case if the struct has just a unknownmember and nothing defined
	if (eStruct.definedMembers.size() == 0) {
		//nothing really needed to check
		eStruct.definedMembers.push_back(newMember);
	}

	for(int i = 0; i < eStruct.definedMembers.size(); i++)
	{
		const auto& nextMember = eStruct.definedMembers[i];

		//check if its smaller than the next member
		if (newMember.offset < nextMember.offset)
		{
			//is the new member somehow interferring the next member
			if (newMember.offset + newMember.size > nextMember.offset)
			{
				windows::LogWindow::Log(windows::LogWindow::log_0, "CORE", "Add member failed: member is interferring other member (0x%X -> 0x%X -!- 0x%X)", newMember.offset, newMember.offset + newMember.size, nextMember.offset);
				return false;
			}
			//yep we found place
			eStruct.definedMembers.insert(eStruct.definedMembers.begin() + i, newMember);
			return true;
		}
		//occurence can only happen if both members are a bit. if not, error
		if(newMember.offset == nextMember.offset)
		{
			//only allowed if they are bits
			if(!newMember.isBit || !nextMember.isBit)
			{
				windows::LogWindow::Log(windows::LogWindow::log_0, "CORE", "Add member failed: attempted to override a existing member (one of them is not a bit) (isBit: %d isBit %d)", newMember.isBit, nextMember.isBit);
				return false;
			}
			if(newMember.bitOffset == nextMember.bitOffset)
			{
				windows::LogWindow::Log(windows::LogWindow::log_0, "CORE", "Add member failed: attempted to override a existing member (both have the same botOffset) (%d, %d)", newMember.bitOffset, nextMember.bitOffset);
				return false;
			}
			if(newMember.bitOffset < nextMember.bitOffset)
			{
				//yep we found place
				eStruct.definedMembers.insert(eStruct.definedMembers.begin() + i, newMember);
				return true;
			}
			//other cases like > are skipped, they should be checked in the next iter
		}
		//all cases should be handled in the next iteration as the member is larger

		//exception: this was the last iteration
		if(i == eStruct.definedMembers.size() - 1)
		{
			//sizes etc are already checked before the loop
			eStruct.definedMembers.push_back(newMember);
			return true;
		}
	}
	//will never be reached
	return false;
}

void EngineCore::cookMemberArray(EngineStructs::Struct& eStruct)
{
	//clear the existing array
	if (!eStruct.cookedMembers.empty())
		eStruct.cookedMembers.clear();


	auto genUnknownMember = [&](int from, int to, int special)
	{
		EngineStructs::Member unknown;
		unknown.missed = true;
		unknown.size = to - from;
		char name[30];
		sprintf_s(name, "UnknownData%02d_%d[0x%X]", eStruct.unknownCount++, special, unknown.size);
		unknown.name = std::string(name);
		unknown.type = { false, PropertyType::BoolProperty, TYPE_UCHAR };
		unknown.offset = from;
		eStruct.cookedMembers.push_back(unknown);
	};

	//end bit exclusive
	auto genUnknownBits = [&](int startOffset, int endOffset, int startBit, int endBit)
	{
		//weird
		if (endOffset < startOffset)
			return;

		//weird aswell
		if (endOffset == startOffset && startBit >= endBit)
			return;

		//are we here many offsets apart??
		//0x5:3
		//0x7:1
		//->
		//0x5:3
		//0x6 unknownmember[0x1]
		//0x7:0 unk (handled by while)
		//0x7:1
		if(endOffset - startOffset > 1)
		{
			//fill that with a unknownmember instead of bits
			genUnknownMember(startOffset + 1, endOffset, 3);
			//check if the end is < 0, then we can just stop
			if(endBit == 0)
				return;
			//adjust, now we just gotta fill the bits until endbit
			startOffset = endOffset;
			startBit = 0;
		}

		while(true)
		{
			if(startOffset == endOffset && startBit == endBit)
			{
				break;
			}
			EngineStructs::Member unknown;
			unknown.missed = true;
			char name[30];
			sprintf_s(name, "UnknownBit%02d", eStruct.unknownCount++);
			unknown.name = std::string(name);
			unknown.offset = startOffset;
			unknown.size = 1;
			unknown.type = { false, PropertyType::BoolProperty, TYPE_UCHAR };
			unknown.isBit = true;
			unknown.bitOffset = startBit++;
			if(startBit >= 8) //should actually just be == 8 otherwise its super weird
			{
				startBit = startBit % 8;
				startOffset++;
			}
			eStruct.cookedMembers.push_back(unknown);
		}
	};

	if (eStruct.size - eStruct.inheretedSize == 0)
		return;

	if (eStruct.definedMembers.size() == 0 && eStruct.size - eStruct.inheretedSize > 0)
	{
		genUnknownMember(eStruct.inheretedSize, eStruct.size, 1);
		return;
	}

	if(eStruct.inheretedSize < eStruct.definedMembers[0].offset)
	{
		genUnknownMember(eStruct.inheretedSize, eStruct.definedMembers[0].offset, 2);
	}

	//we are hoping (very hard) that definedmembers array is 1. sorted and 2. checked for collisions
	for(int i = 0; i < eStruct.definedMembers.size() - 1; i++)
	{
		const auto& currentMember = eStruct.definedMembers[i];
		const auto& nextMember = eStruct.definedMembers[i + 1];
		//bit shit
		if(currentMember.isBit)
		{
			eStruct.cookedMembers.push_back(currentMember);
			if(nextMember.isBit)
			{
				//not directly next to it?
				//0x7:3
				//0x7:4
				if(currentMember.offset == nextMember.offset && nextMember.bitOffset - currentMember.bitOffset > 1)
				{
					genUnknownBits(currentMember.offset, nextMember.offset, currentMember.bitOffset + 1, nextMember.bitOffset);
					continue;
				}
				//offset diff?
				//0x6:2
				//0x7:4
				if(nextMember.offset > currentMember.offset)
				{
					int startBitOffset = currentMember.bitOffset + 1;
					int startOffset = currentMember.offset;

					//we cant use bitoffset + 1 here because 8 is a invalid state, so we fixup that the gen starts at off+1 and bit 0
					if(currentMember.bitOffset == 7)
					{
						startBitOffset = 0;
						startOffset++;
					}
					genUnknownBits(startOffset, nextMember.offset, startBitOffset, nextMember.bitOffset);
					continue;
				}
			}
			//is the next member offset not directly after it?
			//0x5:3
			//0x8
			//->
			//0x5:3
			//0x6 unk[0x2]
			//0x8 (handled by next iter)
			if(nextMember.offset - currentMember.offset > 1)
			{
				genUnknownMember(currentMember.offset + 1, nextMember.offset, 4);
			}
			continue;
		}
		eStruct.cookedMembers.push_back(currentMember);
		//0x2 [0x4]
		//0x7 [0x2]
		//->
		//0x2 [0x4]
		//0x6 unk[0x1]
		//0x7 [0x2]
		if(nextMember.offset - (currentMember.offset + currentMember.size) > 0)
		{
			genUnknownMember(currentMember.offset + currentMember.size, nextMember.offset, 5);
		}

		//fixup any bits
		if(nextMember.isBit && nextMember.bitOffset > 0)
		{
			genUnknownBits(nextMember.offset, nextMember.offset, 0, nextMember.bitOffset);
		}
	}
	//add the last member
	eStruct.cookedMembers.push_back(eStruct.definedMembers[eStruct.definedMembers.size() - 1]);
	const auto& last = eStruct.cookedMembers[eStruct.cookedMembers.size() - 1];
	if(last.offset + last.size < eStruct.size)
		genUnknownMember(last.offset + last.size, eStruct.size, 6);
}


EngineCore::EngineCore()
{
	static bool loaded = false;

	bSuccess = false;
	if(!loaded)
	{
		windows::LogWindow::Log(windows::LogWindow::log_2, "ENGINECORE", "Loading core...");

		offsets = setOffsets();

		
		gNames = getOffsetAddress(getOffsetForName("OFFSET_GNAMES"));
		if(!gNames)
		{
			windows::LogWindow::Log(windows::LogWindow::log_2, "ENGINECORE", "GNames offset not found!");
			return;
		}

#if UE_VERSION < UE_4_24

		//in < 4.25 we have to get the heap pointer
		gNames = Memory::read<uint64_t>(gNames);
		windows::LogWindow::Log(windows::LogWindow::log_2, "ENGINECORE", "GNames -> 0x%p", gNames);
		if (!gNames)
		{
			windows::LogWindow::Log(windows::LogWindow::log_2, "ENGINECORE", "GNames offset seems zero!");
			return;
		}
#endif

		

		loaded = true;
	}
	
	bSuccess = true;
	
}

bool EngineCore::initSuccess()
{
	return bSuccess;
}

void EngineCore::cacheFNames(int64_t& finishedNames, int64_t& totalNames, CopyStatus& status)
{
	windows::LogWindow::Log(windows::LogWindow::log_0, "ENGINECORE", "Caching FNames...");
	status = CS_busy;
	totalNames = ObjectsManager::gUObjectManager.UObjectArray.NumElements;
	finishedNames = 0;
	for (; finishedNames < ObjectsManager::gUObjectManager.UObjectArray.NumElements; finishedNames++)
	{
		const auto object = ObjectsManager::getUObjectByIndex<UObject>(finishedNames);
		if (!object)
			continue;
		//caches already if not cached, we dont have to use the result
		auto res = object->getName();
	}
	status = CS_success;
	windows::LogWindow::Log(windows::LogWindow::log_0, "ENGINECORE", "Cached all FNames!");
}

void EngineCore::generatePackages(int64_t& finishedPackages, int64_t& totalPackages, CopyStatus& status)
{
	windows::LogWindow::Log(windows::LogWindow::log_0, "ENGINECORE", "Caching all Packets...");
	status = CS_busy;

	//we already done?
	if(packages.size() > 0)
	{
		status = CS_success;
		totalPackages = packages.size();
		finishedPackages = packages.size();
		windows::LogWindow::Log(windows::LogWindow::log_0, "ENGINECORE", "Packets already got cached!");
		return;
	}
	std::unordered_map<std::string, std::vector<UObject*>> upackages;
	//we first use the counter to iterate over all elements
	totalPackages = ObjectsManager::gUObjectManager.UObjectArray.NumElements;
	finishedPackages = 0;

	windows::LogWindow::Log(windows::LogWindow::log_0, "ENGINECORE", "reading overriding structs....");
	overrideStructs();
	windows::LogWindow::Log(windows::LogWindow::log_0, "ENGINECORE", "adding custom structs....");
	addStructs();
	windows::LogWindow::Log(windows::LogWindow::log_0, "ENGINECORE", "adding overrigind unknown members....");
	overrideUnknownMembers();
	
	for (; finishedPackages < ObjectsManager::gUObjectManager.UObjectArray.NumElements; finishedPackages++)
	{
		auto object = ObjectsManager::getUObjectByIndex<UObject>(finishedPackages);

		//instantly go if any operation was not successful!
		if (!ObjectsManager::operationSuccess())
			return;

		//is it even valid? Some indexes arent
		if (!object) 
			continue;
		
		if (!object->IsA<UStruct>() && !object->IsA<UEnum>())
			continue;

		upackages[object->getSecondPackageName()].push_back(object);
	}
	//reset the counter to 0 as we are using it again but this time really for packages
	finishedPackages = 0;
	totalPackages = upackages.size();
	windows::LogWindow::Log(windows::LogWindow::log_0, "ENGINECORE", "Total packages: %d", totalPackages);



	EngineStructs::Package basicType;
	basicType.index = 0;
	basicType.packageName = "BasicType"; //dont rename!!
	for(auto& struc : customStructs)
	{
		cookMemberArray(struc);
		auto& dataVector = struc.isClass ? basicType.classes : basicType.structs;
		dataVector.push_back(struc);
		packageObjectInfos.insert(std::pair(struc.cppName, ObjectInfo(
			struc.isClass ? ObjectInfo::OI_Class : ObjectInfo::OI_Struct, 
			0, basicType.structs.size() - 1)));
	}
	packages.push_back(basicType);

	//package 0 is reserved for our special defined structs
	int packageIndex = 1;
	for(auto& package: upackages)
	{
		EngineStructs::Package ePackage;
		ePackage.packageName = package.first;
		ePackage.index = packageIndex;
		
		
		for(const auto& object : package.second)
		{
			const bool isClass = object->IsA<UClass>();
			if (!ObjectsManager::operationSuccess())
				return;
			if (isClass || object->IsA<UScriptStruct>())
			{
				auto& dataVector = isClass ? ePackage.classes : ePackage.structs;
				const auto OI_type = isClass ? ObjectInfo::OI_Class : ObjectInfo::OI_Struct;
				const auto naming = isClass ? "Class" : "Struct";

				
				
				//is the struct predefined?
				if(overridingStructs.contains(object->getFullName()))
				{
					windows::LogWindow::Log(windows::LogWindow::log_0, "CORE", "%s %s is predefined!", naming, object->getCName().c_str());
					auto& struc = overridingStructs[object->getFullName()];
					//last check, does the cpp name match?
					if(struc.cppName == object->getCName())
					{
						struc.memoryAddress = reinterpret_cast<uintptr_t>(object->getOwnPointer());

						cookMemberArray(struc);

						dataVector.push_back(struc);
						
						packageObjectInfos.insert(std::pair(object->getCName(),
						                                    ObjectInfo(OI_type, packageIndex, dataVector.size() - 1)));

						auto& functionVec = dataVector.back().functions;
						
						generateFunctions(object->castTo<UStruct>(), functionVec);

						windows::LogWindow::Log(windows::LogWindow::log_0, "CORE", "Total member count: %d | Function count: %d", struc.cookedMembers.size(), functionVec.size());

						for (int i = 0; i < functionVec.size(); i++)
						{
							ePackage.functions.push_back(std::make_tuple(isClass, dataVector.size() - 1, i));
							packageObjectInfos.insert(std::pair(functionVec.at(i).cppName,
								ObjectInfo(ObjectInfo::OI_Function, packageIndex, i)));
						}
						continue;
					}
				}

				if (!ObjectsManager::operationSuccess())
					return;

				windows::LogWindow::Log(windows::LogWindow::log_0, "CORE",
					"Generating %s %s::%s", naming, ePackage.packageName.c_str(), object->getCName().c_str());
				

				const auto sObject = object->castTo<UStruct>();

				if (!generateStructOrClass(sObject, dataVector))
					continue;

				dataVector.back().isClass = isClass;
				//printf("added %s to packageIndex %d (%s), at objectIndex %d!\n", sObject.getCName().c_str(), packageIndex, p.packageName.c_str(), objectIndex);
				packageObjectInfos.insert(std::pair(sObject->getCName(), ObjectInfo(OI_type, packageIndex, dataVector.size() - 1)));

				auto& functionVec = dataVector.back().functions;
				windows::LogWindow::Log(windows::LogWindow::log_0, "CORE", "Total member count: %d | Function count: %d", dataVector.back().cookedMembers.size(), functionVec.size());

				for(int i = 0; i < functionVec.size(); i++)
				{
					ePackage.functions.push_back(std::make_tuple(isClass, dataVector.size() - 1, i));
					packageObjectInfos.insert(std::pair(functionVec.at(i).cppName,
						ObjectInfo(ObjectInfo::OI_Function, packageIndex, i)));
				}
			}
			else if (object->IsA<UEnum>())
			{
				windows::LogWindow::Log(windows::LogWindow::log_0, "CORE", "Generating Enum %s", object->getCName().c_str());
				const auto eObject = object->castTo<UEnum>();
				if (!generateEnum(eObject, ePackage.enums))
					continue;
				//enums do not have CNames
				packageObjectInfos.insert(std::pair(eObject->getName(), ObjectInfo(ObjectInfo::OI_Enum, packageIndex, ePackage.enums.size() - 1)));
			}
		}
		packages.push_back(ePackage);
		finishedPackages++;
		packageIndex++;
	}
	std::ranges::sort(packages, EngineStructs::Package::packageCompare);

	//package.index doesnt match packages[i] so we make a table that stores the "convertion"
	for(int i = 0; i < packages.size(); i++)
	{
		packageIndexes.insert(std::pair(packages[i].index, i));
	}
	
	status = CS_success;
	windows::LogWindow::Log(windows::LogWindow::log_0, "ENGINECORE", "Done generating packets!");
}

std::vector<EngineStructs::Package>& EngineCore::getPackages()
{
	return packages;
}


EngineCore::ObjectInfo EngineCore::getInfoOfObject(const std::string& CName)
{
	//in functions we compare packageIndex and objectIndex anyways so the type doesnt matter
	if(!packageObjectInfos.contains(CName))
		return { ObjectInfo::OI_MAX, -1, -1 };

	return packageObjectInfos[CName];
}

std::pair<std::reference_wrapper<const EngineStructs::Function>, std::reference_wrapper<const EngineStructs::Struct>> EngineCore::getFunctionFromVectorIndex(
	const EngineStructs::Package& package, int functionIndex)
{
	//get the tuple
	const auto& tup = package.functions.at(functionIndex);
	//get the residing class or struct of the function
	const auto& dataVector = std::get<0>(tup) ? package.classes : package.structs;

	const auto& dataStruct = dataVector.at(std::get<1>(tup));

	const auto& func = dataStruct.functions.at(std::get<2>(tup));


	
	return std::make_pair(std::cref(func), std::cref(dataStruct));
}


int EngineCore::getVectorIndexForPackageIndex(const int packageIndex)
{
	if (!packageIndexes.contains(packageIndex))
		return -1;

	return packageIndexes[packageIndex];
}

std::vector<std::string>& EngineCore::getAllUnknownTypes()
{
	//already checked? Well then dont do it again
	if(unknownProperties.size() > 0)
		return unknownProperties;

	for(auto& pack : packages)
	{
		auto checkMembers = [&](const EngineStructs::Struct& struc) mutable
		{
			for (auto& member : struc.definedMembers)
			{
				if (!member.type.clickable || //not clickable? Skip
					packageObjectInfos.contains(member.type.name) || //packageObjectInfos contains the name? Then its defined
					std::ranges::find(unknownProperties, member.type.name) != unknownProperties.end()) //is it already in the vector? Skip
					continue;

				unknownProperties.push_back(member.type.name);
			}
		};

		for(auto& struc : pack.structs)
			checkMembers(struc);
		for (auto& struc : pack.classes)
			checkMembers(struc);
	}
	return unknownProperties;
}

void EngineCore::overrideStruct(EngineStructs::Struct& eStruct)
{
	if(overridingStructs.contains(eStruct.fullName))
		return;

	overridingStructs.insert(std::pair(eStruct.fullName, eStruct));
}

void EngineCore::createStruct(const EngineStructs::Struct& eStruct)
{
	if(std::ranges::find(customStructs, eStruct) != customStructs.end())
		return;

	customStructs.push_back(eStruct);
}

void EngineCore::overrideStructMembers(const EngineStructs::Struct& eStruct)
{
	if (overridingStructMembers.contains(eStruct.fullName))
		return;

	overridingStructMembers.insert(std::pair(eStruct.fullName, eStruct));
}

void EngineCore::runtimeOverrideStructMembers(EngineStructs::Struct* eStruct, const std::vector<EngineStructs::Member>& members)
{
	if (eStruct == nullptr)
		return;
	for(const auto& member : members)
	{
		RUNAddMemberToMemberArray(*eStruct, member);
	}
	cookMemberArray(*eStruct);
}

void EngineCore::saveToDisk(int& progressDone, int& totalProgress)
{
	totalProgress = 1 + FNameCache.size() + packageObjectInfos.size() + packageIndexes.size() + 
		overridingStructs.size() + packages.size() + unknownProperties.size() + customStructs.size() + offsets.size() + 5000;
	progressDone = 0;
	windows::LogWindow::Log(windows::LogWindow::log_2, "ENGINECORE", "Saving to disk...");
	nlohmann::json UEDProject;
	

	UEDProject["EngineSettings"] = EngineSettings::toJson();
	progressDone++;

	nlohmann::json unordered_maps;

	nlohmann::json jFNameCache;
	for (const auto& entry : FNameCache)
		jFNameCache[std::to_string(entry.first)] = entry.second;
	unordered_maps["FNameCache"] = jFNameCache;
	progressDone += FNameCache.size();

	nlohmann::json jPackageObjectInfos;
	for (const auto& entry : packageObjectInfos)
		jPackageObjectInfos[entry.first] = entry.second.toJson();
	unordered_maps["PackageObjectInfos"] = jPackageObjectInfos;
	progressDone += packageObjectInfos.size();

	nlohmann::json jPackageIndexes;
	for (const auto& entry : packageIndexes)
		jPackageIndexes[std::to_string(entry.first)] = entry.second;
	unordered_maps["PackageIndexes"] = jPackageIndexes;
	progressDone += packageIndexes.size();

	nlohmann::json jOverridingStructs;
	for (const auto& entry : overridingStructs)
		jOverridingStructs[entry.first] = entry.second.toJson();
	unordered_maps["OverridingStructs"] = jOverridingStructs;
	progressDone += overridingStructs.size();

	UEDProject["unordered_maps"] = unordered_maps;

	nlohmann::json vectors;

	nlohmann::json jPackages;
	for (const auto& package : packages)
		jPackages.push_back(package.toJson());
	vectors["Packages"] = jPackages;
	progressDone += packages.size();

	nlohmann::json jUnknownProperties = unknownProperties;
	vectors["UnknownProperties"] = jUnknownProperties;
	progressDone += unknownProperties.size();

	// Create JSON for customStructs vector
	nlohmann::json jCustomStructs;
	for (const auto& structObj : customStructs)
		jCustomStructs.push_back(structObj.toJson());
	vectors["CustomStructs"] = jCustomStructs;
	progressDone += customStructs.size();

	// Create JSON for offsets vector
	nlohmann::json jOffsets;
	for (const auto& offset : offsets)
		jOffsets.push_back(offset.toJson());
	vectors["Offsets"] = jOffsets;
	progressDone += offsets.size();

	UEDProject["vectors"] = vectors;

	UEDProject["OpenTabs"] = windows::PackageViewerWindow::getTabsToJson();

	auto dump = UEDProject.dump(-1, ' ', false, nlohmann::detail::error_handler_t::replace);

	size_t paddingBytes = 16 - (dump.length() % 16);
	auto totalBytes = dump.length() + paddingBytes;

	unsigned char* strBytes = static_cast<unsigned char*>(calloc(1, totalBytes));
	std::memcpy(strBytes, dump.data(), dump.length());
	
	//super secret
	const char* key = "UEDumper secret!";

	AES aes(AESKeyLength::AES_128);
	auto c = aes.EncryptECB(strBytes, totalBytes, reinterpret_cast<const unsigned char*>(key));

	
	std::ofstream file(EngineSettings::getWorkingDirectory() / "SaveState.uedproj", std::ios::binary);

	file.write(reinterpret_cast<const char*>(c), totalBytes);
	file.close();

	free(strBytes);
	delete[] c;
	
	windows::LogWindow::Log(windows::LogWindow::log_2, "ENGINECORE", "Saved!");
	progressDone = totalProgress;
}

bool EngineCore::loadProject(const std::string& filepath, int& progressDone, int& totalProgress)
{
	progressDone = 0;
	totalProgress = 11;
	std::ifstream file(filepath, std::ios::binary | std::ios::ate);
	if (!file) {
		windows::LogWindow::Log(windows::LogWindow::log_2, "ENGINECORE", "Error opening file!");
		return false;
	}

	const std::size_t fileSize = file.tellg();
	file.seekg(0, std::ios::beg);

	if(fileSize < 100)
	{
		windows::LogWindow::Log(windows::LogWindow::log_2, "ENGINECORE", "File invalid!");
		return false;
	}

	unsigned char* buffer = static_cast<unsigned char*>(calloc(1, fileSize));
	if (!file.read(reinterpret_cast<char*>(buffer), fileSize))
	{
		windows::LogWindow::Log(windows::LogWindow::log_2, "ENGINECORE", "Failed to read file!");
		free(buffer);
		return false;
	}

	progressDone++;
	//seems like you found the easteregg that i encrypt the project with aes
	const char* key = "UEDumper secret!";

	AES aes(AESKeyLength::AES_128);
	auto c = aes.DecryptECB(buffer, fileSize, reinterpret_cast<const unsigned char*>(key));
	
	free(buffer);

	std::string cmp = "{\"EngineSettings\"";

	if(std::memcmp(c, cmp.c_str(), cmp.length()) != 0)
	{
		windows::LogWindow::Log(windows::LogWindow::log_2, "ENGINECORE", "Wrong decryption key!");
		delete[] c;
		return false;
	}

	const nlohmann::json UEDProject = nlohmann::json::parse(c);

	
	
	delete[] c;



	//now set all enginesettings settings
	const nlohmann::json engineSettings = UEDProject["EngineSettings"];
	
	if (!EngineSettings::loadJson(engineSettings))
		return false;

	progressDone++;

	const nlohmann::json unordered_maps = UEDProject["unordered_maps"];

	if (!unordered_maps.contains("FNameCache") ||
		!unordered_maps.contains("PackageObjectInfos") ||
		!unordered_maps.contains("PackageIndexes") ||
		!unordered_maps.contains("OverridingStructs"))
	{
		windows::LogWindow::Log(windows::LogWindow::log_2, "ENGINECORE", "Project corrupted! (-4)");
		return false;
	}

	nlohmann::json jFNameCache = unordered_maps["FNameCache"];
	for (auto it = jFNameCache.begin(); it != jFNameCache.end(); ++it) {
		FNameCache.insert(std::pair(std::stoi(it.key()), it.value()));
	}

	progressDone++;

	nlohmann::json jPackageObjectInfos = unordered_maps["PackageObjectInfos"];
	for (auto it = jPackageObjectInfos.begin(); it != jPackageObjectInfos.end(); ++it) {
		packageObjectInfos.insert(std::pair(it.key(), ObjectInfo::fromJson(it.value())));
	}

	progressDone++;

	nlohmann::json jPackageIndexes = unordered_maps["PackageIndexes"];
	for (auto it = jPackageIndexes.begin(); it != jPackageIndexes.end(); ++it) {
		packageIndexes.insert(std::pair(std::stoi(it.key()), it.value()));
	}

	progressDone++;

	nlohmann::json jOverridingStructs = unordered_maps["OverridingStructs"];
	for (auto it = jOverridingStructs.begin(); it != jOverridingStructs.end(); ++it) {
		overridingStructs.insert(std::pair(it.key(), EngineStructs::Struct::fromJson(it.value())));
	}

	progressDone++;

	const nlohmann::json vectors = UEDProject["vectors"];

	if (!vectors.contains("Packages") ||
		!vectors.contains("CustomStructs") ||
		!vectors.contains("Offsets"))
	{
		windows::LogWindow::Log(windows::LogWindow::log_2, "ENGINECORE", "Project corrupted! (-5)");
		return false;
	}

	nlohmann::json jPackages = vectors["Packages"];
	for (const nlohmann::json& package : jPackages)
		packages.push_back(EngineStructs::Package::fromJson(package));

	for(auto& package : packages)
	{
		for (auto& struc : package.structs)
			cookMemberArray(struc);
		for (auto& clas : package.classes)
			cookMemberArray(clas);
	}
		

	progressDone++;

	unknownProperties = vectors["UnknownProperties"];

	progressDone++;

	nlohmann::json jCustomStructs = vectors["CustomStructs"];

	for (const nlohmann::json& customStruct : jCustomStructs)
		customStructs.push_back(EngineStructs::Struct::fromJson(customStruct));

	progressDone++;

	nlohmann::json jOffsets = vectors["Offsets"];
	for (const nlohmann::json& offset : jOffsets)
		offsets.push_back(Offset::fromJson(offset));

	progressDone++;

	windows::PackageViewerWindow::loadTabsFromJson(UEDProject["OpenTabs"]);
	progressDone++;

	EngineSettings::setLiveEditor(false);

	progressDone = totalProgress;


	return true;
}


void EngineCore::generateStructDefinitionsFile()
{
	std::ofstream file(EngineSettings::getWorkingDirectory() / "StructDefinitions.txt");
	file << "/// All changes made to structs are dumped here.\n\n" << std::endl;
	

	auto printToFile = [&](const std::unordered_map<std::string, EngineStructs::Struct>& map) mutable
	{
		auto boolToSt = [](bool b)
		{
			return b ? "true" : "false";
		};

		for (const auto& val : map | std::views::values)
		{
			std::string spacing = "    ";
			std::string objectName = "s" + val.cppName;
			file << spacing << "EngineStructs::Struct " << objectName << ";" << std::endl;
			file << spacing << objectName << ".fullName = " << "\"" << val.fullName << "\";" << std::endl;
			file << spacing << objectName << ".cppName = " << "\"" << val.cppName << "\";" << std::endl;
			file << spacing << objectName << ".size = " << val.size << ";" << std::endl;
			file << spacing << objectName << ".inherited = " << boolToSt(val.inherited) << ";" << std::endl;
			file << spacing << objectName << ".isClass = " << boolToSt(val.isClass) << ";" << std::endl;
			file << spacing << objectName << ".members = std::vector<EngineStructs::Member> {" << std::endl;
			for(const auto member : val.cookedMembers)
			{
				auto printFieldType = [&](const fieldType& type) mutable
				{
					file << "{" << boolToSt(type.clickable) << ", " << getStringFromPropertyType(type.propertyType)
						<< ", \"" << type.name << "\"";
				};

				file << spacing << spacing << "{";
				printFieldType(member.type);

				if(member.type.subTypes.size() > 0)
				{
					file << ", std::vector<fieldType>{";
					for(int i = 0; i < member.type.subTypes.size(); i++)
					{
						printFieldType(member.type.subTypes[i]);
						file << "}";
						if (i < member.type.subTypes.size() - 1)
							file << ",";
					}
					file << "}";
				}
				file << "}, \"" << member.name << "\", " << member.offset << ", " << member.size << ", " << boolToSt(member.missed);
				if(member.isBit)
				{
					
					file << ", " << boolToSt(member.isBit) << ", " << (member.bitOffset >= 99 ? member.bitOffset - 99 : member.bitOffset) << ", " << boolToSt(member.userEdited);
				}
				file << "}," << std::endl;
			}
			file << spacing << "};" << std::endl;
			file << spacing << "EngineCore::overrideStructMembers(" << objectName << ");\n\n" << std::endl;
			
		}
	};

	file << "/// overrideStructs\n" << std::endl;
	printToFile(overridingStructs);

	//customstructs is not a unordered map, its a vector. so we create a fake map to use the function above
	std::unordered_map<std::string, EngineStructs::Struct> customStructsMap;
	for(const auto& struc : customStructs)
		customStructsMap.insert(std::pair(struc.fullName, struc));
	file << "/// customStructs\n" << std::endl;
	printToFile(customStructsMap);
	file << "/// overridingStructMembers\n" << std::endl;
	printToFile(overridingStructMembers);
	file.close();
	
}
