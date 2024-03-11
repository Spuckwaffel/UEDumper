
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType

/// Enum /Script/CoreUObject.EAutomationEventType
/// Size: 0x04
enum class EAutomationEventType : uint8_t
{
	EAutomationEventType__Info                                                       = 0,
	EAutomationEventType__Warning                                                    = 1,
	EAutomationEventType__Error                                                      = 2,
	EAutomationEventType__EAutomationEventType_MAX                                   = 3
};

/// Enum /Script/CoreUObject.ERangeBoundTypes
/// Size: 0x04
enum class ERangeBoundTypes : uint8_t
{
	ERangeBoundTypes__Exclusive                                                      = 0,
	ERangeBoundTypes__Inclusive                                                      = 1,
	ERangeBoundTypes__Open                                                           = 2,
	ERangeBoundTypes__ERangeBoundTypes_MAX                                           = 3
};

/// Enum /Script/CoreUObject.EInterpCurveMode
/// Size: 0x07
enum class EInterpCurveMode : uint8_t
{
	CIM_Linear                                                                       = 0,
	CIM_CurveAuto                                                                    = 1,
	CIM_Constant                                                                     = 2,
	CIM_CurveUser                                                                    = 3,
	CIM_CurveBreak                                                                   = 4,
	CIM_CurveAutoClamped                                                             = 5,
	CIM_MAX                                                                          = 6
};

/// Enum /Script/CoreUObject.EInputDeviceConnectionState
/// Size: 0x05
enum class EInputDeviceConnectionState : uint8_t
{
	EInputDeviceConnectionState__Invalid                                             = 0,
	EInputDeviceConnectionState__Unknown                                             = 1,
	EInputDeviceConnectionState__Disconnected                                        = 2,
	EInputDeviceConnectionState__Connected                                           = 3,
	EInputDeviceConnectionState__EInputDeviceConnectionState_MAX                     = 4
};

/// Enum /Script/CoreUObject.ELocalizedTextSourceCategory
/// Size: 0x04
enum class ELocalizedTextSourceCategory : uint8_t
{
	ELocalizedTextSourceCategory__Game                                               = 0,
	ELocalizedTextSourceCategory__Engine                                             = 1,
	ELocalizedTextSourceCategory__Editor                                             = 2,
	ELocalizedTextSourceCategory__ELocalizedTextSourceCategory_MAX                   = 3
};

/// Enum /Script/CoreUObject.ELifetimeCondition
/// Size: 0x18
enum class ELifetimeCondition : uint8_t
{
	COND_None                                                                        = 0,
	COND_InitialOnly                                                                 = 1,
	COND_OwnerOnly                                                                   = 2,
	COND_SkipOwner                                                                   = 3,
	COND_SimulatedOnly                                                               = 4,
	COND_AutonomousOnly                                                              = 5,
	COND_SimulatedOrPhysics                                                          = 6,
	COND_InitialOrOwner                                                              = 7,
	COND_Custom                                                                      = 8,
	COND_ReplayOrOwner                                                               = 9,
	COND_ReplayOnly                                                                  = 10,
	COND_SimulatedOnlyNoReplay                                                       = 11,
	COND_SimulatedOrPhysicsNoReplay                                                  = 12,
	COND_SkipReplay                                                                  = 13,
	COND_Dynamic                                                                     = 14,
	COND_Never                                                                       = 15,
	COND_NetGroup                                                                    = 16,
	COND_Max                                                                         = 17
};

/// Enum /Script/CoreUObject.EDataValidationUsecase
/// Size: 0x07
enum class EDataValidationUsecase : uint8_t
{
	EDataValidationUsecase__None                                                     = 0,
	EDataValidationUsecase__Manual                                                   = 1,
	EDataValidationUsecase__Commandlet                                               = 2,
	EDataValidationUsecase__Save                                                     = 3,
	EDataValidationUsecase__PreSubmit                                                = 4,
	EDataValidationUsecase__Script                                                   = 5,
	EDataValidationUsecase__EDataValidationUsecase_MAX                               = 6
};

/// Enum /Script/CoreUObject.ESearchCase
/// Size: 0x03
enum class ESearchCase : uint8_t
{
	ESearchCase__CaseSensitive                                                       = 0,
	ESearchCase__IgnoreCase                                                          = 1,
	ESearchCase__ESearchCase_MAX                                                     = 2
};

/// Enum /Script/CoreUObject.ESearchDir
/// Size: 0x03
enum class ESearchDir : uint8_t
{
	ESearchDir__FromStart                                                            = 0,
	ESearchDir__FromEnd                                                              = 1,
	ESearchDir__ESearchDir_MAX                                                       = 2
};

/// Enum /Script/CoreUObject.ELogTimes
/// Size: 0x05
enum class ELogTimes : uint8_t
{
	ELogTimes__None                                                                  = 0,
	ELogTimes__UTC                                                                   = 1,
	ELogTimes__SinceGStartTime                                                       = 2,
	ELogTimes__Local                                                                 = 3,
	ELogTimes__ELogTimes_MAX                                                         = 4
};

/// Enum /Script/CoreUObject.EAxis
/// Size: 0x05
enum class EAxis : uint8_t
{
	EAxis__None                                                                      = 0,
	EAxis__X                                                                         = 1,
	EAxis__Y                                                                         = 2,
	EAxis__Z                                                                         = 3,
	EAxis__EAxis_MAX                                                                 = 4
};

/// Enum /Script/CoreUObject.EAxisList
/// Size: 0x13
enum class EAxisList : uint8_t
{
	EAxisList__None                                                                  = 0,
	EAxisList__X                                                                     = 1,
	EAxisList__Y                                                                     = 2,
	EAxisList__Z                                                                     = 4,
	EAxisList__Screen                                                                = 8,
	EAxisList__XY                                                                    = 3,
	EAxisList__XZ                                                                    = 5,
	EAxisList__YZ                                                                    = 6,
	EAxisList__XYZ                                                                   = 7,
	EAxisList__All                                                                   = 15,
	EAxisList__ZRotation                                                             = 6,
	EAxisList__Rotate2D                                                              = 8,
	EAxisList__EAxisList_MAX                                                         = 16
};

/// Enum /Script/CoreUObject.EPixelFormat
/// Size: 0x93
enum class EPixelFormat : uint8_t
{
	PF_Unknown                                                                       = 0,
	PF_A32B32G32R32F                                                                 = 1,
	PF_B8G8R8A8                                                                      = 2,
	PF_G8                                                                            = 3,
	PF_G16                                                                           = 4,
	PF_DXT1                                                                          = 5,
	PF_DXT3                                                                          = 6,
	PF_DXT5                                                                          = 7,
	PF_UYVY                                                                          = 8,
	PF_FloatRGB                                                                      = 9,
	PF_FloatRGBA                                                                     = 10,
	PF_DepthStencil                                                                  = 11,
	PF_ShadowDepth                                                                   = 12,
	PF_R32_FLOAT                                                                     = 13,
	PF_G16R16                                                                        = 14,
	PF_G16R16F                                                                       = 15,
	PF_G16R16F_FILTER                                                                = 16,
	PF_G32R32F                                                                       = 17,
	PF_A2B10G10R10                                                                   = 18,
	PF_A16B16G16R16                                                                  = 19,
	PF_D24                                                                           = 20,
	PF_R16F                                                                          = 21,
	PF_R16F_FILTER                                                                   = 22,
	PF_BC5                                                                           = 23,
	PF_V8U8                                                                          = 24,
	PF_A1                                                                            = 25,
	PF_FloatR11G11B10                                                                = 26,
	PF_A8                                                                            = 27,
	PF_R32_UINT                                                                      = 28,
	PF_R32_SINT                                                                      = 29,
	PF_PVRTC2                                                                        = 30,
	PF_PVRTC4                                                                        = 31,
	PF_R16_UINT                                                                      = 32,
	PF_R16_SINT                                                                      = 33,
	PF_R16G16B16A16_UINT                                                             = 34,
	PF_R16G16B16A16_SINT                                                             = 35,
	PF_R5G6B5_UNORM                                                                  = 36,
	PF_R8G8B8A8                                                                      = 37,
	PF_A8R8G8B8                                                                      = 38,
	PF_BC4                                                                           = 39,
	PF_R8G8                                                                          = 40,
	PF_ATC_RGB                                                                       = 41,
	PF_ATC_RGBA_E                                                                    = 42,
	PF_ATC_RGBA_I                                                                    = 43,
	PF_X24_G8                                                                        = 44,
	PF_ETC1                                                                          = 45,
	PF_ETC2_RGB                                                                      = 46,
	PF_ETC2_RGBA                                                                     = 47,
	PF_R32G32B32A32_UINT                                                             = 48,
	PF_R16G16_UINT                                                                   = 49,
	PF_ASTC_4x4                                                                      = 50,
	PF_ASTC_6x6                                                                      = 51,
	PF_ASTC_8x8                                                                      = 52,
	PF_ASTC_10x10                                                                    = 53,
	PF_ASTC_12x12                                                                    = 54,
	PF_BC6H                                                                          = 55,
	PF_BC7                                                                           = 56,
	PF_R8_UINT                                                                       = 57,
	PF_L8                                                                            = 58,
	PF_XGXR8                                                                         = 59,
	PF_R8G8B8A8_UINT                                                                 = 60,
	PF_R8G8B8A8_SNORM                                                                = 61,
	PF_R16G16B16A16_UNORM                                                            = 62,
	PF_R16G16B16A16_SNORM                                                            = 63,
	PF_PLATFORM_HDR                                                                  = 64,
	PF_PLATFORM_HDR66                                                                = 65,
	PF_PLATFORM_HDR67                                                                = 66,
	PF_NV12                                                                          = 67,
	PF_R32G32_UINT                                                                   = 68,
	PF_ETC2_R11_EAC                                                                  = 69,
	PF_ETC2_RG11_EAC                                                                 = 70,
	PF_R8                                                                            = 71,
	PF_B5G5R5A1_UNORM                                                                = 72,
	PF_ASTC_4x4_HDR                                                                  = 73,
	PF_ASTC_6x6_HDR                                                                  = 74,
	PF_ASTC_8x8_HDR                                                                  = 75,
	PF_ASTC_10x10_HDR                                                                = 76,
	PF_ASTC_12x12_HDR                                                                = 77,
	PF_G16R16_SNORM                                                                  = 78,
	PF_R8G8_UINT                                                                     = 79,
	PF_R32G32B32_UINT                                                                = 80,
	PF_R32G32B32_SINT                                                                = 81,
	PF_R32G32B32F                                                                    = 82,
	PF_R8_SINT                                                                       = 83,
	PF_R64_UINT                                                                      = 84,
	PF_R9G9B9EXP5                                                                    = 85,
	PF_P010                                                                          = 86,
	PF_ASTC_4x4_NORM_RG                                                              = 87,
	PF_ASTC_6x6_NORM_RG                                                              = 88,
	PF_ASTC_8x8_NORM_RG                                                              = 89,
	PF_ASTC_10x10_NORM_RG                                                            = 90,
	PF_ASTC_12x12_NORM_RG                                                            = 91,
	PF_MAX                                                                           = 92
};

