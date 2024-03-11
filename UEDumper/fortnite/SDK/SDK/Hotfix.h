
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject

/// Enum /Script/Hotfix.EHotfixResult
/// Size: 0x06
enum class EHotfixResult : uint8_t
{
	EHotfixResult__Failed                                                            = 0,
	EHotfixResult__Success                                                           = 1,
	EHotfixResult__SuccessNoChange                                                   = 2,
	EHotfixResult__SuccessNeedsReload                                                = 3,
	EHotfixResult__SuccessNeedsRelaunch                                              = 4,
	EHotfixResult__EHotfixResult_MAX                                                 = 5
};

/// Enum /Script/Hotfix.EUpdateState
/// Size: 0x08
enum class EUpdateState : uint8_t
{
	EUpdateState__UpdateIdle                                                         = 0,
	EUpdateState__UpdatePending                                                      = 1,
	EUpdateState__CheckingForPatch                                                   = 2,
	EUpdateState__CheckingForHotfix                                                  = 3,
	EUpdateState__WaitingOnInitialLoad                                               = 4,
	EUpdateState__InitialLoadComplete                                                = 5,
	EUpdateState__UpdateComplete                                                     = 6,
	EUpdateState__EUpdateState_MAX                                                   = 7
};

/// Enum /Script/Hotfix.EUpdateCompletionStatus
/// Size: 0x10
enum class EUpdateCompletionStatus : uint16_t
{
	EUpdateCompletionStatus__UpdateUnknown                                           = 0,
	EUpdateCompletionStatus__UpdateSuccess                                           = 1,
	EUpdateCompletionStatus__UpdateSuccess_NoChange                                  = 2,
	EUpdateCompletionStatus__UpdateSuccess_NeedsReload                               = 3,
	EUpdateCompletionStatus__UpdateSuccess_NeedsRelaunch                             = 4,
	EUpdateCompletionStatus__UpdateSuccess_NeedsPatch                                = 5,
	EUpdateCompletionStatus__UpdateFailure_PatchCheck                                = 6,
	EUpdateCompletionStatus__UpdateFailure_HotfixCheck                               = 7,
	EUpdateCompletionStatus__UpdateFailure_NotLoggedIn                               = 8,
	EUpdateCompletionStatus__EUpdateCompletionStatus_MAX                             = 9
};

/// Class /Script/Hotfix.OnlineHotfixManager
/// Size: 0x0240 (0x000028 - 0x000268)
class UOnlineHotfixManager : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x228];                                     // 0x0000   (0x0228)  MISSED
	SDK_UNDEFINED(16,2424) /* FString */               __um(OSSName);                                              // 0x0228   (0x0010)  
	SDK_UNDEFINED(16,2425) /* FString */               __um(HotfixManagerClassName);                               // 0x0238   (0x0010)  
	SDK_UNDEFINED(16,2426) /* FString */               __um(DebugPrefix);                                          // 0x0248   (0x0010)  
	TArray<class UObject*>                             AssetsHotfixedFromIniFiles;                                 // 0x0258   (0x0010)  


	/// Functions
	// Function /Script/Hotfix.OnlineHotfixManager.StartHotfixProcess
	// void StartHotfixProcess();                                                                                            // [0x681481c] Native|Public|BlueprintCallable 
};

/// Struct /Script/Hotfix.UpdateContextDefinition
/// Size: 0x0068 (0x000000 - 0x000068)
struct FUpdateContextDefinition
{ 
	SDK_UNDEFINED(16,2427) /* FString */               __um(Name);                                                 // 0x0000   (0x0010)  
	bool                                               bEnabled;                                                   // 0x0010   (0x0001)  
	bool                                               bCheckAvailabilityOnly;                                     // 0x0011   (0x0001)  
	bool                                               bPatchCheckEnabled;                                         // 0x0012   (0x0001)  
	unsigned char                                      UnknownData00_5[0x5];                                       // 0x0013   (0x0005)  MISSED
	SDK_UNDEFINED(80,2428) /* TSet<FString> */         __um(AdditionalTags);                                       // 0x0018   (0x0050)  
};

/// Class /Script/Hotfix.UpdateManager
/// Size: 0x01D0 (0x000028 - 0x0001F8)
class UUpdateManager : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x88];                                      // 0x0000   (0x0088)  MISSED
	float                                              UpdateCheckStartDelay;                                      // 0x0088   (0x0004)  
	float                                              UpdateCheckCachedResponseDelay;                             // 0x008C   (0x0004)  
	float                                              HotfixCheckCompleteDelay;                                   // 0x0090   (0x0004)  
	float                                              UpdateCheckCompleteDelay;                                   // 0x0094   (0x0004)  
	float                                              HotfixAvailabilityCheckCompleteDelay;                       // 0x0098   (0x0004)  
	float                                              UpdateCheckAvailabilityCompleteDelay;                       // 0x009C   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x00A0   (0x0004)  MISSED
	int32_t                                            AppSuspendedUpdateCheckTimeSeconds;                         // 0x00A4   (0x0004)  
	unsigned char                                      UnknownData02_5[0x8];                                       // 0x00A8   (0x0008)  MISSED
	bool                                               bInitialUpdateFinished;                                     // 0x00B0   (0x0001)  
	bool                                               bCheckHotfixAvailabilityOnly;                               // 0x00B1   (0x0001)  
	EUpdateState                                       CurrentUpdateState;                                         // 0x00B2   (0x0001)  
	unsigned char                                      UnknownData03_5[0x1];                                       // 0x00B3   (0x0001)  MISSED
	int32_t                                            WorstNumFilesPendingLoadViewed;                             // 0x00B4   (0x0004)  
	unsigned char                                      UnknownData04_5[0x4];                                       // 0x00B8   (0x0004)  MISSED
	EHotfixResult                                      LastHotfixResult;                                           // 0x00BC   (0x0001)  
	unsigned char                                      UnknownData05_5[0x23];                                      // 0x00BD   (0x0023)  MISSED
	FDateTime                                          LastUpdateCheck;                                            // 0x00E0   (0x0010)  
	EUpdateCompletionStatus                            LastCompletionResult;                                       // 0x00F0   (0x0002)  
	unsigned char                                      UnknownData06_5[0x26];                                      // 0x00F2   (0x0026)  MISSED
	class UEnum*                                       UpdateStateEnum;                                            // 0x0118   (0x0008)  
	class UEnum*                                       UpdateCompletionEnum;                                       // 0x0120   (0x0008)  
	FUpdateContextDefinition                           UpdateContextDefinitionUnknown;                             // 0x0128   (0x0068)  
	TArray<FUpdateContextDefinition>                   UpdateContextDefinitions;                                   // 0x0190   (0x0010)  
	unsigned char                                      UnknownData07_6[0x58];                                      // 0x01A0   (0x0058)  MISSED
};

