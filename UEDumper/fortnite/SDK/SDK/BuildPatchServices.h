
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject

/// Struct /Script/BuildPatchServices.SHAHashData
/// Size: 0x0014 (0x000000 - 0x000014)
struct FSHAHashData
{ 
	char                                               Hash;                                                       // 0x0000   (0x0014)  
};

/// Struct /Script/BuildPatchServices.ChunkPartData
/// Size: 0x0018 (0x000000 - 0x000018)
struct FChunkPartData
{ 
	FGuid                                              Guid;                                                       // 0x0000   (0x0010)  
	uint32_t                                           Offset;                                                     // 0x0010   (0x0004)  
	uint32_t                                           Size;                                                       // 0x0014   (0x0004)  
};

/// Struct /Script/BuildPatchServices.FileManifestData
/// Size: 0x0068 (0x000000 - 0x000068)
struct FFileManifestData
{ 
	SDK_UNDEFINED(16,12366) /* FString */              __um(Filename);                                             // 0x0000   (0x0010)  
	FSHAHashData                                       FileHash;                                                   // 0x0010   (0x0014)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0024   (0x0004)  MISSED
	TArray<FChunkPartData>                             FileChunkParts;                                             // 0x0028   (0x0010)  
	SDK_UNDEFINED(16,12367) /* TArray<FString> */      __um(InstallTags);                                          // 0x0038   (0x0010)  
	bool                                               bIsUnixExecutable;                                          // 0x0048   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0049   (0x0007)  MISSED
	SDK_UNDEFINED(16,12368) /* FString */              __um(SymlinkTarget);                                        // 0x0050   (0x0010)  
	bool                                               bIsReadOnly;                                                // 0x0060   (0x0001)  
	bool                                               bIsCompressed;                                              // 0x0061   (0x0001)  
	unsigned char                                      UnknownData02_6[0x6];                                       // 0x0062   (0x0006)  MISSED
};

/// Struct /Script/BuildPatchServices.ChunkInfoData
/// Size: 0x0040 (0x000000 - 0x000040)
struct FChunkInfoData
{ 
	FGuid                                              Guid;                                                       // 0x0000   (0x0010)  
	uint64_t                                           Hash;                                                       // 0x0010   (0x0008)  
	FSHAHashData                                       ShaHash;                                                    // 0x0018   (0x0014)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x002C   (0x0004)  MISSED
	int64_t                                            FileSize;                                                   // 0x0030   (0x0008)  
	char                                               GroupNumber;                                                // 0x0038   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0039   (0x0007)  MISSED
};

/// Struct /Script/BuildPatchServices.CustomFieldData
/// Size: 0x0020 (0x000000 - 0x000020)
struct FCustomFieldData
{ 
	SDK_UNDEFINED(16,12369) /* FString */              __um(Key);                                                  // 0x0000   (0x0010)  
	SDK_UNDEFINED(16,12370) /* FString */              __um(Value);                                                // 0x0010   (0x0010)  
};

/// Class /Script/BuildPatchServices.BuildPatchManifest
/// Size: 0x00F8 (0x000028 - 0x000120)
class UBuildPatchManifest : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	char                                               ManifestFileVersion;                                        // 0x0028   (0x0001)  
	bool                                               bIsFileData;                                                // 0x0029   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x002A   (0x0002)  MISSED
	uint32_t                                           AppID;                                                      // 0x002C   (0x0004)  
	SDK_UNDEFINED(16,12371) /* FString */              __um(AppName);                                              // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,12372) /* FString */              __um(BuildVersion);                                         // 0x0040   (0x0010)  
	SDK_UNDEFINED(16,12373) /* FString */              __um(LaunchExe);                                            // 0x0050   (0x0010)  
	SDK_UNDEFINED(16,12374) /* FString */              __um(LaunchCommand);                                        // 0x0060   (0x0010)  
	SDK_UNDEFINED(80,12375) /* TSet<FString> */        __um(PrereqIds);                                            // 0x0070   (0x0050)  
	SDK_UNDEFINED(16,12376) /* FString */              __um(PrereqName);                                           // 0x00C0   (0x0010)  
	SDK_UNDEFINED(16,12377) /* FString */              __um(PrereqPath);                                           // 0x00D0   (0x0010)  
	SDK_UNDEFINED(16,12378) /* FString */              __um(PrereqArgs);                                           // 0x00E0   (0x0010)  
	TArray<FFileManifestData>                          FileManifestList;                                           // 0x00F0   (0x0010)  
	TArray<FChunkInfoData>                             ChunkList;                                                  // 0x0100   (0x0010)  
	TArray<FCustomFieldData>                           CustomFields;                                               // 0x0110   (0x0010)  
};