/// Enum /Script/CoreUObject.EMouseCursor
/// Size: 0x15
enum class EMouseCursor : uint8_t
{
	EMouseCursor__None                                                               = 0,
	EMouseCursor__Default                                                            = 1,
	EMouseCursor__TextEditBeam                                                       = 2,
	EMouseCursor__ResizeLeftRight                                                    = 3,
	EMouseCursor__ResizeUpDown                                                       = 4,
	EMouseCursor__ResizeSouthEast                                                    = 5,
	EMouseCursor__ResizeSouthWest                                                    = 6,
	EMouseCursor__CardinalCross                                                      = 7,
	EMouseCursor__Crosshairs                                                         = 8,
	EMouseCursor__Hand                                                               = 9,
	EMouseCursor__GrabHand                                                           = 10,
	EMouseCursor__GrabHandClosed                                                     = 11,
	EMouseCursor__SlashedCircle                                                      = 12,
	EMouseCursor__EyeDropper                                                         = 13,
	EMouseCursor__EMouseCursor_MAX                                                   = 14
};

/// Enum /Script/CoreUObject.EUnit
/// Size: 0x59
enum class EUnit : uint8_t
{
	EUnit__Micrometers                                                               = 0,
	EUnit__Millimeters                                                               = 1,
	EUnit__Centimeters                                                               = 2,
	EUnit__Meters                                                                    = 3,
	EUnit__Kilometers                                                                = 4,
	EUnit__Inches                                                                    = 5,
	EUnit__Feet                                                                      = 6,
	EUnit__Yards                                                                     = 7,
	EUnit__Miles                                                                     = 8,
	EUnit__Lightyears                                                                = 9,
	EUnit__Degrees                                                                   = 10,
	EUnit__Radians                                                                   = 11,
	EUnit__CentimetersPerSecond                                                      = 12,
	EUnit__MetersPerSecond                                                           = 13,
	EUnit__KilometersPerHour                                                         = 14,
	EUnit__MilesPerHour                                                              = 15,
	EUnit__DegreesPerSecond                                                          = 16,
	EUnit__RadiansPerSecond                                                          = 17,
	EUnit__CentimetersPerSecondSquared                                               = 18,
	EUnit__MetersPerSecondSquared                                                    = 19,
	EUnit__Celsius                                                                   = 20,
	EUnit__Farenheit                                                                 = 21,
	EUnit__Kelvin                                                                    = 22,
	EUnit__Micrograms                                                                = 23,
	EUnit__Milligrams                                                                = 24,
	EUnit__Grams                                                                     = 25,
	EUnit__Kilograms                                                                 = 26,
	EUnit__MetricTons                                                                = 27,
	EUnit__Ounces                                                                    = 28,
	EUnit__Pounds                                                                    = 29,
	EUnit__Stones                                                                    = 30,
	EUnit__Newtons                                                                   = 35,
	EUnit__PoundsForce                                                               = 36,
	EUnit__KilogramsForce                                                            = 37,
	EUnit__KilogramCentimetersPerSecondSquared                                       = 38,
	EUnit__NewtonMeters                                                              = 39,
	EUnit__KilogramCentimetersSquaredPerSecondSquared                                = 40,
	EUnit__Hertz                                                                     = 41,
	EUnit__Kilohertz                                                                 = 42,
	EUnit__Megahertz                                                                 = 43,
	EUnit__Gigahertz                                                                 = 44,
	EUnit__RevolutionsPerMinute                                                      = 45,
	EUnit__Bytes                                                                     = 46,
	EUnit__Kilobytes                                                                 = 47,
	EUnit__Megabytes                                                                 = 48,
	EUnit__Gigabytes                                                                 = 49,
	EUnit__Terabytes                                                                 = 50,
	EUnit__Lumens                                                                    = 51,
	EUnit__Milliseconds                                                              = 58,
	EUnit__Seconds                                                                   = 59,
	EUnit__Minutes                                                                   = 60,
	EUnit__Hours                                                                     = 61,
	EUnit__Days                                                                      = 62,
	EUnit__Months                                                                    = 63,
	EUnit__Years                                                                     = 64,
	EUnit__Multiplier                                                                = 67,
	EUnit__Percentage                                                                = 66,
	EUnit__Unspecified                                                               = 72,
	EUnit__EUnit_MAX                                                                 = 73
};

/// Enum /Script/CoreUObject.EPropertyAccessChangeNotifyMode
/// Size: 0x04
enum class EPropertyAccessChangeNotifyMode : uint8_t
{
	EPropertyAccessChangeNotifyMode__Default                                         = 0,
	EPropertyAccessChangeNotifyMode__Never                                           = 1,
	EPropertyAccessChangeNotifyMode__Always                                          = 2,
	EPropertyAccessChangeNotifyMode__EPropertyAccessChangeNotifyMode_MAX             = 3
};

/// Enum /Script/CoreUObject.EAppMsgCategory
/// Size: 0x05
enum class EAppMsgCategory : uint8_t
{
	EAppMsgCategory__Warning                                                         = 0,
	EAppMsgCategory__Error                                                           = 1,
	EAppMsgCategory__Success                                                         = 2,
	EAppMsgCategory__Info                                                            = 3,
	EAppMsgCategory__EAppMsgCategory_MAX                                             = 4
};

/// Enum /Script/CoreUObject.EAppReturnType
/// Size: 0x09
enum class EAppReturnType : uint8_t
{
	EAppReturnType__No                                                               = 0,
	EAppReturnType__Yes                                                              = 1,
	EAppReturnType__YesAll                                                           = 2,
	EAppReturnType__NoAll                                                            = 3,
	EAppReturnType__Cancel                                                           = 4,
	EAppReturnType__Ok                                                               = 5,
	EAppReturnType__Retry                                                            = 6,
	EAppReturnType__Continue                                                         = 7,
	EAppReturnType__EAppReturnType_MAX                                               = 8
};

/// Enum /Script/CoreUObject.EAppMsgType
/// Size: 0x09
enum class EAppMsgType : uint8_t
{
	EAppMsgType__Ok                                                                  = 0,
	EAppMsgType__YesNo                                                               = 1,
	EAppMsgType__OkCancel                                                            = 2,
	EAppMsgType__YesNoCancel                                                         = 3,
	EAppMsgType__CancelRetryContinue                                                 = 4,
	EAppMsgType__YesNoYesAllNoAll                                                    = 5,
	EAppMsgType__YesNoYesAllNoAllCancel                                              = 6,
	EAppMsgType__YesNoYesAll                                                         = 7,
	EAppMsgType__EAppMsgType_MAX                                                     = 8
};

/// Enum /Script/CoreUObject.EInputDeviceTriggerMask
/// Size: 0x05
enum class EInputDeviceTriggerMask : uint8_t
{
	EInputDeviceTriggerMask__None                                                    = 0,
	EInputDeviceTriggerMask__Left                                                    = 1,
	EInputDeviceTriggerMask__Right                                                   = 2,
	EInputDeviceTriggerMask__All                                                     = 3,
	EInputDeviceTriggerMask__EInputDeviceTriggerMask_MAX                             = 4
};

/// Enum /Script/CoreUObject.EDataValidationResult
/// Size: 0x04
enum class EDataValidationResult : uint8_t
{
	EDataValidationResult__Invalid                                                   = 0,
	EDataValidationResult__Valid                                                     = 1,
	EDataValidationResult__NotValidated                                              = 2,
	EDataValidationResult__EDataValidationResult_MAX                                 = 3
};

/// Enum /Script/CoreUObject.EOverriddenPropertyOperation
/// Size: 0x06
enum class EOverriddenPropertyOperation : uint8_t
{
	EOverriddenPropertyOperation__None                                               = 0,
	EOverriddenPropertyOperation__Modified                                           = 1,
	EOverriddenPropertyOperation__Replace                                            = 2,
	EOverriddenPropertyOperation__Add                                                = 3,
	EOverriddenPropertyOperation__Remove                                             = 4,
	EOverriddenPropertyOperation__EOverriddenPropertyOperation_MAX                   = 5
};

/// Class /Script/CoreUObject.Object
/// Size: 0x0028 (0x000000 - 0x000028)
#pragma pack(push, 0x1)
class alignas(0x0) UObject
{ 
public:
	uint64_t                                           vtable;                                                     // 0x0000   (0x0008)  
	SDK_UNDEFINED(4,0) /* EObjectFlags */              __um(ObjectFlags);                                          // 0x0008   (0x0004)  
	int                                                InternalIndex;                                              // 0x000C   (0x0004)  
	class UClass*                                      ClassPrivate;                                               // 0x0010   (0x0008)  
	FName                                              NamePrivate;                                                // 0x0018   (0x0008)  
	class UObject*                                     OuterPrivate;                                               // 0x0020   (0x0008)  


	/// Functions
	// Function /Script/CoreUObject.Object.ExecuteUbergraph
	// void ExecuteUbergraph(int32_t EntryPoint);                                                                            // [0x18a39e4] Event|Public|BlueprintEvent 
};
#pragma pack(pop)

/// Class /Script/CoreUObject.Interface
/// Size: 0x0000 (0x000028 - 0x000028)
class UInterface : public UObject
{ 
public:
};

/// Class /Script/CoreUObject.EditorPathObjectInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UEditorPathObjectInterface : public UInterface
{ 
public:
};

/// Class /Script/CoreUObject.GCObjectReferencer
/// Size: 0x0010 (0x000028 - 0x000038)
class UGCObjectReferencer : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x38];                                      // 0x0000   (0x0038)  MISSED
};

/// Class /Script/CoreUObject.TextBuffer
/// Size: 0x0028 (0x000028 - 0x000050)
class UTextBuffer : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x50];                                      // 0x0000   (0x0050)  MISSED
};

