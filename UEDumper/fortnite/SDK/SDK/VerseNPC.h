
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: AIModule
/// dependency: CoreUObject
/// dependency: EntityCore
/// dependency: FortniteGame
/// dependency: VerseAIBase
/// dependency: VerseFortnite

/// Class /Script/VerseNPC.NPCCharacterModifier_Perception
/// Size: 0x0028 (0x000028 - 0x000050)
class UNPCCharacterModifier_Perception : public UNPCCharacterModifier
{ 
public:
	bool                                               bOverrideSightSettings : 1;                                 // 0x0028:0 (0x0001)  
	bool                                               bEnableSight : 1;                                           // 0x0028:1 (0x0001)  
	bool                                               bOverrideHearingSettings : 1;                               // 0x0028:2 (0x0001)  
	bool                                               bEnableHearing : 1;                                         // 0x0028:3 (0x0001)  
	bool                                               bOverrideTouchSettings : 1;                                 // 0x0028:4 (0x0001)  
	bool                                               bEnableTouch : 1;                                           // 0x0028:5 (0x0001)  
	bool                                               bOverrideDamageSettings : 1;                                // 0x0028:6 (0x0001)  
	bool                                               bEnableDamage : 1;                                          // 0x0028:7 (0x0001)  
	unsigned char                                      UnknownData00_4[0x7];                                       // 0x0029   (0x0007)  MISSED
	class UAISenseConfig_Sight*                        SightPerceptionSettings;                                    // 0x0030   (0x0008)  
	class UAISenseConfig_Hearing*                      HearingPerceptionSettings;                                  // 0x0038   (0x0008)  
	class UAISenseConfig_Touch*                        TouchPerceptionSettings;                                    // 0x0040   (0x0008)  
	class UAISenseConfig_Damage*                       DamagePerceptionSettings;                                   // 0x0048   (0x0008)  
};

/// Class /Script/VerseNPC.CharacterModifier_GuardPerception
/// Size: 0x0088 (0x000028 - 0x0000B0)
class UCharacterModifier_GuardPerception : public UNPCCharacterModifier
{ 
public:
	bool                                               bOverrideSightSettings : 1;                                 // 0x0028:0 (0x0001)  
	bool                                               bEnableSight : 1;                                           // 0x0028:1 (0x0001)  
	bool                                               bOverrideHearingSettings : 1;                               // 0x0028:2 (0x0001)  
	bool                                               bEnableHearing : 1;                                         // 0x0028:3 (0x0001)  
	bool                                               bOverrideTouchSettings : 1;                                 // 0x0028:4 (0x0001)  
	bool                                               bEnableTouch : 1;                                           // 0x0028:5 (0x0001)  
	bool                                               bOverrideDamageSettings : 1;                                // 0x0028:6 (0x0001)  
	bool                                               bEnableDamage : 1;                                          // 0x0028:7 (0x0001)  
	unsigned char                                      UnknownData00_4[0x7];                                       // 0x0029   (0x0007)  MISSED
	class UAISenseConfig_Sight*                        SightPerceptionSettings;                                    // 0x0030   (0x0020)  
	class UAISenseConfig_Hearing*                      HearingPerceptionSettings;                                  // 0x0050   (0x0020)  
	class UAISenseConfig_Touch*                        TouchPerceptionSettings;                                    // 0x0070   (0x0020)  
	class UAISenseConfig_Damage*                       DamagePerceptionSettings;                                   // 0x0090   (0x0020)  
};

/// Class /Script/VerseNPC.InventoryComponentBase
/// Size: 0x0048 (0x000058 - 0x0000A0)
class UInventoryComponentBase : public UEntityComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0058   (0x0028)  MISSED
	SDK_UNDEFINED(16,9365) /* TScriptInterface<Class> */ __um(CachedFortInventory);                                // 0x0080   (0x0010)  
	class AFortPawn*                                   CachedFortPawn;                                             // 0x0090   (0x0008)  
	class UBlackboardComponent*                        CachedBlackboardComponent;                                  // 0x0098   (0x0008)  
};

/// Class /Script/VerseNPC.LeashComponentBase
/// Size: 0x0000 (0x000070 - 0x000070)
class ULeashComponentBase : public UAIComponent
{ 
public:
};

/// Class /Script/VerseNPC.NPCPerceptionComponentBase
/// Size: 0x0010 (0x0000D0 - 0x0000E0)
class UNPCPerceptionComponentBase : public UAIPerceptionComponentBase
{ 
public:


	/// Functions
	// Function /Script/VerseNPC.NPCPerceptionComponentBase.OnBotControllerAlertLevelChanged
	// void OnBotControllerAlertLevelChanged(class AFortAthenaAIBotController* BotController, EAlertLevel OldAlertLevel, EAlertLevel NewAlertLevel); // [0xa2ae740] Final|Native|Protected 
};

