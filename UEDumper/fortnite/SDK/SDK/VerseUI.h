
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: EntityActor
/// dependency: EntityCore
/// dependency: UIFramework

/// Class /Script/VerseUI.VersePlayerUIEntityComponent
/// Size: 0x0008 (0x0000D0 - 0x0000D8)
class UVersePlayerUIEntityComponent : public UEntityActorPlayerComponent
{ 
public:
	class UUIFrameworkPlayerComponent*                 UIFComponent;                                               // 0x00D0   (0x0008)  
};

/// Class /Script/VerseUI.VerseWidgetNativeBase
/// Size: 0x0010 (0x000028 - 0x000038)
class UVerseWidgetNativeBase : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x30];                                      // 0x0000   (0x0030)  MISSED
	class UUIFrameworkWidget*                          UIFWidgetInstance;                                          // 0x0030   (0x0008)  
};

/// Class /Script/VerseUI.VerseUIWorldSubsystem
/// Size: 0x00A0 (0x000030 - 0x0000D0)
class UVerseUIWorldSubsystem : public UWorldSubsystem
{ 
public:
	unsigned char                                      UnknownData00_1[0xA0];                                      // 0x0030   (0x00A0)  MISSED
};