/// Class /Script/CoreUObject.Field
/// Size: 0x0008 (0x000028 - 0x000030)
#pragma pack(push, 0x1)
class alignas(0x0) UField : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	class UField*                                      Next;                                                       // 0x0028   (0x0008)  
};
#pragma pack(pop)

/// Class /Script/CoreUObject.Struct
/// Size: 0x0080 (0x000030 - 0x0000B0)
#pragma pack(push, 0x1)
class alignas(0x0) UStruct : public UField
{ 
public:
	unsigned char                                      UnknownData00_3[0x30];                                      // 0x0000   (0x0030)  MISSED
	class UStruct*                                     SuperStruct;                                                // 0x0030   (0x0008)  
	class UField*                                      Children;                                                   // 0x0038   (0x0008)  
};
#pragma pack(pop)

/// Class /Script/CoreUObject.ScriptStruct
/// Size: 0x0010 (0x0000B0 - 0x0000C0)
class UScriptStruct : public UStruct
{ 
public:
	unsigned char                                      UnknownData00_1[0xC0];                                      // 0x0000   (0x00C0)  MISSED
};

/// Class /Script/CoreUObject.Package
/// Size: 0x0050 (0x000028 - 0x000078)
class UPackage : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x78];                                      // 0x0000   (0x0078)  MISSED
};

/// Class /Script/CoreUObject.Class
/// Size: 0x0150 (0x0000B0 - 0x000200)
class UClass : public UStruct
{ 
public:
	unsigned char                                      UnknownData00_1[0x200];                                     // 0x0000   (0x0200)  MISSED
};

/// Class /Script/CoreUObject.Function
/// Size: 0x0030 (0x0000B0 - 0x0000E0)
class UFunction : public UStruct
{ 
public:
	unsigned char                                      UnknownData00_1[0xE0];                                      // 0x0000   (0x00E0)  MISSED
};

/// Class /Script/CoreUObject.DelegateFunction
/// Size: 0x0000 (0x0000E0 - 0x0000E0)
class UDelegateFunction : public UFunction
{ 
public:
};

/// Class /Script/CoreUObject.SparseDelegateFunction
/// Size: 0x0008 (0x0000E0 - 0x0000E8)
class USparseDelegateFunction : public UDelegateFunction
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00E0   (0x0008)  MISSED
};

/// Class /Script/CoreUObject.Enum
/// Size: 0x0038 (0x000030 - 0x000068)
class UEnum : public UField
{ 
public:
	unsigned char                                      UnknownData00_1[0x68];                                      // 0x0000   (0x0068)  MISSED
};

/// Struct /Script/CoreUObject.ObjectCookedMetaDataStore
/// Size: 0x0050 (0x000000 - 0x000050)
struct FObjectCookedMetaDataStore
{ 
	SDK_UNDEFINED(80,1) /* TMap<FName, FString> */     __um(ObjectMetaData);                                       // 0x0000   (0x0050)  
};

/// Class /Script/CoreUObject.EnumCookedMetaData
/// Size: 0x0050 (0x000028 - 0x000078)
class UEnumCookedMetaData : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	FObjectCookedMetaDataStore                         EnumMetaData;                                               // 0x0028   (0x0050)  
};

/// Struct /Script/CoreUObject.StructCookedMetaDataStore
/// Size: 0x00A0 (0x000000 - 0x0000A0)
struct FStructCookedMetaDataStore
{ 
	FObjectCookedMetaDataStore                         ObjectMetaData;                                             // 0x0000   (0x0050)  
	SDK_UNDEFINED(80,2) /* TMap<FName, FFieldCookedMetaDataStore> */ __um(PropertiesMetaData);                     // 0x0050   (0x0050)  
};

/// Class /Script/CoreUObject.StructCookedMetaData
/// Size: 0x00A0 (0x000028 - 0x0000C8)
class UStructCookedMetaData : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	FStructCookedMetaDataStore                         StructMetaData;                                             // 0x0028   (0x00A0)  
};

/// Class /Script/CoreUObject.ClassCookedMetaData
/// Size: 0x00F0 (0x000028 - 0x000118)
class UClassCookedMetaData : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	FStructCookedMetaDataStore                         ClassMetaData;                                              // 0x0028   (0x00A0)  
	SDK_UNDEFINED(80,3) /* TMap<FName, FStructCookedMetaDataStore> */ __um(FunctionsMetaData);                     // 0x00C8   (0x0050)  
};

/// Class /Script/CoreUObject.PackageMap
/// Size: 0x00B8 (0x000028 - 0x0000E0)
class UPackageMap : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0xE0];                                      // 0x0000   (0x00E0)  MISSED
};

/// Class /Script/CoreUObject.ObjectReachabilityStressData
/// Size: 0x0010 (0x000028 - 0x000038)
class UObjectReachabilityStressData : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x38];                                      // 0x0000   (0x0038)  MISSED
};

/// Class /Script/CoreUObject.LinkerPlaceholderClass
/// Size: 0x01C0 (0x000200 - 0x0003C0)
class ULinkerPlaceholderClass : public UClass
{ 
public:
	unsigned char                                      UnknownData00_1[0x1C0];                                     // 0x0200   (0x01C0)  MISSED
};

/// Class /Script/CoreUObject.LinkerPlaceholderExportObject
/// Size: 0x00D0 (0x000028 - 0x0000F8)
class ULinkerPlaceholderExportObject : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0xF8];                                      // 0x0000   (0x00F8)  MISSED
};

/// Class /Script/CoreUObject.LinkerPlaceholderFunction
/// Size: 0x01C0 (0x0000E0 - 0x0002A0)
class ULinkerPlaceholderFunction : public UFunction
{ 
public:
	unsigned char                                      UnknownData00_1[0x1C0];                                     // 0x00E0   (0x01C0)  MISSED
};

/// Class /Script/CoreUObject.MetaData
/// Size: 0x00A0 (0x000028 - 0x0000C8)
class UMetaData : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0xC8];                                      // 0x0000   (0x00C8)  MISSED
};

/// Class /Script/CoreUObject.ObjectRedirector
/// Size: 0x0008 (0x000028 - 0x000030)
class UObjectRedirector : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x0000   (0x0030)  MISSED
};

/// Class /Script/CoreUObject.Property
/// Size: 0x0040 (0x000030 - 0x000070)
class UProperty : public UField
{ 
public:
	unsigned char                                      UnknownData00_1[0x70];                                      // 0x0000   (0x0070)  MISSED
};

/// Class /Script/CoreUObject.EnumProperty
/// Size: 0x0010 (0x000070 - 0x000080)
class UEnumProperty : public UProperty
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0070   (0x0010)  MISSED
};

/// Class /Script/CoreUObject.ArrayProperty
/// Size: 0x0008 (0x000070 - 0x000078)
class UArrayProperty : public UProperty
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0070   (0x0008)  MISSED
};

/// Class /Script/CoreUObject.ObjectPropertyBase
/// Size: 0x0008 (0x000070 - 0x000078)
class UObjectPropertyBase : public UProperty
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0070   (0x0008)  MISSED
};

/// Class /Script/CoreUObject.BoolProperty
/// Size: 0x0008 (0x000070 - 0x000078)
class UBoolProperty : public UProperty
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0070   (0x0008)  MISSED
};

/// Class /Script/CoreUObject.NumericProperty
/// Size: 0x0000 (0x000070 - 0x000070)
class UNumericProperty : public UProperty
{ 
public:
};

/// Class /Script/CoreUObject.ByteProperty
/// Size: 0x0008 (0x000070 - 0x000078)
class UByteProperty : public UNumericProperty
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0070   (0x0008)  MISSED
};

/// Class /Script/CoreUObject.ObjectProperty
/// Size: 0x0000 (0x000078 - 0x000078)
class UObjectProperty : public UObjectPropertyBase
{ 
public:
};

/// Class /Script/CoreUObject.ClassProperty
/// Size: 0x0008 (0x000078 - 0x000080)
class UClassProperty : public UObjectProperty
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0078   (0x0008)  MISSED
};

/// Class /Script/CoreUObject.DelegateProperty
/// Size: 0x0008 (0x000070 - 0x000078)
class UDelegateProperty : public UProperty
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0070   (0x0008)  MISSED
};

/// Class /Script/CoreUObject.DoubleProperty
/// Size: 0x0000 (0x000070 - 0x000070)
class UDoubleProperty : public UNumericProperty
{ 
public:
};

/// Class /Script/CoreUObject.FloatProperty
/// Size: 0x0000 (0x000070 - 0x000070)
class UFloatProperty : public UNumericProperty
{ 
public:
};

/// Class /Script/CoreUObject.IntProperty
/// Size: 0x0000 (0x000070 - 0x000070)
class UIntProperty : public UNumericProperty
{ 
public:
};

/// Class /Script/CoreUObject.Int8Property
/// Size: 0x0000 (0x000070 - 0x000070)
class UInt8Property : public UNumericProperty
{ 
public:
};

/// Class /Script/CoreUObject.Int16Property
/// Size: 0x0000 (0x000070 - 0x000070)
class UInt16Property : public UNumericProperty
{ 
public:
};

/// Class /Script/CoreUObject.Int64Property
/// Size: 0x0000 (0x000070 - 0x000070)
class UInt64Property : public UNumericProperty
{ 
public:
};

/// Class /Script/CoreUObject.InterfaceProperty
/// Size: 0x0008 (0x000070 - 0x000078)
class UInterfaceProperty : public UProperty
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0070   (0x0008)  MISSED
};

/// Class /Script/CoreUObject.LazyObjectProperty
/// Size: 0x0000 (0x000078 - 0x000078)
class ULazyObjectProperty : public UObjectPropertyBase
{ 
public:
};

/// Class /Script/CoreUObject.MapProperty
/// Size: 0x0028 (0x000070 - 0x000098)
class UMapProperty : public UProperty
{ 
public:
	unsigned char                                      UnknownData00_1[0x28];                                      // 0x0070   (0x0028)  MISSED
};

/// Class /Script/CoreUObject.MulticastDelegateProperty
/// Size: 0x0008 (0x000070 - 0x000078)
class UMulticastDelegateProperty : public UProperty
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0070   (0x0008)  MISSED
};

/// Class /Script/CoreUObject.MulticastInlineDelegateProperty
/// Size: 0x0000 (0x000078 - 0x000078)
class UMulticastInlineDelegateProperty : public UMulticastDelegateProperty
{ 
public:
};

