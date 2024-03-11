
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: AI
/// dependency: Animation
/// dependency: AnimGraphRuntime
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: GameplayAbilities
/// dependency: GameplayCameras
/// dependency: GameplayTags
/// dependency: Niagara

/// Enum /Game/Weapons/Blueprints/En_ShellTypes_01.En_ShellTypes_01
/// Size: 0x06
enum class En_ShellTypes_01 : uint8_t
{
	En_ShellTypes_01__NewEnumerator0                                                 = 0,
	En_ShellTypes_01__NewEnumerator1                                                 = 1,
	En_ShellTypes_01__NewEnumerator2                                                 = 2,
	En_ShellTypes_01__NewEnumerator3                                                 = 3,
	En_ShellTypes_01__NewEnumerator4                                                 = 4,
	En_ShellTypes_01__En_ShellTypes_MAX                                              = 5
};

/// Class /Game/Weapons/FORT_Melee/Blueprints/Impact/Melee_CameraShake.Melee_CameraShake_C
/// Size: 0x0000 (0x0001F0 - 0x0001F0)
class UMelee_CameraShake_C : public ULegacyCameraShake
{ 
public:
};

/// Class /Game/Weapons/FORT_BuildingTools/Meshes/Blueprint_Paper_VIM.Blueprint_Paper_VIM_C
/// Size: 0x14B0 (0x000560 - 0x001A10)
class UBlueprint_Paper_VIM_C : public UFortAnimInstance
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0558   (0x0008)  MISSED
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0560   (0x0008)  
	FAnimSubsystemInstance                             AnimBlueprintExtension_PropertyAccess;                      // 0x0568   (0x0008)  
	FAnimSubsystemInstance                             AnimBlueprintExtension_Base;                                // 0x0570   (0x0008)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x0578   (0x0020)  
	FAnimNode_MeshSpaceRefPose                         AnimGraphNode_MeshRefPose;                                  // 0x0598   (0x0010)  
	FAnimNode_ConvertComponentToLocalSpace             AnimGraphNode_ComponentToLocalSpace;                        // 0x05A8   (0x0020)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x05C8   (0x0008)  MISSED
	FAnimNode_AnimDynamics                             AnimGraphNode_AnimDynamics;                                 // 0x05D0   (0x0510)  
	FAnimNode_AnimDynamics                             AnimGraphNode_AnimDynamics0;                                // 0x0AE0   (0x0510)  
	FAnimNode_AnimDynamics                             AnimGraphNode_AnimDynamics1;                                // 0x0FF0   (0x0510)  
	FAnimNode_AnimDynamics                             AnimGraphNode_AnimDynamics2;                                // 0x1500   (0x0510)  


	/// Functions
	// Function /Game/Weapons/FORT_BuildingTools/Meshes/Blueprint_Paper_VIM.Blueprint_Paper_VIM_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                 // [0x18a39e4] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_BuildingTools/Meshes/Blueprint_Paper_VIM.Blueprint_Paper_VIM_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Blueprint_Paper_VIM_AnimGraphNode_AnimDynamics_9E5EF2534AF35AEF656F7798016DF75B
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_Blueprint_Paper_VIM_AnimGraphNode_AnimDynamics_9E5EF2534AF35AEF656F7798016DF75B(); // [0x18a39e4] BlueprintEvent       
	// Function /Game/Weapons/FORT_BuildingTools/Meshes/Blueprint_Paper_VIM.Blueprint_Paper_VIM_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Blueprint_Paper_VIM_AnimGraphNode_AnimDynamics_3AF159404BD341EBBF1D83916A014149
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_Blueprint_Paper_VIM_AnimGraphNode_AnimDynamics_3AF159404BD341EBBF1D83916A014149(); // [0x18a39e4] BlueprintEvent       
	// Function /Game/Weapons/FORT_BuildingTools/Meshes/Blueprint_Paper_VIM.Blueprint_Paper_VIM_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Blueprint_Paper_VIM_AnimGraphNode_AnimDynamics_ADC4973B4FF994FAB62509B5C600BF73
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_Blueprint_Paper_VIM_AnimGraphNode_AnimDynamics_ADC4973B4FF994FAB62509B5C600BF73(); // [0x18a39e4] BlueprintEvent       
	// Function /Game/Weapons/FORT_BuildingTools/Meshes/Blueprint_Paper_VIM.Blueprint_Paper_VIM_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Blueprint_Paper_VIM_AnimGraphNode_AnimDynamics_BCA43E284168E0AB05BB9E98D217441B
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_Blueprint_Paper_VIM_AnimGraphNode_AnimDynamics_BCA43E284168E0AB05BB9E98D217441B(); // [0x18a39e4] BlueprintEvent       
	// Function /Game/Weapons/FORT_BuildingTools/Meshes/Blueprint_Paper_VIM.Blueprint_Paper_VIM_C.ExecuteUbergraph_Blueprint_Paper_VIM
	// void ExecuteUbergraph_Blueprint_Paper_VIM(int32_t EntryPoint);                                                        // [0x18a39e4] Final                
};

/// Class /Game/Weapons/Tracers/TracerGeneric.TracerGeneric_C
/// Size: 0x0000 (0x000370 - 0x000370)
class ATracerGeneric_C : public AFortTracerBase
{ 
public:


	/// Functions
	// Function /Game/Weapons/Tracers/TracerGeneric.TracerGeneric_C.UserConstructionScript
	// void UserConstructionScript();                                                                                        // [0x18a39e4] Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/Weapons/FORT_BuildingTools/Blueprints/DefaultBuildingTool.DefaultBuildingTool_C
/// Size: 0x0000 (0x001698 - 0x001698)
class ADefaultBuildingTool_C : public AFortWeap_BuildingTool
{ 
public:
};

/// Class /Game/Weapons/FORT_BuildingTools/Blueprints/DefaultEditingTool.DefaultEditingTool_C
/// Size: 0x0000 (0x001590 - 0x001590)
class ADefaultEditingTool_C : public AFortWeap_EditingTool
{ 
public:
};

/// Class /Game/Weapons/FORT_Melee/Pickaxe_M_MED_Patches/Meshes/M_MED_Patches_Axe_AnimBP.M_MED_Patches_Axe_AnimBP_C
/// Size: 0x08B8 (0x000720 - 0x000FD8)
class UM_MED_Patches_Axe_AnimBP_C : public UCustomCharacterPartAnimInstance
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0720   (0x0008)  
	FAnimSubsystemInstance                             AnimBlueprintExtension_PropertyAccess;                      // 0x0728   (0x0008)  
	FAnimSubsystemInstance                             AnimBlueprintExtension_Base;                                // 0x0730   (0x0008)  
	FAnimNode_LinkedInputPose                          AnimGraphNode_SubInput;                                     // 0x0738   (0x00B0)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x07E8   (0x0020)  
	FGravityOverrideParamsStruct                       Gravity_Override_Params;                                    // 0x0808   (0x07B8)  
	FVector                                            GravityOverride;                                            // 0x0FC0   (0x0018)  


	/// Functions
	// Function /Game/Weapons/FORT_Melee/Pickaxe_M_MED_Patches/Meshes/M_MED_Patches_Axe_AnimBP.M_MED_Patches_Axe_AnimBP_C.AnimGraph
	// void AnimGraph(FPoseLink InPose, FPoseLink& AnimGraph);                                                               // [0x18a39e4] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Pickaxe_M_MED_Patches/Meshes/M_MED_Patches_Axe_AnimBP.M_MED_Patches_Axe_AnimBP_C.BlueprintUpdateAnimation
	// void BlueprintUpdateAnimation(float DeltaTimeX);                                                                      // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Pickaxe_M_MED_Patches/Meshes/M_MED_Patches_Axe_AnimBP.M_MED_Patches_Axe_AnimBP_C.ExecuteUbergraph_M_MED_Patches_Axe_AnimBP
	// void ExecuteUbergraph_M_MED_Patches_Axe_AnimBP(int32_t EntryPoint);                                                   // [0x18a39e4] Final|HasDefaults    
};

/// Class /Game/Weapons/FORT_Melee/Pickaxe_SpaceFeline/Meshes/SpaceFeline_Axe_AnimBP.SpaceFeline_Axe_AnimBP_C
/// Size: 0x1E70 (0x000720 - 0x002590)
class USpaceFeline_Axe_AnimBP_C : public UCustomCharacterPartAnimInstance
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0720   (0x0008)  
	FAnimBlueprintGeneratedMutableData                 __AnimBlueprintMutables;                                    // 0x0728   (0x0002)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x072A   (0x0006)  MISSED
	FAnimSubsystemInstance                             AnimBlueprintExtension_PropertyAccess;                      // 0x0730   (0x0008)  
	FAnimSubsystemInstance                             AnimBlueprintExtension_Base;                                // 0x0738   (0x0008)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x0740   (0x0020)  
	FAnimNode_CopyPoseFromMesh                         AnimGraphNode_CopyPoseFromMesh;                             // 0x0760   (0x0150)  
	FAnimNode_ConvertLocalToComponentSpace             AnimGraphNode_LocalToComponentSpace;                        // 0x08B0   (0x0020)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x08D0   (0x0048)  
	FAnimNode_ConvertComponentToLocalSpace             AnimGraphNode_ComponentToLocalSpace;                        // 0x0918   (0x0020)  
	FAnimNode_ConvertComponentToLocalSpace             AnimGraphNode_ComponentToLocalSpace0;                       // 0x0938   (0x0020)  
	FAnimNode_CopyPoseFromMesh                         AnimGraphNode_CopyPoseFromMesh1;                            // 0x0958   (0x0150)  
	FAnimNode_ConvertLocalToComponentSpace             AnimGraphNode_LocalToComponentSpace2;                       // 0x0AA8   (0x0020)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x0AC8   (0x0008)  MISSED
	FAnimNode_RigidBody                                AnimGraphNode_RigidBody;                                    // 0x0AD0   (0x0970)  
	FAnimNode_RigidBody                                AnimGraphNode_RigidBody3;                                   // 0x1440   (0x0970)  
	class UCustomCharacterPartAnimInstance*            Character_Part_Anim_Instance;                               // 0x1DB0   (0x0008)  
	double                                             FrontEnd_variable;                                          // 0x1DB8   (0x0008)  
	FGravityOverrideParamsStruct                       Gravity_Override_Params;                                    // 0x1DC0   (0x07B8)  
	FVector                                            GravityOverride;                                            // 0x2578   (0x0018)  


	/// Functions
	// Function /Game/Weapons/FORT_Melee/Pickaxe_SpaceFeline/Meshes/SpaceFeline_Axe_AnimBP.SpaceFeline_Axe_AnimBP_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                 // [0x18a39e4] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Pickaxe_SpaceFeline/Meshes/SpaceFeline_Axe_AnimBP.SpaceFeline_Axe_AnimBP_C.BlueprintUpdateAnimation
	// void BlueprintUpdateAnimation(float DeltaTimeX);                                                                      // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Pickaxe_SpaceFeline/Meshes/SpaceFeline_Axe_AnimBP.SpaceFeline_Axe_AnimBP_C.ExecuteUbergraph_SpaceFeline_Axe_AnimBP
	// void ExecuteUbergraph_SpaceFeline_Axe_AnimBP(int32_t EntryPoint);                                                     // [0x18a39e4] Final|HasDefaults    
};

