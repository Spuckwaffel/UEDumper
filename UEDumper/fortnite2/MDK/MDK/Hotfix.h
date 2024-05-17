
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject

/// Class /Script/Hotfix.OnlineHotfixManager
/// Size: 0x0240 (0x000028 - 0x000268)
class UOnlineHotfixManager : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 616;

public:
	SMember(FString)                                   OSSName                                                     OFFSET(getStruct<T>, {0x228, 16, 0, 0})
	SMember(FString)                                   HotfixManagerClassName                                      OFFSET(getStruct<T>, {0x238, 16, 0, 0})
	SMember(FString)                                   DebugPrefix                                                 OFFSET(getStruct<T>, {0x248, 16, 0, 0})
	CMember(TArray<class UObject*>)                    AssetsHotfixedFromIniFiles                                  OFFSET(get<T>, {0x258, 16, 0, 0})


	/// Functions
	// Function /Script/Hotfix.OnlineHotfixManager.StartHotfixProcess
	// void StartHotfixProcess();                                                                                               // [0x6ab9098] Native|Public|BlueprintCallable 
};

/// Class /Script/Hotfix.UpdateManager
/// Size: 0x01D0 (0x000028 - 0x0001F8)
class UUpdateManager : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 504;

public:
	DMember(float)                                     UpdateCheckStartDelay                                       OFFSET(get<float>, {0x88, 4, 0, 0})
	DMember(float)                                     UpdateCheckCachedResponseDelay                              OFFSET(get<float>, {0x8C, 4, 0, 0})
	DMember(float)                                     HotfixCheckCompleteDelay                                    OFFSET(get<float>, {0x90, 4, 0, 0})
	DMember(float)                                     UpdateCheckCompleteDelay                                    OFFSET(get<float>, {0x94, 4, 0, 0})
	DMember(float)                                     HotfixAvailabilityCheckCompleteDelay                        OFFSET(get<float>, {0x98, 4, 0, 0})
	DMember(float)                                     UpdateCheckAvailabilityCompleteDelay                        OFFSET(get<float>, {0x9C, 4, 0, 0})
	DMember(int32_t)                                   AppSuspendedUpdateCheckTimeSeconds                          OFFSET(get<int32_t>, {0xA4, 4, 0, 0})
	DMember(bool)                                      bInitialUpdateFinished                                      OFFSET(get<bool>, {0xB0, 1, 0, 0})
	DMember(bool)                                      bCheckHotfixAvailabilityOnly                                OFFSET(get<bool>, {0xB1, 1, 0, 0})
	CMember(EUpdateState)                              CurrentUpdateState                                          OFFSET(get<T>, {0xB2, 1, 0, 0})
	DMember(int32_t)                                   WorstNumFilesPendingLoadViewed                              OFFSET(get<int32_t>, {0xB4, 4, 0, 0})
	CMember(EHotfixResult)                             LastHotfixResult                                            OFFSET(get<T>, {0xBC, 1, 0, 0})
	SMember(FDateTime)                                 LastUpdateCheck                                             OFFSET(getStruct<T>, {0xE0, 16, 0, 0})
	CMember(EUpdateCompletionStatus)                   LastCompletionResult                                        OFFSET(get<T>, {0xF0, 2, 0, 0})
	CMember(class UEnum*)                              UpdateStateEnum                                             OFFSET(get<T>, {0x118, 8, 0, 0})
	CMember(class UEnum*)                              UpdateCompletionEnum                                        OFFSET(get<T>, {0x120, 8, 0, 0})
	SMember(FUpdateContextDefinition)                  UpdateContextDefinitionUnknown                              OFFSET(getStruct<T>, {0x128, 104, 0, 0})
	CMember(TArray<FUpdateContextDefinition>)          UpdateContextDefinitions                                    OFFSET(get<T>, {0x190, 16, 0, 0})
};

/// Struct /Script/Hotfix.UpdateContextDefinition
/// Size: 0x0068 (0x000000 - 0x000068)
class FUpdateContextDefinition : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	SMember(FString)                                   Name                                                        OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x10, 1, 0, 0})
	DMember(bool)                                      bCheckAvailabilityOnly                                      OFFSET(get<bool>, {0x11, 1, 0, 0})
	DMember(bool)                                      bPatchCheckEnabled                                          OFFSET(get<bool>, {0x12, 1, 0, 0})
	CMember(TSet<FString>)                             AdditionalTags                                              OFFSET(get<T>, {0x18, 80, 0, 0})
};

/// Enum /Script/Hotfix.EHotfixResult
/// Size: 0x05
enum class EHotfixResult : uint8_t
{
	EHotfixResult__Failed                                                            = 0,
	EHotfixResult__Success                                                           = 1,
	EHotfixResult__SuccessNoChange                                                   = 2,
	EHotfixResult__SuccessNeedsReload                                                = 3,
	EHotfixResult__SuccessNeedsRelaunch                                              = 4
};

/// Enum /Script/Hotfix.EUpdateState
/// Size: 0x07
enum class EUpdateState : uint8_t
{
	EUpdateState__UpdateIdle                                                         = 0,
	EUpdateState__UpdatePending                                                      = 1,
	EUpdateState__CheckingForPatch                                                   = 2,
	EUpdateState__CheckingForHotfix                                                  = 3,
	EUpdateState__WaitingOnInitialLoad                                               = 4,
	EUpdateState__InitialLoadComplete                                                = 5,
	EUpdateState__UpdateComplete                                                     = 6
};

/// Enum /Script/Hotfix.EUpdateCompletionStatus
/// Size: 0x09
enum class EUpdateCompletionStatus : uint8_t
{
	EUpdateCompletionStatus__UpdateUnknown                                           = 0,
	EUpdateCompletionStatus__UpdateSuccess                                           = 1,
	EUpdateCompletionStatus__UpdateSuccess_NoChange                                  = 2,
	EUpdateCompletionStatus__UpdateSuccess_NeedsReload                               = 3,
	EUpdateCompletionStatus__UpdateSuccess_NeedsRelaunch                             = 4,
	EUpdateCompletionStatus__UpdateSuccess_NeedsPatch                                = 5,
	EUpdateCompletionStatus__UpdateFailure_PatchCheck                                = 6,
	EUpdateCompletionStatus__UpdateFailure_HotfixCheck                               = 7,
	EUpdateCompletionStatus__UpdateFailure_NotLoggedIn                               = 8
};