/// Class /Script/CoreUObject.MulticastSparseDelegateProperty
/// Size: 0x0000 (0x000078 - 0x000078)
class UMulticastSparseDelegateProperty : public UMulticastDelegateProperty
{ 
public:
};

/// Class /Script/CoreUObject.NameProperty
/// Size: 0x0000 (0x000070 - 0x000070)
class UNameProperty : public UProperty
{ 
public:
};

/// Class /Script/CoreUObject.SetProperty
/// Size: 0x0020 (0x000070 - 0x000090)
class USetProperty : public UProperty
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0070   (0x0020)  MISSED
};

/// Class /Script/CoreUObject.SoftObjectProperty
/// Size: 0x0000 (0x000078 - 0x000078)
class USoftObjectProperty : public UObjectPropertyBase
{ 
public:
};

/// Class /Script/CoreUObject.SoftClassProperty
/// Size: 0x0008 (0x000078 - 0x000080)
class USoftClassProperty : public USoftObjectProperty
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0078   (0x0008)  MISSED
};

/// Class /Script/CoreUObject.StrProperty
/// Size: 0x0000 (0x000070 - 0x000070)
class UStrProperty : public UProperty
{ 
public:
};

/// Class /Script/CoreUObject.StructProperty
/// Size: 0x0008 (0x000070 - 0x000078)
class UStructProperty : public UProperty
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0070   (0x0008)  MISSED
};

/// Class /Script/CoreUObject.UInt16Property
/// Size: 0x0000 (0x000070 - 0x000070)
class UUInt16Property : public UNumericProperty
{ 
public:
};

/// Class /Script/CoreUObject.UInt32Property
/// Size: 0x0000 (0x000070 - 0x000070)
class UUInt32Property : public UNumericProperty
{ 
public:
};

/// Class /Script/CoreUObject.UInt64Property
/// Size: 0x0000 (0x000070 - 0x000070)
class UUInt64Property : public UNumericProperty
{ 
public:
};

/// Class /Script/CoreUObject.WeakObjectProperty
/// Size: 0x0000 (0x000078 - 0x000078)
class UWeakObjectProperty : public UObjectPropertyBase
{ 
public:
};

/// Class /Script/CoreUObject.TextProperty
/// Size: 0x0000 (0x000070 - 0x000070)
class UTextProperty : public UProperty
{ 
public:
};

/// Class /Script/CoreUObject.PropertyWrapper
/// Size: 0x0008 (0x000028 - 0x000030)
class UPropertyWrapper : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x0000   (0x0030)  MISSED
};

/// Class /Script/CoreUObject.MulticastDelegatePropertyWrapper
/// Size: 0x0000 (0x000030 - 0x000030)
class UMulticastDelegatePropertyWrapper : public UPropertyWrapper
{ 
public:
};

/// Class /Script/CoreUObject.MulticastInlineDelegatePropertyWrapper
/// Size: 0x0000 (0x000030 - 0x000030)
class UMulticastInlineDelegatePropertyWrapper : public UMulticastDelegatePropertyWrapper
{ 
public:
};

/// Struct /Script/CoreUObject.TopLevelAssetPath
/// Size: 0x0008 (0x000000 - 0x000008)
struct FTopLevelAssetPath
{ 
	FName                                              PackageName;                                                // 0x0000   (0x0004)  
	FName                                              AssetName;                                                  // 0x0004   (0x0004)  
};

/// Struct /Script/CoreUObject.SoftObjectPath
/// Size: 0x0018 (0x000000 - 0x000018)
struct FSoftObjectPath
{ 
	FTopLevelAssetPath                                 AssetPath;                                                  // 0x0000   (0x0008)  
	SDK_UNDEFINED(16,4) /* FString */                  __um(SubPathString);                                        // 0x0008   (0x0010)  
};

/// Struct /Script/CoreUObject.ARFilter
/// Size: 0x0150 (0x000000 - 0x000150)
struct FARFilter
{ 
	TArray<FName>                                      PackageNames;                                               // 0x0000   (0x0010)  
	TArray<FName>                                      PackagePaths;                                               // 0x0010   (0x0010)  
	TArray<FSoftObjectPath>                            SoftObjectPaths;                                            // 0x0020   (0x0010)  
	TArray<FName>                                      ClassNames;                                                 // 0x0030   (0x0010)  
	TArray<FTopLevelAssetPath>                         ClassPaths;                                                 // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_5[0x50];                                      // 0x0050   (0x0050)  MISSED
	SDK_UNDEFINED(80,5) /* TSet<FName> */              __um(RecursiveClassesExclusionSet);                         // 0x00A0   (0x0050)  
	SDK_UNDEFINED(80,6) /* TSet<FTopLevelAssetPath> */ __um(RecursiveClassPathsExclusionSet);                      // 0x00F0   (0x0050)  
	bool                                               bRecursivePaths;                                            // 0x0140   (0x0001)  
	bool                                               bRecursiveClasses;                                          // 0x0141   (0x0001)  
	bool                                               bIncludeOnlyOnDiskAssets;                                   // 0x0142   (0x0001)  
	unsigned char                                      UnknownData01_6[0xD];                                       // 0x0143   (0x000D)  MISSED
};

/// Struct /Script/CoreUObject.AssetBundleEntry
/// Size: 0x0018 (0x000000 - 0x000018)
struct FAssetBundleEntry
{ 
	FName                                              BundleName;                                                 // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	TArray<FTopLevelAssetPath>                         AssetPaths;                                                 // 0x0008   (0x0010)  
};

/// Struct /Script/CoreUObject.AssetBundleData
/// Size: 0x0010 (0x000000 - 0x000010)
struct FAssetBundleData
{ 
	TArray<FAssetBundleEntry>                          Bundles;                                                    // 0x0000   (0x0010)  
};

/// Struct /Script/CoreUObject.AssetData
/// Size: 0x0038 (0x000000 - 0x000038)
struct FAssetData
{ 
	FName                                              PackageName;                                                // 0x0000   (0x0004)  
	FName                                              PackagePath;                                                // 0x0004   (0x0004)  
	FName                                              AssetName;                                                  // 0x0008   (0x0004)  
	FName                                              AssetClass;                                                 // 0x000C   (0x0004)  
	FTopLevelAssetPath                                 AssetClassPath;                                             // 0x0010   (0x0008)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x0018   (0x0020)  MISSED
};

/// Struct /Script/CoreUObject.Guid
/// Size: 0x0010 (0x000000 - 0x000010)
struct FGuid
{ 
	int32_t                                            A;                                                          // 0x0000   (0x0004)  
	int32_t                                            B;                                                          // 0x0004   (0x0004)  
	int32_t                                            C;                                                          // 0x0008   (0x0004)  
	int32_t                                            D;                                                          // 0x000C   (0x0004)  
};

/// Struct /Script/CoreUObject.AutomationEvent
/// Size: 0x0038 (0x000000 - 0x000038)
struct FAutomationEvent
{ 
	EAutomationEventType                               Type;                                                       // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	SDK_UNDEFINED(16,7) /* FString */                  __um(Message);                                              // 0x0008   (0x0010)  
	SDK_UNDEFINED(16,8) /* FString */                  __um(Context);                                              // 0x0018   (0x0010)  
	FGuid                                              Artifact;                                                   // 0x0028   (0x0010)  
};

/// Struct /Script/CoreUObject.DateTime
/// Size: 0x0008 (0x000000 - 0x000008)
struct FDateTime
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/CoreUObject.AutomationExecutionEntry
/// Size: 0x0058 (0x000000 - 0x000058)
struct FAutomationExecutionEntry
{ 
	FAutomationEvent                                   Event;                                                      // 0x0000   (0x0038)  
	SDK_UNDEFINED(16,9) /* FString */                  __um(Filename);                                             // 0x0038   (0x0010)  
	int32_t                                            LineNumber;                                                 // 0x0048   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x004C   (0x0004)  MISSED
	FDateTime                                          Timestamp;                                                  // 0x0050   (0x0008)  
};

/// Struct /Script/CoreUObject.Vector
/// Size: 0x0018 (0x000000 - 0x000018)
struct FVector
{ 
	double                                             X;                                                          // 0x0000   (0x0008)  
	double                                             Y;                                                          // 0x0008   (0x0008)  
	double                                             Z;                                                          // 0x0010   (0x0008)  
};

/// Struct /Script/CoreUObject.Box
/// Size: 0x0038 (0x000000 - 0x000038)
struct FBox
{ 
	FVector                                            Min;                                                        // 0x0000   (0x0018)  
	FVector                                            Max;                                                        // 0x0018   (0x0018)  
	bool                                               IsValid;                                                    // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0031   (0x0007)  MISSED
};

/// Struct /Script/CoreUObject.Vector2D
/// Size: 0x0010 (0x000000 - 0x000010)
struct FVector2D
{ 
	double                                             X;                                                          // 0x0000   (0x0008)  
	double                                             Y;                                                          // 0x0008   (0x0008)  
};

/// Struct /Script/CoreUObject.Box2D
/// Size: 0x0028 (0x000000 - 0x000028)
struct FBox2D
{ 
	FVector2D                                          Min;                                                        // 0x0000   (0x0010)  
	FVector2D                                          Max;                                                        // 0x0010   (0x0010)  
	bool                                               bIsValid;                                                   // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0021   (0x0007)  MISSED
};

/// Struct /Script/CoreUObject.Vector2f
/// Size: 0x0008 (0x000000 - 0x000008)
struct FVector2f
{ 
	float                                              X;                                                          // 0x0000   (0x0004)  
	float                                              Y;                                                          // 0x0004   (0x0004)  
};

/// Struct /Script/CoreUObject.Box2f
/// Size: 0x0014 (0x000000 - 0x000014)
struct FBox2f
{ 
	FVector2f                                          Min;                                                        // 0x0000   (0x0008)  
	FVector2f                                          Max;                                                        // 0x0008   (0x0008)  
	bool                                               bIsValid;                                                   // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0011   (0x0003)  MISSED
};

/// Struct /Script/CoreUObject.Vector3d
/// Size: 0x0018 (0x000000 - 0x000018)
struct FVector3d
{ 
	double                                             X;                                                          // 0x0000   (0x0008)  
	double                                             Y;                                                          // 0x0008   (0x0008)  
	double                                             Z;                                                          // 0x0010   (0x0008)  
};