/// Class /Game/Weapons/FORT_Melee/Pickaxe_StunningMountainOffhand/Meshes/StunningMountainOffhand_Axe_AnimBP.StunningMountainOffhand_Axe_AnimBP_C
/// Size: 0x1EC0 (0x000720 - 0x0025E0)
class UStunningMountainOffhand_Axe_AnimBP_C : public UCustomCharacterPartAnimInstance
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0720   (0x0008)  
	FAnimBlueprintGeneratedMutableData                 __AnimBlueprintMutables;                                    // 0x0728   (0x0002)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x072A   (0x0006)  MISSED
	FAnimSubsystemInstance                             AnimBlueprintExtension_PropertyAccess;                      // 0x0730   (0x0008)  
	FAnimSubsystemInstance                             AnimBlueprintExtension_Base;                                // 0x0738   (0x0008)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x0740   (0x0020)  
	FAnimNode_LinkedInputPose                          AnimGraphNode_SubInput;                                     // 0x0760   (0x00B0)  
	FAnimNode_SaveCachedPose                           AnimGraphNode_SaveCachedPose;                               // 0x0810   (0x0078)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x0888   (0x0028)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x08B0   (0x0128)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone0;                                  // 0x09D8   (0x0128)  
	FAnimNode_ConvertLocalToComponentSpace             AnimGraphNode_LocalToComponentSpace;                        // 0x0B00   (0x0020)  
	FAnimNode_ConvertComponentToLocalSpace             AnimGraphNode_ComponentToLocalSpace;                        // 0x0B20   (0x0020)  
	FAnimNode_ConvertLocalToComponentSpace             AnimGraphNode_LocalToComponentSpace1;                       // 0x0B40   (0x0020)  
	FAnimNode_ConvertComponentToLocalSpace             AnimGraphNode_ComponentToLocalSpace2;                       // 0x0B60   (0x0020)  
	FAnimNode_RigidBody                                AnimGraphNode_RigidBody;                                    // 0x0B80   (0x0970)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone3;                                  // 0x14F0   (0x0128)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x1618   (0x0048)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose4;                               // 0x1660   (0x0028)  
	FAnimNode_ConvertLocalToComponentSpace             AnimGraphNode_LocalToComponentSpace5;                       // 0x1688   (0x0020)  
	FAnimNode_ConvertComponentToLocalSpace             AnimGraphNode_ComponentToLocalSpace6;                       // 0x16A8   (0x0020)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x16C8   (0x0008)  MISSED
	FAnimNode_RigidBody                                AnimGraphNode_RigidBody7;                                   // 0x16D0   (0x0970)  
	FAnimNode_SaveCachedPose                           AnimGraphNode_SaveCachedPose8;                              // 0x2040   (0x0078)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose9;                               // 0x20B8   (0x0028)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone10;                                 // 0x20E0   (0x0128)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone11;                                 // 0x2208   (0x0128)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone12;                                 // 0x2330   (0x0128)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone13;                                 // 0x2458   (0x0128)  
	FVector                                            backBolt;                                                   // 0x2580   (0x0018)  
	FVector                                            frontBolt;                                                  // 0x2598   (0x0018)  
	bool                                               JumpAlpha;                                                  // 0x25B0   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x25B1   (0x0007)  MISSED
	double                                             JumpMoveAlpha;                                              // 0x25B8   (0x0008)  
	bool                                               Left;                                                       // 0x25C0   (0x0001)  
	unsigned char                                      UnknownData03_5[0x7];                                       // 0x25C1   (0x0007)  MISSED
	double                                             JumpSide;                                                   // 0x25C8   (0x0008)  
	bool                                               IsLarge;                                                    // 0x25D0   (0x0001)  
	unsigned char                                      UnknownData04_5[0x7];                                       // 0x25D1   (0x0007)  MISSED
	class APawn*                                       Owning_Pawn;                                                // 0x25D8   (0x0008)  


	/// Functions
	// Function /Game/Weapons/FORT_Melee/Pickaxe_StunningMountainOffhand/Meshes/StunningMountainOffhand_Axe_AnimBP.StunningMountainOffhand_Axe_AnimBP_C.AnimGraph
	// void AnimGraph(FPoseLink InPose, FPoseLink& AnimGraph);                                                               // [0x18a39e4] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Pickaxe_StunningMountainOffhand/Meshes/StunningMountainOffhand_Axe_AnimBP.StunningMountainOffhand_Axe_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_StunningMountainOffhand_Axe_AnimBP_AnimGraphNode_ModifyBone_7EF8DFB34A072F4B35900392BDECFB7A
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_StunningMountainOffhand_Axe_AnimBP_AnimGraphNode_ModifyBone_7EF8DFB34A072F4B35900392BDECFB7A(); // [0x18a39e4] BlueprintEvent       
	// Function /Game/Weapons/FORT_Melee/Pickaxe_StunningMountainOffhand/Meshes/StunningMountainOffhand_Axe_AnimBP.StunningMountainOffhand_Axe_AnimBP_C.BlueprintUpdateAnimation
	// void BlueprintUpdateAnimation(float DeltaTimeX);                                                                      // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Pickaxe_StunningMountainOffhand/Meshes/StunningMountainOffhand_Axe_AnimBP.StunningMountainOffhand_Axe_AnimBP_C.OnCharacterCustomizationLoaded
	// void OnCharacterCustomizationLoaded(class USkeletalMeshComponent* CustomBaseMesh, TArray<UCustomCharacterPart*>& CustomParts, TArray<USkeletalMeshComponentBudgeted*>& CustomMeshParts); // [0x18a39e4] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Pickaxe_StunningMountainOffhand/Meshes/StunningMountainOffhand_Axe_AnimBP.StunningMountainOffhand_Axe_AnimBP_C.ExecuteUbergraph_StunningMountainOffhand_Axe_AnimBP
	// void ExecuteUbergraph_StunningMountainOffhand_Axe_AnimBP(int32_t EntryPoint);                                         // [0x18a39e4] Final|HasDefaults    
};

/// Class /Game/Weapons/FORT_Crossbows/Crossbow/Effects/BP_Hook_Camera_LensEffect.BP_Hook_Camera_LensEffect_C
/// Size: 0x0000 (0x000380 - 0x000380)
class ABP_Hook_Camera_LensEffect_C : public AEmitterCameraLensEffectBase
{ 
public:
};

