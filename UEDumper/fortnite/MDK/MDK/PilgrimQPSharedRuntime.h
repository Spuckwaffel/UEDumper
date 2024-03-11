
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/


/// Struct /Script/PilgrimQPSharedRuntime.PilgrimEvent_QuickplayState_Base
/// Size: 0x0010 (0x000000 - 0x000010)
class FPilgrimEvent_QuickplayState_Base : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(EPilgrimQuickplayState)                    StateId                                                     OFFSET(get<T>, {0x8, 1, 0, 0})
};

/// Struct /Script/PilgrimQPSharedRuntime.PilgrimEvent_QuickplayState_Began
/// Size: 0x0000 (0x000010 - 0x000010)
class FPilgrimEvent_QuickplayState_Began : public FPilgrimEvent_QuickplayState_Base
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/PilgrimQPSharedRuntime.PilgrimEvent_QuickplayState_BeganClient
/// Size: 0x0000 (0x000010 - 0x000010)
class FPilgrimEvent_QuickplayState_BeganClient : public FPilgrimEvent_QuickplayState_Began
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/PilgrimQPSharedRuntime.PilgrimEvent_QuickplayState_BeganServer
/// Size: 0x0000 (0x000010 - 0x000010)
class FPilgrimEvent_QuickplayState_BeganServer : public FPilgrimEvent_QuickplayState_Began
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/PilgrimQPSharedRuntime.PilgrimEvent_QuickplayState_Ended
/// Size: 0x0000 (0x000010 - 0x000010)
class FPilgrimEvent_QuickplayState_Ended : public FPilgrimEvent_QuickplayState_Base
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/PilgrimQPSharedRuntime.PilgrimEvent_QuickplayState_EndedClient
/// Size: 0x0000 (0x000010 - 0x000010)
class FPilgrimEvent_QuickplayState_EndedClient : public FPilgrimEvent_QuickplayState_Ended
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/PilgrimQPSharedRuntime.PilgrimEvent_QuickplayState_EndedServer
/// Size: 0x0000 (0x000010 - 0x000010)
class FPilgrimEvent_QuickplayState_EndedServer : public FPilgrimEvent_QuickplayState_Ended
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Enum /Script/PilgrimQPSharedRuntime.EPilgrimQuickplayState
/// Size: 0x10
enum class EPilgrimQuickplayState : uint8_t
{
	EPilgrimQuickplayState__Invalid                                                  = 0,
	EPilgrimQuickplayState__Loading                                                  = 1,
	EPilgrimQuickplayState__Pregame                                                  = 2,
	EPilgrimQuickplayState__Preintro                                                 = 3,
	EPilgrimQuickplayState__Intro                                                    = 4,
	EPilgrimQuickplayState__SongGameplay                                             = 5,
	EPilgrimQuickplayState__Outro                                                    = 6,
	EPilgrimQuickplayState__SongResults                                              = 7,
	EPilgrimQuickplayState__SetResults                                               = 8,
	EPilgrimQuickplayState__EPilgrimQuickplayState_MAX                               = 9
};