/// Struct /Script/CoreUObject.Box3d
/// Size: 0x0038 (0x000000 - 0x000038)
struct FBox3d
{ 
	FVector3d                                          Min;                                                        // 0x0000   (0x0018)  
	FVector3d                                          Max;                                                        // 0x0018   (0x0018)  
	bool                                               IsValid;                                                    // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0031   (0x0007)  MISSED
};

/// Struct /Script/CoreUObject.Vector3f
/// Size: 0x000C (0x000000 - 0x00000C)
struct FVector3f
{ 
	float                                              X;                                                          // 0x0000   (0x0004)  
	float                                              Y;                                                          // 0x0004   (0x0004)  
	float                                              Z;                                                          // 0x0008   (0x0004)  
};

/// Struct /Script/CoreUObject.Box3f
/// Size: 0x001C (0x000000 - 0x00001C)
struct FBox3f
{ 
	FVector3f                                          Min;                                                        // 0x0000   (0x000C)  
	FVector3f                                          Max;                                                        // 0x000C   (0x000C)  
	bool                                               IsValid;                                                    // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0019   (0x0003)  MISSED
};

/// Struct /Script/CoreUObject.BoxSphereBounds
/// Size: 0x0038 (0x000000 - 0x000038)
struct FBoxSphereBounds
{ 
	FVector                                            Origin;                                                     // 0x0000   (0x0018)  
	FVector                                            BoxExtent;                                                  // 0x0018   (0x0018)  
	double                                             SphereRadius;                                               // 0x0030   (0x0008)  
};

/// Struct /Script/CoreUObject.BoxSphereBounds3d
/// Size: 0x0038 (0x000000 - 0x000038)
struct FBoxSphereBounds3d
{ 
	FVector3d                                          Origin;                                                     // 0x0000   (0x0018)  
	FVector3d                                          BoxExtent;                                                  // 0x0018   (0x0018)  
	double                                             SphereRadius;                                               // 0x0030   (0x0008)  
};

/// Struct /Script/CoreUObject.BoxSphereBounds3f
/// Size: 0x001C (0x000000 - 0x00001C)
struct FBoxSphereBounds3f
{ 
	FVector3f                                          Origin;                                                     // 0x0000   (0x000C)  
	FVector3f                                          BoxExtent;                                                  // 0x000C   (0x000C)  
	float                                              SphereRadius;                                               // 0x0018   (0x0004)  
};

/// Struct /Script/CoreUObject.Color
/// Size: 0x0004 (0x000000 - 0x000004)
struct FColor
{ 
	char                                               B;                                                          // 0x0000   (0x0001)  
	char                                               G;                                                          // 0x0001   (0x0001)  
	char                                               R;                                                          // 0x0002   (0x0001)  
	char                                               A;                                                          // 0x0003   (0x0001)  
};

/// Struct /Script/CoreUObject.DirectoryPath
/// Size: 0x0010 (0x000000 - 0x000010)
struct FDirectoryPath
{ 
	SDK_UNDEFINED(16,10) /* FString */                 __um(Path);                                                 // 0x0000   (0x0010)  
};

/// Struct /Script/CoreUObject.DoubleRangeBound
/// Size: 0x0010 (0x000000 - 0x000010)
struct FDoubleRangeBound
{ 
	SDK_UNDEFINED(1,11) /* TEnumAsByte<ERangeBoundTypes> */ __um(Type);                                            // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	double                                             Value;                                                      // 0x0008   (0x0008)  
};

/// Struct /Script/CoreUObject.DoubleRange
/// Size: 0x0020 (0x000000 - 0x000020)
struct FDoubleRange
{ 
	FDoubleRangeBound                                  LowerBound;                                                 // 0x0000   (0x0010)  
	FDoubleRangeBound                                  UpperBound;                                                 // 0x0010   (0x0010)  
};

/// Struct /Script/CoreUObject.FallbackStruct
/// Size: 0x0001 (0x000000 - 0x000001)
struct FFallbackStruct
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/CoreUObject.FilePath
/// Size: 0x0010 (0x000000 - 0x000010)
struct FFilePath
{ 
	SDK_UNDEFINED(16,12) /* FString */                 __um(FilePath);                                             // 0x0000   (0x0010)  
};

/// Struct /Script/CoreUObject.FloatInterval
/// Size: 0x0008 (0x000000 - 0x000008)
struct FFloatInterval
{ 
	float                                              Min;                                                        // 0x0000   (0x0004)  
	float                                              Max;                                                        // 0x0004   (0x0004)  
};

/// Struct /Script/CoreUObject.FloatRangeBound
/// Size: 0x0008 (0x000000 - 0x000008)
struct FFloatRangeBound
{ 
	SDK_UNDEFINED(1,13) /* TEnumAsByte<ERangeBoundTypes> */ __um(Type);                                            // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              Value;                                                      // 0x0004   (0x0004)  
};

/// Struct /Script/CoreUObject.FloatRange
/// Size: 0x0010 (0x000000 - 0x000010)
struct FFloatRange
{ 
	FFloatRangeBound                                   LowerBound;                                                 // 0x0000   (0x0008)  
	FFloatRangeBound                                   UpperBound;                                                 // 0x0008   (0x0008)  
};

/// Struct /Script/CoreUObject.FrameNumber
/// Size: 0x0004 (0x000000 - 0x000004)
struct FFrameNumber
{ 
	int32_t                                            Value;                                                      // 0x0000   (0x0004)  
};

/// Struct /Script/CoreUObject.FrameNumberRangeBound
/// Size: 0x0008 (0x000000 - 0x000008)
struct FFrameNumberRangeBound
{ 
	SDK_UNDEFINED(1,14) /* TEnumAsByte<ERangeBoundTypes> */ __um(Type);                                            // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	FFrameNumber                                       Value;                                                      // 0x0004   (0x0004)  
};

/// Struct /Script/CoreUObject.FrameNumberRange
/// Size: 0x0010 (0x000000 - 0x000010)
struct FFrameNumberRange
{ 
	FFrameNumberRangeBound                             LowerBound;                                                 // 0x0000   (0x0008)  
	FFrameNumberRangeBound                             UpperBound;                                                 // 0x0008   (0x0008)  
};

/// Struct /Script/CoreUObject.FrameRate
/// Size: 0x0008 (0x000000 - 0x000008)
struct FFrameRate
{ 
	int32_t                                            Numerator;                                                  // 0x0000   (0x0004)  
	int32_t                                            Denominator;                                                // 0x0004   (0x0004)  
};

/// Struct /Script/CoreUObject.FrameTime
/// Size: 0x0008 (0x000000 - 0x000008)
struct FFrameTime
{ 
	FFrameNumber                                       FrameNumber;                                                // 0x0000   (0x0004)  
	float                                              SubFrame;                                                   // 0x0004   (0x0004)  
};

/// Struct /Script/CoreUObject.InputDeviceId
/// Size: 0x0004 (0x000000 - 0x000004)
struct FInputDeviceId
{ 
	int32_t                                            InternalId;                                                 // 0x0000   (0x0004)  
};

/// Struct /Script/CoreUObject.Int32Interval
/// Size: 0x0008 (0x000000 - 0x000008)
struct FInt32Interval
{ 
	int32_t                                            Min;                                                        // 0x0000   (0x0004)  
	int32_t                                            Max;                                                        // 0x0004   (0x0004)  
};

/// Struct /Script/CoreUObject.Int32Point
/// Size: 0x0008 (0x000000 - 0x000008)
struct FInt32Point
{ 
	int32_t                                            X;                                                          // 0x0000   (0x0004)  
	int32_t                                            Y;                                                          // 0x0004   (0x0004)  
};

/// Struct /Script/CoreUObject.Int32RangeBound
/// Size: 0x0008 (0x000000 - 0x000008)
struct FInt32RangeBound
{ 
	SDK_UNDEFINED(1,15) /* TEnumAsByte<ERangeBoundTypes> */ __um(Type);                                            // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	int32_t                                            Value;                                                      // 0x0004   (0x0004)  
};

/// Struct /Script/CoreUObject.Int32Range
/// Size: 0x0010 (0x000000 - 0x000010)
struct FInt32Range
{ 
	FInt32RangeBound                                   LowerBound;                                                 // 0x0000   (0x0008)  
	FInt32RangeBound                                   UpperBound;                                                 // 0x0008   (0x0008)  
};

/// Struct /Script/CoreUObject.Int32Vector
/// Size: 0x000C (0x000000 - 0x00000C)
struct FInt32Vector
{ 
	int32_t                                            X;                                                          // 0x0000   (0x0004)  
	int32_t                                            Y;                                                          // 0x0004   (0x0004)  
	int32_t                                            Z;                                                          // 0x0008   (0x0004)  
};

/// Struct /Script/CoreUObject.Int32Vector2
/// Size: 0x0008 (0x000000 - 0x000008)
struct FInt32Vector2
{ 
	int32_t                                            X;                                                          // 0x0000   (0x0004)  
	int32_t                                            Y;                                                          // 0x0004   (0x0004)  
};

/// Struct /Script/CoreUObject.Int32Vector4
/// Size: 0x0010 (0x000000 - 0x000010)
struct FInt32Vector4
{ 
	int32_t                                            X;                                                          // 0x0000   (0x0004)  
	int32_t                                            Y;                                                          // 0x0004   (0x0004)  
	int32_t                                            Z;                                                          // 0x0008   (0x0004)  
	int32_t                                            W;                                                          // 0x000C   (0x0004)  
};

/// Struct /Script/CoreUObject.Int64Point
/// Size: 0x0010 (0x000000 - 0x000010)
struct FInt64Point
{ 
	int64_t                                            X;                                                          // 0x0000   (0x0008)  
	int64_t                                            Y;                                                          // 0x0008   (0x0008)  
};

/// Struct /Script/CoreUObject.Int64Vector
/// Size: 0x0018 (0x000000 - 0x000018)
struct FInt64Vector
{ 
	int64_t                                            X;                                                          // 0x0000   (0x0008)  
	int64_t                                            Y;                                                          // 0x0008   (0x0008)  
	int64_t                                            Z;                                                          // 0x0010   (0x0008)  
};

/// Struct /Script/CoreUObject.Int64Vector2
/// Size: 0x0010 (0x000000 - 0x000010)
struct FInt64Vector2
{ 
	int64_t                                            X;                                                          // 0x0000   (0x0008)  
	int64_t                                            Y;                                                          // 0x0008   (0x0008)  
};

