
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine
/// dependency: InputCore

/// Enum /Script/GameplayDebugger.EGameplayDebuggerOverrideMode
/// Size: 0x04
enum class EGameplayDebuggerOverrideMode : uint8_t
{
	EGameplayDebuggerOverrideMode__Enable                                            = 0,
	EGameplayDebuggerOverrideMode__Disable                                           = 1,
	EGameplayDebuggerOverrideMode__UseDefault                                        = 2,
	EGameplayDebuggerOverrideMode__EGameplayDebuggerOverrideMode_MAX                 = 3
};

/// Enum /Script/GameplayDebugger.EGameplayDebuggerShape
/// Size: 0x13
enum class EGameplayDebuggerShape : uint8_t
{
	EGameplayDebuggerShape__Invalid                                                  = 0,
	EGameplayDebuggerShape__Point                                                    = 1,
	EGameplayDebuggerShape__Segment                                                  = 2,
	EGameplayDebuggerShape__Box                                                      = 3,
	EGameplayDebuggerShape__Cone                                                     = 4,
	EGameplayDebuggerShape__Cylinder                                                 = 5,
	EGameplayDebuggerShape__Circle                                                   = 6,
	EGameplayDebuggerShape__Rectangle                                                = 7,
	EGameplayDebuggerShape__Capsule                                                  = 8,
	EGameplayDebuggerShape__Polygon                                                  = 9,
	EGameplayDebuggerShape__Polyline                                                 = 10,
	EGameplayDebuggerShape__Arrow                                                    = 11,
	EGameplayDebuggerShape__EGameplayDebuggerShape_MAX                               = 12
};

/// Struct /Script/GameplayDebugger.GameplayDebuggerShape
/// Size: 0x0028 (0x000000 - 0x000028)
struct FGameplayDebuggerShape
{ 
	TArray<FVector>                                    ShapeData;                                                  // 0x0000   (0x0010)  
	SDK_UNDEFINED(16,14064) /* FString */              __um(Description);                                          // 0x0010   (0x0010)  
	FColor                                             Color;                                                      // 0x0020   (0x0004)  
	EGameplayDebuggerShape                             Type;                                                       // 0x0024   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0025   (0x0003)  MISSED
};

/// Struct /Script/GameplayDebugger.GameplayDebuggerDataPackHeader
/// Size: 0x0010 (0x000000 - 0x000010)
struct FGameplayDebuggerDataPackHeader
{ 
	int16_t                                            DataVersion;                                                // 0x0000   (0x0002)  
	int16_t                                            SyncCounter;                                                // 0x0002   (0x0002)  
	int32_t                                            DataSize;                                                   // 0x0004   (0x0004)  
	int32_t                                            DataOffset;                                                 // 0x0008   (0x0004)  
	bool                                               bIsCompressed : 1;                                          // 0x000C:0 (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x000D   (0x0003)  MISSED
};

/// Struct /Script/GameplayDebugger.GameplayDebuggerCategoryData
/// Size: 0x0040 (0x000000 - 0x000040)
struct FGameplayDebuggerCategoryData
{ 
	FName                                              CategoryName;                                               // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	SDK_UNDEFINED(16,14065) /* TArray<FString> */      __um(TextLines);                                            // 0x0008   (0x0010)  
	TArray<FGameplayDebuggerShape>                     Shapes;                                                     // 0x0018   (0x0010)  
	TArray<FGameplayDebuggerDataPackHeader>            DataPacks;                                                  // 0x0028   (0x0010)  
	bool                                               bIsEnabled;                                                 // 0x0038   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0039   (0x0007)  MISSED
};

/// Struct /Script/GameplayDebugger.GameplayDebuggerNetPack
/// Size: 0x0018 (0x000000 - 0x000018)
struct FGameplayDebuggerNetPack
{ 
	class AGameplayDebuggerCategoryReplicator*         Owner;                                                      // 0x0000   (0x0008)  
	TArray<FGameplayDebuggerCategoryData>              SavedData;                                                  // 0x0008   (0x0010)  
};

