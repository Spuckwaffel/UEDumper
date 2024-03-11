
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: InterchangeCore

/// Class /Script/InterchangeMessages.InterchangeResultMeshWarning
/// Size: 0x0010 (0x000070 - 0x000080)
class UInterchangeResultMeshWarning : public UInterchangeResultWarning
{ 
public:
	SDK_UNDEFINED(16,14295) /* FString */              __um(MeshName);                                             // 0x0070   (0x0010)  
};

/// Class /Script/InterchangeMessages.InterchangeResultTextureWarning
/// Size: 0x0010 (0x000070 - 0x000080)
class UInterchangeResultTextureWarning : public UInterchangeResultWarning
{ 
public:
	SDK_UNDEFINED(16,14296) /* FString */              __um(TextureName);                                          // 0x0070   (0x0010)  
};

/// Class /Script/InterchangeMessages.InterchangeResultMeshError
/// Size: 0x0010 (0x000070 - 0x000080)
class UInterchangeResultMeshError : public UInterchangeResultError
{ 
public:
	SDK_UNDEFINED(16,14297) /* FString */              __um(MeshName);                                             // 0x0070   (0x0010)  
};

/// Class /Script/InterchangeMessages.InterchangeResultMeshWarning_Generic
/// Size: 0x0018 (0x000080 - 0x000098)
class UInterchangeResultMeshWarning_Generic : public UInterchangeResultMeshWarning
{ 
public:
	SDK_UNDEFINED(24,14298) /* FText */                __um(Text);                                                 // 0x0080   (0x0018)  
};

/// Class /Script/InterchangeMessages.InterchangeResultMeshError_Generic
/// Size: 0x0018 (0x000080 - 0x000098)
class UInterchangeResultMeshError_Generic : public UInterchangeResultMeshError
{ 
public:
	SDK_UNDEFINED(24,14299) /* FText */                __um(Text);                                                 // 0x0080   (0x0018)  
};

/// Class /Script/InterchangeMessages.InterchangeResultMeshWarning_TooManyUVs
/// Size: 0x0008 (0x000080 - 0x000088)
class UInterchangeResultMeshWarning_TooManyUVs : public UInterchangeResultMeshWarning
{ 
public:
	int32_t                                            ExcessUVs;                                                  // 0x0080   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0084   (0x0004)  MISSED
};

/// Class /Script/InterchangeMessages.InterchangeResultTextureWarning_TextureFileDoNotExist
/// Size: 0x0028 (0x000080 - 0x0000A8)
class UInterchangeResultTextureWarning_TextureFileDoNotExist : public UInterchangeResultTextureWarning
{ 
public:
	SDK_UNDEFINED(24,14300) /* FText */                __um(Text);                                                 // 0x0080   (0x0018)  
	SDK_UNDEFINED(16,14301) /* FString */              __um(MaterialName);                                         // 0x0098   (0x0010)  
};