/// Struct /Script/CoreUObject.Int64Vector4
/// Size: 0x0020 (0x000000 - 0x000020)
struct FInt64Vector4
{ 
	int64_t                                            X;                                                          // 0x0000   (0x0008)  
	int64_t                                            Y;                                                          // 0x0008   (0x0008)  
	int64_t                                            Z;                                                          // 0x0010   (0x0008)  
	int64_t                                            W;                                                          // 0x0018   (0x0008)  
};

/// Struct /Script/CoreUObject.InterpCurvePointFloat
/// Size: 0x0014 (0x000000 - 0x000014)
struct FInterpCurvePointFloat
{ 
	float                                              InVal;                                                      // 0x0000   (0x0004)  
	float                                              OutVal;                                                     // 0x0004   (0x0004)  
	float                                              ArriveTangent;                                              // 0x0008   (0x0004)  
	float                                              LeaveTangent;                                               // 0x000C   (0x0004)  
	SDK_UNDEFINED(1,16) /* TEnumAsByte<EInterpCurveMode> */ __um(InterpMode);                                      // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0011   (0x0003)  MISSED
};

/// Struct /Script/CoreUObject.InterpCurveFloat
/// Size: 0x0018 (0x000000 - 0x000018)
struct FInterpCurveFloat
{ 
	TArray<FInterpCurvePointFloat>                     Points;                                                     // 0x0000   (0x0010)  
	bool                                               bIsLooped;                                                  // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0011   (0x0003)  MISSED
	float                                              LoopKeyOffset;                                              // 0x0014   (0x0004)  
};

/// Struct /Script/CoreUObject.LinearColor
/// Size: 0x0010 (0x000000 - 0x000010)
struct FLinearColor
{ 
	float                                              R;                                                          // 0x0000   (0x0004)  
	float                                              G;                                                          // 0x0004   (0x0004)  
	float                                              B;                                                          // 0x0008   (0x0004)  
	float                                              A;                                                          // 0x000C   (0x0004)  
};

/// Struct /Script/CoreUObject.InterpCurvePointLinearColor
/// Size: 0x0038 (0x000000 - 0x000038)
struct FInterpCurvePointLinearColor
{ 
	float                                              InVal;                                                      // 0x0000   (0x0004)  
	FLinearColor                                       OutVal;                                                     // 0x0004   (0x0010)  
	FLinearColor                                       ArriveTangent;                                              // 0x0014   (0x0010)  
	FLinearColor                                       LeaveTangent;                                               // 0x0024   (0x0010)  
	SDK_UNDEFINED(1,17) /* TEnumAsByte<EInterpCurveMode> */ __um(InterpMode);                                      // 0x0034   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0035   (0x0003)  MISSED
};

/// Struct /Script/CoreUObject.InterpCurveLinearColor
/// Size: 0x0018 (0x000000 - 0x000018)
struct FInterpCurveLinearColor
{ 
	TArray<FInterpCurvePointLinearColor>               Points;                                                     // 0x0000   (0x0010)  
	bool                                               bIsLooped;                                                  // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0011   (0x0003)  MISSED
	float                                              LoopKeyOffset;                                              // 0x0014   (0x0004)  
};

/// Struct /Script/CoreUObject.Quat
/// Size: 0x0020 (0x000000 - 0x000020)
struct FQuat
{ 
	double                                             X;                                                          // 0x0000   (0x0008)  
	double                                             Y;                                                          // 0x0008   (0x0008)  
	double                                             Z;                                                          // 0x0010   (0x0008)  
	double                                             W;                                                          // 0x0018   (0x0008)  
};

/// Struct /Script/CoreUObject.InterpCurvePointQuat
/// Size: 0x0080 (0x000000 - 0x000080)
struct FInterpCurvePointQuat
{ 
	float                                              InVal;                                                      // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0xC];                                       // 0x0004   (0x000C)  MISSED
	FQuat                                              OutVal;                                                     // 0x0010   (0x0020)  
	FQuat                                              ArriveTangent;                                              // 0x0030   (0x0020)  
	FQuat                                              LeaveTangent;                                               // 0x0050   (0x0020)  
	SDK_UNDEFINED(1,18) /* TEnumAsByte<EInterpCurveMode> */ __um(InterpMode);                                      // 0x0070   (0x0001)  
	unsigned char                                      UnknownData01_6[0xF];                                       // 0x0071   (0x000F)  MISSED
};

/// Struct /Script/CoreUObject.TwoVectors
/// Size: 0x0030 (0x000000 - 0x000030)
struct FTwoVectors
{ 
	FVector                                            v1;                                                         // 0x0000   (0x0018)  
	FVector                                            v2;                                                         // 0x0018   (0x0018)  
};

/// Struct /Script/CoreUObject.InterpCurvePointTwoVectors
/// Size: 0x00A0 (0x000000 - 0x0000A0)
struct FInterpCurvePointTwoVectors
{ 
	float                                              InVal;                                                      // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	FTwoVectors                                        OutVal;                                                     // 0x0008   (0x0030)  
	FTwoVectors                                        ArriveTangent;                                              // 0x0038   (0x0030)  
	FTwoVectors                                        LeaveTangent;                                               // 0x0068   (0x0030)  
	SDK_UNDEFINED(1,19) /* TEnumAsByte<EInterpCurveMode> */ __um(InterpMode);                                      // 0x0098   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0099   (0x0007)  MISSED
};

/// Struct /Script/CoreUObject.InterpCurvePointVector
/// Size: 0x0058 (0x000000 - 0x000058)
struct FInterpCurvePointVector
{ 
	float                                              InVal;                                                      // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	FVector                                            OutVal;                                                     // 0x0008   (0x0018)  
	FVector                                            ArriveTangent;                                              // 0x0020   (0x0018)  
	FVector                                            LeaveTangent;                                               // 0x0038   (0x0018)  
	SDK_UNDEFINED(1,20) /* TEnumAsByte<EInterpCurveMode> */ __um(InterpMode);                                      // 0x0050   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0051   (0x0007)  MISSED
};

/// Struct /Script/CoreUObject.InterpCurvePointVector2D
/// Size: 0x0040 (0x000000 - 0x000040)
struct FInterpCurvePointVector2D
{ 
	float                                              InVal;                                                      // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	FVector2D                                          OutVal;                                                     // 0x0008   (0x0010)  
	FVector2D                                          ArriveTangent;                                              // 0x0018   (0x0010)  
	FVector2D                                          LeaveTangent;                                               // 0x0028   (0x0010)  
	SDK_UNDEFINED(1,21) /* TEnumAsByte<EInterpCurveMode> */ __um(InterpMode);                                      // 0x0038   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0039   (0x0007)  MISSED
};

/// Struct /Script/CoreUObject.InterpCurveQuat
/// Size: 0x0018 (0x000000 - 0x000018)
struct FInterpCurveQuat
{ 
	TArray<FInterpCurvePointQuat>                      Points;                                                     // 0x0000   (0x0010)  
	bool                                               bIsLooped;                                                  // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0011   (0x0003)  MISSED
	float                                              LoopKeyOffset;                                              // 0x0014   (0x0004)  
};

/// Struct /Script/CoreUObject.InterpCurveTwoVectors
/// Size: 0x0018 (0x000000 - 0x000018)
struct FInterpCurveTwoVectors
{ 
	TArray<FInterpCurvePointTwoVectors>                Points;                                                     // 0x0000   (0x0010)  
	bool                                               bIsLooped;                                                  // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0011   (0x0003)  MISSED
	float                                              LoopKeyOffset;                                              // 0x0014   (0x0004)  
};

/// Struct /Script/CoreUObject.InterpCurveVector
/// Size: 0x0018 (0x000000 - 0x000018)
struct FInterpCurveVector
{ 
	TArray<FInterpCurvePointVector>                    Points;                                                     // 0x0000   (0x0010)  
	bool                                               bIsLooped;                                                  // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0011   (0x0003)  MISSED
	float                                              LoopKeyOffset;                                              // 0x0014   (0x0004)  
};

/// Struct /Script/CoreUObject.InterpCurveVector2D
/// Size: 0x0018 (0x000000 - 0x000018)
struct FInterpCurveVector2D
{ 
	TArray<FInterpCurvePointVector2D>                  Points;                                                     // 0x0000   (0x0010)  
	bool                                               bIsLooped;                                                  // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0011   (0x0003)  MISSED
	float                                              LoopKeyOffset;                                              // 0x0014   (0x0004)  
};

/// Struct /Script/CoreUObject.IntPoint
/// Size: 0x0008 (0x000000 - 0x000008)
struct FIntPoint
{ 
	int32_t                                            X;                                                          // 0x0000   (0x0004)  
	int32_t                                            Y;                                                          // 0x0004   (0x0004)  
};

/// Struct /Script/CoreUObject.IntVector
/// Size: 0x000C (0x000000 - 0x00000C)
struct FIntVector
{ 
	int32_t                                            X;                                                          // 0x0000   (0x0004)  
	int32_t                                            Y;                                                          // 0x0004   (0x0004)  
	int32_t                                            Z;                                                          // 0x0008   (0x0004)  
};

/// Struct /Script/CoreUObject.IntVector2
/// Size: 0x0008 (0x000000 - 0x000008)
struct FIntVector2
{ 
	int32_t                                            X;                                                          // 0x0000   (0x0004)  
	int32_t                                            Y;                                                          // 0x0004   (0x0004)  
};

/// Struct /Script/CoreUObject.IntVector4
/// Size: 0x0010 (0x000000 - 0x000010)
struct FIntVector4
{ 
	int32_t                                            X;                                                          // 0x0000   (0x0004)  
	int32_t                                            Y;                                                          // 0x0004   (0x0004)  
	int32_t                                            Z;                                                          // 0x0008   (0x0004)  
	int32_t                                            W;                                                          // 0x000C   (0x0004)  
};

/// Struct /Script/CoreUObject.Plane
/// Size: 0x0008 (0x000018 - 0x000020)
struct FPlane : FVector
{ 
	double                                             W;                                                          // 0x0018   (0x0008)  
};

/// Struct /Script/CoreUObject.Matrix
/// Size: 0x0080 (0x000000 - 0x000080)
struct FMatrix
{ 
	FPlane                                             XPlane;                                                     // 0x0000   (0x0020)  
	FPlane                                             YPlane;                                                     // 0x0020   (0x0020)  
	FPlane                                             ZPlane;                                                     // 0x0040   (0x0020)  
	FPlane                                             WPlane;                                                     // 0x0060   (0x0020)  
};

