
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: AnimationCore
/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine
/// dependency: StructUtils

/// Enum /Script/RigVM.ERigVMPinDirection
/// Size: 0x07
enum class ERigVMPinDirection : uint8_t
{
	ERigVMPinDirection__Input                                                        = 0,
	ERigVMPinDirection__Output                                                       = 1,
	ERigVMPinDirection__IO                                                           = 2,
	ERigVMPinDirection__Visible                                                      = 3,
	ERigVMPinDirection__Hidden                                                       = 4,
	ERigVMPinDirection__Invalid                                                      = 5,
	ERigVMPinDirection__ERigVMPinDirection_MAX                                       = 6
};

/// Enum /Script/RigVM.ERigVMFunctionArgumentDirection
/// Size: 0x04
enum class ERigVMFunctionArgumentDirection : uint8_t
{
	ERigVMFunctionArgumentDirection__Input                                           = 0,
	ERigVMFunctionArgumentDirection__Output                                          = 1,
	ERigVMFunctionArgumentDirection__Invalid                                         = 2,
	ERigVMFunctionArgumentDirection__ERigVMFunctionArgumentDirection_MAX             = 3
};

/// Enum /Script/RigVM.ERigVMTransformSpace
/// Size: 0x03
enum class ERigVMTransformSpace : uint8_t
{
	ERigVMTransformSpace__LocalSpace                                                 = 0,
	ERigVMTransformSpace__GlobalSpace                                                = 1,
	ERigVMTransformSpace__Max                                                        = 2
};

/// Enum /Script/RigVM.ERigVMClampSpatialMode
/// Size: 0x05
enum class ERigVMClampSpatialMode : uint8_t
{
	ERigVMClampSpatialMode__Plane                                                    = 0,
	ERigVMClampSpatialMode__Cylinder                                                 = 1,
	ERigVMClampSpatialMode__Sphere                                                   = 2,
	ERigVMClampSpatialMode__Capsule                                                  = 3,
	ERigVMClampSpatialMode__ERigVMClampSpatialMode_MAX                               = 4
};

/// Enum /Script/RigVM.ERigVMParameterType
/// Size: 0x04
enum class ERigVMParameterType : uint8_t
{
	ERigVMParameterType__Input                                                       = 0,
	ERigVMParameterType__Output                                                      = 1,
	ERigVMParameterType__Invalid                                                     = 2,
	ERigVMParameterType__ERigVMParameterType_MAX                                     = 3
};

/// Enum /Script/RigVM.ERigVMOpCode
/// Size: 0x107
enum class ERigVMOpCode : uint8_t
{
	ERigVMOpCode__Execute_0_Operands                                                 = 0,
	ERigVMOpCode__Execute_1_Operands                                                 = 1,
	ERigVMOpCode__Execute_2_Operands                                                 = 2,
	ERigVMOpCode__Execute_3_Operands                                                 = 3,
	ERigVMOpCode__Execute_4_Operands                                                 = 4,
	ERigVMOpCode__Execute_5_Operands                                                 = 5,
	ERigVMOpCode__Execute_6_Operands                                                 = 6,
	ERigVMOpCode__Execute_7_Operands                                                 = 7,
	ERigVMOpCode__Execute_8_Operands                                                 = 8,
	ERigVMOpCode__Execute_9_Operands                                                 = 9,
	ERigVMOpCode__Execute_10_Operands                                                = 10,
	ERigVMOpCode__Execute_11_Operands                                                = 11,
	ERigVMOpCode__Execute_12_Operands                                                = 12,
	ERigVMOpCode__Execute_13_Operands                                                = 13,
	ERigVMOpCode__Execute_14_Operands                                                = 14,
	ERigVMOpCode__Execute_15_Operands                                                = 15,
	ERigVMOpCode__Execute_16_Operands                                                = 16,
	ERigVMOpCode__Execute_17_Operands                                                = 17,
	ERigVMOpCode__Execute_18_Operands                                                = 18,
	ERigVMOpCode__Execute_19_Operands                                                = 19,
	ERigVMOpCode__Execute_20_Operands                                                = 20,
	ERigVMOpCode__Execute_21_Operands                                                = 21,
	ERigVMOpCode__Execute_22_Operands                                                = 22,
	ERigVMOpCode__Execute_23_Operands                                                = 23,
	ERigVMOpCode__Execute_24_Operands                                                = 24,
	ERigVMOpCode__Execute_25_Operands                                                = 25,
	ERigVMOpCode__Execute_26_Operands                                                = 26,
	ERigVMOpCode__Execute_27_Operands                                                = 27,
	ERigVMOpCode__Execute_28_Operands                                                = 28,
	ERigVMOpCode__Execute_29_Operands                                                = 29,
	ERigVMOpCode__Execute_30_Operands                                                = 30,
	ERigVMOpCode__Execute_31_Operands                                                = 31,
	ERigVMOpCode__Execute_32_Operands                                                = 32,
	ERigVMOpCode__Execute_33_Operands                                                = 33,
	ERigVMOpCode__Execute_34_Operands                                                = 34,
	ERigVMOpCode__Execute_35_Operands                                                = 35,
	ERigVMOpCode__Execute_36_Operands                                                = 36,
	ERigVMOpCode__Execute_37_Operands                                                = 37,
	ERigVMOpCode__Execute_38_Operands                                                = 38,
	ERigVMOpCode__Execute_39_Operands                                                = 39,
	ERigVMOpCode__Execute_40_Operands                                                = 40,
	ERigVMOpCode__Execute_41_Operands                                                = 41,
	ERigVMOpCode__Execute_42_Operands                                                = 42,
	ERigVMOpCode__Execute_43_Operands                                                = 43,
	ERigVMOpCode__Execute_44_Operands                                                = 44,
	ERigVMOpCode__Execute_45_Operands                                                = 45,
	ERigVMOpCode__Execute_46_Operands                                                = 46,
	ERigVMOpCode__Execute_47_Operands                                                = 47,
	ERigVMOpCode__Execute_48_Operands                                                = 48,
	ERigVMOpCode__Execute_49_Operands                                                = 49,
	ERigVMOpCode__Execute_50_Operands                                                = 50,
	ERigVMOpCode__Execute_51_Operands                                                = 51,
	ERigVMOpCode__Execute_52_Operands                                                = 52,
	ERigVMOpCode__Execute_53_Operands                                                = 53,
	ERigVMOpCode__Execute_54_Operands                                                = 54,
	ERigVMOpCode__Execute_55_Operands                                                = 55,
	ERigVMOpCode__Execute_56_Operands                                                = 56,
	ERigVMOpCode__Execute_57_Operands                                                = 57,
	ERigVMOpCode__Execute_58_Operands                                                = 58,
	ERigVMOpCode__Execute_59_Operands                                                = 59,
	ERigVMOpCode__Execute_60_Operands                                                = 60,
	ERigVMOpCode__Execute_61_Operands                                                = 61,
	ERigVMOpCode__Execute_62_Operands                                                = 62,
	ERigVMOpCode__Execute_63_Operands                                                = 63,
	ERigVMOpCode__Execute_64_Operands                                                = 64,
	ERigVMOpCode__Zero                                                               = 65,
	ERigVMOpCode__BoolFalse                                                          = 66,
	ERigVMOpCode__BoolTrue                                                           = 67,
	ERigVMOpCode__Copy                                                               = 68,
	ERigVMOpCode__Increment                                                          = 69,
	ERigVMOpCode__Decrement                                                          = 70,
	ERigVMOpCode__Equals                                                             = 71,
	ERigVMOpCode__NotEquals                                                          = 72,
	ERigVMOpCode__JumpAbsolute                                                       = 73,
	ERigVMOpCode__JumpForward                                                        = 74,
	ERigVMOpCode__JumpBackward                                                       = 75,
	ERigVMOpCode__JumpAbsoluteIf                                                     = 76,
	ERigVMOpCode__JumpForwardIf                                                      = 77,
	ERigVMOpCode__JumpBackwardIf                                                     = 78,
	ERigVMOpCode__ChangeType                                                         = 79,
	ERigVMOpCode__Exit                                                               = 80,
	ERigVMOpCode__BeginBlock                                                         = 81,
	ERigVMOpCode__EndBlock                                                           = 82,
	ERigVMOpCode__ArrayReset                                                         = 83,
	ERigVMOpCode__ArrayGetNum                                                        = 84,
	ERigVMOpCode__ArraySetNum                                                        = 85,
	ERigVMOpCode__ArrayGetAtIndex                                                    = 86,
	ERigVMOpCode__ArraySetAtIndex                                                    = 87,
	ERigVMOpCode__ArrayAdd                                                           = 88,
	ERigVMOpCode__ArrayInsert                                                        = 89,
	ERigVMOpCode__ArrayRemove                                                        = 90,
	ERigVMOpCode__ArrayFind                                                          = 91,
	ERigVMOpCode__ArrayAppend                                                        = 92,
	ERigVMOpCode__ArrayClone                                                         = 93,
	ERigVMOpCode__ArrayIterator                                                      = 94,
	ERigVMOpCode__ArrayUnion                                                         = 95,
	ERigVMOpCode__ArrayDifference                                                    = 96,
	ERigVMOpCode__ArrayIntersection                                                  = 97,
	ERigVMOpCode__ArrayReverse                                                       = 98,
	ERigVMOpCode__InvokeEntry                                                        = 99,
	ERigVMOpCode__JumpToBranch                                                       = 100,
	ERigVMOpCode__Execute                                                            = 101,
	ERigVMOpCode__RunInstructions                                                    = 102,
	ERigVMOpCode__Invalid                                                            = 103,
	ERigVMOpCode__FirstArrayOpCode                                                   = 83,
	ERigVMOpCode__LastArrayOpCode                                                    = 98,
	ERigVMOpCode__ERigVMOpCode_MAX                                                   = 104
};

/// Enum /Script/RigVM.ERigVMCopyType
/// Size: 0x04
enum class ERigVMCopyType : uint8_t
{
	ERigVMCopyType__Default                                                          = 0,
	ERigVMCopyType__FloatToDouble                                                    = 1,
	ERigVMCopyType__DoubleToFloat                                                    = 2,
	ERigVMCopyType__ERigVMCopyType_MAX                                               = 3
};

/// Enum /Script/RigVM.ERigVMBreakpointAction
/// Size: 0x06
enum class ERigVMBreakpointAction : uint8_t
{
	ERigVMBreakpointAction__None                                                     = 0,
	ERigVMBreakpointAction__Resume                                                   = 1,
	ERigVMBreakpointAction__StepOver                                                 = 2,
	ERigVMBreakpointAction__StepInto                                                 = 3,
	ERigVMBreakpointAction__StepOut                                                  = 4,
	ERigVMBreakpointAction__Max                                                      = 5
};

/// Enum /Script/RigVM.ERigVMDrawSettings
/// Size: 0x05
enum class ERigVMDrawSettings : uint8_t
{
	ERigVMDrawSettings__Points                                                       = 0,
	ERigVMDrawSettings__Lines                                                        = 1,
	ERigVMDrawSettings__LineStrip                                                    = 2,
	ERigVMDrawSettings__DynamicMesh                                                  = 3,
	ERigVMDrawSettings__ERigVMDrawSettings_MAX                                       = 4
};

/// Enum /Script/RigVM.ERigVMMemoryType
/// Size: 0x06
enum class ERigVMMemoryType : uint8_t
{
	ERigVMMemoryType__Work                                                           = 0,
	ERigVMMemoryType__Literal                                                        = 1,
	ERigVMMemoryType__External                                                       = 2,
	ERigVMMemoryType__Debug                                                          = 3,
	ERigVMMemoryType__Invalid                                                        = 4,
	ERigVMMemoryType__ERigVMMemoryType_MAX                                           = 5
};

/// Enum /Script/RigVM.ERigVMRegisterType
/// Size: 0x06
enum class ERigVMRegisterType : uint8_t
{
	ERigVMRegisterType__Plain                                                        = 0,
	ERigVMRegisterType__String                                                       = 1,
	ERigVMRegisterType__Name                                                         = 2,
	ERigVMRegisterType__Struct                                                       = 3,
	ERigVMRegisterType__Invalid                                                      = 4,
	ERigVMRegisterType__ERigVMRegisterType_MAX                                       = 5
};

/// Enum /Script/RigVM.ERigVMUserWorkflowType
/// Size: 0x06
enum class ERigVMUserWorkflowType : uint8_t
{
	ERigVMUserWorkflowType__Invalid                                                  = 0,
	ERigVMUserWorkflowType__NodeContext                                              = 1,
	ERigVMUserWorkflowType__PinContext                                               = 2,
	ERigVMUserWorkflowType__OnPinDefaultChanged                                      = 4,
	ERigVMUserWorkflowType__All                                                      = 7,
	ERigVMUserWorkflowType__ERigVMUserWorkflowType_MAX                               = 8
};

/// Enum /Script/RigVM.ERigUnitDebugPointMode
/// Size: 0x03
enum class ERigUnitDebugPointMode : uint8_t
{
	ERigUnitDebugPointMode__Point                                                    = 0,
	ERigUnitDebugPointMode__Vector                                                   = 1,
	ERigUnitDebugPointMode__Max                                                      = 2
};

/// Enum /Script/RigVM.ERigUnitDebugTransformMode
/// Size: 0x04
enum class ERigUnitDebugTransformMode : uint8_t
{
	ERigUnitDebugTransformMode__Point                                                = 0,
	ERigUnitDebugTransformMode__Axes                                                 = 1,
	ERigUnitDebugTransformMode__Box                                                  = 2,
	ERigUnitDebugTransformMode__Max                                                  = 3
};

/// Enum /Script/RigVM.ERigUnitVisualDebugPointMode
/// Size: 0x03
enum class ERigUnitVisualDebugPointMode : uint8_t
{
	ERigUnitVisualDebugPointMode__Point                                              = 0,
	ERigUnitVisualDebugPointMode__Vector                                             = 1,
	ERigUnitVisualDebugPointMode__Max                                                = 2
};

/// Enum /Script/RigVM.ERBFKernelType
/// Size: 0x06
enum class ERBFKernelType : uint8_t
{
	ERBFKernelType__Gaussian                                                         = 0,
	ERBFKernelType__Exponential                                                      = 1,
	ERBFKernelType__Linear                                                           = 2,
	ERBFKernelType__Cubic                                                            = 3,
	ERBFKernelType__Quintic                                                          = 4,
	ERBFKernelType__ERBFKernelType_MAX                                               = 5
};

/// Enum /Script/RigVM.ERBFQuatDistanceType
/// Size: 0x05
enum class ERBFQuatDistanceType : uint8_t
{
	ERBFQuatDistanceType__Euclidean                                                  = 0,
	ERBFQuatDistanceType__ArcLength                                                  = 1,
	ERBFQuatDistanceType__SwingAngle                                                 = 2,
	ERBFQuatDistanceType__TwistAngle                                                 = 3,
	ERBFQuatDistanceType__ERBFQuatDistanceType_MAX                                   = 4
};

/// Enum /Script/RigVM.ERBFVectorDistanceType
/// Size: 0x04
enum class ERBFVectorDistanceType : uint8_t
{
	ERBFVectorDistanceType__Euclidean                                                = 0,
	ERBFVectorDistanceType__Manhattan                                                = 1,
	ERBFVectorDistanceType__ArcLength                                                = 2,
	ERBFVectorDistanceType__ERBFVectorDistanceType_MAX                               = 3
};

/// Enum /Script/RigVM.ERigVMAnimEasingType
/// Size: 0x32
enum class ERigVMAnimEasingType : uint8_t
{
	ERigVMAnimEasingType__Linear                                                     = 0,
	ERigVMAnimEasingType__QuadraticEaseIn                                            = 1,
	ERigVMAnimEasingType__QuadraticEaseOut                                           = 2,
	ERigVMAnimEasingType__QuadraticEaseInOut                                         = 3,
	ERigVMAnimEasingType__CubicEaseIn                                                = 4,
	ERigVMAnimEasingType__CubicEaseOut                                               = 5,
	ERigVMAnimEasingType__CubicEaseInOut                                             = 6,
	ERigVMAnimEasingType__QuarticEaseIn                                              = 7,
	ERigVMAnimEasingType__QuarticEaseOut                                             = 8,
	ERigVMAnimEasingType__QuarticEaseInOut                                           = 9,
	ERigVMAnimEasingType__QuinticEaseIn                                              = 10,
	ERigVMAnimEasingType__QuinticEaseOut                                             = 11,
	ERigVMAnimEasingType__QuinticEaseInOut                                           = 12,
	ERigVMAnimEasingType__SineEaseIn                                                 = 13,
	ERigVMAnimEasingType__SineEaseOut                                                = 14,
	ERigVMAnimEasingType__SineEaseInOut                                              = 15,
	ERigVMAnimEasingType__CircularEaseIn                                             = 16,
	ERigVMAnimEasingType__CircularEaseOut                                            = 17,
	ERigVMAnimEasingType__CircularEaseInOut                                          = 18,
	ERigVMAnimEasingType__ExponentialEaseIn                                          = 19,
	ERigVMAnimEasingType__ExponentialEaseOut                                         = 20,
	ERigVMAnimEasingType__ExponentialEaseInOut                                       = 21,
	ERigVMAnimEasingType__ElasticEaseIn                                              = 22,
	ERigVMAnimEasingType__ElasticEaseOut                                             = 23,
	ERigVMAnimEasingType__ElasticEaseInOut                                           = 24,
	ERigVMAnimEasingType__BackEaseIn                                                 = 25,
	ERigVMAnimEasingType__BackEaseOut                                                = 26,
	ERigVMAnimEasingType__BackEaseInOut                                              = 27,
	ERigVMAnimEasingType__BounceEaseIn                                               = 28,
	ERigVMAnimEasingType__BounceEaseOut                                              = 29,
	ERigVMAnimEasingType__BounceEaseInOut                                            = 30,
	ERigVMAnimEasingType__ERigVMAnimEasingType_MAX                                   = 31
};

/// Enum /Script/RigVM.ERigVMSimPointIntegrateType
/// Size: 0x03
enum class ERigVMSimPointIntegrateType : uint8_t
{
	ERigVMSimPointIntegrateType__Verlet                                              = 0,
	ERigVMSimPointIntegrateType__SemiExplicitEuler                                   = 1,
	ERigVMSimPointIntegrateType__ERigVMSimPointIntegrateType_MAX                     = 2
};

/// Class /Script/RigVM.RigVMGraphFunctionHost
/// Size: 0x0000 (0x000028 - 0x000028)
class URigVMGraphFunctionHost : public UInterface
{ 
public:
};

/// Struct /Script/RigVM.RigVMGraphFunctionIdentifier
/// Size: 0x0030 (0x000000 - 0x000030)
struct FRigVMGraphFunctionIdentifier
{ 
	FSoftObjectPath                                    LibraryNode;                                                // 0x0000   (0x0018)  
	FSoftObjectPath                                    HostObject;                                                 // 0x0018   (0x0018)  
};

/// Struct /Script/RigVM.RigVMGraphFunctionArgument
/// Size: 0x00A0 (0x000000 - 0x0000A0)
struct FRigVMGraphFunctionArgument
{ 
	FName                                              Name;                                                       // 0x0000   (0x0004)  
	FName                                              DisplayName;                                                // 0x0004   (0x0004)  
	FName                                              CPPType;                                                    // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	SDK_UNDEFINED(32,1632) /* TWeakObjectPtr<UObject*> */ __um(CPPTypeObject);                                     // 0x0010   (0x0020)  
	bool                                               bIsArray;                                                   // 0x0030   (0x0001)  
	ERigVMPinDirection                                 Direction;                                                  // 0x0031   (0x0001)  
	unsigned char                                      UnknownData01_5[0x6];                                       // 0x0032   (0x0006)  MISSED
	SDK_UNDEFINED(16,1633) /* FString */               __um(DefaultValue);                                         // 0x0038   (0x0010)  
	bool                                               bIsConst;                                                   // 0x0048   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x0049   (0x0007)  MISSED
	SDK_UNDEFINED(80,1634) /* TMap<FString, FText> */  __um(PathToTooltip);                                        // 0x0050   (0x0050)  
};

/// Struct /Script/RigVM.RigVMExternalVariableDef
/// Size: 0x0028 (0x000000 - 0x000028)
struct FRigVMExternalVariableDef
{ 
	unsigned char                                      UnknownData00_2[0x28];                                      // 0x0000   (0x0028)  MISSED
};

/// Struct /Script/RigVM.RigVMExternalVariable
/// Size: 0x0008 (0x000028 - 0x000030)
struct FRigVMExternalVariable : FRigVMExternalVariableDef
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0028   (0x0008)  MISSED
};

/// Struct /Script/RigVM.RigVMGraphFunctionHeader
/// Size: 0x0110 (0x000000 - 0x000110)
struct FRigVMGraphFunctionHeader
{ 
	FRigVMGraphFunctionIdentifier                      LibraryPointer;                                             // 0x0000   (0x0030)  
	FName                                              Name;                                                       // 0x0030   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0034   (0x0004)  MISSED
	SDK_UNDEFINED(16,1635) /* FString */               __um(NodeTitle);                                            // 0x0038   (0x0010)  
	FLinearColor                                       NodeColor;                                                  // 0x0048   (0x0010)  
	SDK_UNDEFINED(24,1636) /* FText */                 __um(ToolTip);                                              // 0x0058   (0x0018)  
	SDK_UNDEFINED(16,1637) /* FString */               __um(Description);                                          // 0x0070   (0x0010)  
	SDK_UNDEFINED(16,1638) /* FString */               __um(Category);                                             // 0x0080   (0x0010)  
	SDK_UNDEFINED(16,1639) /* FString */               __um(Keywords);                                             // 0x0090   (0x0010)  
	TArray<FRigVMGraphFunctionArgument>                Arguments;                                                  // 0x00A0   (0x0010)  
	SDK_UNDEFINED(80,1640) /* TMap<FRigVMGraphFunctionIdentifier, uint32_t> */ __um(Dependencies);                 // 0x00B0   (0x0050)  
	TArray<FRigVMExternalVariable>                     ExternalVariables;                                          // 0x0100   (0x0010)  
};

/// Struct /Script/RigVM.RigVMByteCodeEntry
/// Size: 0x0008 (0x000000 - 0x000008)
struct FRigVMByteCodeEntry
{ 
	FName                                              Name;                                                       // 0x0000   (0x0004)  
	int32_t                                            InstructionIndex;                                           // 0x0004   (0x0004)  
};

/// Struct /Script/RigVM.RigVMBranchInfo
/// Size: 0x0014 (0x000000 - 0x000014)
struct FRigVMBranchInfo
{ 
	int32_t                                            Index;                                                      // 0x0000   (0x0004)  
	FName                                              Label;                                                      // 0x0004   (0x0004)  
	int32_t                                            InstructionIndex;                                           // 0x0008   (0x0004)  
	int32_t                                            ArgumentIndex;                                              // 0x000C   (0x0004)  
	uint16_t                                           FirstInstruction;                                           // 0x0010   (0x0002)  
	uint16_t                                           LastInstruction;                                            // 0x0012   (0x0002)  
};

/// Struct /Script/RigVM.RigVMPredicateBranch
/// Size: 0x0030 (0x000000 - 0x000030)
struct FRigVMPredicateBranch
{ 
	unsigned char                                      UnknownData00_2[0x30];                                      // 0x0000   (0x0030)  MISSED
};

/// Struct /Script/RigVM.RigVMByteCode
/// Size: 0x00B0 (0x000000 - 0x0000B0)
struct FRigVMByteCode
{ 
	TArray<char>                                       ByteCode;                                                   // 0x0000   (0x0010)  
	int32_t                                            NumInstructions;                                            // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0014   (0x0004)  MISSED
	TArray<FRigVMByteCodeEntry>                        Entries;                                                    // 0x0018   (0x0010)  
	TArray<FRigVMBranchInfo>                           BranchInfos;                                                // 0x0028   (0x0010)  
	TArray<FRigVMPredicateBranch>                      PredicateBranches;                                          // 0x0038   (0x0010)  
	SDK_UNDEFINED(16,1641) /* FString */               __um(PublicContextPathName);                                // 0x0048   (0x0010)  
	unsigned char                                      UnknownData01_6[0x58];                                      // 0x0058   (0x0058)  MISSED
};

/// Struct /Script/RigVM.RigVMFunctionCompilationPropertyDescription
/// Size: 0x0048 (0x000000 - 0x000048)
struct FRigVMFunctionCompilationPropertyDescription
{ 
	FName                                              Name;                                                       // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	SDK_UNDEFINED(16,1642) /* FString */               __um(CPPType);                                              // 0x0008   (0x0010)  
	SDK_UNDEFINED(32,1643) /* TWeakObjectPtr<UObject*> */ __um(CPPTypeObject);                                     // 0x0018   (0x0020)  
	SDK_UNDEFINED(16,1644) /* FString */               __um(DefaultValue);                                         // 0x0038   (0x0010)  
};

/// Struct /Script/RigVM.RigVMFunctionCompilationPropertyPath
/// Size: 0x0028 (0x000000 - 0x000028)
struct FRigVMFunctionCompilationPropertyPath
{ 
	int32_t                                            PropertyIndex;                                              // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	SDK_UNDEFINED(16,1645) /* FString */               __um(HeadCPPType);                                          // 0x0008   (0x0010)  
	SDK_UNDEFINED(16,1646) /* FString */               __um(SegmentPath);                                          // 0x0018   (0x0010)  
};

/// Struct /Script/RigVM.RigVMFunctionCompilationData
/// Size: 0x0238 (0x000000 - 0x000238)
struct FRigVMFunctionCompilationData
{ 
	FRigVMByteCode                                     ByteCode;                                                   // 0x0000   (0x00B0)  
	TArray<FName>                                      FunctionNames;                                              // 0x00B0   (0x0010)  
	TArray<FRigVMFunctionCompilationPropertyDescription> WorkPropertyDescriptions;                                 // 0x00C0   (0x0010)  
	TArray<FRigVMFunctionCompilationPropertyPath>      WorkPropertyPathDescriptions;                               // 0x00D0   (0x0010)  
	TArray<FRigVMFunctionCompilationPropertyDescription> LiteralPropertyDescriptions;                              // 0x00E0   (0x0010)  
	TArray<FRigVMFunctionCompilationPropertyPath>      LiteralPropertyPathDescriptions;                            // 0x00F0   (0x0010)  
	TArray<FRigVMFunctionCompilationPropertyDescription> DebugPropertyDescriptions;                                // 0x0100   (0x0010)  
	TArray<FRigVMFunctionCompilationPropertyPath>      DebugPropertyPathDescriptions;                              // 0x0110   (0x0010)  
	TArray<FRigVMFunctionCompilationPropertyDescription> ExternalPropertyDescriptions;                             // 0x0120   (0x0010)  
	TArray<FRigVMFunctionCompilationPropertyPath>      ExternalPropertyPathDescriptions;                           // 0x0130   (0x0010)  
	SDK_UNDEFINED(80,1647) /* TMap<int32_t, FName> */  __um(ExternalRegisterIndexToVariable);                      // 0x0140   (0x0050)  
	SDK_UNDEFINED(80,1648) /* TMap<FString, FRigVMOperand> */ __um(Operands);                                      // 0x0190   (0x0050)  
	uint32_t                                           Hash;                                                       // 0x01E0   (0x0004)  
	bool                                               bEncounteredSurpressedErrors;                               // 0x01E4   (0x0001)  
	unsigned char                                      UnknownData00_6[0x53];                                      // 0x01E5   (0x0053)  MISSED
};

/// Struct /Script/RigVM.RigVMGraphFunctionData
/// Size: 0x0358 (0x000000 - 0x000358)
struct FRigVMGraphFunctionData
{ 
	FRigVMGraphFunctionHeader                          Header;                                                     // 0x0000   (0x0110)  
	FRigVMFunctionCompilationData                      CompilationData;                                            // 0x0110   (0x0238)  
	SDK_UNDEFINED(16,1649) /* FString */               __um(SerializedCollapsedNode);                              // 0x0348   (0x0010)  
};

/// Struct /Script/RigVM.RigVMGraphFunctionStore
/// Size: 0x0020 (0x000000 - 0x000020)
struct FRigVMGraphFunctionStore
{ 
	TArray<FRigVMGraphFunctionData>                    PublicFunctions;                                            // 0x0000   (0x0010)  
	TArray<FRigVMGraphFunctionData>                    PrivateFunctions;                                           // 0x0010   (0x0010)  
};

/// Class /Script/RigVM.RigVMBlueprintGeneratedClass
/// Size: 0x0028 (0x000360 - 0x000388)
class URigVMBlueprintGeneratedClass : public UBlueprintGeneratedClass
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0360   (0x0008)  MISSED
	FRigVMGraphFunctionStore                           GraphFunctionStore;                                         // 0x0368   (0x0020)  
};

/// Struct /Script/RigVM.RigVMMemoryStorageStruct
/// Size: 0x0040 (0x000010 - 0x000050)
struct FRigVMMemoryStorageStruct : FInstancedPropertyBag
{ 
	unsigned char                                      UnknownData00_1[0x40];                                      // 0x0010   (0x0040)  MISSED
};

/// Struct /Script/RigVM.RigVMInstruction
/// Size: 0x0010 (0x000000 - 0x000010)
struct FRigVMInstruction
{ 
	uint64_t                                           ByteCodeIndex;                                              // 0x0000   (0x0008)  
	ERigVMOpCode                                       OpCode;                                                     // 0x0008   (0x0001)  
	char                                               OperandAlignment;                                           // 0x0009   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x000A   (0x0006)  MISSED
};

/// Struct /Script/RigVM.RigVMInstructionArray
/// Size: 0x0010 (0x000000 - 0x000010)
struct FRigVMInstructionArray
{ 
	TArray<FRigVMInstruction>                          Instructions;                                               // 0x0000   (0x0010)  
};

/// Struct /Script/RigVM.RigVMParameter
/// Size: 0x0030 (0x000000 - 0x000030)
struct FRigVMParameter
{ 
	ERigVMParameterType                                Type;                                                       // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	FName                                              Name;                                                       // 0x0004   (0x0004)  
	int32_t                                            RegisterIndex;                                              // 0x0008   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	SDK_UNDEFINED(16,1650) /* FString */               __um(CPPType);                                              // 0x0010   (0x0010)  
	class UScriptStruct*                               ScriptStruct;                                               // 0x0020   (0x0008)  
	FName                                              ScriptStructPath;                                           // 0x0028   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x002C   (0x0004)  MISSED
};

