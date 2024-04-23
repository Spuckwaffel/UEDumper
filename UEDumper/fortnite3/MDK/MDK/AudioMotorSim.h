
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/AudioMotorSim.AudioMotorModelComponent
/// Size: 0x0060 (0x0000A0 - 0x000100)
class UAudioMotorModelComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	CMember(TArray<FMotorSimEntry>)                    SimComponents                                               OFFSET(get<T>, {0xA0, 16, 0, 0})
	CMember(TArray<TScriptInterface<Class>>)           AudioComponents                                             OFFSET(get<T>, {0xB0, 16, 0, 0})


	/// Functions
	// Function /Script/AudioMotorSim.AudioMotorModelComponent.Update
	// void Update(FAudioMotorSimInputContext& Input);                                                                          // [0xb2d2e24] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AudioMotorSim.AudioMotorModelComponent.StopOutput
	// void StopOutput();                                                                                                       // [0x14b0af0] Native|Public|BlueprintCallable 
	// Function /Script/AudioMotorSim.AudioMotorModelComponent.StartOutput
	// void StartOutput();                                                                                                      // [0x133f4e8] Native|Public|BlueprintCallable 
	// Function /Script/AudioMotorSim.AudioMotorModelComponent.Reset
	// void Reset();                                                                                                            // [0x3145fc4] Native|Public|BlueprintCallable 
	// Function /Script/AudioMotorSim.AudioMotorModelComponent.RemoveMotorSimComponent
	// void RemoveMotorSimComponent(TScriptInterface<Class> InComponent);                                                       // [0xb2d2c40] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioMotorSim.AudioMotorModelComponent.RemoveMotorAudioComponent
	// void RemoveMotorAudioComponent(TScriptInterface<Class> InComponent);                                                     // [0xb2d2acc] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioMotorSim.AudioMotorModelComponent.GetRuntimeInfo
	// FAudioMotorSimRuntimeContext GetRuntimeInfo();                                                                           // [0xb2d2aa8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AudioMotorSim.AudioMotorModelComponent.GetRpm
	// float GetRpm();                                                                                                          // [0x390bcdc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AudioMotorSim.AudioMotorModelComponent.GetGear
	// int32_t GetGear();                                                                                                       // [0xb2d2a90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AudioMotorSim.AudioMotorModelComponent.GetCachedInputData
	// FAudioMotorSimInputContext GetCachedInputData();                                                                         // [0xb2d2a50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AudioMotorSim.AudioMotorModelComponent.AddMotorSimComponent
	// void AddMotorSimComponent(TScriptInterface<Class> InComponent, int32_t SortOrder);                                       // [0x1ec7984] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioMotorSim.AudioMotorModelComponent.AddMotorAudioComponent
	// void AddMotorAudioComponent(TScriptInterface<Class> InComponent);                                                        // [0x1f43100] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/AudioMotorSim.AudioMotorSim
/// Size: 0x0000 (0x000028 - 0x000028)
class UAudioMotorSim : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/AudioMotorSim.AudioMotorSim.Reset
	// void Reset();                                                                                                            // [0x3948bb4] Native|Public|BlueprintCallable 
	// Function /Script/AudioMotorSim.AudioMotorSim.GetEnabled
	// bool GetEnabled();                                                                                                       // [0x2eb121c] Native|Public|BlueprintCallable 
};

/// Class /Script/AudioMotorSim.AudioMotorSimComponent
/// Size: 0x0010 (0x0000A0 - 0x0000B0)
class UAudioMotorSimComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0xA8, 1, 0, 0})


	/// Functions
	// Function /Script/AudioMotorSim.AudioMotorSimComponent.SetEnabled
	// void SetEnabled(bool bNewEnabled);                                                                                       // [0xb2d2da4] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioMotorSim.AudioMotorSimComponent.BP_Update
	// bool BP_Update(FAudioMotorSimInputContext& Input, FAudioMotorSimRuntimeContext& RuntimeInfo);                            // [0x1340978] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/AudioMotorSim.AudioMotorSimComponent.BP_Reset
	// void BP_Reset();                                                                                                         // [0x1340978] Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/AudioMotorSim.AudioMotorSimOutput
/// Size: 0x0000 (0x000028 - 0x000028)
class UAudioMotorSimOutput : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Struct /Script/AudioMotorSim.AudioMotorSimInputContext
/// Size: 0x002C (0x000000 - 0x00002C)
class FAudioMotorSimInputContext : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 44;

public:
	DMember(float)                                     DeltaTime                                                   OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     Speed                                                       OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     ForwardSpeed                                                OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     SideSpeed                                                   OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     UpSpeed                                                     OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     Throttle                                                    OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     Brake                                                       OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     SurfaceFrictionModifier                                     OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(float)                                     MotorFrictionModifier                                       OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(float)                                     Boost                                                       OFFSET(get<float>, {0x24, 4, 0, 0})
	DMember(bool)                                      bDriving                                                    OFFSET(get<bool>, {0x28, 1, 0, 0})
	DMember(bool)                                      bGrounded                                                   OFFSET(get<bool>, {0x29, 1, 0, 0})
	DMember(bool)                                      bCanShift                                                   OFFSET(get<bool>, {0x2A, 1, 0, 0})
	DMember(bool)                                      bClutchEngaged                                              OFFSET(get<bool>, {0x2B, 1, 0, 0})
};

/// Struct /Script/AudioMotorSim.AudioMotorSimRuntimeContext
/// Size: 0x0014 (0x000000 - 0x000014)
class FAudioMotorSimRuntimeContext : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	DMember(bool)                                      bShifting                                                   OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(int32_t)                                   Gear                                                        OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(float)                                     RPM                                                         OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     Volume                                                      OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     pitch                                                       OFFSET(get<float>, {0x10, 4, 0, 0})
};

/// Struct /Script/AudioMotorSim.MotorSimEntry
/// Size: 0x0018 (0x000000 - 0x000018)
class FMotorSimEntry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(TScriptInterface<Class>)                   Sim                                                         OFFSET(get<T>, {0x0, 16, 0, 0})
	DMember(int32_t)                                   SortOrder                                                   OFFSET(get<int32_t>, {0x10, 4, 0, 0})
};