/// Class /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C
/// Size: 0x03C0 (0x001CE0 - 0x0020A0)
class AB_Ranged_Generic_C : public AFortWeaponRanged
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x1CE0   (0x0008)  
	float                                              AnimateScopePostProcess_DownSightPostProcessAmount_393D8BA5486879173797EF8C9B8D4642; // 0x1CE8   (0x0004)  
	SDK_UNDEFINED(1,15775) /* TEnumAsByte<ETimelineDirection> */ __um(AnimateScopePostProcess__Direction_393D8BA5486879173797EF8C9B8D4642); // 0x1CEC   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x1CED   (0x0003)  MISSED
	class UTimelineComponent*                          AnimateScopePostProcess;                                    // 0x1CF0   (0x0008)  
	class UNiagaraSystem*                              OpticGlint;                                                 // 0x1CF8   (0x0008)  
	bool                                               UseDestroyEffect;                                           // 0x1D00   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x1D01   (0x0007)  MISSED
	class UParticleSystem*                             WeaponDurabilityDestroyEffect;                              // 0x1D08   (0x0008)  
	class UParticleSystem*                             WeaponDurabilityDestroyEffectIcon;                          // 0x1D10   (0x0008)  
	bool                                               Use_Reload_Particles;                                       // 0x1D18   (0x0001)  
	bool                                               UseShellsOnFire_;                                           // 0x1D19   (0x0001)  
	bool                                               UseShellsOnReload_;                                         // 0x1D1A   (0x0001)  
	bool                                               UseShellsOnPump_;                                           // 0x1D1B   (0x0001)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x1D1C   (0x0004)  MISSED
	class UNiagaraSystem*                              Shell_Burst_FX;                                             // 0x1D20   (0x0008)  
	class UNiagaraSystem*                              Shell_Looping_FX;                                           // 0x1D28   (0x0008)  
	class UNiagaraSystem*                              Reload_System;                                              // 0x1D30   (0x0008)  
	class UMaterialInterface*                          Reload_Smoke_Material;                                      // 0x1D38   (0x0008)  
	FName                                              ReloadSocketName;                                           // 0x1D40   (0x0004)  
	FGameplayTag                                       TagToApplyOpticGlint;                                       // 0x1D44   (0x0004)  
	TArray<class AFortAIPawn*>                         Array_Of_Active_Enemy_AI;                                   // 0x1D48   (0x0010)  
	bool                                               Scope___Render_Enemies_To_Custom_Depth_Buffer;              // 0x1D58   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x1D59   (0x0003)  MISSED
	FName                                              Shells_Socket_Name;                                         // 0x1D5C   (0x0004)  
	SDK_UNDEFINED(1,15776) /* TEnumAsByte<En_ShellTypes_01> */ __um(ShellTypeSelect);                              // 0x1D60   (0x0001)  
	unsigned char                                      UnknownData04_5[0x7];                                       // 0x1D61   (0x0007)  MISSED
	double                                             Shells_Spawn_Rate_Scale;                                    // 0x1D68   (0x0008)  
	FVector                                            ShellsRotationRate;                                         // 0x1D70   (0x0018)  
	FVector                                            Shells_Velocity;                                            // 0x1D88   (0x0018)  
	FVector                                            Shells_Gravity;                                             // 0x1DA0   (0x0018)  
	FVector                                            Shells_Size;                                                // 0x1DB8   (0x0018)  
	double                                             Target_Scope_Vignette_Blur_Screen_Percentage;               // 0x1DD0   (0x0008)  
	double                                             ScopeCameraOffsetX;                                         // 0x1DD8   (0x0008)  
	double                                             ScopeCameraOffsetY;                                         // 0x1DE0   (0x0008)  
	double                                             Scope_Camera_Offset_Amount;                                 // 0x1DE8   (0x0008)  
	double                                             Inherit_Parent_Velocity;                                    // 0x1DF0   (0x0008)  
	double                                             Cylindrical_Radius;                                         // 0x1DF8   (0x0008)  
	double                                             Cylindrical_Height;                                         // 0x1E00   (0x0008)  
	FLinearColor                                       Shell_Color;                                                // 0x1E08   (0x0010)  
	class UNiagaraComponent*                           Spawned_Shells;                                             // 0x1E18   (0x0008)  
	bool                                               DebugShellsSocket_;                                         // 0x1E20   (0x0001)  
	unsigned char                                      UnknownData05_5[0x7];                                       // 0x1E21   (0x0007)  MISSED
	class USoundBase*                                  Sound_ScopeZoomIn;                                          // 0x1E28   (0x0008)  
	class USoundBase*                                  Sound_ScopeZoomOut;                                         // 0x1E30   (0x0008)  
	class UNiagaraComponent*                           Alteration_Ambient_PS;                                      // 0x1E38   (0x0008)  
	FGameplayTagContainer                              ReticleHUDElementTags;                                      // 0x1E40   (0x0020)  
	bool                                               Is_Wind_Enabled;                                            // 0x1E60   (0x0001)  
	unsigned char                                      UnknownData06_5[0x7];                                       // 0x1E61   (0x0007)  MISSED
	class UParticleSystem*                             MuzzleWindParticleSystem;                                   // 0x1E68   (0x0008)  
	bool                                               ShouldHideReticleAfterDelay;                                // 0x1E70   (0x0001)  
	unsigned char                                      UnknownData07_5[0x7];                                       // 0x1E71   (0x0007)  MISSED
	class UParticleSystemComponent*                    MuzzleWindParticleSpawned;                                  // 0x1E78   (0x0008)  
	int32_t                                            StencilBufferValue;                                         // 0x1E80   (0x0004)  
	unsigned char                                      UnknownData08_5[0x4];                                       // 0x1E84   (0x0004)  MISSED
	class UCurveFloat*                                 Curve_PitchOffset;                                          // 0x1E88   (0x0008)  
	class USoundBase*                                  Sound_ScopedInLoop;                                         // 0x1E90   (0x0008)  
	class UAudioComponent*                             ScopeZoomInComp;                                            // 0x1E98   (0x0008)  
	class UAudioComponent*                             ScopedInLoopComp;                                           // 0x1EA0   (0x0008)  
	class UAudioComponent*                             ScopeZoomOutComp;                                           // 0x1EA8   (0x0008)  
	double                                             Alteration_Ambient_PS_Max_Draw_Distance;                    // 0x1EB0   (0x0008)  
	double                                             Muzzle_PS_Max_Draw_Distance;                                // 0x1EB8   (0x0008)  
	double                                             Beam_PS_Max_Draw_Distance;                                  // 0x1EC0   (0x0008)  
	double                                             Reload_PS_Max_Draw_Distance;                                // 0x1EC8   (0x0008)  
	double                                             Shells_PS_Max_Draw_Distance;                                // 0x1ED0   (0x0008)  
	SDK_UNDEFINED(16,15777) /* FMulticastInlineDelegate */ __um(onAimDownSightsChanged);                           // 0x1ED8   (0x0010)  
	class UNiagaraComponent*                           MuzzleNiagaraComponentInstance;                             // 0x1EE8   (0x0008)  
	FTimerHandle                                       ScopeEffectDelay1Handle;                                    // 0x1EF0   (0x0008)  
	FTimerHandle                                       ScopeEffectDelay2Handle;                                    // 0x1EF8   (0x0008)  
	FScalableFloat                                     UseUpdatedFeedback;                                         // 0x1F00   (0x0028)  
	SDK_UNDEFINED(16,15778) /* FMulticastInlineDelegate */ __um(OnStartFiring);                                    // 0x1F28   (0x0010)  
	SDK_UNDEFINED(16,15779) /* FMulticastInlineDelegate */ __um(OnPersistentFireStopped);                          // 0x1F38   (0x0010)  
	class UStaticMesh*                                 ScopeMesh;                                                  // 0x1F48   (0x0008)  
	class UStaticMeshComponent*                        ScopeMesh1P_Spawned;                                        // 0x1F50   (0x0008)  
	TArray<class UMaterialInterface*>                  ScopeMaterialOverrides;                                     // 0x1F58   (0x0010)  
	float                                              Reload_Smoke_Lifetime;                                      // 0x1F68   (0x0004)  
	float                                              Reload_Smoke_Width_Scale;                                   // 0x1F6C   (0x0004)  
	FLinearColor                                       BaseColorAlpha;                                             // 0x1F70   (0x0010)  
	bool                                               Use_Emissive_in_Reload;                                     // 0x1F80   (0x0001)  
	unsigned char                                      UnknownData09_5[0x3];                                       // 0x1F81   (0x0003)  MISSED
	FLinearColor                                       Reload_Emissive_Color;                                      // 0x1F84   (0x0010)  
	bool                                               Is_Rocket_Launcher;                                         // 0x1F94   (0x0001)  
	unsigned char                                      UnknownData10_5[0x3];                                       // 0x1F95   (0x0003)  MISSED
	FLinearColor                                       Rocket_Launcher_Spark_Color;                                // 0x1F98   (0x0010)  
	bool                                               Reload_Ejects_Shells;                                       // 0x1FA8   (0x0001)  
	unsigned char                                      UnknownData11_5[0x7];                                       // 0x1FA9   (0x0007)  MISSED
	class UNiagaraComponent*                           OpticGlintComp;                                             // 0x1FB0   (0x0008)  
	class UFXSystemAsset*                              Muzzle_System;                                              // 0x1FB8   (0x0008)  
	float                                              Muzzle_Hue_Control;                                         // 0x1FC0   (0x0004)  
	float                                              Muzzle_Core_Cap_Scale;                                      // 0x1FC4   (0x0004)  
	FVector                                            Muzzle_Core_Scale;                                          // 0x1FC8   (0x0018)  
	float                                              Spark_Amount_Scale;                                         // 0x1FE0   (0x0004)  
	float                                              Smoke_Size_Scale;                                           // 0x1FE4   (0x0004)  
	FLinearColor                                       MuzzleSmokeInitialColor;                                    // 0x1FE8   (0x0010)  
	float                                              Smoke_Initial_Color_Scale_Variance;                         // 0x1FF8   (0x0004)  
	float                                              Smoke_Emissive_Scale;                                       // 0x1FFC   (0x0004)  
	bool                                               Use_Heated_Elements;                                        // 0x2000   (0x0001)  
	unsigned char                                      UnknownData12_5[0x3];                                       // 0x2001   (0x0003)  MISSED
	float                                              Decal_Size;                                                 // 0x2004   (0x0004)  
	FVector                                            Decal_Offset;                                               // 0x2008   (0x0018)  
	float                                              Decal_Alpha;                                                // 0x2020   (0x0004)  
	unsigned char                                      UnknownData13_5[0x4];                                       // 0x2024   (0x0004)  MISSED
	class UFXSystemComponent*                          Spawned_Muzzle_System;                                      // 0x2028   (0x0008)  
	int32_t                                            Burst_Loops;                                                // 0x2030   (0x0004)  
	bool                                               Muzzle_BakedSupressor__Always_Suppressed_;                  // 0x2034   (0x0001)  
	bool                                               Baked_Optics__Always_has_Optics_element_;                   // 0x2035   (0x0001)  
	unsigned char                                      UnknownData14_5[0x2];                                       // 0x2036   (0x0002)  MISSED
	double                                             MinPlayFXTime;                                              // 0x2038   (0x0008)  
	double                                             LastPlayFXTime;                                             // 0x2040   (0x0008)  
	FScalableFloat                                     UseNativeFX;                                                // 0x2048   (0x0028)  
	bool                                               bIsLocal;                                                   // 0x2070   (0x0001)  
	unsigned char                                      UnknownData15_5[0x7];                                       // 0x2071   (0x0007)  MISSED
	class UNiagaraSystem*                              Magazine_Eject_System;                                      // 0x2078   (0x0008)  
	FName                                              Magazine_Eject_Socket_Name;                                 // 0x2080   (0x0004)  
	bool                                               Use_Magazine_Eject;                                         // 0x2084   (0x0001)  
	unsigned char                                      UnknownData16_5[0x3];                                       // 0x2085   (0x0003)  MISSED
	class UMaterialInterface*                          Magazine_Eject_Material;                                    // 0x2088   (0x0008)  
	class UStaticMesh*                                 Magazine_Eject_Model;                                       // 0x2090   (0x0008)  
	float                                              ScopeEffectDelay1Time;                                      // 0x2098   (0x0004)  
	float                                              ScopeEffectDelay2Time;                                      // 0x209C   (0x0004)  


	/// Functions
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.Try Show Reticle
	// void Try Show Reticle();                                                                                              // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.Activate Magazine Eject FX
	// void Activate Magazine Eject FX();                                                                                    // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.MuzzleModCheck
	// void MuzzleModCheck(bool& isMuzzleBrake, bool& isMuzzleSupressor, bool& isMuzzleBreacher);                            // [0x18a39e4] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.MuzzleADSCheck
	// void MuzzleADSCheck(bool& Return ADS Bool);                                                                           // [0x18a39e4] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.ShowOpticGlint
	// void ShowOpticGlint(bool AimDownsights);                                                                              // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.StopLocalForceFeedback
	// void StopLocalForceFeedback(class UForceFeedbackEffect* ForceFeedbackEffect, FName tag);                              // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.PlayLocalForceFeedback
	// void PlayLocalForceFeedback(class UForceFeedbackEffect* ForceFeedbackEffect, FName tag, bool bLooping);               // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.getScopeComp
	// void getScopeComp(class UStaticMeshComponent*& ScopeComponent);                                                       // [0x18a39e4] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.initScope
	// void initScope();                                                                                                     // [0x18a39e4] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.IsNewFeedbackEnabled
	// void IsNewFeedbackEnabled(bool& Enabled);                                                                             // [0x18a39e4] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.LocalReloadStarted
	// void LocalReloadStarted(float ReloadTime, EFortWeaponReloadType ReloadType);                                          // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.PlayScopeOutAudio
	// void PlayScopeOutAudio();                                                                                             // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.GetScopeParameters
	// void GetScopeParameters(class UStaticMeshComponent*& ScopeComponent, FVector2D& DepthOfFieldVignetteRange, FVector& WeaponSightsOffset); // [0x18a39e4] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.StopScopedAudio
	// void StopScopedAudio();                                                                                               // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.StartScopedAudio
	// void StartScopedAudio();                                                                                              // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.SetPostProcessParams
	// void SetPostProcessParams(double InputPin);                                                                           // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.SetActiveAlterationIdleParticles
	// void SetActiveAlterationIdleParticles(bool Active);                                                                   // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.ShowReticle
	// void ShowReticle();                                                                                                   // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.HideReticle
	// void HideReticle();                                                                                                   // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.ActivateOrDeactivateWindParticle
	// void ActivateOrDeactivateWindParticle(bool bNewActive);                                                               // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.DeactivateMuzzleFX
	// void DeactivateMuzzleFX();                                                                                            // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.ActivateReloadSmokeFX
	// void ActivateReloadSmokeFX();                                                                                         // [0x18a39e4] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.ActivateShellsFX
	// void ActivateShellsFX(bool bool);                                                                                     // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.DeactivateShellsFX
	// void DeactivateShellsFX();                                                                                            // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.SetupShellFX
	// void SetupShellFX();                                                                                                  // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.UpdateShellEmittersFX
	// void UpdateShellEmittersFX();                                                                                         // [0x18a39e4] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.Muzzle Play Reload FX
	// void Muzzle Play Reload FX(TEnumAsByte<EFortReloadFXState> Selection);                                                // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.Muzzle Flash FX
	// void Muzzle Flash FX(bool Persistent Fire);                                                                           // [0x18a39e4] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.SetWpnRarity
	// void SetWpnRarity();                                                                                                  // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.UserConstructionScript
	// void UserConstructionScript();                                                                                        // [0x18a39e4] Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.AnimateScopePostProcess__FinishedFunc
	// void AnimateScopePostProcess__FinishedFunc();                                                                         // [0x18a39e4] BlueprintEvent       
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.AnimateScopePostProcess__UpdateFunc
	// void AnimateScopePostProcess__UpdateFunc();                                                                           // [0x18a39e4] BlueprintEvent       
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.AnimateScopePostProcess__Toggle Scope__EventFunc
	// void AnimateScopePostProcess__Toggle Scope__EventFunc();                                                              // [0x18a39e4] BlueprintEvent       
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.OnLoaded_F0DCFB40496C39D956D872BA984FA1F2
	// void OnLoaded_F0DCFB40496C39D956D872BA984FA1F2(class UObject* Loaded);                                                // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.OnLoaded_3A9BBE884A5C5966375089938B7DC0CA
	// void OnLoaded_3A9BBE884A5C5966375089938B7DC0CA(class UObject* Loaded);                                                // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.OnLoaded_83457BA843174AC6288682A342EBEAD9
	// void OnLoaded_83457BA843174AC6288682A342EBEAD9(class UObject* Loaded);                                                // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.OnLoaded_5B08633343C4DA6FF40449A8A36357E4
	// void OnLoaded_5B08633343C4DA6FF40449A8A36357E4(class UObject* Loaded);                                                // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.OnPlayWeaponFireFX
	// void OnPlayWeaponFireFX(bool bPersistentFire, bool bSecondaryFire);                                                   // [0x18a39e4] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.OnStopWeaponFireFX
	// void OnStopWeaponFireFX();                                                                                            // [0x18a39e4] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.OnPlayReloadFX
	// void OnPlayReloadFX(TEnumAsByte<EFortReloadFXState> ReloadStage);                                                     // [0x18a39e4] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.OnSetTargeting
	// void OnSetTargeting(bool bNewIsTargeting);                                                                            // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.K2_OnUnEquip
	// void K2_OnUnEquip();                                                                                                  // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.InitializeScopeVariables
	// void InitializeScopeVariables();                                                                                      // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.Update Enemy Custom Depths
	// void Update Enemy Custom Depths(bool Enable Or Disable, int32_t StencilBufferValue);                                  // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.OnWeaponAttached
	// void OnWeaponAttached();                                                                                              // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.OnInitAlteration
	// void OnInitAlteration(class UFortAlterationItemDefinition* NewAlteration);                                            // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.OnInitCosmeticAlterations
	// void OnInitCosmeticAlterations(FFortCosmeticModification CosmeticMod);                                                // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.ShellsON_(onPump)
	// void ShellsON_(onPump)();                                                                                             // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.OnEquippedWeaponDestory
	// void OnEquippedWeaponDestory();                                                                                       // [0x18a39e4] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.SetWeaponPierceThrough
	// void SetWeaponPierceThrough(bool Enable, int32_t TargetLimit);                                                        // [0x18a39e4] Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.SetWeaponPierceThrough_ClientRep
	// void SetWeaponPierceThrough_ClientRep(bool Enable, int32_t TargetLimit);                                              // [0x18a39e4] Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                              // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.OnWeaponVisibilityChanged
	// void OnWeaponVisibilityChanged(bool bVisible, bool bSetForLocalControllerOnly);                                       // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.HideWeaponMesh
	// void HideWeaponMesh();                                                                                                // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.ShowWeaponMesh
	// void ShowWeaponMesh();                                                                                                // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.HideWeapon
	// void HideWeapon();                                                                                                    // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.ShowWeapon
	// void ShowWeapon();                                                                                                    // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.ReverseScopePP
	// void ReverseScopePP();                                                                                                // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.ResetDoonceScopeSound
	// void ResetDoonceScopeSound();                                                                                         // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.UnhideThirdPersonStuff
	// void UnhideThirdPersonStuff();                                                                                        // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.PlayScopePP
	// void PlayScopePP();                                                                                                   // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.HideFirstPersonStuff
	// void HideFirstPersonStuff();                                                                                          // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.AbortScopeFX
	// void AbortScopeFX();                                                                                                  // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.HideThirdPersonStuff
	// void HideThirdPersonStuff();                                                                                          // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.UnhideFirstPersonStuffPart2
	// void UnhideFirstPersonStuffPart2(int32_t Which Call);                                                                 // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.UnhideFirstPersonStuffPart1
	// void UnhideFirstPersonStuffPart1();                                                                                   // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.ForceScopeFX
	// void ForceScopeFX();                                                                                                  // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.BindFireRateChange
	// void BindFireRateChange();                                                                                            // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.PitchUpOnRateOfFireChange
	// void PitchUpOnRateOfFireChange(float NewRateOfFire);                                                                  // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.ShellEjectionFixOn
	// void ShellEjectionFixOn();                                                                                            // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.Bind on Effects Quality
	// void Bind on Effects Quality();                                                                                       // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.ShellEjectionOff
	// void ShellEjectionOff();                                                                                              // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.ForceScopeBackImmediatly
	// void ForceScopeBackImmediatly();                                                                                      // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.OnPlayImpactFX
	// void OnPlayImpactFX(FHitResult& HitResult, TEnumAsByte<EPhysicalSurface> ImpactPhysicalSurface, class UFXSystemComponent* SpawnedPSC); // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.OnStartOverheated
	// void OnStartOverheated();                                                                                             // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.OnApplyFireModeData
	// void OnApplyFireModeData(class UFortWeaponFireModeData* FireModeData);                                                // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.ScopeEffectDelay2
	// void ScopeEffectDelay2();                                                                                             // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.ScopeEffectDelay1
	// void ScopeEffectDelay1();                                                                                             // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.ModAddedtoWeapon
	// void ModAddedtoWeapon(class UFortWeaponModItemDefinition* Mod, class AFortWeapon* Weapon);                            // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.CancelScopeTargeting
	// void CancelScopeTargeting();                                                                                          // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.UpdateModMagazine
	// void UpdateModMagazine();                                                                                             // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.ReceiveParticleData
	// void ReceiveParticleData(TArray<FBasicParticleData>& Data, class UNiagaraSystem* NiagaraSystem, FVector& SimulationPositionOffset); // [0x18a39e4] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.OnWeaponDetached
	// void OnWeaponDetached();                                                                                              // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.ReceiveEndPlay
	// void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);                                                       // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.ExecuteUbergraph_B_Ranged_Generic
	// void ExecuteUbergraph_B_Ranged_Generic(int32_t EntryPoint);                                                           // [0x18a39e4] Final|HasDefaults    
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.OnPersistentFireStopped__DelegateSignature
	// void OnPersistentFireStopped__DelegateSignature();                                                                    // [0x18a39e4] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.OnStartFiring__DelegateSignature
	// void OnStartFiring__DelegateSignature();                                                                              // [0x18a39e4] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.onAimDownSightsChanged__DelegateSignature
	// void onAimDownSightsChanged__DelegateSignature(bool AimDownsights);                                                   // [0x18a39e4] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C
