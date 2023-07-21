#include "Core.h"

#include "FName_decryption.h"
#include "../UEClasses/UnrealClasses.h"
#include "../Userdefined/StructDefinitions.h"



EngineCore::TypeUObjectArray EngineCore::getTUObject()
{
	return UObjectArray;
}


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


uint64_t EngineCore::getUObjectIndexPtr(int index)
{
	return *reinterpret_cast<uint64_t*>(pGObjectPtrArray + index * 24);
}

#if UE_VERSION >= UE_4_25

uint64_t EngineCore::cacheFField(uint64_t gamePtr)
{
	uint64_t realAddress = pFFieldArray + linkedFFieldIndexCount * UOBJECT_MAX_SIZE;
	Memory::read(reinterpret_cast<void*>(gamePtr), reinterpret_cast<void*>(realAddress), UOBJECT_MAX_SIZE);
	*reinterpret_cast<uint64_t*>(realAddress) = gamePtr;
	linkedFFieldPtrs.insert(std::pair(gamePtr, realAddress));
	linkedFFieldIndexCount++;
	return realAddress;
}


FFieldClass* EngineCore::getFFieldClass(void* gamePtr)
{
	auto ptr = reinterpret_cast<uint64_t>(gamePtr);
	if (linkedFFieldClassPtrs.contains(ptr))
	{
		return reinterpret_cast<FFieldClass*>(linkedFFieldClassPtrs[ptr]);
	}
	//element is not cached, go add it
	uint64_t realAddress = pFFieldClassArray + linkedFFieldClassIndexCount * sizeof(FFieldClass);
	Memory::read(gamePtr, reinterpret_cast<void*>(realAddress), sizeof(FFieldClass));
	*reinterpret_cast<uint64_t*>(realAddress) = ptr;
	linkedFFieldClassPtrs.insert(std::pair(ptr, realAddress));
	linkedFFieldClassIndexCount++;
	return reinterpret_cast<FFieldClass*>(realAddress);
}

#endif

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


void EngineCore::verifyUBigObjectSize(UBigObject* bigObjectPtr, int requiredSize)
{

	if (requiredSize > UOBJECT_MAX_SIZE)
		throw std::runtime_error("required size way too large???");

	if (bigObjectPtr->readSize < requiredSize)
	{
		//the real uobject ptr is actually at the buffer base
		void* UObjectGamePtr = *reinterpret_cast<void**>(bigObjectPtr->object);
		Memory::read(UObjectGamePtr, &bigObjectPtr->object, requiredSize);
		*reinterpret_cast<void**>(bigObjectPtr->object) = UObjectGamePtr;
		bigObjectPtr->readSize = requiredSize;
	}
}

void EngineCore::generateUnknownBitMembers(const int count, const int offset, int& bitOffset, EngineStructs::Struct& eStruct, int* insertPosition)
{
	int _insertPos;
	if (!insertPosition)
		_insertPos = eStruct.members.size();
	else
		_insertPos = *insertPosition;

	//i like to have each bit presented as unknown
	for (int i = 0; i < count; i++)
	{
		//lets see if the user defined that bit
		if (overridingStructMembers.contains(eStruct.fullName))
		{
			bool found = false;
			auto& missingStruct = overridingStructMembers[eStruct.fullName];
			for (auto& missingMember : missingStruct.members)
			{
				if (missingMember.bitOffset >= 99 || //member already used go to next one, we use this as a used flag
					!missingMember.isBit || //no bit? Continue
					missingMember.offset != offset || //wrong offset? Continue
					missingMember.bitOffset != bitOffset) //wrong bitoffset? Continue
					continue;

				EngineStructs::Member userBit;
				userBit.missed = false;
				userBit.userEdited = true;
				userBit.name = missingMember.name;
				userBit.offset = offset;
				userBit.size = 1;
				userBit.type = { false, PropertyType::BoolProperty, TYPE_UCHAR };
				userBit.isBit = true;
				userBit.bitOffset = bitOffset++;
				bitOffset = bitOffset % 8;
				eStruct.members.insert(eStruct.members.begin() + _insertPos++, userBit);
				found = true;
				break; //we found it, no more search needed
			}
			if (found)
				continue;
		}
		EngineStructs::Member unknown;
		unknown.missed = true;
		char name[30];
		sprintf_s(name, "UnknownBit%02d", eStruct.unknownCount++);
		unknown.name = std::string(name);
		unknown.offset = offset;
		unknown.size = 1;
		unknown.type = { false, PropertyType::BoolProperty, TYPE_UCHAR };
		unknown.isBit = true;
		unknown.bitOffset = bitOffset++;
		bitOffset = bitOffset % 8;
		eStruct.members.insert(eStruct.members.begin() + _insertPos++, unknown);
	}
	
	if (insertPosition)
		*insertPosition = _insertPos;
}

