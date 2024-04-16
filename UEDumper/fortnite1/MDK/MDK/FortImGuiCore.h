
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/FortImGuiCore.DebuggableObject
/// Size: 0x0000 (0x000028 - 0x000028)
class UDebuggableObject : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/FortImGuiCore.ImGuiDebugMenuBase
/// Size: 0x0230 (0x000290 - 0x0004C0)
class AImGuiDebugMenuBase : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1216;

public:
	CMember(class APlayerController*)                  PrivateLocalPlayerController                                OFFSET(get<T>, {0x330, 8, 0, 0})


	/// Functions
	// Function /Script/FortImGuiCore.ImGuiDebugMenuBase.ToggleInputLock
	// void ToggleInputLock();                                                                                                  // [0x3508bf8] Final|Native|Protected 
};

/// Class /Script/FortImGuiCore.ObjectDebuggerMenu
/// Size: 0x0130 (0x0004C0 - 0x0005F0)
class AObjectDebuggerMenu : public AImGuiDebugMenuBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1520;

public:
};

