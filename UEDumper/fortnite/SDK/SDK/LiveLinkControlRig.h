
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: ControlRig
/// dependency: CoreUObject
/// dependency: LiveLinkInterface
/// dependency: RigVM

/// Struct /Script/LiveLinkControlRig.RigUnit_LiveLinkEvaluateInputDeviceValue
/// Size: 0x0128 (0x000008 - 0x000130)
struct FRigUnit_LiveLinkEvaluateInputDeviceValue : FRigUnit
{ 
	FName                                              SubjectName;                                                // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	FLiveLinkGamepadInputDeviceFrameData               InputDeviceData;                                            // 0x0010   (0x0120)  
};

/// Struct /Script/LiveLinkControlRig.RigUnit_LiveLinkBase
/// Size: 0x0000 (0x000008 - 0x000008)
struct FRigUnit_LiveLinkBase : FRigUnit
{ 
};

/// Struct /Script/LiveLinkControlRig.RigUnit_LiveLinkEvaluteFrameAnimation
/// Size: 0x0098 (0x000008 - 0x0000A0)
struct FRigUnit_LiveLinkEvaluteFrameAnimation : FRigUnit_LiveLinkBase
{ 
	FName                                              SubjectName;                                                // 0x0008   (0x0004)  
	bool                                               bDrawDebug;                                                 // 0x000C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x000D   (0x0003)  MISSED
	FLinearColor                                       DebugColor;                                                 // 0x0010   (0x0010)  
	FTransform                                         DebugDrawOffset;                                            // 0x0020   (0x0060)  
	FSubjectFrameHandle                                SubjectFrame;                                               // 0x0080   (0x0018)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0098   (0x0008)  MISSED
};

/// Struct /Script/LiveLinkControlRig.RigUnit_LiveLinkGetTransformByName
/// Size: 0x0088 (0x000008 - 0x000090)
struct FRigUnit_LiveLinkGetTransformByName : FRigUnit_LiveLinkBase
{ 
	FSubjectFrameHandle                                SubjectFrame;                                               // 0x0008   (0x0018)  
	FName                                              TransformName;                                              // 0x0020   (0x0004)  
	ERigVMTransformSpace                               Space;                                                      // 0x0024   (0x0001)  
	unsigned char                                      UnknownData00_5[0xB];                                       // 0x0025   (0x000B)  MISSED
	FTransform                                         Transform;                                                  // 0x0030   (0x0060)  
};

/// Struct /Script/LiveLinkControlRig.RigUnit_LiveLinkGetParameterValueByName
/// Size: 0x0020 (0x000008 - 0x000028)
struct FRigUnit_LiveLinkGetParameterValueByName : FRigUnit_LiveLinkBase
{ 
	FSubjectFrameHandle                                SubjectFrame;                                               // 0x0008   (0x0018)  
	FName                                              ParameterName;                                              // 0x0020   (0x0004)  
	float                                              Value;                                                      // 0x0024   (0x0004)  
};

/// Struct /Script/LiveLinkControlRig.RigUnit_LiveLinkEvaluteFrameTransform
/// Size: 0x00D8 (0x000008 - 0x0000E0)
struct FRigUnit_LiveLinkEvaluteFrameTransform : FRigUnit_LiveLinkBase
{ 
	FName                                              SubjectName;                                                // 0x0008   (0x0004)  
	bool                                               bDrawDebug;                                                 // 0x000C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x000D   (0x0003)  MISSED
	FLinearColor                                       DebugColor;                                                 // 0x0010   (0x0010)  
	FTransform                                         DebugDrawOffset;                                            // 0x0020   (0x0060)  
	FTransform                                         Transform;                                                  // 0x0080   (0x0060)  
};

/// Struct /Script/LiveLinkControlRig.RigUnit_LiveLinkEvaluateBasicValue
/// Size: 0x0010 (0x000008 - 0x000018)
struct FRigUnit_LiveLinkEvaluateBasicValue : FRigUnit_LiveLinkBase
{ 
	FName                                              SubjectName;                                                // 0x0008   (0x0004)  
	FName                                              PropertyName;                                               // 0x000C   (0x0004)  
	float                                              Value;                                                      // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
};

