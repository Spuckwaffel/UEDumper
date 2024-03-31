
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: AudioModulation
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: ModularGameplay

/// Class /Script/SparksSettingsRuntime.SparksClientSettingRecordPartition
/// Size: 0x0008 (0x000028 - 0x000030)
class USparksClientSettingRecordPartition : public UFortClientSettingRecordPartition
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(float)                                     GameplayMusicVolume                                         OFFSET(get<float>, {0x28, 4, 0, 0})


	/// Functions
	// Function /Script/SparksSettingsRuntime.SparksClientSettingRecordPartition.SetGameplayMusicVolume
	// void SetGameplayMusicVolume(float NewVolume);                                                                            // [0xb60a71c] Final|Native|Public  
	// Function /Script/SparksSettingsRuntime.SparksClientSettingRecordPartition.GetGameplayMusicVolume
	// float GetGameplayMusicVolume();                                                                                          // [0x6d9ccb0] Final|RequiredAPI|Native|Public|Const 
};

/// Class /Script/SparksSettingsRuntime.SparksSettingsControllerComponent
/// Size: 0x0010 (0x0000A0 - 0x0000B0)
class USparksSettingsControllerComponent : public UControllerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	CMember(class USoundControlBusMix*)                SparksMix                                                   OFFSET(get<T>, {0xA0, 8, 0, 0})
	CMember(class USoundControlBus*)                   SparksBus                                                   OFFSET(get<T>, {0xA8, 8, 0, 0})


	/// Functions
	// Function /Script/SparksSettingsRuntime.SparksSettingsControllerComponent.UpdateSparksMixFromPartition
	// void UpdateSparksMixFromPartition();                                                                                     // [0xb60a7e0] Final|Native|Public|Const 
	// Function /Script/SparksSettingsRuntime.SparksSettingsControllerComponent.GetSparksClientSettingRecordPartition
	// class USparksClientSettingRecordPartition* GetSparksClientSettingRecordPartition();                                      // [0xb60a6f8] Final|Native|Public|Const 
};

