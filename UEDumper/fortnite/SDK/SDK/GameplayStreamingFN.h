
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: GameplayStreaming

/// Class /Script/GameplayStreamingFN.FortLocalPlayerAccountHelper
/// Size: 0x0028 (0x000028 - 0x000050)
class UFortLocalPlayerAccountHelper : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x50];                                      // 0x0000   (0x0050)  MISSED
};

/// Class /Script/GameplayStreamingFN.FortGFNGameplayStreamingHandler
/// Size: 0x0038 (0x000078 - 0x0000B0)
class UFortGFNGameplayStreamingHandler : public UGFNGameplayStreamingHandler
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0078   (0x0008)  MISSED
	class UFortLocalPlayerAccountHelper*               FortLocalPlayerAccountHelper;                               // 0x0080   (0x0008)  
	SDK_UNDEFINED(8,14071) /* TWeakObjectPtr<UFortOnlineAccount*> */ __um(WeakFortOnlineAccount);                  // 0x0088   (0x0008)  
	unsigned char                                      UnknownData01_6[0x20];                                      // 0x0090   (0x0020)  MISSED
};

/// Class /Script/GameplayStreamingFN.FortLunaGameplayStreamingHandler
/// Size: 0x0030 (0x000078 - 0x0000A8)
class UFortLunaGameplayStreamingHandler : public ULunaGameplayStreamingHandler
{ 
public:
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x0078   (0x0030)  MISSED
};

/// Class /Script/GameplayStreamingFN.FortSalmonGameplayStreamingHandler
/// Size: 0x0018 (0x000078 - 0x000090)
class UFortSalmonGameplayStreamingHandler : public USalmonGameplayStreamingHandler
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0078   (0x0018)  MISSED
};

/// Class /Script/GameplayStreamingFN.FortGameplayStreamingHandler
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortGameplayStreamingHandler : public UInterface
{ 
public:
};

/// Class /Script/GameplayStreamingFN.FortGameplayStreamingService
/// Size: 0x0008 (0x000030 - 0x000038)
class UFortGameplayStreamingService : public UGameplayStreamingService
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0030   (0x0008)  MISSED
};

