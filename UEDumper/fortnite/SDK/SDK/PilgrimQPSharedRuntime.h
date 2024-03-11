
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once

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

/// Struct /Script/PilgrimQPSharedRuntime.PilgrimEvent_QuickplayState_Base
/// Size: 0x0010 (0x000000 - 0x000010)
struct FPilgrimEvent_QuickplayState_Base
{ 
	EPilgrimQuickplayState                             StateId;                                                    // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0009   (0x0007)  MISSED
};

/// Struct /Script/PilgrimQPSharedRuntime.PilgrimEvent_QuickplayState_Began
/// Size: 0x0000 (0x000010 - 0x000010)
struct FPilgrimEvent_QuickplayState_Began : FPilgrimEvent_QuickplayState_Base
{ 
};

/// Struct /Script/PilgrimQPSharedRuntime.PilgrimEvent_QuickplayState_BeganClient
/// Size: 0x0000 (0x000010 - 0x000010)
struct FPilgrimEvent_QuickplayState_BeganClient : FPilgrimEvent_QuickplayState_Began
{ 
};

/// Struct /Script/PilgrimQPSharedRuntime.PilgrimEvent_QuickplayState_BeganServer
/// Size: 0x0000 (0x000010 - 0x000010)
struct FPilgrimEvent_QuickplayState_BeganServer : FPilgrimEvent_QuickplayState_Began
{ 
};

/// Struct /Script/PilgrimQPSharedRuntime.PilgrimEvent_QuickplayState_Ended
/// Size: 0x0000 (0x000010 - 0x000010)
struct FPilgrimEvent_QuickplayState_Ended : FPilgrimEvent_QuickplayState_Base
{ 
};

/// Struct /Script/PilgrimQPSharedRuntime.PilgrimEvent_QuickplayState_EndedClient
/// Size: 0x0000 (0x000010 - 0x000010)
struct FPilgrimEvent_QuickplayState_EndedClient : FPilgrimEvent_QuickplayState_Ended
{ 
};

/// Struct /Script/PilgrimQPSharedRuntime.PilgrimEvent_QuickplayState_EndedServer
/// Size: 0x0000 (0x000010 - 0x000010)
struct FPilgrimEvent_QuickplayState_EndedServer : FPilgrimEvent_QuickplayState_Ended
{ 
};