/// Size: 0x0090 (0x001798 - 0x001828)
class AB_Athena_Pickaxe_Generic_C : public AFortWeaponPickaxeAthena
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x1798   (0x0008)  
	class UParticleSystemComponent*                    MeleeHeavy_PSC;                                             // 0x17A0   (0x0008)  
	class UParticleSystem*                             MeleeHeavy_ParticleSystem;                                  // 0x17A8   (0x0008)  
	class UParticleSystem*                             WeaponDurabilityDestroyEffect;                              // 0x17B0   (0x0008)  
	class UParticleSystem*                             WeaponDurabilityDestroyEffectIcon;                          // 0x17B8   (0x0008)  
	bool                                               UseDestroyEffect;                                           // 0x17C0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x17C1   (0x0007)  MISSED
	class UNiagaraComponent*                           Alteration_Ambient_PS;                                      // 0x17C8   (0x0008)  
	FVector                                            Effects_Color_Level;                                        // 0x17D0   (0x0018)  
	bool                                               Equipped;                                                   // 0x17E8   (0x0001)  
	bool                                               bEquipPendingInstigator;                                    // 0x17E9   (0x0001)  
	bool                                               UseTimeofDayControl;                                        // 0x17EA   (0x0001)  
	bool                                               Swing_Right_;                                               // 0x17EB   (0x0001)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x17EC   (0x0004)  MISSED
	class UFXSystemComponent*                          Impact_FX;                                                  // 0x17F0   (0x0008)  
	FRotator                                           Left_Swing_Rotation;                                        // 0x17F8   (0x0018)  
	FRotator                                           Right_Swing_Rotation;                                       // 0x1810   (0x0018)  


	/// Functions
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.Melee_Effect_Color
	// void Melee_Effect_Color(FVector& Melee_Color_Set);                                                                    // [0x18a39e4] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.Setup Swing Montage Section Index
	// int32_t Setup Swing Montage Section Index();                                                                          // [0x18a39e4] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.Binding Time of Day Control
	// void Binding Time of Day Control(bool Bind / Unbind (T/F));                                                           // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.UnbindSwingAnimTrailEvents
	// void UnbindSwingAnimTrailEvents();                                                                                    // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.BindSwingAnimTrailEvents
	// void BindSwingAnimTrailEvents();                                                                                      // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.PlayCQCPickaxeEnemyAudio
	// void PlayCQCPickaxeEnemyAudio(FHitResult Hit Result);                                                                 // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.SetActiveAlterationIdleParticles
	// void SetActiveAlterationIdleParticles(bool Active, bool Reset);                                                       // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.SetWpnRarity
	// void SetWpnRarity();                                                                                                  // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.UserConstructionScript
	// void UserConstructionScript();                                                                                        // [0x18a39e4] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.OnStatChanged_F171C56748FEA3E19F93088E968D3E21
	// void OnStatChanged_F171C56748FEA3E19F93088E968D3E21(FName StatName, int32_t StatValue);                               // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.OnLoaded_5BC5DA3B4E308BE7A188FBB2571333D2
	// void OnLoaded_5BC5DA3B4E308BE7A188FBB2571333D2(class UObject* Loaded);                                                // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.MeleeSwingRight
	// void MeleeSwingRight(bool First Right);                                                                               // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.MeleeSwingLeft
	// void MeleeSwingLeft(bool First Left);                                                                                 // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.FootStepLeft
	// void FootStepLeft();                                                                                                  // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.FootStepRight
	// void FootStepRight();                                                                                                 // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.MeleeSwingRight_End
	// void MeleeSwingRight_End();                                                                                           // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.MeleeSwingLeft_End
	// void MeleeSwingLeft_End();                                                                                            // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.OnPlayWeaponFireFX
	// void OnPlayWeaponFireFX(bool bPersistentFire, bool bSecondaryFire);                                                   // [0x18a39e4] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.PlayRClickImpacts
	// void PlayRClickImpacts();                                                                                             // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.OnEquippedWeaponDestory
	// void OnEquippedWeaponDestory();                                                                                       // [0x18a39e4] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.OnWeaponAttached
	// void OnWeaponAttached();                                                                                              // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.OnInitCosmeticAlterations
	// void OnInitCosmeticAlterations(FFortCosmeticModification CosmeticMod);                                                // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.OnWeaponVisibilityChanged
	// void OnWeaponVisibilityChanged(bool bVisible, bool bSetForLocalControllerOnly);                                       // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.OnWeaponDetached
	// void OnWeaponDetached();                                                                                              // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.OnInitWeaponCosmetics
	// void OnInitWeaponCosmetics();                                                                                         // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.HandleKillWatch
	// void HandleKillWatch();                                                                                               // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.UpdateBasedOnKills
	// void UpdateBasedOnKills(int32_t Watched Kills);                                                                       // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.Anim Trails Notify
	// void Anim Trails Notify(bool bActive);                                                                                // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.Anim Trails Disable
	// void Anim Trails Disable();                                                                                           // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.SwingRight
	// void SwingRight();                                                                                                    // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.SwingLeft
	// void SwingLeft();                                                                                                     // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.SwingRightEnd
	// void SwingRightEnd();                                                                                                 // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.SwingLeftEnd
	// void SwingLeftEnd();                                                                                                  // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.OnInstigatorSet
	// void OnInstigatorSet();                                                                                               // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.K2_OnUnEquip
	// void K2_OnUnEquip();                                                                                                  // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.TODCheck
	// void TODCheck(EFortDayPhase CurrentDayPhase, EFortDayPhase PreviousDayPhase, bool bAtCreation);                       // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.OnPlayImpactFX
	// void OnPlayImpactFX(FHitResult& HitResult, TEnumAsByte<EPhysicalSurface> ImpactPhysicalSurface, class UFXSystemComponent* SpawnedPSC); // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.HandleWeaponHolstered
	// void HandleWeaponHolstered();                                                                                         // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.Vehicle Passenger
	// void Vehicle Passenger(class AFortPlayerPawn* FortPlayerPawn, class AActor* NewVehicle, class AActor* OldVehicle);    // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.ExecuteUbergraph_B_Athena_Pickaxe_Generic
	// void ExecuteUbergraph_B_Athena_Pickaxe_Generic(int32_t EntryPoint);                                                   // [0x18a39e4] Final|HasDefaults    
};

/// Class /Game/Weapons/FORT_Melee/Pickaxe_EmberRae/Meshes/EmberRae_Axe_L_AnimBP_Post.EmberRae_Axe_L_AnimBP_Post_C
/// Size: 0x0BE8 (0x000720 - 0x001308)
class UEmberRae_Axe_L_AnimBP_Post_C : public UCustomCharacterPartAnimInstance
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0720   (0x0008)  
	FAnimSubsystemInstance                             AnimBlueprintExtension_PropertyAccess;                      // 0x0728   (0x0008)  
	FAnimSubsystemInstance                             AnimBlueprintExtension_Base;                                // 0x0730   (0x0008)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x0738   (0x0020)  
	FAnimNode_LinkedInputPose                          AnimGraphNode_SubInput;                                     // 0x0758   (0x00B0)  
	FAnimNode_ConvertComponentToLocalSpace             AnimGraphNode_ComponentToLocalSpace;                        // 0x0808   (0x0020)  
	FAnimNode_ConvertLocalToComponentSpace             AnimGraphNode_LocalToComponentSpace;                        // 0x0828   (0x0020)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0848   (0x0008)  MISSED
	FAnimNode_RigidBody                                AnimGraphNode_RigidBody;                                    // 0x0850   (0x0970)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x11C0   (0x0128)  
	class USkeletalMeshComponent*                      SkeletalMesh;                                               // 0x12E8   (0x0008)  
	FVector                                            TranslateMSTR;                                              // 0x12F0   (0x0018)  


	/// Functions
	// Function /Game/Weapons/FORT_Melee/Pickaxe_EmberRae/Meshes/EmberRae_Axe_L_AnimBP_Post.EmberRae_Axe_L_AnimBP_Post_C.AnimGraph
	// void AnimGraph(FPoseLink InPose, FPoseLink& AnimGraph);                                                               // [0x18a39e4] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Pickaxe_EmberRae/Meshes/EmberRae_Axe_L_AnimBP_Post.EmberRae_Axe_L_AnimBP_Post_C.BlueprintUpdateAnimation
	// void BlueprintUpdateAnimation(float DeltaTimeX);                                                                      // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Pickaxe_EmberRae/Meshes/EmberRae_Axe_L_AnimBP_Post.EmberRae_Axe_L_AnimBP_Post_C.BlueprintInitializeAnimation
	// void BlueprintInitializeAnimation();                                                                                  // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Pickaxe_EmberRae/Meshes/EmberRae_Axe_L_AnimBP_Post.EmberRae_Axe_L_AnimBP_Post_C.ExecuteUbergraph_EmberRae_Axe_L_AnimBP_Post
	// void ExecuteUbergraph_EmberRae_Axe_L_AnimBP_Post(int32_t EntryPoint);                                                 // [0x18a39e4] Final                
};

/// Class /Game/Weapons/FORT_Melee/Pickaxe_EmberRae/Meshes/EmberRae_Axe_R_AnimBP_Post.EmberRae_Axe_R_AnimBP_Post_C
/// Size: 0x0E40 (0x000720 - 0x001560)
class UEmberRae_Axe_R_AnimBP_Post_C : public UCustomCharacterPartAnimInstance
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0720   (0x0008)  
	FAnimSubsystemInstance                             AnimBlueprintExtension_PropertyAccess;                      // 0x0728   (0x0008)  
	FAnimSubsystemInstance                             AnimBlueprintExtension_Base;                                // 0x0730   (0x0008)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x0738   (0x0020)  
	FAnimNode_LinkedInputPose                          AnimGraphNode_SubInput;                                     // 0x0758   (0x00B0)  
	FAnimNode_ConvertComponentToLocalSpace             AnimGraphNode_ComponentToLocalSpace;                        // 0x0808   (0x0020)  
	FAnimNode_ConvertLocalToComponentSpace             AnimGraphNode_LocalToComponentSpace;                        // 0x0828   (0x0020)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0848   (0x0008)  MISSED
	FAnimNode_RigidBody                                AnimGraphNode_RigidBody;                                    // 0x0850   (0x0970)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x11C0   (0x0128)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone0;                                  // 0x12E8   (0x0128)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone1;                                  // 0x1410   (0x0128)  
	class USkeletalMeshComponent*                      SkeletalMesh;                                               // 0x1538   (0x0008)  
	FVector                                            TranslateMSTR;                                              // 0x1540   (0x0018)  
	double                                             StrapScaleAlpha;                                            // 0x1558   (0x0008)  


	/// Functions
	// Function /Game/Weapons/FORT_Melee/Pickaxe_EmberRae/Meshes/EmberRae_Axe_R_AnimBP_Post.EmberRae_Axe_R_AnimBP_Post_C.AnimGraph
	// void AnimGraph(FPoseLink InPose, FPoseLink& AnimGraph);                                                               // [0x18a39e4] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Pickaxe_EmberRae/Meshes/EmberRae_Axe_R_AnimBP_Post.EmberRae_Axe_R_AnimBP_Post_C.BlueprintInitializeAnimation
	// void BlueprintInitializeAnimation();                                                                                  // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Pickaxe_EmberRae/Meshes/EmberRae_Axe_R_AnimBP_Post.EmberRae_Axe_R_AnimBP_Post_C.BlueprintUpdateAnimation
	// void BlueprintUpdateAnimation(float DeltaTimeX);                                                                      // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Pickaxe_EmberRae/Meshes/EmberRae_Axe_R_AnimBP_Post.EmberRae_Axe_R_AnimBP_Post_C.ExecuteUbergraph_EmberRae_Axe_R_AnimBP_Post
	// void ExecuteUbergraph_EmberRae_Axe_R_AnimBP_Post(int32_t EntryPoint);                                                 // [0x18a39e4] Final                
};

