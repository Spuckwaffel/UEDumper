
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/FortImGuiCore.DebuggableObject
/// Size: 0x0000 (0x000028 - 0x000028)
class UDebuggableObject : public UInterface
{ 
public:
};

/// Class /Script/FortImGuiCore.ImGuiDebugMenuBase
/// Size: 0x0230 (0x000290 - 0x0004C0)
#pragma pack(push, 0x1)
class alignas(0x10) AImGuiDebugMenuBase : public AActor
{ 
public:
	unsigned char                                      UnknownData00_3[0xA0];                                      // 0x0290   (0x00A0)  MISSED
	class APlayerController*                           PrivateLocalPlayerController;                               // 0x0330   (0x0008)  
	unsigned char                                      UnknownData01_6[0x180];                                     // 0x0338   (0x0180)  MISSED


	/// Functions
	// Function /Script/FortImGuiCore.ImGuiDebugMenuBase.ToggleInputLock
	// void ToggleInputLock();                                                                                               // [0x36203b0] Final|Native|Protected 
};
#pragma pack(pop)

/// Class /Script/FortImGuiCore.ObjectDebuggerMenu
/// Size: 0x0130 (0x0004C0 - 0x0005F0)
class AObjectDebuggerMenu : public AImGuiDebugMenuBase
{ 
public:
	unsigned char                                      UnknownData00_1[0x138];                                     // 0x04B8   (0x0138)  MISSED
};