/// Struct /Script/GameplayDebugger.GameplayDebuggerDebugActor
/// Size: 0x0010 (0x000000 - 0x000010)
struct FGameplayDebuggerDebugActor
{ 
	SDK_UNDEFINED(8,14066) /* TWeakObjectPtr<AActor*> */ __um(Actor);                                              // 0x0000   (0x0008)  
	FName                                              ActorName;                                                  // 0x0008   (0x0004)  
	int16_t                                            SyncCounter;                                                // 0x000C   (0x0002)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x000E   (0x0002)  MISSED
};

/// Struct /Script/GameplayDebugger.GameplayDebuggerVisLogSync
/// Size: 0x0010 (0x000000 - 0x000010)
struct FGameplayDebuggerVisLogSync
{ 
	SDK_UNDEFINED(16,14067) /* FString */              __um(DeviceIDs);                                            // 0x0000   (0x0010)  
};

/// Class /Script/GameplayDebugger.GameplayDebuggerCategoryReplicator
/// Size: 0x00B8 (0x000290 - 0x000348)
class AGameplayDebuggerCategoryReplicator : public AActor
{ 
public:
	class APlayerController*                           OwnerPC;                                                    // 0x0290   (0x0008)  
	bool                                               bIsEnabled;                                                 // 0x0298   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0299   (0x0007)  MISSED
	FGameplayDebuggerNetPack                           ReplicatedData;                                             // 0x02A0   (0x0018)  
	FGameplayDebuggerDebugActor                        DebugActor;                                                 // 0x02B8   (0x0010)  
	FGameplayDebuggerVisLogSync                        VisLogSync;                                                 // 0x02C8   (0x0010)  
	class UGameplayDebuggerRenderingComponent*         RenderingComp;                                              // 0x02D8   (0x0008)  
	unsigned char                                      UnknownData01_6[0x68];                                      // 0x02E0   (0x0068)  MISSED


	/// Functions
	// Function /Script/GameplayDebugger.GameplayDebuggerCategoryReplicator.ServerSetViewPoint
	// void ServerSetViewPoint(FVector InViewLocation, FVector InViewDirection);                                             // [0x6fc18c0] RequiredAPI|Net|NetReliableNative|Event|Protected|NetServer|HasDefaults|NetValidate 
	// Function /Script/GameplayDebugger.GameplayDebuggerCategoryReplicator.ServerSetEnabled
	// void ServerSetEnabled(bool bEnable);                                                                                  // [0x6fc1810] RequiredAPI|Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/GameplayDebugger.GameplayDebuggerCategoryReplicator.ServerSetDebugActor
	// void ServerSetDebugActor(class AActor* Actor, bool bSelectInEditor);                                                  // [0x6fc1718] RequiredAPI|Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/GameplayDebugger.GameplayDebuggerCategoryReplicator.ServerSetCategoryEnabled
	// void ServerSetCategoryEnabled(int32_t CategoryID, bool bEnable);                                                      // [0x6fc1620] RequiredAPI|Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/GameplayDebugger.GameplayDebuggerCategoryReplicator.ServerSendExtensionInputEvent
	// void ServerSendExtensionInputEvent(int32_t ExtensionId, int32_t HandlerId);                                           // [0x6fc1538] RequiredAPI|Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/GameplayDebugger.GameplayDebuggerCategoryReplicator.ServerSendCategoryInputEvent
	// void ServerSendCategoryInputEvent(int32_t CategoryID, int32_t HandlerId);                                             // [0x6fc1450] RequiredAPI|Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/GameplayDebugger.GameplayDebuggerCategoryReplicator.ServerResetViewPoint
	// void ServerResetViewPoint();                                                                                          // [0x6fc1404] RequiredAPI|Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/GameplayDebugger.GameplayDebuggerCategoryReplicator.OnRep_ReplicatedData
	// void OnRep_ReplicatedData();                                                                                          // [0x6fc13d0] Final|RequiredAPI|Native|Protected 
	// Function /Script/GameplayDebugger.GameplayDebuggerCategoryReplicator.ClientDataPackPacket
	// void ClientDataPackPacket(FGameplayDebuggerDataPackRPCParams Params);                                                 // [0x6fc1274] RequiredAPI|Net|NetReliableNative|Event|Protected|NetClient 
};

