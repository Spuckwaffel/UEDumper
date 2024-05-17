
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: EntityActor
/// dependency: EntityCore
/// dependency: UIFramework

/// Class /Script/VerseUI.VersePlayerUIEntityComponent
/// Size: 0x0008 (0x0000D0 - 0x0000D8)
class UVersePlayerUIEntityComponent : public UEntityActorPlayerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
	CMember(class UUIFrameworkPlayerComponent*)        UIFComponent                                                OFFSET(get<T>, {0xD0, 8, 0, 0})
};

/// Class /Script/VerseUI.VerseWidgetNativeBase
/// Size: 0x0010 (0x000028 - 0x000038)
class UVerseWidgetNativeBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(class UUIFrameworkWidget*)                 UIFWidgetInstance                                           OFFSET(get<T>, {0x30, 8, 0, 0})
};

/// Class /Script/VerseUI.VerseUIWorldSubsystem
/// Size: 0x00A0 (0x000030 - 0x0000D0)
class UVerseUIWorldSubsystem : public UWorldSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
};