/// Class /Game/Weapons/FORT_Melee/Pickaxe_Bistro_Astronaut_Female/Scripts/VariantScript_Pickaxe_BistroAstronaut_Style.VariantScript_Pickaxe_BistroAstronaut_Style_C
/// Size: 0x0000 (0x000028 - 0x000028)
class UVariantScript_Pickaxe_BistroAstronaut_Style_C : public UFortLoadoutTagDrivenVariantScript
{ 
public:


	/// Functions
	// Function /Game/Weapons/FORT_Melee/Pickaxe_Bistro_Astronaut_Female/Scripts/VariantScript_Pickaxe_BistroAstronaut_Style.VariantScript_Pickaxe_BistroAstronaut_Style_C.DetermineVariantSelection
	// FGameplayTag DetermineVariantSelection(FFortAthenaLoadout& Loadout);                                                  // [0x18a39e4] Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const 
};

/// Class /Game/Weapons/FORT_Melee/Pickaxe_Bistro_Astronaut_Female/Scripts/VariantScript_Pickaxe_BistroAstronaut_Color.VariantScript_Pickaxe_BistroAstronaut_Color_C
/// Size: 0x0000 (0x000028 - 0x000028)
class UVariantScript_Pickaxe_BistroAstronaut_Color_C : public UFortLoadoutTagDrivenVariantScript
{ 
public:


	/// Functions
	// Function /Game/Weapons/FORT_Melee/Pickaxe_Bistro_Astronaut_Female/Scripts/VariantScript_Pickaxe_BistroAstronaut_Color.VariantScript_Pickaxe_BistroAstronaut_Color_C.DetermineVariantSelection
	// FGameplayTag DetermineVariantSelection(FFortAthenaLoadout& Loadout);                                                  // [0x18a39e4] Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const 
};

/// Class /Game/Weapons/FORT_BuildingTools/DecoTool.DecoTool_C
/// Size: 0x0000 (0x0015A0 - 0x0015A0)
class ADecoTool_C : public AFortDecoTool
{ 
public:
};

/// Class /Game/Weapons/FORT_Melee/Blueprints/Impact/Harvest_CameraShake.Harvest_CameraShake_C
/// Size: 0x0000 (0x0001F0 - 0x0001F0)
class UHarvest_CameraShake_C : public ULegacyCameraShake
{ 
public:
};

/// Class /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C
/// Size: 0x00A1 (0x001AB8 - 0x001B59)
class AB_Athena_Pickaxe_DualWield_Generic_C : public AFortWeaponPickaxeDualWieldAthena
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x1AB8   (0x0008)  
	bool                                               Equipped;                                                   // 0x1AC0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x1AC1   (0x0007)  MISSED
	class UNiagaraComponent*                           Alteration_Ambient_PS;                                      // 0x1AC8   (0x0008)  
	class UParticleSystem*                             MeleeHeavy_ParticleSystem;                                  // 0x1AD0   (0x0008)  
	class UParticleSystemComponent*                    MeleeHeavy_PSC;                                             // 0x1AD8   (0x0008)  
	bool                                               UseDestroyEffect;                                           // 0x1AE0   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x1AE1   (0x0007)  MISSED
	class UParticleSystem*                             WeaponDurabilityDestroyEffect;                              // 0x1AE8   (0x0008)  
	class UParticleSystem*                             WeaponDurabilityDestroyEffectIcon;                          // 0x1AF0   (0x0008)  
	class UNiagaraComponent*                           Offhand_Alteration_Ambient_PS;                              // 0x1AF8   (0x0008)  
	bool                                               bEquipPendingInstigator;                                    // 0x1B00   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x1B01   (0x0003)  MISSED
	FName                                              Offhand_Socket_Name;                                        // 0x1B04   (0x0004)  
	class UAnimMontage*                                MontageReference;                                           // 0x1B08   (0x0008)  
	bool                                               UseTimeofDayControl;                                        // 0x1B10   (0x0001)  
	unsigned char                                      UnknownData03_5[0x7];                                       // 0x1B11   (0x0007)  MISSED
	class UFXSystemComponent*                          Impact_FX;                                                  // 0x1B18   (0x0008)  
	bool                                               Swing_Right_;                                               // 0x1B20   (0x0001)  
	unsigned char                                      UnknownData04_5[0x7];                                       // 0x1B21   (0x0007)  MISSED
	FRotator                                           Left_Swing_Rotation;                                        // 0x1B28   (0x0018)  
	FRotator                                           Right_Swing_Rotation;                                       // 0x1B40   (0x0018)  
	bool                                               Swing_Right_0;                                              // 0x1B58   (0x0001)  


	/// Functions
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.Binding Time of Day Control
	// void Binding Time of Day Control(bool Bind / Unbind (T/F));                                                           // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.SetWpnRarity
	// void SetWpnRarity();                                                                                                  // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.Unbind Dual Melee Swing Events
	// void Unbind Dual Melee Swing Events();                                                                                // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.Bind Dual Melee Swing Events
	// void Bind Dual Melee Swing Events();                                                                                  // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.Set Active Alteration Idle Particles
	// void Set Active Alteration Idle Particles(bool Active, bool Reset);                                                   // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.UserConstructionScript
	// void UserConstructionScript();                                                                                        // [0x18a39e4] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.OnStatChanged_9F72D14C4573F491E38302B51F08A0B8
	// void OnStatChanged_9F72D14C4573F491E38302B51F08A0B8(FName StatName, int32_t StatValue);                               // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.OnLoaded_F1C7B8E24518F4F2DE2C8DBABB95E06D
	// void OnLoaded_F1C7B8E24518F4F2DE2C8DBABB95E06D(class UObject* Loaded);                                                // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.OnPlayWeaponFireFX
	// void OnPlayWeaponFireFX(bool bPersistentFire, bool bSecondaryFire);                                                   // [0x18a39e4] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.PlayRClickImpacts
	// void PlayRClickImpacts();                                                                                             // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.OnEquippedWeaponDestory
	// void OnEquippedWeaponDestory();                                                                                       // [0x18a39e4] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.OnWeaponAttached
	// void OnWeaponAttached();                                                                                              // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.OnInitCosmeticAlterations
	// void OnInitCosmeticAlterations(FFortCosmeticModification CosmeticMod);                                                // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.OnWeaponVisibilityChanged
	// void OnWeaponVisibilityChanged(bool bVisible, bool bSetForLocalControllerOnly);                                       // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.OnWeaponDetached
	// void OnWeaponDetached();                                                                                              // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.OnInitWeaponCosmetics
	// void OnInitWeaponCosmetics();                                                                                         // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.Swing Left End
	// void Swing Left End();                                                                                                // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.Swing Right End
	// void Swing Right End();                                                                                               // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.OnInstigatorSet
	// void OnInstigatorSet();                                                                                               // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.K2_OnUnEquip
	// void K2_OnUnEquip();                                                                                                  // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.SwingRight_Common
	// void SwingRight_Common();                                                                                             // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.SwingLeft_Common
	// void SwingLeft_Common();                                                                                              // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.Swing Left
	// void Swing Left();                                                                                                    // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.Swing Right
	// void Swing Right();                                                                                                   // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.Swing Left 2
	// void Swing Left 2();                                                                                                  // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.Swing Right 2
	// void Swing Right 2();                                                                                                 // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.Anim Trails Notify
	// void Anim Trails Notify(bool bActive);                                                                                // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.Anim Trails Disable
	// void Anim Trails Disable();                                                                                           // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.OnPlayImpactFX
	// void OnPlayImpactFX(FHitResult& HitResult, TEnumAsByte<EPhysicalSurface> ImpactPhysicalSurface, class UFXSystemComponent* SpawnedPSC); // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.TODCheck
	// void TODCheck(EFortDayPhase CurrentDayPhase, EFortDayPhase PreviousDayPhase, bool bAtCreation);                       // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.HandleKillWatch
	// void HandleKillWatch();                                                                                               // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.UpdateBasedOnKills
	// void UpdateBasedOnKills(int32_t Watched Kills);                                                                       // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.Vehicle Passenger
	// void Vehicle Passenger(class AFortPlayerPawn* FortPlayerPawn, class AActor* NewVehicle, class AActor* OldVehicle);    // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.ExecuteUbergraph_B_Athena_Pickaxe_DualWield_Generic
	// void ExecuteUbergraph_B_Athena_Pickaxe_DualWield_Generic(int32_t EntryPoint);                                         // [0x18a39e4] Final|HasDefaults    
};

/// Class /Game/Weapons/FORT_Melee/Pickaxe_NitroFlow/Meshes/NitroFlow_Axe_AnimBP.NitroFlow_Axe_AnimBP_C
/// Size: 0x0130 (0x000720 - 0x000850)
class UNitroFlow_Axe_AnimBP_C : public UCustomCharacterPartAnimInstance
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0720   (0x0008)  
	FAnimSubsystemInstance                             AnimBlueprintExtension_PropertyAccess;                      // 0x0728   (0x0008)  
	FAnimSubsystemInstance                             AnimBlueprintExtension_Base;                                // 0x0730   (0x0008)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x0738   (0x0020)  
	FAnimNode_LinkedInputPose                          AnimGraphNode_SubInput;                                     // 0x0758   (0x00B0)  
	FAnimNode_Slot                                     AnimGraphNode_Slot;                                         // 0x0808   (0x0048)  


	/// Functions
	// Function /Game/Weapons/FORT_Melee/Pickaxe_NitroFlow/Meshes/NitroFlow_Axe_AnimBP.NitroFlow_Axe_AnimBP_C.AnimGraph
	// void AnimGraph(FPoseLink InPose, FPoseLink& AnimGraph);                                                               // [0x18a39e4] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Pickaxe_NitroFlow/Meshes/NitroFlow_Axe_AnimBP.NitroFlow_Axe_AnimBP_C.ExecuteUbergraph_NitroFlow_Axe_AnimBP
	// void ExecuteUbergraph_NitroFlow_Axe_AnimBP(int32_t EntryPoint);                                                       // [0x18a39e4] Final                
};

/// Class /Game/Weapons/FORT_Melee/Pickaxe_LoudPhoenix/Meshes/LoudPhoenix_Axe_AnimBP.LoudPhoenix_Axe_AnimBP_C
/// Size: 0x00E8 (0x000720 - 0x000808)
class ULoudPhoenix_Axe_AnimBP_C : public UCustomCharacterPartAnimInstance
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0720   (0x0008)  
	FAnimSubsystemInstance                             AnimBlueprintExtension_PropertyAccess;                      // 0x0728   (0x0008)  
	FAnimSubsystemInstance                             AnimBlueprintExtension_Base;                                // 0x0730   (0x0008)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x0738   (0x0020)  
	FAnimNode_LinkedInputPose                          AnimGraphNode_SubInput;                                     // 0x0758   (0x00B0)  


	/// Functions
	// Function /Game/Weapons/FORT_Melee/Pickaxe_LoudPhoenix/Meshes/LoudPhoenix_Axe_AnimBP.LoudPhoenix_Axe_AnimBP_C.AnimGraph
	// void AnimGraph(FPoseLink InPose, FPoseLink& AnimGraph);                                                               // [0x18a39e4] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Pickaxe_LoudPhoenix/Meshes/LoudPhoenix_Axe_AnimBP.LoudPhoenix_Axe_AnimBP_C.ExecuteUbergraph_LoudPhoenix_Axe_AnimBP
	// void ExecuteUbergraph_LoudPhoenix_Axe_AnimBP(int32_t EntryPoint);                                                     // [0x18a39e4] Final                
};

/// Class /Game/Weapons/Prototype/ObjectMover/Blueprints/ObjectInteractionBehaviors/PossessProp/Creative_Player_PropInterface.Creative_Player_PropInterface_C
/// Size: 0x0000 (0x000028 - 0x000028)
class UCreative_Player_PropInterface_C : public UInterface
{ 
public:


