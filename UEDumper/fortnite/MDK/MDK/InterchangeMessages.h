
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: InterchangeCore

/// Class /Script/InterchangeMessages.InterchangeResultMeshWarning
/// Size: 0x0010 (0x000070 - 0x000080)
class UInterchangeResultMeshWarning : public UInterchangeResultWarning
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FString)                                   MeshName                                                    OFFSET(getStruct<T>, {0x70, 16, 0, 0})
};

/// Class /Script/InterchangeMessages.InterchangeResultTextureWarning
/// Size: 0x0010 (0x000070 - 0x000080)
class UInterchangeResultTextureWarning : public UInterchangeResultWarning
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FString)                                   TextureName                                                 OFFSET(getStruct<T>, {0x70, 16, 0, 0})
};

/// Class /Script/InterchangeMessages.InterchangeResultMeshError
/// Size: 0x0010 (0x000070 - 0x000080)
class UInterchangeResultMeshError : public UInterchangeResultError
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FString)                                   MeshName                                                    OFFSET(getStruct<T>, {0x70, 16, 0, 0})
};

/// Class /Script/InterchangeMessages.InterchangeResultMeshWarning_Generic
/// Size: 0x0018 (0x000080 - 0x000098)
class UInterchangeResultMeshWarning_Generic : public UInterchangeResultMeshWarning
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	SMember(FText)                                     Text                                                        OFFSET(getStruct<T>, {0x80, 24, 0, 0})
};

/// Class /Script/InterchangeMessages.InterchangeResultMeshError_Generic
/// Size: 0x0018 (0x000080 - 0x000098)
class UInterchangeResultMeshError_Generic : public UInterchangeResultMeshError
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	SMember(FText)                                     Text                                                        OFFSET(getStruct<T>, {0x80, 24, 0, 0})
};

/// Class /Script/InterchangeMessages.InterchangeResultMeshWarning_TooManyUVs
/// Size: 0x0008 (0x000080 - 0x000088)
class UInterchangeResultMeshWarning_TooManyUVs : public UInterchangeResultMeshWarning
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	DMember(int32_t)                                   ExcessUVs                                                   OFFSET(get<int32_t>, {0x80, 4, 0, 0})
};

/// Class /Script/InterchangeMessages.InterchangeResultTextureWarning_TextureFileDoNotExist
/// Size: 0x0028 (0x000080 - 0x0000A8)
class UInterchangeResultTextureWarning_TextureFileDoNotExist : public UInterchangeResultTextureWarning
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	SMember(FText)                                     Text                                                        OFFSET(getStruct<T>, {0x80, 24, 0, 0})
	SMember(FString)                                   MaterialName                                                OFFSET(getStruct<T>, {0x98, 16, 0, 0})
};