/// Class /Script/RigVM.RigVM
/// Size: 0x0368 (0x000028 - 0x000390)
class URigVM : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	FRigVMMemoryStorageStruct                          LiteralMemoryStorage;                                       // 0x0028   (0x0050)  
	FRigVMMemoryStorageStruct                          DefaultWorkMemoryStorage;                                   // 0x0078   (0x0050)  
	FRigVMMemoryStorageStruct                          DefaultDebugMemoryStorage;                                  // 0x00C8   (0x0050)  
	unsigned char                                      UnknownData01_5[0x20];                                      // 0x0118   (0x0020)  MISSED
	FRigVMByteCode                                     ByteCodeStorage;                                            // 0x0138   (0x00B0)  
	unsigned char                                      UnknownData02_5[0x8];                                       // 0x01E8   (0x0008)  MISSED
	FRigVMInstructionArray                             Instructions;                                               // 0x01F0   (0x0010)  
	unsigned char                                      UnknownData03_5[0x8];                                       // 0x0200   (0x0008)  MISSED
	TArray<FName>                                      FunctionNamesStorage;                                       // 0x0208   (0x0010)  
	unsigned char                                      UnknownData04_5[0x38];                                      // 0x0218   (0x0038)  MISSED
	TArray<FRigVMParameter>                            Parameters;                                                 // 0x0250   (0x0010)  
	unsigned char                                      UnknownData05_5[0xD8];                                      // 0x0260   (0x00D8)  MISSED
	uint32_t                                           CachedVMHash;                                               // 0x0338   (0x0004)  
	unsigned char                                      UnknownData06_6[0x54];                                      // 0x033C   (0x0054)  MISSED


	/// Functions
	// Function /Script/RigVM.RigVM.SetParameterValueVector2D
	// void SetParameterValueVector2D(FName& InParameterName, FVector2D& InValue, int32_t InArrayIndex);                     // [0x70fba5c] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/RigVM.RigVM.SetParameterValueVector
	// void SetParameterValueVector(FName& InParameterName, FVector& InValue, int32_t InArrayIndex);                         // [0x70fbb80] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/RigVM.RigVM.SetParameterValueTransform
	// void SetParameterValueTransform(FName& InParameterName, FTransform& InValue, int32_t InArrayIndex);                   // [0x70fb8c8] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/RigVM.RigVM.SetParameterValueString
	// void SetParameterValueString(FName& InParameterName, FString InValue, int32_t InArrayIndex);                          // [0x70fb680] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RigVM.RigVM.SetParameterValueQuat
	// void SetParameterValueQuat(FName& InParameterName, FQuat& InValue, int32_t InArrayIndex);                             // [0x70fb518] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/RigVM.RigVM.SetParameterValueName
	// void SetParameterValueName(FName& InParameterName, FName& InValue, int32_t InArrayIndex);                             // [0x70fb3f0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RigVM.RigVM.SetParameterValueInt
	// void SetParameterValueInt(FName& InParameterName, int32_t InValue, int32_t InArrayIndex);                             // [0x70fb288] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RigVM.RigVM.SetParameterValueFloat
	// void SetParameterValueFloat(FName& InParameterName, float InValue, int32_t InArrayIndex);                             // [0x70fb120] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RigVM.RigVM.SetParameterValueDouble
	// void SetParameterValueDouble(FName& InParameterName, double InValue, int32_t InArrayIndex);                           // [0x70fafb4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RigVM.RigVM.SetParameterValueBool
	// void SetParameterValueBool(FName& InParameterName, bool InValue, int32_t InArrayIndex);                               // [0x70fae4c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RigVM.RigVM.GetStatistics
	// FRigVMStatistics GetStatistics();                                                                                     // [0x70fad00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RigVM.RigVM.GetRigVMFunctionName
	// FString GetRigVMFunctionName(int32_t InFunctionIndex);                                                                // [0x70fac58] Native|Public|Const  
	// Function /Script/RigVM.RigVM.GetParameterValueVector2D
	// FVector2D GetParameterValueVector2D(FName& InParameterName, int32_t InArrayIndex);                                    // [0x70faa4c] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/RigVM.RigVM.GetParameterValueVector
	// FVector GetParameterValueVector(FName& InParameterName, int32_t InArrayIndex);                                        // [0x70fab4c] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/RigVM.RigVM.GetParameterValueTransform
	// FTransform GetParameterValueTransform(FName& InParameterName, int32_t InArrayIndex);                                  // [0x70fa918] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/RigVM.RigVM.GetParameterValueString
	// FString GetParameterValueString(FName& InParameterName, int32_t InArrayIndex);                                        // [0x70fa730] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RigVM.RigVM.GetParameterValueQuat
	// FQuat GetParameterValueQuat(FName& InParameterName, int32_t InArrayIndex);                                            // [0x70fa628] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/RigVM.RigVM.GetParameterValueName
	// FName GetParameterValueName(FName& InParameterName, int32_t InArrayIndex);                                            // [0x70fa534] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RigVM.RigVM.GetParameterValueInt
	// int32_t GetParameterValueInt(FName& InParameterName, int32_t InArrayIndex);                                           // [0x70fa534] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RigVM.RigVM.GetParameterValueFloat
	// float GetParameterValueFloat(FName& InParameterName, int32_t InArrayIndex);                                           // [0x70fa534] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RigVM.RigVM.GetParameterValueDouble
	// double GetParameterValueDouble(FName& InParameterName, int32_t InArrayIndex);                                         // [0x70fa440] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RigVM.RigVM.GetParameterValueBool
	// bool GetParameterValueBool(FName& InParameterName, int32_t InArrayIndex);                                             // [0x70fa34c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RigVM.RigVM.Execute
	// bool Execute(FRigVMExtendedExecuteContext& Context, FName& InEntryName);                                              // [0x70fa1ac] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RigVM.RigVM.AddRigVMFunction
	// int32_t AddRigVMFunction(class UScriptStruct* InRigVMStruct, FName& InMethodName);                                    // [0x70fa0d8] Native|Public|HasOutParms 
};

/// Class /Script/RigVM.NameSpacedUserData
/// Size: 0x00D8 (0x000028 - 0x000100)
class UNameSpacedUserData : public UAssetUserData
{ 
public:
	SDK_UNDEFINED(16,1651) /* FString */               __um(NameSpace);                                            // 0x0028   (0x0010)  
	unsigned char                                      UnknownData00_6[0xC8];                                      // 0x0038   (0x00C8)  MISSED
};

/// Class /Script/RigVM.DataAssetLink
/// Size: 0x0008 (0x000100 - 0x000108)
class UDataAssetLink : public UNameSpacedUserData
{ 
public:
	class UDataAsset*                                  DataAsset;                                                  // 0x0100   (0x0008)  


	/// Functions
	// Function /Script/RigVM.DataAssetLink.SetDataAsset
	// void SetDataAsset(class UDataAsset* InDataAsset);                                                                     // [0x70fadcc] Final|Native|Public|BlueprintCallable 
	// Function /Script/RigVM.DataAssetLink.GetDataAsset
	// class UDataAsset* GetDataAsset();                                                                                     // [0x70fa334] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/RigVM.RigVMMemoryStorageGeneratorClass
/// Size: 0x0040 (0x000200 - 0x000240)
class URigVMMemoryStorageGeneratorClass : public UClass
{ 
public:
	unsigned char                                      UnknownData00_1[0x40];                                      // 0x0200   (0x0040)  MISSED
};

/// Class /Script/RigVM.RigVMMemoryStorage
/// Size: 0x0000 (0x000028 - 0x000028)
class URigVMMemoryStorage : public UObject
{ 
public:
};

/// Class /Script/RigVM.RigVMNativized
/// Size: 0x0028 (0x000390 - 0x0003B8)
class URigVMNativized : public URigVM
{ 
public:
	unsigned char                                      UnknownData00_1[0x28];                                      // 0x0390   (0x0028)  MISSED
};

/// Struct /Script/RigVM.RigVMUserWorkflow
/// Size: 0x0058 (0x000000 - 0x000058)
struct FRigVMUserWorkflow
{ 
	SDK_UNDEFINED(16,1652) /* FString */               __um(Title);                                                // 0x0008   (0x0010)  
	SDK_UNDEFINED(16,1653) /* FString */               __um(ToolTip);                                              // 0x0018   (0x0010)  
	ERigVMUserWorkflowType                             Type;                                                       // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_5[0x17];                                      // 0x0029   (0x0017)  MISSED
	SDK_UNDEFINED(12,1654) /* FDelegateProperty */     __um(PerformDynamicDelegate);                               // 0x0040   (0x000C)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x004C   (0x0004)  MISSED
	class UClass*                                      OptionsClass;                                               // 0x0050   (0x0008)  
};

/// Class /Script/RigVM.RigVMUserWorkflowOptions
/// Size: 0x0070 (0x000028 - 0x000098)
class URigVMUserWorkflowOptions : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	class UObject*                                     Subject;                                                    // 0x0028   (0x0008)  
	FRigVMUserWorkflow                                 Workflow;                                                   // 0x0030   (0x0058)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x0088   (0x0010)  MISSED


	/// Functions
	// Function /Script/RigVM.RigVMUserWorkflowOptions.RequiresDialog
	// bool RequiresDialog();                                                                                                // [0x7140420] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RigVM.RigVMUserWorkflowOptions.ReportWarning
	// void ReportWarning(FString InMessage);                                                                                // [0x71402bc] Final|Native|Public|BlueprintCallable 
	// Function /Script/RigVM.RigVMUserWorkflowOptions.ReportInfo
	// void ReportInfo(FString InMessage);                                                                                   // [0x7140158] Final|Native|Public|BlueprintCallable 
	// Function /Script/RigVM.RigVMUserWorkflowOptions.ReportError
	// void ReportError(FString InMessage);                                                                                  // [0x713fff4] Final|Native|Public|BlueprintCallable 
	// Function /Script/RigVM.RigVMUserWorkflowOptions.IsValid
	// bool IsValid();                                                                                                       // [0x713ffd8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/RigVM.RigVMRuntimeSettings
/// Size: 0x0018 (0x000000 - 0x000018)
struct FRigVMRuntimeSettings
{ 
	int32_t                                            MaximumArraySize;                                           // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x14];                                      // 0x0004   (0x0014)  MISSED
};

/// Struct /Script/RigVM.RigVMDrawInstruction
/// Size: 0x00C0 (0x000000 - 0x0000C0)
struct FRigVMDrawInstruction
{ 
	FName                                              Name;                                                       // 0x0000   (0x0004)  
	SDK_UNDEFINED(1,1655) /* TEnumAsByte<ERigVMDrawSettings> */ __um(PrimitiveType);                               // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0005   (0x0003)  MISSED
	TArray<FVector>                                    Positions;                                                  // 0x0008   (0x0010)  
	FLinearColor                                       Color;                                                      // 0x0018   (0x0010)  
	float                                              Thickness;                                                  // 0x0028   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x002C   (0x0004)  MISSED
	FTransform                                         Transform;                                                  // 0x0030   (0x0060)  
	unsigned char                                      UnknownData02_6[0x30];                                      // 0x0090   (0x0030)  MISSED
};

/// Struct /Script/RigVM.RigVMDrawContainer
/// Size: 0x0018 (0x000000 - 0x000018)
struct FRigVMDrawContainer
{ 
	TArray<FRigVMDrawInstruction>                      Instructions;                                               // 0x0008   (0x0010)  
};

/// Class /Script/RigVM.RigVMHost
/// Size: 0x0250 (0x000028 - 0x000278)
class URigVMHost : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x30];                                      // 0x0000   (0x0030)  MISSED
	FRigVMRuntimeSettings                              VMRuntimeSettings;                                          // 0x0030   (0x0018)  
	unsigned char                                      UnknownData01_5[0x10];                                      // 0x0048   (0x0010)  MISSED
	class URigVM*                                      VM;                                                         // 0x0058   (0x0008)  
	SDK_UNDEFINED(80,1656) /* TMap<FString, FSoftObjectPath> */ __um(UserDefinedStructGuidToPathName);             // 0x0060   (0x0050)  
	SDK_UNDEFINED(80,1657) /* TMap<FString, FSoftObjectPath> */ __um(UserDefinedEnumToPathName);                   // 0x00B0   (0x0050)  
	SDK_UNDEFINED(80,1658) /* TSet<UObject*> */        __um(UserDefinedTypesInUse);                                // 0x0100   (0x0050)  
	unsigned char                                      UnknownData02_5[0x8];                                       // 0x0150   (0x0008)  MISSED
	FRigVMDrawContainer                                DrawContainer;                                              // 0x0158   (0x0018)  
	unsigned char                                      UnknownData03_5[0x18];                                      // 0x0170   (0x0018)  MISSED
	TArray<FName>                                      EventQueue;                                                 // 0x0188   (0x0010)  
	unsigned char                                      UnknownData04_5[0x90];                                      // 0x0198   (0x0090)  MISSED
	TArray<class UAssetUserData*>                      AssetUserData;                                              // 0x0228   (0x0010)  
	unsigned char                                      UnknownData05_6[0x40];                                      // 0x0238   (0x0040)  MISSED


	/// Functions
	// Function /Script/RigVM.RigVMHost.SupportsEvent
	// bool SupportsEvent(FName& InEventName);                                                                               // [0x715731c] Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RigVM.RigVMHost.SetVariableFromString
	// bool SetVariableFromString(FName& InVariableName, FString InValue);                                                   // [0x7157148] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RigVM.RigVMHost.SetFramesPerSecond
	// void SetFramesPerSecond(float InFramesPerSecond);                                                                     // [0x71570c8] Final|Native|Public|BlueprintCallable 
	// Function /Script/RigVM.RigVMHost.SetDeltaTime
	// void SetDeltaTime(float InDeltaTime);                                                                                 // [0x7157048] Final|Native|Public|BlueprintCallable 
	// Function /Script/RigVM.RigVMHost.SetAbsoluteTime
	// void SetAbsoluteTime(float InAbsoluteTime, bool InSetDeltaTimeZero);                                                  // [0x7156f80] Final|Native|Public|BlueprintCallable 
	// Function /Script/RigVM.RigVMHost.SetAbsoluteAndDeltaTime
	// void SetAbsoluteAndDeltaTime(float InAbsoluteTime, float InDeltaTime);                                                // [0x7156eb8] Final|Native|Public|BlueprintCallable 
	// Function /Script/RigVM.RigVMHost.RequestRunOnceEvent
	// void RequestRunOnceEvent(FName& InEventName, int32_t InEventIndex);                                                   // [0x7156dac] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RigVM.RigVMHost.RequestInit
	// void RequestInit();                                                                                                   // [0x6813ecc] Native|Public|BlueprintCallable 
	// Function /Script/RigVM.RigVMHost.RemoveRunOnceEvent
	// bool RemoveRunOnceEvent(FName& InEventName);                                                                          // [0x7156d14] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RigVM.RigVMHost.IsInitRequired
	// bool IsInitRequired();                                                                                                // [0x695e3fc] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RigVM.RigVMHost.GetVM
	// class URigVM* GetVM();                                                                                                // [0x7156ad8] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/RigVM.RigVMHost.GetVariableType
	// FName GetVariableType(FName& InVariableName);                                                                         // [0x7156c64] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RigVM.RigVMHost.GetVariableAsString
	// FString GetVariableAsString(FName& InVariableName);                                                                   // [0x7156afc] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RigVM.RigVMHost.GetSupportedEvents
	// TArray<FName> GetSupportedEvents();                                                                                   // [0x7156aa8] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RigVM.RigVMHost.GetScriptAccessibleVariables
	// TArray<FName> GetScriptAccessibleVariables();                                                                         // [0x7156a68] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RigVM.RigVMHost.GetExtendedExecuteContext
	// FRigVMExtendedExecuteContext GetExtendedExecuteContext();                                                             // [0x7156a38] Native|Public|BlueprintCallable 
	// Function /Script/RigVM.RigVMHost.GetDeltaTime
	// float GetDeltaTime();                                                                                                 // [0x3ead168] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RigVM.RigVMHost.GetCurrentFramesPerSecond
	// float GetCurrentFramesPerSecond();                                                                                    // [0x7156a18] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RigVM.RigVMHost.GetAbsoluteTime
	// float GetAbsoluteTime();                                                                                              // [0x3eacefc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RigVM.RigVMHost.FindRigVMHosts
	// TArray<URigVMHost*> FindRigVMHosts(class UObject* Outer, class UClass* OptionalClass);                                // [0x7156740] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/RigVM.RigVMHost.ExecuteEvent
	// bool ExecuteEvent(FName& InEventName);                                                                                // [0x71566a8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RigVM.RigVMHost.Execute
	// bool Execute(FName& InEventName);                                                                                     // [0x7156608] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RigVM.RigVMHost.CanExecute
	// bool CanExecute();                                                                                                    // [0x1aaf4c4] Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/RigVM.RigVMEditorSettings
/// Size: 0x0000 (0x000030 - 0x000030)
class URigVMEditorSettings : public UDeveloperSettings
{ 
public:
};

/// Struct /Script/RigVM.RigVMExtendedExecuteContext
/// Size: 0x0228 (0x000000 - 0x000228)
struct FRigVMExtendedExecuteContext
{ 
	unsigned char                                      UnknownData00_2[0x228];                                     // 0x0000   (0x0228)  MISSED
};

/// Struct /Script/RigVM.RigVMStruct
/// Size: 0x0008 (0x000000 - 0x000008)
struct FRigVMStruct
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/RigVM.RigVMDecorator
/// Size: 0x0010 (0x000008 - 0x000018)
struct FRigVMDecorator : FRigVMStruct
{ 
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0008   (0x0010)  MISSED
};

/// Struct /Script/RigVM.RigVMDispatchFactory
/// Size: 0x0070 (0x000000 - 0x000070)
struct FRigVMDispatchFactory
{ 
	unsigned char                                      UnknownData00_2[0x70];                                      // 0x0000   (0x0070)  MISSED
};

/// Struct /Script/RigVM.RigVMDispatch_CastObject
/// Size: 0x0000 (0x000070 - 0x000070)
struct FRigVMDispatch_CastObject : FRigVMDispatchFactory
{ 
};

/// Struct /Script/RigVM.RigVMFunction_AnimBase
/// Size: 0x0000 (0x000008 - 0x000008)
struct FRigVMFunction_AnimBase : FRigVMStruct
{ 
};

/// Struct /Script/RigVM.RigVMFunction_DebugBase
/// Size: 0x0000 (0x000008 - 0x000008)
struct FRigVMFunction_DebugBase : FRigVMStruct
{ 
};

/// Struct /Script/RigVM.RigVMExecuteContext
/// Size: 0x00F0 (0x000000 - 0x0000F0)
struct FRigVMExecuteContext
{ 
	unsigned char                                      UnknownData00_2[0xF0];                                      // 0x0000   (0x00F0)  MISSED
};

/// Struct /Script/RigVM.RigVMStructMutable
/// Size: 0x00F8 (0x000008 - 0x000100)
struct FRigVMStructMutable : FRigVMStruct
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0008   (0x0008)  MISSED
	FRigVMExecuteContext                               ExecuteContext;                                             // 0x0010   (0x00F0)  
};

/// Struct /Script/RigVM.RigVMFunction_DebugBaseMutable
/// Size: 0x0000 (0x000100 - 0x000100)
struct FRigVMFunction_DebugBaseMutable : FRigVMStructMutable
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathBase
/// Size: 0x0000 (0x000008 - 0x000008)
struct FRigVMFunction_MathBase : FRigVMStruct
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathMutableBase
/// Size: 0x0000 (0x000100 - 0x000100)
struct FRigVMFunction_MathMutableBase : FRigVMStructMutable
{ 
};

/// Struct /Script/RigVM.RigVMFunction_Sequence
/// Size: 0x02D8 (0x000008 - 0x0002E0)
struct FRigVMFunction_Sequence : FRigVMStruct
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0008   (0x0008)  MISSED
	FRigVMExecuteContext                               ExecuteContext;                                             // 0x0010   (0x00F0)  
	FRigVMExecuteContext                               A;                                                          // 0x0100   (0x00F0)  
	FRigVMExecuteContext                               B;                                                          // 0x01F0   (0x00F0)  
};

/// Struct /Script/RigVM.RigVMUnknownType
/// Size: 0x0004 (0x000000 - 0x000004)
struct FRigVMUnknownType
{ 
	uint32_t                                           Hash;                                                       // 0x0000   (0x0004)  
};

/// Struct /Script/RigVM.RigVMFunction_SimBase
/// Size: 0x0000 (0x000008 - 0x000008)
struct FRigVMFunction_SimBase : FRigVMStruct
{ 
};

/// Struct /Script/RigVM.RigVMFunction_SimBaseMutable
/// Size: 0x0000 (0x000100 - 0x000100)
struct FRigVMFunction_SimBaseMutable : FRigVMStructMutable
{ 
};

/// Struct /Script/RigVM.RigVMOperand
/// Size: 0x0006 (0x000000 - 0x000006)
struct FRigVMOperand
{ 
	ERigVMMemoryType                                   MemoryType;                                                 // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x0001   (0x0001)  MISSED
	uint16_t                                           RegisterIndex;                                              // 0x0002   (0x0002)  
	uint16_t                                           RegisterOffset;                                             // 0x0004   (0x0002)  
};

/// Struct /Script/RigVM.RigVMMemoryStatistics
/// Size: 0x000C (0x000000 - 0x00000C)
struct FRigVMMemoryStatistics
{ 
	int32_t                                            RegisterCount;                                              // 0x0000   (0x0004)  
	int32_t                                            DataBytes;                                                  // 0x0004   (0x0004)  
	int32_t                                            TotalBytes;                                                 // 0x0008   (0x0004)  
};

/// Struct /Script/RigVM.RigVMByteCodeStatistics
/// Size: 0x0008 (0x000000 - 0x000008)
struct FRigVMByteCodeStatistics
{ 
	int32_t                                            InstructionCount;                                           // 0x0000   (0x0004)  
	int32_t                                            DataBytes;                                                  // 0x0004   (0x0004)  
};

/// Struct /Script/RigVM.RigVMStatistics
/// Size: 0x0038 (0x000000 - 0x000038)
struct FRigVMStatistics
{ 
	int32_t                                            BytesForCDO;                                                // 0x0000   (0x0004)  
	int32_t                                            BytesPerInstance;                                           // 0x0004   (0x0004)  
	FRigVMMemoryStatistics                             LiteralMemory;                                              // 0x0008   (0x000C)  
	FRigVMMemoryStatistics                             WorkMemory;                                                 // 0x0014   (0x000C)  
	FRigVMMemoryStatistics                             DebugMemory;                                                // 0x0020   (0x000C)  
	int32_t                                            BytesForCaching;                                            // 0x002C   (0x0004)  
	FRigVMByteCodeStatistics                           ByteCode;                                                   // 0x0030   (0x0008)  
};

/// Struct /Script/RigVM.RigVMGraphFunctionHeaderArray
/// Size: 0x0010 (0x000000 - 0x000010)
struct FRigVMGraphFunctionHeaderArray
{ 
	TArray<FRigVMGraphFunctionHeader>                  Headers;                                                    // 0x0000   (0x0010)  
};

/// Struct /Script/RigVM.RigVMBaseOp
/// Size: 0x0001 (0x000000 - 0x000001)
struct FRigVMBaseOp
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/RigVM.RigVMExecuteOp
/// Size: 0x0009 (0x000001 - 0x00000A)
struct FRigVMExecuteOp : FRigVMBaseOp
{ 
	unsigned char                                      UnknownData00_1[0x9];                                       // 0x0001   (0x0009)  MISSED
};

/// Struct /Script/RigVM.RigVMUnaryOp
/// Size: 0x0007 (0x000001 - 0x000008)
struct FRigVMUnaryOp : FRigVMBaseOp
{ 
	unsigned char                                      UnknownData00_1[0x7];                                       // 0x0001   (0x0007)  MISSED
};

/// Struct /Script/RigVM.RigVMBinaryOp
/// Size: 0x000D (0x000001 - 0x00000E)
struct FRigVMBinaryOp : FRigVMBaseOp
{ 
	unsigned char                                      UnknownData00_1[0xD];                                       // 0x0001   (0x000D)  MISSED
};

/// Struct /Script/RigVM.RigVMTernaryOp
/// Size: 0x0013 (0x000001 - 0x000014)
struct FRigVMTernaryOp : FRigVMBaseOp
{ 
	unsigned char                                      UnknownData00_1[0x13];                                      // 0x0001   (0x0013)  MISSED
};

/// Struct /Script/RigVM.RigVMQuaternaryOp
/// Size: 0x0019 (0x000001 - 0x00001A)
struct FRigVMQuaternaryOp : FRigVMBaseOp
{ 
	unsigned char                                      UnknownData00_1[0x19];                                      // 0x0001   (0x0019)  MISSED
};

/// Struct /Script/RigVM.RigVMQuinaryOp
/// Size: 0x001F (0x000001 - 0x000020)
struct FRigVMQuinaryOp : FRigVMBaseOp
{ 
	unsigned char                                      UnknownData00_1[0x1F];                                      // 0x0001   (0x001F)  MISSED
};

/// Struct /Script/RigVM.RigVMSenaryOp
/// Size: 0x0025 (0x000001 - 0x000026)
struct FRigVMSenaryOp : FRigVMBaseOp
{ 
	unsigned char                                      UnknownData00_1[0x25];                                      // 0x0001   (0x0025)  MISSED
};

/// Struct /Script/RigVM.RigVMCopyOp
/// Size: 0x0011 (0x000001 - 0x000012)
struct FRigVMCopyOp : FRigVMBaseOp
{ 
	unsigned char                                      UnknownData00_1[0x11];                                      // 0x0001   (0x0011)  MISSED
};

/// Struct /Script/RigVM.RigVMComparisonOp
/// Size: 0x0013 (0x000001 - 0x000014)
struct FRigVMComparisonOp : FRigVMBaseOp
{ 
	unsigned char                                      UnknownData00_1[0x13];                                      // 0x0001   (0x0013)  MISSED
};

/// Struct /Script/RigVM.RigVMJumpOp
/// Size: 0x0007 (0x000001 - 0x000008)
struct FRigVMJumpOp : FRigVMBaseOp
{ 
	unsigned char                                      UnknownData00_1[0x7];                                       // 0x0001   (0x0007)  MISSED
};

/// Struct /Script/RigVM.RigVMJumpIfOp
/// Size: 0x0008 (0x000008 - 0x000010)
struct FRigVMJumpIfOp : FRigVMUnaryOp
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0008   (0x0008)  MISSED
};

/// Struct /Script/RigVM.RigVMChangeTypeOp
/// Size: 0x0000 (0x000008 - 0x000008)
struct FRigVMChangeTypeOp : FRigVMUnaryOp
{ 
};

/// Struct /Script/RigVM.RigVMInvokeEntryOp
/// Size: 0x0007 (0x000001 - 0x000008)
struct FRigVMInvokeEntryOp : FRigVMBaseOp
{ 
	unsigned char                                      UnknownData00_1[0x7];                                       // 0x0001   (0x0007)  MISSED
};

/// Struct /Script/RigVM.RigVMJumpToBranchOp
/// Size: 0x0004 (0x000008 - 0x00000C)
struct FRigVMJumpToBranchOp : FRigVMUnaryOp
{ 
	unsigned char                                      UnknownData00_1[0x4];                                       // 0x0008   (0x0004)  MISSED
};

/// Struct /Script/RigVM.RigVMRunInstructionsOp
/// Size: 0x0008 (0x000008 - 0x000010)
struct FRigVMRunInstructionsOp : FRigVMUnaryOp
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0008   (0x0008)  MISSED
};

/// Struct /Script/RigVM.RigVMBreakpoint
/// Size: 0x0024 (0x000000 - 0x000024)
struct FRigVMBreakpoint
{ 
	unsigned char                                      UnknownData00_2[0x24];                                      // 0x0000   (0x0024)  MISSED
};

/// Struct /Script/RigVM.RigVMDebugInfo
/// Size: 0x0140 (0x000000 - 0x000140)
struct FRigVMDebugInfo
{ 
	unsigned char                                      UnknownData00_2[0x140];                                     // 0x0000   (0x0140)  MISSED
};

/// Struct /Script/RigVM.RigVMDrawInterface
/// Size: 0x0000 (0x000018 - 0x000018)
struct FRigVMDrawInterface : FRigVMDrawContainer
{ 
};

/// Struct /Script/RigVM.RigVMSlice
/// Size: 0x0014 (0x000000 - 0x000014)
struct FRigVMSlice
{ 
	unsigned char                                      UnknownData00_2[0x14];                                      // 0x0000   (0x0014)  MISSED
};

/// Struct /Script/RigVM.RigVMInstructionSetExecuteState
/// Size: 0x0050 (0x000000 - 0x000050)
struct FRigVMInstructionSetExecuteState
{ 
	SDK_UNDEFINED(80,1659) /* TMap<uint32_t, uint32_t> */ __um(SliceHashToNumInstruction);                         // 0x0000   (0x0050)  
};

/// Struct /Script/RigVM.RigVMRegister
/// Size: 0x0020 (0x000000 - 0x000020)
struct FRigVMRegister
{ 
	ERigVMRegisterType                                 Type;                                                       // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	uint32_t                                           ByteIndex;                                                  // 0x0004   (0x0004)  
	uint16_t                                           ElementSize;                                                // 0x0008   (0x0002)  
	uint16_t                                           ElementCount;                                               // 0x000A   (0x0002)  
	uint16_t                                           SliceCount;                                                 // 0x000C   (0x0002)  
	char                                               AlignmentBytes;                                             // 0x000E   (0x0001)  
	unsigned char                                      UnknownData01_5[0x1];                                       // 0x000F   (0x0001)  MISSED
	uint16_t                                           TrailingBytes;                                              // 0x0010   (0x0002)  
	unsigned char                                      UnknownData02_5[0x2];                                       // 0x0012   (0x0002)  MISSED
	FName                                              Name;                                                       // 0x0014   (0x0004)  
	int32_t                                            ScriptStructIndex;                                          // 0x0018   (0x0004)  
	bool                                               bIsArray;                                                   // 0x001C   (0x0001)  
	bool                                               bIsDynamic;                                                 // 0x001D   (0x0001)  
	unsigned char                                      UnknownData03_6[0x2];                                       // 0x001E   (0x0002)  MISSED
};

