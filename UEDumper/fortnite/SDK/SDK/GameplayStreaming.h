
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject

/// Class /Script/GameplayStreaming.BaseGameplayStreamingHandler
/// Size: 0x0050 (0x000028 - 0x000078)
class UBaseGameplayStreamingHandler : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x78];                                      // 0x0000   (0x0078)  MISSED
};

/// Class /Script/GameplayStreaming.GFNGameplayStreamingHandler
/// Size: 0x0000 (0x000078 - 0x000078)
class UGFNGameplayStreamingHandler : public UBaseGameplayStreamingHandler
{ 
public:
};

/// Class /Script/GameplayStreaming.LunaGameplayStreamingHandler
/// Size: 0x0000 (0x000078 - 0x000078)
class ULunaGameplayStreamingHandler : public UBaseGameplayStreamingHandler
{ 
public:
};

/// Class /Script/GameplayStreaming.SalmonGameplayStreamingHandler
/// Size: 0x0000 (0x000078 - 0x000078)
class USalmonGameplayStreamingHandler : public UBaseGameplayStreamingHandler
{ 
public:
};

/// Class /Script/GameplayStreaming.GameplayStreamingClassLoader
/// Size: 0x0020 (0x000028 - 0x000048)
class UGameplayStreamingClassLoader : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	FSoftClassPath                                     GameplayStreamingServiceClassName;                          // 0x0028   (0x0018)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0040   (0x0008)  MISSED
};

/// Class /Script/GameplayStreaming.GameplayStreamingService
/// Size: 0x0008 (0x000028 - 0x000030)
class UGameplayStreamingService : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	class UBaseGameplayStreamingHandler*               ActiveHandler;                                              // 0x0028   (0x0008)  
};

