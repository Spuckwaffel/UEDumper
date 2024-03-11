
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: FortniteGame

/// Class /Script/VictoryCrownsReadRuntime.FortVictoryCrownInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortVictoryCrownInterface : public UInterface
{ 
public:
};

/// Class /Script/VictoryCrownsReadRuntime.FortCosmeticStatObject_HasCrown
/// Size: 0x0008 (0x000088 - 0x000090)
class UFortCosmeticStatObject_HasCrown : public UFortCosmeticStatObject
{ 
public:
	class UFortVictoryCrownAccountItemDefinition*      VictoryCrownAccountItemDefinition;                          // 0x0088   (0x0008)  
};

/// Class /Script/VictoryCrownsReadRuntime.FortCosmeticStatObject_TotalRoyalRoyales
/// Size: 0x0018 (0x000088 - 0x0000A0)
class UFortCosmeticStatObject_TotalRoyalRoyales : public UFortCosmeticStatObject
{ 
public:
	class UFortVictoryCrownAccountItemDefinition*      VictoryCrownAccountItemDefinition;                          // 0x0088   (0x0008)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0090   (0x0010)  MISSED
};

/// Class /Script/VictoryCrownsReadRuntime.FortCosmeticStatObject_TotalVictoryCrowns
/// Size: 0x0008 (0x000088 - 0x000090)
class UFortCosmeticStatObject_TotalVictoryCrowns : public UFortCosmeticStatObject
{ 
public:
	class UFortVictoryCrownAccountItemDefinition*      VictoryCrownAccountItemDefinition;                          // 0x0088   (0x0008)  
};