/// Struct /Script/CoreUObject.Plane4d
/// Size: 0x0008 (0x000018 - 0x000020)
struct FPlane4d : FVector3d
{ 
	double                                             W;                                                          // 0x0018   (0x0008)  
};

/// Struct /Script/CoreUObject.Matrix44d
/// Size: 0x0080 (0x000000 - 0x000080)
struct FMatrix44d
{ 
	FPlane4d                                           XPlane;                                                     // 0x0000   (0x0020)  
	FPlane4d                                           YPlane;                                                     // 0x0020   (0x0020)  
	FPlane4d                                           ZPlane;                                                     // 0x0040   (0x0020)  
	FPlane4d                                           WPlane;                                                     // 0x0060   (0x0020)  
};

/// Struct /Script/CoreUObject.Plane4f
/// Size: 0x0004 (0x00000C - 0x000010)
struct FPlane4f : FVector3f
{ 
	float                                              W;                                                          // 0x000C   (0x0004)  
};

/// Struct /Script/CoreUObject.Matrix44f
/// Size: 0x0040 (0x000000 - 0x000040)
struct FMatrix44f
{ 
	FPlane4f                                           XPlane;                                                     // 0x0000   (0x0010)  
	FPlane4f                                           YPlane;                                                     // 0x0010   (0x0010)  
	FPlane4f                                           ZPlane;                                                     // 0x0020   (0x0010)  
	FPlane4f                                           WPlane;                                                     // 0x0030   (0x0010)  
};

/// Struct /Script/CoreUObject.OrientedBox
/// Size: 0x0078 (0x000000 - 0x000078)
struct FOrientedBox
{ 
	FVector                                            Center;                                                     // 0x0000   (0x0018)  
	FVector                                            AxisX;                                                      // 0x0018   (0x0018)  
	FVector                                            AxisY;                                                      // 0x0030   (0x0018)  
	FVector                                            AxisZ;                                                      // 0x0048   (0x0018)  
	double                                             ExtentX;                                                    // 0x0060   (0x0008)  
	double                                             ExtentY;                                                    // 0x0068   (0x0008)  
	double                                             ExtentZ;                                                    // 0x0070   (0x0008)  
};

/// Struct /Script/CoreUObject.PackedNormal
/// Size: 0x0004 (0x000000 - 0x000004)
struct FPackedNormal
{ 
	char                                               X;                                                          // 0x0000   (0x0001)  
	char                                               Y;                                                          // 0x0001   (0x0001)  
	char                                               Z;                                                          // 0x0002   (0x0001)  
	char                                               W;                                                          // 0x0003   (0x0001)  
};

/// Struct /Script/CoreUObject.PackedRGB10A2N
/// Size: 0x0004 (0x000000 - 0x000004)
struct FPackedRGB10A2N
{ 
	int32_t                                            Packed;                                                     // 0x0000   (0x0004)  
};

/// Struct /Script/CoreUObject.PackedRGBA16N
/// Size: 0x0008 (0x000000 - 0x000008)
struct FPackedRGBA16N
{ 
	int32_t                                            XY;                                                         // 0x0000   (0x0004)  
	int32_t                                            ZW;                                                         // 0x0004   (0x0004)  
};

/// Struct /Script/CoreUObject.PlatformUserId
/// Size: 0x0004 (0x000000 - 0x000004)
struct FPlatformUserId
{ 
	int32_t                                            InternalId;                                                 // 0x0000   (0x0004)  
};

/// Struct /Script/CoreUObject.PlatformInputDeviceState
/// Size: 0x0008 (0x000000 - 0x000008)
struct FPlatformInputDeviceState
{ 
	FPlatformUserId                                    OwningPlatformUser;                                         // 0x0000   (0x0004)  
	EInputDeviceConnectionState                        ConnectionState;                                            // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0005   (0x0003)  MISSED
};

/// Struct /Script/CoreUObject.PolyglotTextData
/// Size: 0x00B8 (0x000000 - 0x0000B8)
struct FPolyglotTextData
{ 
	ELocalizedTextSourceCategory                       Category;                                                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	SDK_UNDEFINED(16,22) /* FString */                 __um(NativeCulture);                                        // 0x0008   (0x0010)  
	SDK_UNDEFINED(16,23) /* FString */                 __um(NameSpace);                                            // 0x0018   (0x0010)  
	SDK_UNDEFINED(16,24) /* FString */                 __um(Key);                                                  // 0x0028   (0x0010)  
	SDK_UNDEFINED(16,25) /* FString */                 __um(NativeString);                                         // 0x0038   (0x0010)  
	SDK_UNDEFINED(80,26) /* TMap<FString, FString> */  __um(LocalizedStrings);                                     // 0x0048   (0x0050)  
	bool                                               bIsMinimalPatch;                                            // 0x0098   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0099   (0x0007)  MISSED
	SDK_UNDEFINED(24,27) /* FText */                   __um(CachedText);                                           // 0x00A0   (0x0018)  
};

/// Struct /Script/CoreUObject.PrimaryAssetType
/// Size: 0x0004 (0x000000 - 0x000004)
struct FPrimaryAssetType
{ 
	FName                                              Name;                                                       // 0x0000   (0x0004)  
};

/// Struct /Script/CoreUObject.PrimaryAssetId
/// Size: 0x0008 (0x000000 - 0x000008)
struct FPrimaryAssetId
{ 
	FPrimaryAssetType                                  PrimaryAssetType;                                           // 0x0000   (0x0004)  
	FName                                              PrimaryAssetName;                                           // 0x0004   (0x0004)  
};

/// Struct /Script/CoreUObject.QualifiedFrameTime
/// Size: 0x0010 (0x000000 - 0x000010)
struct FQualifiedFrameTime
{ 
	FFrameTime                                         Time;                                                       // 0x0000   (0x0008)  
	FFrameRate                                         Rate;                                                       // 0x0008   (0x0008)  
};

/// Struct /Script/CoreUObject.Quat4d
/// Size: 0x0020 (0x000000 - 0x000020)
struct FQuat4d
{ 
	double                                             X;                                                          // 0x0000   (0x0008)  
	double                                             Y;                                                          // 0x0008   (0x0008)  
	double                                             Z;                                                          // 0x0010   (0x0008)  
	double                                             W;                                                          // 0x0018   (0x0008)  
};

/// Struct /Script/CoreUObject.Quat4f
/// Size: 0x0010 (0x000000 - 0x000010)
struct FQuat4f
{ 
	float                                              X;                                                          // 0x0000   (0x0004)  
	float                                              Y;                                                          // 0x0004   (0x0004)  
	float                                              Z;                                                          // 0x0008   (0x0004)  
	float                                              W;                                                          // 0x000C   (0x0004)  
};

/// Struct /Script/CoreUObject.RandomStream
/// Size: 0x0008 (0x000000 - 0x000008)
struct FRandomStream
{ 
	int32_t                                            InitialSeed;                                                // 0x0000   (0x0004)  
	int32_t                                            Seed;                                                       // 0x0004   (0x0004)  
};

/// Struct /Script/CoreUObject.Ray
/// Size: 0x0030 (0x000000 - 0x000030)
struct FRay
{ 
	FVector                                            Origin;                                                     // 0x0000   (0x0018)  
	FVector                                            Direction;                                                  // 0x0018   (0x0018)  
};

/// Struct /Script/CoreUObject.Ray3d
/// Size: 0x0030 (0x000000 - 0x000030)
struct FRay3d
{ 
	FVector3d                                          Origin;                                                     // 0x0000   (0x0018)  
	FVector3d                                          Direction;                                                  // 0x0018   (0x0018)  
};

/// Struct /Script/CoreUObject.Ray3f
/// Size: 0x0018 (0x000000 - 0x000018)
struct FRay3f
{ 
	FVector3f                                          Origin;                                                     // 0x0000   (0x000C)  
	FVector3f                                          Direction;                                                  // 0x000C   (0x000C)  
};

/// Struct /Script/CoreUObject.Rotator
/// Size: 0x0018 (0x000000 - 0x000018)
struct FRotator
{ 
	double                                             pitch;                                                      // 0x0000   (0x0008)  
	double                                             Yaw;                                                        // 0x0008   (0x0008)  
	double                                             Roll;                                                       // 0x0010   (0x0008)  
};

/// Struct /Script/CoreUObject.Rotator3d
/// Size: 0x0018 (0x000000 - 0x000018)
struct FRotator3d
{ 
	double                                             pitch;                                                      // 0x0000   (0x0008)  
	double                                             Yaw;                                                        // 0x0008   (0x0008)  
	double                                             Roll;                                                       // 0x0010   (0x0008)  
};

/// Struct /Script/CoreUObject.Rotator3f
/// Size: 0x000C (0x000000 - 0x00000C)
struct FRotator3f
{ 
	float                                              pitch;                                                      // 0x0000   (0x0004)  
	float                                              Yaw;                                                        // 0x0004   (0x0004)  
	float                                              Roll;                                                       // 0x0008   (0x0004)  
};

/// Struct /Script/CoreUObject.SoftClassPath
/// Size: 0x0000 (0x000018 - 0x000018)
struct FSoftClassPath : FSoftObjectPath
{ 
};

/// Struct /Script/CoreUObject.Sphere
/// Size: 0x0020 (0x000000 - 0x000020)
struct FSphere
{ 
	FVector                                            Center;                                                     // 0x0000   (0x0018)  
	double                                             W;                                                          // 0x0018   (0x0008)  
};

/// Struct /Script/CoreUObject.Sphere3d
/// Size: 0x0020 (0x000000 - 0x000020)
struct FSphere3d
{ 
	FVector3d                                          Center;                                                     // 0x0000   (0x0018)  
	double                                             W;                                                          // 0x0018   (0x0008)  
};

/// Struct /Script/CoreUObject.Sphere3f
/// Size: 0x0010 (0x000000 - 0x000010)
struct FSphere3f
{ 
	FVector3f                                          Center;                                                     // 0x0000   (0x000C)  
	float                                              W;                                                          // 0x000C   (0x0004)  
};

/// Struct /Script/CoreUObject.TemplateString
/// Size: 0x0010 (0x000000 - 0x000010)
struct FTemplateString
{ 
	SDK_UNDEFINED(16,28) /* FString */                 __um(Template);                                             // 0x0000   (0x0010)  
};