/// Struct /Script/GameplayDebugger.GameplayDebuggerInputConfig
/// Size: 0x0030 (0x000000 - 0x000030)
struct FGameplayDebuggerInputConfig
{ 
	SDK_UNDEFINED(16,14068) /* FString */              __um(ConfigName);                                           // 0x0000   (0x0010)  
	FKey                                               Key;                                                        // 0x0010   (0x0018)  
	bool                                               bModShift : 1;                                              // 0x0028:0 (0x0001)  
	bool                                               bModCtrl : 1;                                               // 0x0028:1 (0x0001)  
	bool                                               bModAlt : 1;                                                // 0x0028:2 (0x0001)  
	bool                                               bModCmd : 1;                                                // 0x0028:3 (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0029   (0x0007)  MISSED
};

/// Struct /Script/GameplayDebugger.GameplayDebuggerCategoryConfig
/// Size: 0x0030 (0x000000 - 0x000030)
struct FGameplayDebuggerCategoryConfig
{ 
	SDK_UNDEFINED(16,14069) /* FString */              __um(CategoryName);                                         // 0x0000   (0x0010)  
	int32_t                                            SlotIdx;                                                    // 0x0010   (0x0004)  
	EGameplayDebuggerOverrideMode                      ActiveInGame;                                               // 0x0014   (0x0001)  
	EGameplayDebuggerOverrideMode                      ActiveInSimulate;                                           // 0x0015   (0x0001)  
	EGameplayDebuggerOverrideMode                      Hidden;                                                     // 0x0016   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x0017   (0x0001)  MISSED
	bool                                               bOverrideSlotIdx : 1;                                       // 0x0018:0 (0x0001)  
	unsigned char                                      UnknownData01_4[0x7];                                       // 0x0019   (0x0007)  MISSED
	TArray<FGameplayDebuggerInputConfig>               InputHandlers;                                              // 0x0020   (0x0010)  
};

/// Struct /Script/GameplayDebugger.GameplayDebuggerExtensionConfig
/// Size: 0x0028 (0x000000 - 0x000028)
struct FGameplayDebuggerExtensionConfig
{ 
	SDK_UNDEFINED(16,14070) /* FString */              __um(ExtensionName);                                        // 0x0000   (0x0010)  
	EGameplayDebuggerOverrideMode                      UseExtension;                                               // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0011   (0x0007)  MISSED
	TArray<FGameplayDebuggerInputConfig>               InputHandlers;                                              // 0x0018   (0x0010)  
};

/// Class /Script/GameplayDebugger.GameplayDebuggerConfig
/// Size: 0x0230 (0x000028 - 0x000258)
class UGameplayDebuggerConfig : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	FKey                                               ActivationKey;                                              // 0x0028   (0x0018)  
	FKey                                               CategoryRowNextKey;                                         // 0x0040   (0x0018)  
	FKey                                               CategoryRowPrevKey;                                         // 0x0058   (0x0018)  
	FKey                                               CategorySlot0;                                              // 0x0070   (0x0018)  
	FKey                                               CategorySlot1;                                              // 0x0088   (0x0018)  
	FKey                                               CategorySlot2;                                              // 0x00A0   (0x0018)  
	FKey                                               CategorySlot3;                                              // 0x00B8   (0x0018)  
	FKey                                               CategorySlot4;                                              // 0x00D0   (0x0018)  
	FKey                                               CategorySlot5;                                              // 0x00E8   (0x0018)  
	FKey                                               CategorySlot6;                                              // 0x0100   (0x0018)  
	FKey                                               CategorySlot7;                                              // 0x0118   (0x0018)  
	FKey                                               CategorySlot8;                                              // 0x0130   (0x0018)  
	FKey                                               CategorySlot9;                                              // 0x0148   (0x0018)  
	float                                              DebugCanvasPaddingLeft;                                     // 0x0160   (0x0004)  
	float                                              DebugCanvasPaddingRight;                                    // 0x0164   (0x0004)  
	float                                              DebugCanvasPaddingTop;                                      // 0x0168   (0x0004)  
	float                                              DebugCanvasPaddingBottom;                                   // 0x016C   (0x0004)  
	bool                                               bDebugCanvasEnableTextShadow;                               // 0x0170   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0171   (0x0007)  MISSED
	TArray<FGameplayDebuggerCategoryConfig>            Categories;                                                 // 0x0178   (0x0010)  
	TArray<FGameplayDebuggerExtensionConfig>           Extensions;                                                 // 0x0188   (0x0010)  
	unsigned char                                      UnknownData02_6[0xC0];                                      // 0x0198   (0x00C0)  MISSED
};