void EngineCore::generateUnknownMember(const int fromOffset, const int toOffset, EngineStructs::Struct& eStruct, int* insertPosition)
{
	int _insertPos;
	if (!insertPosition)
		_insertPos = eStruct.members.size();
	else
		_insertPos = *insertPosition;

	EngineStructs::Member unknown;
	unknown.missed = true;
	unknown.size = toOffset - fromOffset;
	char name[30];
	sprintf_s(name, "UnknownData%02d[0x%X]", eStruct.unknownCount++, unknown.size);
	unknown.name = std::string(name);
	unknown.type = { false, PropertyType::BoolProperty, TYPE_UCHAR };
	unknown.offset = fromOffset;
	eStruct.members.insert(eStruct.members.begin() + _insertPos++, unknown);
	if (insertPosition)
		*insertPosition = _insertPos;
}

void EngineCore::findOverrideMember(int newMemberOffset,  int currentOffset, int& currentBitOffset, EngineStructs::Struct& eStruct, int* insertPosition)
{
	if(!overridingStructMembers.contains(eStruct.fullName))
	{
		generateUnknownMember(currentOffset, newMemberOffset, eStruct, insertPosition);
		return;
	}
	int _insertPos;
	if (!insertPosition)
		_insertPos = eStruct.members.size();
	else
		_insertPos = *insertPosition;

	auto& missingStruct = overridingStructMembers[eStruct.fullName];
	int cursorOffset = currentOffset;
	int& cursorBitOffset = currentBitOffset;
	for (auto& missingMember : missingStruct.members)
	{
		if (missingMember.bitOffset >= 99) //member already used go to next one, we use this as a used flag
			continue;

		if (missingMember.offset + missingMember.size > newMemberOffset) //this one is not for this block
			continue;

		if (cursorOffset < missingMember.offset) //seems like theres still some unknown stuff before!
		{
			generateUnknownMember(cursorOffset, missingMember.offset, eStruct, &_insertPos);
			cursorOffset = missingMember.offset;
			cursorBitOffset = 0;
		}
		//set the userEdited flag
		missingMember.userEdited = true;
		//now its our turn for our definition
		if (!missingMember.isBit)
		{
			if (cursorOffset > missingMember.offset) //no this should not happen! Seems like the object before is too large!
			{
				missingMember.bitOffset += 99; //mark this one as used
				continue;
			}
			eStruct.members.insert(eStruct.members.begin() + _insertPos++, missingMember);
			missingMember.bitOffset += 99; //mark this one as used
			cursorOffset += missingMember.size;
			cursorBitOffset = 0;
		}
		else //seems like we have a bit!
		{
			//fix back to right offset
			if (cursorOffset == missingMember.offset) //we actually hit a new bitfield exactly after a previous bitfield! (see why at cursorOffset++ below)
			{
				//if old bitoffset wasnt 8 (and larger than 0, so a real bitfield was there), go one offset back and add unknown bits to fixup
				if (cursorBitOffset < 8 && cursorBitOffset > 0)
					generateUnknownBitMembers(8 - cursorBitOffset, cursorOffset - 1, cursorBitOffset, eStruct, &_insertPos);
				cursorBitOffset = 0; //then reset the offset
			}
			else //mismatch, most likely is missingMember.offset 1 below cursorOffset. -> we are in the same bitfield!
				cursorOffset = missingMember.offset; //correct cursor offset again

			if (missingMember.bitOffset > cursorBitOffset) //do we have some missing bits?
			{
				const int missingBits = missingMember.bitOffset - cursorBitOffset;
				generateUnknownBitMembers(missingBits, cursorOffset, cursorBitOffset, eStruct, &_insertPos);
			}
			//bits are always bool and non clickable
			missingMember.type.clickable = false;
			missingMember.type.propertyType = PropertyType::BoolProperty;
			missingMember.type.name = TYPE_BOOLEAN;
			eStruct.members.insert(eStruct.members.begin() + _insertPos++, missingMember);
			missingMember.bitOffset += 99; //mark this one as used
			cursorBitOffset++;
			cursorOffset++; //we treat the offset like we would be at the end of the bitfield

		}
	}
	if (cursorOffset < newMemberOffset) //in case thres still some rest we have to define
	{
		generateUnknownMember(cursorOffset, newMemberOffset, eStruct, &_insertPos);
	}
	if (insertPosition)
		*insertPosition = _insertPos;
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
		auto super = object->getSuper();
		for(auto& obj: object->getAllSupers())
		{
			//add them to a vector
			eStruct.supers.push_back(obj->getCName());
		}
		eStruct.inherited = true;
		eStruct.inheretedSize = super->PropertiesSize;
	}

	int currentOffset = eStruct.inheretedSize;
	int bitOffset = 0;

	struct prevBitProp
	{
		int offset = -1;
		int bitOffset = -1;
	};

	prevBitProp prevBitField = prevBitProp();

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
			if (child->IsA<UProperty>())
			{
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
				//offset mismatch?
				if (currentOffset < member.offset)
				{
					//maybe the user defined that unknown block
					findOverrideMember(member.offset, currentOffset, bitOffset, eStruct);

					//if the bitoffset is 0 it indicates that the last item was not a bit -> reset prevbitfield
					//otherwise save
					if (bitOffset == 0)
						prevBitField = prevBitProp();
					else
						prevBitField = { currentOffset - 1, bitOffset - 1 }; //-1 because both update and we need to get the item before

					//fix offset
					currentOffset = member.offset + member.size;
				}
				if (type.propertyType == PropertyType::BoolProperty && prop->castTo<UBoolProperty>()->isBitField())
				{
					auto boolProp = child->castTo<UBoolProperty>();

					const auto bitPos = boolProp->getBitPosition(boolProp->ByteMask);

					//does a previous bitfield exist and is the bitbos not 0?
					if (prevBitField.offset == -1 && bitPos > 0)
					{
						generateUnknownBitMembers(bitPos, member.offset, bitOffset, eStruct);
					}
					//bitpos higher than expected?
					else if (prevBitField.offset == member.offset && bitPos > prevBitField.bitOffset + 1)
					{
						generateUnknownBitMembers(bitPos - prevBitField.bitOffset - 1, member.offset, bitOffset, eStruct);
					}
					//member offset 1 larger than expected?
					else if (member.offset > prevBitField.offset && prevBitField.offset != -1)
					{
						//make sure old offset has 8 bits
						generateUnknownBitMembers(8 - prevBitField.bitOffset - 1, prevBitField.offset, bitOffset, eStruct);
						if (bitPos > 0)
							generateUnknownBitMembers(bitPos, member.offset, bitOffset, eStruct);
					}

					prevBitField = { member.offset, bitPos };
					member.isBit = true;
					member.bitOffset = bitOffset++;
					bitOffset = bitOffset % 8;
				}
				else
				{
					//before the last field was a bitfield, check if maybe user defined bits are there too
					if (bitOffset != 0 && overridingStructMembers.contains(eStruct.fullName))
					{
						auto& oStruct = overridingStructMembers[eStruct.fullName];
						for (auto& missingMember : oStruct.members)
						{
							if (missingMember.bitOffset >= 99 || //member already used go to next one, we use this as a used flag
								!missingMember.isBit || //no bit? Continue
								missingMember.offset != (currentOffset - 1)) //wrong offset? Continue
								continue;

							if (missingMember.bitOffset < bitOffset) //already defined
								continue;

							int diff = missingMember.bitOffset - bitOffset;
							if (diff > 0)
								generateUnknownBitMembers(diff, currentOffset - 1, bitOffset, eStruct);
							bitOffset = missingMember.bitOffset;
							missingMember.type.name = TYPE_BOOLEAN;
							eStruct.members.push_back(missingMember);
						}
					}
					prevBitField = prevBitProp();
					bitOffset = 0;
				}

				currentOffset = member.offset + member.size;
				eStruct.members.push_back(member);
			}
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
			if (currentOffset < member.offset)
			{
				//maybe the user defined that unknown block
				findOverrideMember(member.offset, currentOffset, bitOffset, eStruct);

				//if the bitoffset is 0 it indicates that the last item was not a bit -> reset prevbitfield
				//otherwise save
				if(bitOffset == 0)
					prevBitField = prevBitProp();
				else
					prevBitField = { currentOffset - 1, bitOffset - 1 }; //-1 because both update and we need to get the item before

				//fix offset
				currentOffset = member.offset + member.size;
			}

			if(type.propertyType == PropertyType::BoolProperty && child->castTo<FBoolProperty>()->isBitField())
			{
				auto boolProp = child->castTo<FBoolProperty>();

				const auto bitPos = boolProp->getBitPosition(boolProp->ByteMask);

				//does a previous bitfield exist and is the bitbos not 0?
				if(prevBitField.offset == -1 && bitPos > 0)
				{
					generateUnknownBitMembers(bitPos, member.offset, bitOffset, eStruct);
				}
				//bitpos higher than expected?
				else if(prevBitField.offset == member.offset && bitPos > prevBitField.bitOffset + 1)
				{
					generateUnknownBitMembers(bitPos - prevBitField.bitOffset - 1, member.offset, bitOffset, eStruct);
				}
				//member offset 1 larger than expected?
				else if (member.offset > prevBitField.offset && prevBitField.offset != -1)
				{
					//make sure old offset has 8 bits
					generateUnknownBitMembers(8 - prevBitField.bitOffset - 1, prevBitField.offset, bitOffset, eStruct);
					if(bitPos > 0)
						generateUnknownBitMembers(bitPos, member.offset, bitOffset, eStruct);
				}

				prevBitField = { member.offset, bitPos};
				member.isBit = true;
				member.bitOffset = bitOffset++;
				bitOffset = bitOffset % 8;
			}
			else
			{
				//before the last field was a bitfield, check if maybe user defined bits are there too
				if(bitOffset != 0 && overridingStructMembers.contains(eStruct.fullName)) 
				{
					auto& oStruct = overridingStructMembers[eStruct.fullName];
					for (auto& missingMember : oStruct.members)
					{
						if (missingMember.bitOffset >= 99 || //member already used go to next one, we use this as a used flag
							!missingMember.isBit || //no bit? Continue
							missingMember.offset != (currentOffset - 1)) //wrong offset? Continue
							continue;

						if (missingMember.bitOffset < bitOffset) //already defined
							continue;

						int diff = missingMember.bitOffset - bitOffset;
						if (diff > 0)
							generateUnknownBitMembers(diff, currentOffset - 1, bitOffset, eStruct);
						bitOffset = missingMember.bitOffset;
						missingMember.type.name = TYPE_BOOLEAN;
						eStruct.members.push_back(missingMember);
					}
				}
				prevBitField = prevBitProp();
				bitOffset = 0;
				
			}
			currentOffset = member.offset + member.size;
			eStruct.members.push_back(member);
		}


	}
