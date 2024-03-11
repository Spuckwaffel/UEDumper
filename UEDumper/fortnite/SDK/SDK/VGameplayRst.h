
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: EntityActor
/// dependency: EntityCore
/// dependency: ModularGameplay
/// dependency: NetCore
/// dependency: VerseAssets

/// Struct /Script/VGameplayRst.ActiveSoundInfo
/// Size: 0x0008 (0x000000 - 0x000008)
struct FActiveSoundInfo
{ 
	bool                                               bActive;                                                    // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              StartTime;                                                  // 0x0004   (0x0004)  
};

/// Class /Script/VGameplayRst.AudioComponentBase
/// Size: 0x0010 (0x000088 - 0x000098)
class UAudioComponentBase : public UEntityActorComponent
{ 
public:
	class UVerseAssetPtr*                              SoundAsset;                                                 // 0x0088   (0x0008)  
	FActiveSoundInfo                                   ActiveSoundInfo;                                            // 0x0090   (0x0008)  


	/// Functions
	// Function /Script/VGameplayRst.AudioComponentBase.OnRep_SoundAsset
	// void OnRep_SoundAsset();                                                                                              // [0xa0b2288] Final|Native|Protected 
	// Function /Script/VGameplayRst.AudioComponentBase.OnRep_ActiveSoundInfo
	// void OnRep_ActiveSoundInfo();                                                                                         // [0xa0b20a0] Final|Native|Protected 
};

/// Class /Script/VGameplayRst.ControllerStateComponent
/// Size: 0x0030 (0x0000A0 - 0x0000D0)
class UControllerStateComponent : public UControllerComponent
{ 
public:
	SDK_UNDEFINED(16,9370) /* TArray<FString> */       __um(ActiveStates);                                         // 0x00A0   (0x0010)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x00B0   (0x0020)  MISSED


	/// Functions
	// Function /Script/VGameplayRst.ControllerStateComponent.OnRep_ActiveStates
	// void OnRep_ActiveStates();                                                                                            // [0xa0b20d0] Final|Native|Private 
};

/// Struct /Script/VGameplayRst.DatastoreEntry
/// Size: 0x0014 (0x00000C - 0x000020)
struct FDatastoreEntry : FFastArraySerializerItem
{ 
	FName                                              KeyName;                                                    // 0x000C   (0x0004)  
	SDK_UNDEFINED(16,9371) /* FString */               __um(ValueData);                                            // 0x0010   (0x0010)  
};

/// Struct /Script/VGameplayRst.DatastoreState
/// Size: 0x0020 (0x000108 - 0x000128)
struct FDatastoreState : FFastArraySerializer
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0108   (0x0008)  MISSED
	TArray<FDatastoreEntry>                            EntriesArray;                                               // 0x0110   (0x0010)  
	class UDatastoreComponentBase*                     OwningComponent;                                            // 0x0120   (0x0008)  
};

/// Class /Script/VGameplayRst.DatastoreComponentBase
/// Size: 0x0140 (0x0000D0 - 0x000210)
class UDatastoreComponentBase : public UEntityActorPlayerComponent
{ 
public:
	FDatastoreState                                    ReplicatedDatastoreState;                                   // 0x00D0   (0x0128)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x01F8   (0x0018)  MISSED
};

/// Class /Script/VGameplayRst.VerseLevelStreamingPlayerControllerRpcComponent
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UVerseLevelStreamingPlayerControllerRpcComponent : public UActorComponent
{ 
public:


	/// Functions
	// Function /Script/VGameplayRst.VerseLevelStreamingPlayerControllerRpcComponent.TellServer_ClientLevelUnloaded
	// void TellServer_ClientLevelUnloaded(class UVerseLevelStreamingComponentBase* LevelStreamingComponent);                // [0x6b2e50c] Net|NetReliableNative|Event|Public|NetServer 
	// Function /Script/VGameplayRst.VerseLevelStreamingPlayerControllerRpcComponent.TellServer_ClientLevelLoaded
	// void TellServer_ClientLevelLoaded(class UVerseLevelStreamingComponentBase* LevelStreamingComponent);                  // [0x6cb20f4] Net|NetReliableNative|Event|Public|NetServer 
};

/// Struct /Script/VGameplayRst.VerseLevelStreamingLevelIdentifier
/// Size: 0x0028 (0x000000 - 0x000028)
struct FVerseLevelStreamingLevelIdentifier
{ 
	FSoftObjectPath                                    LevelPath;                                                  // 0x0000   (0x0018)  
	SDK_UNDEFINED(16,9372) /* FString */               __um(LevelNameOverride);                                    // 0x0018   (0x0010)  
};

/// Struct /Script/VGameplayRst.VerseLevelStreamingLevelStatus
/// Size: 0x0028 (0x000000 - 0x000028)
struct FVerseLevelStreamingLevelStatus
{ 
	class ULevelStreamingDynamic*                      Streamer;                                                   // 0x0010   (0x0008)  
	class UVerseAssetPtr*                              LevelAsset;                                                 // 0x0018   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0020   (0x0008)  MISSED
};

