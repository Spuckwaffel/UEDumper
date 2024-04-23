
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: ControlRig
/// dependency: CoreUObject
/// dependency: LiveLinkInterface
/// dependency: RigVM

/// Struct /Script/LiveLinkControlRig.RigUnit_LiveLinkEvaluateInputDeviceValue
/// Size: 0x0128 (0x000008 - 0x000130)
class FRigUnit_LiveLinkEvaluateInputDeviceValue : public FRigUnit
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	SMember(FName)                                     SubjectName                                                 OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	SMember(FLiveLinkGamepadInputDeviceFrameData)      InputDeviceData                                             OFFSET(getStruct<T>, {0x10, 288, 0, 0})
};

/// Struct /Script/LiveLinkControlRig.RigUnit_LiveLinkBase
/// Size: 0x0000 (0x000008 - 0x000008)
class FRigUnit_LiveLinkBase : public FRigUnit
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/LiveLinkControlRig.RigUnit_LiveLinkEvaluteFrameAnimation
/// Size: 0x0098 (0x000008 - 0x0000A0)
class FRigUnit_LiveLinkEvaluteFrameAnimation : public FRigUnit_LiveLinkBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	SMember(FName)                                     SubjectName                                                 OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	DMember(bool)                                      bDrawDebug                                                  OFFSET(get<bool>, {0xC, 1, 0, 0})
	SMember(FLinearColor)                              DebugColor                                                  OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FTransform)                                DebugDrawOffset                                             OFFSET(getStruct<T>, {0x20, 96, 0, 0})
	SMember(FSubjectFrameHandle)                       SubjectFrame                                                OFFSET(getStruct<T>, {0x80, 24, 0, 0})
};

/// Struct /Script/LiveLinkControlRig.RigUnit_LiveLinkGetTransformByName
/// Size: 0x0088 (0x000008 - 0x000090)
class FRigUnit_LiveLinkGetTransformByName : public FRigUnit_LiveLinkBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FSubjectFrameHandle)                       SubjectFrame                                                OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	SMember(FName)                                     TransformName                                               OFFSET(getStruct<T>, {0x20, 4, 0, 0})
	CMember(ERigVMTransformSpace)                      Space                                                       OFFSET(get<T>, {0x24, 1, 0, 0})
	SMember(FTransform)                                Transform                                                   OFFSET(getStruct<T>, {0x30, 96, 0, 0})
};

/// Struct /Script/LiveLinkControlRig.RigUnit_LiveLinkGetParameterValueByName
/// Size: 0x0020 (0x000008 - 0x000028)
class FRigUnit_LiveLinkGetParameterValueByName : public FRigUnit_LiveLinkBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FSubjectFrameHandle)                       SubjectFrame                                                OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	SMember(FName)                                     ParameterName                                               OFFSET(getStruct<T>, {0x20, 4, 0, 0})
	DMember(float)                                     Value                                                       OFFSET(get<float>, {0x24, 4, 0, 0})
};

/// Struct /Script/LiveLinkControlRig.RigUnit_LiveLinkEvaluteFrameTransform
/// Size: 0x00D8 (0x000008 - 0x0000E0)
class FRigUnit_LiveLinkEvaluteFrameTransform : public FRigUnit_LiveLinkBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	SMember(FName)                                     SubjectName                                                 OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	DMember(bool)                                      bDrawDebug                                                  OFFSET(get<bool>, {0xC, 1, 0, 0})
	SMember(FLinearColor)                              DebugColor                                                  OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FTransform)                                DebugDrawOffset                                             OFFSET(getStruct<T>, {0x20, 96, 0, 0})
	SMember(FTransform)                                Transform                                                   OFFSET(getStruct<T>, {0x80, 96, 0, 0})
};

/// Struct /Script/LiveLinkControlRig.RigUnit_LiveLinkEvaluateBasicValue
/// Size: 0x0010 (0x000008 - 0x000018)
class FRigUnit_LiveLinkEvaluateBasicValue : public FRigUnit_LiveLinkBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FName)                                     SubjectName                                                 OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	SMember(FName)                                     PropertyName                                                OFFSET(getStruct<T>, {0xC, 4, 0, 0})
	DMember(float)                                     Value                                                       OFFSET(get<float>, {0x10, 4, 0, 0})
};