#endif
	//fixup 
	if (currentOffset < eStruct.size)
	{
		findOverrideMember(eStruct.size, currentOffset, bitOffset, eStruct);
		//generateUnknownMember(currentOffset, eStruct.size, unknownCount, eStruct);
	}

	// get struct functions
	generateFunctions(object, eStruct.functions);

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
	if (!fieldChild->IsA<UFunction>())
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

		const auto UObjectAddr = getOffsetAddress(getOffsetForName("OFFSET_GOBJECTS"));
		if (!UObjectAddr)
		{
			windows::LogWindow::Log(windows::LogWindow::log_2, "ENGINECORE", "UObjectAddress offset not found!");
			return;
		}
		UObjectArray = Memory::read<TypeUObjectArray>(UObjectAddr);

		windows::LogWindow::Log(windows::LogWindow::log_0, "ENGINECORE", "TUObject -> 0x%p", UObjectArray.Objects);
		windows::LogWindow::Log(windows::LogWindow::log_0, "ENGINECORE", "TUObject elements: %d", UObjectArray.NumElements);

#if UE_VERSION >= UE_4_25
		//allocating a large enough buffer for all FFields using uobject size because that should be big enough
		pFFieldArray = reinterpret_cast<uint64_t>(calloc(1, FFIELD_CT * UOBJECT_MAX_SIZE));

		pFFieldClassArray = reinterpret_cast<uint64_t>(calloc(1, FFIELD_CLASSES_CT * sizeof(FFieldClass)));