	/// Functions
	// Function /Game/Weapons/Prototype/ObjectMover/Blueprints/ObjectInteractionBehaviors/PossessProp/Creative_Player_PropInterface.Creative_Player_PropInterface_C.PreDestroy
	// void PreDestroy();                                                                                                    // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/Weapons/FORT_Melee/Pickaxe_Mechanical_Engineer_Female/Meshes/Mechanical_Engineer_Female_AnimBP.Mechanical_Engineer_Female_AnimBP_C
/// Size: 0x10F8 (0x000720 - 0x001818)
class UMechanical_Engineer_Female_AnimBP_C : public UCustomCharacterPartAnimInstance
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0720   (0x0008)  
	FAnimSubsystemInstance                             AnimBlueprintExtension_PropertyAccess;                      // 0x0728   (0x0008)  
	FAnimSubsystemInstance                             AnimBlueprintExtension_Base;                                // 0x0730   (0x0008)  
	FAnimNode_LinkedInputPose                          AnimGraphNode_LinkedInputPose;                              // 0x0738   (0x00B0)  
	FAnimNode_ConvertLocalToComponentSpace             AnimGraphNode_LocalToComponentSpace;                        // 0x07E8   (0x0020)  
	FAnimNode_ConvertComponentToLocalSpace             AnimGraphNode_ComponentToLocalSpace;                        // 0x0808   (0x0020)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x0828   (0x0020)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0848   (0x0008)  MISSED
	FAnimNode_AnimDynamics                             AnimGraphNode_AnimDynamics;                                 // 0x0850   (0x0510)  
	FAnimNode_RigidBody                                AnimGraphNode_RigidBody;                                    // 0x0D60   (0x0970)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x16D0   (0x0128)  
	FRotator                                           gear_rot;                                                   // 0x17F8   (0x0018)  
	class USkeletalMeshComponent*                      skel_mesh;                                                  // 0x1810   (0x0008)  


	/// Functions
	// Function /Game/Weapons/FORT_Melee/Pickaxe_Mechanical_Engineer_Female/Meshes/Mechanical_Engineer_Female_AnimBP.Mechanical_Engineer_Female_AnimBP_C.AnimGraph
	// void AnimGraph(FPoseLink InPose, FPoseLink& AnimGraph);                                                               // [0x18a39e4] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Pickaxe_Mechanical_Engineer_Female/Meshes/Mechanical_Engineer_Female_AnimBP.Mechanical_Engineer_Female_AnimBP_C.BlueprintUpdateAnimation
	// void BlueprintUpdateAnimation(float DeltaTimeX);                                                                      // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Pickaxe_Mechanical_Engineer_Female/Meshes/Mechanical_Engineer_Female_AnimBP.Mechanical_Engineer_Female_AnimBP_C.BlueprintInitializeAnimation
	// void BlueprintInitializeAnimation();                                                                                  // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Pickaxe_Mechanical_Engineer_Female/Meshes/Mechanical_Engineer_Female_AnimBP.Mechanical_Engineer_Female_AnimBP_C.ExecuteUbergraph_Mechanical_Engineer_Female_AnimBP
	// void ExecuteUbergraph_Mechanical_Engineer_Female_AnimBP(int32_t EntryPoint);                                          // [0x18a39e4] Final                
};

/// Class /Game/Weapons/FORT_Melee/Pickaxe_HightowerTapas/Meshes/HighTower_Tapas_Axe_AnimBP.HighTower_Tapas_Axe_AnimBP_C
/// Size: 0x1390 (0x000730 - 0x001AC0)
class UHighTower_Tapas_Axe_AnimBP_C : public UCustomCharacterPartAnimInstance_HightowerTapasAxe
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0730   (0x0008)  
	FAnimBlueprintGeneratedMutableData                 __AnimBlueprintMutables;                                    // 0x0738   (0x0002)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x073A   (0x0006)  MISSED
	FAnimSubsystemInstance                             AnimBlueprintExtension_PropertyAccess;                      // 0x0740   (0x0008)  
	FAnimSubsystemInstance                             AnimBlueprintExtension_Base;                                // 0x0748   (0x0008)  
	FAnimNode_ConvertLocalToComponentSpace             AnimGraphNode_LocalToComponentSpace;                        // 0x0750   (0x0020)  
	FAnimNode_CopyPoseFromMesh                         AnimGraphNode_CopyPoseFromMesh;                             // 0x0770   (0x0150)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x08C0   (0x0020)  
	FAnimNode_Trail                                    AnimGraphNode_Trail;                                        // 0x08E0   (0x02A0)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone;                                   // 0x0B80   (0x0128)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x0CA8   (0x0048)  
	FAnimNode_RigidBody                                AnimGraphNode_RigidBody;                                    // 0x0CF0   (0x0970)  
	FAnimNode_ConvertComponentToLocalSpace             AnimGraphNode_ComponentToLocalSpace;                        // 0x1660   (0x0020)  
	FAnimNode_ConvertComponentToLocalSpace             AnimGraphNode_ComponentToLocalSpace0;                       // 0x1680   (0x0020)  
	FAnimNode_SaveCachedPose                           AnimGraphNode_SaveCachedPose;                               // 0x16A0   (0x0078)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose;                                // 0x1718   (0x0028)  
	FAnimNode_ConvertLocalToComponentSpace             AnimGraphNode_LocalToComponentSpace1;                       // 0x1740   (0x0020)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose2;                               // 0x1760   (0x0028)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose3;                               // 0x1788   (0x0028)  
	FAnimNode_ModifyBone                               AnimGraphNode_ModifyBone4;                                  // 0x17B0   (0x0128)  
	FAnimNode_ConvertLocalToComponentSpace             AnimGraphNode_LocalToComponentSpace5;                       // 0x18D8   (0x0020)  
	FAnimNode_ConvertComponentToLocalSpace             AnimGraphNode_ComponentToLocalSpace6;                       // 0x18F8   (0x0020)  
	FAnimNode_Slot                                     AnimGraphNode_Slot;                                         // 0x1918   (0x0048)  
	FAnimNode_SaveCachedPose                           AnimGraphNode_SaveCachedPose7;                              // 0x1960   (0x0078)  
	FAnimNode_TwoWayBlend                              AnimGraphNode_TwoWayBlend;                                  // 0x19D8   (0x00C0)  
	FAnimNode_UseCachedPose                            AnimGraphNode_UseCachedPose8;                               // 0x1A98   (0x0028)  


	/// Functions
	// Function /Game/Weapons/FORT_Melee/Pickaxe_HightowerTapas/Meshes/HighTower_Tapas_Axe_AnimBP.HighTower_Tapas_Axe_AnimBP_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                 // [0x18a39e4] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Pickaxe_HightowerTapas/Meshes/HighTower_Tapas_Axe_AnimBP.HighTower_Tapas_Axe_AnimBP_C.ExecuteUbergraph_HighTower_Tapas_Axe_AnimBP
	// void ExecuteUbergraph_HighTower_Tapas_Axe_AnimBP(int32_t EntryPoint);                                                 // [0x18a39e4] Final                
};

/// Class /Game/Weapons/FORT_Melee/Pickaxe_MetalScout/Meshes/MetalScout_Axe_AnimBP.MetalScout_Axe_AnimBP_C
/// Size: 0x00E8 (0x000720 - 0x000808)
class UMetalScout_Axe_AnimBP_C : public UCustomCharacterPartAnimInstance
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0720   (0x0008)  
	FAnimSubsystemInstance                             AnimBlueprintExtension_PropertyAccess;                      // 0x0728   (0x0008)  
	FAnimSubsystemInstance                             AnimBlueprintExtension_Base;                                // 0x0730   (0x0008)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x0738   (0x0020)  
	FAnimNode_LinkedInputPose                          AnimGraphNode_SubInput;                                     // 0x0758   (0x00B0)  


	/// Functions
	// Function /Game/Weapons/FORT_Melee/Pickaxe_MetalScout/Meshes/MetalScout_Axe_AnimBP.MetalScout_Axe_AnimBP_C.AnimGraph
	// void AnimGraph(FPoseLink InPose, FPoseLink& AnimGraph);                                                               // [0x18a39e4] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Pickaxe_MetalScout/Meshes/MetalScout_Axe_AnimBP.MetalScout_Axe_AnimBP_C.ExecuteUbergraph_MetalScout_Axe_AnimBP
	// void ExecuteUbergraph_MetalScout_Axe_AnimBP(int32_t EntryPoint);                                                      // [0x18a39e4] Final                
};

/// Class /Game/Weapons/FORT_Melee/Pickaxe_GoldenGuard/Meshes/GoldenGuard_Axe_AnimBP.GoldenGuard_Axe_AnimBP_C
/// Size: 0x00E8 (0x000720 - 0x000808)
class UGoldenGuard_Axe_AnimBP_C : public UCustomCharacterPartAnimInstance
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0720   (0x0008)  
	FAnimSubsystemInstance                             AnimBlueprintExtension_PropertyAccess;                      // 0x0728   (0x0008)  
	FAnimSubsystemInstance                             AnimBlueprintExtension_Base;                                // 0x0730   (0x0008)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x0738   (0x0020)  
	FAnimNode_LinkedInputPose                          AnimGraphNode_SubInput;                                     // 0x0758   (0x00B0)  


	/// Functions
	// Function /Game/Weapons/FORT_Melee/Pickaxe_GoldenGuard/Meshes/GoldenGuard_Axe_AnimBP.GoldenGuard_Axe_AnimBP_C.AnimGraph
	// void AnimGraph(FPoseLink InPose, FPoseLink& AnimGraph);                                                               // [0x18a39e4] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Pickaxe_GoldenGuard/Meshes/GoldenGuard_Axe_AnimBP.GoldenGuard_Axe_AnimBP_C.ExecuteUbergraph_GoldenGuard_Axe_AnimBP
	// void ExecuteUbergraph_GoldenGuard_Axe_AnimBP(int32_t EntryPoint);                                                     // [0x18a39e4] Final                
};

/// Struct /Game/Weapons/FORT_BuildingTools/Meshes/Blueprint_Paper_VIM.Blueprint_Paper_VIM_C.AnimBlueprintGeneratedConstantData
/// Size: 0x020F (0x000001 - 0x000210)
struct FAnimBlueprintGeneratedConstantDatadup_184 : FAnimBlueprintConstantData
{ 
	unsigned char                                      UnknownData00_3[0x3];                                       // 0x0001   (0x0003)  MISSED
	FName                                              __NameProperty;                                             // 0x0004   (0x0004)  
	FName                                              __NameProperty0;                                            // 0x0008   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	FAnimNodeFunctionRef                               __StructProperty;                                           // 0x0010   (0x0018)  
	FAnimSubsystem_PropertyAccess                      AnimBlueprintExtension_PropertyAccess;                      // 0x0028   (0x0080)  
	FAnimSubsystem_Base                                AnimBlueprintExtension_Base;                                // 0x00A8   (0x0018)  
	FAnimNodeExposedValueHandler_PropertyAccess        AnimGraphNode_Root;                                         // 0x00C0   (0x0030)  
	FAnimNodeExposedValueHandler_PropertyAccess        AnimGraphNode_MeshRefPose;                                  // 0x00F0   (0x0030)  
	FAnimNodeExposedValueHandler_PropertyAccess        AnimGraphNode_ComponentToLocalSpace;                        // 0x0120   (0x0030)  
	FAnimNodeExposedValueHandler_PropertyAccess        AnimGraphNode_AnimDynamics;                                 // 0x0150   (0x0030)  
	FAnimNodeExposedValueHandler_PropertyAccess        AnimGraphNode_AnimDynamics1;                                // 0x0180   (0x0030)  
	FAnimNodeExposedValueHandler_PropertyAccess        AnimGraphNode_AnimDynamics2;                                // 0x01B0   (0x0030)  
	FAnimNodeExposedValueHandler_PropertyAccess        AnimGraphNode_AnimDynamics3;                                // 0x01E0   (0x0030)  
};

/// Struct /Game/Weapons/FORT_Melee/Pickaxe_M_MED_Patches/Meshes/M_MED_Patches_Axe_AnimBP.M_MED_Patches_Axe_AnimBP_C.AnimBlueprintGeneratedConstantData
/// Size: 0x011F (0x000001 - 0x000120)
struct FAnimBlueprintGeneratedConstantDatadup_185 : FAnimBlueprintConstantData
{ 
	unsigned char                                      UnknownData00_3[0x7];                                       // 0x0001   (0x0007)  MISSED
	FAnimNodeFunctionRef                               __StructProperty;                                           // 0x0008   (0x0018)  
	FName                                              __NameProperty;                                             // 0x0020   (0x0004)  
	FName                                              __NameProperty0;                                            // 0x0024   (0x0004)  
	FAnimSubsystem_PropertyAccess                      AnimBlueprintExtension_PropertyAccess;                      // 0x0028   (0x0080)  
	FAnimSubsystem_Base                                AnimBlueprintExtension_Base;                                // 0x00A8   (0x0018)  
	FAnimNodeExposedValueHandler_PropertyAccess        AnimGraphNode_SubInput;                                     // 0x00C0   (0x0030)  
	FAnimNodeExposedValueHandler_PropertyAccess        AnimGraphNode_Root;                                         // 0x00F0   (0x0030)  
};

/// Struct /Game/Weapons/FORT_Melee/Pickaxe_SpaceFeline/Meshes/SpaceFeline_Axe_AnimBP.SpaceFeline_Axe_AnimBP_C.AnimBlueprintGeneratedMutableData
/// Size: 0x0001 (0x000001 - 0x000002)
struct FAnimBlueprintGeneratedMutableDatadup_186 : FAnimBlueprintMutableData
{ 
	bool                                               __BoolProperty;                                             // 0x0001   (0x0001)  
};