/// Struct /Script/RigVM.RigVMRegisterOffset
/// Size: 0x0040 (0x000000 - 0x000040)
struct FRigVMRegisterOffset
{ 
	TArray<int32_t>                                    Segments;                                                   // 0x0000   (0x0010)  
	ERigVMRegisterType                                 Type;                                                       // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0011   (0x0003)  MISSED
	FName                                              CPPType;                                                    // 0x0014   (0x0004)  
	class UScriptStruct*                               ScriptStruct;                                               // 0x0018   (0x0008)  
	class UScriptStruct*                               ParentScriptStruct;                                         // 0x0020   (0x0008)  
	int32_t                                            ArrayIndex;                                                 // 0x0028   (0x0004)  
	uint16_t                                           ElementSize;                                                // 0x002C   (0x0002)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x002E   (0x0002)  MISSED
	SDK_UNDEFINED(16,1660) /* FString */               __um(CachedSegmentPath);                                    // 0x0030   (0x0010)  
};

/// Struct /Script/RigVM.RigVMMemoryContainer
/// Size: 0x00A0 (0x000000 - 0x0000A0)
struct FRigVMMemoryContainer
{ 
	bool                                               bUseNameMap;                                                // 0x0000   (0x0001)  
	ERigVMMemoryType                                   MemoryType;                                                 // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x0002   (0x0006)  MISSED
	TArray<FRigVMRegister>                             Registers;                                                  // 0x0008   (0x0010)  
	TArray<FRigVMRegisterOffset>                       RegisterOffsets;                                            // 0x0018   (0x0010)  
	TArray<char>                                       Data;                                                       // 0x0028   (0x0010)  
	TArray<class UScriptStruct*>                       ScriptStructs;                                              // 0x0038   (0x0010)  
	SDK_UNDEFINED(80,1661) /* TMap<FName, int32_t> */  __um(NameMap);                                              // 0x0048   (0x0050)  
	bool                                               bEncounteredErrorDuringLoad;                                // 0x0098   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0099   (0x0007)  MISSED
};

/// Struct /Script/RigVM.RigVMInstructionVisitInfo
/// Size: 0x0028 (0x000000 - 0x000028)
struct FRigVMInstructionVisitInfo
{ 
	unsigned char                                      UnknownData00_2[0x28];                                      // 0x0000   (0x0028)  MISSED
};

/// Struct /Script/RigVM.RigVMProfilingInfo
/// Size: 0x0028 (0x000000 - 0x000028)
struct FRigVMProfilingInfo
{ 
	unsigned char                                      UnknownData00_2[0x28];                                      // 0x0000   (0x0028)  MISSED
};

/// Struct /Script/RigVM.RigVMTemplateArgumentType
/// Size: 0x0010 (0x000000 - 0x000010)
struct FRigVMTemplateArgumentType
{ 
	FName                                              CPPType;                                                    // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	class UObject*                                     CPPTypeObject;                                              // 0x0008   (0x0008)  
};

