
//https://github.com/EpicGames/UnrealEngine/blob/4.25/Engine/Source/Runtime/Core/Private/UObject/UnrealNames.cpp
//https://github.com/EpicGames/UnrealEngine/blob/4.25/Engine/Source/Runtime/Core/Public/UObject/NameTypes.h
std::string EngineCore::FNameToString(FName fname)
{
	if(FNameCache.contains(fname.ComparisonIndex))
	{
		return FNameCache[fname.ComparisonIndex];
	}
	char name[1024] = { 0 };
	
	
	//>4.25 chunks exist
	unsigned int chunkOffset = fname.ComparisonIndex >> 16;
	unsigned short nameOffset = fname.ComparisonIndex;
	
	
	//fortnite has it a bit custom
	uint64_t namePoolChunk = Memory::read<uint64_t>(gNames + 8 * chunkOffset + 16) + 4 * nameOffset;

	uint16_t pool = Memory::read<uint16_t>(namePoolChunk);

	if(pool < 64)
	{
		const int compIndex = Memory::read<DWORD>(namePoolChunk + 4);
		chunkOffset = compIndex >> 16;
		nameOffset = compIndex;
		namePoolChunk = Memory::read<uint64_t>(gNames + 8 * chunkOffset + 16) + 4 * nameOffset;
		pool = Memory::read<uint16_t>(namePoolChunk);
	}

	const auto nameLength = pool >> 6;

	Memory::read(reinterpret_cast<void*>(namePoolChunk + 4), name, nameLength);

#if USE_FNAME_ENCRYPTION
	//decrypt the FNames buffer
	fname_decrypt(name, nameLength);
#endif
	

	std::string finalName = std::string(name);

	FNameCache.insert(std::pair(fname.ComparisonIndex, finalName));

	return finalName;
}