/// Struct /Game/Weapons/FORT_Melee/Pickaxe_SpaceFeline/Meshes/SpaceFeline_Axe_AnimBP.SpaceFeline_Axe_AnimBP_C.AnimBlueprintGeneratedConstantData
/// Size: 0x02C7 (0x000001 - 0x0002C8)
struct FAnimBlueprintGeneratedConstantDatadup_187 : FAnimBlueprintConstantData
{ 
	unsigned char                                      UnknownData00_3[0x3];                                       // 0x0001   (0x0003)  MISSED
	FName                                              __NameProperty;                                             // 0x0004   (0x0004)  
	FName                                              __NameProperty0;                                            // 0x0008   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	class UBlendProfile*                               __BlendProfile;                                             // 0x0010   (0x0008)  
	class UCurveFloat*                                 __CurveFloat;                                               // 0x0018   (0x0008)  
	bool                                               __BoolProperty;                                             // 0x0020   (0x0001)  
	EAlphaBlendOption                                  __EnumProperty;                                             // 0x0021   (0x0001)  
	EBlendListTransitionType                           __EnumProperty1;                                            // 0x0022   (0x0001)  
	unsigned char                                      UnknownData02_5[0x5];                                       // 0x0023   (0x0005)  MISSED
	TArray<float>                                      __ArrayProperty;                                            // 0x0028   (0x0010)  
	FAnimNodeFunctionRef                               __StructProperty;                                           // 0x0038   (0x0018)  
	FAnimSubsystem_PropertyAccess                      AnimBlueprintExtension_PropertyAccess;                      // 0x0050   (0x0080)  
	FAnimSubsystem_Base                                AnimBlueprintExtension_Base;                                // 0x00D0   (0x0018)  
	FAnimNodeExposedValueHandler_PropertyAccess        AnimGraphNode_Root;                                         // 0x00E8   (0x0030)  
	FAnimNodeExposedValueHandler_PropertyAccess        AnimGraphNode_CopyPoseFromMesh;                             // 0x0118   (0x0030)  
	FAnimNodeExposedValueHandler_PropertyAccess        AnimGraphNode_LocalToComponentSpace;                        // 0x0148   (0x0030)  
	FAnimNodeExposedValueHandler_PropertyAccess        AnimGraphNode_BlendListByBool;                              // 0x0178   (0x0030)  
	FAnimNodeExposedValueHandler_PropertyAccess        AnimGraphNode_ComponentToLocalSpace;                        // 0x01A8   (0x0030)  
	FAnimNodeExposedValueHandler_PropertyAccess        AnimGraphNode_ComponentToLocalSpace2;                       // 0x01D8   (0x0030)  
	FAnimNodeExposedValueHandler_PropertyAccess        AnimGraphNode_CopyPoseFromMesh3;                            // 0x0208   (0x0030)  
	FAnimNodeExposedValueHandler_PropertyAccess        AnimGraphNode_LocalToComponentSpace4;                       // 0x0238   (0x0030)  
	FAnimNodeExposedValueHandler_PropertyAccess        AnimGraphNode_RigidBody;                                    // 0x0268   (0x0030)  
	FAnimNodeExposedValueHandler_PropertyAccess        AnimGraphNode_RigidBody5;                                   // 0x0298   (0x0030)  
};

/// Struct /Game/Weapons/FORT_Melee/Pickaxe_StunningMountainOffhand/Meshes/StunningMountainOffhand_Axe_AnimBP.StunningMountainOffhand_Axe_AnimBP_C.AnimBlueprintGeneratedMutableData
/// Size: 0x0001 (0x000001 - 0x000002)
struct FAnimBlueprintGeneratedMutableDatadup_188 : FAnimBlueprintMutableData
{ 
	bool                                               __BoolProperty;                                             // 0x0001   (0x0001)  
};

/// Struct /Game/Weapons/FORT_Melee/Pickaxe_StunningMountainOffhand/Meshes/StunningMountainOffhand_Axe_AnimBP.StunningMountainOffhand_Axe_AnimBP_C.AnimBlueprintGeneratedConstantData
/// Size: 0x0537 (0x000001 - 0x000538)
struct FAnimBlueprintGeneratedConstantDatadup_189 : FAnimBlueprintConstantData
{ 
	unsigned char                                      UnknownData00_3[0x3];                                       // 0x0001   (0x0003)  MISSED
	FName                                              __NameProperty;                                             // 0x0004   (0x0004)  
	FName                                              __NameProperty0;                                            // 0x0008   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	class UBlendProfile*                               __BlendProfile;                                             // 0x0010   (0x0008)  
	class UCurveFloat*                                 __CurveFloat;                                               // 0x0018   (0x0008)  
	bool                                               __BoolProperty;                                             // 0x0020   (0x0001)  
	EAlphaBlendOption                                  __EnumProperty;                                             // 0x0021   (0x0001)  
	EBlendListTransitionType                           __EnumProperty1;                                            // 0x0022   (0x0001)  
	unsigned char                                      UnknownData02_5[0x5];                                       // 0x0023   (0x0005)  MISSED
	TArray<float>                                      __ArrayProperty;                                            // 0x0028   (0x0010)  
	FAnimNodeFunctionRef                               __StructProperty;                                           // 0x0038   (0x0018)  
	FAnimSubsystem_PropertyAccess                      AnimBlueprintExtension_PropertyAccess;                      // 0x0050   (0x0080)  
	FAnimSubsystem_Base                                AnimBlueprintExtension_Base;                                // 0x00D0   (0x0018)  
	FAnimNodeExposedValueHandler_PropertyAccess        AnimGraphNode_Root;                                         // 0x00E8   (0x0030)  
	FAnimNodeExposedValueHandler_PropertyAccess        AnimGraphNode_SubInput;                                     // 0x0118   (0x0030)  
	FAnimNodeExposedValueHandler_PropertyAccess        AnimGraphNode_SaveCachedPose;                               // 0x0148   (0x0030)  
	FAnimNodeExposedValueHandler_PropertyAccess        AnimGraphNode_UseCachedPose;                                // 0x0178   (0x0030)  
	FAnimNodeExposedValueHandler_PropertyAccess        AnimGraphNode_ModifyBone;                                   // 0x01A8   (0x0030)  
	FAnimNodeExposedValueHandler_PropertyAccess        AnimGraphNode_ModifyBone2;                                  // 0x01D8   (0x0030)  
	FAnimNodeExposedValueHandler_PropertyAccess        AnimGraphNode_LocalToComponentSpace;                        // 0x0208   (0x0030)  
	FAnimNodeExposedValueHandler_PropertyAccess        AnimGraphNode_ComponentToLocalSpace;                        // 0x0238   (0x0030)  
	FAnimNodeExposedValueHandler_PropertyAccess        AnimGraphNode_LocalToComponentSpace3;                       // 0x0268   (0x0030)  
	FAnimNodeExposedValueHandler_PropertyAccess        AnimGraphNode_ComponentToLocalSpace4;                       // 0x0298   (0x0030)  
	FAnimNodeExposedValueHandler_PropertyAccess        AnimGraphNode_RigidBody;                                    // 0x02C8   (0x0030)  
	FAnimNodeExposedValueHandler_PropertyAccess        AnimGraphNode_ModifyBone5;                                  // 0x02F8   (0x0030)  
	FAnimNodeExposedValueHandler_PropertyAccess        AnimGraphNode_BlendListByBool;                              // 0x0328   (0x0030)  
	FAnimNodeExposedValueHandler_PropertyAccess        AnimGraphNode_UseCachedPose6;                               // 0x0358   (0x0030)  
	FAnimNodeExposedValueHandler_PropertyAccess        AnimGraphNode_LocalToComponentSpace7;                       // 0x0388   (0x0030)  
	FAnimNodeExposedValueHandler_PropertyAccess        AnimGraphNode_ComponentToLocalSpace8;                       // 0x03B8   (0x0030)  
	FAnimNodeExposedValueHandler_PropertyAccess        AnimGraphNode_RigidBody9;                                   // 0x03E8   (0x0030)  
	FAnimNodeExposedValueHandler_PropertyAccess        AnimGraphNode_SaveCachedPose10;                             // 0x0418   (0x0030)  
	FAnimNodeExposedValueHandler_PropertyAccess        AnimGraphNode_UseCachedPose11;                              // 0x0448   (0x0030)  
	FAnimNodeExposedValueHandler_PropertyAccess        AnimGraphNode_ModifyBone12;                                 // 0x0478   (0x0030)  
	FAnimNodeExposedValueHandler_PropertyAccess        AnimGraphNode_ModifyBone13;                                 // 0x04A8   (0x0030)  
	FAnimNodeExposedValueHandler_PropertyAccess        AnimGraphNode_ModifyBone14;                                 // 0x04D8   (0x0030)  
	FAnimNodeExposedValueHandler_PropertyAccess        AnimGraphNode_ModifyBone15;                                 // 0x0508   (0x0030)  
};

/// Struct /Game/Weapons/FORT_Melee/Pickaxe_EmberRae/Meshes/EmberRae_Axe_L_AnimBP_Post.EmberRae_Axe_L_AnimBP_Post_C.AnimBlueprintGeneratedConstantData
/// Size: 0x01DF (0x000001 - 0x0001E0)
struct FAnimBlueprintGeneratedConstantDatadup_190 : FAnimBlueprintConstantData
{ 
	unsigned char                                      UnknownData00_3[0x3];                                       // 0x0001   (0x0003)  MISSED
	FName                                              __NameProperty;                                             // 0x0004   (0x0004)  
	FName                                              __NameProperty0;                                            // 0x0008   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	FAnimNodeFunctionRef                               __StructProperty;                                           // 0x0010   (0x0018)  
	FAnimSubsystem_PropertyAccess                      AnimBlueprintExtension_PropertyAccess;                      // 0x0028   (0x0080)  
	FAnimSubsystem_Base                                AnimBlueprintExtension_Base;                                // 0x00A8   (0x0018)  
	FAnimNodeExposedValueHandler_PropertyAccess        AnimGraphNode_Root;                                         // 0x00C0   (0x0030)  
	FAnimNodeExposedValueHandler_PropertyAccess        AnimGraphNode_SubInput;                                     // 0x00F0   (0x0030)  
	FAnimNodeExposedValueHandler_PropertyAccess        AnimGraphNode_ComponentToLocalSpace;                        // 0x0120   (0x0030)  
	FAnimNodeExposedValueHandler_PropertyAccess        AnimGraphNode_LocalToComponentSpace;                        // 0x0150   (0x0030)  
	FAnimNodeExposedValueHandler_PropertyAccess        AnimGraphNode_RigidBody;                                    // 0x0180   (0x0030)  
	FAnimNodeExposedValueHandler_PropertyAccess        AnimGraphNode_ModifyBone;                                   // 0x01B0   (0x0030)  
};

/// Struct /Game/Weapons/FORT_Melee/Pickaxe_EmberRae/Meshes/EmberRae_Axe_R_AnimBP_Post.EmberRae_Axe_R_AnimBP_Post_C.AnimBlueprintGeneratedConstantData
/// Size: 0x023F (0x000001 - 0x000240)
struct FAnimBlueprintGeneratedConstantDatadup_191 : FAnimBlueprintConstantData
{ 
	unsigned char                                      UnknownData00_3[0x3];                                       // 0x0001   (0x0003)  MISSED
	FName                                              __NameProperty;                                             // 0x0004   (0x0004)  
	FName                                              __NameProperty0;                                            // 0x0008   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	FAnimNodeFunctionRef                               __StructProperty;                                           // 0x0010   (0x0018)  
	FAnimSubsystem_PropertyAccess                      AnimBlueprintExtension_PropertyAccess;                      // 0x0028   (0x0080)  
	FAnimSubsystem_Base                                AnimBlueprintExtension_Base;                                // 0x00A8   (0x0018)  
	FAnimNodeExposedValueHandler_PropertyAccess        AnimGraphNode_Root;                                         // 0x00C0   (0x0030)  
	FAnimNodeExposedValueHandler_PropertyAccess        AnimGraphNode_SubInput;                                     // 0x00F0   (0x0030)  
	FAnimNodeExposedValueHandler_PropertyAccess        AnimGraphNode_ComponentToLocalSpace;                        // 0x0120   (0x0030)  
	FAnimNodeExposedValueHandler_PropertyAccess        AnimGraphNode_LocalToComponentSpace;                        // 0x0150   (0x0030)  
	FAnimNodeExposedValueHandler_PropertyAccess        AnimGraphNode_RigidBody;                                    // 0x0180   (0x0030)  
	FAnimNodeExposedValueHandler_PropertyAccess        AnimGraphNode_ModifyBone;                                   // 0x01B0   (0x0030)  
	FAnimNodeExposedValueHandler_PropertyAccess        AnimGraphNode_ModifyBone1;                                  // 0x01E0   (0x0030)  
	FAnimNodeExposedValueHandler_PropertyAccess        AnimGraphNode_ModifyBone2;                                  // 0x0210   (0x0030)  
};