#endif
		
		if (!UObjectArray.Objects || !UObjectArray.NumElements)
		{
			windows::LogWindow::Log(windows::LogWindow::log_2, "ENGINECORE", "UObjectArray seems empty!");
			bSuccess = false;
			return;
		}
		loaded = true;
	}
	
	bSuccess = true;
	
}


bool EngineCore::lastOperationSuccess()
{
	return bSuccess;
}


bool EngineCore::existsRealPtr(uint64_t UObjectPtr)
{
	const bool exists = linkedUObjectPtrs.contains(UObjectPtr);
	if (!exists)
	{
		windows::LogWindow::Log(windows::LogWindow::log_2, "ENGINECORE", "ERROR! Could not find ptr in linkedUObjectPtrs %llX!", UObjectPtr);
		printf("ERROR! Could not find ptr in linkedUObjectPtrs %llX!\n", UObjectPtr);
		//DebugBreak(); <- add for debugging purposes!
		return false;
	}

	return true;
}


void EngineCore::copyGObjectPtrs(int64_t& finishedBytes, int64_t& totalBytes, CopyStatus& status)
{
	bSuccess = false;
	status = CS_busy;
	finishedBytes = 0;
	totalBytes = UObjectArray.NumElements * 24;
	pGObjectPtrArray = reinterpret_cast<uint64_t>(calloc(1, totalBytes));
	windows::LogWindow::Log(windows::LogWindow::log_0, "ENGINECORE", "Allocating 0x%p bytes of memory for GObjectPtrArray at 0x%p", totalBytes, pGObjectPtrArray);
	if(!pGObjectPtrArray)
	{
		status = CS_error;
		windows::LogWindow::Log(windows::LogWindow::log_2, "ENGINECORE", "Failed to allocate memory for GObjectPtrArray!");
		return;
	}
	

#if UE_VERSION < UE_4_20
	//no chunks
	const uint64_t objectArrayStart = reinterpret_cast<uint64_t>(UObjectArray.Objects);

	while (finishedBytes + 0x100 < totalBytes)
	{
		Memory::read(reinterpret_cast<void*>(objectArrayStart + finishedBytes), reinterpret_cast<void*>(pGObjectPtrArray + finishedBytes), 0x100);
		finishedBytes += 0x100;
	}
	const auto reminingBytes = totalBytes - finishedBytes;
	Memory::read(reinterpret_cast<void*>(objectArrayStart + finishedBytes), reinterpret_cast<void*>(pGObjectPtrArray + finishedBytes), reminingBytes);
	finishedBytes += reminingBytes;
	
#else
	//chunks apperared
#if UE_VERSION == UE_4_20
	constexpr auto numElementsPerChunk = 65 * 1024;
#else
	constexpr auto numElementsPerChunk = 64 * 1024;
#endif
	
	constexpr auto chunkBytesSize = numElementsPerChunk * 24;
	for(int i = 0; i < UObjectArray.NumChunks; i++)
	{
		//chunks are in objects* 
		const auto chunkStart = Memory::read<uint64_t>(reinterpret_cast<uint64_t>(UObjectArray.Objects) + i * 8);
		auto chunkBytesRead = 0;
		printf("chunk %i from %llX to %llX\n", i, chunkStart, chunkStart + chunkBytesSize);
		//256 bytes is good enough, a full chunk would take 6144 reads.
		//if the cunk is only half full, we got the code below. totalBytes calculates the bytes for all existing elements
		while(finishedBytes + 0x100 < totalBytes && chunkBytesRead < chunkBytesSize)
		{
			Memory::read(reinterpret_cast<void*>(chunkStart + chunkBytesRead), reinterpret_cast<void*>(pGObjectPtrArray + finishedBytes), 0x100);
			chunkBytesRead += 0x100;
			finishedBytes += 0x100;
		}
		//fixup the remaining bytes, should only apply for the latest elements in chunk X
		if(finishedBytes + 0x100 > totalBytes && totalBytes - finishedBytes > 0)
		{
			const auto reminingBytes = totalBytes - finishedBytes;
			Memory::read(reinterpret_cast<void*>(chunkStart + chunkBytesRead), reinterpret_cast<void*>(pGObjectPtrArray + finishedBytes), reminingBytes);
			finishedBytes += reminingBytes;
		}
	}

#endif

	status = CS_success;
	windows::LogWindow::Log(windows::LogWindow::log_0, "ENGINECORE", "Loaded GObjectPtrArray succesfully!");

	bSuccess = true;
}

