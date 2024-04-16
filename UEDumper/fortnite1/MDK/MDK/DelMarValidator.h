
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: DelMarValidatorCommon
/// dependency: GameFeatures

/// Class /Script/DelMarValidator.DelMarValidator_Checkpoints
/// Size: 0x0000 (0x000038 - 0x000038)
class UDelMarValidator_Checkpoints : public UDelMarWorldValidator_Task
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:


	/// Functions
	// Function /Script/DelMarValidator.DelMarValidator_Checkpoints.GetStartingLineCheckpoint
	// class ADelMarCheckpoint* GetStartingLineCheckpoint(class UWorld* World);                                                 // [0xc654ae0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/DelMarValidator.DelMarValidator_ModeManager
/// Size: 0x0000 (0x000038 - 0x000038)
class UDelMarValidator_ModeManager : public UDelMarWorldValidator_Task
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Script/DelMarValidator.DelMarValidator_Tracks
/// Size: 0x0000 (0x000038 - 0x000038)
class UDelMarValidator_Tracks : public UDelMarWorldValidator_Task
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Script/DelMarValidator.GameFeatureAction_AddDelMarTask
/// Size: 0x0018 (0x000028 - 0x000040)
class UGameFeatureAction_AddDelMarTask : public UGameFeatureAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(TArray<TWeakObjectPtr<UClass*>>)           ValidatorTasks                                              OFFSET(get<T>, {0x28, 16, 0, 0})
};

