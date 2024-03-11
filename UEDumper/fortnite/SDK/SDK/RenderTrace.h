
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: PhysicsCore

/// Struct /Script/RenderTrace.PhysicalMaterialTraceInput
/// Size: 0x0030 (0x000000 - 0x000030)
struct FPhysicalMaterialTraceInput
{ 
	class UPhysicalMaterial*                           PhysicalMaterial;                                           // 0x0000   (0x0008)  
	FExpressionInput                                   Input;                                                      // 0x0008   (0x0028)  
};

/// Class /Script/RenderTrace.MaterialExpressionPhysicalMaterialOutput
/// Size: 0x0010 (0x0000B0 - 0x0000C0)
class UMaterialExpressionPhysicalMaterialOutput : public UMaterialExpressionCustomOutput
{ 
public:
	TArray<FPhysicalMaterialTraceInput>                Inputs;                                                     // 0x00B0   (0x0010)  
};

