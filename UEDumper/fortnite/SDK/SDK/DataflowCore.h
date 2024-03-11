
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: DeveloperSettings

/// Class /Script/DataflowCore.DataflowSettings
/// Size: 0x00A8 (0x000030 - 0x0000D8)
class UDataflowSettings : public UDeveloperSettings
{ 
public:
	FLinearColor                                       ArrayPinTypeColor;                                          // 0x0030   (0x0010)  
	FLinearColor                                       ManagedArrayCollectionPinTypeColor;                         // 0x0040   (0x0010)  
	FLinearColor                                       BoxPinTypeColor;                                            // 0x0050   (0x0010)  
	FLinearColor                                       SpherePinTypeColor;                                         // 0x0060   (0x0010)  
	SDK_UNDEFINED(80,11923) /* TMap<FName, FNodeColors> */ __um(NodeColorsMap);                                    // 0x0070   (0x0050)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x00C0   (0x0018)  MISSED
};

/// Struct /Script/DataflowCore.DataflowConnection
/// Size: 0x0038 (0x000000 - 0x000038)
struct FDataflowConnection
{ 
	unsigned char                                      UnknownData00_2[0x38];                                      // 0x0000   (0x0038)  MISSED
};

/// Struct /Script/DataflowCore.DataflowInput
/// Size: 0x0008 (0x000038 - 0x000040)
struct FDataflowInput : FDataflowConnection
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0038   (0x0008)  MISSED
};

/// Struct /Script/DataflowCore.DataflowOutput
/// Size: 0x0028 (0x000038 - 0x000060)
struct FDataflowOutput : FDataflowConnection
{ 
	unsigned char                                      UnknownData00_1[0x28];                                      // 0x0038   (0x0028)  MISSED
};

/// Struct /Script/DataflowCore.DataflowNode
/// Size: 0x00E8 (0x000000 - 0x0000E8)
struct FDataflowNode
{ 
	bool                                               bActive;                                                    // 0x00C8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1F];                                      // 0x00C9   (0x001F)  MISSED
};

/// Struct /Script/DataflowCore.DataflowOverrideNode
/// Size: 0x0020 (0x0000E8 - 0x000108)
struct FDataflowOverrideNode : FDataflowNode
{ 
	FName                                              Key;                                                        // 0x00E8   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x00EC   (0x0004)  MISSED
	SDK_UNDEFINED(16,11924) /* FString */              __um(Default);                                              // 0x00F0   (0x0010)  
	bool                                               IsOverriden;                                                // 0x0100   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0101   (0x0007)  MISSED
};

/// Struct /Script/DataflowCore.DataflowSelection
/// Size: 0x0020 (0x000000 - 0x000020)
struct FDataflowSelection
{ 
	unsigned char                                      UnknownData00_2[0x20];                                      // 0x0000   (0x0020)  MISSED
};

/// Struct /Script/DataflowCore.DataflowTransformSelection
/// Size: 0x0000 (0x000020 - 0x000020)
struct FDataflowTransformSelection : FDataflowSelection
{ 
};

/// Struct /Script/DataflowCore.DataflowVertexSelection
/// Size: 0x0000 (0x000020 - 0x000020)
struct FDataflowVertexSelection : FDataflowSelection
{ 
};

/// Struct /Script/DataflowCore.DataflowFaceSelection
/// Size: 0x0000 (0x000020 - 0x000020)
struct FDataflowFaceSelection : FDataflowSelection
{ 
};

/// Struct /Script/DataflowCore.NodeColors
/// Size: 0x0020 (0x000000 - 0x000020)
struct FNodeColors
{ 
	FLinearColor                                       NodeTitleColor;                                             // 0x0000   (0x0010)  
	FLinearColor                                       NodeBodyTintColor;                                          // 0x0010   (0x0010)  
};

/// Struct /Script/DataflowCore.DataflowTerminalNode
/// Size: 0x0000 (0x0000E8 - 0x0000E8)
struct FDataflowTerminalNode : FDataflowNode
{ 
};