void EngineCore::copyUBigObjects(int64_t& finishedBytes, int64_t& totalBytes, CopyStatus& status)
{
	bSuccess = false;
	finishedBytes = 0;
	//only read UObjects atm
	totalBytes = UObjectArray.NumElements * sizeof(UObject);
	const auto allocatedBytes = UObjectArray.NumElements * sizeof(UBigObject);
	status = CS_busy;
	//allocate UOBJECT_MAX_SIZE bytes for every UObject
	pUBigObjectArray = reinterpret_cast<uint64_t>(calloc(1, allocatedBytes));
	windows::LogWindow::Log(windows::LogWindow::log_0, "ENGINECORE", "Allocating 0x%llX bytes of memory for UBigObjectArray at 0x%p", totalBytes, pUBigObjectArray);

	if (!pUBigObjectArray)
	{
		status = CS_error;
		
		windows::LogWindow::Log(windows::LogWindow::log_2, "ENGINECORE", "Failed to allocate memory for UBigObjectArray!");
		return;
	}
	

	//go through each element
	for(int32_t i = 0; i < UObjectArray.NumElements; i++)
	{
		//get the real UObject address
		uint64_t UObjectAddress = *reinterpret_cast<uint64_t*>(pGObjectPtrArray + i * 24);
		//this happens quite often, those objects just got deleted
		//the array is like a block of cheese with holes
		if (!UObjectAddress) {
			windows::LogWindow::Log(windows::LogWindow::log_1, "ENGINECORE", "Could not resolve address for obect %d!", i);
		}
		else {
			//gets the memory address where the objects gonna be
			UBigObject* newBigObject = reinterpret_cast<UBigObject*>(pUBigObjectArray + i * sizeof(UBigObject));
			newBigObject->readSize = sizeof(UObject);
			//read the UObject inside the buffer with UOBJECT_MAX_SIZE bytes size
			Memory::read(reinterpret_cast<void*>(UObjectAddress), newBigObject->object, sizeof(UObject));

			//these are all UObjects. We just override the VTABLE with the UObjectAddress (look at UnrealClasses.h)
			*reinterpret_cast<uint64_t*>(newBigObject->object) = UObjectAddress;

			//link the list to the ptr
			linkedUObjectPtrs.insert(std::pair(UObjectAddress, newBigObject));
		}

		finishedBytes += sizeof(UObject);
	}
	status = CS_success;
	windows::LogWindow::Log(windows::LogWindow::log_0, "ENGINECORE", "Loaded UBigObjectArray succesfully!");
	bSuccess = true;
}