/// Class /Script/VGameplayRst.VerseLevelStreamingComponentBase
/// Size: 0x00A8 (0x000088 - 0x000130)
class UVerseLevelStreamingComponentBase : public UEntityActorComponent
{ 
public:
	FVerseLevelStreamingLevelIdentifier                NewLevel;                                                   // 0x0088   (0x0028)  
	FVerseLevelStreamingLevelStatus                    LevelStatus;                                                // 0x00B0   (0x0028)  
	unsigned char                                      UnknownData00_6[0x58];                                      // 0x00D8   (0x0058)  MISSED


	/// Functions
	// Function /Script/VGameplayRst.VerseLevelStreamingComponentBase.OnRep_NewLevel
	// void OnRep_NewLevel();                                                                                                // [0xa0b2240] Final|Native|Public  
	// Function /Script/VGameplayRst.VerseLevelStreamingComponentBase.OnLevelUnloaded_Server
	// void OnLevelUnloaded_Server();                                                                                        // [0xa0b208c] Final|Native|Public  
	// Function /Script/VGameplayRst.VerseLevelStreamingComponentBase.OnLevelUnloaded_Client
	// void OnLevelUnloaded_Client();                                                                                        // [0xa0b2078] Final|Native|Public  
	// Function /Script/VGameplayRst.VerseLevelStreamingComponentBase.OnLevelShown_Server
	// void OnLevelShown_Server();                                                                                           // [0xa0b2064] Final|Native|Public  
	// Function /Script/VGameplayRst.VerseLevelStreamingComponentBase.OnLevelShown_Client
	// void OnLevelShown_Client();                                                                                           // [0xa0b2050] Final|Native|Public  
};

/// Class /Script/VGameplayRst.PointLightComponentBase
/// Size: 0x0008 (0x000088 - 0x000090)
class UPointLightComponentBase : public UEntityActorComponent
{ 
public:
	class UVerseLightPropertiesBase*                   ReplicatedLightProperties;                                  // 0x0088   (0x0008)  
};

/// Class /Script/VGameplayRst.SpotLightComponentBase
/// Size: 0x0008 (0x000088 - 0x000090)
class USpotLightComponentBase : public UEntityActorComponent
{ 
public:
	class UVerseLightPropertiesBase*                   ReplicatedLightProperties;                                  // 0x0088   (0x0008)  
};

/// Class /Script/VGameplayRst.VerseLightPropertiesBase
/// Size: 0x0020 (0x000028 - 0x000048)
class UVerseLightPropertiesBase : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	float                                              Intensity;                                                  // 0x0028   (0x0004)  
	FLinearColor                                       LightColor;                                                 // 0x002C   (0x0010)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x003C   (0x0004)  MISSED
	class ULightComponentBase*                         LightComponent;                                             // 0x0040   (0x0008)  


	/// Functions
	// Function /Script/VGameplayRst.VerseLightPropertiesBase.OnRep_LightComponent
	// void OnRep_LightComponent();                                                                                          // [0xa0b21c0] Final|Native|Protected 
	// Function /Script/VGameplayRst.VerseLightPropertiesBase.OnRep_LightColor
	// void OnRep_LightColor();                                                                                              // [0xa0b2180] Final|Native|Protected 
	// Function /Script/VGameplayRst.VerseLightPropertiesBase.OnRep_Intensity
	// void OnRep_Intensity();                                                                                               // [0xa0b214c] Final|Native|Protected 
};

/// Class /Script/VGameplayRst.VerseLocalLightProperties
/// Size: 0x0008 (0x000048 - 0x000050)
class UVerseLocalLightProperties : public UVerseLightPropertiesBase
{ 
public:
	float                                              AttenuationRadius;                                          // 0x0048   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x004C   (0x0004)  MISSED


	/// Functions
	// Function /Script/VGameplayRst.VerseLocalLightProperties.OnRep_AttenuationRadius
	// void OnRep_AttenuationRadius();                                                                                       // [0xa0b20e4] Final|Native|Protected 
};

/// Class /Script/VGameplayRst.VersePointLightProperties
/// Size: 0x0008 (0x000050 - 0x000058)
class UVersePointLightProperties : public UVerseLocalLightProperties
{ 
public:
	float                                              SourceRadius;                                               // 0x0050   (0x0004)  
	float                                              SourceLength;                                               // 0x0054   (0x0004)  


	/// Functions
	// Function /Script/VGameplayRst.VersePointLightProperties.OnRep_SourceRadius
	// void OnRep_SourceRadius();                                                                                            // [0xa0b22e4] Final|Native|Public  
	// Function /Script/VGameplayRst.VersePointLightProperties.OnRep_SourceLength
	// void OnRep_SourceLength();                                                                                            // [0xa0b22b0] Final|Native|Public  
};

/// Class /Script/VGameplayRst.VerseSpotLightProperties
/// Size: 0x0008 (0x000058 - 0x000060)
class UVerseSpotLightProperties : public UVersePointLightProperties
{ 
public:
	float                                              InnerConeAngle;                                             // 0x0058   (0x0004)  
	float                                              OuterConeAngle;                                             // 0x005C   (0x0004)  


	/// Functions
	// Function /Script/VGameplayRst.VerseSpotLightProperties.OnRep_OuterConeAngle
	// void OnRep_OuterConeAngle();                                                                                          // [0xa0b2254] Final|Native|Public  
	// Function /Script/VGameplayRst.VerseSpotLightProperties.OnRep_InnerConeAngle
	// void OnRep_InnerConeAngle();                                                                                          // [0xa0b2118] Final|Native|Public  
};