/// Struct /Script/CoreUObject.TestUndeclaredScriptStructObjectReferencesTest
/// Size: 0x0048 (0x000000 - 0x000048)
struct FTestUndeclaredScriptStructObjectReferencesTest
{ 
	class UObject*                                     StrongObjectPointer;                                        // 0x0000   (0x0008)  
	SDK_UNDEFINED(32,29) /* TWeakObjectPtr<UObject*> */ __um(SoftObjectPointer);                                   // 0x0008   (0x0020)  
	FSoftObjectPath                                    SoftObjectPath;                                             // 0x0028   (0x0018)  
	SDK_UNDEFINED(8,30) /* TWeakObjectPtr<UObject*> */ __um(WeakObjectPointer);                                    // 0x0040   (0x0008)  
};

/// Struct /Script/CoreUObject.TestUninitializedScriptStructMembersTest
/// Size: 0x0018 (0x000000 - 0x000018)
struct FTestUninitializedScriptStructMembersTest
{ 
	class UObject*                                     UninitializedObjectReference;                               // 0x0000   (0x0008)  
	class UObject*                                     InitializedObjectReference;                                 // 0x0008   (0x0008)  
	float                                              UnusedValue;                                                // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/CoreUObject.Timecode
/// Size: 0x0014 (0x000000 - 0x000014)
struct FTimecode
{ 
	int32_t                                            Hours;                                                      // 0x0000   (0x0004)  
	int32_t                                            Minutes;                                                    // 0x0004   (0x0004)  
	int32_t                                            Seconds;                                                    // 0x0008   (0x0004)  
	int32_t                                            Frames;                                                     // 0x000C   (0x0004)  
	bool                                               bDropFrameFormat;                                           // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0011   (0x0003)  MISSED
};

/// Struct /Script/CoreUObject.Timespan
/// Size: 0x0008 (0x000000 - 0x000008)
struct FTimespan
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/CoreUObject.Transform
/// Size: 0x0060 (0x000000 - 0x000060)
struct FTransform
{ 
	FQuat                                              Rotation;                                                   // 0x0000   (0x0020)  
	FVector                                            Translation;                                                // 0x0020   (0x0018)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0038   (0x0008)  MISSED
	FVector                                            Scale3D;                                                    // 0x0040   (0x0018)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0058   (0x0008)  MISSED
};

/// Struct /Script/CoreUObject.Transform3d
/// Size: 0x0060 (0x000000 - 0x000060)
struct FTransform3d
{ 
	FQuat4d                                            Rotation;                                                   // 0x0000   (0x0020)  
	FVector3d                                          Translation;                                                // 0x0020   (0x0018)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0038   (0x0008)  MISSED
	FVector3d                                          Scale3D;                                                    // 0x0040   (0x0018)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0058   (0x0008)  MISSED
};

/// Struct /Script/CoreUObject.Transform3f
/// Size: 0x0030 (0x000000 - 0x000030)
struct FTransform3f
{ 
	FQuat4f                                            Rotation;                                                   // 0x0000   (0x0010)  
	FVector3f                                          Translation;                                                // 0x0010   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x001C   (0x0004)  MISSED
	FVector3f                                          Scale3D;                                                    // 0x0020   (0x000C)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x002C   (0x0004)  MISSED
};

/// Struct /Script/CoreUObject.Uint32Point
/// Size: 0x0008 (0x000000 - 0x000008)
struct FUint32Point
{ 
	int32_t                                            X;                                                          // 0x0000   (0x0004)  
	int32_t                                            Y;                                                          // 0x0004   (0x0004)  
};

/// Struct /Script/CoreUObject.Uint32Vector
/// Size: 0x000C (0x000000 - 0x00000C)
struct FUint32Vector
{ 
	uint32_t                                           X;                                                          // 0x0000   (0x0004)  
	uint32_t                                           Y;                                                          // 0x0004   (0x0004)  
	uint32_t                                           Z;                                                          // 0x0008   (0x0004)  
};

/// Struct /Script/CoreUObject.Uint32Vector2
/// Size: 0x0008 (0x000000 - 0x000008)
struct FUint32Vector2
{ 
	uint32_t                                           X;                                                          // 0x0000   (0x0004)  
	uint32_t                                           Y;                                                          // 0x0004   (0x0004)  
};

/// Struct /Script/CoreUObject.Uint32Vector4
/// Size: 0x0010 (0x000000 - 0x000010)
struct FUint32Vector4
{ 
	uint32_t                                           X;                                                          // 0x0000   (0x0004)  
	uint32_t                                           Y;                                                          // 0x0004   (0x0004)  
	uint32_t                                           Z;                                                          // 0x0008   (0x0004)  
	uint32_t                                           W;                                                          // 0x000C   (0x0004)  
};

/// Struct /Script/CoreUObject.Uint64Point
/// Size: 0x0010 (0x000000 - 0x000010)
struct FUint64Point
{ 
	int64_t                                            X;                                                          // 0x0000   (0x0008)  
	int64_t                                            Y;                                                          // 0x0008   (0x0008)  
};

/// Struct /Script/CoreUObject.Uint64Vector
/// Size: 0x0018 (0x000000 - 0x000018)
struct FUint64Vector
{ 
	uint64_t                                           X;                                                          // 0x0000   (0x0008)  
	uint64_t                                           Y;                                                          // 0x0008   (0x0008)  
	uint64_t                                           Z;                                                          // 0x0010   (0x0008)  
};

/// Struct /Script/CoreUObject.Uint64Vector2
/// Size: 0x0010 (0x000000 - 0x000010)
struct FUint64Vector2
{ 
	uint64_t                                           X;                                                          // 0x0000   (0x0008)  
	uint64_t                                           Y;                                                          // 0x0008   (0x0008)  
};

/// Struct /Script/CoreUObject.Uint64Vector4
/// Size: 0x0020 (0x000000 - 0x000020)
struct FUint64Vector4
{ 
	uint64_t                                           X;                                                          // 0x0000   (0x0008)  
	uint64_t                                           Y;                                                          // 0x0008   (0x0008)  
	uint64_t                                           Z;                                                          // 0x0010   (0x0008)  
	uint64_t                                           W;                                                          // 0x0018   (0x0008)  
};

/// Struct /Script/CoreUObject.UintPoint
/// Size: 0x0008 (0x000000 - 0x000008)
struct FUintPoint
{ 
	int32_t                                            X;                                                          // 0x0000   (0x0004)  
	int32_t                                            Y;                                                          // 0x0004   (0x0004)  
};

/// Struct /Script/CoreUObject.UintVector
/// Size: 0x000C (0x000000 - 0x00000C)
struct FUintVector
{ 
	uint32_t                                           X;                                                          // 0x0000   (0x0004)  
	uint32_t                                           Y;                                                          // 0x0004   (0x0004)  
	uint32_t                                           Z;                                                          // 0x0008   (0x0004)  
};

/// Struct /Script/CoreUObject.UintVector2
/// Size: 0x0008 (0x000000 - 0x000008)
struct FUintVector2
{ 
	uint32_t                                           X;                                                          // 0x0000   (0x0004)  
	uint32_t                                           Y;                                                          // 0x0004   (0x0004)  
};

/// Struct /Script/CoreUObject.UintVector4
/// Size: 0x0010 (0x000000 - 0x000010)
struct FUintVector4
{ 
	uint32_t                                           X;                                                          // 0x0000   (0x0004)  
	uint32_t                                           Y;                                                          // 0x0004   (0x0004)  
	uint32_t                                           Z;                                                          // 0x0008   (0x0004)  
	uint32_t                                           W;                                                          // 0x000C   (0x0004)  
};

/// Struct /Script/CoreUObject.Vector4
/// Size: 0x0020 (0x000000 - 0x000020)
struct FVector4
{ 
	double                                             X;                                                          // 0x0000   (0x0008)  
	double                                             Y;                                                          // 0x0008   (0x0008)  
	double                                             Z;                                                          // 0x0010   (0x0008)  
	double                                             W;                                                          // 0x0018   (0x0008)  
};

/// Struct /Script/CoreUObject.Vector4d
/// Size: 0x0020 (0x000000 - 0x000020)
struct FVector4d
{ 
	double                                             X;                                                          // 0x0000   (0x0008)  
	double                                             Y;                                                          // 0x0008   (0x0008)  
	double                                             Z;                                                          // 0x0010   (0x0008)  
	double                                             W;                                                          // 0x0018   (0x0008)  
};

/// Struct /Script/CoreUObject.Vector4f
/// Size: 0x0010 (0x000000 - 0x000010)
struct FVector4f
{ 
	float                                              X;                                                          // 0x0000   (0x0004)  
	float                                              Y;                                                          // 0x0004   (0x0004)  
	float                                              Z;                                                          // 0x0008   (0x0004)  
	float                                              W;                                                          // 0x000C   (0x0004)  
};

/// Struct /Script/CoreUObject.OverriddenPropertyNodeID
/// Size: 0x0010 (0x000000 - 0x000010)
struct FOverriddenPropertyNodeID
{ 
	FName                                              Path;                                                       // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	class UObject*                                     Object;                                                     // 0x0008   (0x0008)  
};

/// Struct /Script/CoreUObject.OverriddenPropertyNode
/// Size: 0x0068 (0x000000 - 0x000068)
struct FOverriddenPropertyNode
{ 
	FOverriddenPropertyNodeID                          NodeId;                                                     // 0x0000   (0x0010)  
	EOverriddenPropertyOperation                       Operation;                                                  // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0011   (0x0007)  MISSED
	SDK_UNDEFINED(80,31) /* TMap<FOverriddenPropertyNodeID, FOverriddenPropertyNodeID> */ __um(SubPropertyNodeKeys); // 0x0018   (0x0050)  
};

/// Struct /Script/CoreUObject.OverriddenPropertySet
/// Size: 0x0058 (0x000000 - 0x000058)
struct FOverriddenPropertySet
{ 
	class UObject*                                     Owner;                                                      // 0x0000   (0x0008)  
	SDK_UNDEFINED(80,32) /* TSet<FOverriddenPropertyNode> */ __um(OverriddenPropertyNodes);                        // 0x0008   (0x0050)  
};

/// Struct /Script/CoreUObject.FieldCookedMetaDataStore
/// Size: 0x0050 (0x000000 - 0x000050)
struct FFieldCookedMetaDataStore
{ 
	SDK_UNDEFINED(80,33) /* TMap<FName, FString> */    __um(FieldMetaData);                                        // 0x0000   (0x0050)  
};