void EngineCore::cacheFNames(int64_t& finishedNames, int64_t& totalNames, CopyStatus& status)
{
	windows::LogWindow::Log(windows::LogWindow::log_0, "ENGINECORE", "Caching FNames...");
	status = CS_busy;
	totalNames = UObjectArray.NumElements;
	finishedNames = 0;
	for (; finishedNames < UObjectArray.NumElements; finishedNames++)
	{
		const auto object = getUObjectIndex<UObject>(finishedNames);
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
	totalPackages = UObjectArray.NumElements;
	finishedPackages = 0;

	windows::LogWindow::Log(windows::LogWindow::log_0, "ENGINECORE", "reading overriding structs....");
	overrideStructs();
	windows::LogWindow::Log(windows::LogWindow::log_0, "ENGINECORE", "adding custom structs....");
	addStructs();
	windows::LogWindow::Log(windows::LogWindow::log_0, "ENGINECORE", "adding overrigind unknown members....");
	overrideUnknownMembers();
	
	for (; finishedPackages < UObjectArray.NumElements; finishedPackages++)
	{
		auto object = getUObjectIndex<UObject>(finishedPackages);
		
		
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

						dataVector.push_back(struc);
						
						packageObjectInfos.insert(std::pair(object->getCName(),
						                                    ObjectInfo(OI_type, packageIndex, dataVector.size() - 1)));

						auto& functionVec = dataVector.back().functions;
						
						generateFunctions(object->castTo<UStruct>(), functionVec);

						windows::LogWindow::Log(windows::LogWindow::log_0, "CORE", "Member count: %d | Function count: %d", struc.members.size(), functionVec.size());

						for (int i = 0; i < functionVec.size(); i++)
						{
							ePackage.functions.push_back(std::make_tuple(isClass, dataVector.size() - 1, i));
							packageObjectInfos.insert(std::pair(functionVec.at(i).cppName,
								ObjectInfo(ObjectInfo::OI_Function, packageIndex, i)));
						}
						continue;
					}
				}

				windows::LogWindow::Log(windows::LogWindow::log_0, "CORE",
					"Generating %s %s::%s", naming, ePackage.packageName.c_str(), object->getCName().c_str());
				

				const auto sObject = object->castTo<UStruct>();

				if (!generateStructOrClass(sObject, dataVector))
					continue;

				dataVector.back().isClass = isClass;
				//printf("added %s to packageIndex %d (%s), at objectIndex %d!\n", sObject.getCName().c_str(), packageIndex, p.packageName.c_str(), objectIndex);
				packageObjectInfos.insert(std::pair(sObject->getCName(), ObjectInfo(OI_type, packageIndex, dataVector.size() - 1)));

				auto& functionVec = dataVector.back().functions;
				windows::LogWindow::Log(windows::LogWindow::log_0, "CORE", "Member count: %d | Function count: %d", dataVector.back().members.size(), functionVec.size());

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
			for (auto& member : struc.members)
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

void EngineCore::runtimeOverrideStructMembers(EngineStructs::Struct* eStruct, std::vector<EngineStructs::Member> members, int index)
{
	bool success = false;
	//if theres a overriding struct, insert the data into there (we have to do this when we save any changes)
	if(overridingStructMembers.contains(eStruct->fullName))
	{
		auto& struc = overridingStructMembers[eStruct->fullName];
		int largestOffset = 0;
		bool found = false;
		for(int i = 0; i < struc.members.size(); i++)
		{
			const auto& member = struc.members[i];
			largestOffset = member.offset;
			//check the next block in the array
			if(member.offset > members[0].offset && //check if the member.offset if above -> add new vector below
				member.offset >= members[members.size() - 1].offset + members[members.size() - 1].size) //check if the offset is >= our last item
			{
				//after all this is confirmed, we add our shit below the last item
				found = true;
				struc.members.insert(struc.members.begin() + i, members.begin(), members.end());
				success = true;
				break;
			}
			//looks like we added a block before and now we try to replace it
			if(member.offset <= members[0].offset && member.offset + member.size >= members[members.size() - 1].offset + members[members.size() - 1].size)
			{
				//remove it
				struc.members.erase(struc.members.begin() + i);
				//add our members
				struc.members.insert(struc.members.begin() + i, members.begin(), members.end());
				success = true;
				break;

			}
		}
		//or add it at the last position
		if(largestOffset < members[0].offset && !found)
		{
			struc.members.insert(struc.members.end(), members.begin(), members.end());
			success = true;
		}
	}
	else
	{
		//copy struct
		EngineStructs::Struct overrideStruc = *eStruct;
		//but override members with members we added
		overrideStruc.members = members;
		overridingStructMembers.insert(std::pair(eStruct->fullName, overrideStruc));
		success = true;
	}
	if(success)
	{
		const EngineStructs::Member unknownBlock = eStruct->members[index];

		eStruct->members.erase(eStruct->members.begin() + index);
		int bitOffset = 0;
		findOverrideMember(unknownBlock.offset + unknownBlock.size, unknownBlock.offset, bitOffset, *eStruct, &index);
	}

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
	totalProgress = 1;
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

	totalProgress = 9;
	
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
			for(const auto member : val.members)
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