/// Class /Script/GameplayDebugger.GameplayDebuggerUserSettings
/// Size: 0x0010 (0x000030 - 0x000040)
class UGameplayDebuggerUserSettings : public UDeveloperSettings
{ 
public:
	bool                                               bEnableGameplayDebuggerInEditor : 1;                        // 0x0030:0 (0x0001)  
	unsigned char                                      UnknownData00_4[0x3];                                       // 0x0031   (0x0003)  MISSED
	float                                              MaxViewDistance;                                            // 0x0034   (0x0004)  
	float                                              MaxViewAngle;                                               // 0x0038   (0x0004)  
	int32_t                                            FontSize;                                                   // 0x003C   (0x0004)  
};

/// Class /Script/GameplayDebugger.GameplayDebuggerLocalController
/// Size: 0x0060 (0x000028 - 0x000088)
class UGameplayDebuggerLocalController : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	class AGameplayDebuggerCategoryReplicator*         CachedReplicator;                                           // 0x0028   (0x0008)  
	class AGameplayDebuggerPlayerManager*              CachedPlayerManager;                                        // 0x0030   (0x0008)  
	class AActor*                                      DebugActorCandidate;                                        // 0x0038   (0x0008)  
	class UFont*                                       HUDFont;                                                    // 0x0040   (0x0008)  
	unsigned char                                      UnknownData01_6[0x40];                                      // 0x0048   (0x0040)  MISSED
};

/// Struct /Script/GameplayDebugger.GameplayDebuggerPlayerData
/// Size: 0x0018 (0x000000 - 0x000018)
struct FGameplayDebuggerPlayerData
{ 
	class UGameplayDebuggerLocalController*            Controller;                                                 // 0x0000   (0x0008)  
	class UInputComponent*                             InputComponent;                                             // 0x0008   (0x0008)  
	class AGameplayDebuggerCategoryReplicator*         Replicator;                                                 // 0x0010   (0x0008)  
};

/// Class /Script/GameplayDebugger.GameplayDebuggerPlayerManager
/// Size: 0x0030 (0x000290 - 0x0002C0)
class AGameplayDebuggerPlayerManager : public AActor
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0290   (0x0008)  MISSED
	TArray<FGameplayDebuggerPlayerData>                PlayerData;                                                 // 0x0298   (0x0010)  
	TArray<class AGameplayDebuggerCategoryReplicator*> PendingRegistrations;                                       // 0x02A8   (0x0010)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x02B8   (0x0008)  MISSED
};

/// Class /Script/GameplayDebugger.GameplayDebuggerRenderingComponent
/// Size: 0x0060 (0x000550 - 0x0005B0)
class UGameplayDebuggerRenderingComponent : public UDebugDrawComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x60];                                      // 0x0550   (0x0060)  MISSED
};

/// Struct /Script/GameplayDebugger.GameplayDebuggerDataPackRPCParams
/// Size: 0x0028 (0x000000 - 0x000028)
struct FGameplayDebuggerDataPackRPCParams
{ 
	FName                                              CategoryName;                                               // 0x0000   (0x0004)  
	int32_t                                            DataPackIdx;                                                // 0x0004   (0x0004)  
	FGameplayDebuggerDataPackHeader                    Header;                                                     // 0x0008   (0x0010)  
	TArray<char>                                       Data;                                                       // 0x0018   (0x0010)  
};

