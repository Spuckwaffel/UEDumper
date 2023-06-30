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
std::string EngineCore::FNameToString(FName fname)
{
	if(FNameCache.contains(fname.ComparisonIndex))
	{
		return FNameCache[fname.ComparisonIndex];
	}
	char name[1024] = { 0 };
	

	//unreal engine 4.19 fname read function
#if UE_VERSION < UE_4_25
	const auto FNameEntry = Memory::read<uint64_t>(Memory::read<uint64_t>(gNames + 8 * (fname.ComparisonIndex / 0x4000) + GNAMES_POOL_OFFSET) + 8 * (fname.ComparisonIndex % 0x4000));

	//ffinding the real namelength in < 25 is a bit difficult
	constexpr auto nameLength = sizeof(name) - 2;

	Memory::read(reinterpret_cast<void*>(FNameEntry + 16), name, nameLength);

	
#else
	//>4.25 chunks exist
	const unsigned int chunkOffset = fname.ComparisonIndex >> 16;
	const unsigned short nameOffset = fname.ComparisonIndex;

#endif
	//calculation does not use the gnames pointer, rather the real offset
	//calculation should be the same for every game
#if UE_VERSION >= UE_4_25
	
	//average function since 4.25

	uint64_t namePoolChunk = Memory::read<uint64_t>(gNames + 8 * (chunkOffset + 2)) + 2 * nameOffset;

	uint16_t pool = Memory::read<uint16_t>(namePoolChunk);

	const auto nameLength = pool >> 6;

	Memory::read(reinterpret_cast<void*>(namePoolChunk + 2), name, nameLength);
#endif

#if USE_FNAME_ENCRYPTION
	//decrypt the FNames buffer
	fname_decrypt(name, nameLength);
#endif
	

	std::string finalName = std::string(name);

	FNameCache.insert(std::pair(fname.ComparisonIndex, finalName));

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

bool EngineCore::generateStruct(UStruct* object, std::vector<EngineStructs::Struct>& data)
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

#if UE_VERSION < UE_4_25
	if(object->Children)
	{
		
		for (auto child = object->getChildren(); child; child = child->GetNext())
		{
			if (child->IsA<UProperty>())
			{
				auto prop = child->castTo<UProperty>();
				EngineStructs::Member member;
				member.size = prop->ElementSize * prop->ArrayDim;
				member.name = prop->getName();
				//should not happen
				if (member.size == 0)
				{
					windows::LogWindow::Log(windows::LogWindow::log_3, "CORE", "member %s size is 0! ", member.name.c_str());
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
			member.name = child->getName();
			if (member.size == 0)
			{
				windows::LogWindow::Log(windows::LogWindow::log_3, "CORE", "member %s size is 0! ", member.name.c_str());
				//DebugBreak();
				continue;
			}
			auto type = child->getType();
			member.type = type;

			member.offset = child->getOffset();
			if(type.propertyType == PropertyType::Unknown)
			{
				windows::LogWindow::Log(windows::LogWindow::log_1, "CORE", "Struct %s: %s at 0x%p is unknown prop! Missing support?", object->getCName().c_str(), member.name.c_str(), member.offset);
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

EngineCore::EngineCore()
{
	static bool loaded = false;

	

	bSuccess = false;
	if(!loaded)
	{
		windows::LogWindow::Log(windows::LogWindow::log_4, "ENGINECORE", "Loading core...");

		offsets = setOffsets();

		
		gNames = getOffsetAddress(getOffsetForName("OFFSET_GNAMES"));
		if(!gNames)
		{
			windows::LogWindow::Log(windows::LogWindow::log_3, "ENGINECORE", "GNames offset not found!");
			return;
		}

#if UE_VERSION < UE_4_25

		//in < 4.25 we have to get the heap pointer
		gNames = Memory::read<uint64_t>(gNames);
		windows::LogWindow::Log(windows::LogWindow::log_4, "ENGINECORE", "GNames -> 0x%p", gNames);
		if (!gNames)
		{
			windows::LogWindow::Log(windows::LogWindow::log_4, "ENGINECORE", "GNames offset seems zero!");
			return;
		}
#endif

		const auto UObjectAddr = getOffsetAddress(getOffsetForName("OFFSET_GOBJECTS"));
		if (!UObjectAddr)
		{
			windows::LogWindow::Log(windows::LogWindow::log_3, "ENGINECORE", "UObjectAddress offset not found!");
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
			windows::LogWindow::Log(windows::LogWindow::log_3, "ENGINECORE", "UObjectArray seems empty!");
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
		windows::LogWindow::Log(windows::LogWindow::log_3, "ENGINECORE", "ERROR! Could not find ptr in linkedUObjectPtrs %llX!", UObjectPtr);
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
		windows::LogWindow::Log(windows::LogWindow::log_3, "ENGINECORE", "Failed to allocate memory for GObjectPtrArray!");
		return;
	}
	

#if UE_VERSION < UE_4_25
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
	constexpr auto numElementsPerChunk = 64 * 1024;
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
		
		windows::LogWindow::Log(windows::LogWindow::log_3, "ENGINECORE", "Failed to allocate memory for UBigObjectArray!");
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
	basicType.itemCount = 0;
	basicType.packageName = "BasicType"; //dont rename!!
	for(auto& struc : customStructs)
	{
		basicType.structs.push_back(struc);
		basicType.itemCount++;
		packageObjectInfos.insert(std::pair(struc.cppName, ObjectInfo(true, 0, basicType.structs.size() - 1)));
	}
	packages.push_back(basicType);

	//package 0 is reserved for our special defined structs
	int packageIndex = 1;
	for(auto& package: upackages)
	{
		EngineStructs::Package p;
		p.packageName = package.first;
		p.index = packageIndex;
		
		
		for(const auto& object : package.second)
		{
			const bool isClass = object->IsA<UClass>();
			if (isClass || object->IsA<UScriptStruct>())
			{
				//is the struct predefined?
				if(overridingStructs.contains(object->getFullName()))
				{
					auto& struc = overridingStructs[object->getFullName()];
					//last check, does the cpp name match?
					if(struc.cppName == object->getCName())
					{
						struc.memoryAddress = reinterpret_cast<uintptr_t>(object->getOwnPointer());
						p.structs.push_back(struc);
						packageObjectInfos.insert(std::pair(object->getCName(),
						                                    ObjectInfo(true, packageIndex, p.structs.size() - 1)));
						continue;
					}
				}
				const auto sObject = object->castTo<UStruct>();
				if (!generateStruct(sObject, p.structs))
					continue;

				p.structs[p.structs.size() - 1].isClass = isClass;
				//printf("added %s to packageIndex %d (%s), at objectIndex %d!\n", sObject.getCName().c_str(), packageIndex, p.packageName.c_str(), objectIndex);
				packageObjectInfos.insert(std::pair(sObject->getCName(), ObjectInfo(true, packageIndex, p.structs.size() - 1)));

			}
			else if (object->IsA<UEnum>())
			{
				const auto eObject = object->castTo<UEnum>();
				if (!generateEnum(eObject, p.enums))
					continue;
				//enums do not have CNames
				packageObjectInfos.insert(std::pair(eObject->getName(), ObjectInfo(false, packageIndex, p.enums.size() - 1)));
			}
			
		}
		p.itemCount = p.structs.size() + p.enums.size();
		packages.push_back(p);
		finishedPackages++;
		packageIndex++;
	}
	std::ranges::sort(packages, EngineStructs::Package::packageCompare);

	//package.index doesnt match packages[i] so we make a table that stores the "convertion"
	for(int i = 0; i < packages.size(); i++)
	{
		packageIndexes.insert(std::pair(packages[i].index, i));
	}

	//free(reinterpret_cast<void*>(pGObjectPtrArray));
	//free(reinterpret_cast<void*>(pUBigObjectArray));

#if UE_VERSION >= UE_4_25
	//free((void*)pFFieldArray);
	//free((void*)pFFieldClassArray);
#endif

	status = CS_success;
	windows::LogWindow::Log(windows::LogWindow::log_0, "ENGINECORE", "Done generating packets!");
}

std::vector<EngineStructs::Package>& EngineCore::getPackages()
{
	return packages;
}

EngineCore::ObjectInfo EngineCore::getInfoOfObject(const std::string& CName)
{
	if(!packageObjectInfos.contains(CName))
		return { true, -1, -1 };

	return packageObjectInfos[CName];
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
		for(auto& struc : pack.structs)
		{
			for(auto& member : struc.members)
			{
				if(!member.type.clickable || //not clickable? Skip
					packageObjectInfos.contains(member.type.name) || //packageObjectInfos contains the name? Then its defined
					std::ranges::find(unknownProperties, member.type.name) != unknownProperties.end()) //is it already in the vector? Skip
					continue;

				unknownProperties.push_back(member.type.name);
			}
		}
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

void EngineCore::saveToDisk()
{
	windows::LogWindow::Log(windows::LogWindow::log_4, "ENGINECORE", "Saving to disk...");
	nlohmann::json UEDProject;
	nlohmann::json UEDefinitions;
	UEDefinitions["UE_VERSION"] = EngineSettings::_UE_VERSION;
	UEDefinitions["USE_FNAME_ENCRYPTION"] = EngineSettings::_USE_FNAME_ENCRYPTION;
	UEDefinitions["WITH_CASE_PRESERVING_NAME"] = EngineSettings::_WITH_CASE_PRESERVING_NAME;

#if UE_VERSION < UE_4_25
	UEDefinitions["GNAMES_POOL_OFFSET"] = EngineSettings::_GNAMES_POOL_OFFSET;
#endif
#if UE_VERSION > UE_5_00
	UEDefinitions["UE_FNAME_OUTLINE_NUMBER"] = EngineSettings::_UE_FNAME_OUTLINE_NUMBER;
#endif

	UEDefinitions["UE_BLUEPRINT_EVENTGRAPH_FASTCALLS"] = EngineSettings::_UE_BLUEPRINT_EVENTGRAPH_FASTCALLS;

#if UE_VERSION >= UE_5_00
	UEDefinitions["WITH_LIVE_CODING"] = EngineSettings::_WITH_LIVE_CODING;
#endif

#if UE_VERSION >= UE_4_25
	UEDefinitions["USTRUCT_FAST_ISCHILDOF_IMPL"] = EngineSettings::_USTRUCT_FAST_ISCHILDOF_IMPL;
#endif

	UEDProject["UEDefinitions"] = UEDefinitions;
	

	UEDProject["EngineSettings"] = EngineSettings::toJson();

	nlohmann::json unordered_maps;

	nlohmann::json jFNameCache;
	for (const auto& entry : FNameCache)
		jFNameCache[std::to_string(entry.first)] = entry.second;
	unordered_maps["FNameCache"] = jFNameCache;

	nlohmann::json jPackageObjectInfos;
	for (const auto& entry : packageObjectInfos)
		jPackageObjectInfos[entry.first] = entry.second.toJson();
	unordered_maps["PackageObjectInfos"] = jPackageObjectInfos;

	nlohmann::json jPackageIndexes;
	for (const auto& entry : packageIndexes)
		jPackageIndexes[std::to_string(entry.first)] = entry.second;
	unordered_maps["PackageIndexes"] = jPackageIndexes;

	nlohmann::json jOverridingStructs;
	for (const auto& entry : overridingStructs)
		jOverridingStructs[entry.first] = entry.second.toJson();
	unordered_maps["OverridingStructs"] = jOverridingStructs;

	UEDProject["unordered_maps"] = unordered_maps;

	nlohmann::json vectors;

	nlohmann::json jPackages;
	for (const auto& package : packages)
		jPackages.push_back(package.toJson());
	vectors["Packages"] = jPackages;

	nlohmann::json jUnknownProperties = unknownProperties;
	vectors["UnknownProperties"] = jUnknownProperties;

	// Create JSON for customStructs vector
	nlohmann::json jCustomStructs;
	for (const auto& structObj : customStructs)
		jCustomStructs.push_back(structObj.toJson());
	vectors["CustomStructs"] = jCustomStructs;

	// Create JSON for offsets vector
	nlohmann::json jOffsets;
	for (const auto& offset : offsets)
		jOffsets.push_back(offset.toJson());
	vectors["Offsets"] = jOffsets;

	UEDProject["vectors"] = vectors;

	

	auto dump = UEDProject.dump();

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

	windows::LogWindow::Log(windows::LogWindow::log_4, "ENGINECORE", "Saved!");
}

bool EngineCore::loadProject(const std::string& filepath)
{
	std::ifstream file(filepath, std::ios::binary | std::ios::ate);
	if (!file) {
		windows::LogWindow::Log(windows::LogWindow::log_4, "ENGINECORE", "Error opening file!");
		return false;
	}

	const std::size_t fileSize = file.tellg();
	file.seekg(0, std::ios::beg);

	if(fileSize < 100)
	{
		windows::LogWindow::Log(windows::LogWindow::log_4, "ENGINECORE", "File invalid!");
		return false;
	}

	unsigned char* buffer = static_cast<unsigned char*>(calloc(1, fileSize));
	if (!file.read(reinterpret_cast<char*>(buffer), fileSize))
	{
		windows::LogWindow::Log(windows::LogWindow::log_4, "ENGINECORE", "Failed to read file!");
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
		windows::LogWindow::Log(windows::LogWindow::log_4, "ENGINECORE", "Wrong decryption key!");
		delete[] c;
		return false;
	}

	const nlohmann::json UEDProject = nlohmann::json::parse(c);

	delete[] c;

	if (!UEDProject.contains("UEDefinitions") ||
		!UEDProject.contains("EngineSettings") || 
		!UEDProject.contains("vectors") || 
		!UEDProject.contains("unordered_maps"))
	{
		windows::LogWindow::Log(windows::LogWindow::log_4, "ENGINECORE", "Project corrupted! (-1)");
		return false;
	}

	//check and set all uedefinitions

	const nlohmann::json UEDefinitions = UEDProject["UEDefinitions"];

	//all ue versions
	if (!UEDefinitions.contains("UE_VERSION") || 
		!UEDefinitions.contains("USE_FNAME_ENCRYPTION") ||
		!UEDefinitions.contains("WITH_CASE_PRESERVING_NAME") ||
		!UEDefinitions.contains("UE_BLUEPRINT_EVENTGRAPH_FASTCALLS"))
		
	{
		windows::LogWindow::Log(windows::LogWindow::log_4, "ENGINECORE", "Project corrupted! (-2)");
		return false;
	}

	EngineSettings::_UE_VERSION = UEDefinitions["UE_VERSION"];
	
	if(EngineSettings::_UE_VERSION < UE_4_25 && !UEDefinitions.contains("GNAMES_POOL_OFFSET"))
	{
		windows::LogWindow::Log(windows::LogWindow::log_4, "ENGINECORE", "Project corrupted! (-3)");
	}
	else if (EngineSettings::_UE_VERSION > UE_5_00 && !UEDefinitions.contains("UE_FNAME_OUTLINE_NUMBER"))
	{
		windows::LogWindow::Log(windows::LogWindow::log_4, "ENGINECORE", "Project corrupted! (-3)");
	}
	else if (EngineSettings::_UE_VERSION >= UE_5_00 && !UEDefinitions.contains("WITH_LIVE_CODING"))
	{
		windows::LogWindow::Log(windows::LogWindow::log_4, "ENGINECORE", "Project corrupted! (-3)");
	}
	else if (EngineSettings::_UE_VERSION >= UE_4_25 && !UEDefinitions.contains("USTRUCT_FAST_ISCHILDOF_IMPL"))
	{
		windows::LogWindow::Log(windows::LogWindow::log_4, "ENGINECORE", "Project corrupted! (-3)");
	}

	EngineSettings::_USE_FNAME_ENCRYPTION = UEDefinitions["USE_FNAME_ENCRYPTION"];
	EngineSettings::_WITH_CASE_PRESERVING_NAME = UEDefinitions["WITH_CASE_PRESERVING_NAME"];

	if(EngineSettings::_UE_VERSION < UE_4_25)
		EngineSettings::_GNAMES_POOL_OFFSET = UEDefinitions["GNAMES_POOL_OFFSET"];
	if (EngineSettings::_UE_VERSION > UE_5_00)
		EngineSettings::_UE_FNAME_OUTLINE_NUMBER = UEDefinitions["UE_FNAME_OUTLINE_NUMBER"];

	EngineSettings::_UE_BLUEPRINT_EVENTGRAPH_FASTCALLS = UEDefinitions["UE_BLUEPRINT_EVENTGRAPH_FASTCALLS"];

	if (EngineSettings::_UE_VERSION >= UE_5_00)
		EngineSettings::_WITH_LIVE_CODING = UEDefinitions["WITH_LIVE_CODING"];

	if (EngineSettings::_UE_VERSION >= UE_4_25)
		EngineSettings::_USTRUCT_FAST_ISCHILDOF_IMPL = UEDefinitions["USTRUCT_FAST_ISCHILDOF_IMPL"];

	//now set all enginesettings settings
	const nlohmann::json engineSettings = UEDProject["EngineSettings"];
	
	if (!EngineSettings::loadJson(engineSettings))
		return false;

	const nlohmann::json unordered_maps = UEDProject["unordered_maps"];

	if (!unordered_maps.contains("FNameCache") ||
		!unordered_maps.contains("PackageObjectInfos") ||
		!unordered_maps.contains("PackageIndexes") ||
		!unordered_maps.contains("OverridingStructs"))
	{
		windows::LogWindow::Log(windows::LogWindow::log_4, "ENGINECORE", "Project corrupted! (-4)");
		return false;
	}

	nlohmann::json jFNameCache = unordered_maps["FNameCache"];
	for (auto it = jFNameCache.begin(); it != jFNameCache.end(); ++it) {
		FNameCache.insert(std::pair(std::stoi(it.key()), it.value()));
	}

	nlohmann::json jPackageObjectInfos = unordered_maps["PackageObjectInfos"];
	for (auto it = jPackageObjectInfos.begin(); it != jPackageObjectInfos.end(); ++it) {
		packageObjectInfos.insert(std::pair(it.key(), ObjectInfo::fromJson(it.value())));
	}

	nlohmann::json jPackageIndexes = unordered_maps["PackageIndexes"];
	for (auto it = jPackageIndexes.begin(); it != jPackageIndexes.end(); ++it) {
		packageIndexes.insert(std::pair(std::stoi(it.key()), it.value()));
	}

	nlohmann::json jOverridingStructs = unordered_maps["OverridingStructs"];
	for (auto it = jOverridingStructs.begin(); it != jOverridingStructs.end(); ++it) {
		overridingStructs.insert(std::pair(it.key(), EngineStructs::Struct::fromJson(it.value())));
	}

	const nlohmann::json vectors = UEDProject["vectors"];

	if (!vectors.contains("Packages") ||
		!vectors.contains("CustomStructs") ||
		!vectors.contains("Offsets"))
	{
		windows::LogWindow::Log(windows::LogWindow::log_4, "ENGINECORE", "Project corrupted! (-5)");
		return false;
	}

	nlohmann::json jPackages = vectors["Packages"];
	for (const nlohmann::json& package : jPackages)
		packages.push_back(EngineStructs::Package::fromJson(package));

	unknownProperties = vectors["UnknownProperties"];

	nlohmann::json jCustomStructs = vectors["CustomStructs"];

	for (const nlohmann::json& customStruct : jCustomStructs)
		customStructs.push_back(EngineStructs::Struct::fromJson(customStruct));

	nlohmann::json jOffsets = vectors["Offsets"];
	for (const nlohmann::json& offset : jOffsets)
		offsets.push_back(Offset::fromJson(offset));
	

	EngineSettings::setLiveEditor(false);

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