/// Struct /Script/RigVM.RigVMFunction_AnimEasingType
/// Size: 0x0008 (0x000008 - 0x000010)
struct FRigVMFunction_AnimEasingType : FRigVMFunction_AnimBase
{ 
	ERigVMAnimEasingType                               Type;                                                       // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0009   (0x0007)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_AnimEasing
/// Size: 0x0020 (0x000008 - 0x000028)
struct FRigVMFunction_AnimEasing : FRigVMFunction_AnimBase
{ 
	float                                              Value;                                                      // 0x0008   (0x0004)  
	ERigVMAnimEasingType                               Type;                                                       // 0x000C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x000D   (0x0003)  MISSED
	float                                              SourceMinimum;                                              // 0x0010   (0x0004)  
	float                                              SourceMaximum;                                              // 0x0014   (0x0004)  
	float                                              TargetMinimum;                                              // 0x0018   (0x0004)  
	float                                              TargetMaximum;                                              // 0x001C   (0x0004)  
	float                                              Result;                                                     // 0x0020   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_AnimEvalRichCurve
/// Size: 0x00A8 (0x000008 - 0x0000B0)
struct FRigVMFunction_AnimEvalRichCurve : FRigVMFunction_AnimBase
{ 
	float                                              Value;                                                      // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	FRuntimeFloatCurve                                 Curve;                                                      // 0x0010   (0x0088)  
	float                                              SourceMinimum;                                              // 0x0098   (0x0004)  
	float                                              SourceMaximum;                                              // 0x009C   (0x0004)  
	float                                              TargetMinimum;                                              // 0x00A0   (0x0004)  
	float                                              TargetMaximum;                                              // 0x00A4   (0x0004)  
	float                                              Result;                                                     // 0x00A8   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x00AC   (0x0004)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_AnimRichCurve
/// Size: 0x0088 (0x000008 - 0x000090)
struct FRigVMFunction_AnimRichCurve : FRigVMFunction_AnimBase
{ 
	FRuntimeFloatCurve                                 Curve;                                                      // 0x0008   (0x0088)  
};

/// Struct /Script/RigVM.RigVMFunction_GetDeltaTime
/// Size: 0x0008 (0x000008 - 0x000010)
struct FRigVMFunction_GetDeltaTime : FRigVMFunction_AnimBase
{ 
	float                                              Result;                                                     // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_GetWorldTime
/// Size: 0x0020 (0x000008 - 0x000028)
struct FRigVMFunction_GetWorldTime : FRigVMFunction_AnimBase
{ 
	float                                              Year;                                                       // 0x0008   (0x0004)  
	float                                              Month;                                                      // 0x000C   (0x0004)  
	float                                              Day;                                                        // 0x0010   (0x0004)  
	float                                              WeekDay;                                                    // 0x0014   (0x0004)  
	float                                              Hours;                                                      // 0x0018   (0x0004)  
	float                                              Minutes;                                                    // 0x001C   (0x0004)  
	float                                              Seconds;                                                    // 0x0020   (0x0004)  
	float                                              OverallSeconds;                                             // 0x0024   (0x0004)  
};

/// Struct /Script/RigVM.RigVMFunction_FramesToSeconds
/// Size: 0x0008 (0x000008 - 0x000010)
struct FRigVMFunction_FramesToSeconds : FRigVMFunction_AnimBase
{ 
	float                                              Frames;                                                     // 0x0008   (0x0004)  
	float                                              Seconds;                                                    // 0x000C   (0x0004)  
};

/// Struct /Script/RigVM.RigVMFunction_SecondsToFrames
/// Size: 0x0008 (0x000008 - 0x000010)
struct FRigVMFunction_SecondsToFrames : FRigVMFunction_AnimBase
{ 
	float                                              Seconds;                                                    // 0x0008   (0x0004)  
	float                                              Frames;                                                     // 0x000C   (0x0004)  
};

/// Struct /Script/RigVM.RigVMFunction_DebugLineNoSpace
/// Size: 0x00C0 (0x000100 - 0x0001C0)
struct FRigVMFunction_DebugLineNoSpace : FRigVMFunction_DebugBaseMutable
{ 
	FVector                                            A;                                                          // 0x0100   (0x0018)  
	FVector                                            B;                                                          // 0x0118   (0x0018)  
	FLinearColor                                       Color;                                                      // 0x0130   (0x0010)  
	float                                              Thickness;                                                  // 0x0140   (0x0004)  
	unsigned char                                      UnknownData00_5[0xC];                                       // 0x0144   (0x000C)  MISSED
	FTransform                                         WorldOffset;                                                // 0x0150   (0x0060)  
	bool                                               bEnabled;                                                   // 0x01B0   (0x0001)  
	unsigned char                                      UnknownData01_6[0xF];                                       // 0x01B1   (0x000F)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_DebugLineStripNoSpace
/// Size: 0x00A0 (0x000100 - 0x0001A0)
struct FRigVMFunction_DebugLineStripNoSpace : FRigVMFunction_DebugBaseMutable
{ 
	TArray<FVector>                                    Points;                                                     // 0x0100   (0x0010)  
	FLinearColor                                       Color;                                                      // 0x0110   (0x0010)  
	float                                              Thickness;                                                  // 0x0120   (0x0004)  
	unsigned char                                      UnknownData00_5[0xC];                                       // 0x0124   (0x000C)  MISSED
	FTransform                                         WorldOffset;                                                // 0x0130   (0x0060)  
	bool                                               bEnabled;                                                   // 0x0190   (0x0001)  
	unsigned char                                      UnknownData01_6[0xF];                                       // 0x0191   (0x000F)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_DebugPoint
/// Size: 0x00A8 (0x000008 - 0x0000B0)
struct FRigVMFunction_DebugPoint : FRigVMFunction_DebugBase
{ 
	FVector                                            Vector;                                                     // 0x0008   (0x0018)  
	ERigUnitDebugPointMode                             Mode;                                                       // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0021   (0x0003)  MISSED
	FLinearColor                                       Color;                                                      // 0x0024   (0x0010)  
	float                                              Scale;                                                      // 0x0034   (0x0004)  
	float                                              Thickness;                                                  // 0x0038   (0x0004)  
	FName                                              Space;                                                      // 0x003C   (0x0004)  
	FTransform                                         WorldOffset;                                                // 0x0040   (0x0060)  
	bool                                               bEnabled;                                                   // 0x00A0   (0x0001)  
	unsigned char                                      UnknownData01_6[0xF];                                       // 0x00A1   (0x000F)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_DebugPointMutable
/// Size: 0x00B0 (0x000100 - 0x0001B0)
struct FRigVMFunction_DebugPointMutable : FRigVMFunction_DebugBaseMutable
{ 
	FVector                                            Vector;                                                     // 0x0100   (0x0018)  
	ERigUnitDebugPointMode                             Mode;                                                       // 0x0118   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0119   (0x0003)  MISSED
	FLinearColor                                       Color;                                                      // 0x011C   (0x0010)  
	float                                              Scale;                                                      // 0x012C   (0x0004)  
	float                                              Thickness;                                                  // 0x0130   (0x0004)  
	FName                                              Space;                                                      // 0x0134   (0x0004)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x0138   (0x0008)  MISSED
	FTransform                                         WorldOffset;                                                // 0x0140   (0x0060)  
	bool                                               bEnabled;                                                   // 0x01A0   (0x0001)  
	unsigned char                                      UnknownData02_6[0xF];                                       // 0x01A1   (0x000F)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_DebugRectangle
/// Size: 0x00F0 (0x000100 - 0x0001F0)
struct FRigVMFunction_DebugRectangle : FRigVMFunction_DebugBaseMutable
{ 
	FTransform                                         Transform;                                                  // 0x0100   (0x0060)  
	FLinearColor                                       Color;                                                      // 0x0160   (0x0010)  
	float                                              Scale;                                                      // 0x0170   (0x0004)  
	float                                              Thickness;                                                  // 0x0174   (0x0004)  
	FName                                              Space;                                                      // 0x0178   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x017C   (0x0004)  MISSED
	FTransform                                         WorldOffset;                                                // 0x0180   (0x0060)  
	bool                                               bEnabled;                                                   // 0x01E0   (0x0001)  
	unsigned char                                      UnknownData01_6[0xF];                                       // 0x01E1   (0x000F)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_DebugRectangleNoSpace
/// Size: 0x00F0 (0x000100 - 0x0001F0)
struct FRigVMFunction_DebugRectangleNoSpace : FRigVMFunction_DebugBaseMutable
{ 
	FTransform                                         Transform;                                                  // 0x0100   (0x0060)  
	FLinearColor                                       Color;                                                      // 0x0160   (0x0010)  
	float                                              Scale;                                                      // 0x0170   (0x0004)  
	float                                              Thickness;                                                  // 0x0174   (0x0004)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0178   (0x0008)  MISSED
	FTransform                                         WorldOffset;                                                // 0x0180   (0x0060)  
	bool                                               bEnabled;                                                   // 0x01E0   (0x0001)  
	unsigned char                                      UnknownData01_6[0xF];                                       // 0x01E1   (0x000F)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_DebugArc
/// Size: 0x0100 (0x000100 - 0x000200)
struct FRigVMFunction_DebugArc : FRigVMFunction_DebugBaseMutable
{ 
	FTransform                                         Transform;                                                  // 0x0100   (0x0060)  
	FLinearColor                                       Color;                                                      // 0x0160   (0x0010)  
	float                                              Radius;                                                     // 0x0170   (0x0004)  
	float                                              MinimumDegrees;                                             // 0x0174   (0x0004)  
	float                                              MaximumDegrees;                                             // 0x0178   (0x0004)  
	float                                              Thickness;                                                  // 0x017C   (0x0004)  
	int32_t                                            Detail;                                                     // 0x0180   (0x0004)  
	FName                                              Space;                                                      // 0x0184   (0x0004)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0188   (0x0008)  MISSED
	FTransform                                         WorldOffset;                                                // 0x0190   (0x0060)  
	bool                                               bEnabled;                                                   // 0x01F0   (0x0001)  
	unsigned char                                      UnknownData01_6[0xF];                                       // 0x01F1   (0x000F)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_DebugArcNoSpace
/// Size: 0x0100 (0x000100 - 0x000200)
struct FRigVMFunction_DebugArcNoSpace : FRigVMFunction_DebugBaseMutable
{ 
	FTransform                                         Transform;                                                  // 0x0100   (0x0060)  
	FLinearColor                                       Color;                                                      // 0x0160   (0x0010)  
	float                                              Radius;                                                     // 0x0170   (0x0004)  
	float                                              MinimumDegrees;                                             // 0x0174   (0x0004)  
	float                                              MaximumDegrees;                                             // 0x0178   (0x0004)  
	float                                              Thickness;                                                  // 0x017C   (0x0004)  
	int32_t                                            Detail;                                                     // 0x0180   (0x0004)  
	unsigned char                                      UnknownData00_5[0xC];                                       // 0x0184   (0x000C)  MISSED
	FTransform                                         WorldOffset;                                                // 0x0190   (0x0060)  
	bool                                               bEnabled;                                                   // 0x01F0   (0x0001)  
	unsigned char                                      UnknownData01_6[0xF];                                       // 0x01F1   (0x000F)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_DebugTransformMutableNoSpace
/// Size: 0x00F0 (0x000100 - 0x0001F0)
struct FRigVMFunction_DebugTransformMutableNoSpace : FRigVMFunction_DebugBaseMutable
{ 
	FTransform                                         Transform;                                                  // 0x0100   (0x0060)  
	ERigUnitDebugTransformMode                         Mode;                                                       // 0x0160   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0161   (0x0003)  MISSED
	FLinearColor                                       Color;                                                      // 0x0164   (0x0010)  
	float                                              Thickness;                                                  // 0x0174   (0x0004)  
	float                                              Scale;                                                      // 0x0178   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x017C   (0x0004)  MISSED
	FTransform                                         WorldOffset;                                                // 0x0180   (0x0060)  
	bool                                               bEnabled;                                                   // 0x01E0   (0x0001)  
	unsigned char                                      UnknownData02_6[0xF];                                       // 0x01E1   (0x000F)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_DebugTransformArrayMutable_WorkData
/// Size: 0x0010 (0x000000 - 0x000010)
struct FRigVMFunction_DebugTransformArrayMutable_WorkData
{ 
	TArray<FTransform>                                 DrawTransforms;                                             // 0x0000   (0x0010)  
};

/// Struct /Script/RigVM.RigVMFunction_DebugTransformArrayMutableNoSpace
/// Size: 0x00B0 (0x000100 - 0x0001B0)
struct FRigVMFunction_DebugTransformArrayMutableNoSpace : FRigVMFunction_DebugBaseMutable
{ 
	TArray<FTransform>                                 Transforms;                                                 // 0x0100   (0x0010)  
	TArray<int32_t>                                    ParentIndices;                                              // 0x0110   (0x0010)  
	ERigUnitDebugTransformMode                         Mode;                                                       // 0x0120   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0121   (0x0003)  MISSED
	FLinearColor                                       Color;                                                      // 0x0124   (0x0010)  
	float                                              Thickness;                                                  // 0x0134   (0x0004)  
	float                                              Scale;                                                      // 0x0138   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x013C   (0x0004)  MISSED
	FTransform                                         WorldOffset;                                                // 0x0140   (0x0060)  
	bool                                               bEnabled;                                                   // 0x01A0   (0x0001)  
	unsigned char                                      UnknownData02_6[0xF];                                       // 0x01A1   (0x000F)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_VisualDebugVector
/// Size: 0x0038 (0x000008 - 0x000040)
struct FRigVMFunction_VisualDebugVector : FRigVMFunction_DebugBase
{ 
	FVector                                            Value;                                                      // 0x0008   (0x0018)  
	bool                                               bEnabled;                                                   // 0x0020   (0x0001)  
	ERigUnitVisualDebugPointMode                       Mode;                                                       // 0x0021   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0022   (0x0002)  MISSED
	FLinearColor                                       Color;                                                      // 0x0024   (0x0010)  
	float                                              Thickness;                                                  // 0x0034   (0x0004)  
	float                                              Scale;                                                      // 0x0038   (0x0004)  
	FName                                              BoneSpace;                                                  // 0x003C   (0x0004)  
};

/// Struct /Script/RigVM.RigVMFunction_VisualDebugVectorNoSpace
/// Size: 0x0038 (0x000008 - 0x000040)
struct FRigVMFunction_VisualDebugVectorNoSpace : FRigVMFunction_DebugBase
{ 
	FVector                                            Value;                                                      // 0x0008   (0x0018)  
	bool                                               bEnabled;                                                   // 0x0020   (0x0001)  
	ERigUnitVisualDebugPointMode                       Mode;                                                       // 0x0021   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0022   (0x0002)  MISSED
	FLinearColor                                       Color;                                                      // 0x0024   (0x0010)  
	float                                              Thickness;                                                  // 0x0034   (0x0004)  
	float                                              Scale;                                                      // 0x0038   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x003C   (0x0004)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_VisualDebugQuat
/// Size: 0x0038 (0x000008 - 0x000040)
struct FRigVMFunction_VisualDebugQuat : FRigVMFunction_DebugBase
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              Value;                                                      // 0x0010   (0x0020)  
	bool                                               bEnabled;                                                   // 0x0030   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0031   (0x0003)  MISSED
	float                                              Thickness;                                                  // 0x0034   (0x0004)  
	float                                              Scale;                                                      // 0x0038   (0x0004)  
	FName                                              BoneSpace;                                                  // 0x003C   (0x0004)  
};

/// Struct /Script/RigVM.RigVMFunction_VisualDebugQuatNoSpace
/// Size: 0x0038 (0x000008 - 0x000040)
struct FRigVMFunction_VisualDebugQuatNoSpace : FRigVMFunction_DebugBase
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              Value;                                                      // 0x0010   (0x0020)  
	bool                                               bEnabled;                                                   // 0x0030   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0031   (0x0003)  MISSED
	float                                              Thickness;                                                  // 0x0034   (0x0004)  
	float                                              Scale;                                                      // 0x0038   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x003C   (0x0004)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_VisualDebugTransform
/// Size: 0x0078 (0x000008 - 0x000080)
struct FRigVMFunction_VisualDebugTransform : FRigVMFunction_DebugBase
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         Value;                                                      // 0x0010   (0x0060)  
	bool                                               bEnabled;                                                   // 0x0070   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0071   (0x0003)  MISSED
	float                                              Thickness;                                                  // 0x0074   (0x0004)  
	float                                              Scale;                                                      // 0x0078   (0x0004)  
	FName                                              BoneSpace;                                                  // 0x007C   (0x0004)  
};

/// Struct /Script/RigVM.RigVMFunction_VisualDebugTransformNoSpace
/// Size: 0x0078 (0x000008 - 0x000080)
struct FRigVMFunction_VisualDebugTransformNoSpace : FRigVMFunction_DebugBase
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         Value;                                                      // 0x0010   (0x0060)  
	bool                                               bEnabled;                                                   // 0x0070   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0071   (0x0003)  MISSED
	float                                              Thickness;                                                  // 0x0074   (0x0004)  
	float                                              Scale;                                                      // 0x0078   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x007C   (0x0004)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_ForLoopCount
/// Size: 0x0100 (0x000100 - 0x000200)
struct FRigVMFunction_ForLoopCount : FRigVMStructMutable
{ 
	FName                                              BlockToRun;                                                 // 0x0100   (0x0004)  
	int32_t                                            Count;                                                      // 0x0104   (0x0004)  
	int32_t                                            Index;                                                      // 0x0108   (0x0004)  
	float                                              Ratio;                                                      // 0x010C   (0x0004)  
	FRigVMExecuteContext                               Completed;                                                  // 0x0110   (0x00F0)  
};

/// Struct /Script/RigVM.RigVMFunction_UserDefinedEvent
/// Size: 0x0108 (0x000008 - 0x000110)
struct FRigVMFunction_UserDefinedEvent : FRigVMStruct
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0008   (0x0008)  MISSED
	FRigVMExecuteContext                               ExecuteContext;                                             // 0x0010   (0x00F0)  
	FName                                              EventName;                                                  // 0x0100   (0x0004)  
	unsigned char                                      UnknownData01_6[0xC];                                       // 0x0104   (0x000C)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_MathBoolBase
/// Size: 0x0000 (0x000008 - 0x000008)
struct FRigVMFunction_MathBoolBase : FRigVMFunction_MathBase
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathBoolConstant
/// Size: 0x0008 (0x000008 - 0x000010)
struct FRigVMFunction_MathBoolConstant : FRigVMFunction_MathBoolBase
{ 
	bool                                               Value;                                                      // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0009   (0x0007)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_MathBoolUnaryOp
/// Size: 0x0008 (0x000008 - 0x000010)
struct FRigVMFunction_MathBoolUnaryOp : FRigVMFunction_MathBoolBase
{ 
	bool                                               Value;                                                      // 0x0008   (0x0001)  
	bool                                               Result;                                                     // 0x0009   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x000A   (0x0006)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_MathBoolBinaryOp
/// Size: 0x0008 (0x000008 - 0x000010)
struct FRigVMFunction_MathBoolBinaryOp : FRigVMFunction_MathBoolBase
{ 
	bool                                               A;                                                          // 0x0008   (0x0001)  
	bool                                               B;                                                          // 0x0009   (0x0001)  
	bool                                               Result;                                                     // 0x000A   (0x0001)  
	unsigned char                                      UnknownData00_6[0x5];                                       // 0x000B   (0x0005)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_MathBoolBinaryAggregateOp
/// Size: 0x0008 (0x000008 - 0x000010)
struct FRigVMFunction_MathBoolBinaryAggregateOp : FRigVMFunction_MathBoolBase
{ 
	bool                                               A;                                                          // 0x0008   (0x0001)  
	bool                                               B;                                                          // 0x0009   (0x0001)  
	bool                                               Result;                                                     // 0x000A   (0x0001)  
	unsigned char                                      UnknownData00_6[0x5];                                       // 0x000B   (0x0005)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_MathBoolMake
/// Size: 0x0008 (0x000008 - 0x000010)
struct FRigVMFunction_MathBoolMake : FRigVMFunction_MathBoolBase
{ 
	bool                                               Value;                                                      // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0009   (0x0007)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_MathBoolConstTrue
/// Size: 0x0000 (0x000010 - 0x000010)
struct FRigVMFunction_MathBoolConstTrue : FRigVMFunction_MathBoolConstant
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathBoolConstFalse
/// Size: 0x0000 (0x000010 - 0x000010)
struct FRigVMFunction_MathBoolConstFalse : FRigVMFunction_MathBoolConstant
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathBoolNot
/// Size: 0x0000 (0x000010 - 0x000010)
struct FRigVMFunction_MathBoolNot : FRigVMFunction_MathBoolUnaryOp
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathBoolAnd
/// Size: 0x0000 (0x000010 - 0x000010)
struct FRigVMFunction_MathBoolAnd : FRigVMFunction_MathBoolBinaryAggregateOp
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathBoolNand
/// Size: 0x0000 (0x000010 - 0x000010)
struct FRigVMFunction_MathBoolNand : FRigVMFunction_MathBoolBinaryOp
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathBoolNand2
/// Size: 0x0000 (0x000010 - 0x000010)
struct FRigVMFunction_MathBoolNand2 : FRigVMFunction_MathBoolBinaryOp
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathBoolOr
/// Size: 0x0000 (0x000010 - 0x000010)
struct FRigVMFunction_MathBoolOr : FRigVMFunction_MathBoolBinaryAggregateOp
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathBoolEquals
/// Size: 0x0008 (0x000008 - 0x000010)
struct FRigVMFunction_MathBoolEquals : FRigVMFunction_MathBoolBase
{ 
	bool                                               A;                                                          // 0x0008   (0x0001)  
	bool                                               B;                                                          // 0x0009   (0x0001)  
	bool                                               Result;                                                     // 0x000A   (0x0001)  
	unsigned char                                      UnknownData00_6[0x5];                                       // 0x000B   (0x0005)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_MathBoolNotEquals
/// Size: 0x0008 (0x000008 - 0x000010)
struct FRigVMFunction_MathBoolNotEquals : FRigVMFunction_MathBoolBase
{ 
	bool                                               A;                                                          // 0x0008   (0x0001)  
	bool                                               B;                                                          // 0x0009   (0x0001)  
	bool                                               Result;                                                     // 0x000A   (0x0001)  
	unsigned char                                      UnknownData00_6[0x5];                                       // 0x000B   (0x0005)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_MathBoolToggled
/// Size: 0x0008 (0x000008 - 0x000010)
struct FRigVMFunction_MathBoolToggled : FRigVMFunction_MathBoolBase
{ 
	bool                                               Value;                                                      // 0x0008   (0x0001)  
	bool                                               Toggled;                                                    // 0x0009   (0x0001)  
	bool                                               Initialized;                                                // 0x000A   (0x0001)  
	bool                                               LastValue;                                                  // 0x000B   (0x0001)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_MathBoolFlipFlop
/// Size: 0x0010 (0x000008 - 0x000018)
struct FRigVMFunction_MathBoolFlipFlop : FRigVMFunction_MathBoolBase
{ 
	bool                                               StartValue;                                                 // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0009   (0x0003)  MISSED
	float                                              duration;                                                   // 0x000C   (0x0004)  
	bool                                               Result;                                                     // 0x0010   (0x0001)  
	bool                                               LastValue;                                                  // 0x0011   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x0012   (0x0002)  MISSED
	float                                              TimeLeft;                                                   // 0x0014   (0x0004)  
};

/// Struct /Script/RigVM.RigVMFunction_MathBoolOnce
/// Size: 0x0010 (0x000008 - 0x000018)
struct FRigVMFunction_MathBoolOnce : FRigVMFunction_MathBoolBase
{ 
	float                                              duration;                                                   // 0x0008   (0x0004)  
	bool                                               Result;                                                     // 0x000C   (0x0001)  
	bool                                               LastValue;                                                  // 0x000D   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x000E   (0x0002)  MISSED
	float                                              TimeLeft;                                                   // 0x0010   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_MathBoolToFloat
/// Size: 0x0008 (0x000008 - 0x000010)
struct FRigVMFunction_MathBoolToFloat : FRigVMFunction_MathBoolBase
{ 
	bool                                               Value;                                                      // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0009   (0x0003)  MISSED
	float                                              Result;                                                     // 0x000C   (0x0004)  
};

/// Struct /Script/RigVM.RigVMFunction_MathBoolToInteger
/// Size: 0x0008 (0x000008 - 0x000010)
struct FRigVMFunction_MathBoolToInteger : FRigVMFunction_MathBoolBase
{ 
	bool                                               Value;                                                      // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0009   (0x0003)  MISSED
	int32_t                                            Result;                                                     // 0x000C   (0x0004)  
};

/// Struct /Script/RigVM.RigVMFunction_MathColorBase
/// Size: 0x0000 (0x000008 - 0x000008)
struct FRigVMFunction_MathColorBase : FRigVMFunction_MathBase
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathColorBinaryOp
/// Size: 0x0030 (0x000008 - 0x000038)
struct FRigVMFunction_MathColorBinaryOp : FRigVMFunction_MathColorBase
{ 
	FLinearColor                                       A;                                                          // 0x0008   (0x0010)  
	FLinearColor                                       B;                                                          // 0x0018   (0x0010)  
	FLinearColor                                       Result;                                                     // 0x0028   (0x0010)  
};

/// Struct /Script/RigVM.RigVMFunction_MathColorBinaryAggregateOp
/// Size: 0x0030 (0x000008 - 0x000038)
struct FRigVMFunction_MathColorBinaryAggregateOp : FRigVMFunction_MathColorBase
{ 
	FLinearColor                                       A;                                                          // 0x0008   (0x0010)  
	FLinearColor                                       B;                                                          // 0x0018   (0x0010)  
	FLinearColor                                       Result;                                                     // 0x0028   (0x0010)  
};

/// Struct /Script/RigVM.RigVMFunction_MathColorMake
/// Size: 0x0020 (0x000008 - 0x000028)
struct FRigVMFunction_MathColorMake : FRigVMFunction_MathColorBase
{ 
	float                                              R;                                                          // 0x0008   (0x0004)  
	float                                              G;                                                          // 0x000C   (0x0004)  
	float                                              B;                                                          // 0x0010   (0x0004)  
	float                                              A;                                                          // 0x0014   (0x0004)  
	FLinearColor                                       Result;                                                     // 0x0018   (0x0010)  
};

/// Struct /Script/RigVM.RigVMFunction_MathColorFromFloat
/// Size: 0x0018 (0x000008 - 0x000020)
struct FRigVMFunction_MathColorFromFloat : FRigVMFunction_MathColorBase
{ 
	float                                              Value;                                                      // 0x0008   (0x0004)  
	FLinearColor                                       Result;                                                     // 0x000C   (0x0010)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_MathColorFromDouble
/// Size: 0x0018 (0x000008 - 0x000020)
struct FRigVMFunction_MathColorFromDouble : FRigVMFunction_MathColorBase
{ 
	double                                             Value;                                                      // 0x0008   (0x0008)  
	FLinearColor                                       Result;                                                     // 0x0010   (0x0010)  
};

/// Struct /Script/RigVM.RigVMFunction_MathColorAdd
/// Size: 0x0000 (0x000038 - 0x000038)
struct FRigVMFunction_MathColorAdd : FRigVMFunction_MathColorBinaryAggregateOp
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathColorSub
/// Size: 0x0000 (0x000038 - 0x000038)
struct FRigVMFunction_MathColorSub : FRigVMFunction_MathColorBinaryOp
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathColorMul
/// Size: 0x0000 (0x000038 - 0x000038)
struct FRigVMFunction_MathColorMul : FRigVMFunction_MathColorBinaryAggregateOp
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathColorLerp
/// Size: 0x0038 (0x000008 - 0x000040)
struct FRigVMFunction_MathColorLerp : FRigVMFunction_MathColorBase
{ 
	FLinearColor                                       A;                                                          // 0x0008   (0x0010)  
	FLinearColor                                       B;                                                          // 0x0018   (0x0010)  
	float                                              T;                                                          // 0x0028   (0x0004)  
	FLinearColor                                       Result;                                                     // 0x002C   (0x0010)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x003C   (0x0004)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleBase
/// Size: 0x0000 (0x000008 - 0x000008)
struct FRigVMFunction_MathDoubleBase : FRigVMFunction_MathBase
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleConstant
/// Size: 0x0008 (0x000008 - 0x000010)
struct FRigVMFunction_MathDoubleConstant : FRigVMFunction_MathDoubleBase
{ 
	double                                             Value;                                                      // 0x0008   (0x0008)  
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleUnaryOp
/// Size: 0x0010 (0x000008 - 0x000018)
struct FRigVMFunction_MathDoubleUnaryOp : FRigVMFunction_MathDoubleBase
{ 
	double                                             Value;                                                      // 0x0008   (0x0008)  
	double                                             Result;                                                     // 0x0010   (0x0008)  
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleBinaryOp
/// Size: 0x0018 (0x000008 - 0x000020)
struct FRigVMFunction_MathDoubleBinaryOp : FRigVMFunction_MathDoubleBase
{ 
	double                                             A;                                                          // 0x0008   (0x0008)  
	double                                             B;                                                          // 0x0010   (0x0008)  
	double                                             Result;                                                     // 0x0018   (0x0008)  
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleBinaryAggregateOp
/// Size: 0x0018 (0x000008 - 0x000020)
struct FRigVMFunction_MathDoubleBinaryAggregateOp : FRigVMFunction_MathDoubleBase
{ 
	double                                             A;                                                          // 0x0008   (0x0008)  
	double                                             B;                                                          // 0x0010   (0x0008)  
	double                                             Result;                                                     // 0x0018   (0x0008)  
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleMake
/// Size: 0x0008 (0x000008 - 0x000010)
struct FRigVMFunction_MathDoubleMake : FRigVMFunction_MathDoubleBase
{ 
	double                                             Value;                                                      // 0x0008   (0x0008)  
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleConstPi
/// Size: 0x0000 (0x000010 - 0x000010)
struct FRigVMFunction_MathDoubleConstPi : FRigVMFunction_MathDoubleConstant
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleConstHalfPi
/// Size: 0x0000 (0x000010 - 0x000010)
struct FRigVMFunction_MathDoubleConstHalfPi : FRigVMFunction_MathDoubleConstant
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleConstTwoPi
/// Size: 0x0000 (0x000010 - 0x000010)
struct FRigVMFunction_MathDoubleConstTwoPi : FRigVMFunction_MathDoubleConstant
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleConstE
/// Size: 0x0000 (0x000010 - 0x000010)
struct FRigVMFunction_MathDoubleConstE : FRigVMFunction_MathDoubleConstant
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleAdd
/// Size: 0x0000 (0x000020 - 0x000020)
struct FRigVMFunction_MathDoubleAdd : FRigVMFunction_MathDoubleBinaryAggregateOp
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleSub
/// Size: 0x0000 (0x000020 - 0x000020)
struct FRigVMFunction_MathDoubleSub : FRigVMFunction_MathDoubleBinaryOp
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleMul
/// Size: 0x0000 (0x000020 - 0x000020)
struct FRigVMFunction_MathDoubleMul : FRigVMFunction_MathDoubleBinaryAggregateOp
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleDiv
/// Size: 0x0000 (0x000020 - 0x000020)
struct FRigVMFunction_MathDoubleDiv : FRigVMFunction_MathDoubleBinaryOp
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleMod
/// Size: 0x0000 (0x000020 - 0x000020)
struct FRigVMFunction_MathDoubleMod : FRigVMFunction_MathDoubleBinaryOp
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleMin
/// Size: 0x0000 (0x000020 - 0x000020)
struct FRigVMFunction_MathDoubleMin : FRigVMFunction_MathDoubleBinaryAggregateOp
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleMax
/// Size: 0x0000 (0x000020 - 0x000020)
struct FRigVMFunction_MathDoubleMax : FRigVMFunction_MathDoubleBinaryAggregateOp
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathDoublePow
/// Size: 0x0000 (0x000020 - 0x000020)
struct FRigVMFunction_MathDoublePow : FRigVMFunction_MathDoubleBinaryOp
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleSqrt
/// Size: 0x0000 (0x000018 - 0x000018)
struct FRigVMFunction_MathDoubleSqrt : FRigVMFunction_MathDoubleUnaryOp
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleNegate
/// Size: 0x0000 (0x000018 - 0x000018)
struct FRigVMFunction_MathDoubleNegate : FRigVMFunction_MathDoubleUnaryOp
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleAbs
/// Size: 0x0000 (0x000018 - 0x000018)
struct FRigVMFunction_MathDoubleAbs : FRigVMFunction_MathDoubleUnaryOp
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleFloor
/// Size: 0x0018 (0x000008 - 0x000020)
struct FRigVMFunction_MathDoubleFloor : FRigVMFunction_MathDoubleBase
{ 
	double                                             Value;                                                      // 0x0008   (0x0008)  
	double                                             Result;                                                     // 0x0010   (0x0008)  
	int32_t                                            Int;                                                        // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleCeil
/// Size: 0x0018 (0x000008 - 0x000020)
struct FRigVMFunction_MathDoubleCeil : FRigVMFunction_MathDoubleBase
{ 
	double                                             Value;                                                      // 0x0008   (0x0008)  
	double                                             Result;                                                     // 0x0010   (0x0008)  
	int32_t                                            Int;                                                        // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleRound
/// Size: 0x0018 (0x000008 - 0x000020)
struct FRigVMFunction_MathDoubleRound : FRigVMFunction_MathDoubleBase
{ 
	double                                             Value;                                                      // 0x0008   (0x0008)  
	double                                             Result;                                                     // 0x0010   (0x0008)  
	int32_t                                            Int;                                                        // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleToInt
/// Size: 0x0010 (0x000008 - 0x000018)
struct FRigVMFunction_MathDoubleToInt : FRigVMFunction_MathDoubleBase
{ 
	double                                             Value;                                                      // 0x0008   (0x0008)  
	int32_t                                            Result;                                                     // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleSign
/// Size: 0x0000 (0x000018 - 0x000018)
struct FRigVMFunction_MathDoubleSign : FRigVMFunction_MathDoubleUnaryOp
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleClamp
/// Size: 0x0020 (0x000008 - 0x000028)
struct FRigVMFunction_MathDoubleClamp : FRigVMFunction_MathDoubleBase
{ 
	double                                             Value;                                                      // 0x0008   (0x0008)  
	double                                             Minimum;                                                    // 0x0010   (0x0008)  
	double                                             Maximum;                                                    // 0x0018   (0x0008)  
	double                                             Result;                                                     // 0x0020   (0x0008)  
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleLerp
/// Size: 0x0020 (0x000008 - 0x000028)
struct FRigVMFunction_MathDoubleLerp : FRigVMFunction_MathDoubleBase
{ 
	double                                             A;                                                          // 0x0008   (0x0008)  
	double                                             B;                                                          // 0x0010   (0x0008)  
	double                                             T;                                                          // 0x0018   (0x0008)  
	double                                             Result;                                                     // 0x0020   (0x0008)  
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleRemap
/// Size: 0x0038 (0x000008 - 0x000040)
struct FRigVMFunction_MathDoubleRemap : FRigVMFunction_MathDoubleBase
{ 
	double                                             Value;                                                      // 0x0008   (0x0008)  
	double                                             SourceMinimum;                                              // 0x0010   (0x0008)  
	double                                             SourceMaximum;                                              // 0x0018   (0x0008)  
	double                                             TargetMinimum;                                              // 0x0020   (0x0008)  
	double                                             TargetMaximum;                                              // 0x0028   (0x0008)  
	bool                                               bClamp;                                                     // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0031   (0x0007)  MISSED
	double                                             Result;                                                     // 0x0038   (0x0008)  
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleEquals
/// Size: 0x0018 (0x000008 - 0x000020)
struct FRigVMFunction_MathDoubleEquals : FRigVMFunction_MathDoubleBase
{ 
	double                                             A;                                                          // 0x0008   (0x0008)  
	double                                             B;                                                          // 0x0010   (0x0008)  
	bool                                               Result;                                                     // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0019   (0x0007)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleNotEquals
/// Size: 0x0018 (0x000008 - 0x000020)
struct FRigVMFunction_MathDoubleNotEquals : FRigVMFunction_MathDoubleBase
{ 
	double                                             A;                                                          // 0x0008   (0x0008)  
	double                                             B;                                                          // 0x0010   (0x0008)  
	bool                                               Result;                                                     // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0019   (0x0007)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleGreater
/// Size: 0x0018 (0x000008 - 0x000020)
struct FRigVMFunction_MathDoubleGreater : FRigVMFunction_MathDoubleBase
{ 
	double                                             A;                                                          // 0x0008   (0x0008)  
	double                                             B;                                                          // 0x0010   (0x0008)  
	bool                                               Result;                                                     // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0019   (0x0007)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleLess
/// Size: 0x0018 (0x000008 - 0x000020)
struct FRigVMFunction_MathDoubleLess : FRigVMFunction_MathDoubleBase
{ 
	double                                             A;                                                          // 0x0008   (0x0008)  
	double                                             B;                                                          // 0x0010   (0x0008)  
	bool                                               Result;                                                     // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0019   (0x0007)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleGreaterEqual
/// Size: 0x0018 (0x000008 - 0x000020)
struct FRigVMFunction_MathDoubleGreaterEqual : FRigVMFunction_MathDoubleBase
{ 
	double                                             A;                                                          // 0x0008   (0x0008)  
	double                                             B;                                                          // 0x0010   (0x0008)  
	bool                                               Result;                                                     // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0019   (0x0007)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleLessEqual
/// Size: 0x0018 (0x000008 - 0x000020)
struct FRigVMFunction_MathDoubleLessEqual : FRigVMFunction_MathDoubleBase
{ 
	double                                             A;                                                          // 0x0008   (0x0008)  
	double                                             B;                                                          // 0x0010   (0x0008)  
	bool                                               Result;                                                     // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0019   (0x0007)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleIsNearlyZero
/// Size: 0x0018 (0x000008 - 0x000020)
struct FRigVMFunction_MathDoubleIsNearlyZero : FRigVMFunction_MathDoubleBase
{ 
	double                                             Value;                                                      // 0x0008   (0x0008)  
	double                                             Tolerance;                                                  // 0x0010   (0x0008)  
	bool                                               Result;                                                     // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0019   (0x0007)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleIsNearlyEqual
/// Size: 0x0020 (0x000008 - 0x000028)
struct FRigVMFunction_MathDoubleIsNearlyEqual : FRigVMFunction_MathDoubleBase
{ 
	double                                             A;                                                          // 0x0008   (0x0008)  
	double                                             B;                                                          // 0x0010   (0x0008)  
	double                                             Tolerance;                                                  // 0x0018   (0x0008)  
	bool                                               Result;                                                     // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0021   (0x0007)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleDeg
/// Size: 0x0000 (0x000018 - 0x000018)
struct FRigVMFunction_MathDoubleDeg : FRigVMFunction_MathDoubleUnaryOp
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleRad
/// Size: 0x0000 (0x000018 - 0x000018)
struct FRigVMFunction_MathDoubleRad : FRigVMFunction_MathDoubleUnaryOp
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleSin
/// Size: 0x0000 (0x000018 - 0x000018)
struct FRigVMFunction_MathDoubleSin : FRigVMFunction_MathDoubleUnaryOp
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleCos
/// Size: 0x0000 (0x000018 - 0x000018)
struct FRigVMFunction_MathDoubleCos : FRigVMFunction_MathDoubleUnaryOp
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleTan
/// Size: 0x0000 (0x000018 - 0x000018)
struct FRigVMFunction_MathDoubleTan : FRigVMFunction_MathDoubleUnaryOp
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleAsin
/// Size: 0x0000 (0x000018 - 0x000018)
struct FRigVMFunction_MathDoubleAsin : FRigVMFunction_MathDoubleUnaryOp
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleAcos
/// Size: 0x0000 (0x000018 - 0x000018)
struct FRigVMFunction_MathDoubleAcos : FRigVMFunction_MathDoubleUnaryOp
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleAtan
/// Size: 0x0000 (0x000018 - 0x000018)
struct FRigVMFunction_MathDoubleAtan : FRigVMFunction_MathDoubleUnaryOp
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleAtan2
/// Size: 0x0000 (0x000020 - 0x000020)
struct FRigVMFunction_MathDoubleAtan2 : FRigVMFunction_MathDoubleBinaryOp
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleLawOfCosine
/// Size: 0x0038 (0x000008 - 0x000040)
struct FRigVMFunction_MathDoubleLawOfCosine : FRigVMFunction_MathDoubleBase
{ 
	double                                             A;                                                          // 0x0008   (0x0008)  
	double                                             B;                                                          // 0x0010   (0x0008)  
	double                                             C;                                                          // 0x0018   (0x0008)  
	double                                             AlphaAngle;                                                 // 0x0020   (0x0008)  
	double                                             BetaAngle;                                                  // 0x0028   (0x0008)  
	double                                             GammaAngle;                                                 // 0x0030   (0x0008)  
	bool                                               bValid;                                                     // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0039   (0x0007)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleExponential
/// Size: 0x0000 (0x000018 - 0x000018)
struct FRigVMFunction_MathDoubleExponential : FRigVMFunction_MathDoubleUnaryOp
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleArraySum
/// Size: 0x0018 (0x000008 - 0x000020)
struct FRigVMFunction_MathDoubleArraySum : FRigVMFunction_MathDoubleBase
{ 
	TArray<double>                                     Array;                                                      // 0x0008   (0x0010)  
	double                                             Sum;                                                        // 0x0018   (0x0008)  
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleArrayAverage
/// Size: 0x0018 (0x000008 - 0x000020)
struct FRigVMFunction_MathDoubleArrayAverage : FRigVMFunction_MathDoubleBase
{ 
	TArray<double>                                     Array;                                                      // 0x0008   (0x0010)  
	double                                             Average;                                                    // 0x0018   (0x0008)  
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatBase
/// Size: 0x0000 (0x000008 - 0x000008)
struct FRigVMFunction_MathFloatBase : FRigVMFunction_MathBase
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatConstant
/// Size: 0x0008 (0x000008 - 0x000010)
struct FRigVMFunction_MathFloatConstant : FRigVMFunction_MathFloatBase
{ 
	float                                              Value;                                                      // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatUnaryOp
/// Size: 0x0008 (0x000008 - 0x000010)
struct FRigVMFunction_MathFloatUnaryOp : FRigVMFunction_MathFloatBase
{ 
	float                                              Value;                                                      // 0x0008   (0x0004)  
	float                                              Result;                                                     // 0x000C   (0x0004)  
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatBinaryOp
/// Size: 0x0010 (0x000008 - 0x000018)
struct FRigVMFunction_MathFloatBinaryOp : FRigVMFunction_MathFloatBase
{ 
	float                                              A;                                                          // 0x0008   (0x0004)  
	float                                              B;                                                          // 0x000C   (0x0004)  
	float                                              Result;                                                     // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatBinaryAggregateOp
/// Size: 0x0010 (0x000008 - 0x000018)
struct FRigVMFunction_MathFloatBinaryAggregateOp : FRigVMFunction_MathFloatBase
{ 
	float                                              A;                                                          // 0x0008   (0x0004)  
	float                                              B;                                                          // 0x000C   (0x0004)  
	float                                              Result;                                                     // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatMake
/// Size: 0x0008 (0x000008 - 0x000010)
struct FRigVMFunction_MathFloatMake : FRigVMFunction_MathFloatBase
{ 
	float                                              Value;                                                      // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatConstPi
/// Size: 0x0000 (0x000010 - 0x000010)
struct FRigVMFunction_MathFloatConstPi : FRigVMFunction_MathFloatConstant
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatConstHalfPi
/// Size: 0x0000 (0x000010 - 0x000010)
struct FRigVMFunction_MathFloatConstHalfPi : FRigVMFunction_MathFloatConstant
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatConstTwoPi
/// Size: 0x0000 (0x000010 - 0x000010)
struct FRigVMFunction_MathFloatConstTwoPi : FRigVMFunction_MathFloatConstant
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatConstE
/// Size: 0x0000 (0x000010 - 0x000010)
struct FRigVMFunction_MathFloatConstE : FRigVMFunction_MathFloatConstant
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatAdd
/// Size: 0x0000 (0x000018 - 0x000018)
struct FRigVMFunction_MathFloatAdd : FRigVMFunction_MathFloatBinaryAggregateOp
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatSub
/// Size: 0x0000 (0x000018 - 0x000018)
struct FRigVMFunction_MathFloatSub : FRigVMFunction_MathFloatBinaryOp
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatMul
/// Size: 0x0000 (0x000018 - 0x000018)
struct FRigVMFunction_MathFloatMul : FRigVMFunction_MathFloatBinaryAggregateOp
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatDiv
/// Size: 0x0000 (0x000018 - 0x000018)
struct FRigVMFunction_MathFloatDiv : FRigVMFunction_MathFloatBinaryOp
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatMod
/// Size: 0x0000 (0x000018 - 0x000018)
struct FRigVMFunction_MathFloatMod : FRigVMFunction_MathFloatBinaryOp
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatMin
/// Size: 0x0000 (0x000018 - 0x000018)
struct FRigVMFunction_MathFloatMin : FRigVMFunction_MathFloatBinaryAggregateOp
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatMax
/// Size: 0x0000 (0x000018 - 0x000018)
struct FRigVMFunction_MathFloatMax : FRigVMFunction_MathFloatBinaryAggregateOp
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatPow
/// Size: 0x0000 (0x000018 - 0x000018)
struct FRigVMFunction_MathFloatPow : FRigVMFunction_MathFloatBinaryOp
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatSqrt
/// Size: 0x0000 (0x000010 - 0x000010)
struct FRigVMFunction_MathFloatSqrt : FRigVMFunction_MathFloatUnaryOp
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatNegate
/// Size: 0x0000 (0x000010 - 0x000010)
struct FRigVMFunction_MathFloatNegate : FRigVMFunction_MathFloatUnaryOp
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatAbs
/// Size: 0x0000 (0x000010 - 0x000010)
struct FRigVMFunction_MathFloatAbs : FRigVMFunction_MathFloatUnaryOp
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatFloor
/// Size: 0x0010 (0x000008 - 0x000018)
struct FRigVMFunction_MathFloatFloor : FRigVMFunction_MathFloatBase
{ 
	float                                              Value;                                                      // 0x0008   (0x0004)  
	float                                              Result;                                                     // 0x000C   (0x0004)  
	int32_t                                            Int;                                                        // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatCeil
/// Size: 0x0010 (0x000008 - 0x000018)
struct FRigVMFunction_MathFloatCeil : FRigVMFunction_MathFloatBase
{ 
	float                                              Value;                                                      // 0x0008   (0x0004)  
	float                                              Result;                                                     // 0x000C   (0x0004)  
	int32_t                                            Int;                                                        // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatRound
/// Size: 0x0010 (0x000008 - 0x000018)
struct FRigVMFunction_MathFloatRound : FRigVMFunction_MathFloatBase
{ 
	float                                              Value;                                                      // 0x0008   (0x0004)  
	float                                              Result;                                                     // 0x000C   (0x0004)  
	int32_t                                            Int;                                                        // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatToInt
/// Size: 0x0008 (0x000008 - 0x000010)
struct FRigVMFunction_MathFloatToInt : FRigVMFunction_MathFloatBase
{ 
	float                                              Value;                                                      // 0x0008   (0x0004)  
	int32_t                                            Result;                                                     // 0x000C   (0x0004)  
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatSign
/// Size: 0x0000 (0x000010 - 0x000010)
struct FRigVMFunction_MathFloatSign : FRigVMFunction_MathFloatUnaryOp
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatClamp
/// Size: 0x0010 (0x000008 - 0x000018)
struct FRigVMFunction_MathFloatClamp : FRigVMFunction_MathFloatBase
{ 
	float                                              Value;                                                      // 0x0008   (0x0004)  
	float                                              Minimum;                                                    // 0x000C   (0x0004)  
	float                                              Maximum;                                                    // 0x0010   (0x0004)  
	float                                              Result;                                                     // 0x0014   (0x0004)  
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatLerp
/// Size: 0x0010 (0x000008 - 0x000018)
struct FRigVMFunction_MathFloatLerp : FRigVMFunction_MathFloatBase
{ 
	float                                              A;                                                          // 0x0008   (0x0004)  
	float                                              B;                                                          // 0x000C   (0x0004)  
	float                                              T;                                                          // 0x0010   (0x0004)  
	float                                              Result;                                                     // 0x0014   (0x0004)  
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatRemap
/// Size: 0x0020 (0x000008 - 0x000028)
struct FRigVMFunction_MathFloatRemap : FRigVMFunction_MathFloatBase
{ 
	float                                              Value;                                                      // 0x0008   (0x0004)  
	float                                              SourceMinimum;                                              // 0x000C   (0x0004)  
	float                                              SourceMaximum;                                              // 0x0010   (0x0004)  
	float                                              TargetMinimum;                                              // 0x0014   (0x0004)  
	float                                              TargetMaximum;                                              // 0x0018   (0x0004)  
	bool                                               bClamp;                                                     // 0x001C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x001D   (0x0003)  MISSED
	float                                              Result;                                                     // 0x0020   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatEquals
/// Size: 0x0010 (0x000008 - 0x000018)
struct FRigVMFunction_MathFloatEquals : FRigVMFunction_MathFloatBase
{ 
	float                                              A;                                                          // 0x0008   (0x0004)  
	float                                              B;                                                          // 0x000C   (0x0004)  
	bool                                               Result;                                                     // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatNotEquals
/// Size: 0x0010 (0x000008 - 0x000018)
struct FRigVMFunction_MathFloatNotEquals : FRigVMFunction_MathFloatBase
{ 
	float                                              A;                                                          // 0x0008   (0x0004)  
	float                                              B;                                                          // 0x000C   (0x0004)  
	bool                                               Result;                                                     // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatGreater
/// Size: 0x0010 (0x000008 - 0x000018)
struct FRigVMFunction_MathFloatGreater : FRigVMFunction_MathFloatBase
{ 
	float                                              A;                                                          // 0x0008   (0x0004)  
	float                                              B;                                                          // 0x000C   (0x0004)  
	bool                                               Result;                                                     // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatLess
/// Size: 0x0010 (0x000008 - 0x000018)
struct FRigVMFunction_MathFloatLess : FRigVMFunction_MathFloatBase
{ 
	float                                              A;                                                          // 0x0008   (0x0004)  
	float                                              B;                                                          // 0x000C   (0x0004)  
	bool                                               Result;                                                     // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatGreaterEqual
/// Size: 0x0010 (0x000008 - 0x000018)
struct FRigVMFunction_MathFloatGreaterEqual : FRigVMFunction_MathFloatBase
{ 
	float                                              A;                                                          // 0x0008   (0x0004)  
	float                                              B;                                                          // 0x000C   (0x0004)  
	bool                                               Result;                                                     // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatLessEqual
/// Size: 0x0010 (0x000008 - 0x000018)
struct FRigVMFunction_MathFloatLessEqual : FRigVMFunction_MathFloatBase
{ 
	float                                              A;                                                          // 0x0008   (0x0004)  
	float                                              B;                                                          // 0x000C   (0x0004)  
	bool                                               Result;                                                     // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatIsNearlyZero
/// Size: 0x0010 (0x000008 - 0x000018)
struct FRigVMFunction_MathFloatIsNearlyZero : FRigVMFunction_MathFloatBase
{ 
	float                                              Value;                                                      // 0x0008   (0x0004)  
	float                                              Tolerance;                                                  // 0x000C   (0x0004)  
	bool                                               Result;                                                     // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatIsNearlyEqual
/// Size: 0x0010 (0x000008 - 0x000018)
struct FRigVMFunction_MathFloatIsNearlyEqual : FRigVMFunction_MathFloatBase
{ 
	float                                              A;                                                          // 0x0008   (0x0004)  
	float                                              B;                                                          // 0x000C   (0x0004)  
	float                                              Tolerance;                                                  // 0x0010   (0x0004)  
	bool                                               Result;                                                     // 0x0014   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0015   (0x0003)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatSelectBool
/// Size: 0x0010 (0x000008 - 0x000018)
struct FRigVMFunction_MathFloatSelectBool : FRigVMFunction_MathFloatBase
{ 
	bool                                               Condition;                                                  // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0009   (0x0003)  MISSED
	float                                              IfTrue;                                                     // 0x000C   (0x0004)  
	float                                              IfFalse;                                                    // 0x0010   (0x0004)  
	float                                              Result;                                                     // 0x0014   (0x0004)  
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatDeg
/// Size: 0x0000 (0x000010 - 0x000010)
struct FRigVMFunction_MathFloatDeg : FRigVMFunction_MathFloatUnaryOp
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatRad
/// Size: 0x0000 (0x000010 - 0x000010)
struct FRigVMFunction_MathFloatRad : FRigVMFunction_MathFloatUnaryOp
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatSin
/// Size: 0x0000 (0x000010 - 0x000010)
struct FRigVMFunction_MathFloatSin : FRigVMFunction_MathFloatUnaryOp
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatCos
/// Size: 0x0000 (0x000010 - 0x000010)
struct FRigVMFunction_MathFloatCos : FRigVMFunction_MathFloatUnaryOp
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatTan
/// Size: 0x0000 (0x000010 - 0x000010)
struct FRigVMFunction_MathFloatTan : FRigVMFunction_MathFloatUnaryOp
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatAsin
/// Size: 0x0000 (0x000010 - 0x000010)
struct FRigVMFunction_MathFloatAsin : FRigVMFunction_MathFloatUnaryOp
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatAcos
/// Size: 0x0000 (0x000010 - 0x000010)
struct FRigVMFunction_MathFloatAcos : FRigVMFunction_MathFloatUnaryOp
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatAtan
/// Size: 0x0000 (0x000010 - 0x000010)
struct FRigVMFunction_MathFloatAtan : FRigVMFunction_MathFloatUnaryOp
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatAtan2
/// Size: 0x0000 (0x000018 - 0x000018)
struct FRigVMFunction_MathFloatAtan2 : FRigVMFunction_MathFloatBinaryOp
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatLawOfCosine
/// Size: 0x0020 (0x000008 - 0x000028)
struct FRigVMFunction_MathFloatLawOfCosine : FRigVMFunction_MathFloatBase
{ 
	float                                              A;                                                          // 0x0008   (0x0004)  
	float                                              B;                                                          // 0x000C   (0x0004)  
	float                                              C;                                                          // 0x0010   (0x0004)  
	float                                              AlphaAngle;                                                 // 0x0014   (0x0004)  
	float                                              BetaAngle;                                                  // 0x0018   (0x0004)  
	float                                              GammaAngle;                                                 // 0x001C   (0x0004)  
	bool                                               bValid;                                                     // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0021   (0x0007)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatExponential
/// Size: 0x0000 (0x000010 - 0x000010)
struct FRigVMFunction_MathFloatExponential : FRigVMFunction_MathFloatUnaryOp
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatArraySum
/// Size: 0x0018 (0x000008 - 0x000020)
struct FRigVMFunction_MathFloatArraySum : FRigVMFunction_MathFloatBase
{ 
	TArray<float>                                      Array;                                                      // 0x0008   (0x0010)  
	float                                              Sum;                                                        // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatArrayAverage
/// Size: 0x0018 (0x000008 - 0x000020)
struct FRigVMFunction_MathFloatArrayAverage : FRigVMFunction_MathFloatBase
{ 
	TArray<float>                                      Array;                                                      // 0x0008   (0x0010)  
	float                                              Average;                                                    // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_MathIntBase
/// Size: 0x0000 (0x000008 - 0x000008)
struct FRigVMFunction_MathIntBase : FRigVMFunction_MathBase
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathIntUnaryOp
/// Size: 0x0008 (0x000008 - 0x000010)
struct FRigVMFunction_MathIntUnaryOp : FRigVMFunction_MathIntBase
{ 
	int32_t                                            Value;                                                      // 0x0008   (0x0004)  
	int32_t                                            Result;                                                     // 0x000C   (0x0004)  
};

/// Struct /Script/RigVM.RigVMFunction_MathIntBinaryOp
/// Size: 0x0010 (0x000008 - 0x000018)
struct FRigVMFunction_MathIntBinaryOp : FRigVMFunction_MathIntBase
{ 
	int32_t                                            A;                                                          // 0x0008   (0x0004)  
	int32_t                                            B;                                                          // 0x000C   (0x0004)  
	int32_t                                            Result;                                                     // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_MathIntBinaryAggregateOp
/// Size: 0x0010 (0x000008 - 0x000018)
struct FRigVMFunction_MathIntBinaryAggregateOp : FRigVMFunction_MathIntBase
{ 
	int32_t                                            A;                                                          // 0x0008   (0x0004)  
	int32_t                                            B;                                                          // 0x000C   (0x0004)  
	int32_t                                            Result;                                                     // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_MathIntMake
/// Size: 0x0008 (0x000008 - 0x000010)
struct FRigVMFunction_MathIntMake : FRigVMFunction_MathIntBase
{ 
	int32_t                                            Value;                                                      // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_MathIntAdd
/// Size: 0x0000 (0x000018 - 0x000018)
struct FRigVMFunction_MathIntAdd : FRigVMFunction_MathIntBinaryAggregateOp
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathIntSub
/// Size: 0x0000 (0x000018 - 0x000018)
struct FRigVMFunction_MathIntSub : FRigVMFunction_MathIntBinaryOp
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathIntMul
/// Size: 0x0000 (0x000018 - 0x000018)
struct FRigVMFunction_MathIntMul : FRigVMFunction_MathIntBinaryAggregateOp
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathIntDiv
/// Size: 0x0000 (0x000018 - 0x000018)
struct FRigVMFunction_MathIntDiv : FRigVMFunction_MathIntBinaryOp
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathIntMod
/// Size: 0x0000 (0x000018 - 0x000018)
struct FRigVMFunction_MathIntMod : FRigVMFunction_MathIntBinaryOp
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathIntMin
/// Size: 0x0000 (0x000018 - 0x000018)
struct FRigVMFunction_MathIntMin : FRigVMFunction_MathIntBinaryAggregateOp
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathIntMax
/// Size: 0x0000 (0x000018 - 0x000018)
struct FRigVMFunction_MathIntMax : FRigVMFunction_MathIntBinaryAggregateOp
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathIntPow
/// Size: 0x0000 (0x000018 - 0x000018)
struct FRigVMFunction_MathIntPow : FRigVMFunction_MathIntBinaryOp
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathIntNegate
/// Size: 0x0000 (0x000010 - 0x000010)
struct FRigVMFunction_MathIntNegate : FRigVMFunction_MathIntUnaryOp
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathIntAbs
/// Size: 0x0000 (0x000010 - 0x000010)
struct FRigVMFunction_MathIntAbs : FRigVMFunction_MathIntUnaryOp
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathIntToFloat
/// Size: 0x0008 (0x000008 - 0x000010)
struct FRigVMFunction_MathIntToFloat : FRigVMFunction_MathIntBase
{ 
	int32_t                                            Value;                                                      // 0x0008   (0x0004)  
	float                                              Result;                                                     // 0x000C   (0x0004)  
};

/// Struct /Script/RigVM.RigVMFunction_MathIntToDouble
/// Size: 0x0010 (0x000008 - 0x000018)
struct FRigVMFunction_MathIntToDouble : FRigVMFunction_MathIntBase
{ 
	int32_t                                            Value;                                                      // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	double                                             Result;                                                     // 0x0010   (0x0008)  
};

/// Struct /Script/RigVM.RigVMFunction_MathIntSign
/// Size: 0x0000 (0x000010 - 0x000010)
struct FRigVMFunction_MathIntSign : FRigVMFunction_MathIntUnaryOp
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathIntClamp
/// Size: 0x0010 (0x000008 - 0x000018)
struct FRigVMFunction_MathIntClamp : FRigVMFunction_MathIntBase
{ 
	int32_t                                            Value;                                                      // 0x0008   (0x0004)  
	int32_t                                            Minimum;                                                    // 0x000C   (0x0004)  
	int32_t                                            Maximum;                                                    // 0x0010   (0x0004)  
	int32_t                                            Result;                                                     // 0x0014   (0x0004)  
};

/// Struct /Script/RigVM.RigVMFunction_MathIntEquals
/// Size: 0x0010 (0x000008 - 0x000018)
struct FRigVMFunction_MathIntEquals : FRigVMFunction_MathIntBase
{ 
	int32_t                                            A;                                                          // 0x0008   (0x0004)  
	int32_t                                            B;                                                          // 0x000C   (0x0004)  
	bool                                               Result;                                                     // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_MathIntNotEquals
/// Size: 0x0010 (0x000008 - 0x000018)
struct FRigVMFunction_MathIntNotEquals : FRigVMFunction_MathIntBase
{ 
	int32_t                                            A;                                                          // 0x0008   (0x0004)  
	int32_t                                            B;                                                          // 0x000C   (0x0004)  
	bool                                               Result;                                                     // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_MathIntGreater
/// Size: 0x0010 (0x000008 - 0x000018)
struct FRigVMFunction_MathIntGreater : FRigVMFunction_MathIntBase
{ 
	int32_t                                            A;                                                          // 0x0008   (0x0004)  
	int32_t                                            B;                                                          // 0x000C   (0x0004)  
	bool                                               Result;                                                     // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_MathIntLess
/// Size: 0x0010 (0x000008 - 0x000018)
struct FRigVMFunction_MathIntLess : FRigVMFunction_MathIntBase
{ 
	int32_t                                            A;                                                          // 0x0008   (0x0004)  
	int32_t                                            B;                                                          // 0x000C   (0x0004)  
	bool                                               Result;                                                     // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_MathIntGreaterEqual
/// Size: 0x0010 (0x000008 - 0x000018)
struct FRigVMFunction_MathIntGreaterEqual : FRigVMFunction_MathIntBase
{ 
	int32_t                                            A;                                                          // 0x0008   (0x0004)  
	int32_t                                            B;                                                          // 0x000C   (0x0004)  
	bool                                               Result;                                                     // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_MathIntLessEqual
/// Size: 0x0010 (0x000008 - 0x000018)
struct FRigVMFunction_MathIntLessEqual : FRigVMFunction_MathIntBase
{ 
	int32_t                                            A;                                                          // 0x0008   (0x0004)  
	int32_t                                            B;                                                          // 0x000C   (0x0004)  
	bool                                               Result;                                                     // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_MathIntArraySum
/// Size: 0x0018 (0x000008 - 0x000020)
struct FRigVMFunction_MathIntArraySum : FRigVMFunction_MathIntBase
{ 
	TArray<int32_t>                                    Array;                                                      // 0x0008   (0x0010)  
	int32_t                                            Sum;                                                        // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_MathIntArrayAverage
/// Size: 0x0018 (0x000008 - 0x000020)
struct FRigVMFunction_MathIntArrayAverage : FRigVMFunction_MathIntBase
{ 
	TArray<int32_t>                                    Array;                                                      // 0x0008   (0x0010)  
	int32_t                                            Average;                                                    // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_MathIntToString
/// Size: 0x0018 (0x000008 - 0x000020)
struct FRigVMFunction_MathIntToString : FRigVMFunction_MathIntBase
{ 
	int32_t                                            Number;                                                     // 0x0008   (0x0004)  
	int32_t                                            PaddedSize;                                                 // 0x000C   (0x0004)  
	SDK_UNDEFINED(16,1662) /* FString */               __um(Result);                                               // 0x0010   (0x0010)  
};

/// Struct /Script/RigVM.RigVMFunction_MathIntToName
/// Size: 0x0010 (0x000008 - 0x000018)
struct FRigVMFunction_MathIntToName : FRigVMFunction_MathIntBase
{ 
	int32_t                                            Number;                                                     // 0x0008   (0x0004)  
	int32_t                                            PaddedSize;                                                 // 0x000C   (0x0004)  
	FName                                              Result;                                                     // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_MathMatrixBase
/// Size: 0x0000 (0x000008 - 0x000008)
struct FRigVMFunction_MathMatrixBase : FRigVMFunction_MathBase
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathMatrixUnaryOp
/// Size: 0x0108 (0x000008 - 0x000110)
struct FRigVMFunction_MathMatrixUnaryOp : FRigVMFunction_MathMatrixBase
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0008   (0x0008)  MISSED
	FMatrix                                            Value;                                                      // 0x0010   (0x0080)  
	FMatrix                                            Result;                                                     // 0x0090   (0x0080)  
};

/// Struct /Script/RigVM.RigVMFunction_MathMatrixBinaryOp
/// Size: 0x0188 (0x000008 - 0x000190)
struct FRigVMFunction_MathMatrixBinaryOp : FRigVMFunction_MathMatrixBase
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0008   (0x0008)  MISSED
	FMatrix                                            A;                                                          // 0x0010   (0x0080)  
	FMatrix                                            B;                                                          // 0x0090   (0x0080)  
	FMatrix                                            Result;                                                     // 0x0110   (0x0080)  
};

/// Struct /Script/RigVM.RigVMFunction_MathMatrixBinaryAggregateOp
/// Size: 0x0188 (0x000008 - 0x000190)
struct FRigVMFunction_MathMatrixBinaryAggregateOp : FRigVMFunction_MathMatrixBase
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0008   (0x0008)  MISSED
	FMatrix                                            A;                                                          // 0x0010   (0x0080)  
	FMatrix                                            B;                                                          // 0x0090   (0x0080)  
	FMatrix                                            Result;                                                     // 0x0110   (0x0080)  
};

/// Struct /Script/RigVM.RigVMFunction_MathMatrixToTransform
/// Size: 0x00E8 (0x000008 - 0x0000F0)
struct FRigVMFunction_MathMatrixToTransform : FRigVMFunction_MathMatrixBase
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0008   (0x0008)  MISSED
	FMatrix                                            Value;                                                      // 0x0010   (0x0080)  
	FTransform                                         Result;                                                     // 0x0090   (0x0060)  
};

/// Struct /Script/RigVM.RigVMFunction_MathMatrixFromTransform
/// Size: 0x00E8 (0x000008 - 0x0000F0)
struct FRigVMFunction_MathMatrixFromTransform : FRigVMFunction_MathMatrixBase
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         Transform;                                                  // 0x0010   (0x0060)  
	FMatrix                                            Result;                                                     // 0x0070   (0x0080)  
};

/// Struct /Script/RigVM.RigVMFunction_MathMatrixFromTransformV2
/// Size: 0x00E8 (0x000008 - 0x0000F0)
struct FRigVMFunction_MathMatrixFromTransformV2 : FRigVMFunction_MathMatrixBase
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         Value;                                                      // 0x0010   (0x0060)  
	FMatrix                                            Result;                                                     // 0x0070   (0x0080)  
};

/// Struct /Script/RigVM.RigVMFunction_MathMatrixToVectors
/// Size: 0x00E8 (0x000008 - 0x0000F0)
struct FRigVMFunction_MathMatrixToVectors : FRigVMFunction_MathMatrixBase
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0008   (0x0008)  MISSED
	FMatrix                                            Value;                                                      // 0x0010   (0x0080)  
	FVector                                            Origin;                                                     // 0x0090   (0x0018)  
	FVector                                            X;                                                          // 0x00A8   (0x0018)  
	FVector                                            Y;                                                          // 0x00C0   (0x0018)  
	FVector                                            Z;                                                          // 0x00D8   (0x0018)  
};

/// Struct /Script/RigVM.RigVMFunction_MathMatrixFromVectors
/// Size: 0x00E8 (0x000008 - 0x0000F0)
struct FRigVMFunction_MathMatrixFromVectors : FRigVMFunction_MathMatrixBase
{ 
	FVector                                            Origin;                                                     // 0x0008   (0x0018)  
	FVector                                            X;                                                          // 0x0020   (0x0018)  
	FVector                                            Y;                                                          // 0x0038   (0x0018)  
	FVector                                            Z;                                                          // 0x0050   (0x0018)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0068   (0x0008)  MISSED
	FMatrix                                            Result;                                                     // 0x0070   (0x0080)  
};

/// Struct /Script/RigVM.RigVMFunction_MathMatrixMul
/// Size: 0x0000 (0x000190 - 0x000190)
struct FRigVMFunction_MathMatrixMul : FRigVMFunction_MathMatrixBinaryAggregateOp
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathMatrixInverse
/// Size: 0x0000 (0x000110 - 0x000110)
struct FRigVMFunction_MathMatrixInverse : FRigVMFunction_MathMatrixUnaryOp
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathQuaternionBase
/// Size: 0x0000 (0x000008 - 0x000008)
struct FRigVMFunction_MathQuaternionBase : FRigVMFunction_MathBase
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathQuaternionUnaryOp
/// Size: 0x0048 (0x000008 - 0x000050)
struct FRigVMFunction_MathQuaternionUnaryOp : FRigVMFunction_MathQuaternionBase
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              Value;                                                      // 0x0010   (0x0020)  
	FQuat                                              Result;                                                     // 0x0030   (0x0020)  
};

/// Struct /Script/RigVM.RigVMFunction_MathQuaternionBinaryOp
/// Size: 0x0068 (0x000008 - 0x000070)
struct FRigVMFunction_MathQuaternionBinaryOp : FRigVMFunction_MathQuaternionBase
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              A;                                                          // 0x0010   (0x0020)  
	FQuat                                              B;                                                          // 0x0030   (0x0020)  
	FQuat                                              Result;                                                     // 0x0050   (0x0020)  
};

/// Struct /Script/RigVM.RigVMFunction_MathQuaternionBinaryAggregateOp
/// Size: 0x0068 (0x000008 - 0x000070)
struct FRigVMFunction_MathQuaternionBinaryAggregateOp : FRigVMFunction_MathQuaternionBase
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              A;                                                          // 0x0010   (0x0020)  
	FQuat                                              B;                                                          // 0x0030   (0x0020)  
	FQuat                                              Result;                                                     // 0x0050   (0x0020)  
};

/// Struct /Script/RigVM.RigVMFunction_MathQuaternionMake
/// Size: 0x0038 (0x000008 - 0x000040)
struct FRigVMFunction_MathQuaternionMake : FRigVMFunction_MathQuaternionBase
{ 
	float                                              X;                                                          // 0x0008   (0x0004)  
	float                                              Y;                                                          // 0x000C   (0x0004)  
	float                                              Z;                                                          // 0x0010   (0x0004)  
	float                                              W;                                                          // 0x0014   (0x0004)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0018   (0x0008)  MISSED
	FQuat                                              Result;                                                     // 0x0020   (0x0020)  
};

/// Struct /Script/RigVM.RigVMFunction_MathQuaternionFromAxisAndAngle
/// Size: 0x0048 (0x000008 - 0x000050)
struct FRigVMFunction_MathQuaternionFromAxisAndAngle : FRigVMFunction_MathQuaternionBase
{ 
	FVector                                            Axis;                                                       // 0x0008   (0x0018)  
	float                                              Angle;                                                      // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_5[0xC];                                       // 0x0024   (0x000C)  MISSED
	FQuat                                              Result;                                                     // 0x0030   (0x0020)  
};

/// Struct /Script/RigVM.RigVMFunction_MathQuaternionFromEuler
/// Size: 0x0048 (0x000008 - 0x000050)
struct FRigVMFunction_MathQuaternionFromEuler : FRigVMFunction_MathQuaternionBase
{ 
	FVector                                            Euler;                                                      // 0x0008   (0x0018)  
	EEulerRotationOrder                                RotationOrder;                                              // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_5[0xF];                                       // 0x0021   (0x000F)  MISSED
	FQuat                                              Result;                                                     // 0x0030   (0x0020)  
};

/// Struct /Script/RigVM.RigVMFunction_MathQuaternionFromRotator
/// Size: 0x0038 (0x000008 - 0x000040)
struct FRigVMFunction_MathQuaternionFromRotator : FRigVMFunction_MathQuaternionBase
{ 
	FRotator                                           Rotator;                                                    // 0x0008   (0x0018)  
	FQuat                                              Result;                                                     // 0x0020   (0x0020)  
};

/// Struct /Script/RigVM.RigVMFunction_MathQuaternionFromRotatorV2
/// Size: 0x0038 (0x000008 - 0x000040)
struct FRigVMFunction_MathQuaternionFromRotatorV2 : FRigVMFunction_MathQuaternionBase
{ 
	FRotator                                           Value;                                                      // 0x0008   (0x0018)  
	FQuat                                              Result;                                                     // 0x0020   (0x0020)  
};

/// Struct /Script/RigVM.RigVMFunction_MathQuaternionFromTwoVectors
/// Size: 0x0058 (0x000008 - 0x000060)
struct FRigVMFunction_MathQuaternionFromTwoVectors : FRigVMFunction_MathQuaternionBase
{ 
	FVector                                            A;                                                          // 0x0008   (0x0018)  
	FVector                                            B;                                                          // 0x0020   (0x0018)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0038   (0x0008)  MISSED
	FQuat                                              Result;                                                     // 0x0040   (0x0020)  
};

/// Struct /Script/RigVM.RigVMFunction_MathQuaternionToAxisAndAngle
/// Size: 0x0048 (0x000008 - 0x000050)
struct FRigVMFunction_MathQuaternionToAxisAndAngle : FRigVMFunction_MathQuaternionBase
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              Value;                                                      // 0x0010   (0x0020)  
	FVector                                            Axis;                                                       // 0x0030   (0x0018)  
	float                                              Angle;                                                      // 0x0048   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x004C   (0x0004)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_MathQuaternionToVectors
/// Size: 0x0078 (0x000008 - 0x000080)
struct FRigVMFunction_MathQuaternionToVectors : FRigVMFunction_MathQuaternionBase
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              Value;                                                      // 0x0010   (0x0020)  
	FVector                                            Forward;                                                    // 0x0030   (0x0018)  
	FVector                                            Right;                                                      // 0x0048   (0x0018)  
	FVector                                            Up;                                                         // 0x0060   (0x0018)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0078   (0x0008)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_MathQuaternionScale
/// Size: 0x0038 (0x000008 - 0x000040)
struct FRigVMFunction_MathQuaternionScale : FRigVMFunction_MathQuaternionBase
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              Value;                                                      // 0x0010   (0x0020)  
	float                                              Scale;                                                      // 0x0030   (0x0004)  
	unsigned char                                      UnknownData01_6[0xC];                                       // 0x0034   (0x000C)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_MathQuaternionScaleV2
/// Size: 0x0058 (0x000008 - 0x000060)
struct FRigVMFunction_MathQuaternionScaleV2 : FRigVMFunction_MathQuaternionBase
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              Value;                                                      // 0x0010   (0x0020)  
	float                                              Factor;                                                     // 0x0030   (0x0004)  
	unsigned char                                      UnknownData01_5[0xC];                                       // 0x0034   (0x000C)  MISSED
	FQuat                                              Result;                                                     // 0x0040   (0x0020)  
};

/// Struct /Script/RigVM.RigVMFunction_MathQuaternionToEuler
/// Size: 0x0048 (0x000008 - 0x000050)
struct FRigVMFunction_MathQuaternionToEuler : FRigVMFunction_MathQuaternionBase
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              Value;                                                      // 0x0010   (0x0020)  
	EEulerRotationOrder                                RotationOrder;                                              // 0x0030   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0031   (0x0007)  MISSED
	FVector                                            Result;                                                     // 0x0038   (0x0018)  
};

/// Struct /Script/RigVM.RigVMFunction_MathQuaternionToRotator
/// Size: 0x0048 (0x000008 - 0x000050)
struct FRigVMFunction_MathQuaternionToRotator : FRigVMFunction_MathQuaternionBase
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              Value;                                                      // 0x0010   (0x0020)  
	FRotator                                           Result;                                                     // 0x0030   (0x0018)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0048   (0x0008)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_MathQuaternionMul
/// Size: 0x0000 (0x000070 - 0x000070)
struct FRigVMFunction_MathQuaternionMul : FRigVMFunction_MathQuaternionBinaryAggregateOp
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathQuaternionInverse
/// Size: 0x0000 (0x000050 - 0x000050)
struct FRigVMFunction_MathQuaternionInverse : FRigVMFunction_MathQuaternionUnaryOp
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathQuaternionSlerp
/// Size: 0x0078 (0x000008 - 0x000080)
struct FRigVMFunction_MathQuaternionSlerp : FRigVMFunction_MathQuaternionBase
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              A;                                                          // 0x0010   (0x0020)  
	FQuat                                              B;                                                          // 0x0030   (0x0020)  
	float                                              T;                                                          // 0x0050   (0x0004)  
	unsigned char                                      UnknownData01_5[0xC];                                       // 0x0054   (0x000C)  MISSED
	FQuat                                              Result;                                                     // 0x0060   (0x0020)  
};

/// Struct /Script/RigVM.RigVMFunction_MathQuaternionEquals
/// Size: 0x0058 (0x000008 - 0x000060)
struct FRigVMFunction_MathQuaternionEquals : FRigVMFunction_MathQuaternionBase
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              A;                                                          // 0x0010   (0x0020)  
	FQuat                                              B;                                                          // 0x0030   (0x0020)  
	bool                                               Result;                                                     // 0x0050   (0x0001)  
	unsigned char                                      UnknownData01_6[0xF];                                       // 0x0051   (0x000F)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_MathQuaternionNotEquals
/// Size: 0x0058 (0x000008 - 0x000060)
struct FRigVMFunction_MathQuaternionNotEquals : FRigVMFunction_MathQuaternionBase
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              A;                                                          // 0x0010   (0x0020)  
	FQuat                                              B;                                                          // 0x0030   (0x0020)  
	bool                                               Result;                                                     // 0x0050   (0x0001)  
	unsigned char                                      UnknownData01_6[0xF];                                       // 0x0051   (0x000F)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_MathQuaternionSelectBool
/// Size: 0x0068 (0x000008 - 0x000070)
struct FRigVMFunction_MathQuaternionSelectBool : FRigVMFunction_MathQuaternionBase
{ 
	bool                                               Condition;                                                  // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0009   (0x0007)  MISSED
	FQuat                                              IfTrue;                                                     // 0x0010   (0x0020)  
	FQuat                                              IfFalse;                                                    // 0x0030   (0x0020)  
	FQuat                                              Result;                                                     // 0x0050   (0x0020)  
};

/// Struct /Script/RigVM.RigVMFunction_MathQuaternionDot
/// Size: 0x0058 (0x000008 - 0x000060)
struct FRigVMFunction_MathQuaternionDot : FRigVMFunction_MathQuaternionBase
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              A;                                                          // 0x0010   (0x0020)  
	FQuat                                              B;                                                          // 0x0030   (0x0020)  
	float                                              Result;                                                     // 0x0050   (0x0004)  
	unsigned char                                      UnknownData01_6[0xC];                                       // 0x0054   (0x000C)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_MathQuaternionUnit
/// Size: 0x0000 (0x000050 - 0x000050)
struct FRigVMFunction_MathQuaternionUnit : FRigVMFunction_MathQuaternionUnaryOp
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathQuaternionRotateVector
/// Size: 0x0058 (0x000008 - 0x000060)
struct FRigVMFunction_MathQuaternionRotateVector : FRigVMFunction_MathQuaternionBase
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              Transform;                                                  // 0x0010   (0x0020)  
	FVector                                            Vector;                                                     // 0x0030   (0x0018)  
	FVector                                            Result;                                                     // 0x0048   (0x0018)  
};

/// Struct /Script/RigVM.RigVMFunction_MathQuaternionGetAxis
/// Size: 0x0048 (0x000008 - 0x000050)
struct FRigVMFunction_MathQuaternionGetAxis : FRigVMFunction_MathQuaternionBase
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              Quaternion;                                                 // 0x0010   (0x0020)  
	SDK_UNDEFINED(1,1663) /* TEnumAsByte<EAxis> */     __um(Axis);                                                 // 0x0030   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0031   (0x0007)  MISSED
	FVector                                            Result;                                                     // 0x0038   (0x0018)  
};

/// Struct /Script/RigVM.RigVMFunction_MathQuaternionSwingTwist
/// Size: 0x0088 (0x000008 - 0x000090)
struct FRigVMFunction_MathQuaternionSwingTwist : FRigVMFunction_MathQuaternionBase
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              Input;                                                      // 0x0010   (0x0020)  
	FVector                                            TwistAxis;                                                  // 0x0030   (0x0018)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x0048   (0x0008)  MISSED
	FQuat                                              Swing;                                                      // 0x0050   (0x0020)  
	FQuat                                              Twist;                                                      // 0x0070   (0x0020)  
};

/// Struct /Script/RigVM.RigVMFunction_MathQuaternionRotationOrder
/// Size: 0x0008 (0x000008 - 0x000010)
struct FRigVMFunction_MathQuaternionRotationOrder : FRigVMFunction_MathBase
{ 
	EEulerRotationOrder                                RotationOrder;                                              // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0009   (0x0007)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_MathQuaternionMakeRelative
/// Size: 0x0068 (0x000008 - 0x000070)
struct FRigVMFunction_MathQuaternionMakeRelative : FRigVMFunction_MathQuaternionBase
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              Global;                                                     // 0x0010   (0x0020)  
	FQuat                                              Parent;                                                     // 0x0030   (0x0020)  
	FQuat                                              Local;                                                      // 0x0050   (0x0020)  
};

/// Struct /Script/RigVM.RigVMFunction_MathQuaternionMakeAbsolute
/// Size: 0x0068 (0x000008 - 0x000070)
struct FRigVMFunction_MathQuaternionMakeAbsolute : FRigVMFunction_MathQuaternionBase
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              Local;                                                      // 0x0010   (0x0020)  
	FQuat                                              Parent;                                                     // 0x0030   (0x0020)  
	FQuat                                              Global;                                                     // 0x0050   (0x0020)  
};

/// Struct /Script/RigVM.RigVMFunction_MathQuaternionMirrorTransform
/// Size: 0x00B8 (0x000008 - 0x0000C0)
struct FRigVMFunction_MathQuaternionMirrorTransform : FRigVMFunction_MathQuaternionBase
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              Value;                                                      // 0x0010   (0x0020)  
	SDK_UNDEFINED(1,1664) /* TEnumAsByte<EAxis> */     __um(MirrorAxis);                                           // 0x0030   (0x0001)  
	SDK_UNDEFINED(1,1665) /* TEnumAsByte<EAxis> */     __um(AxisToFlip);                                           // 0x0031   (0x0001)  
	unsigned char                                      UnknownData01_5[0xE];                                       // 0x0032   (0x000E)  MISSED
	FTransform                                         CentralTransform;                                           // 0x0040   (0x0060)  
	FQuat                                              Result;                                                     // 0x00A0   (0x0020)  
};

/// Struct /Script/RigVM.RigVMFunction_MathRayBase
/// Size: 0x0000 (0x000008 - 0x000008)
struct FRigVMFunction_MathRayBase : FRigVMFunction_MathBase
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathRayIntersectRay
/// Size: 0x0088 (0x000008 - 0x000090)
struct FRigVMFunction_MathRayIntersectRay : FRigVMFunction_MathRayBase
{ 
	FRay                                               A;                                                          // 0x0008   (0x0030)  
	FRay                                               B;                                                          // 0x0038   (0x0030)  
	FVector                                            Result;                                                     // 0x0068   (0x0018)  
	float                                              Distance;                                                   // 0x0080   (0x0004)  
	float                                              RatioA;                                                     // 0x0084   (0x0004)  
	float                                              RatioB;                                                     // 0x0088   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x008C   (0x0004)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_MathRayIntersectPlane
/// Size: 0x0080 (0x000008 - 0x000088)
struct FRigVMFunction_MathRayIntersectPlane : FRigVMFunction_MathRayBase
{ 
	FRay                                               Ray;                                                        // 0x0008   (0x0030)  
	FVector                                            PlanePoint;                                                 // 0x0038   (0x0018)  
	FVector                                            PlaneNormal;                                                // 0x0050   (0x0018)  
	FVector                                            Result;                                                     // 0x0068   (0x0018)  
	float                                              Distance;                                                   // 0x0080   (0x0004)  
	float                                              Ratio;                                                      // 0x0084   (0x0004)  
};

/// Struct /Script/RigVM.RigVMFunction_MathRayGetAt
/// Size: 0x0050 (0x000008 - 0x000058)
struct FRigVMFunction_MathRayGetAt : FRigVMFunction_MathRayBase
{ 
	FRay                                               Ray;                                                        // 0x0008   (0x0030)  
	float                                              Ratio;                                                      // 0x0038   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x003C   (0x0004)  MISSED
	FVector                                            Result;                                                     // 0x0040   (0x0018)  
};

/// Struct /Script/RigVM.RigVMFunction_MathRayTransform
/// Size: 0x00C8 (0x000008 - 0x0000D0)
struct FRigVMFunction_MathRayTransform : FRigVMFunction_MathRayBase
{ 
	FRay                                               Ray;                                                        // 0x0008   (0x0030)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0038   (0x0008)  MISSED
	FTransform                                         Transform;                                                  // 0x0040   (0x0060)  
	FRay                                               Result;                                                     // 0x00A0   (0x0030)  
};

/// Struct /Script/RigVM.RigVMFunction_MathRBFInterpolateQuatWorkData
/// Size: 0x0090 (0x000000 - 0x000090)
struct FRigVMFunction_MathRBFInterpolateQuatWorkData
{ 
	unsigned char                                      UnknownData00_2[0x90];                                      // 0x0000   (0x0090)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_MathRBFInterpolateVectorWorkData
/// Size: 0x0090 (0x000000 - 0x000090)
struct FRigVMFunction_MathRBFInterpolateVectorWorkData
{ 
	unsigned char                                      UnknownData00_2[0x90];                                      // 0x0000   (0x0090)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_MathRBFInterpolateBase
/// Size: 0x0000 (0x000008 - 0x000008)
struct FRigVMFunction_MathRBFInterpolateBase : FRigVMFunction_MathBase
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathRBFInterpolateQuatBase
/// Size: 0x00E8 (0x000008 - 0x0000F0)
struct FRigVMFunction_MathRBFInterpolateQuatBase : FRigVMFunction_MathRBFInterpolateBase
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              Input;                                                      // 0x0010   (0x0020)  
	ERBFQuatDistanceType                               DistanceFunction;                                           // 0x0030   (0x0001)  
	ERBFKernelType                                     SmoothingFunction;                                          // 0x0031   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x0032   (0x0002)  MISSED
	float                                              SmoothingAngle;                                             // 0x0034   (0x0004)  
	bool                                               bNormalizeOutput;                                           // 0x0038   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x0039   (0x0007)  MISSED
	FVector                                            TwistAxis;                                                  // 0x0040   (0x0018)  
	unsigned char                                      UnknownData03_5[0x8];                                       // 0x0058   (0x0008)  MISSED
	FRigVMFunction_MathRBFInterpolateQuatWorkData      WorkData;                                                   // 0x0060   (0x0090)  
};

/// Struct /Script/RigVM.RigVMFunction_MathRBFInterpolateVectorBase
/// Size: 0x00B8 (0x000008 - 0x0000C0)
struct FRigVMFunction_MathRBFInterpolateVectorBase : FRigVMFunction_MathRBFInterpolateBase
{ 
	FVector                                            Input;                                                      // 0x0008   (0x0018)  
	ERBFVectorDistanceType                             DistanceFunction;                                           // 0x0020   (0x0001)  
	ERBFKernelType                                     SmoothingFunction;                                          // 0x0021   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0022   (0x0002)  MISSED
	float                                              SmoothingRadius;                                            // 0x0024   (0x0004)  
	bool                                               bNormalizeOutput;                                           // 0x0028   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0029   (0x0007)  MISSED
	FRigVMFunction_MathRBFInterpolateVectorWorkData    WorkData;                                                   // 0x0030   (0x0090)  
};

/// Struct /Script/RigVM.MathRBFInterpolateQuatFloat_Target
/// Size: 0x0030 (0x000000 - 0x000030)
struct FMathRBFInterpolateQuatFloat_Target
{ 
	FQuat                                              Target;                                                     // 0x0000   (0x0020)  
	float                                              Value;                                                      // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_6[0xC];                                       // 0x0024   (0x000C)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_MathRBFInterpolateQuatFloat
/// Size: 0x0020 (0x0000F0 - 0x000110)
struct FRigVMFunction_MathRBFInterpolateQuatFloat : FRigVMFunction_MathRBFInterpolateQuatBase
{ 
	TArray<FMathRBFInterpolateQuatFloat_Target>        Targets;                                                    // 0x00F0   (0x0010)  
	float                                              Output;                                                     // 0x0100   (0x0004)  
	unsigned char                                      UnknownData00_6[0xC];                                       // 0x0104   (0x000C)  MISSED
};

/// Struct /Script/RigVM.MathRBFInterpolateQuatVector_Target
/// Size: 0x0040 (0x000000 - 0x000040)
struct FMathRBFInterpolateQuatVector_Target
{ 
	FQuat                                              Target;                                                     // 0x0000   (0x0020)  
	FVector                                            Value;                                                      // 0x0020   (0x0018)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0038   (0x0008)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_MathRBFInterpolateQuatVector
/// Size: 0x0030 (0x0000F0 - 0x000120)
struct FRigVMFunction_MathRBFInterpolateQuatVector : FRigVMFunction_MathRBFInterpolateQuatBase
{ 
	TArray<FMathRBFInterpolateQuatVector_Target>       Targets;                                                    // 0x00F0   (0x0010)  
	FVector                                            Output;                                                     // 0x0100   (0x0018)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0118   (0x0008)  MISSED
};

/// Struct /Script/RigVM.MathRBFInterpolateQuatColor_Target
/// Size: 0x0030 (0x000000 - 0x000030)
struct FMathRBFInterpolateQuatColor_Target
{ 
	FQuat                                              Target;                                                     // 0x0000   (0x0020)  
	FLinearColor                                       Value;                                                      // 0x0020   (0x0010)  
};

/// Struct /Script/RigVM.RigVMFunction_MathRBFInterpolateQuatColor
/// Size: 0x0020 (0x0000F0 - 0x000110)
struct FRigVMFunction_MathRBFInterpolateQuatColor : FRigVMFunction_MathRBFInterpolateQuatBase
{ 
	TArray<FMathRBFInterpolateQuatColor_Target>        Targets;                                                    // 0x00F0   (0x0010)  
	FLinearColor                                       Output;                                                     // 0x0100   (0x0010)  
};

/// Struct /Script/RigVM.MathRBFInterpolateQuatQuat_Target
/// Size: 0x0040 (0x000000 - 0x000040)
struct FMathRBFInterpolateQuatQuat_Target
{ 
	FQuat                                              Target;                                                     // 0x0000   (0x0020)  
	FQuat                                              Value;                                                      // 0x0020   (0x0020)  
};

/// Struct /Script/RigVM.RigVMFunction_MathRBFInterpolateQuatQuat
/// Size: 0x0030 (0x0000F0 - 0x000120)
struct FRigVMFunction_MathRBFInterpolateQuatQuat : FRigVMFunction_MathRBFInterpolateQuatBase
{ 
	TArray<FMathRBFInterpolateQuatQuat_Target>         Targets;                                                    // 0x00F0   (0x0010)  
	FQuat                                              Output;                                                     // 0x0100   (0x0020)  
};

/// Struct /Script/RigVM.MathRBFInterpolateQuatXform_Target
/// Size: 0x0080 (0x000000 - 0x000080)
struct FMathRBFInterpolateQuatXform_Target
{ 
	FQuat                                              Target;                                                     // 0x0000   (0x0020)  
	FTransform                                         Value;                                                      // 0x0020   (0x0060)  
};

/// Struct /Script/RigVM.RigVMFunction_MathRBFInterpolateQuatXform
/// Size: 0x0070 (0x0000F0 - 0x000160)
struct FRigVMFunction_MathRBFInterpolateQuatXform : FRigVMFunction_MathRBFInterpolateQuatBase
{ 
	TArray<FMathRBFInterpolateQuatXform_Target>        Targets;                                                    // 0x00F0   (0x0010)  
	FTransform                                         Output;                                                     // 0x0100   (0x0060)  
};

/// Struct /Script/RigVM.MathRBFInterpolateVectorFloat_Target
/// Size: 0x0020 (0x000000 - 0x000020)
struct FMathRBFInterpolateVectorFloat_Target
{ 
	FVector                                            Target;                                                     // 0x0000   (0x0018)  
	float                                              Value;                                                      // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_MathRBFInterpolateVectorFloat
/// Size: 0x0020 (0x0000C0 - 0x0000E0)
struct FRigVMFunction_MathRBFInterpolateVectorFloat : FRigVMFunction_MathRBFInterpolateVectorBase
{ 
	TArray<FMathRBFInterpolateVectorFloat_Target>      Targets;                                                    // 0x00C0   (0x0010)  
	float                                              Output;                                                     // 0x00D0   (0x0004)  
	unsigned char                                      UnknownData00_6[0xC];                                       // 0x00D4   (0x000C)  MISSED
};

/// Struct /Script/RigVM.MathRBFInterpolateVectorVector_Target
/// Size: 0x0030 (0x000000 - 0x000030)
struct FMathRBFInterpolateVectorVector_Target
{ 
	FVector                                            Target;                                                     // 0x0000   (0x0018)  
	FVector                                            Value;                                                      // 0x0018   (0x0018)  
};

/// Struct /Script/RigVM.RigVMFunction_MathRBFInterpolateVectorVector
/// Size: 0x0030 (0x0000C0 - 0x0000F0)
struct FRigVMFunction_MathRBFInterpolateVectorVector : FRigVMFunction_MathRBFInterpolateVectorBase
{ 
	TArray<FMathRBFInterpolateVectorVector_Target>     Targets;                                                    // 0x00C0   (0x0010)  
	FVector                                            Output;                                                     // 0x00D0   (0x0018)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x00E8   (0x0008)  MISSED
};

/// Struct /Script/RigVM.MathRBFInterpolateVectorColor_Target
/// Size: 0x0028 (0x000000 - 0x000028)
struct FMathRBFInterpolateVectorColor_Target
{ 
	FVector                                            Target;                                                     // 0x0000   (0x0018)  
	FLinearColor                                       Value;                                                      // 0x0018   (0x0010)  
};

/// Struct /Script/RigVM.RigVMFunction_MathRBFInterpolateVectorColor
/// Size: 0x0020 (0x0000C0 - 0x0000E0)
struct FRigVMFunction_MathRBFInterpolateVectorColor : FRigVMFunction_MathRBFInterpolateVectorBase
{ 
	TArray<FMathRBFInterpolateVectorColor_Target>      Targets;                                                    // 0x00C0   (0x0010)  
	FLinearColor                                       Output;                                                     // 0x00D0   (0x0010)  
};

/// Struct /Script/RigVM.MathRBFInterpolateVectorQuat_Target
/// Size: 0x0040 (0x000000 - 0x000040)
struct FMathRBFInterpolateVectorQuat_Target
{ 
	FVector                                            Target;                                                     // 0x0000   (0x0018)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0018   (0x0008)  MISSED
	FQuat                                              Value;                                                      // 0x0020   (0x0020)  
};

/// Struct /Script/RigVM.RigVMFunction_MathRBFInterpolateVectorQuat
/// Size: 0x0030 (0x0000C0 - 0x0000F0)
struct FRigVMFunction_MathRBFInterpolateVectorQuat : FRigVMFunction_MathRBFInterpolateVectorBase
{ 
	TArray<FMathRBFInterpolateVectorQuat_Target>       Targets;                                                    // 0x00C0   (0x0010)  
	FQuat                                              Output;                                                     // 0x00D0   (0x0020)  
};

/// Struct /Script/RigVM.MathRBFInterpolateVectorXform_Target
/// Size: 0x0080 (0x000000 - 0x000080)
struct FMathRBFInterpolateVectorXform_Target
{ 
	FVector                                            Target;                                                     // 0x0000   (0x0018)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0018   (0x0008)  MISSED
	FTransform                                         Value;                                                      // 0x0020   (0x0060)  
};

/// Struct /Script/RigVM.RigVMFunction_MathRBFInterpolateVectorXform
/// Size: 0x0070 (0x0000C0 - 0x000130)
struct FRigVMFunction_MathRBFInterpolateVectorXform : FRigVMFunction_MathRBFInterpolateVectorBase
{ 
	TArray<FMathRBFInterpolateVectorXform_Target>      Targets;                                                    // 0x00C0   (0x0010)  
	FTransform                                         Output;                                                     // 0x00D0   (0x0060)  
};

/// Struct /Script/RigVM.RigVMFunction_MathTransformBase
/// Size: 0x0000 (0x000008 - 0x000008)
struct FRigVMFunction_MathTransformBase : FRigVMFunction_MathBase
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathTransformMutableBase
/// Size: 0x0000 (0x000100 - 0x000100)
struct FRigVMFunction_MathTransformMutableBase : FRigVMFunction_MathMutableBase
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathTransformUnaryOp
/// Size: 0x00C8 (0x000008 - 0x0000D0)
struct FRigVMFunction_MathTransformUnaryOp : FRigVMFunction_MathTransformBase
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         Value;                                                      // 0x0010   (0x0060)  
	FTransform                                         Result;                                                     // 0x0070   (0x0060)  
};

/// Struct /Script/RigVM.RigVMFunction_MathTransformBinaryOp
/// Size: 0x0128 (0x000008 - 0x000130)
struct FRigVMFunction_MathTransformBinaryOp : FRigVMFunction_MathTransformBase
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         A;                                                          // 0x0010   (0x0060)  
	FTransform                                         B;                                                          // 0x0070   (0x0060)  
	FTransform                                         Result;                                                     // 0x00D0   (0x0060)  
};

/// Struct /Script/RigVM.RigVMFunction_MathTransformBinaryAggregateOp
/// Size: 0x0128 (0x000008 - 0x000130)
struct FRigVMFunction_MathTransformBinaryAggregateOp : FRigVMFunction_MathTransformBase
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         A;                                                          // 0x0010   (0x0060)  
	FTransform                                         B;                                                          // 0x0070   (0x0060)  
	FTransform                                         Result;                                                     // 0x00D0   (0x0060)  
};

/// Struct /Script/RigVM.RigVMFunction_MathTransformMake
/// Size: 0x00B8 (0x000008 - 0x0000C0)
struct FRigVMFunction_MathTransformMake : FRigVMFunction_MathTransformBase
{ 
	FVector                                            Translation;                                                // 0x0008   (0x0018)  
	FQuat                                              Rotation;                                                   // 0x0020   (0x0020)  
	FVector                                            Scale;                                                      // 0x0040   (0x0018)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0058   (0x0008)  MISSED
	FTransform                                         Result;                                                     // 0x0060   (0x0060)  
};

/// Struct /Script/RigVM.RigVMFunction_MathTransformFromEulerTransform
/// Size: 0x00A8 (0x000008 - 0x0000B0)
struct FRigVMFunction_MathTransformFromEulerTransform : FRigVMFunction_MathTransformBase
{ 
	FEulerTransform                                    EulerTransform;                                             // 0x0008   (0x0048)  
	FTransform                                         Result;                                                     // 0x0050   (0x0060)  
};

/// Struct /Script/RigVM.RigVMFunction_MathTransformFromEulerTransformV2
/// Size: 0x00A8 (0x000008 - 0x0000B0)
struct FRigVMFunction_MathTransformFromEulerTransformV2 : FRigVMFunction_MathTransformBase
{ 
	FEulerTransform                                    Value;                                                      // 0x0008   (0x0048)  
	FTransform                                         Result;                                                     // 0x0050   (0x0060)  
};

/// Struct /Script/RigVM.RigVMFunction_MathTransformToEulerTransform
/// Size: 0x00B8 (0x000008 - 0x0000C0)
struct FRigVMFunction_MathTransformToEulerTransform : FRigVMFunction_MathTransformBase
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         Value;                                                      // 0x0010   (0x0060)  
	FEulerTransform                                    Result;                                                     // 0x0070   (0x0048)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x00B8   (0x0008)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_MathTransformToVectors
/// Size: 0x00B8 (0x000008 - 0x0000C0)
struct FRigVMFunction_MathTransformToVectors : FRigVMFunction_MathTransformBase
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         Value;                                                      // 0x0010   (0x0060)  
	FVector                                            Forward;                                                    // 0x0070   (0x0018)  
	FVector                                            Right;                                                      // 0x0088   (0x0018)  
	FVector                                            Up;                                                         // 0x00A0   (0x0018)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x00B8   (0x0008)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_MathTransformMul
/// Size: 0x0000 (0x000130 - 0x000130)
struct FRigVMFunction_MathTransformMul : FRigVMFunction_MathTransformBinaryAggregateOp
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathTransformMakeRelative
/// Size: 0x0128 (0x000008 - 0x000130)
struct FRigVMFunction_MathTransformMakeRelative : FRigVMFunction_MathTransformBase
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         Global;                                                     // 0x0010   (0x0060)  
	FTransform                                         Parent;                                                     // 0x0070   (0x0060)  
	FTransform                                         Local;                                                      // 0x00D0   (0x0060)  
};

/// Struct /Script/RigVM.RigVMFunction_MathTransformMakeAbsolute
/// Size: 0x0128 (0x000008 - 0x000130)
struct FRigVMFunction_MathTransformMakeAbsolute : FRigVMFunction_MathTransformBase
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         Local;                                                      // 0x0010   (0x0060)  
	FTransform                                         Parent;                                                     // 0x0070   (0x0060)  
	FTransform                                         Global;                                                     // 0x00D0   (0x0060)  
};

/// Struct /Script/RigVM.RigVMFunction_MathTransformAccumulateArray
/// Size: 0x0090 (0x000100 - 0x000190)
struct FRigVMFunction_MathTransformAccumulateArray : FRigVMFunction_MathTransformMutableBase
{ 
	TArray<FTransform>                                 Transforms;                                                 // 0x0100   (0x0010)  
	ERigVMTransformSpace                               TargetSpace;                                                // 0x0110   (0x0001)  
	unsigned char                                      UnknownData00_5[0xF];                                       // 0x0111   (0x000F)  MISSED
	FTransform                                         Root;                                                       // 0x0120   (0x0060)  
	TArray<int32_t>                                    ParentIndices;                                              // 0x0180   (0x0010)  
};

/// Struct /Script/RigVM.RigVMFunction_MathTransformInverse
/// Size: 0x0000 (0x0000D0 - 0x0000D0)
struct FRigVMFunction_MathTransformInverse : FRigVMFunction_MathTransformUnaryOp
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathTransformLerp
/// Size: 0x0138 (0x000008 - 0x000140)
struct FRigVMFunction_MathTransformLerp : FRigVMFunction_MathTransformBase
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         A;                                                          // 0x0010   (0x0060)  
	FTransform                                         B;                                                          // 0x0070   (0x0060)  
	float                                              T;                                                          // 0x00D0   (0x0004)  
	unsigned char                                      UnknownData01_5[0xC];                                       // 0x00D4   (0x000C)  MISSED
	FTransform                                         Result;                                                     // 0x00E0   (0x0060)  
};

/// Struct /Script/RigVM.RigVMFunction_MathTransformSelectBool
/// Size: 0x0128 (0x000008 - 0x000130)
struct FRigVMFunction_MathTransformSelectBool : FRigVMFunction_MathTransformBase
{ 
	bool                                               Condition;                                                  // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0009   (0x0007)  MISSED
	FTransform                                         IfTrue;                                                     // 0x0010   (0x0060)  
	FTransform                                         IfFalse;                                                    // 0x0070   (0x0060)  
	FTransform                                         Result;                                                     // 0x00D0   (0x0060)  
};

/// Struct /Script/RigVM.RigVMFunction_MathTransformRotateVector
/// Size: 0x0098 (0x000008 - 0x0000A0)
struct FRigVMFunction_MathTransformRotateVector : FRigVMFunction_MathTransformBase
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         Transform;                                                  // 0x0010   (0x0060)  
	FVector                                            Vector;                                                     // 0x0070   (0x0018)  
	FVector                                            Result;                                                     // 0x0088   (0x0018)  
};

/// Struct /Script/RigVM.RigVMFunction_MathTransformTransformVector
/// Size: 0x0098 (0x000008 - 0x0000A0)
struct FRigVMFunction_MathTransformTransformVector : FRigVMFunction_MathTransformBase
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         Transform;                                                  // 0x0010   (0x0060)  
	FVector                                            Location;                                                   // 0x0070   (0x0018)  
	FVector                                            Result;                                                     // 0x0088   (0x0018)  
};

/// Struct /Script/RigVM.RigVMFunction_MathTransformFromSRT
/// Size: 0x0108 (0x000008 - 0x000110)
struct FRigVMFunction_MathTransformFromSRT : FRigVMFunction_MathTransformBase
{ 
	FVector                                            Location;                                                   // 0x0008   (0x0018)  
	FVector                                            Rotation;                                                   // 0x0020   (0x0018)  
	EEulerRotationOrder                                RotationOrder;                                              // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0039   (0x0007)  MISSED
	FVector                                            Scale;                                                      // 0x0040   (0x0018)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x0058   (0x0008)  MISSED
	FTransform                                         Transform;                                                  // 0x0060   (0x0060)  
	FEulerTransform                                    EulerTransform;                                             // 0x00C0   (0x0048)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x0108   (0x0008)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_MathTransformArrayToSRT
/// Size: 0x0040 (0x000008 - 0x000048)
struct FRigVMFunction_MathTransformArrayToSRT : FRigVMFunction_MathTransformBase
{ 
	TArray<FTransform>                                 Transforms;                                                 // 0x0008   (0x0010)  
	TArray<FVector>                                    Translations;                                               // 0x0018   (0x0010)  
	TArray<FQuat>                                      Rotations;                                                  // 0x0028   (0x0010)  
	TArray<FVector>                                    Scales;                                                     // 0x0038   (0x0010)  
};

/// Struct /Script/RigVM.RigVMFunction_MathTransformClampSpatially
/// Size: 0x0158 (0x000008 - 0x000160)
struct FRigVMFunction_MathTransformClampSpatially : FRigVMFunction_MathTransformBase
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         Value;                                                      // 0x0010   (0x0060)  
	SDK_UNDEFINED(1,1666) /* TEnumAsByte<EAxis> */     __um(Axis);                                                 // 0x0070   (0x0001)  
	SDK_UNDEFINED(1,1667) /* TEnumAsByte<ERigVMClampSpatialMode> */ __um(Type);                                    // 0x0071   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x0072   (0x0002)  MISSED
	float                                              Minimum;                                                    // 0x0074   (0x0004)  
	float                                              Maximum;                                                    // 0x0078   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x007C   (0x0004)  MISSED
	FTransform                                         Space;                                                      // 0x0080   (0x0060)  
	bool                                               bDrawDebug;                                                 // 0x00E0   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x00E1   (0x0003)  MISSED
	FLinearColor                                       DebugColor;                                                 // 0x00E4   (0x0010)  
	float                                              DebugThickness;                                             // 0x00F4   (0x0004)  
	unsigned char                                      UnknownData04_5[0x8];                                       // 0x00F8   (0x0008)  MISSED
	FTransform                                         Result;                                                     // 0x0100   (0x0060)  
};

/// Struct /Script/RigVM.RigVMFunction_MathTransformMirrorTransform
/// Size: 0x0138 (0x000008 - 0x000140)
struct FRigVMFunction_MathTransformMirrorTransform : FRigVMFunction_MathTransformBase
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         Value;                                                      // 0x0010   (0x0060)  
	SDK_UNDEFINED(1,1668) /* TEnumAsByte<EAxis> */     __um(MirrorAxis);                                           // 0x0070   (0x0001)  
	SDK_UNDEFINED(1,1669) /* TEnumAsByte<EAxis> */     __um(AxisToFlip);                                           // 0x0071   (0x0001)  
	unsigned char                                      UnknownData01_5[0xE];                                       // 0x0072   (0x000E)  MISSED
	FTransform                                         CentralTransform;                                           // 0x0080   (0x0060)  
	FTransform                                         Result;                                                     // 0x00E0   (0x0060)  
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorBase
/// Size: 0x0000 (0x000008 - 0x000008)
struct FRigVMFunction_MathVectorBase : FRigVMFunction_MathBase
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorUnaryOp
/// Size: 0x0030 (0x000008 - 0x000038)
struct FRigVMFunction_MathVectorUnaryOp : FRigVMFunction_MathVectorBase
{ 
	FVector                                            Value;                                                      // 0x0008   (0x0018)  
	FVector                                            Result;                                                     // 0x0020   (0x0018)  
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorBinaryOp
/// Size: 0x0048 (0x000008 - 0x000050)
struct FRigVMFunction_MathVectorBinaryOp : FRigVMFunction_MathVectorBase
{ 
	FVector                                            A;                                                          // 0x0008   (0x0018)  
	FVector                                            B;                                                          // 0x0020   (0x0018)  
	FVector                                            Result;                                                     // 0x0038   (0x0018)  
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorBinaryAggregateOp
/// Size: 0x0048 (0x000008 - 0x000050)
struct FRigVMFunction_MathVectorBinaryAggregateOp : FRigVMFunction_MathVectorBase
{ 
	FVector                                            A;                                                          // 0x0008   (0x0018)  
	FVector                                            B;                                                          // 0x0020   (0x0018)  
	FVector                                            Result;                                                     // 0x0038   (0x0018)  
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorMake
/// Size: 0x0028 (0x000008 - 0x000030)
struct FRigVMFunction_MathVectorMake : FRigVMFunction_MathVectorBase
{ 
	float                                              X;                                                          // 0x0008   (0x0004)  
	float                                              Y;                                                          // 0x000C   (0x0004)  
	float                                              Z;                                                          // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0014   (0x0004)  MISSED
	FVector                                            Result;                                                     // 0x0018   (0x0018)  
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorFromFloat
/// Size: 0x0020 (0x000008 - 0x000028)
struct FRigVMFunction_MathVectorFromFloat : FRigVMFunction_MathVectorBase
{ 
	float                                              Value;                                                      // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	FVector                                            Result;                                                     // 0x0010   (0x0018)  
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorFromDouble
/// Size: 0x0020 (0x000008 - 0x000028)
struct FRigVMFunction_MathVectorFromDouble : FRigVMFunction_MathVectorBase
{ 
	double                                             Value;                                                      // 0x0008   (0x0008)  
	FVector                                            Result;                                                     // 0x0010   (0x0018)  
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorAdd
/// Size: 0x0000 (0x000050 - 0x000050)
struct FRigVMFunction_MathVectorAdd : FRigVMFunction_MathVectorBinaryAggregateOp
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorSub
/// Size: 0x0000 (0x000050 - 0x000050)
struct FRigVMFunction_MathVectorSub : FRigVMFunction_MathVectorBinaryOp
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorMul
/// Size: 0x0000 (0x000050 - 0x000050)
struct FRigVMFunction_MathVectorMul : FRigVMFunction_MathVectorBinaryAggregateOp
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorScale
/// Size: 0x0038 (0x000008 - 0x000040)
struct FRigVMFunction_MathVectorScale : FRigVMFunction_MathVectorBase
{ 
	FVector                                            Value;                                                      // 0x0008   (0x0018)  
	float                                              Factor;                                                     // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0024   (0x0004)  MISSED
	FVector                                            Result;                                                     // 0x0028   (0x0018)  
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorDiv
/// Size: 0x0000 (0x000050 - 0x000050)
struct FRigVMFunction_MathVectorDiv : FRigVMFunction_MathVectorBinaryOp
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorMod
/// Size: 0x0000 (0x000050 - 0x000050)
struct FRigVMFunction_MathVectorMod : FRigVMFunction_MathVectorBinaryOp
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorMin
/// Size: 0x0000 (0x000050 - 0x000050)
struct FRigVMFunction_MathVectorMin : FRigVMFunction_MathVectorBinaryAggregateOp
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorMax
/// Size: 0x0000 (0x000050 - 0x000050)
struct FRigVMFunction_MathVectorMax : FRigVMFunction_MathVectorBinaryAggregateOp
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorNegate
/// Size: 0x0000 (0x000038 - 0x000038)
struct FRigVMFunction_MathVectorNegate : FRigVMFunction_MathVectorUnaryOp
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorAbs
/// Size: 0x0000 (0x000038 - 0x000038)
struct FRigVMFunction_MathVectorAbs : FRigVMFunction_MathVectorUnaryOp
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorFloor
/// Size: 0x0000 (0x000038 - 0x000038)
struct FRigVMFunction_MathVectorFloor : FRigVMFunction_MathVectorUnaryOp
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorCeil
/// Size: 0x0000 (0x000038 - 0x000038)
struct FRigVMFunction_MathVectorCeil : FRigVMFunction_MathVectorUnaryOp
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorRound
/// Size: 0x0000 (0x000038 - 0x000038)
struct FRigVMFunction_MathVectorRound : FRigVMFunction_MathVectorUnaryOp
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorSign
/// Size: 0x0000 (0x000038 - 0x000038)
struct FRigVMFunction_MathVectorSign : FRigVMFunction_MathVectorUnaryOp
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorClamp
/// Size: 0x0060 (0x000008 - 0x000068)
struct FRigVMFunction_MathVectorClamp : FRigVMFunction_MathVectorBase
{ 
	FVector                                            Value;                                                      // 0x0008   (0x0018)  
	FVector                                            Minimum;                                                    // 0x0020   (0x0018)  
	FVector                                            Maximum;                                                    // 0x0038   (0x0018)  
	FVector                                            Result;                                                     // 0x0050   (0x0018)  
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorLerp
/// Size: 0x0050 (0x000008 - 0x000058)
struct FRigVMFunction_MathVectorLerp : FRigVMFunction_MathVectorBase
{ 
	FVector                                            A;                                                          // 0x0008   (0x0018)  
	FVector                                            B;                                                          // 0x0020   (0x0018)  
	float                                              T;                                                          // 0x0038   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x003C   (0x0004)  MISSED
	FVector                                            Result;                                                     // 0x0040   (0x0018)  
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorRemap
/// Size: 0x0098 (0x000008 - 0x0000A0)
struct FRigVMFunction_MathVectorRemap : FRigVMFunction_MathVectorBase
{ 
	FVector                                            Value;                                                      // 0x0008   (0x0018)  
	FVector                                            SourceMinimum;                                              // 0x0020   (0x0018)  
	FVector                                            SourceMaximum;                                              // 0x0038   (0x0018)  
	FVector                                            TargetMinimum;                                              // 0x0050   (0x0018)  
	FVector                                            TargetMaximum;                                              // 0x0068   (0x0018)  
	bool                                               bClamp;                                                     // 0x0080   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0081   (0x0007)  MISSED
	FVector                                            Result;                                                     // 0x0088   (0x0018)  
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorEquals
/// Size: 0x0038 (0x000008 - 0x000040)
struct FRigVMFunction_MathVectorEquals : FRigVMFunction_MathVectorBase
{ 
	FVector                                            A;                                                          // 0x0008   (0x0018)  
	FVector                                            B;                                                          // 0x0020   (0x0018)  
	bool                                               Result;                                                     // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0039   (0x0007)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorNotEquals
/// Size: 0x0038 (0x000008 - 0x000040)
struct FRigVMFunction_MathVectorNotEquals : FRigVMFunction_MathVectorBase
{ 
	FVector                                            A;                                                          // 0x0008   (0x0018)  
	FVector                                            B;                                                          // 0x0020   (0x0018)  
	bool                                               Result;                                                     // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0039   (0x0007)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorIsNearlyZero
/// Size: 0x0020 (0x000008 - 0x000028)
struct FRigVMFunction_MathVectorIsNearlyZero : FRigVMFunction_MathVectorBase
{ 
	FVector                                            Value;                                                      // 0x0008   (0x0018)  
	float                                              Tolerance;                                                  // 0x0020   (0x0004)  
	bool                                               Result;                                                     // 0x0024   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0025   (0x0003)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorIsNearlyEqual
/// Size: 0x0038 (0x000008 - 0x000040)
struct FRigVMFunction_MathVectorIsNearlyEqual : FRigVMFunction_MathVectorBase
{ 
	FVector                                            A;                                                          // 0x0008   (0x0018)  
	FVector                                            B;                                                          // 0x0020   (0x0018)  
	float                                              Tolerance;                                                  // 0x0038   (0x0004)  
	bool                                               Result;                                                     // 0x003C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x003D   (0x0003)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorSelectBool
/// Size: 0x0050 (0x000008 - 0x000058)
struct FRigVMFunction_MathVectorSelectBool : FRigVMFunction_MathVectorBase
{ 
	bool                                               Condition;                                                  // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0009   (0x0007)  MISSED
	FVector                                            IfTrue;                                                     // 0x0010   (0x0018)  
	FVector                                            IfFalse;                                                    // 0x0028   (0x0018)  
	FVector                                            Result;                                                     // 0x0040   (0x0018)  
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorDeg
/// Size: 0x0000 (0x000038 - 0x000038)
struct FRigVMFunction_MathVectorDeg : FRigVMFunction_MathVectorUnaryOp
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorRad
/// Size: 0x0000 (0x000038 - 0x000038)
struct FRigVMFunction_MathVectorRad : FRigVMFunction_MathVectorUnaryOp
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorLengthSquared
/// Size: 0x0020 (0x000008 - 0x000028)
struct FRigVMFunction_MathVectorLengthSquared : FRigVMFunction_MathVectorBase
{ 
	FVector                                            Value;                                                      // 0x0008   (0x0018)  
	float                                              Result;                                                     // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorLength
/// Size: 0x0020 (0x000008 - 0x000028)
struct FRigVMFunction_MathVectorLength : FRigVMFunction_MathVectorBase
{ 
	FVector                                            Value;                                                      // 0x0008   (0x0018)  
	float                                              Result;                                                     // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorDistance
/// Size: 0x0038 (0x000008 - 0x000040)
struct FRigVMFunction_MathVectorDistance : FRigVMFunction_MathVectorBase
{ 
	FVector                                            A;                                                          // 0x0008   (0x0018)  
	FVector                                            B;                                                          // 0x0020   (0x0018)  
	float                                              Result;                                                     // 0x0038   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x003C   (0x0004)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorCross
/// Size: 0x0000 (0x000050 - 0x000050)
struct FRigVMFunction_MathVectorCross : FRigVMFunction_MathVectorBinaryOp
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorDot
/// Size: 0x0038 (0x000008 - 0x000040)
struct FRigVMFunction_MathVectorDot : FRigVMFunction_MathVectorBase
{ 
	FVector                                            A;                                                          // 0x0008   (0x0018)  
	FVector                                            B;                                                          // 0x0020   (0x0018)  
	float                                              Result;                                                     // 0x0038   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x003C   (0x0004)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorUnit
/// Size: 0x0000 (0x000038 - 0x000038)
struct FRigVMFunction_MathVectorUnit : FRigVMFunction_MathVectorUnaryOp
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorSetLength
/// Size: 0x0038 (0x000008 - 0x000040)
struct FRigVMFunction_MathVectorSetLength : FRigVMFunction_MathVectorBase
{ 
	FVector                                            Value;                                                      // 0x0008   (0x0018)  
	float                                              Length;                                                     // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0024   (0x0004)  MISSED
	FVector                                            Result;                                                     // 0x0028   (0x0018)  
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorClampLength
/// Size: 0x0038 (0x000008 - 0x000040)
struct FRigVMFunction_MathVectorClampLength : FRigVMFunction_MathVectorBase
{ 
	FVector                                            Value;                                                      // 0x0008   (0x0018)  
	float                                              MinimumLength;                                              // 0x0020   (0x0004)  
	float                                              MaximumLength;                                              // 0x0024   (0x0004)  
	FVector                                            Result;                                                     // 0x0028   (0x0018)  
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorMirror
/// Size: 0x0048 (0x000008 - 0x000050)
struct FRigVMFunction_MathVectorMirror : FRigVMFunction_MathVectorBase
{ 
	FVector                                            Value;                                                      // 0x0008   (0x0018)  
	FVector                                            Normal;                                                     // 0x0020   (0x0018)  
	FVector                                            Result;                                                     // 0x0038   (0x0018)  
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorAngle
/// Size: 0x0038 (0x000008 - 0x000040)
struct FRigVMFunction_MathVectorAngle : FRigVMFunction_MathVectorBase
{ 
	FVector                                            A;                                                          // 0x0008   (0x0018)  
	FVector                                            B;                                                          // 0x0020   (0x0018)  
	float                                              Result;                                                     // 0x0038   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x003C   (0x0004)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorParallel
/// Size: 0x0038 (0x000008 - 0x000040)
struct FRigVMFunction_MathVectorParallel : FRigVMFunction_MathVectorBase
{ 
	FVector                                            A;                                                          // 0x0008   (0x0018)  
	FVector                                            B;                                                          // 0x0020   (0x0018)  
	bool                                               Result;                                                     // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0039   (0x0007)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorOrthogonal
/// Size: 0x0038 (0x000008 - 0x000040)
struct FRigVMFunction_MathVectorOrthogonal : FRigVMFunction_MathVectorBase
{ 
	FVector                                            A;                                                          // 0x0008   (0x0018)  
	FVector                                            B;                                                          // 0x0020   (0x0018)  
	bool                                               Result;                                                     // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0039   (0x0007)  MISSED
};

/// Struct /Script/RigVM.RigVMFourPointBezier
/// Size: 0x0060 (0x000000 - 0x000060)
struct FRigVMFourPointBezier
{ 
	FVector                                            A;                                                          // 0x0000   (0x0018)  
	FVector                                            B;                                                          // 0x0018   (0x0018)  
	FVector                                            C;                                                          // 0x0030   (0x0018)  
	FVector                                            D;                                                          // 0x0048   (0x0018)  
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorBezierFourPoint
/// Size: 0x0098 (0x000008 - 0x0000A0)
struct FRigVMFunction_MathVectorBezierFourPoint : FRigVMFunction_MathVectorBase
{ 
	FRigVMFourPointBezier                              Bezier;                                                     // 0x0008   (0x0060)  
	float                                              T;                                                          // 0x0068   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x006C   (0x0004)  MISSED
	FVector                                            Result;                                                     // 0x0070   (0x0018)  
	FVector                                            Tangent;                                                    // 0x0088   (0x0018)  
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorMakeBezierFourPoint
/// Size: 0x0060 (0x000008 - 0x000068)
struct FRigVMFunction_MathVectorMakeBezierFourPoint : FRigVMFunction_MathVectorBase
{ 
	FRigVMFourPointBezier                              Bezier;                                                     // 0x0008   (0x0060)  
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorClampSpatially
/// Size: 0x00B8 (0x000008 - 0x0000C0)
struct FRigVMFunction_MathVectorClampSpatially : FRigVMFunction_MathVectorBase
{ 
	FVector                                            Value;                                                      // 0x0008   (0x0018)  
	SDK_UNDEFINED(1,1670) /* TEnumAsByte<EAxis> */     __um(Axis);                                                 // 0x0020   (0x0001)  
	SDK_UNDEFINED(1,1671) /* TEnumAsByte<ERigVMClampSpatialMode> */ __um(Type);                                    // 0x0021   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0022   (0x0002)  MISSED
	float                                              Minimum;                                                    // 0x0024   (0x0004)  
	float                                              Maximum;                                                    // 0x0028   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x002C   (0x0004)  MISSED
	FTransform                                         Space;                                                      // 0x0030   (0x0060)  
	bool                                               bDrawDebug;                                                 // 0x0090   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0091   (0x0003)  MISSED
	FLinearColor                                       DebugColor;                                                 // 0x0094   (0x0010)  
	float                                              DebugThickness;                                             // 0x00A4   (0x0004)  
	FVector                                            Result;                                                     // 0x00A8   (0x0018)  
};

/// Struct /Script/RigVM.RigVMFunction_MathIntersectPlane
/// Size: 0x0080 (0x000008 - 0x000088)
struct FRigVMFunction_MathIntersectPlane : FRigVMFunction_MathVectorBase
{ 
	FVector                                            Start;                                                      // 0x0008   (0x0018)  
	FVector                                            Direction;                                                  // 0x0020   (0x0018)  
	FVector                                            PlanePoint;                                                 // 0x0038   (0x0018)  
	FVector                                            PlaneNormal;                                                // 0x0050   (0x0018)  
	FVector                                            Result;                                                     // 0x0068   (0x0018)  
	float                                              Distance;                                                   // 0x0080   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0084   (0x0004)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_MathDistanceToPlane
/// Size: 0x0068 (0x000008 - 0x000070)
struct FRigVMFunction_MathDistanceToPlane : FRigVMFunction_MathVectorBase
{ 
	FVector                                            Point;                                                      // 0x0008   (0x0018)  
	FVector                                            PlanePoint;                                                 // 0x0020   (0x0018)  
	FVector                                            PlaneNormal;                                                // 0x0038   (0x0018)  
	FVector                                            ClosestPointOnPlane;                                        // 0x0050   (0x0018)  
	float                                              SignedDistance;                                             // 0x0068   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x006C   (0x0004)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorMakeRelative
/// Size: 0x0048 (0x000008 - 0x000050)
struct FRigVMFunction_MathVectorMakeRelative : FRigVMFunction_MathVectorBase
{ 
	FVector                                            Global;                                                     // 0x0008   (0x0018)  
	FVector                                            Parent;                                                     // 0x0020   (0x0018)  
	FVector                                            Local;                                                      // 0x0038   (0x0018)  
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorMakeAbsolute
/// Size: 0x0048 (0x000008 - 0x000050)
struct FRigVMFunction_MathVectorMakeAbsolute : FRigVMFunction_MathVectorBase
{ 
	FVector                                            Local;                                                      // 0x0008   (0x0018)  
	FVector                                            Parent;                                                     // 0x0020   (0x0018)  
	FVector                                            Global;                                                     // 0x0038   (0x0018)  
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorMirrorTransform
/// Size: 0x00A8 (0x000008 - 0x0000B0)
struct FRigVMFunction_MathVectorMirrorTransform : FRigVMFunction_MathVectorBase
{ 
	FVector                                            Value;                                                      // 0x0008   (0x0018)  
	SDK_UNDEFINED(1,1672) /* TEnumAsByte<EAxis> */     __um(MirrorAxis);                                           // 0x0020   (0x0001)  
	SDK_UNDEFINED(1,1673) /* TEnumAsByte<EAxis> */     __um(AxisToFlip);                                           // 0x0021   (0x0001)  
	unsigned char                                      UnknownData00_5[0xE];                                       // 0x0022   (0x000E)  MISSED
	FTransform                                         CentralTransform;                                           // 0x0030   (0x0060)  
	FVector                                            Result;                                                     // 0x0090   (0x0018)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x00A8   (0x0008)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorArraySum
/// Size: 0x0028 (0x000008 - 0x000030)
struct FRigVMFunction_MathVectorArraySum : FRigVMFunction_MathVectorBase
{ 
	TArray<FVector>                                    Array;                                                      // 0x0008   (0x0010)  
	FVector                                            Sum;                                                        // 0x0018   (0x0018)  
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorArrayAverage
/// Size: 0x0028 (0x000008 - 0x000030)
struct FRigVMFunction_MathVectorArrayAverage : FRigVMFunction_MathVectorBase
{ 
	TArray<FVector>                                    Array;                                                      // 0x0008   (0x0010)  
	FVector                                            Average;                                                    // 0x0018   (0x0018)  
};

/// Struct /Script/RigVM.RigVMFunction_NoiseFloat
/// Size: 0x0020 (0x000008 - 0x000028)
struct FRigVMFunction_NoiseFloat : FRigVMFunction_MathBase
{ 
	float                                              Value;                                                      // 0x0008   (0x0004)  
	float                                              Speed;                                                      // 0x000C   (0x0004)  
	float                                              Frequency;                                                  // 0x0010   (0x0004)  
	float                                              Minimum;                                                    // 0x0014   (0x0004)  
	float                                              Maximum;                                                    // 0x0018   (0x0004)  
	float                                              Result;                                                     // 0x001C   (0x0004)  
	float                                              Time;                                                       // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_NoiseDouble
/// Size: 0x0038 (0x000008 - 0x000040)
struct FRigVMFunction_NoiseDouble : FRigVMFunction_MathBase
{ 
	double                                             Value;                                                      // 0x0008   (0x0008)  
	double                                             Speed;                                                      // 0x0010   (0x0008)  
	double                                             Frequency;                                                  // 0x0018   (0x0008)  
	double                                             Minimum;                                                    // 0x0020   (0x0008)  
	double                                             Maximum;                                                    // 0x0028   (0x0008)  
	double                                             Result;                                                     // 0x0030   (0x0008)  
	double                                             Time;                                                       // 0x0038   (0x0008)  
};

/// Struct /Script/RigVM.RigVMFunction_NoiseVector
/// Size: 0x0080 (0x000008 - 0x000088)
struct FRigVMFunction_NoiseVector : FRigVMFunction_MathBase
{ 
	FVector                                            Position;                                                   // 0x0008   (0x0018)  
	FVector                                            Speed;                                                      // 0x0020   (0x0018)  
	FVector                                            Frequency;                                                  // 0x0038   (0x0018)  
	float                                              Minimum;                                                    // 0x0050   (0x0004)  
	float                                              Maximum;                                                    // 0x0054   (0x0004)  
	FVector                                            Result;                                                     // 0x0058   (0x0018)  
	FVector                                            Time;                                                       // 0x0070   (0x0018)  
};

/// Struct /Script/RigVM.RigVMFunction_NoiseVector2
/// Size: 0x0088 (0x000008 - 0x000090)
struct FRigVMFunction_NoiseVector2 : FRigVMFunction_MathBase
{ 
	FVector                                            Value;                                                      // 0x0008   (0x0018)  
	FVector                                            Speed;                                                      // 0x0020   (0x0018)  
	FVector                                            Frequency;                                                  // 0x0038   (0x0018)  
	double                                             Minimum;                                                    // 0x0050   (0x0008)  
	double                                             Maximum;                                                    // 0x0058   (0x0008)  
	FVector                                            Result;                                                     // 0x0060   (0x0018)  
	FVector                                            Time;                                                       // 0x0078   (0x0018)  
};

/// Struct /Script/RigVM.RigVMFunction_RandomFloat
/// Size: 0x0028 (0x000008 - 0x000030)
struct FRigVMFunction_RandomFloat : FRigVMFunction_MathBase
{ 
	int32_t                                            Seed;                                                       // 0x0008   (0x0004)  
	float                                              Minimum;                                                    // 0x000C   (0x0004)  
	float                                              Maximum;                                                    // 0x0010   (0x0004)  
	float                                              duration;                                                   // 0x0014   (0x0004)  
	float                                              Result;                                                     // 0x0018   (0x0004)  
	float                                              LastResult;                                                 // 0x001C   (0x0004)  
	int32_t                                            LastSeed;                                                   // 0x0020   (0x0004)  
	int32_t                                            BaseSeed;                                                   // 0x0024   (0x0004)  
	float                                              TimeLeft;                                                   // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x002C   (0x0004)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_RandomVector
/// Size: 0x0050 (0x000008 - 0x000058)
struct FRigVMFunction_RandomVector : FRigVMFunction_MathBase
{ 
	int32_t                                            Seed;                                                       // 0x0008   (0x0004)  
	float                                              Minimum;                                                    // 0x000C   (0x0004)  
	float                                              Maximum;                                                    // 0x0010   (0x0004)  
	float                                              duration;                                                   // 0x0014   (0x0004)  
	FVector                                            Result;                                                     // 0x0018   (0x0018)  
	FVector                                            LastResult;                                                 // 0x0030   (0x0018)  
	int32_t                                            LastSeed;                                                   // 0x0048   (0x0004)  
	int32_t                                            BaseSeed;                                                   // 0x004C   (0x0004)  
	float                                              TimeLeft;                                                   // 0x0050   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0054   (0x0004)  MISSED
};

/// Struct /Script/RigVM.RigVMMirrorSettings
/// Size: 0x0028 (0x000000 - 0x000028)
struct FRigVMMirrorSettings
{ 
	SDK_UNDEFINED(1,1674) /* TEnumAsByte<EAxis> */     __um(MirrorAxis);                                           // 0x0000   (0x0001)  
	SDK_UNDEFINED(1,1675) /* TEnumAsByte<EAxis> */     __um(AxisToFlip);                                           // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x0002   (0x0006)  MISSED
	SDK_UNDEFINED(16,1676) /* FString */               __um(SearchString);                                         // 0x0008   (0x0010)  
	SDK_UNDEFINED(16,1677) /* FString */               __um(ReplaceString);                                        // 0x0018   (0x0010)  
};

/// Struct /Script/RigVM.RigVMSimPoint
/// Size: 0x0040 (0x000000 - 0x000040)
struct FRigVMSimPoint
{ 
	float                                              Mass;                                                       // 0x0000   (0x0004)  
	float                                              Size;                                                       // 0x0004   (0x0004)  
	float                                              LinearDamping;                                              // 0x0008   (0x0004)  
	float                                              InheritMotion;                                              // 0x000C   (0x0004)  
	FVector                                            Position;                                                   // 0x0010   (0x0018)  
	FVector                                            LinearVelocity;                                             // 0x0028   (0x0018)  
};

/// Struct /Script/RigVM.RigVMDispatch_CoreBase
/// Size: 0x0000 (0x000070 - 0x000070)
struct FRigVMDispatch_CoreBase : FRigVMDispatchFactory
{ 
};

/// Struct /Script/RigVM.RigVMDispatch_ArrayBase
/// Size: 0x0000 (0x000070 - 0x000070)
struct FRigVMDispatch_ArrayBase : FRigVMDispatch_CoreBase
{ 
};

/// Struct /Script/RigVM.RigVMDispatch_ArrayBaseMutable
/// Size: 0x0000 (0x000070 - 0x000070)
struct FRigVMDispatch_ArrayBaseMutable : FRigVMDispatch_ArrayBase
{ 
};

/// Struct /Script/RigVM.RigVMDispatch_ArrayMake
/// Size: 0x0000 (0x000070 - 0x000070)
struct FRigVMDispatch_ArrayMake : FRigVMDispatch_ArrayBase
{ 
};

/// Struct /Script/RigVM.RigVMDispatch_ArrayReset
/// Size: 0x0000 (0x000070 - 0x000070)
struct FRigVMDispatch_ArrayReset : FRigVMDispatch_ArrayBaseMutable
{ 
};

/// Struct /Script/RigVM.RigVMDispatch_ArrayGetNum
/// Size: 0x0000 (0x000070 - 0x000070)
struct FRigVMDispatch_ArrayGetNum : FRigVMDispatch_ArrayBase
{ 
};

/// Struct /Script/RigVM.RigVMDispatch_ArraySetNum
/// Size: 0x0000 (0x000070 - 0x000070)
struct FRigVMDispatch_ArraySetNum : FRigVMDispatch_ArrayBaseMutable
{ 
};

/// Struct /Script/RigVM.RigVMDispatch_ArrayGetAtIndex
/// Size: 0x0000 (0x000070 - 0x000070)
struct FRigVMDispatch_ArrayGetAtIndex : FRigVMDispatch_ArrayBase
{ 
};

/// Struct /Script/RigVM.RigVMDispatch_ArraySetAtIndex
/// Size: 0x0000 (0x000070 - 0x000070)
struct FRigVMDispatch_ArraySetAtIndex : FRigVMDispatch_ArrayBaseMutable
{ 
};

/// Struct /Script/RigVM.RigVMDispatch_ArrayAdd
/// Size: 0x0000 (0x000070 - 0x000070)
struct FRigVMDispatch_ArrayAdd : FRigVMDispatch_ArraySetAtIndex
{ 
};

/// Struct /Script/RigVM.RigVMDispatch_ArrayInsert
/// Size: 0x0000 (0x000070 - 0x000070)
struct FRigVMDispatch_ArrayInsert : FRigVMDispatch_ArraySetAtIndex
{ 
};

/// Struct /Script/RigVM.RigVMDispatch_ArrayRemove
/// Size: 0x0000 (0x000070 - 0x000070)
struct FRigVMDispatch_ArrayRemove : FRigVMDispatch_ArrayBaseMutable
{ 
};

/// Struct /Script/RigVM.RigVMDispatch_ArrayReverse
/// Size: 0x0000 (0x000070 - 0x000070)
struct FRigVMDispatch_ArrayReverse : FRigVMDispatch_ArrayReset
{ 
};

/// Struct /Script/RigVM.RigVMDispatch_ArrayFind
/// Size: 0x0000 (0x000070 - 0x000070)
struct FRigVMDispatch_ArrayFind : FRigVMDispatch_ArrayBase
{ 
};

/// Struct /Script/RigVM.RigVMDispatch_ArrayAppend
/// Size: 0x0000 (0x000070 - 0x000070)
struct FRigVMDispatch_ArrayAppend : FRigVMDispatch_ArrayBaseMutable
{ 
};

/// Struct /Script/RigVM.RigVMDispatch_ArrayClone
/// Size: 0x0000 (0x000070 - 0x000070)
struct FRigVMDispatch_ArrayClone : FRigVMDispatch_ArrayBase
{ 
};

/// Struct /Script/RigVM.RigVMDispatch_ArrayUnion
/// Size: 0x0000 (0x000070 - 0x000070)
struct FRigVMDispatch_ArrayUnion : FRigVMDispatch_ArrayAppend
{ 
};

/// Struct /Script/RigVM.RigVMDispatch_ArrayDifference
/// Size: 0x0000 (0x000070 - 0x000070)
struct FRigVMDispatch_ArrayDifference : FRigVMDispatch_ArrayBase
{ 
};

/// Struct /Script/RigVM.RigVMDispatch_ArrayIntersection
/// Size: 0x0000 (0x000070 - 0x000070)
struct FRigVMDispatch_ArrayIntersection : FRigVMDispatch_ArrayDifference
{ 
};

/// Struct /Script/RigVM.RigVMDispatch_ArrayIterator
/// Size: 0x0000 (0x000070 - 0x000070)
struct FRigVMDispatch_ArrayIterator : FRigVMDispatch_ArrayBaseMutable
{ 
};

/// Struct /Script/RigVM.RigVMDispatch_Constant
/// Size: 0x0000 (0x000070 - 0x000070)
struct FRigVMDispatch_Constant : FRigVMDispatch_CoreBase
{ 
};

/// Struct /Script/RigVM.RigVMDispatch_CoreEquals
/// Size: 0x0000 (0x000070 - 0x000070)
struct FRigVMDispatch_CoreEquals : FRigVMDispatch_CoreBase
{ 
};

/// Struct /Script/RigVM.RigVMDispatch_CoreNotEquals
/// Size: 0x0000 (0x000070 - 0x000070)
struct FRigVMDispatch_CoreNotEquals : FRigVMDispatch_CoreEquals
{ 
};

/// Struct /Script/RigVM.RigVMDispatch_If
/// Size: 0x0000 (0x000070 - 0x000070)
struct FRigVMDispatch_If : FRigVMDispatch_CoreBase
{ 
};

/// Struct /Script/RigVM.RigVMDispatch_MakeStruct
/// Size: 0x0000 (0x000070 - 0x000070)
struct FRigVMDispatch_MakeStruct : FRigVMDispatch_CoreBase
{ 
};

/// Struct /Script/RigVM.RigVMDispatch_BreakStruct
/// Size: 0x0000 (0x000070 - 0x000070)
struct FRigVMDispatch_BreakStruct : FRigVMDispatch_MakeStruct
{ 
};

/// Struct /Script/RigVM.RigVMDispatch_Print
/// Size: 0x0000 (0x000070 - 0x000070)
struct FRigVMDispatch_Print : FRigVMDispatchFactory
{ 
};

/// Struct /Script/RigVM.RigVMDispatch_SelectInt32
/// Size: 0x0000 (0x000070 - 0x000070)
struct FRigVMDispatch_SelectInt32 : FRigVMDispatch_CoreBase
{ 
};

/// Struct /Script/RigVM.RigVMDispatch_SwitchInt32
/// Size: 0x0000 (0x000070 - 0x000070)
struct FRigVMDispatch_SwitchInt32 : FRigVMDispatch_CoreBase
{ 
};

/// Struct /Script/RigVM.RigVMFunction_ControlFlowBase
/// Size: 0x0000 (0x000008 - 0x000008)
struct FRigVMFunction_ControlFlowBase : FRigVMStruct
{ 
};

/// Struct /Script/RigVM.RigVMFunction_ControlFlowBranch
/// Size: 0x03E8 (0x000008 - 0x0003F0)
struct FRigVMFunction_ControlFlowBranch : FRigVMFunction_ControlFlowBase
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0008   (0x0008)  MISSED
	FRigVMExecuteContext                               ExecuteContext;                                             // 0x0010   (0x00F0)  
	bool                                               Condition;                                                  // 0x0100   (0x0001)  
	unsigned char                                      UnknownData01_5[0xF];                                       // 0x0101   (0x000F)  MISSED
	FRigVMExecuteContext                               TRUE0;                                                      // 0x0110   (0x00F0)  
	FRigVMExecuteContext                               FALSE1;                                                     // 0x0200   (0x00F0)  
	FRigVMExecuteContext                               Completed;                                                  // 0x02F0   (0x00F0)  
	FName                                              BlockToRun;                                                 // 0x03E0   (0x0004)  
	unsigned char                                      UnknownData02_6[0xC];                                       // 0x03E4   (0x000C)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_NameBase
/// Size: 0x0000 (0x000008 - 0x000008)
struct FRigVMFunction_NameBase : FRigVMStruct
{ 
};

/// Struct /Script/RigVM.RigVMFunction_NameConcat
/// Size: 0x0010 (0x000008 - 0x000018)
struct FRigVMFunction_NameConcat : FRigVMFunction_NameBase
{ 
	FName                                              A;                                                          // 0x0008   (0x0004)  
	FName                                              B;                                                          // 0x000C   (0x0004)  
	FName                                              Result;                                                     // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_NameTruncate
/// Size: 0x0018 (0x000008 - 0x000020)
struct FRigVMFunction_NameTruncate : FRigVMFunction_NameBase
{ 
	FName                                              Name;                                                       // 0x0008   (0x0004)  
	int32_t                                            Count;                                                      // 0x000C   (0x0004)  
	bool                                               FromEnd;                                                    // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0011   (0x0003)  MISSED
	FName                                              Remainder;                                                  // 0x0014   (0x0004)  
	FName                                              Chopped;                                                    // 0x0018   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_NameReplace
/// Size: 0x0010 (0x000008 - 0x000018)
struct FRigVMFunction_NameReplace : FRigVMFunction_NameBase
{ 
	FName                                              Name;                                                       // 0x0008   (0x0004)  
	FName                                              Old;                                                        // 0x000C   (0x0004)  
	FName                                              New;                                                        // 0x0010   (0x0004)  
	FName                                              Result;                                                     // 0x0014   (0x0004)  
};

/// Struct /Script/RigVM.RigVMFunction_EndsWith
/// Size: 0x0010 (0x000008 - 0x000018)
struct FRigVMFunction_EndsWith : FRigVMFunction_NameBase
{ 
	FName                                              Name;                                                       // 0x0008   (0x0004)  
	FName                                              Ending;                                                     // 0x000C   (0x0004)  
	bool                                               Result;                                                     // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_StartsWith
/// Size: 0x0010 (0x000008 - 0x000018)
struct FRigVMFunction_StartsWith : FRigVMFunction_NameBase
{ 
	FName                                              Name;                                                       // 0x0008   (0x0004)  
	FName                                              Start;                                                      // 0x000C   (0x0004)  
	bool                                               Result;                                                     // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_Contains
/// Size: 0x0010 (0x000008 - 0x000018)
struct FRigVMFunction_Contains : FRigVMFunction_NameBase
{ 
	FName                                              Name;                                                       // 0x0008   (0x0004)  
	FName                                              Search;                                                     // 0x000C   (0x0004)  
	bool                                               Result;                                                     // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_StringBase
/// Size: 0x0000 (0x000008 - 0x000008)
struct FRigVMFunction_StringBase : FRigVMStruct
{ 
};

/// Struct /Script/RigVM.RigVMFunction_StringConcat
/// Size: 0x0030 (0x000008 - 0x000038)
struct FRigVMFunction_StringConcat : FRigVMFunction_StringBase
{ 
	SDK_UNDEFINED(16,1678) /* FString */               __um(A);                                                    // 0x0008   (0x0010)  
	SDK_UNDEFINED(16,1679) /* FString */               __um(B);                                                    // 0x0018   (0x0010)  
	SDK_UNDEFINED(16,1680) /* FString */               __um(Result);                                               // 0x0028   (0x0010)  
};

/// Struct /Script/RigVM.RigVMFunction_StringTruncate
/// Size: 0x0038 (0x000008 - 0x000040)
struct FRigVMFunction_StringTruncate : FRigVMFunction_StringBase
{ 
	SDK_UNDEFINED(16,1681) /* FString */               __um(Name);                                                 // 0x0008   (0x0010)  
	int32_t                                            Count;                                                      // 0x0018   (0x0004)  
	bool                                               FromEnd;                                                    // 0x001C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x001D   (0x0003)  MISSED
	SDK_UNDEFINED(16,1682) /* FString */               __um(Remainder);                                            // 0x0020   (0x0010)  
	SDK_UNDEFINED(16,1683) /* FString */               __um(Chopped);                                              // 0x0030   (0x0010)  
};

/// Struct /Script/RigVM.RigVMFunction_StringReplace
/// Size: 0x0040 (0x000008 - 0x000048)
struct FRigVMFunction_StringReplace : FRigVMFunction_StringBase
{ 
	SDK_UNDEFINED(16,1684) /* FString */               __um(Name);                                                 // 0x0008   (0x0010)  
	SDK_UNDEFINED(16,1685) /* FString */               __um(Old);                                                  // 0x0018   (0x0010)  
	SDK_UNDEFINED(16,1686) /* FString */               __um(New);                                                  // 0x0028   (0x0010)  
	SDK_UNDEFINED(16,1687) /* FString */               __um(Result);                                               // 0x0038   (0x0010)  
};

/// Struct /Script/RigVM.RigVMFunction_StringEndsWith
/// Size: 0x0028 (0x000008 - 0x000030)
struct FRigVMFunction_StringEndsWith : FRigVMFunction_StringBase
{ 
	SDK_UNDEFINED(16,1688) /* FString */               __um(Name);                                                 // 0x0008   (0x0010)  
	SDK_UNDEFINED(16,1689) /* FString */               __um(Ending);                                               // 0x0018   (0x0010)  
	bool                                               Result;                                                     // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0029   (0x0007)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_StringStartsWith
/// Size: 0x0028 (0x000008 - 0x000030)
struct FRigVMFunction_StringStartsWith : FRigVMFunction_StringBase
{ 
	SDK_UNDEFINED(16,1690) /* FString */               __um(Name);                                                 // 0x0008   (0x0010)  
	SDK_UNDEFINED(16,1691) /* FString */               __um(Start);                                                // 0x0018   (0x0010)  
	bool                                               Result;                                                     // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0029   (0x0007)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_StringContains
/// Size: 0x0028 (0x000008 - 0x000030)
struct FRigVMFunction_StringContains : FRigVMFunction_StringBase
{ 
	SDK_UNDEFINED(16,1692) /* FString */               __um(Name);                                                 // 0x0008   (0x0010)  
	SDK_UNDEFINED(16,1693) /* FString */               __um(Search);                                               // 0x0018   (0x0010)  
	bool                                               Result;                                                     // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0029   (0x0007)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_StringLength
/// Size: 0x0018 (0x000008 - 0x000020)
struct FRigVMFunction_StringLength : FRigVMFunction_StringBase
{ 
	SDK_UNDEFINED(16,1694) /* FString */               __um(Value);                                                // 0x0008   (0x0010)  
	int32_t                                            Length;                                                     // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_StringTrimWhitespace
/// Size: 0x0020 (0x000008 - 0x000028)
struct FRigVMFunction_StringTrimWhitespace : FRigVMFunction_StringBase
{ 
	SDK_UNDEFINED(16,1695) /* FString */               __um(Value);                                                // 0x0008   (0x0010)  
	SDK_UNDEFINED(16,1696) /* FString */               __um(Result);                                               // 0x0018   (0x0010)  
};

/// Struct /Script/RigVM.RigVMFunction_StringToUppercase
/// Size: 0x0020 (0x000008 - 0x000028)
struct FRigVMFunction_StringToUppercase : FRigVMFunction_StringBase
{ 
	SDK_UNDEFINED(16,1697) /* FString */               __um(Value);                                                // 0x0008   (0x0010)  
	SDK_UNDEFINED(16,1698) /* FString */               __um(Result);                                               // 0x0018   (0x0010)  
};

/// Struct /Script/RigVM.RigVMFunction_StringToLowercase
/// Size: 0x0020 (0x000008 - 0x000028)
struct FRigVMFunction_StringToLowercase : FRigVMFunction_StringBase
{ 
	SDK_UNDEFINED(16,1699) /* FString */               __um(Value);                                                // 0x0008   (0x0010)  
	SDK_UNDEFINED(16,1700) /* FString */               __um(Result);                                               // 0x0018   (0x0010)  
};

/// Struct /Script/RigVM.RigVMFunction_StringReverse
/// Size: 0x0020 (0x000008 - 0x000028)
struct FRigVMFunction_StringReverse : FRigVMFunction_StringBase
{ 
	SDK_UNDEFINED(16,1701) /* FString */               __um(Value);                                                // 0x0008   (0x0010)  
	SDK_UNDEFINED(16,1702) /* FString */               __um(Reverse);                                              // 0x0018   (0x0010)  
};

/// Struct /Script/RigVM.RigVMFunction_StringLeft
/// Size: 0x0028 (0x000008 - 0x000030)
struct FRigVMFunction_StringLeft : FRigVMFunction_StringBase
{ 
	SDK_UNDEFINED(16,1703) /* FString */               __um(Value);                                                // 0x0008   (0x0010)  
	int32_t                                            Count;                                                      // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x001C   (0x0004)  MISSED
	SDK_UNDEFINED(16,1704) /* FString */               __um(Result);                                               // 0x0020   (0x0010)  
};

/// Struct /Script/RigVM.RigVMFunction_StringRight
/// Size: 0x0028 (0x000008 - 0x000030)
struct FRigVMFunction_StringRight : FRigVMFunction_StringBase
{ 
	SDK_UNDEFINED(16,1705) /* FString */               __um(Value);                                                // 0x0008   (0x0010)  
	int32_t                                            Count;                                                      // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x001C   (0x0004)  MISSED
	SDK_UNDEFINED(16,1706) /* FString */               __um(Result);                                               // 0x0020   (0x0010)  
};

/// Struct /Script/RigVM.RigVMFunction_StringMiddle
/// Size: 0x0028 (0x000008 - 0x000030)
struct FRigVMFunction_StringMiddle : FRigVMFunction_StringBase
{ 
	SDK_UNDEFINED(16,1707) /* FString */               __um(Value);                                                // 0x0008   (0x0010)  
	int32_t                                            Start;                                                      // 0x0018   (0x0004)  
	int32_t                                            Count;                                                      // 0x001C   (0x0004)  
	SDK_UNDEFINED(16,1708) /* FString */               __um(Result);                                               // 0x0020   (0x0010)  
};

/// Struct /Script/RigVM.RigVMFunction_StringFind
/// Size: 0x0028 (0x000008 - 0x000030)
struct FRigVMFunction_StringFind : FRigVMFunction_StringBase
{ 
	SDK_UNDEFINED(16,1709) /* FString */               __um(Value);                                                // 0x0008   (0x0010)  
	SDK_UNDEFINED(16,1710) /* FString */               __um(Search);                                               // 0x0018   (0x0010)  
	bool                                               Found;                                                      // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0029   (0x0003)  MISSED
	int32_t                                            Index;                                                      // 0x002C   (0x0004)  
};

/// Struct /Script/RigVM.RigVMFunction_StringSplit
/// Size: 0x0030 (0x000008 - 0x000038)
struct FRigVMFunction_StringSplit : FRigVMFunction_StringBase
{ 
	SDK_UNDEFINED(16,1711) /* FString */               __um(Value);                                                // 0x0008   (0x0010)  
	SDK_UNDEFINED(16,1712) /* FString */               __um(Separator);                                            // 0x0018   (0x0010)  
	SDK_UNDEFINED(16,1713) /* TArray<FString> */       __um(Result);                                               // 0x0028   (0x0010)  
};

/// Struct /Script/RigVM.RigVMFunction_StringJoin
/// Size: 0x0030 (0x000008 - 0x000038)
struct FRigVMFunction_StringJoin : FRigVMFunction_StringBase
{ 
	SDK_UNDEFINED(16,1714) /* TArray<FString> */       __um(Values);                                               // 0x0008   (0x0010)  
	SDK_UNDEFINED(16,1715) /* FString */               __um(Separator);                                            // 0x0018   (0x0010)  
	SDK_UNDEFINED(16,1716) /* FString */               __um(Result);                                               // 0x0028   (0x0010)  
};

/// Struct /Script/RigVM.RigVMFunction_StringPadInteger
/// Size: 0x0018 (0x000008 - 0x000020)
struct FRigVMFunction_StringPadInteger : FRigVMFunction_StringBase
{ 
	int32_t                                            Value;                                                      // 0x0008   (0x0004)  
	int32_t                                            Digits;                                                     // 0x000C   (0x0004)  
	SDK_UNDEFINED(16,1717) /* FString */               __um(Result);                                               // 0x0010   (0x0010)  
};

/// Struct /Script/RigVM.RigDispatch_ToString
/// Size: 0x0000 (0x000070 - 0x000070)
struct FRigDispatch_ToString : FRigVMDispatchFactory
{ 
};

/// Struct /Script/RigVM.RigDispatch_FromString
/// Size: 0x0000 (0x000070 - 0x000070)
struct FRigDispatch_FromString : FRigVMDispatchFactory
{ 
};

/// Struct /Script/RigVM.RigVMFunction_AccumulateBase
/// Size: 0x0000 (0x000008 - 0x000008)
struct FRigVMFunction_AccumulateBase : FRigVMFunction_SimBase
{ 
};

/// Struct /Script/RigVM.RigVMFunction_AccumulateFloatAdd
/// Size: 0x0018 (0x000008 - 0x000020)
struct FRigVMFunction_AccumulateFloatAdd : FRigVMFunction_AccumulateBase
{ 
	float                                              Increment;                                                  // 0x0008   (0x0004)  
	float                                              InitialValue;                                               // 0x000C   (0x0004)  
	bool                                               bIntegrateDeltaTime;                                        // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0011   (0x0003)  MISSED
	float                                              Result;                                                     // 0x0014   (0x0004)  
	float                                              AccumulatedValue;                                           // 0x0018   (0x0004)  
	bool                                               bIsInitialized;                                             // 0x001C   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x001D   (0x0003)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_AccumulateVectorAdd
/// Size: 0x0070 (0x000008 - 0x000078)
struct FRigVMFunction_AccumulateVectorAdd : FRigVMFunction_AccumulateBase
{ 
	FVector                                            Increment;                                                  // 0x0008   (0x0018)  
	FVector                                            InitialValue;                                               // 0x0020   (0x0018)  
	bool                                               bIntegrateDeltaTime;                                        // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0039   (0x0007)  MISSED
	FVector                                            Result;                                                     // 0x0040   (0x0018)  
	FVector                                            AccumulatedValue;                                           // 0x0058   (0x0018)  
	bool                                               bIsInitialized;                                             // 0x0070   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0071   (0x0007)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_AccumulateFloatMul
/// Size: 0x0018 (0x000008 - 0x000020)
struct FRigVMFunction_AccumulateFloatMul : FRigVMFunction_AccumulateBase
{ 
	float                                              Multiplier;                                                 // 0x0008   (0x0004)  
	float                                              InitialValue;                                               // 0x000C   (0x0004)  
	bool                                               bIntegrateDeltaTime;                                        // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0011   (0x0003)  MISSED
	float                                              Result;                                                     // 0x0014   (0x0004)  
	float                                              AccumulatedValue;                                           // 0x0018   (0x0004)  
	bool                                               bIsInitialized;                                             // 0x001C   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x001D   (0x0003)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_AccumulateVectorMul
/// Size: 0x0070 (0x000008 - 0x000078)
struct FRigVMFunction_AccumulateVectorMul : FRigVMFunction_AccumulateBase
{ 
	FVector                                            Multiplier;                                                 // 0x0008   (0x0018)  
	FVector                                            InitialValue;                                               // 0x0020   (0x0018)  
	bool                                               bIntegrateDeltaTime;                                        // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0039   (0x0007)  MISSED
	FVector                                            Result;                                                     // 0x0040   (0x0018)  
	FVector                                            AccumulatedValue;                                           // 0x0058   (0x0018)  
	bool                                               bIsInitialized;                                             // 0x0070   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0071   (0x0007)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_AccumulateQuatMul
/// Size: 0x00A8 (0x000008 - 0x0000B0)
struct FRigVMFunction_AccumulateQuatMul : FRigVMFunction_AccumulateBase
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              Multiplier;                                                 // 0x0010   (0x0020)  
	FQuat                                              InitialValue;                                               // 0x0030   (0x0020)  
	bool                                               bFlipOrder;                                                 // 0x0050   (0x0001)  
	bool                                               bIntegrateDeltaTime;                                        // 0x0051   (0x0001)  
	unsigned char                                      UnknownData01_5[0xE];                                       // 0x0052   (0x000E)  MISSED
	FQuat                                              Result;                                                     // 0x0060   (0x0020)  
	FQuat                                              AccumulatedValue;                                           // 0x0080   (0x0020)  
	bool                                               bIsInitialized;                                             // 0x00A0   (0x0001)  
	unsigned char                                      UnknownData02_6[0xF];                                       // 0x00A1   (0x000F)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_AccumulateTransformMul
/// Size: 0x01A8 (0x000008 - 0x0001B0)
struct FRigVMFunction_AccumulateTransformMul : FRigVMFunction_AccumulateBase
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         Multiplier;                                                 // 0x0010   (0x0060)  
	FTransform                                         InitialValue;                                               // 0x0070   (0x0060)  
	bool                                               bFlipOrder;                                                 // 0x00D0   (0x0001)  
	bool                                               bIntegrateDeltaTime;                                        // 0x00D1   (0x0001)  
	unsigned char                                      UnknownData01_5[0xE];                                       // 0x00D2   (0x000E)  MISSED
	FTransform                                         Result;                                                     // 0x00E0   (0x0060)  
	FTransform                                         AccumulatedValue;                                           // 0x0140   (0x0060)  
	bool                                               bIsInitialized;                                             // 0x01A0   (0x0001)  
	unsigned char                                      UnknownData02_6[0xF];                                       // 0x01A1   (0x000F)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_AccumulateFloatLerp
/// Size: 0x0020 (0x000008 - 0x000028)
struct FRigVMFunction_AccumulateFloatLerp : FRigVMFunction_AccumulateBase
{ 
	float                                              TargetValue;                                                // 0x0008   (0x0004)  
	float                                              InitialValue;                                               // 0x000C   (0x0004)  
	float                                              Blend;                                                      // 0x0010   (0x0004)  
	bool                                               bIntegrateDeltaTime;                                        // 0x0014   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0015   (0x0003)  MISSED
	float                                              Result;                                                     // 0x0018   (0x0004)  
	float                                              AccumulatedValue;                                           // 0x001C   (0x0004)  
	bool                                               bIsInitialized;                                             // 0x0020   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0021   (0x0007)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_AccumulateVectorLerp
/// Size: 0x0070 (0x000008 - 0x000078)
struct FRigVMFunction_AccumulateVectorLerp : FRigVMFunction_AccumulateBase
{ 
	FVector                                            TargetValue;                                                // 0x0008   (0x0018)  
	FVector                                            InitialValue;                                               // 0x0020   (0x0018)  
	float                                              Blend;                                                      // 0x0038   (0x0004)  
	bool                                               bIntegrateDeltaTime;                                        // 0x003C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x003D   (0x0003)  MISSED
	FVector                                            Result;                                                     // 0x0040   (0x0018)  
	FVector                                            AccumulatedValue;                                           // 0x0058   (0x0018)  
	bool                                               bIsInitialized;                                             // 0x0070   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0071   (0x0007)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_AccumulateQuatLerp
/// Size: 0x00A8 (0x000008 - 0x0000B0)
struct FRigVMFunction_AccumulateQuatLerp : FRigVMFunction_AccumulateBase
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              TargetValue;                                                // 0x0010   (0x0020)  
	FQuat                                              InitialValue;                                               // 0x0030   (0x0020)  
	float                                              Blend;                                                      // 0x0050   (0x0004)  
	bool                                               bIntegrateDeltaTime;                                        // 0x0054   (0x0001)  
	unsigned char                                      UnknownData01_5[0xB];                                       // 0x0055   (0x000B)  MISSED
	FQuat                                              Result;                                                     // 0x0060   (0x0020)  
	FQuat                                              AccumulatedValue;                                           // 0x0080   (0x0020)  
	bool                                               bIsInitialized;                                             // 0x00A0   (0x0001)  
	unsigned char                                      UnknownData02_6[0xF];                                       // 0x00A1   (0x000F)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_AccumulateTransformLerp
/// Size: 0x01A8 (0x000008 - 0x0001B0)
struct FRigVMFunction_AccumulateTransformLerp : FRigVMFunction_AccumulateBase
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         TargetValue;                                                // 0x0010   (0x0060)  
	FTransform                                         InitialValue;                                               // 0x0070   (0x0060)  
	float                                              Blend;                                                      // 0x00D0   (0x0004)  
	bool                                               bIntegrateDeltaTime;                                        // 0x00D4   (0x0001)  
	unsigned char                                      UnknownData01_5[0xB];                                       // 0x00D5   (0x000B)  MISSED
	FTransform                                         Result;                                                     // 0x00E0   (0x0060)  
	FTransform                                         AccumulatedValue;                                           // 0x0140   (0x0060)  
	bool                                               bIsInitialized;                                             // 0x01A0   (0x0001)  
	unsigned char                                      UnknownData02_6[0xF];                                       // 0x01A1   (0x000F)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_AccumulateFloatRange
/// Size: 0x0018 (0x000008 - 0x000020)
struct FRigVMFunction_AccumulateFloatRange : FRigVMFunction_AccumulateBase
{ 
	float                                              Value;                                                      // 0x0008   (0x0004)  
	float                                              Minimum;                                                    // 0x000C   (0x0004)  
	float                                              Maximum;                                                    // 0x0010   (0x0004)  
	float                                              AccumulatedMinimum;                                         // 0x0014   (0x0004)  
	float                                              AccumulatedMaximum;                                         // 0x0018   (0x0004)  
	bool                                               bIsInitialized;                                             // 0x001C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x001D   (0x0003)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_AccumulateVectorRange
/// Size: 0x0080 (0x000008 - 0x000088)
struct FRigVMFunction_AccumulateVectorRange : FRigVMFunction_AccumulateBase
{ 
	FVector                                            Value;                                                      // 0x0008   (0x0018)  
	FVector                                            Minimum;                                                    // 0x0020   (0x0018)  
	FVector                                            Maximum;                                                    // 0x0038   (0x0018)  
	FVector                                            AccumulatedMinimum;                                         // 0x0050   (0x0018)  
	FVector                                            AccumulatedMaximum;                                         // 0x0068   (0x0018)  
	bool                                               bIsInitialized;                                             // 0x0080   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0081   (0x0007)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_AlphaInterp
/// Size: 0x0070 (0x000008 - 0x000078)
struct FRigVMFunction_AlphaInterp : FRigVMFunction_SimBase
{ 
	float                                              Value;                                                      // 0x0008   (0x0004)  
	float                                              Scale;                                                      // 0x000C   (0x0004)  
	float                                              Bias;                                                       // 0x0010   (0x0004)  
	bool                                               bMapRange;                                                  // 0x0014   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0015   (0x0003)  MISSED
	FInputRange                                        InRange;                                                    // 0x0018   (0x0008)  
	FInputRange                                        OutRange;                                                   // 0x0020   (0x0008)  
	bool                                               bClampResult;                                               // 0x0028   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0029   (0x0003)  MISSED
	float                                              ClampMin;                                                   // 0x002C   (0x0004)  
	float                                              ClampMax;                                                   // 0x0030   (0x0004)  
	bool                                               bInterpResult;                                              // 0x0034   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0035   (0x0003)  MISSED
	float                                              InterpSpeedIncreasing;                                      // 0x0038   (0x0004)  
	float                                              InterpSpeedDecreasing;                                      // 0x003C   (0x0004)  
	float                                              Result;                                                     // 0x0040   (0x0004)  
	FInputScaleBiasClamp                               ScaleBiasClamp;                                             // 0x0044   (0x0030)  
	unsigned char                                      UnknownData03_6[0x4];                                       // 0x0074   (0x0004)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_AlphaInterpVector
/// Size: 0x0098 (0x000008 - 0x0000A0)
struct FRigVMFunction_AlphaInterpVector : FRigVMFunction_SimBase
{ 
	FVector                                            Value;                                                      // 0x0008   (0x0018)  
	float                                              Scale;                                                      // 0x0020   (0x0004)  
	float                                              Bias;                                                       // 0x0024   (0x0004)  
	bool                                               bMapRange;                                                  // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0029   (0x0003)  MISSED
	FInputRange                                        InRange;                                                    // 0x002C   (0x0008)  
	FInputRange                                        OutRange;                                                   // 0x0034   (0x0008)  
	bool                                               bClampResult;                                               // 0x003C   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x003D   (0x0003)  MISSED
	float                                              ClampMin;                                                   // 0x0040   (0x0004)  
	float                                              ClampMax;                                                   // 0x0044   (0x0004)  
	bool                                               bInterpResult;                                              // 0x0048   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0049   (0x0003)  MISSED
	float                                              InterpSpeedIncreasing;                                      // 0x004C   (0x0004)  
	float                                              InterpSpeedDecreasing;                                      // 0x0050   (0x0004)  
	unsigned char                                      UnknownData03_5[0x4];                                       // 0x0054   (0x0004)  MISSED
	FVector                                            Result;                                                     // 0x0058   (0x0018)  
	FInputScaleBiasClamp                               ScaleBiasClamp;                                             // 0x0070   (0x0030)  
};

/// Struct /Script/RigVM.RigVMFunction_AlphaInterpQuat
/// Size: 0x00B8 (0x000008 - 0x0000C0)
struct FRigVMFunction_AlphaInterpQuat : FRigVMFunction_SimBase
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              Value;                                                      // 0x0010   (0x0020)  
	float                                              Scale;                                                      // 0x0030   (0x0004)  
	float                                              Bias;                                                       // 0x0034   (0x0004)  
	bool                                               bMapRange;                                                  // 0x0038   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0039   (0x0003)  MISSED
	FInputRange                                        InRange;                                                    // 0x003C   (0x0008)  
	FInputRange                                        OutRange;                                                   // 0x0044   (0x0008)  
	bool                                               bClampResult;                                               // 0x004C   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x004D   (0x0003)  MISSED
	float                                              ClampMin;                                                   // 0x0050   (0x0004)  
	float                                              ClampMax;                                                   // 0x0054   (0x0004)  
	bool                                               bInterpResult;                                              // 0x0058   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x0059   (0x0003)  MISSED
	float                                              InterpSpeedIncreasing;                                      // 0x005C   (0x0004)  
	float                                              InterpSpeedDecreasing;                                      // 0x0060   (0x0004)  
	unsigned char                                      UnknownData04_5[0xC];                                       // 0x0064   (0x000C)  MISSED
	FQuat                                              Result;                                                     // 0x0070   (0x0020)  
	FInputScaleBiasClamp                               ScaleBiasClamp;                                             // 0x0090   (0x0030)  
};

/// Struct /Script/RigVM.RigVMFunction_DeltaFromPreviousFloat
/// Size: 0x0018 (0x000008 - 0x000020)
struct FRigVMFunction_DeltaFromPreviousFloat : FRigVMFunction_SimBase
{ 
	float                                              Value;                                                      // 0x0008   (0x0004)  
	float                                              Delta;                                                      // 0x000C   (0x0004)  
	float                                              PreviousValue;                                              // 0x0010   (0x0004)  
	float                                              Cache;                                                      // 0x0014   (0x0004)  
	bool                                               bIsInitialized;                                             // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0019   (0x0007)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_DeltaFromPreviousVector
/// Size: 0x0068 (0x000008 - 0x000070)
struct FRigVMFunction_DeltaFromPreviousVector : FRigVMFunction_SimBase
{ 
	FVector                                            Value;                                                      // 0x0008   (0x0018)  
	FVector                                            Delta;                                                      // 0x0020   (0x0018)  
	FVector                                            PreviousValue;                                              // 0x0038   (0x0018)  
	FVector                                            Cache;                                                      // 0x0050   (0x0018)  
	bool                                               bIsInitialized;                                             // 0x0068   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0069   (0x0007)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_DeltaFromPreviousQuat
/// Size: 0x0098 (0x000008 - 0x0000A0)
struct FRigVMFunction_DeltaFromPreviousQuat : FRigVMFunction_SimBase
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              Value;                                                      // 0x0010   (0x0020)  
	FQuat                                              Delta;                                                      // 0x0030   (0x0020)  
	FQuat                                              PreviousValue;                                              // 0x0050   (0x0020)  
	FQuat                                              Cache;                                                      // 0x0070   (0x0020)  
	bool                                               bIsInitialized;                                             // 0x0090   (0x0001)  
	unsigned char                                      UnknownData01_6[0xF];                                       // 0x0091   (0x000F)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_DeltaFromPreviousTransform
/// Size: 0x0198 (0x000008 - 0x0001A0)
struct FRigVMFunction_DeltaFromPreviousTransform : FRigVMFunction_SimBase
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         Value;                                                      // 0x0010   (0x0060)  
	FTransform                                         Delta;                                                      // 0x0070   (0x0060)  
	FTransform                                         PreviousValue;                                              // 0x00D0   (0x0060)  
	FTransform                                         Cache;                                                      // 0x0130   (0x0060)  
	bool                                               bIsInitialized;                                             // 0x0190   (0x0001)  
	unsigned char                                      UnknownData01_6[0xF];                                       // 0x0191   (0x000F)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_KalmanFloat
/// Size: 0x0028 (0x000008 - 0x000030)
struct FRigVMFunction_KalmanFloat : FRigVMFunction_SimBase
{ 
	float                                              Value;                                                      // 0x0008   (0x0004)  
	int32_t                                            BufferSize;                                                 // 0x000C   (0x0004)  
	float                                              Result;                                                     // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0014   (0x0004)  MISSED
	TArray<float>                                      Buffer;                                                     // 0x0018   (0x0010)  
	int32_t                                            LastInsertIndex;                                            // 0x0028   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x002C   (0x0004)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_KalmanVector
/// Size: 0x0050 (0x000008 - 0x000058)
struct FRigVMFunction_KalmanVector : FRigVMFunction_SimBase
{ 
	FVector                                            Value;                                                      // 0x0008   (0x0018)  
	int32_t                                            BufferSize;                                                 // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0024   (0x0004)  MISSED
	FVector                                            Result;                                                     // 0x0028   (0x0018)  
	TArray<FVector>                                    Buffer;                                                     // 0x0040   (0x0010)  
	int32_t                                            LastInsertIndex;                                            // 0x0050   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0054   (0x0004)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_KalmanTransform
/// Size: 0x00F8 (0x000008 - 0x000100)
struct FRigVMFunction_KalmanTransform : FRigVMFunction_SimBase
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         Value;                                                      // 0x0010   (0x0060)  
	int32_t                                            BufferSize;                                                 // 0x0070   (0x0004)  
	unsigned char                                      UnknownData01_5[0xC];                                       // 0x0074   (0x000C)  MISSED
	FTransform                                         Result;                                                     // 0x0080   (0x0060)  
	TArray<FTransform>                                 Buffer;                                                     // 0x00E0   (0x0010)  
	int32_t                                            LastInsertIndex;                                            // 0x00F0   (0x0004)  
	unsigned char                                      UnknownData02_6[0xC];                                       // 0x00F4   (0x000C)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_Timeline
/// Size: 0x0010 (0x000008 - 0x000018)
struct FRigVMFunction_Timeline : FRigVMFunction_SimBase
{ 
	float                                              Speed;                                                      // 0x0008   (0x0004)  
	float                                              Time;                                                       // 0x000C   (0x0004)  
	float                                              AccumulatedValue;                                           // 0x0010   (0x0004)  
	bool                                               bIsInitialized;                                             // 0x0014   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0015   (0x0003)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_TimeLoop
/// Size: 0x0030 (0x000008 - 0x000038)
struct FRigVMFunction_TimeLoop : FRigVMFunction_SimBase
{ 
	float                                              Speed;                                                      // 0x0008   (0x0004)  
	float                                              duration;                                                   // 0x000C   (0x0004)  
	bool                                               Normalize;                                                  // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0011   (0x0003)  MISSED
	float                                              Absolute;                                                   // 0x0014   (0x0004)  
	float                                              Relative;                                                   // 0x0018   (0x0004)  
	float                                              FlipFlop;                                                   // 0x001C   (0x0004)  
	bool                                               Even;                                                       // 0x0020   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0021   (0x0003)  MISSED
	float                                              AccumulatedAbsolute;                                        // 0x0024   (0x0004)  
	float                                              AccumulatedRelative;                                        // 0x0028   (0x0004)  
	int32_t                                            NumIterations;                                              // 0x002C   (0x0004)  
	bool                                               bIsInitialized;                                             // 0x0030   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x0031   (0x0007)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_TimeOffsetFloat
/// Size: 0x0040 (0x000008 - 0x000048)
struct FRigVMFunction_TimeOffsetFloat : FRigVMFunction_SimBase
{ 
	float                                              Value;                                                      // 0x0008   (0x0004)  
	float                                              SecondsAgo;                                                 // 0x000C   (0x0004)  
	int32_t                                            BufferSize;                                                 // 0x0010   (0x0004)  
	float                                              TimeRange;                                                  // 0x0014   (0x0004)  
	float                                              Result;                                                     // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x001C   (0x0004)  MISSED
	TArray<float>                                      Buffer;                                                     // 0x0020   (0x0010)  
	TArray<float>                                      DeltaTimes;                                                 // 0x0030   (0x0010)  
	int32_t                                            LastInsertIndex;                                            // 0x0040   (0x0004)  
	int32_t                                            UpperBound;                                                 // 0x0044   (0x0004)  
};

/// Struct /Script/RigVM.RigVMFunction_TimeOffsetVector
/// Size: 0x0068 (0x000008 - 0x000070)
struct FRigVMFunction_TimeOffsetVector : FRigVMFunction_SimBase
{ 
	FVector                                            Value;                                                      // 0x0008   (0x0018)  
	float                                              SecondsAgo;                                                 // 0x0020   (0x0004)  
	int32_t                                            BufferSize;                                                 // 0x0024   (0x0004)  
	float                                              TimeRange;                                                  // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x002C   (0x0004)  MISSED
	FVector                                            Result;                                                     // 0x0030   (0x0018)  
	TArray<FVector>                                    Buffer;                                                     // 0x0048   (0x0010)  
	TArray<float>                                      DeltaTimes;                                                 // 0x0058   (0x0010)  
	int32_t                                            LastInsertIndex;                                            // 0x0068   (0x0004)  
	int32_t                                            UpperBound;                                                 // 0x006C   (0x0004)  
};

/// Struct /Script/RigVM.RigVMFunction_TimeOffsetTransform
/// Size: 0x0108 (0x000008 - 0x000110)
struct FRigVMFunction_TimeOffsetTransform : FRigVMFunction_SimBase
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         Value;                                                      // 0x0010   (0x0060)  
	float                                              SecondsAgo;                                                 // 0x0070   (0x0004)  
	int32_t                                            BufferSize;                                                 // 0x0074   (0x0004)  
	float                                              TimeRange;                                                  // 0x0078   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x007C   (0x0004)  MISSED
	FTransform                                         Result;                                                     // 0x0080   (0x0060)  
	TArray<FTransform>                                 Buffer;                                                     // 0x00E0   (0x0010)  
	TArray<float>                                      DeltaTimes;                                                 // 0x00F0   (0x0010)  
	int32_t                                            LastInsertIndex;                                            // 0x0100   (0x0004)  
	int32_t                                            UpperBound;                                                 // 0x0104   (0x0004)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x0108   (0x0008)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_VerletIntegrateVector
/// Size: 0x00D0 (0x000008 - 0x0000D8)
struct FRigVMFunction_VerletIntegrateVector : FRigVMFunction_SimBase
{ 
	FVector                                            Target;                                                     // 0x0008   (0x0018)  
	float                                              Strength;                                                   // 0x0020   (0x0004)  
	float                                              Damp;                                                       // 0x0024   (0x0004)  
	float                                              Blend;                                                      // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x002C   (0x0004)  MISSED
	FVector                                            Force;                                                      // 0x0030   (0x0018)  
	FVector                                            Position;                                                   // 0x0048   (0x0018)  
	FVector                                            Velocity;                                                   // 0x0060   (0x0018)  
	FVector                                            Acceleration;                                               // 0x0078   (0x0018)  
	FRigVMSimPoint                                     Point;                                                      // 0x0090   (0x0040)  
	bool                                               bInitialized;                                               // 0x00D0   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x00D1   (0x0007)  MISSED
};