/// Struct /Game/Weapons/FORT_Melee/Pickaxe_NitroFlow/Meshes/NitroFlow_Axe_AnimBP.NitroFlow_Axe_AnimBP_C.AnimBlueprintGeneratedConstantData
/// Size: 0x014F (0x000001 - 0x000150)
struct FAnimBlueprintGeneratedConstantDatadup_192 : FAnimBlueprintConstantData
{ 
	unsigned char                                      UnknownData00_3[0x3];                                       // 0x0001   (0x0003)  MISSED
	FName                                              __NameProperty;                                             // 0x0004   (0x0004)  
	FName                                              __NameProperty0;                                            // 0x0008   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	FAnimNodeFunctionRef                               __StructProperty;                                           // 0x0010   (0x0018)  
	FAnimSubsystem_PropertyAccess                      AnimBlueprintExtension_PropertyAccess;                      // 0x0028   (0x0080)  
	FAnimSubsystem_Base                                AnimBlueprintExtension_Base;                                // 0x00A8   (0x0018)  
	FAnimNodeExposedValueHandler_PropertyAccess        AnimGraphNode_Root;                                         // 0x00C0   (0x0030)  
	FAnimNodeExposedValueHandler_PropertyAccess        AnimGraphNode_SubInput;                                     // 0x00F0   (0x0030)  
	FAnimNodeExposedValueHandler_PropertyAccess        AnimGraphNode_Slot;                                         // 0x0120   (0x0030)  
};

/// Struct /Game/Weapons/FORT_Melee/Pickaxe_LoudPhoenix/Meshes/LoudPhoenix_Axe_AnimBP.LoudPhoenix_Axe_AnimBP_C.AnimBlueprintGeneratedConstantData
/// Size: 0x011F (0x000001 - 0x000120)
struct FAnimBlueprintGeneratedConstantDatadup_193 : FAnimBlueprintConstantData
{ 
	unsigned char                                      UnknownData00_3[0x3];                                       // 0x0001   (0x0003)  MISSED
	FName                                              __NameProperty;                                             // 0x0004   (0x0004)  
	FName                                              __NameProperty0;                                            // 0x0008   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	FAnimNodeFunctionRef                               __StructProperty;                                           // 0x0010   (0x0018)  
	FAnimSubsystem_PropertyAccess                      AnimBlueprintExtension_PropertyAccess;                      // 0x0028   (0x0080)  
	FAnimSubsystem_Base                                AnimBlueprintExtension_Base;                                // 0x00A8   (0x0018)  
	FAnimNodeExposedValueHandler_PropertyAccess        AnimGraphNode_Root;                                         // 0x00C0   (0x0030)  
	FAnimNodeExposedValueHandler_PropertyAccess        AnimGraphNode_SubInput;                                     // 0x00F0   (0x0030)  
};

/// Struct /Game/Weapons/FORT_Melee/Pickaxe_Mechanical_Engineer_Female/Meshes/Mechanical_Engineer_Female_AnimBP.Mechanical_Engineer_Female_AnimBP_C.AnimBlueprintGeneratedConstantData
/// Size: 0x020F (0x000001 - 0x000210)
struct FAnimBlueprintGeneratedConstantDatadup_194 : FAnimBlueprintConstantData
{ 
	unsigned char                                      UnknownData00_3[0x3];                                       // 0x0001   (0x0003)  MISSED
	FName                                              __NameProperty;                                             // 0x0004   (0x0004)  
	FName                                              __NameProperty0;                                            // 0x0008   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	FAnimNodeFunctionRef                               __StructProperty;                                           // 0x0010   (0x0018)  
	FAnimSubsystem_PropertyAccess                      AnimBlueprintExtension_PropertyAccess;                      // 0x0028   (0x0080)  
	FAnimSubsystem_Base                                AnimBlueprintExtension_Base;                                // 0x00A8   (0x0018)  
	FAnimNodeExposedValueHandler_PropertyAccess        AnimGraphNode_LinkedInputPose;                              // 0x00C0   (0x0030)  
	FAnimNodeExposedValueHandler_PropertyAccess        AnimGraphNode_LocalToComponentSpace;                        // 0x00F0   (0x0030)  
	FAnimNodeExposedValueHandler_PropertyAccess        AnimGraphNode_ComponentToLocalSpace;                        // 0x0120   (0x0030)  
	FAnimNodeExposedValueHandler_PropertyAccess        AnimGraphNode_Root;                                         // 0x0150   (0x0030)  
	FAnimNodeExposedValueHandler_PropertyAccess        AnimGraphNode_AnimDynamics;                                 // 0x0180   (0x0030)  
	FAnimNodeExposedValueHandler_PropertyAccess        AnimGraphNode_RigidBody;                                    // 0x01B0   (0x0030)  
	FAnimNodeExposedValueHandler_PropertyAccess        AnimGraphNode_ModifyBone;                                   // 0x01E0   (0x0030)  
};

/// Struct /Game/Weapons/FORT_Melee/Pickaxe_HightowerTapas/Meshes/HighTower_Tapas_Axe_AnimBP.HighTower_Tapas_Axe_AnimBP_C.AnimBlueprintGeneratedConstantData
/// Size: 0x04D7 (0x000001 - 0x0004D8)
struct FAnimBlueprintGeneratedConstantDatadup_195 : FAnimBlueprintConstantData
{ 
	unsigned char                                      UnknownData00_3[0x3];                                       // 0x0001   (0x0003)  MISSED
	FName                                              __NameProperty;                                             // 0x0004   (0x0004)  
	FName                                              __NameProperty0;                                            // 0x0008   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	class UBlendProfile*                               __BlendProfile;                                             // 0x0010   (0x0008)  
	class UCurveFloat*                                 __CurveFloat;                                               // 0x0018   (0x0008)  
	bool                                               __BoolProperty;                                             // 0x0020   (0x0001)  
	EAlphaBlendOption                                  __EnumProperty;                                             // 0x0021   (0x0001)  
	EBlendListTransitionType                           __EnumProperty1;                                            // 0x0022   (0x0001)  
	unsigned char                                      UnknownData02_5[0x5];                                       // 0x0023   (0x0005)  MISSED
	TArray<float>                                      __ArrayProperty;                                            // 0x0028   (0x0010)  
	FAnimNodeFunctionRef                               __StructProperty;                                           // 0x0038   (0x0018)  
	FAnimSubsystem_PropertyAccess                      AnimBlueprintExtension_PropertyAccess;                      // 0x0050   (0x0080)  
	FAnimSubsystem_Base                                AnimBlueprintExtension_Base;                                // 0x00D0   (0x0018)  
	FAnimNodeExposedValueHandler_PropertyAccess        AnimGraphNode_LocalToComponentSpace;                        // 0x00E8   (0x0030)  
	FAnimNodeExposedValueHandler_PropertyAccess        AnimGraphNode_CopyPoseFromMesh;                             // 0x0118   (0x0030)  
	FAnimNodeExposedValueHandler_PropertyAccess        AnimGraphNode_Root;                                         // 0x0148   (0x0030)  
	FAnimNodeExposedValueHandler_PropertyAccess        AnimGraphNode_Trail;                                        // 0x0178   (0x0030)  
	FAnimNodeExposedValueHandler_PropertyAccess        AnimGraphNode_ModifyBone;                                   // 0x01A8   (0x0030)  
	FAnimNodeExposedValueHandler_PropertyAccess        AnimGraphNode_BlendListByBool;                              // 0x01D8   (0x0030)  
	FAnimNodeExposedValueHandler_PropertyAccess        AnimGraphNode_RigidBody;                                    // 0x0208   (0x0030)  
	FAnimNodeExposedValueHandler_PropertyAccess        AnimGraphNode_ComponentToLocalSpace;                        // 0x0238   (0x0030)  
	FAnimNodeExposedValueHandler_PropertyAccess        AnimGraphNode_ComponentToLocalSpace2;                       // 0x0268   (0x0030)  
	FAnimNodeExposedValueHandler_PropertyAccess        AnimGraphNode_SaveCachedPose;                               // 0x0298   (0x0030)  
	FAnimNodeExposedValueHandler_PropertyAccess        AnimGraphNode_UseCachedPose;                                // 0x02C8   (0x0030)  
	FAnimNodeExposedValueHandler_PropertyAccess        AnimGraphNode_LocalToComponentSpace3;                       // 0x02F8   (0x0030)  
	FAnimNodeExposedValueHandler_PropertyAccess        AnimGraphNode_UseCachedPose4;                               // 0x0328   (0x0030)  
	FAnimNodeExposedValueHandler_PropertyAccess        AnimGraphNode_UseCachedPose5;                               // 0x0358   (0x0030)  
	FAnimNodeExposedValueHandler_PropertyAccess        AnimGraphNode_ModifyBone6;                                  // 0x0388   (0x0030)  
	FAnimNodeExposedValueHandler_PropertyAccess        AnimGraphNode_LocalToComponentSpace7;                       // 0x03B8   (0x0030)  
	FAnimNodeExposedValueHandler_PropertyAccess        AnimGraphNode_ComponentToLocalSpace8;                       // 0x03E8   (0x0030)  
	FAnimNodeExposedValueHandler_PropertyAccess        AnimGraphNode_Slot;                                         // 0x0418   (0x0030)  
	FAnimNodeExposedValueHandler_PropertyAccess        AnimGraphNode_SaveCachedPose9;                              // 0x0448   (0x0030)  
	FAnimNodeExposedValueHandler_PropertyAccess        AnimGraphNode_TwoWayBlend;                                  // 0x0478   (0x0030)  
	FAnimNodeExposedValueHandler_PropertyAccess        AnimGraphNode_UseCachedPose10;                              // 0x04A8   (0x0030)  
};

/// Struct /Game/Weapons/FORT_Melee/Pickaxe_HightowerTapas/Meshes/HighTower_Tapas_Axe_AnimBP.HighTower_Tapas_Axe_AnimBP_C.AnimBlueprintGeneratedMutableData
/// Size: 0x0001 (0x000001 - 0x000002)
struct FAnimBlueprintGeneratedMutableDatadup_196 : FAnimBlueprintMutableData
{ 
	bool                                               __BoolProperty;                                             // 0x0001   (0x0001)  
};

/// Struct /Game/Weapons/FORT_Melee/Pickaxe_MetalScout/Meshes/MetalScout_Axe_AnimBP.MetalScout_Axe_AnimBP_C.AnimBlueprintGeneratedConstantData
/// Size: 0x011F (0x000001 - 0x000120)
struct FAnimBlueprintGeneratedConstantDatadup_197 : FAnimBlueprintConstantData
{ 
	unsigned char                                      UnknownData00_3[0x3];                                       // 0x0001   (0x0003)  MISSED
	FName                                              __NameProperty;                                             // 0x0004   (0x0004)  
	FName                                              __NameProperty0;                                            // 0x0008   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	FAnimNodeFunctionRef                               __StructProperty;                                           // 0x0010   (0x0018)  
	FAnimSubsystem_PropertyAccess                      AnimBlueprintExtension_PropertyAccess;                      // 0x0028   (0x0080)  
	FAnimSubsystem_Base                                AnimBlueprintExtension_Base;                                // 0x00A8   (0x0018)  
	FAnimNodeExposedValueHandler_PropertyAccess        AnimGraphNode_Root;                                         // 0x00C0   (0x0030)  
	FAnimNodeExposedValueHandler_PropertyAccess        AnimGraphNode_SubInput;                                     // 0x00F0   (0x0030)  
};

/// Struct /Game/Weapons/FORT_Melee/Pickaxe_GoldenGuard/Meshes/GoldenGuard_Axe_AnimBP.GoldenGuard_Axe_AnimBP_C.AnimBlueprintGeneratedConstantData
/// Size: 0x011F (0x000001 - 0x000120)
struct FAnimBlueprintGeneratedConstantDatadup_198 : FAnimBlueprintConstantData
{ 
	unsigned char                                      UnknownData00_3[0x3];                                       // 0x0001   (0x0003)  MISSED
	FName                                              __NameProperty;                                             // 0x0004   (0x0004)  
	FName                                              __NameProperty0;                                            // 0x0008   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	FAnimNodeFunctionRef                               __StructProperty;                                           // 0x0010   (0x0018)  
	FAnimSubsystem_PropertyAccess                      AnimBlueprintExtension_PropertyAccess;                      // 0x0028   (0x0080)  
	FAnimSubsystem_Base                                AnimBlueprintExtension_Base;                                // 0x00A8   (0x0018)  
	FAnimNodeExposedValueHandler_PropertyAccess        AnimGraphNode_Root;                                         // 0x00C0   (0x0030)  
	FAnimNodeExposedValueHandler_PropertyAccess        AnimGraphNode_SubInput;                                     // 0x00F0   (0x0030)  
};

