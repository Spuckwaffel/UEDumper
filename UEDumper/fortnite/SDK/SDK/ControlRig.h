
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: AnimationCore
/// dependency: Constraints
/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine
/// dependency: MovieScene
/// dependency: MovieSceneTracks
/// dependency: RigVM

/// Enum /Script/ControlRig.ERigElementType
/// Size: 0x15
enum class ERigElementType : uint8_t
{
	ERigElementType__None                                                            = 0,
	ERigElementType__Bone                                                            = 1,
	ERigElementType__Null                                                            = 2,
	ERigElementType__Space                                                           = 2,
	ERigElementType__Control                                                         = 4,
	ERigElementType__Curve                                                           = 8,
	ERigElementType__RigidBody                                                       = 16,
	ERigElementType__Reference                                                       = 32,
	ERigElementType__Connector                                                       = 64,
	ERigElementType__Socket                                                          = 128,
	ERigElementType__First                                                           = 1,
	ERigElementType__Last                                                            = 128,
	ERigElementType__All                                                             = 255,
	ERigElementType__ToResetAfterConstructionEvent                                   = 141,
	ERigElementType__ERigElementType_MAX                                             = 256
};

/// Enum /Script/ControlRig.ERigHierarchyNotification
/// Size: 0x21
enum class ERigHierarchyNotification : uint8_t
{
	ERigHierarchyNotification__ElementAdded                                          = 0,
	ERigHierarchyNotification__ElementRemoved                                        = 1,
	ERigHierarchyNotification__ElementRenamed                                        = 2,
	ERigHierarchyNotification__ElementSelected                                       = 3,
	ERigHierarchyNotification__ElementDeselected                                     = 4,
	ERigHierarchyNotification__ParentChanged                                         = 5,
	ERigHierarchyNotification__HierarchyReset                                        = 6,
	ERigHierarchyNotification__ControlSettingChanged                                 = 7,
	ERigHierarchyNotification__ControlVisibilityChanged                              = 8,
	ERigHierarchyNotification__ControlDrivenListChanged                              = 9,
	ERigHierarchyNotification__ControlShapeTransformChanged                          = 10,
	ERigHierarchyNotification__ParentWeightsChanged                                  = 11,
	ERigHierarchyNotification__InteractionBracketOpened                              = 12,
	ERigHierarchyNotification__InteractionBracketClosed                              = 13,
	ERigHierarchyNotification__ElementReordered                                      = 14,
	ERigHierarchyNotification__ConnectorSettingChanged                               = 15,
	ERigHierarchyNotification__SocketColorChanged                                    = 16,
	ERigHierarchyNotification__SocketDescriptionChanged                              = 17,
	ERigHierarchyNotification__SocketDesiredParentChanged                            = 18,
	ERigHierarchyNotification__HierarchyCopied                                       = 19,
	ERigHierarchyNotification__Max                                                   = 20
};

/// Enum /Script/ControlRig.ERigControlTransformChannel
/// Size: 0x10
enum class ERigControlTransformChannel : uint8_t
{
	ERigControlTransformChannel__TranslationX                                        = 0,
	ERigControlTransformChannel__TranslationY                                        = 1,
	ERigControlTransformChannel__TranslationZ                                        = 2,
	ERigControlTransformChannel__Pitch                                               = 3,
	ERigControlTransformChannel__Yaw                                                 = 4,
	ERigControlTransformChannel__Roll                                                = 5,
	ERigControlTransformChannel__ScaleX                                              = 6,
	ERigControlTransformChannel__ScaleY                                              = 7,
	ERigControlTransformChannel__ScaleZ                                              = 8,
	ERigControlTransformChannel__ERigControlTransformChannel_MAX                     = 9
};

/// Enum /Script/ControlRig.ERigControlVisibility
/// Size: 0x03
enum class ERigControlVisibility : uint8_t
{
	ERigControlVisibility__UserDefined                                               = 0,
	ERigControlVisibility__BasedOnSelection                                          = 1,
	ERigControlVisibility__ERigControlVisibility_MAX                                 = 2
};

/// Enum /Script/ControlRig.ERigControlAxis
/// Size: 0x04
enum class ERigControlAxis : uint8_t
{
	ERigControlAxis__X                                                               = 0,
	ERigControlAxis__Y                                                               = 1,
	ERigControlAxis__Z                                                               = 2,
	ERigControlAxis__ERigControlAxis_MAX                                             = 3
};

/// Enum /Script/ControlRig.ERigControlType
/// Size: 0x12
enum class ERigControlType : uint8_t
{
	ERigControlType__Bool                                                            = 0,
	ERigControlType__Float                                                           = 1,
	ERigControlType__Integer                                                         = 2,
	ERigControlType__Vector2D                                                        = 3,
	ERigControlType__Position                                                        = 4,
	ERigControlType__Scale                                                           = 5,
	ERigControlType__Rotator                                                         = 6,
	ERigControlType__Transform                                                       = 7,
	ERigControlType__TransformNoScale                                                = 8,
	ERigControlType__EulerTransform                                                  = 9,
	ERigControlType__ScaleFloat                                                      = 10,
	ERigControlType__ERigControlType_MAX                                             = 11
};

/// Enum /Script/ControlRig.ERigControlAnimationType
/// Size: 0x05
enum class ERigControlAnimationType : uint8_t
{
	ERigControlAnimationType__AnimationControl                                       = 0,
	ERigControlAnimationType__AnimationChannel                                       = 1,
	ERigControlAnimationType__ProxyControl                                           = 2,
	ERigControlAnimationType__VisualCue                                              = 3,
	ERigControlAnimationType__ERigControlAnimationType_MAX                           = 4
};

/// Enum /Script/ControlRig.EConnectorType
/// Size: 0x03
enum class EConnectorType : uint8_t
{
	EConnectorType__Primary                                                          = 0,
	EConnectorType__Secondary                                                        = 1,
	EConnectorType__EConnectorType_MAX                                               = 2
};

/// Enum /Script/ControlRig.ERigExecutionType
/// Size: 0x03
enum class ERigExecutionType : uint8_t
{
	ERigExecutionType__Runtime                                                       = 0,
	ERigExecutionType__Editing                                                       = 1,
	ERigExecutionType__Max                                                           = 2
};

/// Enum /Script/ControlRig.ERigTransformStackEntryType
/// Size: 0x05
enum class ERigTransformStackEntryType : uint8_t
{
	TransformPose                                                                    = 0,
	ControlOffset                                                                    = 1,
	ControlShape                                                                     = 2,
	CurveValue                                                                       = 3,
	ERigTransformStackEntryType_MAX                                                  = 4
};

/// Enum /Script/ControlRig.ERigTransformType
/// Size: 0x06
enum class ERigTransformType : uint8_t
{
	ERigTransformType__InitialLocal                                                  = 0,
	ERigTransformType__CurrentLocal                                                  = 1,
	ERigTransformType__InitialGlobal                                                 = 2,
	ERigTransformType__CurrentGlobal                                                 = 3,
	ERigTransformType__NumTransformTypes                                             = 4,
	ERigTransformType__ERigTransformType_MAX                                         = 5
};

/// Enum /Script/ControlRig.EControlRigVectorKind
/// Size: 0x03
enum class EControlRigVectorKind : uint8_t
{
	EControlRigVectorKind__Direction                                                 = 0,
	EControlRigVectorKind__Location                                                  = 1,
	EControlRigVectorKind__EControlRigVectorKind_MAX                                 = 2
};

/// Enum /Script/ControlRig.EControlRigComponentSpace
/// Size: 0x06
enum class EControlRigComponentSpace : uint8_t
{
	EControlRigComponentSpace__WorldSpace                                            = 0,
	EControlRigComponentSpace__ActorSpace                                            = 1,
	EControlRigComponentSpace__ComponentSpace                                        = 2,
	EControlRigComponentSpace__RigSpace                                              = 3,
	EControlRigComponentSpace__LocalSpace                                            = 4,
	EControlRigComponentSpace__Max                                                   = 5
};

/// Enum /Script/ControlRig.EControlRigComponentMapDirection
/// Size: 0x03
enum class EControlRigComponentMapDirection : uint8_t
{
	EControlRigComponentMapDirection__Input                                          = 0,
	EControlRigComponentMapDirection__Output                                         = 1,
	EControlRigComponentMapDirection__EControlRigComponentMapDirection_MAX           = 2
};

/// Enum /Script/ControlRig.ETransformSpaceMode
/// Size: 0x05
enum class ETransformSpaceMode : uint8_t
{
	ETransformSpaceMode__LocalSpace                                                  = 0,
	ETransformSpaceMode__GlobalSpace                                                 = 1,
	ETransformSpaceMode__BaseSpace                                                   = 2,
	ETransformSpaceMode__BaseJoint                                                   = 3,
	ETransformSpaceMode__Max                                                         = 4
};

/// Enum /Script/ControlRig.ETransformGetterType
/// Size: 0x03
enum class ETransformGetterType : uint8_t
{
	ETransformGetterType__Initial                                                    = 0,
	ETransformGetterType__Current                                                    = 1,
	ETransformGetterType__Max                                                        = 2
};

/// Enum /Script/ControlRig.EControlRigTestDataPlaybackMode
/// Size: 0x04
enum class EControlRigTestDataPlaybackMode : uint8_t
{
	EControlRigTestDataPlaybackMode__Live                                            = 0,
	EControlRigTestDataPlaybackMode__ReplayInputs                                    = 1,
	EControlRigTestDataPlaybackMode__GroundTruth                                     = 2,
	EControlRigTestDataPlaybackMode__Max                                             = 3
};

/// Enum /Script/ControlRig.ECRSimConstraintType
/// Size: 0x05
enum class ECRSimConstraintType : uint8_t
{
	ECRSimConstraintType__Distance                                                   = 0,
	ECRSimConstraintType__DistanceFromA                                              = 1,
	ECRSimConstraintType__DistanceFromB                                              = 2,
	ECRSimConstraintType__Plane                                                      = 3,
	ECRSimConstraintType__ECRSimConstraintType_MAX                                   = 4
};

/// Enum /Script/ControlRig.ECRSimPointForceType
/// Size: 0x02
enum class ECRSimPointForceType : uint8_t
{
	ECRSimPointForceType__Direction                                                  = 0,
	ECRSimPointForceType__ECRSimPointForceType_MAX                                   = 1
};

/// Enum /Script/ControlRig.ECRSimSoftCollisionType
/// Size: 0x04
enum class ECRSimSoftCollisionType : uint8_t
{
	ECRSimSoftCollisionType__Plane                                                   = 0,
	ECRSimSoftCollisionType__Sphere                                                  = 1,
	ECRSimSoftCollisionType__Cone                                                    = 2,
	ECRSimSoftCollisionType__ECRSimSoftCollisionType_MAX                             = 3
};

/// Enum /Script/ControlRig.EModularRigNotification
/// Size: 0x11
enum class EModularRigNotification : uint8_t
{
	EModularRigNotification__ModuleAdded                                             = 0,
	EModularRigNotification__ModuleRenamed                                           = 1,
	EModularRigNotification__ModuleRemoved                                           = 2,
	EModularRigNotification__ModuleReparented                                        = 3,
	EModularRigNotification__ConnectionChanged                                       = 4,
	EModularRigNotification__ModuleConfigValueChanged                                = 5,
	EModularRigNotification__ModuleShortNameChanged                                  = 6,
	EModularRigNotification__InteractionBracketOpened                                = 7,
	EModularRigNotification__InteractionBracketClosed                                = 8,
	EModularRigNotification__InteractionBracketCanceled                              = 9,
	EModularRigNotification__Max                                                     = 10
};

/// Enum /Script/ControlRig.EControlRigFKRigExecuteMode
/// Size: 0x04
enum class EControlRigFKRigExecuteMode : uint8_t
{
	EControlRigFKRigExecuteMode__Replace                                             = 0,
	EControlRigFKRigExecuteMode__Additive                                            = 1,
	EControlRigFKRigExecuteMode__Direct                                              = 2,
	EControlRigFKRigExecuteMode__Max                                                 = 3
};

/// Enum /Script/ControlRig.ERigBoneType
/// Size: 0x03
enum class ERigBoneType : uint8_t
{
	ERigBoneType__Imported                                                           = 0,
	ERigBoneType__User                                                               = 1,
	ERigBoneType__ERigBoneType_MAX                                                   = 2
};

/// Enum /Script/ControlRig.ERigMetadataType
/// Size: 0x22
enum class ERigMetadataType : uint8_t
{
	ERigMetadataType__Bool                                                           = 0,
	ERigMetadataType__BoolArray                                                      = 1,
	ERigMetadataType__Float                                                          = 2,
	ERigMetadataType__FloatArray                                                     = 3,
	ERigMetadataType__Int32                                                          = 4,
	ERigMetadataType__Int32Array                                                     = 5,
	ERigMetadataType__Name                                                           = 6,
	ERigMetadataType__NameArray                                                      = 7,
	ERigMetadataType__Vector                                                         = 8,
	ERigMetadataType__VectorArray                                                    = 9,
	ERigMetadataType__Rotator                                                        = 10,
	ERigMetadataType__RotatorArray                                                   = 11,
	ERigMetadataType__Quat                                                           = 12,
	ERigMetadataType__QuatArray                                                      = 13,
	ERigMetadataType__Transform                                                      = 14,
	ERigMetadataType__TransformArray                                                 = 15,
	ERigMetadataType__LinearColor                                                    = 16,
	ERigMetadataType__LinearColorArray                                               = 17,
	ERigMetadataType__RigElementKey                                                  = 18,
	ERigMetadataType__RigElementKeyArray                                             = 19,
	ERigMetadataType__Invalid                                                        = 20,
	ERigMetadataType__ERigMetadataType_MAX                                           = 21
};

/// Enum /Script/ControlRig.ERigEvent
/// Size: 0x05
enum class ERigEvent : uint8_t
{
	ERigEvent__None                                                                  = 0,
	ERigEvent__RequestAutoKey                                                        = 1,
	ERigEvent__OpenUndoBracket                                                       = 2,
	ERigEvent__CloseUndoBracket                                                      = 3,
	ERigEvent__Max                                                                   = 4
};

/// Enum /Script/ControlRig.EControlRigSetKey
/// Size: 0x04
enum class EControlRigSetKey : uint8_t
{
	EControlRigSetKey__DoNotCare                                                     = 0,
	EControlRigSetKey__Always                                                        = 1,
	EControlRigSetKey__Never                                                         = 2,
	EControlRigSetKey__EControlRigSetKey_MAX                                         = 3
};

/// Enum /Script/ControlRig.ERigControlValueType
/// Size: 0x05
enum class ERigControlValueType : uint8_t
{
	ERigControlValueType__Initial                                                    = 0,
	ERigControlValueType__Current                                                    = 1,
	ERigControlValueType__Minimum                                                    = 2,
	ERigControlValueType__Maximum                                                    = 3,
	ERigControlValueType__ERigControlValueType_MAX                                   = 4
};

/// Enum /Script/ControlRig.ERigElementResolveState
/// Size: 0x05
enum class ERigElementResolveState : uint8_t
{
	ERigElementResolveState__Unknown                                                 = 0,
	ERigElementResolveState__InvalidTarget                                           = 1,
	ERigElementResolveState__PossibleTarget                                          = 2,
	ERigElementResolveState__DefaultTarget                                           = 3,
	ERigElementResolveState__Max                                                     = 4
};

/// Enum /Script/ControlRig.EModularRigResolveState
/// Size: 0x03
enum class EModularRigResolveState : uint8_t
{
	EModularRigResolveState__Success                                                 = 0,
	EModularRigResolveState__Error                                                   = 1,
	EModularRigResolveState__Max                                                     = 2
};

/// Enum /Script/ControlRig.ERigSpaceType
/// Size: 0x05
enum class ERigSpaceType : uint8_t
{
	ERigSpaceType__Global                                                            = 0,
	ERigSpaceType__Bone                                                              = 1,
	ERigSpaceType__Control                                                           = 2,
	ERigSpaceType__Space                                                             = 3,
	ERigSpaceType__ERigSpaceType_MAX                                                 = 4
};

/// Enum /Script/ControlRig.EMovieSceneControlRigSpaceType
/// Size: 0x04
enum class EMovieSceneControlRigSpaceType : uint8_t
{
	EMovieSceneControlRigSpaceType__Parent                                           = 0,
	EMovieSceneControlRigSpaceType__World                                            = 1,
	EMovieSceneControlRigSpaceType__ControlRig                                       = 2,
	EMovieSceneControlRigSpaceType__EMovieSceneControlRigSpaceType_MAX               = 3
};

/// Enum /Script/ControlRig.EControlRigDrawHierarchyMode
/// Size: 0x02
enum class EControlRigDrawHierarchyMode : uint8_t
{
	EControlRigDrawHierarchyMode__Axes                                               = 0,
	EControlRigDrawHierarchyMode__Max                                                = 1
};

/// Enum /Script/ControlRig.EAimMode
/// Size: 0x03
enum class EAimMode : uint8_t
{
	EAimMode__AimAtTarget                                                            = 0,
	EAimMode__OrientToTarget                                                         = 1,
	EAimMode__MAX                                                                    = 2
};

/// Enum /Script/ControlRig.EApplyTransformMode
/// Size: 0x03
enum class EApplyTransformMode : uint8_t
{
	EApplyTransformMode__Override                                                    = 0,
	EApplyTransformMode__Additive                                                    = 1,
	EApplyTransformMode__Max                                                         = 2
};

/// Enum /Script/ControlRig.ERigSwitchParentMode
/// Size: 0x04
enum class ERigSwitchParentMode : uint8_t
{
	ERigSwitchParentMode__World                                                      = 0,
	ERigSwitchParentMode__DefaultParent                                              = 1,
	ERigSwitchParentMode__ParentItem                                                 = 2,
	ERigSwitchParentMode__ERigSwitchParentMode_MAX                                   = 3
};

/// Enum /Script/ControlRig.EControlRigCurveAlignment
/// Size: 0x03
enum class EControlRigCurveAlignment : uint8_t
{
	EControlRigCurveAlignment__Front                                                 = 0,
	EControlRigCurveAlignment__Stretched                                             = 1,
	EControlRigCurveAlignment__EControlRigCurveAlignment_MAX                         = 2
};

/// Enum /Script/ControlRig.EControlRigModifyBoneMode
/// Size: 0x05
enum class EControlRigModifyBoneMode : uint8_t
{
	EControlRigModifyBoneMode__OverrideLocal                                         = 0,
	EControlRigModifyBoneMode__OverrideGlobal                                        = 1,
	EControlRigModifyBoneMode__AdditiveLocal                                         = 2,
	EControlRigModifyBoneMode__AdditiveGlobal                                        = 3,
	EControlRigModifyBoneMode__Max                                                   = 4
};

/// Enum /Script/ControlRig.EConstraintInterpType
/// Size: 0x03
enum class EConstraintInterpType : uint8_t
{
	EConstraintInterpType__Average                                                   = 0,
	EConstraintInterpType__Shortest                                                  = 1,
	EConstraintInterpType__Max                                                       = 2
};

/// Enum /Script/ControlRig.EControlRigInteractionType
/// Size: 0x06
enum class EControlRigInteractionType : uint8_t
{
	EControlRigInteractionType__None                                                 = 0,
	EControlRigInteractionType__Translate                                            = 1,
	EControlRigInteractionType__Rotate                                               = 2,
	EControlRigInteractionType__Scale                                                = 4,
	EControlRigInteractionType__All                                                  = 7,
	EControlRigInteractionType__EControlRigInteractionType_MAX                       = 8
};

/// Enum /Script/ControlRig.ERigMetaDataNameSpace
/// Size: 0x06
enum class ERigMetaDataNameSpace : uint8_t
{
	ERigMetaDataNameSpace__None                                                      = 0,
	ERigMetaDataNameSpace__Self                                                      = 1,
	ERigMetaDataNameSpace__Parent                                                    = 2,
	ERigMetaDataNameSpace__Root                                                      = 3,
	ERigMetaDataNameSpace__Last                                                      = 4,
	ERigMetaDataNameSpace__ERigMetaDataNameSpace_MAX                                 = 5
};

/// Class /Script/ControlRig.ControlRigShapeLibraryLink
/// Size: 0x0018 (0x000100 - 0x000118)
class UControlRigShapeLibraryLink : public UNameSpacedUserData
{ 
public:
	class UControlRigShapeLibrary*                     ShapeLibrary;                                               // 0x0100   (0x0008)  
	TArray<FName>                                      ShapeNames;                                                 // 0x0108   (0x0010)  


	/// Functions
	// Function /Script/ControlRig.ControlRigShapeLibraryLink.SetShapeLibrary
	// void SetShapeLibrary(class UControlRigShapeLibrary* InShapeLibrary);                                                  // [0x778f460] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigShapeLibraryLink.GetShapeLibrary
	// class UControlRigShapeLibrary* GetShapeLibrary();                                                                     // [0x70fa334] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/ControlRig.RigHierarchySettings
/// Size: 0x0004 (0x000000 - 0x000004)
struct FRigHierarchySettings
{ 
	int32_t                                            ProceduralElementLimit;                                     // 0x0000   (0x0004)  
};

/// Struct /Script/ControlRig.RigElementKey
/// Size: 0x0008 (0x000000 - 0x000008)
struct FRigElementKey
{ 
	ERigElementType                                    Type;                                                       // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	FName                                              Name;                                                       // 0x0004   (0x0004)  
};

/// Struct /Script/ControlRig.RigInfluenceEntry
/// Size: 0x0018 (0x000000 - 0x000018)
struct FRigInfluenceEntry
{ 
	FRigElementKey                                     Source;                                                     // 0x0000   (0x0008)  
	TArray<FRigElementKey>                             AffectedList;                                               // 0x0008   (0x0010)  
};

/// Struct /Script/ControlRig.RigInfluenceMap
/// Size: 0x0068 (0x000000 - 0x000068)
struct FRigInfluenceMap
{ 
	FName                                              EventName;                                                  // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	TArray<FRigInfluenceEntry>                         Entries;                                                    // 0x0008   (0x0010)  
	SDK_UNDEFINED(80,12488) /* TMap<FRigElementKey, int32_t> */ __um(KeyToIndex);                                  // 0x0018   (0x0050)  
};

/// Struct /Script/ControlRig.RigInfluenceMapPerEvent
/// Size: 0x0060 (0x000000 - 0x000060)
struct FRigInfluenceMapPerEvent
{ 
	TArray<FRigInfluenceMap>                           Maps;                                                       // 0x0000   (0x0010)  
	SDK_UNDEFINED(80,12489) /* TMap<FName, int32_t> */ __um(EventToIndex);                                         // 0x0010   (0x0050)  
};

/// Struct /Script/ControlRig.RigModuleIdentifier
/// Size: 0x0020 (0x000000 - 0x000020)
struct FRigModuleIdentifier
{ 
	SDK_UNDEFINED(16,12490) /* FString */              __um(Name);                                                 // 0x0000   (0x0010)  
	SDK_UNDEFINED(16,12491) /* FString */              __um(Type);                                                 // 0x0010   (0x0010)  
};

/// Struct /Script/ControlRig.RigConnectionRuleStash
/// Size: 0x0020 (0x000000 - 0x000020)
struct FRigConnectionRuleStash
{ 
	SDK_UNDEFINED(16,12492) /* FString */              __um(ScriptStructPath);                                     // 0x0000   (0x0010)  
	SDK_UNDEFINED(16,12493) /* FString */              __um(ExportedText);                                         // 0x0010   (0x0010)  
};

/// Struct /Script/ControlRig.RigConnectorSettings
/// Size: 0x0028 (0x000000 - 0x000028)
struct FRigConnectorSettings
{ 
	SDK_UNDEFINED(16,12494) /* FString */              __um(Description);                                          // 0x0000   (0x0010)  
	EConnectorType                                     Type;                                                       // 0x0010   (0x0001)  
	bool                                               bOptional;                                                  // 0x0011   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x0012   (0x0006)  MISSED
	TArray<FRigConnectionRuleStash>                    Rules;                                                      // 0x0018   (0x0010)  
};

/// Struct /Script/ControlRig.RigModuleConnector
/// Size: 0x0038 (0x000000 - 0x000038)
struct FRigModuleConnector
{ 
	SDK_UNDEFINED(16,12495) /* FString */              __um(Name);                                                 // 0x0000   (0x0010)  
	FRigConnectorSettings                              Settings;                                                   // 0x0010   (0x0028)  
};

/// Struct /Script/ControlRig.RigModuleSettings
/// Size: 0x0078 (0x000000 - 0x000078)
struct FRigModuleSettings
{ 
	FRigModuleIdentifier                               Identifier;                                                 // 0x0000   (0x0020)  
	FSoftObjectPath                                    Icon;                                                       // 0x0020   (0x0018)  
	SDK_UNDEFINED(16,12496) /* FString */              __um(Category);                                             // 0x0038   (0x0010)  
	SDK_UNDEFINED(16,12497) /* FString */              __um(Keywords);                                             // 0x0048   (0x0010)  
	SDK_UNDEFINED(16,12498) /* FString */              __um(Description);                                          // 0x0058   (0x0010)  
	TArray<FRigModuleConnector>                        ExposedConnectors;                                          // 0x0068   (0x0010)  
};

/// Class /Script/ControlRig.ControlRig
/// Size: 0x0828 (0x000278 - 0x000AA0)
class UControlRig : public URigVMHost
{ 
public:
	unsigned char                                      UnknownData00_3[0x10];                                      // 0x0278   (0x0010)  MISSED
	ERigExecutionType                                  ExecutionType;                                              // 0x0288   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0289   (0x0003)  MISSED
	FRigHierarchySettings                              HierarchySettings;                                          // 0x028C   (0x0004)  
	SDK_UNDEFINED(80,12499) /* TMap<FRigElementKey, FRigControlElementCustomization> */ __um(ControlCustomizations); // 0x0290   (0x0050)  
	class URigHierarchy*                               DynamicHierarchy;                                           // 0x02E0   (0x0008)  
	SDK_UNDEFINED(16,12500) /* TArray<TWeakObjectPtr<UControlRigShapeLibrary*>> */ __um(ShapeLibraries);           // 0x02E8   (0x0010)  
	SDK_UNDEFINED(80,12501) /* TMap<FString, FString> */ __um(ShapeLibraryNameMap);                                // 0x02F8   (0x0050)  
	unsigned char                                      UnknownData02_5[0x10];                                      // 0x0348   (0x0010)  MISSED
	FRigVMExtendedExecuteContext                       RigVMExtendedExecuteContext;                                // 0x0358   (0x0228)  
	unsigned char                                      UnknownData03_5[0x8];                                       // 0x0580   (0x0008)  MISSED
	class UAnimationDataSourceRegistry*                DataSourceRegistry;                                         // 0x0588   (0x0008)  
	unsigned char                                      UnknownData04_5[0xA8];                                      // 0x0590   (0x00A8)  MISSED
	FRigInfluenceMapPerEvent                           Influences;                                                 // 0x0638   (0x0060)  
	unsigned char                                      UnknownData05_5[0xB8];                                      // 0x0698   (0x00B8)  MISSED
	SDK_UNDEFINED(80,12502) /* TMap<FName, UDataAssetLink*> */ __um(ExternalVariableDataAssetLinks);               // 0x0750   (0x0050)  
	unsigned char                                      UnknownData06_5[0xD0];                                      // 0x07A0   (0x00D0)  MISSED
	SDK_UNDEFINED(1,12503) /* FMulticastSparseDelegate */ __um(OnControlSelected_BP);                              // 0x0870   (0x0001)  
	unsigned char                                      UnknownData07_5[0x17];                                      // 0x0871   (0x0017)  MISSED
	bool                                               bIsAdditive;                                                // 0x0888   (0x0001)  
	unsigned char                                      UnknownData08_5[0x18F];                                     // 0x0889   (0x018F)  MISSED
	FRigModuleSettings                                 RigModuleSettings;                                          // 0x0A18   (0x0078)  
	SDK_UNDEFINED(16,12504) /* FString */              __um(RigModuleNameSpace);                                   // 0x0A90   (0x0010)  


	/// Functions
	// Function /Script/ControlRig.ControlRig.SupportsBackwardsSolve
	// bool SupportsBackwardsSolve();                                                                                        // [0x77d30dc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.ControlRig.SetInteractionRigClass
	// void SetInteractionRigClass(class UClass* InInteractionRigClass);                                                     // [0x66eea34] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRig.SetInteractionRig
	// void SetInteractionRig(class UControlRig* InInteractionRig);                                                          // [0x6414600] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRig.SelectControl
	// void SelectControl(FName& InControlName, bool bSelect);                                                               // [0x77d0510] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ControlRig.ControlRig.RequestConstruction
	// void RequestConstruction();                                                                                           // [0x77d04e8] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRig.OnControlSelectedBP__DelegateSignature
	// void OnControlSelectedBP__DelegateSignature(class UControlRig* Rig, FRigControlElement& Control, bool bSelected);     // [0x18a39e4] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/ControlRig.ControlRig.IsControlSelected
	// bool IsControlSelected(FName& InControlName);                                                                         // [0x77cf73c] Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.ControlRig.GetInteractionRigClass
	// class UClass* GetInteractionRigClass();                                                                               // [0x77cf50c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.ControlRig.GetInteractionRig
	// class UControlRig* GetInteractionRig();                                                                               // [0x69f1ed4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.ControlRig.GetHostingActor
	// class AActor* GetHostingActor();                                                                                      // [0x77cf2ac] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.ControlRig.GetHierarchy
	// class URigHierarchy* GetHierarchy();                                                                                  // [0x2f3a9a4] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/ControlRig.ControlRig.FindControlRigs
	// TArray<UControlRig*> FindControlRigs(class UObject* Outer, class UClass* OptionalClass);                              // [0x77ce5dc] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRig.CurrentControlSelection
	// TArray<FName> CurrentControlSelection();                                                                              // [0x77ce008] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.ControlRig.CreateTransformableControlHandle
	// class UTransformableControlHandle* CreateTransformableControlHandle(FName& ControlName);                              // [0x77cdf70] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.ControlRig.ClearControlSelection
	// bool ClearControlSelection();                                                                                         // [0x77cd884] Native|Public|BlueprintCallable 
};

/// Struct /Script/ControlRig.RigModuleInstance
/// Size: 0x0088 (0x000000 - 0x000088)
struct FRigModuleInstance
{ 
	FName                                              Name;                                                       // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	class UControlRig*                                 RigPtr;                                                     // 0x0008   (0x0008)  
	SDK_UNDEFINED(16,12505) /* FString */              __um(ParentPath);                                           // 0x0010   (0x0010)  
	SDK_UNDEFINED(80,12506) /* TMap<FName, FRigVMExternalVariable> */ __um(VariableBindings);                      // 0x0020   (0x0050)  
	unsigned char                                      UnknownData01_6[0x18];                                      // 0x0070   (0x0018)  MISSED
};

/// Struct /Script/ControlRig.ModularRigSettings
/// Size: 0x0001 (0x000000 - 0x000001)
struct FModularRigSettings
{ 
	bool                                               bAutoResolve;                                               // 0x0000   (0x0001)  
};

/// Struct /Script/ControlRig.RigModuleReference
/// Size: 0x0168 (0x000000 - 0x000168)
struct FRigModuleReference
{ 
	FName                                              Name;                                                       // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	SDK_UNDEFINED(16,12507) /* FString */              __um(ShortName);                                            // 0x0008   (0x0010)  
	bool                                               bShortNameBasedOnPath;                                      // 0x0018   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0019   (0x0007)  MISSED
	SDK_UNDEFINED(16,12508) /* FString */              __um(ParentPath);                                           // 0x0020   (0x0010)  
	SDK_UNDEFINED(32,12509) /* TWeakObjectPtr<UClass*> */ __um(Class);                                             // 0x0030   (0x0020)  
	SDK_UNDEFINED(80,12510) /* TMap<FRigElementKey, FRigElementKey> */ __um(Connections);                          // 0x0050   (0x0050)  
	SDK_UNDEFINED(80,12511) /* TMap<FName, FString> */ __um(ConfigValues);                                         // 0x00A0   (0x0050)  
	SDK_UNDEFINED(80,12512) /* TMap<FName, FString> */ __um(Bindings);                                             // 0x00F0   (0x0050)  
	FName                                              PreviousName;                                               // 0x0140   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x0144   (0x0004)  MISSED
	SDK_UNDEFINED(16,12513) /* FString */              __um(PreviousParentPath);                                   // 0x0148   (0x0010)  
	unsigned char                                      UnknownData03_6[0x10];                                      // 0x0158   (0x0010)  MISSED
};

/// Struct /Script/ControlRig.ModularRigSingleConnection
/// Size: 0x0010 (0x000000 - 0x000010)
struct FModularRigSingleConnection
{ 
	FRigElementKey                                     Connector;                                                  // 0x0000   (0x0008)  
	FRigElementKey                                     Target;                                                     // 0x0008   (0x0008)  
};

/// Struct /Script/ControlRig.ModularRigConnections
/// Size: 0x0060 (0x000000 - 0x000060)
struct FModularRigConnections
{ 
	TArray<FModularRigSingleConnection>                ConnectionList;                                             // 0x0000   (0x0010)  
	unsigned char                                      UnknownData00_6[0x50];                                      // 0x0010   (0x0050)  MISSED
};

/// Struct /Script/ControlRig.ModularRigModel
/// Size: 0x00A0 (0x000000 - 0x0000A0)
struct FModularRigModel
{ 
	TArray<FRigModuleReference>                        Modules;                                                    // 0x0000   (0x0010)  
	unsigned char                                      UnknownData00_5[0x20];                                      // 0x0010   (0x0020)  MISSED
	FModularRigConnections                             Connections;                                                // 0x0030   (0x0060)  
	class UObject*                                     Controller;                                                 // 0x0090   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0098   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigModuleExecutionElement
/// Size: 0x0020 (0x000000 - 0x000020)
struct FRigModuleExecutionElement
{ 
	SDK_UNDEFINED(16,12514) /* FString */              __um(ModulePath);                                           // 0x0000   (0x0010)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0010   (0x0008)  MISSED
	FName                                              EventName;                                                  // 0x0018   (0x0004)  
	bool                                               bExecuted;                                                  // 0x001C   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x001D   (0x0003)  MISSED
};

/// Class /Script/ControlRig.ModularRig
/// Size: 0x0190 (0x000AA0 - 0x000C30)
class UModularRig : public UControlRig
{ 
public:
	TArray<FRigModuleInstance>                         Modules;                                                    // 0x0AA0   (0x0010)  
	unsigned char                                      UnknownData00_5[0x20];                                      // 0x0AB0   (0x0020)  MISSED
	FModularRigSettings                                ModularRigSettings;                                         // 0x0AD0   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0AD1   (0x0007)  MISSED
	FModularRigModel                                   ModularRigModel;                                            // 0x0AD8   (0x00A0)  
	TArray<FRigModuleExecutionElement>                 ExecutionQueue;                                             // 0x0B78   (0x0010)  
	unsigned char                                      UnknownData02_6[0xA8];                                      // 0x0B88   (0x00A8)  MISSED
};

/// Class /Script/ControlRig.RigHierarchy
/// Size: 0x0498 (0x000028 - 0x0004C0)
class URigHierarchy : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x40];                                      // 0x0000   (0x0040)  MISSED
	SDK_UNDEFINED(16,12515) /* FMulticastInlineDelegate */ __um(ModifiedEventDynamic);                             // 0x0040   (0x0010)  
	unsigned char                                      UnknownData01_5[0x48];                                      // 0x0050   (0x0048)  MISSED
	uint32_t                                           TopologyVersion;                                            // 0x0098   (0x0004)  
	uint32_t                                           MetadataVersion;                                            // 0x009C   (0x0004)  
	uint16_t                                           MetadataTagVersion;                                         // 0x00A0   (0x0002)  
	bool                                               bEnableDirtyPropagation;                                    // 0x00A2   (0x0001)  
	unsigned char                                      UnknownData02_5[0x131];                                     // 0x00A3   (0x0131)  MISSED
	int32_t                                            TransformStackIndex;                                        // 0x01D4   (0x0004)  
	unsigned char                                      UnknownData03_5[0x70];                                      // 0x01D8   (0x0070)  MISSED
	class URigHierarchyController*                     HierarchyController;                                        // 0x0248   (0x0008)  
	unsigned char                                      UnknownData04_5[0x8];                                       // 0x0250   (0x0008)  MISSED
	class UModularRigRuleManager*                      RuleManager;                                                // 0x0258   (0x0008)  
	unsigned char                                      UnknownData05_5[0x50];                                      // 0x0260   (0x0050)  MISSED
	SDK_UNDEFINED(80,12516) /* TMap<FRigElementKey, FRigElementKey> */ __um(PreviousNameMap);                      // 0x02B0   (0x0050)  
	unsigned char                                      UnknownData06_5[0xF8];                                      // 0x0300   (0x00F8)  MISSED
	class URigHierarchy*                               HierarchyForCacheValidation;                                // 0x03F8   (0x0008)  
	unsigned char                                      UnknownData07_6[0xC0];                                      // 0x0400   (0x00C0)  MISSED


	/// Functions
	// Function /Script/ControlRig.RigHierarchy.UnsetCurveValueByIndex
	// void UnsetCurveValueByIndex(int32_t InElementIndex, bool bSetupUndo);                                                 // [0x77910a4] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.UnsetCurveValue
	// void UnsetCurveValue(FRigElementKey InKey, bool bSetupUndo);                                                          // [0x7790e84] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SwitchToWorldSpace
	// bool SwitchToWorldSpace(FRigElementKey InChild, bool bInitial, bool bAffectChildren);                                 // [0x7790b90] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SwitchToParent
	// bool SwitchToParent(FRigElementKey InChild, FRigElementKey InParent, bool bInitial, bool bAffectChildren);            // [0x77907bc] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SwitchToDefaultParent
	// bool SwitchToDefaultParent(FRigElementKey InChild, bool bInitial, bool bAffectChildren);                              // [0x77904c8] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SortKeys
	// TArray<FRigElementKey> SortKeys(TArray<FRigElementKey>& InKeys);                                                      // [0x7790400] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.SetVectorMetadata
	// bool SetVectorMetadata(FRigElementKey InItem, FName InMetadataName, FVector InValue);                                 // [0x7790108] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetVectorArrayMetadata
	// bool SetVectorArrayMetadata(FRigElementKey InItem, FName InMetadataName, TArray<FVector> InValue);                    // [0x778fdcc] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetTransformMetadata
	// bool SetTransformMetadata(FRigElementKey InItem, FName InMetadataName, FTransform InValue);                           // [0x778fa38] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetTransformArrayMetadata
	// bool SetTransformArrayMetadata(FRigElementKey InItem, FName InMetadataName, TArray<FTransform> InValue);              // [0x778f6fc] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetTag
	// bool SetTag(FRigElementKey InItem, FName InTag);                                                                      // [0x778f4e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetRotatorMetadata
	// bool SetRotatorMetadata(FRigElementKey InItem, FName InMetadataName, FRotator InValue);                               // [0x778f168] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetRotatorArrayMetadata
	// bool SetRotatorArrayMetadata(FRigElementKey InItem, FName InMetadataName, TArray<FRotator> InValue);                  // [0x778ee48] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetRigElementKeyMetadata
	// bool SetRigElementKeyMetadata(FRigElementKey InItem, FName InMetadataName, FRigElementKey InValue);                   // [0x778eb60] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetRigElementKeyArrayMetadata
	// bool SetRigElementKeyArrayMetadata(FRigElementKey InItem, FName InMetadataName, TArray<FRigElementKey> InValue);      // [0x778e840] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetQuatMetadata
	// bool SetQuatMetadata(FRigElementKey InItem, FName InMetadataName, FQuat InValue);                                     // [0x778e54c] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetQuatArrayMetadata
	// bool SetQuatArrayMetadata(FRigElementKey InItem, FName InMetadataName, TArray<FQuat> InValue);                        // [0x778e22c] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetPose_ForBlueprint
	// void SetPose_ForBlueprint(FRigPose InPose);                                                                           // [0x778e088] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetParentWeightArray
	// bool SetParentWeightArray(FRigElementKey InChild, TArray<FRigElementWeight> InWeights, bool bInitial, bool bAffectChildren); // [0x778dc88] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetParentWeight
	// bool SetParentWeight(FRigElementKey InChild, FRigElementKey InParent, FRigElementWeight InWeight, bool bInitial, bool bAffectChildren); // [0x778d7c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetNameMetadata
	// bool SetNameMetadata(FRigElementKey InItem, FName InMetadataName, FName InValue);                                     // [0x778d4dc] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetNameArrayMetadata
	// bool SetNameArrayMetadata(FRigElementKey InItem, FName InMetadataName, TArray<FName> InValue);                        // [0x778d1a4] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetLocalTransformByIndex
	// void SetLocalTransformByIndex(int32_t InElementIndex, FTransform InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommands); // [0x778cc00] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetLocalTransform
	// void SetLocalTransform(FRigElementKey InKey, FTransform InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommands); // [0x778c5cc] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetLinearColorMetadata
	// bool SetLinearColorMetadata(FRigElementKey InItem, FName InMetadataName, FLinearColor InValue);                       // [0x778c2dc] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetLinearColorArrayMetadata
	// bool SetLinearColorArrayMetadata(FRigElementKey InItem, FName InMetadataName, TArray<FLinearColor> InValue);          // [0x778bfbc] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetInt32Metadata
	// bool SetInt32Metadata(FRigElementKey InItem, FName InMetadataName, int32_t InValue);                                  // [0x778bcd8] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetInt32ArrayMetadata
	// bool SetInt32ArrayMetadata(FRigElementKey InItem, FName InMetadataName, TArray<int32_t> InValue);                     // [0x778b9a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetGlobalTransformByIndex
	// void SetGlobalTransformByIndex(int32_t InElementIndex, FTransform InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommand); // [0x778b3fc] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetGlobalTransform
	// void SetGlobalTransform(FRigElementKey InKey, FTransform InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommand); // [0x778adc8] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetFloatMetadata
	// bool SetFloatMetadata(FRigElementKey InItem, FName InMetadataName, float InValue);                                    // [0x778aae4] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetFloatArrayMetadata
	// bool SetFloatArrayMetadata(FRigElementKey InItem, FName InMetadataName, TArray<float> InValue);                       // [0x778a7ac] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetCurveValueByIndex
	// void SetCurveValueByIndex(int32_t InElementIndex, float InValue, bool bSetupUndo);                                    // [0x778a6ac] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetCurveValue
	// void SetCurveValue(FRigElementKey InKey, float InValue, bool bSetupUndo);                                             // [0x778a3d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetControlVisibilityByIndex
	// void SetControlVisibilityByIndex(int32_t InElementIndex, bool bVisibility);                                           // [0x778a30c] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetControlVisibility
	// void SetControlVisibility(FRigElementKey InKey, bool bVisibility);                                                    // [0x778a0e4] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetControlValueByIndex
	// void SetControlValueByIndex(int32_t InElementIndex, FRigControlValue InValue, ERigControlValueType InValueType, bool bSetupUndo, bool bPrintPythonCommands); // [0x7789c5c] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetControlValue
	// void SetControlValue(FRigElementKey InKey, FRigControlValue InValue, ERigControlValueType InValueType, bool bSetupUndo, bool bPrintPythonCommands); // [0x7789720] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetControlShapeTransformByIndex
	// void SetControlShapeTransformByIndex(int32_t InElementIndex, FTransform InTransform, bool bInitial, bool bSetupUndo); // [0x7789354] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetControlShapeTransform
	// void SetControlShapeTransform(FRigElementKey InKey, FTransform InTransform, bool bInitial, bool bSetupUndo);          // [0x7788eec] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetControlSettingsByIndex
	// void SetControlSettingsByIndex(int32_t InElementIndex, FRigControlSettings InSettings, bool bSetupUndo, bool bForce, bool bPrintPythonCommands); // [0x7788a84] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetControlSettings
	// void SetControlSettings(FRigElementKey InKey, FRigControlSettings InSettings, bool bSetupUndo, bool bForce, bool bPrintPythonCommands); // [0x778857c] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetControlPreferredRotatorByIndex
	// void SetControlPreferredRotatorByIndex(int32_t InElementIndex, FRotator& InRotator, bool bInitial, bool bFixEulerFlips); // [0x77883a4] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetControlPreferredRotator
	// void SetControlPreferredRotator(FRigElementKey InKey, FRotator& InRotator, bool bInitial, bool bFixEulerFlips);       // [0x7788004] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetControlPreferredRotationOrderByIndex
	// void SetControlPreferredRotationOrderByIndex(int32_t InElementIndex, EEulerRotationOrder InRotationOrder);            // [0x7787f40] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetControlPreferredRotationOrder
	// void SetControlPreferredRotationOrder(FRigElementKey InKey, EEulerRotationOrder InRotationOrder);                     // [0x7787d1c] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetControlPreferredEulerAnglesByIndex
	// void SetControlPreferredEulerAnglesByIndex(int32_t InElementIndex, FVector& InEulerAngles, EEulerRotationOrder InRotationOrder, bool bInitial, bool bFixEulerFlips); // [0x7787a78] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetControlPreferredEulerAngles
	// void SetControlPreferredEulerAngles(FRigElementKey InKey, FVector& InEulerAngles, EEulerRotationOrder InRotationOrder, bool bInitial, bool bFixEulerFlips); // [0x77875c4] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetControlOffsetTransformByIndex
	// void SetControlOffsetTransformByIndex(int32_t InElementIndex, FTransform InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommands); // [0x7787020] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetControlOffsetTransform
	// void SetControlOffsetTransform(FRigElementKey InKey, FTransform InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommands); // [0x77869ec] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetConnectorSettingsByIndex
	// void SetConnectorSettingsByIndex(int32_t InElementIndex, FRigConnectorSettings InSettings, bool bSetupUndo, bool bForce, bool bPrintPythonCommands); // [0x77865b8] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetConnectorSettings
	// void SetConnectorSettings(FRigElementKey InKey, FRigConnectorSettings InSettings, bool bSetupUndo, bool bForce, bool bPrintPythonCommands); // [0x77860f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetBoolMetadata
	// bool SetBoolMetadata(FRigElementKey InItem, FName InMetadataName, bool InValue);                                      // [0x7785e08] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetBoolArrayMetadata
	// bool SetBoolArrayMetadata(FRigElementKey InItem, FName InMetadataName, TArray<bool> InValue);                         // [0x7785ad4] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SendAutoKeyEvent
	// void SendAutoKeyEvent(FRigElementKey InElement, float InOffsetInSeconds, bool bAsynchronous);                         // [0x77857f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.RestoreSocketsFromStates
	// TArray<FRigElementKey> RestoreSocketsFromStates(TArray<FRigSocketState> InStates, bool bSetupUndoRedo);               // [0x77856e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.RestoreConnectorsFromStates
	// TArray<FRigElementKey> RestoreConnectorsFromStates(TArray<FRigConnectorState> InStates, bool bSetupUndoRedo);         // [0x778558c] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.ResetToDefault
	// void ResetToDefault();                                                                                                // [0x7785578] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.ResetPoseToInitial
	// void ResetPoseToInitial(ERigElementType InTypeFilter);                                                                // [0x77854f8] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.ResetCurveValues
	// void ResetCurveValues();                                                                                              // [0x77854a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.Reset
	// void Reset();                                                                                                         // [0x778548c] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.RemoveMetadata
	// bool RemoveMetadata(FRigElementKey InItem, FName InMetadataName);                                                     // [0x7785270] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.RemoveAllMetadata
	// bool RemoveAllMetadata(FRigElementKey InItem);                                                                        // [0x7785124] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.Num
	// int32_t Num();                                                                                                        // [0x3eadac8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.MakeControlValueFromVector2D
	// FRigControlValue MakeControlValueFromVector2D(FVector2D InValue);                                                     // [0x7784db8] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.MakeControlValueFromVector
	// FRigControlValue MakeControlValueFromVector(FVector InValue);                                                         // [0x7784f68] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.MakeControlValueFromTransformNoScale
	// FRigControlValue MakeControlValueFromTransformNoScale(FTransformNoScale InValue);                                     // [0x7784bec] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.MakeControlValueFromTransform
	// FRigControlValue MakeControlValueFromTransform(FTransform InValue);                                                   // [0x77849dc] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.MakeControlValueFromRotator
	// FRigControlValue MakeControlValueFromRotator(FRotator InValue);                                                       // [0x7784848] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.MakeControlValueFromInt
	// FRigControlValue MakeControlValueFromInt(int32_t InValue);                                                            // [0x7784754] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.MakeControlValueFromFloat
	// FRigControlValue MakeControlValueFromFloat(float InValue);                                                            // [0x778465c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.MakeControlValueFromEulerTransform
	// FRigControlValue MakeControlValueFromEulerTransform(FEulerTransform InValue);                                         // [0x7784470] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.MakeControlValueFromBool
	// FRigControlValue MakeControlValueFromBool(bool InValue);                                                              // [0x7784364] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.IsValidIndex
	// bool IsValidIndex(int32_t InElementIndex);                                                                            // [0x77842d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.IsSelectedByIndex
	// bool IsSelectedByIndex(int32_t InIndex);                                                                              // [0x7784220] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.IsSelected
	// bool IsSelected(FRigElementKey InKey);                                                                                // [0x77840e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.IsProcedural
	// bool IsProcedural(FRigElementKey& InKey);                                                                             // [0x7784038] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.IsParentedTo
	// bool IsParentedTo(FRigElementKey InChild, FRigElementKey InParent);                                                   // [0x7783e18] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.IsCurveValueSetByIndex
	// bool IsCurveValueSetByIndex(int32_t InElementIndex);                                                                  // [0x7783d8c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.IsCurveValueSet
	// bool IsCurveValueSet(FRigElementKey InKey);                                                                           // [0x7783c40] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.IsControllerAvailable
	// bool IsControllerAvailable();                                                                                         // [0x7783c28] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.HasTag
	// bool HasTag(FRigElementKey InItem, FName InTag);                                                                      // [0x7783a0c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetVectorMetadata
	// FVector GetVectorMetadata(FRigElementKey InItem, FName InMetadataName, FVector DefaultValue);                         // [0x77836f4] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetVectorFromControlValue
	// FVector GetVectorFromControlValue(FRigControlValue InValue);                                                          // [0x7783598] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.GetVectorArrayMetadata
	// TArray<FVector> GetVectorArrayMetadata(FRigElementKey InItem, FName InMetadataName);                                  // [0x7783368] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetVector2DFromControlValue
	// FVector2D GetVector2DFromControlValue(FRigControlValue InValue);                                                      // [0x7783218] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.GetTransformNoScaleFromControlValue
	// FTransformNoScale GetTransformNoScaleFromControlValue(FRigControlValue InValue);                                      // [0x7783054] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.GetTransformMetadata
	// FTransform GetTransformMetadata(FRigElementKey InItem, FName InMetadataName, FTransform DefaultValue);                // [0x7782c88] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetTransformFromControlValue
	// FTransform GetTransformFromControlValue(FRigControlValue InValue);                                                    // [0x7782a94] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.GetTransformArrayMetadata
	// TArray<FTransform> GetTransformArrayMetadata(FRigElementKey InItem, FName InMetadataName);                            // [0x7782864] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetTags
	// TArray<FName> GetTags(FRigElementKey InItem);                                                                         // [0x778270c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetSocketStates
	// TArray<FRigSocketState> GetSocketStates();                                                                            // [0x778266c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetSocketKeys
	// TArray<FRigElementKey> GetSocketKeys(bool bTraverse);                                                                 // [0x77825c4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetSelectedKeys
	// TArray<FRigElementKey> GetSelectedKeys(ERigElementType InTypeFilter);                                                 // [0x7782520] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetRuleManager
	// class UModularRigRuleManager* GetRuleManager(bool bCreateIfNeeded);                                                   // [0x7782490] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.GetRotatorMetadata
	// FRotator GetRotatorMetadata(FRigElementKey InItem, FName InMetadataName, FRotator DefaultValue);                      // [0x7782178] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetRotatorFromControlValue
	// FRotator GetRotatorFromControlValue(FRigControlValue InValue);                                                        // [0x7782010] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.GetRotatorArrayMetadata
	// TArray<FRotator> GetRotatorArrayMetadata(FRigElementKey InItem, FName InMetadataName);                                // [0x7781de0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetRootElementKeys
	// TArray<FRigElementKey> GetRootElementKeys();                                                                          // [0x7781d7c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetRigidBodyKeys
	// TArray<FRigElementKey> GetRigidBodyKeys(bool bTraverse);                                                              // [0x7781cd4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetRigElementKeyMetadata
	// FRigElementKey GetRigElementKeyMetadata(FRigElementKey InItem, FName InMetadataName, FRigElementKey DefaultValue);    // [0x77819dc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetRigElementKeyArrayMetadata
	// TArray<FRigElementKey> GetRigElementKeyArrayMetadata(FRigElementKey InItem, FName InMetadataName);                    // [0x77817ac] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetReferenceKeys
	// TArray<FRigElementKey> GetReferenceKeys(bool bTraverse);                                                              // [0x7781704] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetQuatMetadata
	// FQuat GetQuatMetadata(FRigElementKey InItem, FName InMetadataName, FQuat DefaultValue);                               // [0x77813f0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetQuatArrayMetadata
	// TArray<FQuat> GetQuatArrayMetadata(FRigElementKey InItem, FName InMetadataName);                                      // [0x77811c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetPreviousParent
	// FRigElementKey GetPreviousParent(FRigElementKey& InKey);                                                              // [0x7781128] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetPreviousName
	// FName GetPreviousName(FRigElementKey& InKey);                                                                         // [0x7781094] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetPose
	// FRigPose GetPose(bool bInitial, bool bIncludeTransientControls);                                                      // [0x7780f8c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetParentWeightArray
	// TArray<FRigElementWeight> GetParentWeightArray(FRigElementKey InChild, bool bInitial);                                // [0x7780b24] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetParentWeight
	// FRigElementWeight GetParentWeight(FRigElementKey InChild, FRigElementKey InParent, bool bInitial);                    // [0x7780820] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetParentTransformByIndex
	// FTransform GetParentTransformByIndex(int32_t InElementIndex, bool bInitial);                                          // [0x7780700] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetParentTransform
	// FTransform GetParentTransform(FRigElementKey InKey, bool bInitial);                                                   // [0x7780498] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetParents
	// TArray<FRigElementKey> GetParents(FRigElementKey InKey, bool bRecursive);                                             // [0x7780d58] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetNumberOfParents
	// int32_t GetNumberOfParents(FRigElementKey InKey);                                                                     // [0x7780354] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetNullKeys
	// TArray<FRigElementKey> GetNullKeys(bool bTraverse);                                                                   // [0x77802ac] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetNameSpaceFName
	// FName GetNameSpaceFName(FRigElementKey InItem);                                                                       // [0x7780170] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetNameSpace
	// FString GetNameSpace(FRigElementKey InItem);                                                                          // [0x7780018] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetNameMetadata
	// FName GetNameMetadata(FRigElementKey InItem, FName InMetadataName, FName DefaultValue);                               // [0x777fd28] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetNameArrayMetadata
	// TArray<FName> GetNameArrayMetadata(FRigElementKey InItem, FName InMetadataName);                                      // [0x777faf8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetModulePathFName
	// FName GetModulePathFName(FRigElementKey InItem);                                                                      // [0x777f9bc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetModulePath
	// FString GetModulePath(FRigElementKey InItem);                                                                         // [0x777f864] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetMetadataType
	// ERigMetadataType GetMetadataType(FRigElementKey InItem, FName InMetadataName);                                        // [0x777f648] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetMetadataNames
	// TArray<FName> GetMetadataNames(FRigElementKey InItem);                                                                // [0x777f4f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetLocalTransformByIndex
	// FTransform GetLocalTransformByIndex(int32_t InElementIndex, bool bInitial);                                           // [0x777f3dc] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetLocalTransform
	// FTransform GetLocalTransform(FRigElementKey InKey, bool bInitial);                                                    // [0x777f180] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetLocalIndex_ForBlueprint
	// int32_t GetLocalIndex_ForBlueprint(FRigElementKey InKey);                                                             // [0x777f034] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetLocalControlShapeTransformByIndex
	// FTransform GetLocalControlShapeTransformByIndex(int32_t InElementIndex, bool bInitial);                               // [0x777ef20] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetLocalControlShapeTransform
	// FTransform GetLocalControlShapeTransform(FRigElementKey InKey, bool bInitial);                                        // [0x777ecbc] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetLinearColorMetadata
	// FLinearColor GetLinearColorMetadata(FRigElementKey InItem, FName InMetadataName, FLinearColor DefaultValue);          // [0x777e9c0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetLinearColorArrayMetadata
	// TArray<FLinearColor> GetLinearColorArrayMetadata(FRigElementKey InItem, FName InMetadataName);                        // [0x777e790] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetKeys
	// TArray<FRigElementKey> GetKeys(TArray<int32_t> InElementIndices);                                                     // [0x777e62c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetKey
	// FRigElementKey GetKey(int32_t InElementIndex);                                                                        // [0x777e5a4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetIntFromControlValue
	// int32_t GetIntFromControlValue(FRigControlValue InValue);                                                             // [0x777e464] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.GetInt32Metadata
	// int32_t GetInt32Metadata(FRigElementKey InItem, FName InMetadataName, int32_t DefaultValue);                          // [0x777e180] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetInt32ArrayMetadata
	// TArray<int32_t> GetInt32ArrayMetadata(FRigElementKey InItem, FName InMetadataName);                                   // [0x777df50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetIndex_ForBlueprint
	// int32_t GetIndex_ForBlueprint(FRigElementKey InKey);                                                                  // [0x777de14] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetGlobalTransformByIndex
	// FTransform GetGlobalTransformByIndex(int32_t InElementIndex, bool bInitial);                                          // [0x777dd00] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetGlobalTransform
	// FTransform GetGlobalTransform(FRigElementKey InKey, bool bInitial);                                                   // [0x777daa4] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetGlobalControlShapeTransformByIndex
	// FTransform GetGlobalControlShapeTransformByIndex(int32_t InElementIndex, bool bInitial);                              // [0x777d990] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetGlobalControlShapeTransform
	// FTransform GetGlobalControlShapeTransform(FRigElementKey InKey, bool bInitial);                                       // [0x777d72c] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetGlobalControlOffsetTransformByIndex
	// FTransform GetGlobalControlOffsetTransformByIndex(int32_t InElementIndex, bool bInitial);                             // [0x777d618] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetGlobalControlOffsetTransform
	// FTransform GetGlobalControlOffsetTransform(FRigElementKey InKey, bool bInitial);                                      // [0x777d3bc] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetFloatMetadata
	// float GetFloatMetadata(FRigElementKey InItem, FName InMetadataName, float DefaultValue);                              // [0x777d0d8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetFloatFromControlValue
	// float GetFloatFromControlValue(FRigControlValue InValue);                                                             // [0x777cfa0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.GetFloatArrayMetadata
	// TArray<float> GetFloatArrayMetadata(FRigElementKey InItem, FName InMetadataName);                                     // [0x777cd70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetFirstParent
	// FRigElementKey GetFirstParent(FRigElementKey InKey);                                                                  // [0x777cc34] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetEulerTransformFromControlValue
	// FEulerTransform GetEulerTransformFromControlValue(FRigControlValue InValue);                                          // [0x777ca68] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.GetDefaultParent
	// FRigElementKey GetDefaultParent(FRigElementKey InKey);                                                                // [0x777c92c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetCurveValueByIndex
	// float GetCurveValueByIndex(int32_t InElementIndex);                                                                   // [0x777c89c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetCurveValue
	// float GetCurveValue(FRigElementKey InKey);                                                                            // [0x777c750] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetCurveKeys
	// TArray<FRigElementKey> GetCurveKeys();                                                                                // [0x777c70c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetControlValueByIndex
	// FRigControlValue GetControlValueByIndex(int32_t InElementIndex, ERigControlValueType InValueType);                    // [0x777c54c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetControlValue
	// FRigControlValue GetControlValue(FRigElementKey InKey, ERigControlValueType InValueType);                             // [0x777c2d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetControlPreferredRotatorByIndex
	// FRotator GetControlPreferredRotatorByIndex(int32_t InElementIndex, bool bInitial);                                    // [0x777c1f8] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetControlPreferredRotator
	// FRotator GetControlPreferredRotator(FRigElementKey InKey, bool bInitial);                                             // [0x777bfbc] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetControlPreferredEulerRotationOrderByIndex
	// EEulerRotationOrder GetControlPreferredEulerRotationOrderByIndex(int32_t InElementIndex, bool bFromSettings);         // [0x777bef8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetControlPreferredEulerRotationOrder
	// EEulerRotationOrder GetControlPreferredEulerRotationOrder(FRigElementKey InKey, bool bFromSettings);                  // [0x777bcd4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetControlPreferredEulerAnglesByIndex
	// FVector GetControlPreferredEulerAnglesByIndex(int32_t InElementIndex, EEulerRotationOrder InRotationOrder, bool bInitial); // [0x777bbc4] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetControlPreferredEulerAngles
	// FVector GetControlPreferredEulerAngles(FRigElementKey InKey, EEulerRotationOrder InRotationOrder, bool bInitial);     // [0x777b8c0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetController
	// class URigHierarchyController* GetController(bool bCreateIfNeeded);                                                   // [0x777c67c] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.GetControlKeys
	// TArray<FRigElementKey> GetControlKeys(bool bTraverse);                                                                // [0x777b818] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetConnectorStates
	// TArray<FRigConnectorState> GetConnectorStates();                                                                      // [0x777b778] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetConnectorKeys
	// TArray<FRigElementKey> GetConnectorKeys(bool bTraverse);                                                              // [0x777b6d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetChildren
	// TArray<FRigElementKey> GetChildren(FRigElementKey InKey, bool bRecursive);                                            // [0x777b49c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetBoolMetadata
	// bool GetBoolMetadata(FRigElementKey InItem, FName InMetadataName, bool DefaultValue);                                 // [0x777b1b4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetBoolArrayMetadata
	// TArray<bool> GetBoolArrayMetadata(FRigElementKey InItem, FName InMetadataName);                                       // [0x777af84] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetBoneKeys
	// TArray<FRigElementKey> GetBoneKeys(bool bTraverse);                                                                   // [0x777aedc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetAllKeys_ForBlueprint
	// TArray<FRigElementKey> GetAllKeys_ForBlueprint(bool bTraverse);                                                       // [0x777ae34] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.FindNull_ForBlueprintOnly
	// FRigNullElement FindNull_ForBlueprintOnly(FRigElementKey& InKey);                                                     // [0x777acdc] Final|Native|Private|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.FindControl_ForBlueprintOnly
	// FRigControlElement FindControl_ForBlueprintOnly(FRigElementKey& InKey);                                               // [0x777abfc] Final|Native|Private|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.FindBone_ForBlueprintOnly
	// FRigBoneElement FindBone_ForBlueprintOnly(FRigElementKey& InKey);                                                     // [0x777aab8] Final|Native|Private|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.CopyPose
	// void CopyPose(class URigHierarchy* InHierarchy, bool bCurrent, bool bInitial, bool bWeights, bool bMatchPoseInGlobalIfNeeded); // [0x777a914] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.CopyHierarchy
	// void CopyHierarchy(class URigHierarchy* InHierarchy);                                                                 // [0x777a894] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.Contains_ForBlueprint
	// bool Contains_ForBlueprint(FRigElementKey InKey);                                                                     // [0x777a750] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/ControlRig.RigHierarchyProvider
/// Size: 0x0000 (0x000028 - 0x000028)
class URigHierarchyProvider : public UInterface
{ 
public:
};

/// Class /Script/ControlRig.AnimNodeControlRigLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UAnimNodeControlRigLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/ControlRig.AnimNodeControlRigLibrary.SetControlRigClass
	// FControlRigReference SetControlRigClass(FControlRigReference& Node, class UClass* ControlRigClass);                   // [0x77d1644] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ControlRig.AnimNodeControlRigLibrary.ConvertToControlRigPure
	// void ConvertToControlRigPure(FAnimNodeReference& Node, FControlRigReference& ControlRig, bool& Result);               // [0x77cdb90] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/ControlRig.AnimNodeControlRigLibrary.ConvertToControlRig
	// FControlRigReference ConvertToControlRig(FAnimNodeReference& Node, EAnimNodeReferenceConversionResult& Result);       // [0x77cda64] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/ControlRig.TransformableControlHandle
/// Size: 0x0028 (0x000060 - 0x000088)
class UTransformableControlHandle : public UTransformableHandle
{ 
public:
	SDK_UNDEFINED(32,12517) /* TWeakObjectPtr<UControlRig*> */ __um(ControlRig);                                   // 0x0060   (0x0020)  
	FName                                              ControlName;                                                // 0x0080   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0084   (0x0004)  MISSED
};

/// Class /Script/ControlRig.ControlRigAnimInstance
/// Size: 0x0000 (0x000370 - 0x000370)
class UControlRigAnimInstance : public UAnimInstance
{ 
public:
};

/// Class /Script/ControlRig.ControlRigBlueprintGeneratedClass
/// Size: 0x0000 (0x000388 - 0x000388)
class UControlRigBlueprintGeneratedClass : public URigVMBlueprintGeneratedClass
{ 
public:
};

/// Struct /Script/ControlRig.ControlRigComponentMappedElement
/// Size: 0x00E0 (0x000000 - 0x0000E0)
struct FControlRigComponentMappedElement
{ 
	FSoftComponentReference                            ComponentReference;                                         // 0x0000   (0x0040)  
	int32_t                                            TransformIndex;                                             // 0x0040   (0x0004)  
	FName                                              TransformName;                                              // 0x0044   (0x0004)  
	ERigElementType                                    ElementType;                                                // 0x0048   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0049   (0x0003)  MISSED
	FName                                              ElementName;                                                // 0x004C   (0x0004)  
	EControlRigComponentMapDirection                   Direction;                                                  // 0x0050   (0x0001)  
	unsigned char                                      UnknownData01_5[0xF];                                       // 0x0051   (0x000F)  MISSED
	FTransform                                         Offset;                                                     // 0x0060   (0x0060)  
	float                                              Weight;                                                     // 0x00C0   (0x0004)  
	EControlRigComponentSpace                          Space;                                                      // 0x00C4   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x00C5   (0x0003)  MISSED
	class USceneComponent*                             SceneComponent;                                             // 0x00C8   (0x0008)  
	int32_t                                            ElementIndex;                                               // 0x00D0   (0x0004)  
	int32_t                                            SubIndex;                                                   // 0x00D4   (0x0004)  
	unsigned char                                      UnknownData03_6[0x8];                                       // 0x00D8   (0x0008)  MISSED
};

/// Class /Script/ControlRig.ControlRigComponent
/// Size: 0x0170 (0x000500 - 0x000670)
class UControlRigComponent : public UPrimitiveComponent
{ 
public:
	class UClass*                                      ControlRigClass;                                            // 0x0500   (0x0008)  
	SDK_UNDEFINED(16,12518) /* FMulticastInlineDelegate */ __um(OnPreInitializeDelegate);                          // 0x0508   (0x0010)  
	SDK_UNDEFINED(16,12519) /* FMulticastInlineDelegate */ __um(OnPostInitializeDelegate);                         // 0x0518   (0x0010)  
	SDK_UNDEFINED(16,12520) /* FMulticastInlineDelegate */ __um(OnPreConstructionDelegate);                        // 0x0528   (0x0010)  
	SDK_UNDEFINED(16,12521) /* FMulticastInlineDelegate */ __um(OnPostConstructionDelegate);                       // 0x0538   (0x0010)  
	SDK_UNDEFINED(16,12522) /* FMulticastInlineDelegate */ __um(OnPreForwardsSolveDelegate);                       // 0x0548   (0x0010)  
	SDK_UNDEFINED(16,12523) /* FMulticastInlineDelegate */ __um(OnPostForwardsSolveDelegate);                      // 0x0558   (0x0010)  
	TArray<FControlRigComponentMappedElement>          UserDefinedElements;                                        // 0x0568   (0x0010)  
	TArray<FControlRigComponentMappedElement>          MappedElements;                                             // 0x0578   (0x0010)  
	bool                                               bEnableLazyEvaluation;                                      // 0x0588   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0589   (0x0003)  MISSED
	float                                              LazyEvaluationPositionThreshold;                            // 0x058C   (0x0004)  
	float                                              LazyEvaluationRotationThreshold;                            // 0x0590   (0x0004)  
	float                                              LazyEvaluationScaleThreshold;                               // 0x0594   (0x0004)  
	bool                                               bResetTransformBeforeTick;                                  // 0x0598   (0x0001)  
	bool                                               bResetInitialsBeforeConstruction;                           // 0x0599   (0x0001)  
	bool                                               bUpdateRigOnTick;                                           // 0x059A   (0x0001)  
	bool                                               bUpdateInEditor;                                            // 0x059B   (0x0001)  
	bool                                               bDrawBones;                                                 // 0x059C   (0x0001)  
	bool                                               bShowDebugDrawing;                                          // 0x059D   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x059E   (0x0002)  MISSED
	class UControlRig*                                 ControlRig;                                                 // 0x05A0   (0x0008)  
	unsigned char                                      UnknownData02_6[0xC8];                                      // 0x05A8   (0x00C8)  MISSED


	/// Functions
	// Function /Script/ControlRig.ControlRigComponent.Update
	// void Update(float DeltaTime);                                                                                         // [0x77d333c] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigComponent.SetObjectBinding
	// void SetObjectBinding(class UObject* InObjectToBind);                                                                 // [0x77d2cf0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigComponent.SetMappedElements
	// void SetMappedElements(TArray<FControlRigComponentMappedElement> NewMappedElements);                                  // [0x77d2a00] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigComponent.SetInitialSpaceTransform
	// void SetInitialSpaceTransform(FName SpaceName, FTransform InitialTransform, EControlRigComponentSpace Space);         // [0x77d2710] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigComponent.SetInitialBoneTransform
	// void SetInitialBoneTransform(FName BoneName, FTransform InitialTransform, EControlRigComponentSpace Space, bool bPropagateToChildren); // [0x77d233c] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigComponent.SetControlVector2D
	// void SetControlVector2D(FName ControlName, FVector2D Value);                                                          // [0x77d2030] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigComponent.SetControlTransform
	// void SetControlTransform(FName ControlName, FTransform Value, EControlRigComponentSpace Space);                       // [0x77d1d40] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigComponent.SetControlScale
	// void SetControlScale(FName ControlName, FVector Value, EControlRigComponentSpace Space);                              // [0x77d1ae8] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigComponent.SetControlRotator
	// void SetControlRotator(FName ControlName, FRotator Value, EControlRigComponentSpace Space);                           // [0x77d1890] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigComponent.SetControlRigClass
	// void SetControlRigClass(class UClass* InControlRigClass);                                                             // [0x77d17e8] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigComponent.SetControlPosition
	// void SetControlPosition(FName ControlName, FVector Value, EControlRigComponentSpace Space);                           // [0x77d13ec] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigComponent.SetControlOffset
	// void SetControlOffset(FName ControlName, FTransform OffsetTransform, EControlRigComponentSpace Space);                // [0x77d10fc] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigComponent.SetControlInt
	// void SetControlInt(FName ControlName, int32_t Value);                                                                 // [0x77d0ffc] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigComponent.SetControlFloat
	// void SetControlFloat(FName ControlName, float Value);                                                                 // [0x77d0f38] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigComponent.SetControlBool
	// void SetControlBool(FName ControlName, bool Value);                                                                   // [0x77d0e38] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigComponent.SetBoneTransform
	// void SetBoneTransform(FName BoneName, FTransform Transform, EControlRigComponentSpace Space, float Weight, bool bPropagateToChildren); // [0x77d06bc] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigComponent.SetBoneInitialTransformsFromSkeletalMesh
	// void SetBoneInitialTransformsFromSkeletalMesh(class USkeletalMesh* InSkeletalMesh);                                   // [0x77d0624] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigComponent.OnPreInitialize
	// void OnPreInitialize(class UControlRigComponent* Component);                                                          // [0x77cfdb4] Native|Event|Public|BlueprintEvent 
	// Function /Script/ControlRig.ControlRigComponent.OnPreForwardsSolve
	// void OnPreForwardsSolve(class UControlRigComponent* Component);                                                       // [0x77cfd30] Native|Event|Public|BlueprintEvent 
	// Function /Script/ControlRig.ControlRigComponent.OnPreConstruction
	// void OnPreConstruction(class UControlRigComponent* Component);                                                        // [0x77cfcac] Native|Event|Public|BlueprintEvent 
	// Function /Script/ControlRig.ControlRigComponent.OnPostInitialize
	// void OnPostInitialize(class UControlRigComponent* Component);                                                         // [0x77cfc28] Native|Event|Public|BlueprintEvent 
	// Function /Script/ControlRig.ControlRigComponent.OnPostForwardsSolve
	// void OnPostForwardsSolve(class UControlRigComponent* Component);                                                      // [0x66f6478] Native|Event|Public|BlueprintEvent 
	// Function /Script/ControlRig.ControlRigComponent.OnPostConstruction
	// void OnPostConstruction(class UControlRigComponent* Component);                                                       // [0x77cfba4] Native|Event|Public|BlueprintEvent 
	// Function /Script/ControlRig.ControlRigComponent.Initialize
	// void Initialize();                                                                                                    // [0x77cf728] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigComponent.GetSpaceTransform
	// FTransform GetSpaceTransform(FName SpaceName, EControlRigComponentSpace Space);                                       // [0x77cf578] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/ControlRig.ControlRigComponent.GetInitialSpaceTransform
	// FTransform GetInitialSpaceTransform(FName SpaceName, EControlRigComponentSpace Space);                                // [0x77cf3f8] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/ControlRig.ControlRigComponent.GetInitialBoneTransform
	// FTransform GetInitialBoneTransform(FName BoneName, EControlRigComponentSpace Space);                                  // [0x77cf2e4] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/ControlRig.ControlRigComponent.GetElementNames
	// TArray<FName> GetElementNames(ERigElementType ElementType);                                                           // [0x77cf080] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/ControlRig.ControlRigComponent.GetControlVector2D
	// FVector2D GetControlVector2D(FName ControlName);                                                                      // [0x77cefe8] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/ControlRig.ControlRigComponent.GetControlTransform
	// FTransform GetControlTransform(FName ControlName, EControlRigComponentSpace Space);                                   // [0x77ceed4] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/ControlRig.ControlRigComponent.GetControlScale
	// FVector GetControlScale(FName ControlName, EControlRigComponentSpace Space);                                          // [0x77cedd4] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/ControlRig.ControlRigComponent.GetControlRotator
	// FRotator GetControlRotator(FName ControlName, EControlRigComponentSpace Space);                                       // [0x77cecc8] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/ControlRig.ControlRigComponent.GetControlRig
	// class UControlRig* GetControlRig();                                                                                   // [0x77ceca4] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/ControlRig.ControlRigComponent.GetControlPosition
	// FVector GetControlPosition(FName ControlName, EControlRigComponentSpace Space);                                       // [0x77ceba4] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/ControlRig.ControlRigComponent.GetControlOffset
	// FTransform GetControlOffset(FName ControlName, EControlRigComponentSpace Space);                                      // [0x77cea90] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigComponent.GetControlInt
	// int32_t GetControlInt(FName ControlName);                                                                             // [0x77ce9a4] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/ControlRig.ControlRigComponent.GetControlFloat
	// float GetControlFloat(FName ControlName);                                                                             // [0x77ce914] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/ControlRig.ControlRigComponent.GetControlBool
	// bool GetControlBool(FName ControlName);                                                                               // [0x77ce828] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/ControlRig.ControlRigComponent.GetBoneTransform
	// FTransform GetBoneTransform(FName BoneName, EControlRigComponentSpace Space);                                         // [0x77ce714] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/ControlRig.ControlRigComponent.GetAbsoluteTime
	// float GetAbsoluteTime();                                                                                              // [0x77ce6e8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.ControlRigComponent.DoesElementExist
	// bool DoesElementExist(FName Name, ERigElementType ElementType);                                                       // [0x77ce4f4] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/ControlRig.ControlRigComponent.ClearMappedElements
	// void ClearMappedElements();                                                                                           // [0x77cd8ac] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigComponent.CanExecute
	// bool CanExecute();                                                                                                    // [0x77cd84c] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/ControlRig.ControlRigComponent.AddMappedSkeletalMesh
	// void AddMappedSkeletalMesh(class USkeletalMeshComponent* SkeletalMeshComponent, TArray<FControlRigComponentMappedBone> Bones, TArray<FControlRigComponentMappedCurve> Curves, EControlRigComponentMapDirection InDirection); // [0x77cc998] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigComponent.AddMappedElements
	// void AddMappedElements(TArray<FControlRigComponentMappedElement> NewMappedElements);                                  // [0x77cc8f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigComponent.AddMappedComponents
	// void AddMappedComponents(TArray<FControlRigComponentMappedComponent> Components);                                     // [0x77cc71c] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigComponent.AddMappedCompleteSkeletalMesh
	// void AddMappedCompleteSkeletalMesh(class USkeletalMeshComponent* SkeletalMeshComponent, EControlRigComponentMapDirection InDirection); // [0x77cc634] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/ControlRig.ControlRigControlActor
/// Size: 0x00A8 (0x000290 - 0x000338)
class AControlRigControlActor : public AActor
{ 
public:
	class AActor*                                      ActorToTrack;                                               // 0x0290   (0x0008)  
	class UClass*                                      ControlRigClass;                                            // 0x0298   (0x0008)  
	bool                                               bRefreshOnTick;                                             // 0x02A0   (0x0001)  
	bool                                               bIsSelectable;                                              // 0x02A1   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x02A2   (0x0006)  MISSED
	class UMaterialInterface*                          MaterialOverride;                                           // 0x02A8   (0x0008)  
	SDK_UNDEFINED(16,12524) /* FString */              __um(ColorParameter);                                       // 0x02B0   (0x0010)  
	bool                                               bCastShadows;                                               // 0x02C0   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x02C1   (0x0007)  MISSED
	class USceneComponent*                             ActorRootComponent;                                         // 0x02C8   (0x0008)  
	SDK_UNDEFINED(32,12525) /* TWeakObjectPtr<UControlRig*> */ __um(ControlRig);                                   // 0x02D0   (0x0020)  
	TArray<FName>                                      ControlNames;                                               // 0x02F0   (0x0010)  
	TArray<FTransform>                                 ShapeTransforms;                                            // 0x0300   (0x0010)  
	TArray<class UStaticMeshComponent*>                Components;                                                 // 0x0310   (0x0010)  
	TArray<class UMaterialInstanceDynamic*>            Materials;                                                  // 0x0320   (0x0010)  
	FName                                              ColorParameterName;                                         // 0x0330   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x0334   (0x0004)  MISSED


	/// Functions
	// Function /Script/ControlRig.ControlRigControlActor.ResetControlActor
	// void ResetControlActor();                                                                                             // [0x77d04fc] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigControlActor.Refresh
	// void Refresh();                                                                                                       // [0x77d0048] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigControlActor.Clear
	// void Clear();                                                                                                         // [0x77cd870] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/ControlRig.ControlRigShapeActor
/// Size: 0x00B0 (0x000290 - 0x000340)
class AControlRigShapeActor : public AActor
{ 
public:
	class USceneComponent*                             ActorRootComponent;                                         // 0x0290   (0x0008)  
	class UStaticMeshComponent*                        StaticMeshComponent;                                        // 0x0298   (0x0008)  
	uint32_t                                           ControlRigIndex;                                            // 0x02A0   (0x0004)  
	SDK_UNDEFINED(8,12526) /* TWeakObjectPtr<UControlRig*> */ __um(ControlRig);                                    // 0x02A4   (0x0008)  
	FName                                              ControlName;                                                // 0x02AC   (0x0004)  
	FName                                              ShapeName;                                                  // 0x02B0   (0x0004)  
	FName                                              ColorParameterName;                                         // 0x02B4   (0x0004)  
	unsigned char                                      UnknownData00_5[0x78];                                      // 0x02B8   (0x0078)  MISSED
	bool                                               bSelected : 1;                                              // 0x0330:0 (0x0001)  
	bool                                               bHovered : 1;                                               // 0x0330:1 (0x0001)  
	unsigned char                                      UnknownData01_6[0xF];                                       // 0x0331   (0x000F)  MISSED


	/// Functions
	// Function /Script/ControlRig.ControlRigShapeActor.SetSelected
	// void SetSelected(bool bInSelected);                                                                                   // [0x77d2df4] Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigShapeActor.SetSelectable
	// void SetSelectable(bool bInSelectable);                                                                               // [0x77d2d70] Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigShapeActor.SetHovered
	// void SetHovered(bool bInHovered);                                                                                     // [0x77d22b8] Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigShapeActor.SetGlobalTransform
	// void SetGlobalTransform(FTransform& InTransform);                                                                     // [0x77d21a8] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigShapeActor.SetEnabled
	// void SetEnabled(bool bInEnabled);                                                                                     // [0x647bb24] Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigShapeActor.OnTransformChanged
	// void OnTransformChanged(FTransform& NewTransform);                                                                    // [0x18a39e4] Event|Public|HasOutParms|HasDefaults|BlueprintEvent 
	// Function /Script/ControlRig.ControlRigShapeActor.OnSelectionChanged
	// void OnSelectionChanged(bool bIsSelected);                                                                            // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/ControlRig.ControlRigShapeActor.OnManipulatingChanged
	// void OnManipulatingChanged(bool bIsManipulating);                                                                     // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/ControlRig.ControlRigShapeActor.OnHoveredChanged
	// void OnHoveredChanged(bool bIsSelected);                                                                              // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/ControlRig.ControlRigShapeActor.OnEnabledChanged
	// void OnEnabledChanged(bool bIsEnabled);                                                                               // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/ControlRig.ControlRigShapeActor.IsSelectedInEditor
	// bool IsSelectedInEditor();                                                                                            // [0x6953644] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.ControlRigShapeActor.IsHovered
	// bool IsHovered();                                                                                                     // [0x77cf804] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.ControlRigShapeActor.IsEnabled
	// bool IsEnabled();                                                                                                     // [0x77cf7dc] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.ControlRigShapeActor.GetGlobalTransform
	// FTransform GetGlobalTransform();                                                                                      // [0x77cf1f0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/ControlRig.ControlRigShapeDefinition
/// Size: 0x00A0 (0x000000 - 0x0000A0)
struct FControlRigShapeDefinition
{ 
	FName                                              ShapeName;                                                  // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	SDK_UNDEFINED(32,12527) /* TWeakObjectPtr<UStaticMesh*> */ __um(StaticMesh);                                   // 0x0008   (0x0020)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x0028   (0x0008)  MISSED
	FTransform                                         Transform;                                                  // 0x0030   (0x0060)  
	unsigned char                                      UnknownData02_6[0x10];                                      // 0x0090   (0x0010)  MISSED
};

/// Class /Script/ControlRig.ControlRigShapeLibrary
/// Size: 0x0118 (0x000028 - 0x000140)
class UControlRigShapeLibrary : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x30];                                      // 0x0000   (0x0030)  MISSED
	FControlRigShapeDefinition                         DefaultShape;                                               // 0x0030   (0x00A0)  
	SDK_UNDEFINED(32,12528) /* TWeakObjectPtr<UMaterial*> */ __um(DefaultMaterial);                                // 0x00D0   (0x0020)  
	SDK_UNDEFINED(32,12529) /* TWeakObjectPtr<UMaterial*> */ __um(XRayMaterial);                                   // 0x00F0   (0x0020)  
	FName                                              MaterialColorParameter;                                     // 0x0110   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0114   (0x0004)  MISSED
	TArray<FControlRigShapeDefinition>                 Shapes;                                                     // 0x0118   (0x0010)  
	unsigned char                                      UnknownData02_6[0x18];                                      // 0x0128   (0x0018)  MISSED
};

/// Struct /Script/ControlRig.ControlRigTestDataVariable
/// Size: 0x0018 (0x000000 - 0x000018)
struct FControlRigTestDataVariable
{ 
	FName                                              Name;                                                       // 0x0000   (0x0004)  
	FName                                              CPPType;                                                    // 0x0004   (0x0004)  
	SDK_UNDEFINED(16,12530) /* FString */              __um(Value);                                                // 0x0008   (0x0010)  
};

/// Struct /Script/ControlRig.CachedRigElement
/// Size: 0x0018 (0x000000 - 0x000018)
struct FCachedRigElement
{ 
	FRigElementKey                                     Key;                                                        // 0x0000   (0x0008)  
	uint16_t                                           Index;                                                      // 0x0008   (0x0002)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x000A   (0x0002)  MISSED
	int32_t                                            ContainerVersion;                                           // 0x000C   (0x0004)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0010   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigPoseElement
/// Size: 0x0110 (0x000000 - 0x000110)
struct FRigPoseElement
{ 
	FCachedRigElement                                  Index;                                                      // 0x0000   (0x0018)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0018   (0x0008)  MISSED
	FTransform                                         GlobalTransform;                                            // 0x0020   (0x0060)  
	FTransform                                         LocalTransform;                                             // 0x0080   (0x0060)  
	FVector                                            PreferredEulerAngle;                                        // 0x00E0   (0x0018)  
	FRigElementKey                                     ActiveParent;                                               // 0x00F8   (0x0008)  
	float                                              CurveValue;                                                 // 0x0100   (0x0004)  
	unsigned char                                      UnknownData01_6[0xC];                                       // 0x0104   (0x000C)  MISSED
};

/// Struct /Script/ControlRig.RigPose
/// Size: 0x0070 (0x000000 - 0x000070)
struct FRigPose
{ 
	TArray<FRigPoseElement>                            Elements;                                                   // 0x0000   (0x0010)  
	int32_t                                            HierarchyTopologyVersion;                                   // 0x0010   (0x0004)  
	int32_t                                            PoseHash;                                                   // 0x0014   (0x0004)  
	unsigned char                                      UnknownData00_6[0x58];                                      // 0x0018   (0x0058)  MISSED
};

/// Struct /Script/ControlRig.ControlRigTestDataFrame
/// Size: 0x0090 (0x000000 - 0x000090)
struct FControlRigTestDataFrame
{ 
	double                                             AbsoluteTime;                                               // 0x0000   (0x0008)  
	double                                             DeltaTime;                                                  // 0x0008   (0x0008)  
	TArray<FControlRigTestDataVariable>                Variables;                                                  // 0x0010   (0x0010)  
	FRigPose                                           Pose;                                                       // 0x0020   (0x0070)  
};

/// Class /Script/ControlRig.ControlRigTestData
/// Size: 0x0120 (0x000028 - 0x000148)
class UControlRigTestData : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	FSoftObjectPath                                    ControlRigObjectPath;                                       // 0x0028   (0x0018)  
	FControlRigTestDataFrame                           Initial;                                                    // 0x0040   (0x0090)  
	TArray<FControlRigTestDataFrame>                   InputFrames;                                                // 0x00D0   (0x0010)  
	TArray<FControlRigTestDataFrame>                   OutputFrames;                                               // 0x00E0   (0x0010)  
	TArray<int32_t>                                    FramesToSkip;                                               // 0x00F0   (0x0010)  
	double                                             Tolerance;                                                  // 0x0100   (0x0008)  
	unsigned char                                      UnknownData01_6[0x40];                                      // 0x0108   (0x0040)  MISSED


	/// Functions
	// Function /Script/ControlRig.ControlRigTestData.SetupReplay
	// bool SetupReplay(class UControlRig* InControlRig, bool bGroundTruth);                                                 // [0x77d2e78] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigTestData.ReleaseReplay
	// void ReleaseReplay();                                                                                                 // [0x77d005c] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigTestData.Record
	// bool Record(class UControlRig* InControlRig, double InRecordingDuration);                                             // [0x77cfe38] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigTestData.IsReplaying
	// bool IsReplaying();                                                                                                   // [0x77cf850] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.ControlRigTestData.IsRecording
	// bool IsRecording();                                                                                                   // [0x77cf82c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.ControlRigTestData.GetTimeRange
	// FVector2D GetTimeRange(bool bInput);                                                                                  // [0x77cf68c] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.ControlRigTestData.GetPlaybackMode
	// EControlRigTestDataPlaybackMode GetPlaybackMode();                                                                    // [0x77cf538] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.ControlRigTestData.GetFrameIndexForTime
	// int32_t GetFrameIndexForTime(double InSeconds, bool bInput);                                                          // [0x77cf124] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.ControlRigTestData.CreateNewAsset
	// class UControlRigTestData* CreateNewAsset(FString InDesiredPackagePath, FString InBlueprintPathName);                 // [0x77cdd6c] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/ControlRig.ControlRigValidator
/// Size: 0x0040 (0x000028 - 0x000068)
class UControlRigValidator : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	TArray<class UControlRigValidationPass*>           Passes;                                                     // 0x0028   (0x0010)  
	unsigned char                                      UnknownData01_6[0x30];                                      // 0x0038   (0x0030)  MISSED
};

/// Class /Script/ControlRig.ControlRigValidationPass
/// Size: 0x0000 (0x000028 - 0x000028)
class UControlRigValidationPass : public UObject
{ 
public:
};

/// Class /Script/ControlRig.ModularRigController
/// Size: 0x0028 (0x000028 - 0x000050)
class UModularRigController : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x50];                                      // 0x0000   (0x0050)  MISSED


	/// Functions
	// Function /Script/ControlRig.ModularRigController.UnBindModuleVariable
	// bool UnBindModuleVariable(FString InModulePath, FName& InVariableName, bool bSetupUndo);                              // [0x77d310c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ControlRig.ModularRigController.SetModuleShortName
	// bool SetModuleShortName(FString InModulePath, FString InNewShortName, bool bSetupUndo);                               // [0x77d2adc] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ModularRigController.SetConfigValueInModule
	// bool SetConfigValueInModule(FString InModulePath, FName& InVariableName, FString InValue, bool bSetupUndo);           // [0x77d0b60] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ControlRig.ModularRigController.ReparentModule
	// FString ReparentModule(FString InModulePath, FString InNewParentModulePath, bool bSetupUndo);                         // [0x77d02bc] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ModularRigController.RenameModule
	// FString RenameModule(FString InModulePath, FName& InNewName, bool bSetupUndo);                                        // [0x77d0070] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ControlRig.ModularRigController.MirrorModule
	// FString MirrorModule(FString InModulePath, FRigVMMirrorSettings& InSettings, bool bSetupUndo);                        // [0x77cf874] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ControlRig.ModularRigController.DisconnectCyclicConnectors
	// TArray<FRigElementKey> DisconnectCyclicConnectors(bool bSetupUndo);                                                   // [0x77ce460] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ModularRigController.DisconnectConnector
	// bool DisconnectConnector(FRigElementKey& InConnectorKey, bool bDisconnectSubModules, bool bSetupUndo);                // [0x77ce1f8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ControlRig.ModularRigController.DeleteModule
	// bool DeleteModule(FString InModulePath, bool bSetupUndo);                                                             // [0x77ce04c] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ModularRigController.ConnectConnectorToElement
	// bool ConnectConnectorToElement(FRigElementKey& InConnectorKey, FRigElementKey& InTargetKey, bool bSetupUndo, bool bAutoResolveOtherConnectors, bool bCheckValidConnection); // [0x77cd8c0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ControlRig.ModularRigController.CanConnectConnectorToElement
	// bool CanConnectConnectorToElement(FRigElementKey& InConnectorKey, FRigElementKey& InTargetKey, FText& OutErrorMessage); // [0x77cd6a0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ControlRig.ModularRigController.BindModuleVariable
	// bool BindModuleVariable(FString InModulePath, FName& InVariableName, FString InSourcePath, bool bSetupUndo);          // [0x77cd3c8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ControlRig.ModularRigController.AutoConnectSecondaryConnectors
	// bool AutoConnectSecondaryConnectors(TArray<FRigElementKey>& InConnectorKeys, bool bReplaceExistingConnections, bool bSetupUndo); // [0x77cd178] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ControlRig.ModularRigController.AutoConnectModules
	// bool AutoConnectModules(TArray<FString>& InModulePaths, bool bReplaceExistingConnections, bool bSetupUndo);           // [0x77ccf2c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ControlRig.ModularRigController.AddModule
	// FString AddModule(FName& InModuleName, class UClass* InClass, FString InParentModulePath, bool bSetupUndo);           // [0x77ccc08] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/ControlRig.ModularRigRuleManager
/// Size: 0x0008 (0x000028 - 0x000030)
class UModularRigRuleManager : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x0000   (0x0030)  MISSED
};

/// Class /Script/ControlRig.AdditiveControlRig
/// Size: 0x0010 (0x000AA0 - 0x000AB0)
class UAdditiveControlRig : public UControlRig
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0AA0   (0x0010)  MISSED
};

/// Class /Script/ControlRig.FKControlRig
/// Size: 0x0040 (0x000AA0 - 0x000AE0)
class UFKControlRig : public UControlRig
{ 
public:
	TArray<bool>                                       IsControlActive;                                            // 0x0AA0   (0x0010)  
	EControlRigFKRigExecuteMode                        ApplyMode;                                                  // 0x0AB0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2F];                                      // 0x0AB1   (0x002F)  MISSED
};

/// Class /Script/ControlRig.RigHierarchyController
/// Size: 0x0068 (0x000028 - 0x000090)
class URigHierarchyController : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	bool                                               bReportWarningsAndErrors;                                   // 0x0028   (0x0001)  
	unsigned char                                      UnknownData01_6[0x67];                                      // 0x0029   (0x0067)  MISSED


	/// Functions
	// Function /Script/ControlRig.RigHierarchyController.SetSelection
	// bool SetSelection(TArray<FRigElementKey>& InKeys, bool bPrintPythonCommand);                                          // [0x7836a90] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchyController.SetParent
	// bool SetParent(FRigElementKey InChild, FRigElementKey InParent, bool bMaintainGlobalTransform, bool bSetupUndo, bool bPrintPythonCommand); // [0x78365f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchyController.SetHierarchy
	// void SetHierarchy(class URigHierarchy* InHierarchy);                                                                  // [0x7836570] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchyController.SetDisplayName
	// FName SetDisplayName(FRigElementKey InControl, FName InDisplayName, bool bRenameElement, bool bSetupUndo, bool bPrintPythonCommand); // [0x78360cc] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchyController.SetControlSettings
	// bool SetControlSettings(FRigElementKey InKey, FRigControlSettings InSettings, bool bSetupUndo);                       // [0x7835d88] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchyController.SelectElement
	// bool SelectElement(FRigElementKey InKey, bool bSelect, bool bClearSelection);                                         // [0x7835a94] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchyController.ReorderElement
	// bool ReorderElement(FRigElementKey InElement, int32_t InIndex, bool bSetupUndo, bool bPrintPythonCommand);            // [0x7835478] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchyController.RenameElement
	// FRigElementKey RenameElement(FRigElementKey InElement, FName InName, bool bSetupUndo, bool bPrintPythonCommand, bool bClearSelection); // [0x7834fe4] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchyController.RemoveParent
	// bool RemoveParent(FRigElementKey InChild, FRigElementKey InParent, bool bMaintainGlobalTransform, bool bSetupUndo, bool bPrintPythonCommand); // [0x7834b44] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchyController.RemoveElement
	// bool RemoveElement(FRigElementKey InElement, bool bSetupUndo, bool bPrintPythonCommand);                              // [0x7834868] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchyController.RemoveAllParents
	// bool RemoveAllParents(FRigElementKey InChild, bool bMaintainGlobalTransform, bool bSetupUndo, bool bPrintPythonCommand); // [0x78344a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchyController.MirrorElements
	// TArray<FRigElementKey> MirrorElements(TArray<FRigElementKey> InKeys, FRigVMMirrorSettings InSettings, bool bSelectNewElements, bool bSetupUndo, bool bPrintPythonCommands); // [0x7833cdc] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchyController.ImportFromText
	// TArray<FRigElementKey> ImportFromText(FString InContent, bool bReplaceExistingElements, bool bSelectNewElements, bool bSetupUndo, bool bPrintPythonCommands); // [0x7833a3c] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchyController.ImportCurves
	// TArray<FRigElementKey> ImportCurves(class USkeleton* InSkeleton, FName InNameSpace, bool bSelectCurves, bool bSetupUndo, bool bPrintPythonCommand); // [0x78337e8] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchyController.ImportBones
	// TArray<FRigElementKey> ImportBones(class USkeleton* InSkeleton, FName InNameSpace, bool bReplaceExistingBones, bool bRemoveObsoleteBones, bool bSelectBones, bool bSetupUndo, bool bPrintPythonCommand); // [0x7833564] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchyController.GetHierarchy
	// class URigHierarchy* GetHierarchy();                                                                                  // [0x7833540] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchyController.GetControlSettings
	// FRigControlSettings GetControlSettings(FRigElementKey InKey);                                                         // [0x78332ac] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchyController.ExportToText
	// FString ExportToText(TArray<FRigElementKey> InKeys);                                                                  // [0x78330bc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchyController.ExportSelectionToText
	// FString ExportSelectionToText();                                                                                      // [0x7832f64] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchyController.DuplicateElements
	// TArray<FRigElementKey> DuplicateElements(TArray<FRigElementKey> InKeys, bool bSelectNewElements, bool bSetupUndo, bool bPrintPythonCommands); // [0x7832d48] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchyController.DeselectElement
	// bool DeselectElement(FRigElementKey InKey);                                                                           // [0x7832b30] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchyController.ClearSelection
	// bool ClearSelection();                                                                                                // [0x7832b0c] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchyController.AddSocket
	// FRigElementKey AddSocket(FName InName, FRigElementKey InParent, FTransform InTransform, bool bTransformInGlobal, FLinearColor& InColor, FString InDescription, bool bSetupUndo, bool bPrintPythonCommand); // [0x7832404] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchyController.AddRigidBody
	// FRigElementKey AddRigidBody(FName InName, FRigElementKey InParent, FRigRigidBodySettings InSettings, FTransform InLocalTransform, bool bSetupUndo, bool bPrintPythonCommand); // [0x7831e60] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchyController.AddParent
	// bool AddParent(FRigElementKey InChild, FRigElementKey InParent, float InWeight, bool bMaintainGlobalTransform, bool bSetupUndo); // [0x78319c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchyController.AddNull
	// FRigElementKey AddNull(FName InName, FRigElementKey InParent, FTransform InTransform, bool bTransformInGlobal, bool bSetupUndo, bool bPrintPythonCommand); // [0x783140c] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchyController.AddCurve
	// FRigElementKey AddCurve(FName InName, float InValue, bool bSetupUndo, bool bPrintPythonCommand);                      // [0x78312d4] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchyController.AddControl_ForBlueprint
	// FRigElementKey AddControl_ForBlueprint(FName InName, FRigElementKey InParent, FRigControlSettings InSettings, FRigControlValue InValue, bool bSetupUndo, bool bPrintPythonCommand); // [0x7830cc4] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchyController.AddConnector
	// FRigElementKey AddConnector(FName InName, FRigConnectorSettings InSettings, bool bSetupUndo, bool bPrintPythonCommand); // [0x7830970] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchyController.AddBone
	// FRigElementKey AddBone(FName InName, FRigElementKey InParent, FTransform InTransform, bool bTransformInGlobal, ERigBoneType InBoneType, bool bSetupUndo, bool bPrintPythonCommand); // [0x78302d0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchyController.AddAnimationChannel_ForBlueprint
	// FRigElementKey AddAnimationChannel_ForBlueprint(FName InName, FRigElementKey InParentControl, FRigControlSettings InSettings, bool bSetupUndo, bool bPrintPythonCommand); // [0x782fe58] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/ControlRig.ControlRigLayerInstance
/// Size: 0x0000 (0x000370 - 0x000370)
class UControlRigLayerInstance : public UAnimInstance
{ 
public:
};

/// Struct /Script/ControlRig.EnumParameterNameAndCurve
/// Size: 0x0110 (0x000000 - 0x000110)
struct FEnumParameterNameAndCurve
{ 
	FName                                              ParameterName;                                              // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	FMovieSceneByteChannel                             ParameterCurve;                                             // 0x0008   (0x0108)  
};

/// Struct /Script/ControlRig.IntegerParameterNameAndCurve
/// Size: 0x0110 (0x000000 - 0x000110)
struct FIntegerParameterNameAndCurve
{ 
	FName                                              ParameterName;                                              // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	FMovieSceneIntegerChannel                          ParameterCurve;                                             // 0x0008   (0x0108)  
};

/// Struct /Script/ControlRig.MovieSceneControlRigSpaceBaseKey
/// Size: 0x000C (0x000000 - 0x00000C)
struct FMovieSceneControlRigSpaceBaseKey
{ 
	EMovieSceneControlRigSpaceType                     SpaceType;                                                  // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	FRigElementKey                                     ControlRigElement;                                          // 0x0004   (0x0008)  
};

/// Struct /Script/ControlRig.MovieSceneControlRigSpaceChannel
/// Size: 0x00C0 (0x000050 - 0x000110)
struct FMovieSceneControlRigSpaceChannel : FMovieSceneChannel
{ 
	TArray<FFrameNumber>                               KeyTimes;                                                   // 0x0050   (0x0010)  
	TArray<FMovieSceneControlRigSpaceBaseKey>          KeyValues;                                                  // 0x0060   (0x0010)  
	FMovieSceneKeyHandleMap                            KeyHandles;                                                 // 0x0070   (0x0088)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x00F8   (0x0018)  MISSED
};

/// Struct /Script/ControlRig.SpaceControlNameAndChannel
/// Size: 0x0118 (0x000000 - 0x000118)
struct FSpaceControlNameAndChannel
{ 
	FName                                              ControlName;                                                // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	FMovieSceneControlRigSpaceChannel                  SpaceCurve;                                                 // 0x0008   (0x0110)  
};

/// Class /Script/ControlRig.MovieSceneControlRigParameterSection
/// Size: 0x0278 (0x000158 - 0x0003D0)
class UMovieSceneControlRigParameterSection : public UMovieSceneParameterSection
{ 
public:
	unsigned char                                      UnknownData00_3[0x48];                                      // 0x0158   (0x0048)  MISSED
	class UControlRig*                                 ControlRig;                                                 // 0x01A0   (0x0008)  
	class UClass*                                      ControlRigClass;                                            // 0x01A8   (0x0008)  
	TArray<bool>                                       ControlsMask;                                               // 0x01B0   (0x0010)  
	FMovieSceneTransformMask                           TransformMask;                                              // 0x01C0   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x01C4   (0x0004)  MISSED
	FMovieSceneFloatChannel                            Weight;                                                     // 0x01C8   (0x0110)  
	SDK_UNDEFINED(80,12531) /* TMap<FName, FChannelMapInfo> */ __um(ControlChannelMap);                            // 0x02D8   (0x0050)  
	TArray<FEnumParameterNameAndCurve>                 EnumParameterNamesAndCurves;                                // 0x0328   (0x0010)  
	TArray<FIntegerParameterNameAndCurve>              IntegerParameterNamesAndCurves;                             // 0x0338   (0x0010)  
	TArray<FSpaceControlNameAndChannel>                SpaceChannels;                                              // 0x0348   (0x0010)  
	TArray<FConstraintAndActiveChannel>                ConstraintsChannels;                                        // 0x0358   (0x0010)  
	unsigned char                                      UnknownData02_6[0x68];                                      // 0x0368   (0x0068)  MISSED
};

/// Class /Script/ControlRig.MovieSceneControlRigParameterTrack
/// Size: 0x00C0 (0x000098 - 0x000158)
class UMovieSceneControlRigParameterTrack : public UMovieSceneNameableTrack
{ 
public:
	unsigned char                                      UnknownData00_3[0x40];                                      // 0x0098   (0x0040)  MISSED
	class UControlRig*                                 ControlRig;                                                 // 0x00D8   (0x0008)  
	class UMovieSceneSection*                          SectionToKey;                                               // 0x00E0   (0x0008)  
	TArray<class UMovieSceneSection*>                  Sections;                                                   // 0x00E8   (0x0010)  
	FName                                              TrackName;                                                  // 0x00F8   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x00FC   (0x0004)  MISSED
	SDK_UNDEFINED(80,12532) /* TMap<FName, FControlRotationOrder> */ __um(ControlsRotationOrder);                  // 0x0100   (0x0050)  
	int32_t                                            PriorityOrder;                                              // 0x0150   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x0154   (0x0004)  MISSED
};

/// Class /Script/ControlRig.ControlRigSettings
/// Size: 0x0000 (0x000030 - 0x000030)
class UControlRigSettings : public UDeveloperSettings
{ 
public:
};

/// Class /Script/ControlRig.ControlRigEditorSettings
/// Size: 0x0000 (0x000030 - 0x000030)
class UControlRigEditorSettings : public URigVMEditorSettings
{ 
public:
};

/// Struct /Script/ControlRig.RigControlValueStorage
/// Size: 0x0084 (0x000000 - 0x000084)
struct FRigControlValueStorage
{ 
	float                                              Float00;                                                    // 0x0000   (0x0004)  
	float                                              Float01;                                                    // 0x0004   (0x0004)  
	float                                              Float02;                                                    // 0x0008   (0x0004)  
	float                                              Float03;                                                    // 0x000C   (0x0004)  
	float                                              Float10;                                                    // 0x0010   (0x0004)  
	float                                              Float11;                                                    // 0x0014   (0x0004)  
	float                                              Float12;                                                    // 0x0018   (0x0004)  
	float                                              Float13;                                                    // 0x001C   (0x0004)  
	float                                              Float20;                                                    // 0x0020   (0x0004)  
	float                                              Float21;                                                    // 0x0024   (0x0004)  
	float                                              Float22;                                                    // 0x0028   (0x0004)  
	float                                              Float23;                                                    // 0x002C   (0x0004)  
	float                                              Float30;                                                    // 0x0030   (0x0004)  
	float                                              Float31;                                                    // 0x0034   (0x0004)  
	float                                              Float32;                                                    // 0x0038   (0x0004)  
	float                                              Float33;                                                    // 0x003C   (0x0004)  
	float                                              Float000;                                                   // 0x0040   (0x0004)  
	float                                              Float011;                                                   // 0x0044   (0x0004)  
	float                                              Float022;                                                   // 0x0048   (0x0004)  
	float                                              Float033;                                                   // 0x004C   (0x0004)  
	float                                              Float104;                                                   // 0x0050   (0x0004)  
	float                                              Float115;                                                   // 0x0054   (0x0004)  
	float                                              Float126;                                                   // 0x0058   (0x0004)  
	float                                              Float137;                                                   // 0x005C   (0x0004)  
	float                                              Float208;                                                   // 0x0060   (0x0004)  
	float                                              Float219;                                                   // 0x0064   (0x0004)  
	float                                              Float2210;                                                  // 0x0068   (0x0004)  
	float                                              Float2311;                                                  // 0x006C   (0x0004)  
	float                                              Float3012;                                                  // 0x0070   (0x0004)  
	float                                              Float3113;                                                  // 0x0074   (0x0004)  
	float                                              Float3214;                                                  // 0x0078   (0x0004)  
	float                                              Float3315;                                                  // 0x007C   (0x0004)  
	bool                                               bValid;                                                     // 0x0080   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0081   (0x0003)  MISSED
};

/// Struct /Script/ControlRig.RigControlValue
/// Size: 0x0084 (0x000000 - 0x000084)
struct FRigControlValue
{ 
	FRigControlValueStorage                            FloatStorage;                                               // 0x0000   (0x0084)  
};

/// Struct /Script/ControlRig.RigControlCopy
/// Size: 0x0230 (0x000000 - 0x000230)
struct FRigControlCopy
{ 
	FName                                              Name;                                                       // 0x0010   (0x0004)  
	ERigControlType                                    ControlType;                                                // 0x0014   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0015   (0x0003)  MISSED
	FRigControlValue                                   Value;                                                      // 0x0018   (0x0084)  
	FRigElementKey                                     ParentKey;                                                  // 0x009C   (0x0008)  
	unsigned char                                      UnknownData01_5[0xC];                                       // 0x00A4   (0x000C)  MISSED
	FTransform                                         OffsetTransform;                                            // 0x00B0   (0x0060)  
	FTransform                                         ParentTransform;                                            // 0x0110   (0x0060)  
	FTransform                                         LocalTransform;                                             // 0x0170   (0x0060)  
	FTransform                                         GlobalTransform;                                            // 0x01D0   (0x0060)  
};

/// Struct /Script/ControlRig.ControlRigControlPose
/// Size: 0x0060 (0x000000 - 0x000060)
struct FControlRigControlPose
{ 
	TArray<FRigControlCopy>                            CopyOfControls;                                             // 0x0000   (0x0010)  
	unsigned char                                      UnknownData00_6[0x50];                                      // 0x0010   (0x0050)  MISSED
};

/// Class /Script/ControlRig.ControlRigPoseAsset
/// Size: 0x0060 (0x000028 - 0x000088)
class UControlRigPoseAsset : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	FControlRigControlPose                             Pose;                                                       // 0x0028   (0x0060)  


	/// Functions
	// Function /Script/ControlRig.ControlRigPoseAsset.SelectControls
	// void SelectControls(class UControlRig* InControlRig, bool bDoMirror);                                                 // [0x78359cc] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigPoseAsset.SavePose
	// void SavePose(class UControlRig* InControlRig, bool bUseAll);                                                         // [0x7835904] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigPoseAsset.ReplaceControlName
	// void ReplaceControlName(FName& CurrentName, FName& NewName);                                                          // [0x783582c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigPoseAsset.PastePose
	// void PastePose(class UControlRig* InControlRig, bool bDoKey, bool bDoMirror);                                         // [0x78342a8] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigPoseAsset.GetCurrentPose
	// void GetCurrentPose(class UControlRig* InControlRig, FControlRigControlPose& OutPose);                                // [0x7833424] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigPoseAsset.GetControlNames
	// TArray<FName> GetControlNames();                                                                                      // [0x7833264] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.ControlRigPoseAsset.DoesMirrorMatch
	// bool DoesMirrorMatch(class UControlRig* ControlRig, FName& ControlName);                                              // [0x7832c78] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/ControlRig.ControlRigPoseMirrorSettings
/// Size: 0x0028 (0x000028 - 0x000050)
class UControlRigPoseMirrorSettings : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	SDK_UNDEFINED(16,12533) /* FString */              __um(RightSide);                                            // 0x0028   (0x0010)  
	SDK_UNDEFINED(16,12534) /* FString */              __um(LeftSide);                                             // 0x0038   (0x0010)  
	SDK_UNDEFINED(1,12535) /* TEnumAsByte<EAxis> */    __um(MirrorAxis);                                           // 0x0048   (0x0001)  
	SDK_UNDEFINED(1,12536) /* TEnumAsByte<EAxis> */    __um(AxisToFlip);                                           // 0x0049   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x004A   (0x0006)  MISSED
};

/// Class /Script/ControlRig.ControlRigPoseProjectSettings
/// Size: 0x0010 (0x000028 - 0x000038)
class UControlRigPoseProjectSettings : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	TArray<FDirectoryPath>                             RootSaveDirs;                                               // 0x0028   (0x0010)  
};

/// Class /Script/ControlRig.ControlRigWorkflowOptions
/// Size: 0x0018 (0x000098 - 0x0000B0)
class UControlRigWorkflowOptions : public URigVMUserWorkflowOptions
{ 
public:
	class URigHierarchy*                               Hierarchy;                                                  // 0x0098   (0x0008)  
	TArray<FRigElementKey>                             Selection;                                                  // 0x00A0   (0x0010)  


	/// Functions
	// Function /Script/ControlRig.ControlRigWorkflowOptions.EnsureAtLeastOneRigElementSelected
	// bool EnsureAtLeastOneRigElementSelected();                                                                            // [0x7832ef0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/ControlRig.ControlRigTransformWorkflowOptions
/// Size: 0x0008 (0x0000B0 - 0x0000B8)
class UControlRigTransformWorkflowOptions : public UControlRigWorkflowOptions
{ 
public:
	SDK_UNDEFINED(1,12537) /* TEnumAsByte<ERigTransformType> */ __um(TransformType);                               // 0x00B0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x00B1   (0x0007)  MISSED


	/// Functions
	// Function /Script/ControlRig.ControlRigTransformWorkflowOptions.ProvideWorkflows
	// TArray<FRigVMUserWorkflow> ProvideWorkflows(class UObject* InSubject);                                                // [0x78343d4] Final|Native|Public  
};

/// Class /Script/ControlRig.ControlRigNumericalValidationPass
/// Size: 0x0090 (0x000028 - 0x0000B8)
class UControlRigNumericalValidationPass : public UControlRigValidationPass
{ 
public:
	bool                                               bCheckControls;                                             // 0x0028   (0x0001)  
	bool                                               bCheckBones;                                                // 0x0029   (0x0001)  
	bool                                               bCheckCurves;                                               // 0x002A   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x002B   (0x0001)  MISSED
	float                                              TranslationPrecision;                                       // 0x002C   (0x0004)  
	float                                              RotationPrecision;                                          // 0x0030   (0x0004)  
	float                                              ScalePrecision;                                             // 0x0034   (0x0004)  
	float                                              CurvePrecision;                                             // 0x0038   (0x0004)  
	FName                                              EventNameA;                                                 // 0x003C   (0x0004)  
	FName                                              EventNameB;                                                 // 0x0040   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0044   (0x0004)  MISSED
	FRigPose                                           Pose;                                                       // 0x0048   (0x0070)  
};

/// Struct /Script/ControlRig.RigBaseElement
/// Size: 0x0048 (0x000000 - 0x000048)
struct FRigBaseElement
{ 
	FRigElementKey                                     Key;                                                        // 0x0010   (0x0008)  
	int32_t                                            Index;                                                      // 0x0018   (0x0004)  
	int32_t                                            SubIndex;                                                   // 0x001C   (0x0004)  
	int32_t                                            CreatedAtInstructionIndex;                                  // 0x0020   (0x0004)  
	bool                                               bSelected;                                                  // 0x0024   (0x0001)  
	unsigned char                                      UnknownData00_6[0x23];                                      // 0x0025   (0x0023)  MISSED
};

/// Struct /Script/ControlRig.RigComputedTransform
/// Size: 0x0060 (0x000000 - 0x000060)
struct FRigComputedTransform
{ 
	FTransform                                         Transform;                                                  // 0x0000   (0x0060)  
};

/// Struct /Script/ControlRig.RigLocalAndGlobalTransform
/// Size: 0x00D0 (0x000000 - 0x0000D0)
struct FRigLocalAndGlobalTransform
{ 
	FRigComputedTransform                              Local;                                                      // 0x0000   (0x0060)  
	FRigComputedTransform                              Global;                                                     // 0x0060   (0x0060)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x00C0   (0x0010)  MISSED
};

/// Struct /Script/ControlRig.RigCurrentAndInitialTransform
/// Size: 0x01A0 (0x000000 - 0x0001A0)
struct FRigCurrentAndInitialTransform
{ 
	FRigLocalAndGlobalTransform                        Current;                                                    // 0x0000   (0x00D0)  
	FRigLocalAndGlobalTransform                        Initial;                                                    // 0x00D0   (0x00D0)  
};

/// Struct /Script/ControlRig.RigTransformElement
/// Size: 0x01E8 (0x000048 - 0x000230)
struct FRigTransformElement : FRigBaseElement
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0048   (0x0008)  MISSED
	FRigCurrentAndInitialTransform                     Pose;                                                       // 0x0050   (0x01A0)  
	unsigned char                                      UnknownData01_6[0x40];                                      // 0x01F0   (0x0040)  MISSED
};

/// Struct /Script/ControlRig.RigMultiParentElement
/// Size: 0x0100 (0x000230 - 0x000330)
struct FRigMultiParentElement : FRigTransformElement
{ 
	unsigned char                                      UnknownData00_1[0x100];                                     // 0x0230   (0x0100)  MISSED
};

/// Struct /Script/ControlRig.RigControlLimitEnabled
/// Size: 0x0002 (0x000000 - 0x000002)
struct FRigControlLimitEnabled
{ 
	bool                                               bMinimum;                                                   // 0x0000   (0x0001)  
	bool                                               bMaximum;                                                   // 0x0001   (0x0001)  
};

/// Struct /Script/ControlRig.RigControlElementCustomization
/// Size: 0x0020 (0x000000 - 0x000020)
struct FRigControlElementCustomization
{ 
	TArray<FRigElementKey>                             AvailableSpaces;                                            // 0x0000   (0x0010)  
	TArray<FRigElementKey>                             RemovedSpaces;                                              // 0x0010   (0x0010)  
};

/// Struct /Script/ControlRig.RigControlSettings
/// Size: 0x01B0 (0x000000 - 0x0001B0)
struct FRigControlSettings
{ 
	ERigControlAnimationType                           AnimationType;                                              // 0x0000   (0x0001)  
	ERigControlType                                    ControlType;                                                // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0002   (0x0002)  MISSED
	FName                                              DisplayName;                                                // 0x0004   (0x0004)  
	ERigControlAxis                                    PrimaryAxis;                                                // 0x0008   (0x0001)  
	bool                                               bIsCurve;                                                   // 0x0009   (0x0001)  
	unsigned char                                      UnknownData01_5[0x6];                                       // 0x000A   (0x0006)  MISSED
	TArray<FRigControlLimitEnabled>                    LimitEnabled;                                               // 0x0010   (0x0010)  
	bool                                               bDrawLimits;                                                // 0x0020   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0021   (0x0003)  MISSED
	FRigControlValue                                   MinimumValue;                                               // 0x0024   (0x0084)  
	FRigControlValue                                   MaximumValue;                                               // 0x00A8   (0x0084)  
	bool                                               bShapeVisible;                                              // 0x012C   (0x0001)  
	ERigControlVisibility                              ShapeVisibility;                                            // 0x012D   (0x0001)  
	unsigned char                                      UnknownData03_5[0x2];                                       // 0x012E   (0x0002)  MISSED
	FName                                              ShapeName;                                                  // 0x0130   (0x0004)  
	FLinearColor                                       ShapeColor;                                                 // 0x0134   (0x0010)  
	bool                                               bIsTransientControl;                                        // 0x0144   (0x0001)  
	unsigned char                                      UnknownData04_5[0x3];                                       // 0x0145   (0x0003)  MISSED
	class UEnum*                                       ControlEnum;                                                // 0x0148   (0x0008)  
	FRigControlElementCustomization                    Customization;                                              // 0x0150   (0x0020)  
	TArray<FRigElementKey>                             DrivenControls;                                             // 0x0170   (0x0010)  
	unsigned char                                      UnknownData05_5[0x10];                                      // 0x0180   (0x0010)  MISSED
	bool                                               bGroupWithParentControl;                                    // 0x0190   (0x0001)  
	bool                                               bRestrictSpaceSwitching;                                    // 0x0191   (0x0001)  
	unsigned char                                      UnknownData06_5[0x6];                                       // 0x0192   (0x0006)  MISSED
	TArray<ERigControlTransformChannel>                FilteredChannels;                                           // 0x0198   (0x0010)  
	EEulerRotationOrder                                PreferredRotationOrder;                                     // 0x01A8   (0x0001)  
	bool                                               bUsePreferredRotationOrder;                                 // 0x01A9   (0x0001)  
	unsigned char                                      UnknownData07_6[0x6];                                       // 0x01AA   (0x0006)  MISSED
};

/// Struct /Script/ControlRig.RigPreferredEulerAngles
/// Size: 0x0038 (0x000000 - 0x000038)
struct FRigPreferredEulerAngles
{ 
	EEulerRotationOrder                                RotationOrder;                                              // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	FVector                                            Current;                                                    // 0x0008   (0x0018)  
	FVector                                            Initial;                                                    // 0x0020   (0x0018)  
};

/// Struct /Script/ControlRig.RigControlElement
/// Size: 0x0530 (0x000330 - 0x000860)
struct FRigControlElement : FRigMultiParentElement
{ 
	FRigControlSettings                                Settings;                                                   // 0x0330   (0x01B0)  
	FRigCurrentAndInitialTransform                     Offset;                                                     // 0x04E0   (0x01A0)  
	FRigCurrentAndInitialTransform                     Shape;                                                      // 0x0680   (0x01A0)  
	FRigPreferredEulerAngles                           PreferredEulerAngles;                                       // 0x0820   (0x0038)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0858   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.MovieSceneControlRigInstanceData
/// Size: 0x0140 (0x000008 - 0x000148)
struct FMovieSceneControlRigInstanceData : FMovieSceneSequenceInstanceData
{ 
	bool                                               bAdditive;                                                  // 0x0008   (0x0001)  
	bool                                               bApplyBoneFilter;                                           // 0x0009   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x000A   (0x0006)  MISSED
	FInputBlendPose                                    BoneFilter;                                                 // 0x0010   (0x0010)  
	FMovieSceneFloatChannel                            Weight;                                                     // 0x0020   (0x0110)  
	FMovieSceneEvaluationOperand                       Operand;                                                    // 0x0130   (0x0014)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0144   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigTransformStackEntry
/// Size: 0x00F0 (0x000000 - 0x0000F0)
struct FRigTransformStackEntry
{ 
	FRigElementKey                                     Key;                                                        // 0x0000   (0x0008)  
	SDK_UNDEFINED(1,12538) /* TEnumAsByte<ERigTransformStackEntryType> */ __um(EntryType);                         // 0x0008   (0x0001)  
	SDK_UNDEFINED(1,12539) /* TEnumAsByte<ERigTransformType> */ __um(TransformType);                               // 0x0009   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x000A   (0x0006)  MISSED
	FTransform                                         OldTransform;                                               // 0x0010   (0x0060)  
	FTransform                                         NewTransform;                                               // 0x0070   (0x0060)  
	bool                                               bAffectChildren;                                            // 0x00D0   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x00D1   (0x0007)  MISSED
	SDK_UNDEFINED(16,12540) /* TArray<FString> */      __um(Callstack);                                            // 0x00D8   (0x0010)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x00E8   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigSingleParentElement
/// Size: 0x0010 (0x000230 - 0x000240)
#pragma pack(push, 0x1)
struct alignas(0x10) FRigSingleParentElement : FRigTransformElement
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0230   (0x0008)  MISSED
};
#pragma pack(pop)

/// Struct /Script/ControlRig.RigElementWeight
/// Size: 0x000C (0x000000 - 0x00000C)
struct FRigElementWeight
{ 
	float                                              Location;                                                   // 0x0000   (0x0004)  
	float                                              Rotation;                                                   // 0x0004   (0x0004)  
	float                                              Scale;                                                      // 0x0008   (0x0004)  
};

/// Struct /Script/ControlRig.RigElementParentConstraint
/// Size: 0x0090 (0x000000 - 0x000090)
struct FRigElementParentConstraint
{ 
	unsigned char                                      UnknownData00_2[0x90];                                      // 0x0000   (0x0090)  MISSED
};

/// Struct /Script/ControlRig.RigBoneElement
/// Size: 0x0000 (0x000240 - 0x000240)
struct FRigBoneElement : FRigSingleParentElement
{ 
};

/// Struct /Script/ControlRig.RigNullElement
/// Size: 0x0000 (0x000330 - 0x000330)
struct FRigNullElement : FRigMultiParentElement
{ 
};

/// Struct /Script/ControlRig.RigCurveElement
/// Size: 0x0008 (0x000048 - 0x000050)
struct FRigCurveElement : FRigBaseElement
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0048   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigRigidBodySettings
/// Size: 0x0004 (0x000000 - 0x000004)
struct FRigRigidBodySettings
{ 
	float                                              Mass;                                                       // 0x0000   (0x0004)  
};

/// Struct /Script/ControlRig.RigRigidBodyElement
/// Size: 0x0000 (0x000240 - 0x000240)
struct FRigRigidBodyElement : FRigSingleParentElement
{ 
};

/// Struct /Script/ControlRig.RigReferenceElement
/// Size: 0x0010 (0x000240 - 0x000250)
struct FRigReferenceElement : FRigSingleParentElement
{ 
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0238   (0x0018)  MISSED
};

/// Struct /Script/ControlRig.RigConnectorState
/// Size: 0x0038 (0x000000 - 0x000038)
struct FRigConnectorState
{ 
	FName                                              Name;                                                       // 0x0000   (0x0004)  
	FRigElementKey                                     ResolvedTarget;                                             // 0x0004   (0x0008)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	FRigConnectorSettings                              Settings;                                                   // 0x0010   (0x0028)  
};

/// Struct /Script/ControlRig.RigConnectorElement
/// Size: 0x0028 (0x000048 - 0x000070)
struct FRigConnectorElement : FRigBaseElement
{ 
	FRigConnectorSettings                              Settings;                                                   // 0x0048   (0x0028)  
};

/// Struct /Script/ControlRig.RigSocketState
/// Size: 0x0090 (0x000000 - 0x000090)
struct FRigSocketState
{ 
	FName                                              Name;                                                       // 0x0000   (0x0004)  
	FRigElementKey                                     Parent;                                                     // 0x0004   (0x0008)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	FTransform                                         InitialLocalTransform;                                      // 0x0010   (0x0060)  
	FLinearColor                                       Color;                                                      // 0x0070   (0x0010)  
	SDK_UNDEFINED(16,12541) /* FString */              __um(Description);                                          // 0x0080   (0x0010)  
};

/// Struct /Script/ControlRig.RigSocketElement
/// Size: 0x0000 (0x000240 - 0x000240)
struct FRigSocketElement : FRigSingleParentElement
{ 
};

/// Struct /Script/ControlRig.RigHierarchyCopyPasteContentPerElement
/// Size: 0x01E0 (0x000000 - 0x0001E0)
struct FRigHierarchyCopyPasteContentPerElement
{ 
	FRigElementKey                                     Key;                                                        // 0x0000   (0x0008)  
	SDK_UNDEFINED(16,12542) /* FString */              __um(Content);                                              // 0x0008   (0x0010)  
	TArray<FRigElementKey>                             Parents;                                                    // 0x0018   (0x0010)  
	TArray<FRigElementWeight>                          ParentWeights;                                              // 0x0028   (0x0010)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0038   (0x0008)  MISSED
	FRigCurrentAndInitialTransform                     Pose;                                                       // 0x0040   (0x01A0)  
};

/// Struct /Script/ControlRig.RigHierarchyCopyPasteContent
/// Size: 0x0050 (0x000000 - 0x000050)
struct FRigHierarchyCopyPasteContent
{ 
	TArray<FRigHierarchyCopyPasteContentPerElement>    Elements;                                                   // 0x0000   (0x0010)  
	TArray<ERigElementType>                            Types;                                                      // 0x0010   (0x0010)  
	SDK_UNDEFINED(16,12543) /* TArray<FString> */      __um(Contents);                                             // 0x0020   (0x0010)  
	TArray<FTransform>                                 LocalTransforms;                                            // 0x0030   (0x0010)  
	TArray<FTransform>                                 GlobalTransforms;                                           // 0x0040   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit
/// Size: 0x0000 (0x000008 - 0x000008)
struct FRigUnit : FRigVMStruct
{ 
};

/// Struct /Script/ControlRig.RigUnit_DebugBase
/// Size: 0x0000 (0x000008 - 0x000008)
struct FRigUnit_DebugBase : FRigUnit
{ 
};

/// Struct /Script/ControlRig.ControlRigExecuteContext
/// Size: 0x00D0 (0x0000F0 - 0x0001C0)
struct FControlRigExecuteContext : FRigVMExecuteContext
{ 
	unsigned char                                      UnknownData00_1[0xD0];                                      // 0x00F0   (0x00D0)  MISSED
};

/// Struct /Script/ControlRig.RigUnitMutable
/// Size: 0x01C8 (0x000008 - 0x0001D0)
struct FRigUnitMutable : FRigUnit
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0008   (0x0008)  MISSED
	FControlRigExecuteContext                          ExecuteContext;                                             // 0x0010   (0x01C0)  
};

/// Struct /Script/ControlRig.RigUnit_DebugBaseMutable
/// Size: 0x0000 (0x0001D0 - 0x0001D0)
struct FRigUnit_DebugBaseMutable : FRigUnitMutable
{ 
};

/// Struct /Script/ControlRig.RigUnit_HighlevelBase
/// Size: 0x0000 (0x000008 - 0x000008)
struct FRigUnit_HighlevelBase : FRigUnit
{ 
};

/// Struct /Script/ControlRig.RigUnit_HighlevelBaseMutable
/// Size: 0x0000 (0x0001D0 - 0x0001D0)
struct FRigUnit_HighlevelBaseMutable : FRigUnitMutable
{ 
};

/// Struct /Script/ControlRig.StructReference
/// Size: 0x0008 (0x000000 - 0x000008)
struct FStructReference
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.ControlRigIOSettings
/// Size: 0x0002 (0x000000 - 0x000002)
struct FControlRigIOSettings
{ 
	bool                                               bUpdatePose;                                                // 0x0000   (0x0001)  
	bool                                               bUpdateCurves;                                              // 0x0001   (0x0001)  
};

/// Struct /Script/ControlRig.ControlRigAnimNodeEventName
/// Size: 0x0004 (0x000000 - 0x000004)
struct FControlRigAnimNodeEventName
{ 
	FName                                              EventName;                                                  // 0x0000   (0x0004)  
};

/// Struct /Script/ControlRig.AnimNode_ControlRigBase
/// Size: 0x01F0 (0x000058 - 0x000248)
struct FAnimNode_ControlRigBase : FAnimNode_CustomProperty
{ 
	FPoseLink                                          Source;                                                     // 0x0058   (0x0010)  
	bool                                               bResetInputPoseToInitial;                                   // 0x0068   (0x0001)  
	bool                                               bTransferInputPose;                                         // 0x0069   (0x0001)  
	bool                                               bTransferInputCurves;                                       // 0x006A   (0x0001)  
	bool                                               bTransferPoseInGlobalSpace;                                 // 0x006B   (0x0001)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x006C   (0x0004)  MISSED
	TArray<FBoneReference>                             InputBonesToTransfer;                                       // 0x0070   (0x0010)  
	TArray<FBoneReference>                             OutputBonesToTransfer;                                      // 0x0080   (0x0010)  
	TArray<class UAssetUserData*>                      AssetUserData;                                              // 0x0090   (0x0010)  
	unsigned char                                      UnknownData01_5[0x170];                                     // 0x00A0   (0x0170)  MISSED
	SDK_UNDEFINED(8,12544) /* TWeakObjectPtr<UNodeMappingContainer*> */ __um(NodeMappingContainer);                // 0x0210   (0x0008)  
	FControlRigIOSettings                              InputSettings;                                              // 0x0218   (0x0002)  
	FControlRigIOSettings                              OutputSettings;                                             // 0x021A   (0x0002)  
	bool                                               bExecute;                                                   // 0x021C   (0x0001)  
	unsigned char                                      UnknownData02_5[0xB];                                       // 0x021D   (0x000B)  MISSED
	TArray<FControlRigAnimNodeEventName>               EventQueue;                                                 // 0x0228   (0x0010)  
	unsigned char                                      UnknownData03_6[0x10];                                      // 0x0238   (0x0010)  MISSED
};

/// Struct /Script/ControlRig.AnimNode_ControlRig
/// Size: 0x0288 (0x000248 - 0x0004D0)
struct FAnimNode_ControlRig : FAnimNode_ControlRigBase
{ 
	class UClass*                                      ControlRigClass;                                            // 0x0248   (0x0008)  
	class UClass*                                      DefaultControlRigClass;                                     // 0x0250   (0x0008)  
	class UControlRig*                                 ControlRig;                                                 // 0x0258   (0x0008)  
	SDK_UNDEFINED(80,12545) /* TMap<UClass*, UControlRig*> */ __um(ControlRigPerClass);                            // 0x0260   (0x0050)  
	float                                              Alpha;                                                      // 0x02B0   (0x0004)  
	EAnimAlphaInputType                                AlphaInputType;                                             // 0x02B4   (0x0001)  
	bool                                               bAlphaBoolEnabled : 1;                                      // 0x02B5:0 (0x0001)  
	bool                                               bSetRefPoseFromSkeleton : 1;                                // 0x02B5:1 (0x0001)  
	unsigned char                                      UnknownData00_4[0x2];                                       // 0x02B6   (0x0002)  MISSED
	FInputScaleBias                                    AlphaScaleBias;                                             // 0x02B8   (0x0008)  
	FInputAlphaBoolBlend                               AlphaBoolBlend;                                             // 0x02C0   (0x0048)  
	FName                                              AlphaCurveName;                                             // 0x0308   (0x0004)  
	FInputScaleBiasClamp                               AlphaScaleBiasClamp;                                        // 0x030C   (0x0030)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x033C   (0x0004)  MISSED
	SDK_UNDEFINED(80,12546) /* TMap<FName, FName> */   __um(InputMapping);                                         // 0x0340   (0x0050)  
	SDK_UNDEFINED(80,12547) /* TMap<FName, FName> */   __um(OutputMapping);                                        // 0x0390   (0x0050)  
	unsigned char                                      UnknownData02_5[0xB0];                                      // 0x03E0   (0x00B0)  MISSED
	int32_t                                            LODThreshold;                                               // 0x0490   (0x0004)  
	unsigned char                                      UnknownData03_6[0x3C];                                      // 0x0494   (0x003C)  MISSED
};

/// Struct /Script/ControlRig.AnimNode_ControlRig_ExternalSource
/// Size: 0x0008 (0x000248 - 0x000250)
struct FAnimNode_ControlRig_ExternalSource : FAnimNode_ControlRigBase
{ 
	SDK_UNDEFINED(8,12548) /* TWeakObjectPtr<UControlRig*> */ __um(ControlRig);                                    // 0x0248   (0x0008)  
};

/// Struct /Script/ControlRig.ControlRigReference
/// Size: 0x0000 (0x000010 - 0x000010)
struct FControlRigReference : FAnimNodeReference
{ 
};

/// Struct /Script/ControlRig.ControlRigAnimInstanceProxy
/// Size: 0x00E0 (0x000740 - 0x000820)
struct FControlRigAnimInstanceProxy : FAnimInstanceProxy
{ 
	unsigned char                                      UnknownData00_1[0xE8];                                      // 0x0738   (0x00E8)  MISSED
};

/// Struct /Script/ControlRig.ControlRigComponentMappedComponent
/// Size: 0x0010 (0x000000 - 0x000010)
struct FControlRigComponentMappedComponent
{ 
	class USceneComponent*                             Component;                                                  // 0x0000   (0x0008)  
	FName                                              ElementName;                                                // 0x0008   (0x0004)  
	ERigElementType                                    ElementType;                                                // 0x000C   (0x0001)  
	EControlRigComponentMapDirection                   Direction;                                                  // 0x000D   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x000E   (0x0002)  MISSED
};

/// Struct /Script/ControlRig.ControlRigComponentMappedBone
/// Size: 0x0008 (0x000000 - 0x000008)
struct FControlRigComponentMappedBone
{ 
	FName                                              Source;                                                     // 0x0000   (0x0004)  
	FName                                              Target;                                                     // 0x0004   (0x0004)  
};

/// Struct /Script/ControlRig.ControlRigComponentMappedCurve
/// Size: 0x0008 (0x000000 - 0x000008)
struct FControlRigComponentMappedCurve
{ 
	FName                                              Source;                                                     // 0x0000   (0x0004)  
	FName                                              Target;                                                     // 0x0004   (0x0004)  
};

/// Struct /Script/ControlRig.ControlShapeActorCreationParam
/// Size: 0x01A0 (0x000000 - 0x0001A0)
struct FControlShapeActorCreationParam
{ 
	unsigned char                                      UnknownData00_2[0x1A0];                                     // 0x0000   (0x01A0)  MISSED
};

/// Struct /Script/ControlRig.ControlRigValidationContext
/// Size: 0x0028 (0x000000 - 0x000028)
struct FControlRigValidationContext
{ 
	unsigned char                                      UnknownData00_2[0x28];                                      // 0x0000   (0x0028)  MISSED
};

/// Struct /Script/ControlRig.CRSimContainer
/// Size: 0x0018 (0x000000 - 0x000018)
struct FCRSimContainer
{ 
	float                                              TimeStep;                                                   // 0x0008   (0x0004)  
	float                                              AccumulatedTime;                                            // 0x000C   (0x0004)  
	float                                              TimeLeftForStep;                                            // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.CRSimLinearSpring
/// Size: 0x0010 (0x000000 - 0x000010)
struct FCRSimLinearSpring
{ 
	int32_t                                            SubjectA;                                                   // 0x0000   (0x0004)  
	int32_t                                            SubjectB;                                                   // 0x0004   (0x0004)  
	float                                              Coefficient;                                                // 0x0008   (0x0004)  
	float                                              Equilibrium;                                                // 0x000C   (0x0004)  
};

/// Struct /Script/ControlRig.CRSimPointConstraint
/// Size: 0x0040 (0x000000 - 0x000040)
struct FCRSimPointConstraint
{ 
	ECRSimConstraintType                               Type;                                                       // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	int32_t                                            SubjectA;                                                   // 0x0004   (0x0004)  
	int32_t                                            SubjectB;                                                   // 0x0008   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	FVector                                            DataA;                                                      // 0x0010   (0x0018)  
	FVector                                            DataB;                                                      // 0x0028   (0x0018)  
};

/// Struct /Script/ControlRig.CRSimPointForce
/// Size: 0x0028 (0x000000 - 0x000028)
struct FCRSimPointForce
{ 
	ECRSimPointForceType                               ForceType;                                                  // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	FVector                                            Vector;                                                     // 0x0008   (0x0018)  
	float                                              Coefficient;                                                // 0x0020   (0x0004)  
	bool                                               bNormalize;                                                 // 0x0024   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0025   (0x0003)  MISSED
};

/// Struct /Script/ControlRig.CRSimSoftCollision
/// Size: 0x0080 (0x000000 - 0x000080)
struct FCRSimSoftCollision
{ 
	FTransform                                         Transform;                                                  // 0x0000   (0x0060)  
	ECRSimSoftCollisionType                            ShapeType;                                                  // 0x0060   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0061   (0x0003)  MISSED
	float                                              MinimumDistance;                                            // 0x0064   (0x0004)  
	float                                              MaximumDistance;                                            // 0x0068   (0x0004)  
	ERigVMAnimEasingType                               FalloffType;                                                // 0x006C   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x006D   (0x0003)  MISSED
	float                                              Coefficient;                                                // 0x0070   (0x0004)  
	bool                                               bInverted;                                                  // 0x0074   (0x0001)  
	unsigned char                                      UnknownData02_6[0xB];                                       // 0x0075   (0x000B)  MISSED
};

/// Struct /Script/ControlRig.CRSimPointContainer
/// Size: 0x0060 (0x000018 - 0x000078)
struct FCRSimPointContainer : FCRSimContainer
{ 
	TArray<FRigVMSimPoint>                             Points;                                                     // 0x0018   (0x0010)  
	TArray<FCRSimLinearSpring>                         Springs;                                                    // 0x0028   (0x0010)  
	TArray<FCRSimPointForce>                           Forces;                                                     // 0x0038   (0x0010)  
	TArray<FCRSimSoftCollision>                        CollisionVolumes;                                           // 0x0048   (0x0010)  
	TArray<FCRSimPointConstraint>                      Constraints;                                                // 0x0058   (0x0010)  
	TArray<FRigVMSimPoint>                             PreviousStep;                                               // 0x0068   (0x0010)  
};

/// Struct /Script/ControlRig.ConstraintNodeData
/// Size: 0x0140 (0x000000 - 0x000140)
struct FConstraintNodeData
{ 
	FTransform                                         RelativeParent;                                             // 0x0000   (0x0060)  
	FConstraintOffset                                  ConstraintOffset;                                           // 0x0060   (0x00C0)  
	FName                                              LinkedNode;                                                 // 0x0120   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0124   (0x0004)  MISSED
	TArray<FTransformConstraint>                       Constraints;                                                // 0x0128   (0x0010)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0138   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.AnimationHierarchy
/// Size: 0x0010 (0x000078 - 0x000088)
struct FAnimationHierarchy : FNodeHierarchyWithUserData
{ 
	TArray<FConstraintNodeData>                        UserData;                                                   // 0x0078   (0x0010)  
};

/// Struct /Script/ControlRig.RigElement
/// Size: 0x0010 (0x000000 - 0x000010)
struct FRigElement
{ 
	FName                                              Name;                                                       // 0x0008   (0x0004)  
	int32_t                                            Index;                                                      // 0x000C   (0x0004)  
};

/// Struct /Script/ControlRig.RigBone
/// Size: 0x0150 (0x000010 - 0x000160)
struct FRigBone : FRigElement
{ 
	FName                                              ParentName;                                                 // 0x0010   (0x0004)  
	int32_t                                            ParentIndex;                                                // 0x0014   (0x0004)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0018   (0x0008)  MISSED
	FTransform                                         InitialTransform;                                           // 0x0020   (0x0060)  
	FTransform                                         GlobalTransform;                                            // 0x0080   (0x0060)  
	FTransform                                         LocalTransform;                                             // 0x00E0   (0x0060)  
	TArray<int32_t>                                    Dependents;                                                 // 0x0140   (0x0010)  
	ERigBoneType                                       Type;                                                       // 0x0150   (0x0001)  
	unsigned char                                      UnknownData01_6[0xF];                                       // 0x0151   (0x000F)  MISSED
};

/// Struct /Script/ControlRig.RigBoneHierarchy
/// Size: 0x0010 (0x000000 - 0x000010)
struct FRigBoneHierarchy
{ 
	TArray<FRigBone>                                   Bones;                                                      // 0x0000   (0x0010)  
};

/// Struct /Script/ControlRig.RigConnectionRule
/// Size: 0x0008 (0x000000 - 0x000008)
struct FRigConnectionRule
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigAndConnectionRule
/// Size: 0x0010 (0x000008 - 0x000018)
struct FRigAndConnectionRule : FRigConnectionRule
{ 
	TArray<FRigConnectionRuleStash>                    ChildRules;                                                 // 0x0008   (0x0010)  
};

/// Struct /Script/ControlRig.RigOrConnectionRule
/// Size: 0x0010 (0x000008 - 0x000018)
struct FRigOrConnectionRule : FRigConnectionRule
{ 
	TArray<FRigConnectionRuleStash>                    ChildRules;                                                 // 0x0008   (0x0010)  
};

/// Struct /Script/ControlRig.RigTypeConnectionRule
/// Size: 0x0008 (0x000008 - 0x000010)
struct FRigTypeConnectionRule : FRigConnectionRule
{ 
	ERigElementType                                    ElementType;                                                // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0009   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigTagConnectionRule
/// Size: 0x0008 (0x000008 - 0x000010)
struct FRigTagConnectionRule : FRigConnectionRule
{ 
	FName                                              tag;                                                        // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigChildOfPrimaryConnectionRule
/// Size: 0x0000 (0x000008 - 0x000008)
struct FRigChildOfPrimaryConnectionRule : FRigConnectionRule
{ 
};

/// Struct /Script/ControlRig.RigControl
/// Size: 0x0330 (0x000010 - 0x000340)
struct FRigControl : FRigElement
{ 
	ERigControlType                                    ControlType;                                                // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0011   (0x0003)  MISSED
	FName                                              DisplayName;                                                // 0x0014   (0x0004)  
	FName                                              ParentName;                                                 // 0x0018   (0x0004)  
	int32_t                                            ParentIndex;                                                // 0x001C   (0x0004)  
	FName                                              SpaceName;                                                  // 0x0020   (0x0004)  
	int32_t                                            SpaceIndex;                                                 // 0x0024   (0x0004)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x0028   (0x0008)  MISSED
	FTransform                                         OffsetTransform;                                            // 0x0030   (0x0060)  
	FRigControlValue                                   InitialValue;                                               // 0x0090   (0x0084)  
	FRigControlValue                                   Value;                                                      // 0x0114   (0x0084)  
	ERigControlAxis                                    PrimaryAxis;                                                // 0x0198   (0x0001)  
	bool                                               bIsCurve;                                                   // 0x0199   (0x0001)  
	bool                                               bAnimatable;                                                // 0x019A   (0x0001)  
	bool                                               bLimitTranslation;                                          // 0x019B   (0x0001)  
	bool                                               bLimitRotation;                                             // 0x019C   (0x0001)  
	bool                                               bLimitScale;                                                // 0x019D   (0x0001)  
	bool                                               bDrawLimits;                                                // 0x019E   (0x0001)  
	unsigned char                                      UnknownData02_5[0x1];                                       // 0x019F   (0x0001)  MISSED
	FRigControlValue                                   MinimumValue;                                               // 0x01A0   (0x0084)  
	FRigControlValue                                   MaximumValue;                                               // 0x0224   (0x0084)  
	bool                                               bGizmoEnabled;                                              // 0x02A8   (0x0001)  
	bool                                               bGizmoVisible;                                              // 0x02A9   (0x0001)  
	unsigned char                                      UnknownData03_5[0x2];                                       // 0x02AA   (0x0002)  MISSED
	FName                                              GizmoName;                                                  // 0x02AC   (0x0004)  
	FTransform                                         GizmoTransform;                                             // 0x02B0   (0x0060)  
	FLinearColor                                       GizmoColor;                                                 // 0x0310   (0x0010)  
	TArray<int32_t>                                    Dependents;                                                 // 0x0320   (0x0010)  
	bool                                               bIsTransientControl;                                        // 0x0330   (0x0001)  
	unsigned char                                      UnknownData04_5[0x7];                                       // 0x0331   (0x0007)  MISSED
	class UEnum*                                       ControlEnum;                                                // 0x0338   (0x0008)  
};

/// Struct /Script/ControlRig.RigControlHierarchy
/// Size: 0x0010 (0x000000 - 0x000010)
struct FRigControlHierarchy
{ 
	TArray<FRigControl>                                Controls;                                                   // 0x0000   (0x0010)  
};

/// Struct /Script/ControlRig.RigCurve
/// Size: 0x0008 (0x000010 - 0x000018)
struct FRigCurve : FRigElement
{ 
	float                                              Value;                                                      // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigCurveContainer
/// Size: 0x0010 (0x000000 - 0x000010)
struct FRigCurveContainer
{ 
	TArray<FRigCurve>                                  Curves;                                                     // 0x0000   (0x0010)  
};

/// Struct /Script/ControlRig.RigSpace
/// Size: 0x00D0 (0x000010 - 0x0000E0)
struct FRigSpace : FRigElement
{ 
	ERigSpaceType                                      SpaceType;                                                  // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0011   (0x0003)  MISSED
	FName                                              ParentName;                                                 // 0x0014   (0x0004)  
	int32_t                                            ParentIndex;                                                // 0x0018   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x001C   (0x0004)  MISSED
	FTransform                                         InitialTransform;                                           // 0x0020   (0x0060)  
	FTransform                                         LocalTransform;                                             // 0x0080   (0x0060)  
};

/// Struct /Script/ControlRig.RigSpaceHierarchy
/// Size: 0x0010 (0x000000 - 0x000010)
struct FRigSpaceHierarchy
{ 
	TArray<FRigSpace>                                  Spaces;                                                     // 0x0000   (0x0010)  
};

/// Struct /Script/ControlRig.RigHierarchyContainer
/// Size: 0x0040 (0x000000 - 0x000040)
struct FRigHierarchyContainer
{ 
	FRigBoneHierarchy                                  BoneHierarchy;                                              // 0x0000   (0x0010)  
	FRigSpaceHierarchy                                 SpaceHierarchy;                                             // 0x0010   (0x0010)  
	FRigControlHierarchy                               ControlHierarchy;                                           // 0x0020   (0x0010)  
	FRigCurveContainer                                 CurveContainer;                                             // 0x0030   (0x0010)  
};

/// Struct /Script/ControlRig.RigHierarchyRef
/// Size: 0x0001 (0x000000 - 0x000001)
struct FRigHierarchyRef
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/ControlRig.RigControlModifiedContext
/// Size: 0x0014 (0x000000 - 0x000014)
struct FRigControlModifiedContext
{ 
	unsigned char                                      UnknownData00_2[0x14];                                      // 0x0000   (0x0014)  MISSED
};

/// Struct /Script/ControlRig.RigElementKeyCollection
/// Size: 0x0010 (0x000000 - 0x000010)
struct FRigElementKeyCollection
{ 
	TArray<FRigElementKey>                             Keys;                                                       // 0x0000   (0x0010)  
};

/// Struct /Script/ControlRig.RigEventContext
/// Size: 0x0020 (0x000000 - 0x000020)
struct FRigEventContext
{ 
	unsigned char                                      UnknownData00_2[0x20];                                      // 0x0000   (0x0020)  MISSED
};

/// Struct /Script/ControlRig.RigElementResolveResult
/// Size: 0x0028 (0x000000 - 0x000028)
struct FRigElementResolveResult
{ 
	FRigElementKey                                     Key;                                                        // 0x0000   (0x0008)  
	ERigElementResolveState                            State;                                                      // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0009   (0x0007)  MISSED
	SDK_UNDEFINED(24,12549) /* FText */                __um(Message);                                              // 0x0010   (0x0018)  
};

/// Struct /Script/ControlRig.ModularRigResolveResult
/// Size: 0x0048 (0x000000 - 0x000048)
struct FModularRigResolveResult
{ 
	FRigElementKey                                     Connector;                                                  // 0x0000   (0x0008)  
	TArray<FRigElementResolveResult>                   Matches;                                                    // 0x0008   (0x0010)  
	TArray<FRigElementResolveResult>                   Excluded;                                                   // 0x0018   (0x0010)  
	EModularRigResolveState                            State;                                                      // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0029   (0x0007)  MISSED
	SDK_UNDEFINED(24,12550) /* FText */                __um(Message);                                              // 0x0030   (0x0018)  
};

/// Struct /Script/ControlRig.RigBaseMetadata
/// Size: 0x0018 (0x000000 - 0x000018)
struct FRigBaseMetadata
{ 
	FName                                              Name;                                                       // 0x0008   (0x0004)  
	ERigMetadataType                                   Type;                                                       // 0x000C   (0x0001)  
	unsigned char                                      UnknownData00_6[0xB];                                       // 0x000D   (0x000B)  MISSED
};

/// Struct /Script/ControlRig.RigBoolMetadata
/// Size: 0x0008 (0x000018 - 0x000020)
struct FRigBoolMetadata : FRigBaseMetadata
{ 
	bool                                               Value;                                                      // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0019   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigBoolArrayMetadata
/// Size: 0x0010 (0x000018 - 0x000028)
struct FRigBoolArrayMetadata : FRigBaseMetadata
{ 
	TArray<bool>                                       Value;                                                      // 0x0018   (0x0010)  
};

/// Struct /Script/ControlRig.RigFloatMetadata
/// Size: 0x0008 (0x000018 - 0x000020)
struct FRigFloatMetadata : FRigBaseMetadata
{ 
	float                                              Value;                                                      // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigFloatArrayMetadata
/// Size: 0x0010 (0x000018 - 0x000028)
struct FRigFloatArrayMetadata : FRigBaseMetadata
{ 
	TArray<float>                                      Value;                                                      // 0x0018   (0x0010)  
};

/// Struct /Script/ControlRig.RigInt32Metadata
/// Size: 0x0008 (0x000018 - 0x000020)
struct FRigInt32Metadata : FRigBaseMetadata
{ 
	int32_t                                            Value;                                                      // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigInt32ArrayMetadata
/// Size: 0x0010 (0x000018 - 0x000028)
struct FRigInt32ArrayMetadata : FRigBaseMetadata
{ 
	TArray<int32_t>                                    Value;                                                      // 0x0018   (0x0010)  
};

/// Struct /Script/ControlRig.RigNameMetadata
/// Size: 0x0008 (0x000018 - 0x000020)
struct FRigNameMetadata : FRigBaseMetadata
{ 
	FName                                              Value;                                                      // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigNameArrayMetadata
/// Size: 0x0010 (0x000018 - 0x000028)
struct FRigNameArrayMetadata : FRigBaseMetadata
{ 
	TArray<FName>                                      Value;                                                      // 0x0018   (0x0010)  
};

/// Struct /Script/ControlRig.RigVectorMetadata
/// Size: 0x0018 (0x000018 - 0x000030)
struct FRigVectorMetadata : FRigBaseMetadata
{ 
	FVector                                            Value;                                                      // 0x0018   (0x0018)  
};

/// Struct /Script/ControlRig.RigVectorArrayMetadata
/// Size: 0x0010 (0x000018 - 0x000028)
struct FRigVectorArrayMetadata : FRigBaseMetadata
{ 
	TArray<FVector>                                    Value;                                                      // 0x0018   (0x0010)  
};

/// Struct /Script/ControlRig.RigRotatorMetadata
/// Size: 0x0018 (0x000018 - 0x000030)
struct FRigRotatorMetadata : FRigBaseMetadata
{ 
	FRotator                                           Value;                                                      // 0x0018   (0x0018)  
};

/// Struct /Script/ControlRig.RigRotatorArrayMetadata
/// Size: 0x0010 (0x000018 - 0x000028)
struct FRigRotatorArrayMetadata : FRigBaseMetadata
{ 
	TArray<FRotator>                                   Value;                                                      // 0x0018   (0x0010)  
};

/// Struct /Script/ControlRig.RigQuatMetadata
/// Size: 0x0028 (0x000018 - 0x000040)
struct FRigQuatMetadata : FRigBaseMetadata
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0018   (0x0008)  MISSED
	FQuat                                              Value;                                                      // 0x0020   (0x0020)  
};

/// Struct /Script/ControlRig.RigQuatArrayMetadata
/// Size: 0x0010 (0x000018 - 0x000028)
struct FRigQuatArrayMetadata : FRigBaseMetadata
{ 
	TArray<FQuat>                                      Value;                                                      // 0x0018   (0x0010)  
};

/// Struct /Script/ControlRig.RigTransformMetadata
/// Size: 0x0068 (0x000018 - 0x000080)
struct FRigTransformMetadata : FRigBaseMetadata
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0018   (0x0008)  MISSED
	FTransform                                         Value;                                                      // 0x0020   (0x0060)  
};

/// Struct /Script/ControlRig.RigTransformArrayMetadata
/// Size: 0x0010 (0x000018 - 0x000028)
struct FRigTransformArrayMetadata : FRigBaseMetadata
{ 
	TArray<FTransform>                                 Value;                                                      // 0x0018   (0x0010)  
};

/// Struct /Script/ControlRig.RigLinearColorMetadata
/// Size: 0x0010 (0x000018 - 0x000028)
struct FRigLinearColorMetadata : FRigBaseMetadata
{ 
	FLinearColor                                       Value;                                                      // 0x0018   (0x0010)  
};

/// Struct /Script/ControlRig.RigLinearColorArrayMetadata
/// Size: 0x0010 (0x000018 - 0x000028)
struct FRigLinearColorArrayMetadata : FRigBaseMetadata
{ 
	TArray<FLinearColor>                               Value;                                                      // 0x0018   (0x0010)  
};

/// Struct /Script/ControlRig.RigElementKeyMetadata
/// Size: 0x0008 (0x000018 - 0x000020)
struct FRigElementKeyMetadata : FRigBaseMetadata
{ 
	FRigElementKey                                     Value;                                                      // 0x0018   (0x0008)  
};

/// Struct /Script/ControlRig.RigElementKeyArrayMetadata
/// Size: 0x0010 (0x000018 - 0x000028)
struct FRigElementKeyArrayMetadata : FRigBaseMetadata
{ 
	TArray<FRigElementKey>                             Value;                                                      // 0x0018   (0x0010)  
};

/// Struct /Script/ControlRig.RigInfluenceEntryModifier
/// Size: 0x0010 (0x000000 - 0x000010)
struct FRigInfluenceEntryModifier
{ 
	TArray<FRigElementKey>                             AffectedList;                                               // 0x0000   (0x0010)  
};

/// Struct /Script/ControlRig.RigModuleDescription
/// Size: 0x0090 (0x000000 - 0x000090)
struct FRigModuleDescription
{ 
	FSoftObjectPath                                    Path;                                                       // 0x0000   (0x0018)  
	FRigModuleSettings                                 Settings;                                                   // 0x0018   (0x0078)  
};

/// Struct /Script/ControlRig.AnimNode_ControlRigInputPose
/// Size: 0x0020 (0x000010 - 0x000030)
struct FAnimNode_ControlRigInputPose : FAnimNode_Base
{ 
	FPoseLink                                          InputPose;                                                  // 0x0010   (0x0010)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0020   (0x0010)  MISSED
};

/// Struct /Script/ControlRig.ControlRigLayerInstanceProxy
/// Size: 0x00A0 (0x000740 - 0x0007E0)
struct FControlRigLayerInstanceProxy : FAnimInstanceProxy
{ 
	unsigned char                                      UnknownData00_1[0xA8];                                      // 0x0738   (0x00A8)  MISSED
};

/// Struct /Script/ControlRig.ControlRigSequenceObjectReference
/// Size: 0x0008 (0x000000 - 0x000008)
struct FControlRigSequenceObjectReference
{ 
	class UClass*                                      ControlRigClass;                                            // 0x0000   (0x0008)  
};

/// Struct /Script/ControlRig.ControlRigSequenceObjectReferences
/// Size: 0x0010 (0x000000 - 0x000010)
struct FControlRigSequenceObjectReferences
{ 
	TArray<FControlRigSequenceObjectReference>         Array;                                                      // 0x0000   (0x0010)  
};

/// Struct /Script/ControlRig.ControlRigSequenceObjectReferenceMap
/// Size: 0x0020 (0x000000 - 0x000020)
struct FControlRigSequenceObjectReferenceMap
{ 
	TArray<FGuid>                                      BindingIds;                                                 // 0x0000   (0x0010)  
	TArray<FControlRigSequenceObjectReferences>        References;                                                 // 0x0010   (0x0010)  
};

/// Struct /Script/ControlRig.ChannelMapInfo
/// Size: 0x0038 (0x000000 - 0x000038)
struct FChannelMapInfo
{ 
	int32_t                                            ControlIndex;                                               // 0x0000   (0x0004)  
	int32_t                                            TotalChannelIndex;                                          // 0x0004   (0x0004)  
	int32_t                                            ChannelIndex;                                               // 0x0008   (0x0004)  
	int32_t                                            ParentControlIndex;                                         // 0x000C   (0x0004)  
	FName                                              ChannelTypeName;                                            // 0x0010   (0x0004)  
	bool                                               bDoesHaveSpace;                                             // 0x0014   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0015   (0x0003)  MISSED
	int32_t                                            SpaceChannelIndex;                                          // 0x0018   (0x0004)  
	int32_t                                            MaskIndex;                                                  // 0x001C   (0x0004)  
	int32_t                                            CategoryIndex;                                              // 0x0020   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0024   (0x0004)  MISSED
	TArray<uint32_t>                                   ConstraintsIndex;                                           // 0x0028   (0x0010)  
};

/// Struct /Script/ControlRig.MovieSceneControlRigParameterTemplate
/// Size: 0x0040 (0x000080 - 0x0000C0)
struct FMovieSceneControlRigParameterTemplate : FMovieSceneParameterSectionTemplate
{ 
	TArray<FEnumParameterNameAndCurve>                 Enums;                                                      // 0x0080   (0x0010)  
	TArray<FIntegerParameterNameAndCurve>              Integers;                                                   // 0x0090   (0x0010)  
	TArray<FSpaceControlNameAndChannel>                Spaces;                                                     // 0x00A0   (0x0010)  
	TArray<FConstraintAndActiveChannel>                Constraints;                                                // 0x00B0   (0x0010)  
};

/// Struct /Script/ControlRig.ControlRotationOrder
/// Size: 0x0002 (0x000000 - 0x000002)
struct FControlRotationOrder
{ 
	EEulerRotationOrder                                RotationOrder;                                              // 0x0000   (0x0001)  
	bool                                               bOverrideSetting;                                           // 0x0001   (0x0001)  
};

/// Struct /Script/ControlRig.ControlRigSettingsPerPinBool
/// Size: 0x0050 (0x000000 - 0x000050)
struct FControlRigSettingsPerPinBool
{ 
	SDK_UNDEFINED(80,12551) /* TMap<FString, bool> */  __um(Values);                                               // 0x0000   (0x0050)  
};

/// Struct /Script/ControlRig.RigDispatchFactory
/// Size: 0x0000 (0x000070 - 0x000070)
struct FRigDispatchFactory : FRigVMDispatchFactory
{ 
};

/// Struct /Script/ControlRig.RigDispatch_AnimAttributeBase
/// Size: 0x0030 (0x000070 - 0x0000A0)
struct FRigDispatch_AnimAttributeBase : FRigDispatchFactory
{ 
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x0070   (0x0030)  MISSED
};

/// Struct /Script/ControlRig.RigDispatch_GetAnimAttribute
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
struct FRigDispatch_GetAnimAttribute : FRigDispatch_AnimAttributeBase
{ 
};

/// Struct /Script/ControlRig.RigDispatch_SetAnimAttribute
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
struct FRigDispatch_SetAnimAttribute : FRigDispatch_AnimAttributeBase
{ 
};

/// Struct /Script/ControlRig.RigUnit_SphereTrace_WorkData
/// Size: 0x0038 (0x000000 - 0x000038)
struct FRigUnit_SphereTrace_WorkData
{ 
	uint32_t                                           Hash;                                                       // 0x0000   (0x0004)  
	bool                                               bHit;                                                       // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0005   (0x0003)  MISSED
	FVector                                            HitLocation;                                                // 0x0008   (0x0018)  
	FVector                                            HitNormal;                                                  // 0x0020   (0x0018)  
};

/// Struct /Script/ControlRig.RigUnit_SphereTraceWorld
/// Size: 0x00A8 (0x000008 - 0x0000B0)
struct FRigUnit_SphereTraceWorld : FRigUnit
{ 
	FVector                                            Start;                                                      // 0x0008   (0x0018)  
	FVector                                            End;                                                        // 0x0020   (0x0018)  
	SDK_UNDEFINED(1,12552) /* TEnumAsByte<ECollisionChannel> */ __um(Channel);                                     // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0039   (0x0003)  MISSED
	float                                              Radius;                                                     // 0x003C   (0x0004)  
	bool                                               bHit;                                                       // 0x0040   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0041   (0x0007)  MISSED
	FVector                                            HitLocation;                                                // 0x0048   (0x0018)  
	FVector                                            HitNormal;                                                  // 0x0060   (0x0018)  
	FRigUnit_SphereTrace_WorkData                      WorkData;                                                   // 0x0078   (0x0038)  
};

/// Struct /Script/ControlRig.RigUnit_SphereTraceByTraceChannel
/// Size: 0x00A8 (0x000008 - 0x0000B0)
struct FRigUnit_SphereTraceByTraceChannel : FRigUnit
{ 
	FVector                                            Start;                                                      // 0x0008   (0x0018)  
	FVector                                            End;                                                        // 0x0020   (0x0018)  
	SDK_UNDEFINED(1,12553) /* TEnumAsByte<ETraceTypeQuery> */ __um(TraceChannel);                                  // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0039   (0x0003)  MISSED
	float                                              Radius;                                                     // 0x003C   (0x0004)  
	bool                                               bHit;                                                       // 0x0040   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0041   (0x0007)  MISSED
	FVector                                            HitLocation;                                                // 0x0048   (0x0018)  
	FVector                                            HitNormal;                                                  // 0x0060   (0x0018)  
	FRigUnit_SphereTrace_WorkData                      WorkData;                                                   // 0x0078   (0x0038)  
};

/// Struct /Script/ControlRig.RigUnit_SphereTraceByObjectTypes
/// Size: 0x00B0 (0x000008 - 0x0000B8)
struct FRigUnit_SphereTraceByObjectTypes : FRigUnit
{ 
	FVector                                            Start;                                                      // 0x0008   (0x0018)  
	FVector                                            End;                                                        // 0x0020   (0x0018)  
	SDK_UNDEFINED(16,12554) /* TArray<TEnumAsByte<EObjectTypeQuery>> */ __um(ObjectTypes);                         // 0x0038   (0x0010)  
	float                                              Radius;                                                     // 0x0048   (0x0004)  
	bool                                               bHit;                                                       // 0x004C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x004D   (0x0003)  MISSED
	FVector                                            HitLocation;                                                // 0x0050   (0x0018)  
	FVector                                            HitNormal;                                                  // 0x0068   (0x0018)  
	FRigUnit_SphereTrace_WorkData                      WorkData;                                                   // 0x0080   (0x0038)  
};

/// Struct /Script/ControlRig.RigUnit_Control
/// Size: 0x0178 (0x000008 - 0x000180)
struct FRigUnit_Control : FRigUnit
{ 
	FEulerTransform                                    Transform;                                                  // 0x0008   (0x0048)  
	FTransform                                         base;                                                       // 0x0050   (0x0060)  
	FTransform                                         InitTransform;                                              // 0x00B0   (0x0060)  
	FTransform                                         Result;                                                     // 0x0110   (0x0060)  
	FTransformFilter                                   Filter;                                                     // 0x0170   (0x0009)  
	bool                                               bIsInitialized;                                             // 0x0179   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x017A   (0x0006)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_Control_StaticMesh
/// Size: 0x0060 (0x000180 - 0x0001E0)
struct FRigUnit_Control_StaticMesh : FRigUnit_Control
{ 
	FTransform                                         MeshTransform;                                              // 0x0180   (0x0060)  
};

/// Struct /Script/ControlRig.RigDispatch_GetUserData
/// Size: 0x0000 (0x000070 - 0x000070)
struct FRigDispatch_GetUserData : FRigDispatchFactory
{ 
};

/// Struct /Script/ControlRig.RigUnit_SetupShapeLibraryFromUserData
/// Size: 0x0040 (0x0001D0 - 0x000210)
struct FRigUnit_SetupShapeLibraryFromUserData : FRigUnitMutable
{ 
	SDK_UNDEFINED(16,12555) /* FString */              __um(NameSpace);                                            // 0x01D0   (0x0010)  
	SDK_UNDEFINED(16,12556) /* FString */              __um(Path);                                                 // 0x01E0   (0x0010)  
	SDK_UNDEFINED(16,12557) /* FString */              __um(LibraryName);                                          // 0x01F0   (0x0010)  
	bool                                               LogShapeLibraries;                                          // 0x0200   (0x0001)  
	unsigned char                                      UnknownData00_6[0xF];                                       // 0x0201   (0x000F)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_ShapeExists
/// Size: 0x0008 (0x000008 - 0x000010)
struct FRigUnit_ShapeExists : FRigUnit
{ 
	FName                                              ShapeName;                                                  // 0x0008   (0x0004)  
	bool                                               Result;                                                     // 0x000C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x000D   (0x0003)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_DebugBezier
/// Size: 0x0100 (0x000100 - 0x000200)
struct FRigUnit_DebugBezier : FRigVMFunction_DebugBaseMutable
{ 
	FRigVMFourPointBezier                              Bezier;                                                     // 0x0100   (0x0060)  
	float                                              MinimumU;                                                   // 0x0160   (0x0004)  
	float                                              MaximumU;                                                   // 0x0164   (0x0004)  
	FLinearColor                                       Color;                                                      // 0x0168   (0x0010)  
	float                                              Thickness;                                                  // 0x0178   (0x0004)  
	int32_t                                            Detail;                                                     // 0x017C   (0x0004)  
	FName                                              Space;                                                      // 0x0180   (0x0004)  
	unsigned char                                      UnknownData00_5[0xC];                                       // 0x0184   (0x000C)  MISSED
	FTransform                                         WorldOffset;                                                // 0x0190   (0x0060)  
	bool                                               bEnabled;                                                   // 0x01F0   (0x0001)  
	unsigned char                                      UnknownData01_6[0xF];                                       // 0x01F1   (0x000F)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_DebugBezierItemSpace
/// Size: 0x0100 (0x000100 - 0x000200)
struct FRigUnit_DebugBezierItemSpace : FRigVMFunction_DebugBaseMutable
{ 
	FRigVMFourPointBezier                              Bezier;                                                     // 0x0100   (0x0060)  
	float                                              MinimumU;                                                   // 0x0160   (0x0004)  
	float                                              MaximumU;                                                   // 0x0164   (0x0004)  
	FLinearColor                                       Color;                                                      // 0x0168   (0x0010)  
	float                                              Thickness;                                                  // 0x0178   (0x0004)  
	int32_t                                            Detail;                                                     // 0x017C   (0x0004)  
	FRigElementKey                                     Space;                                                      // 0x0180   (0x0008)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0188   (0x0008)  MISSED
	FTransform                                         WorldOffset;                                                // 0x0190   (0x0060)  
	bool                                               bEnabled;                                                   // 0x01F0   (0x0001)  
	unsigned char                                      UnknownData01_6[0xF];                                       // 0x01F1   (0x000F)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_DebugHierarchy
/// Size: 0x0258 (0x000008 - 0x000260)
struct FRigUnit_DebugHierarchy : FRigVMFunction_DebugBase
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0008   (0x0008)  MISSED
	FControlRigExecuteContext                          ExecuteContext;                                             // 0x0010   (0x01C0)  
	float                                              Scale;                                                      // 0x01D0   (0x0004)  
	FLinearColor                                       Color;                                                      // 0x01D4   (0x0010)  
	float                                              Thickness;                                                  // 0x01E4   (0x0004)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x01E8   (0x0008)  MISSED
	FTransform                                         WorldOffset;                                                // 0x01F0   (0x0060)  
	bool                                               bEnabled;                                                   // 0x0250   (0x0001)  
	unsigned char                                      UnknownData02_6[0xF];                                       // 0x0251   (0x000F)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_DebugPose
/// Size: 0x02C8 (0x000008 - 0x0002D0)
struct FRigUnit_DebugPose : FRigVMFunction_DebugBase
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0008   (0x0008)  MISSED
	FControlRigExecuteContext                          ExecuteContext;                                             // 0x0010   (0x01C0)  
	FRigPose                                           Pose;                                                       // 0x01D0   (0x0070)  
	float                                              Scale;                                                      // 0x0240   (0x0004)  
	FLinearColor                                       Color;                                                      // 0x0244   (0x0010)  
	float                                              Thickness;                                                  // 0x0254   (0x0004)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x0258   (0x0008)  MISSED
	FTransform                                         WorldOffset;                                                // 0x0260   (0x0060)  
	bool                                               bEnabled;                                                   // 0x02C0   (0x0001)  
	unsigned char                                      UnknownData02_6[0xF];                                       // 0x02C1   (0x000F)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_DebugLine
/// Size: 0x00C0 (0x0001D0 - 0x000290)
struct FRigUnit_DebugLine : FRigUnit_DebugBaseMutable
{ 
	FVector                                            A;                                                          // 0x01D0   (0x0018)  
	FVector                                            B;                                                          // 0x01E8   (0x0018)  
	FLinearColor                                       Color;                                                      // 0x0200   (0x0010)  
	float                                              Thickness;                                                  // 0x0210   (0x0004)  
	FName                                              Space;                                                      // 0x0214   (0x0004)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0218   (0x0008)  MISSED
	FTransform                                         WorldOffset;                                                // 0x0220   (0x0060)  
	bool                                               bEnabled;                                                   // 0x0280   (0x0001)  
	unsigned char                                      UnknownData01_6[0xF];                                       // 0x0281   (0x000F)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_DebugLineItemSpace
/// Size: 0x00C0 (0x0001D0 - 0x000290)
struct FRigUnit_DebugLineItemSpace : FRigUnit_DebugBaseMutable
{ 
	FVector                                            A;                                                          // 0x01D0   (0x0018)  
	FVector                                            B;                                                          // 0x01E8   (0x0018)  
	FLinearColor                                       Color;                                                      // 0x0200   (0x0010)  
	float                                              Thickness;                                                  // 0x0210   (0x0004)  
	FRigElementKey                                     Space;                                                      // 0x0214   (0x0008)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x021C   (0x0004)  MISSED
	FTransform                                         WorldOffset;                                                // 0x0220   (0x0060)  
	bool                                               bEnabled;                                                   // 0x0280   (0x0001)  
	unsigned char                                      UnknownData01_6[0xF];                                       // 0x0281   (0x000F)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_DebugLineStrip
/// Size: 0x00A0 (0x0001D0 - 0x000270)
struct FRigUnit_DebugLineStrip : FRigUnit_DebugBaseMutable
{ 
	TArray<FVector>                                    Points;                                                     // 0x01D0   (0x0010)  
	FLinearColor                                       Color;                                                      // 0x01E0   (0x0010)  
	float                                              Thickness;                                                  // 0x01F0   (0x0004)  
	FName                                              Space;                                                      // 0x01F4   (0x0004)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x01F8   (0x0008)  MISSED
	FTransform                                         WorldOffset;                                                // 0x0200   (0x0060)  
	bool                                               bEnabled;                                                   // 0x0260   (0x0001)  
	unsigned char                                      UnknownData01_6[0xF];                                       // 0x0261   (0x000F)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_DebugLineStripItemSpace
/// Size: 0x00A0 (0x0001D0 - 0x000270)
struct FRigUnit_DebugLineStripItemSpace : FRigUnit_DebugBaseMutable
{ 
	TArray<FVector>                                    Points;                                                     // 0x01D0   (0x0010)  
	FLinearColor                                       Color;                                                      // 0x01E0   (0x0010)  
	float                                              Thickness;                                                  // 0x01F0   (0x0004)  
	FRigElementKey                                     Space;                                                      // 0x01F4   (0x0008)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x01FC   (0x0004)  MISSED
	FTransform                                         WorldOffset;                                                // 0x0200   (0x0060)  
	bool                                               bEnabled;                                                   // 0x0260   (0x0001)  
	unsigned char                                      UnknownData01_6[0xF];                                       // 0x0261   (0x000F)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_DebugRectangle
/// Size: 0x00F0 (0x0001D0 - 0x0002C0)
struct FRigUnit_DebugRectangle : FRigUnit_DebugBaseMutable
{ 
	FTransform                                         Transform;                                                  // 0x01D0   (0x0060)  
	FLinearColor                                       Color;                                                      // 0x0230   (0x0010)  
	float                                              Scale;                                                      // 0x0240   (0x0004)  
	float                                              Thickness;                                                  // 0x0244   (0x0004)  
	FName                                              Space;                                                      // 0x0248   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x024C   (0x0004)  MISSED
	FTransform                                         WorldOffset;                                                // 0x0250   (0x0060)  
	bool                                               bEnabled;                                                   // 0x02B0   (0x0001)  
	unsigned char                                      UnknownData01_6[0xF];                                       // 0x02B1   (0x000F)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_DebugRectangleItemSpace
/// Size: 0x00F0 (0x0001D0 - 0x0002C0)
struct FRigUnit_DebugRectangleItemSpace : FRigUnit_DebugBaseMutable
{ 
	FTransform                                         Transform;                                                  // 0x01D0   (0x0060)  
	FLinearColor                                       Color;                                                      // 0x0230   (0x0010)  
	float                                              Scale;                                                      // 0x0240   (0x0004)  
	float                                              Thickness;                                                  // 0x0244   (0x0004)  
	FRigElementKey                                     Space;                                                      // 0x0248   (0x0008)  
	FTransform                                         WorldOffset;                                                // 0x0250   (0x0060)  
	bool                                               bEnabled;                                                   // 0x02B0   (0x0001)  
	unsigned char                                      UnknownData00_6[0xF];                                       // 0x02B1   (0x000F)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_DebugArc
/// Size: 0x0100 (0x0001D0 - 0x0002D0)
struct FRigUnit_DebugArc : FRigUnit_DebugBaseMutable
{ 
	FTransform                                         Transform;                                                  // 0x01D0   (0x0060)  
	FLinearColor                                       Color;                                                      // 0x0230   (0x0010)  
	float                                              Radius;                                                     // 0x0240   (0x0004)  
	float                                              MinimumDegrees;                                             // 0x0244   (0x0004)  
	float                                              MaximumDegrees;                                             // 0x0248   (0x0004)  
	float                                              Thickness;                                                  // 0x024C   (0x0004)  
	int32_t                                            Detail;                                                     // 0x0250   (0x0004)  
	FName                                              Space;                                                      // 0x0254   (0x0004)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0258   (0x0008)  MISSED
	FTransform                                         WorldOffset;                                                // 0x0260   (0x0060)  
	bool                                               bEnabled;                                                   // 0x02C0   (0x0001)  
	unsigned char                                      UnknownData01_6[0xF];                                       // 0x02C1   (0x000F)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_DebugArcItemSpace
/// Size: 0x0100 (0x0001D0 - 0x0002D0)
struct FRigUnit_DebugArcItemSpace : FRigUnit_DebugBaseMutable
{ 
	FTransform                                         Transform;                                                  // 0x01D0   (0x0060)  
	FLinearColor                                       Color;                                                      // 0x0230   (0x0010)  
	float                                              Radius;                                                     // 0x0240   (0x0004)  
	float                                              MinimumDegrees;                                             // 0x0244   (0x0004)  
	float                                              MaximumDegrees;                                             // 0x0248   (0x0004)  
	float                                              Thickness;                                                  // 0x024C   (0x0004)  
	int32_t                                            Detail;                                                     // 0x0250   (0x0004)  
	FRigElementKey                                     Space;                                                      // 0x0254   (0x0008)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x025C   (0x0004)  MISSED
	FTransform                                         WorldOffset;                                                // 0x0260   (0x0060)  
	bool                                               bEnabled;                                                   // 0x02C0   (0x0001)  
	unsigned char                                      UnknownData01_6[0xF];                                       // 0x02C1   (0x000F)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_DebugTransform
/// Size: 0x00F8 (0x000008 - 0x000100)
struct FRigUnit_DebugTransform : FRigUnit_DebugBase
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         Transform;                                                  // 0x0010   (0x0060)  
	ERigUnitDebugTransformMode                         Mode;                                                       // 0x0070   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0071   (0x0003)  MISSED
	FLinearColor                                       Color;                                                      // 0x0074   (0x0010)  
	float                                              Thickness;                                                  // 0x0084   (0x0004)  
	float                                              Scale;                                                      // 0x0088   (0x0004)  
	FName                                              Space;                                                      // 0x008C   (0x0004)  
	FTransform                                         WorldOffset;                                                // 0x0090   (0x0060)  
	bool                                               bEnabled;                                                   // 0x00F0   (0x0001)  
	unsigned char                                      UnknownData02_6[0xF];                                       // 0x00F1   (0x000F)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_DebugTransformMutable
/// Size: 0x00F0 (0x0001D0 - 0x0002C0)
struct FRigUnit_DebugTransformMutable : FRigUnit_DebugBaseMutable
{ 
	FTransform                                         Transform;                                                  // 0x01D0   (0x0060)  
	ERigUnitDebugTransformMode                         Mode;                                                       // 0x0230   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0231   (0x0003)  MISSED
	FLinearColor                                       Color;                                                      // 0x0234   (0x0010)  
	float                                              Thickness;                                                  // 0x0244   (0x0004)  
	float                                              Scale;                                                      // 0x0248   (0x0004)  
	FName                                              Space;                                                      // 0x024C   (0x0004)  
	FTransform                                         WorldOffset;                                                // 0x0250   (0x0060)  
	bool                                               bEnabled;                                                   // 0x02B0   (0x0001)  
	unsigned char                                      UnknownData01_6[0xF];                                       // 0x02B1   (0x000F)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_DebugTransformMutableItemSpace
/// Size: 0x0100 (0x0001D0 - 0x0002D0)
struct FRigUnit_DebugTransformMutableItemSpace : FRigUnit_DebugBaseMutable
{ 
	FTransform                                         Transform;                                                  // 0x01D0   (0x0060)  
	ERigUnitDebugTransformMode                         Mode;                                                       // 0x0230   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0231   (0x0003)  MISSED
	FLinearColor                                       Color;                                                      // 0x0234   (0x0010)  
	float                                              Thickness;                                                  // 0x0244   (0x0004)  
	float                                              Scale;                                                      // 0x0248   (0x0004)  
	FRigElementKey                                     Space;                                                      // 0x024C   (0x0008)  
	unsigned char                                      UnknownData01_5[0xC];                                       // 0x0254   (0x000C)  MISSED
	FTransform                                         WorldOffset;                                                // 0x0260   (0x0060)  
	bool                                               bEnabled;                                                   // 0x02C0   (0x0001)  
	unsigned char                                      UnknownData02_6[0xF];                                       // 0x02C1   (0x000F)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_DebugTransformArrayMutable_WorkData
/// Size: 0x0010 (0x000000 - 0x000010)
struct FRigUnit_DebugTransformArrayMutable_WorkData
{ 
	TArray<FTransform>                                 DrawTransforms;                                             // 0x0000   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_DebugTransformArrayMutable
/// Size: 0x00B0 (0x0001D0 - 0x000280)
struct FRigUnit_DebugTransformArrayMutable : FRigUnit_DebugBaseMutable
{ 
	TArray<FTransform>                                 Transforms;                                                 // 0x01D0   (0x0010)  
	ERigUnitDebugTransformMode                         Mode;                                                       // 0x01E0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x01E1   (0x0003)  MISSED
	FLinearColor                                       Color;                                                      // 0x01E4   (0x0010)  
	float                                              Thickness;                                                  // 0x01F4   (0x0004)  
	float                                              Scale;                                                      // 0x01F8   (0x0004)  
	FName                                              Space;                                                      // 0x01FC   (0x0004)  
	FTransform                                         WorldOffset;                                                // 0x0200   (0x0060)  
	bool                                               bEnabled;                                                   // 0x0260   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0261   (0x0007)  MISSED
	FRigUnit_DebugTransformArrayMutable_WorkData       WorkData;                                                   // 0x0268   (0x0010)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x0278   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_DebugTransformArrayMutableItemSpace
/// Size: 0x00C0 (0x0001D0 - 0x000290)
struct FRigUnit_DebugTransformArrayMutableItemSpace : FRigUnit_DebugBaseMutable
{ 
	TArray<FTransform>                                 Transforms;                                                 // 0x01D0   (0x0010)  
	TArray<int32_t>                                    ParentIndices;                                              // 0x01E0   (0x0010)  
	ERigUnitDebugTransformMode                         Mode;                                                       // 0x01F0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x01F1   (0x0003)  MISSED
	FLinearColor                                       Color;                                                      // 0x01F4   (0x0010)  
	float                                              Thickness;                                                  // 0x0204   (0x0004)  
	float                                              Scale;                                                      // 0x0208   (0x0004)  
	FRigElementKey                                     Space;                                                      // 0x020C   (0x0008)  
	unsigned char                                      UnknownData01_5[0xC];                                       // 0x0214   (0x000C)  MISSED
	FTransform                                         WorldOffset;                                                // 0x0220   (0x0060)  
	bool                                               bEnabled;                                                   // 0x0280   (0x0001)  
	unsigned char                                      UnknownData02_6[0xF];                                       // 0x0281   (0x000F)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_StartProfilingTimer
/// Size: 0x0000 (0x000100 - 0x000100)
struct FRigUnit_StartProfilingTimer : FRigVMFunction_DebugBaseMutable
{ 
};

/// Struct /Script/ControlRig.RigUnit_EndProfilingTimer
/// Size: 0x0030 (0x000100 - 0x000130)
struct FRigUnit_EndProfilingTimer : FRigVMFunction_DebugBaseMutable
{ 
	int32_t                                            NumberOfMeasurements;                                       // 0x0100   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0104   (0x0004)  MISSED
	SDK_UNDEFINED(16,12558) /* FString */              __um(Prefix);                                               // 0x0108   (0x0010)  
	float                                              AccumulatedTime;                                            // 0x0118   (0x0004)  
	int32_t                                            MeasurementsLeft;                                           // 0x011C   (0x0004)  
	bool                                               bIsInitialized;                                             // 0x0120   (0x0001)  
	unsigned char                                      UnknownData01_6[0xF];                                       // 0x0121   (0x000F)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_VisualDebugVector
/// Size: 0x0038 (0x000008 - 0x000040)
struct FRigUnit_VisualDebugVector : FRigUnit_DebugBase
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

/// Struct /Script/ControlRig.RigUnit_VisualDebugVectorItemSpace
/// Size: 0x0040 (0x000008 - 0x000048)
struct FRigUnit_VisualDebugVectorItemSpace : FRigUnit_DebugBase
{ 
	FVector                                            Value;                                                      // 0x0008   (0x0018)  
	bool                                               bEnabled;                                                   // 0x0020   (0x0001)  
	ERigUnitVisualDebugPointMode                       Mode;                                                       // 0x0021   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0022   (0x0002)  MISSED
	FLinearColor                                       Color;                                                      // 0x0024   (0x0010)  
	float                                              Thickness;                                                  // 0x0034   (0x0004)  
	float                                              Scale;                                                      // 0x0038   (0x0004)  
	FRigElementKey                                     Space;                                                      // 0x003C   (0x0008)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0044   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_VisualDebugQuat
/// Size: 0x0038 (0x000008 - 0x000040)
struct FRigUnit_VisualDebugQuat : FRigUnit_DebugBase
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              Value;                                                      // 0x0010   (0x0020)  
	bool                                               bEnabled;                                                   // 0x0030   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0031   (0x0003)  MISSED
	float                                              Thickness;                                                  // 0x0034   (0x0004)  
	float                                              Scale;                                                      // 0x0038   (0x0004)  
	FName                                              BoneSpace;                                                  // 0x003C   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_VisualDebugQuatItemSpace
/// Size: 0x0048 (0x000008 - 0x000050)
struct FRigUnit_VisualDebugQuatItemSpace : FRigUnit_DebugBase
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              Value;                                                      // 0x0010   (0x0020)  
	bool                                               bEnabled;                                                   // 0x0030   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0031   (0x0003)  MISSED
	float                                              Thickness;                                                  // 0x0034   (0x0004)  
	float                                              Scale;                                                      // 0x0038   (0x0004)  
	FRigElementKey                                     Space;                                                      // 0x003C   (0x0008)  
	unsigned char                                      UnknownData02_6[0xC];                                       // 0x0044   (0x000C)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_VisualDebugTransform
/// Size: 0x0078 (0x000008 - 0x000080)
struct FRigUnit_VisualDebugTransform : FRigUnit_DebugBase
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         Value;                                                      // 0x0010   (0x0060)  
	bool                                               bEnabled;                                                   // 0x0070   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0071   (0x0003)  MISSED
	float                                              Thickness;                                                  // 0x0074   (0x0004)  
	float                                              Scale;                                                      // 0x0078   (0x0004)  
	FName                                              BoneSpace;                                                  // 0x007C   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_VisualDebugTransformItemSpace
/// Size: 0x0088 (0x000008 - 0x000090)
struct FRigUnit_VisualDebugTransformItemSpace : FRigUnit_DebugBase
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         Value;                                                      // 0x0010   (0x0060)  
	bool                                               bEnabled;                                                   // 0x0070   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0071   (0x0003)  MISSED
	float                                              Thickness;                                                  // 0x0074   (0x0004)  
	float                                              Scale;                                                      // 0x0078   (0x0004)  
	FRigElementKey                                     Space;                                                      // 0x007C   (0x0008)  
	unsigned char                                      UnknownData02_6[0xC];                                       // 0x0084   (0x000C)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_ConvertTransform
/// Size: 0x00B8 (0x000008 - 0x0000C0)
struct FRigUnit_ConvertTransform : FRigUnit
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         Input;                                                      // 0x0010   (0x0060)  
	FEulerTransform                                    Result;                                                     // 0x0070   (0x0048)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x00B8   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_ConvertEulerTransform
/// Size: 0x00A8 (0x000008 - 0x0000B0)
struct FRigUnit_ConvertEulerTransform : FRigUnit
{ 
	FEulerTransform                                    Input;                                                      // 0x0008   (0x0048)  
	FTransform                                         Result;                                                     // 0x0050   (0x0060)  
};

/// Struct /Script/ControlRig.RigUnit_ConvertRotation
/// Size: 0x0038 (0x000008 - 0x000040)
struct FRigUnit_ConvertRotation : FRigUnit
{ 
	FRotator                                           Input;                                                      // 0x0008   (0x0018)  
	FQuat                                              Result;                                                     // 0x0020   (0x0020)  
};

/// Struct /Script/ControlRig.RigUnit_ConvertVectorRotation
/// Size: 0x0000 (0x000040 - 0x000040)
struct FRigUnit_ConvertVectorRotation : FRigUnit_ConvertRotation
{ 
};

/// Struct /Script/ControlRig.RigUnit_ConvertQuaternion
/// Size: 0x0048 (0x000008 - 0x000050)
struct FRigUnit_ConvertQuaternion : FRigUnit
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              Input;                                                      // 0x0010   (0x0020)  
	FRotator                                           Result;                                                     // 0x0030   (0x0018)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0048   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_ConvertVectorToRotation
/// Size: 0x0030 (0x000008 - 0x000038)
struct FRigUnit_ConvertVectorToRotation : FRigUnit
{ 
	FVector                                            Input;                                                      // 0x0008   (0x0018)  
	FRotator                                           Result;                                                     // 0x0020   (0x0018)  
};

/// Struct /Script/ControlRig.RigUnit_ConvertVectorToQuaternion
/// Size: 0x0038 (0x000008 - 0x000040)
struct FRigUnit_ConvertVectorToQuaternion : FRigUnit
{ 
	FVector                                            Input;                                                      // 0x0008   (0x0018)  
	FQuat                                              Result;                                                     // 0x0020   (0x0020)  
};

/// Struct /Script/ControlRig.RigUnit_ConvertRotationToVector
/// Size: 0x0030 (0x000008 - 0x000038)
struct FRigUnit_ConvertRotationToVector : FRigUnit
{ 
	FRotator                                           Input;                                                      // 0x0008   (0x0018)  
	FVector                                            Result;                                                     // 0x0020   (0x0018)  
};

/// Struct /Script/ControlRig.RigUnit_ConvertQuaternionToVector
/// Size: 0x0048 (0x000008 - 0x000050)
struct FRigUnit_ConvertQuaternionToVector : FRigUnit
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              Input;                                                      // 0x0010   (0x0020)  
	FVector                                            Result;                                                     // 0x0030   (0x0018)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0048   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_ToSwingAndTwist
/// Size: 0x0088 (0x000008 - 0x000090)
struct FRigUnit_ToSwingAndTwist : FRigUnit
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              Input;                                                      // 0x0010   (0x0020)  
	FVector                                            TwistAxis;                                                  // 0x0030   (0x0018)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x0048   (0x0008)  MISSED
	FQuat                                              Swing;                                                      // 0x0050   (0x0020)  
	FQuat                                              Twist;                                                      // 0x0070   (0x0020)  
};

/// Struct /Script/ControlRig.RigUnit_BinaryFloatOp
/// Size: 0x0010 (0x000008 - 0x000018)
struct FRigUnit_BinaryFloatOp : FRigUnit
{ 
	float                                              Argument0;                                                  // 0x0008   (0x0004)  
	float                                              Argument1;                                                  // 0x000C   (0x0004)  
	float                                              Result;                                                     // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_Multiply_FloatFloat
/// Size: 0x0000 (0x000018 - 0x000018)
struct FRigUnit_Multiply_FloatFloat : FRigUnit_BinaryFloatOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_Add_FloatFloat
/// Size: 0x0000 (0x000018 - 0x000018)
struct FRigUnit_Add_FloatFloat : FRigUnit_BinaryFloatOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_Subtract_FloatFloat
/// Size: 0x0000 (0x000018 - 0x000018)
struct FRigUnit_Subtract_FloatFloat : FRigUnit_BinaryFloatOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_Divide_FloatFloat
/// Size: 0x0000 (0x000018 - 0x000018)
struct FRigUnit_Divide_FloatFloat : FRigUnit_BinaryFloatOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_Clamp_Float
/// Size: 0x0010 (0x000008 - 0x000018)
struct FRigUnit_Clamp_Float : FRigUnit
{ 
	float                                              Value;                                                      // 0x0008   (0x0004)  
	float                                              Min;                                                        // 0x000C   (0x0004)  
	float                                              Max;                                                        // 0x0010   (0x0004)  
	float                                              Result;                                                     // 0x0014   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_MapRange_Float
/// Size: 0x0018 (0x000008 - 0x000020)
struct FRigUnit_MapRange_Float : FRigUnit
{ 
	float                                              Value;                                                      // 0x0008   (0x0004)  
	float                                              MinIn;                                                      // 0x000C   (0x0004)  
	float                                              MaxIn;                                                      // 0x0010   (0x0004)  
	float                                              MinOut;                                                     // 0x0014   (0x0004)  
	float                                              MaxOut;                                                     // 0x0018   (0x0004)  
	float                                              Result;                                                     // 0x001C   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_BinaryQuaternionOp
/// Size: 0x0068 (0x000008 - 0x000070)
struct FRigUnit_BinaryQuaternionOp : FRigUnit
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              Argument0;                                                  // 0x0010   (0x0020)  
	FQuat                                              Argument1;                                                  // 0x0030   (0x0020)  
	FQuat                                              Result;                                                     // 0x0050   (0x0020)  
};

/// Struct /Script/ControlRig.RigUnit_MultiplyQuaternion
/// Size: 0x0000 (0x000070 - 0x000070)
struct FRigUnit_MultiplyQuaternion : FRigUnit_BinaryQuaternionOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_UnaryQuaternionOp
/// Size: 0x0048 (0x000008 - 0x000050)
struct FRigUnit_UnaryQuaternionOp : FRigUnit
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              Argument;                                                   // 0x0010   (0x0020)  
	FQuat                                              Result;                                                     // 0x0030   (0x0020)  
};

/// Struct /Script/ControlRig.RigUnit_InverseQuaterion
/// Size: 0x0000 (0x000050 - 0x000050)
struct FRigUnit_InverseQuaterion : FRigUnit_UnaryQuaternionOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_QuaternionToAxisAndAngle
/// Size: 0x0048 (0x000008 - 0x000050)
struct FRigUnit_QuaternionToAxisAndAngle : FRigUnit
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              Argument;                                                   // 0x0010   (0x0020)  
	FVector                                            Axis;                                                       // 0x0030   (0x0018)  
	float                                              Angle;                                                      // 0x0048   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x004C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_QuaternionFromAxisAndAngle
/// Size: 0x0048 (0x000008 - 0x000050)
struct FRigUnit_QuaternionFromAxisAndAngle : FRigUnit
{ 
	FVector                                            Axis;                                                       // 0x0008   (0x0018)  
	float                                              Angle;                                                      // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_5[0xC];                                       // 0x0024   (0x000C)  MISSED
	FQuat                                              Result;                                                     // 0x0030   (0x0020)  
};

/// Struct /Script/ControlRig.RigUnit_QuaternionToAngle
/// Size: 0x0048 (0x000008 - 0x000050)
struct FRigUnit_QuaternionToAngle : FRigUnit
{ 
	FVector                                            Axis;                                                       // 0x0008   (0x0018)  
	FQuat                                              Argument;                                                   // 0x0020   (0x0020)  
	float                                              Angle;                                                      // 0x0040   (0x0004)  
	unsigned char                                      UnknownData00_6[0xC];                                       // 0x0044   (0x000C)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_BinaryTransformOp
/// Size: 0x0128 (0x000008 - 0x000130)
struct FRigUnit_BinaryTransformOp : FRigUnit
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         Argument0;                                                  // 0x0010   (0x0060)  
	FTransform                                         Argument1;                                                  // 0x0070   (0x0060)  
	FTransform                                         Result;                                                     // 0x00D0   (0x0060)  
};

/// Struct /Script/ControlRig.RigUnit_MultiplyTransform
/// Size: 0x0000 (0x000130 - 0x000130)
struct FRigUnit_MultiplyTransform : FRigUnit_BinaryTransformOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_GetRelativeTransform
/// Size: 0x0000 (0x000130 - 0x000130)
struct FRigUnit_GetRelativeTransform : FRigUnit_BinaryTransformOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_BinaryVectorOp
/// Size: 0x0048 (0x000008 - 0x000050)
struct FRigUnit_BinaryVectorOp : FRigUnit
{ 
	FVector                                            Argument0;                                                  // 0x0008   (0x0018)  
	FVector                                            Argument1;                                                  // 0x0020   (0x0018)  
	FVector                                            Result;                                                     // 0x0038   (0x0018)  
};

/// Struct /Script/ControlRig.RigUnit_Multiply_VectorVector
/// Size: 0x0000 (0x000050 - 0x000050)
struct FRigUnit_Multiply_VectorVector : FRigUnit_BinaryVectorOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_Add_VectorVector
/// Size: 0x0000 (0x000050 - 0x000050)
struct FRigUnit_Add_VectorVector : FRigUnit_BinaryVectorOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_Subtract_VectorVector
/// Size: 0x0000 (0x000050 - 0x000050)
struct FRigUnit_Subtract_VectorVector : FRigUnit_BinaryVectorOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_Divide_VectorVector
/// Size: 0x0000 (0x000050 - 0x000050)
struct FRigUnit_Divide_VectorVector : FRigUnit_BinaryVectorOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_Distance_VectorVector
/// Size: 0x0038 (0x000008 - 0x000040)
struct FRigUnit_Distance_VectorVector : FRigUnit
{ 
	FVector                                            Argument0;                                                  // 0x0008   (0x0018)  
	FVector                                            Argument1;                                                  // 0x0020   (0x0018)  
	float                                              Result;                                                     // 0x0038   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x003C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.AimTarget
/// Size: 0x0090 (0x000000 - 0x000090)
struct FAimTarget
{ 
	float                                              Weight;                                                     // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0xC];                                       // 0x0004   (0x000C)  MISSED
	FTransform                                         Transform;                                                  // 0x0010   (0x0060)  
	FVector                                            AlignVector;                                                // 0x0070   (0x0018)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0088   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_AimConstraint_WorkData
/// Size: 0x0010 (0x000000 - 0x000010)
struct FRigUnit_AimConstraint_WorkData
{ 
	TArray<FConstraintData>                            ConstraintData;                                             // 0x0000   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_AimConstraint
/// Size: 0x0070 (0x0001D0 - 0x000240)
struct FRigUnit_AimConstraint : FRigUnitMutable
{ 
	FName                                              Joint;                                                      // 0x01D0   (0x0004)  
	EAimMode                                           AimMode;                                                    // 0x01D4   (0x0001)  
	EAimMode                                           UpMode;                                                     // 0x01D5   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x01D6   (0x0002)  MISSED
	FVector                                            AimVector;                                                  // 0x01D8   (0x0018)  
	FVector                                            UpVector;                                                   // 0x01F0   (0x0018)  
	TArray<FAimTarget>                                 AimTargets;                                                 // 0x0208   (0x0010)  
	TArray<FAimTarget>                                 UpTargets;                                                  // 0x0218   (0x0010)  
	FRigUnit_AimConstraint_WorkData                    WorkData;                                                   // 0x0228   (0x0010)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0238   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_ApplyFK
/// Size: 0x00F0 (0x0001D0 - 0x0002C0)
struct FRigUnit_ApplyFK : FRigUnitMutable
{ 
	FName                                              Joint;                                                      // 0x01D0   (0x0004)  
	unsigned char                                      UnknownData00_5[0xC];                                       // 0x01D4   (0x000C)  MISSED
	FTransform                                         Transform;                                                  // 0x01E0   (0x0060)  
	FTransformFilter                                   Filter;                                                     // 0x0240   (0x0009)  
	EApplyTransformMode                                ApplyTransformMode;                                         // 0x0249   (0x0001)  
	ETransformSpaceMode                                ApplyTransformSpace;                                        // 0x024A   (0x0001)  
	unsigned char                                      UnknownData01_5[0x5];                                       // 0x024B   (0x0005)  MISSED
	FTransform                                         BaseTransform;                                              // 0x0250   (0x0060)  
	FName                                              BaseJoint;                                                  // 0x02B0   (0x0004)  
	unsigned char                                      UnknownData02_6[0xC];                                       // 0x02B4   (0x000C)  MISSED
};

/// Struct /Script/ControlRig.BlendTarget
/// Size: 0x0070 (0x000000 - 0x000070)
struct FBlendTarget
{ 
	FTransform                                         Transform;                                                  // 0x0000   (0x0060)  
	float                                              Weight;                                                     // 0x0060   (0x0004)  
	unsigned char                                      UnknownData00_6[0xC];                                       // 0x0064   (0x000C)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_BlendTransform
/// Size: 0x00D8 (0x000008 - 0x0000E0)
struct FRigUnit_BlendTransform : FRigUnit
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         Source;                                                     // 0x0010   (0x0060)  
	TArray<FBlendTarget>                               Targets;                                                    // 0x0070   (0x0010)  
	FTransform                                         Result;                                                     // 0x0080   (0x0060)  
};

/// Struct /Script/ControlRig.RigUnit_GetJointTransform
/// Size: 0x00E0 (0x0001D0 - 0x0002B0)
struct FRigUnit_GetJointTransform : FRigUnitMutable
{ 
	FName                                              Joint;                                                      // 0x01D0   (0x0004)  
	ETransformGetterType                               Type;                                                       // 0x01D4   (0x0001)  
	ETransformSpaceMode                                TransformSpace;                                             // 0x01D5   (0x0001)  
	unsigned char                                      UnknownData00_5[0xA];                                       // 0x01D6   (0x000A)  MISSED
	FTransform                                         BaseTransform;                                              // 0x01E0   (0x0060)  
	FName                                              BaseJoint;                                                  // 0x0240   (0x0004)  
	unsigned char                                      UnknownData01_5[0xC];                                       // 0x0244   (0x000C)  MISSED
	FTransform                                         Output;                                                     // 0x0250   (0x0060)  
};

/// Struct /Script/ControlRig.RigUnit_TwoBoneIKFK
/// Size: 0x0310 (0x0001D0 - 0x0004E0)
struct FRigUnit_TwoBoneIKFK : FRigUnitMutable
{ 
	FName                                              StartJoint;                                                 // 0x01D0   (0x0004)  
	FName                                              EndJoint;                                                   // 0x01D4   (0x0004)  
	FVector                                            PoleTarget;                                                 // 0x01D8   (0x0018)  
	float                                              Spin;                                                       // 0x01F0   (0x0004)  
	unsigned char                                      UnknownData00_5[0xC];                                       // 0x01F4   (0x000C)  MISSED
	FTransform                                         EndEffector;                                                // 0x0200   (0x0060)  
	float                                              IKBlend;                                                    // 0x0260   (0x0004)  
	unsigned char                                      UnknownData01_5[0xC];                                       // 0x0264   (0x000C)  MISSED
	FTransform                                         StartJointFKTransform;                                      // 0x0270   (0x0060)  
	FTransform                                         MidJointFKTransform;                                        // 0x02D0   (0x0060)  
	FTransform                                         EndJointFKTransform;                                        // 0x0330   (0x0060)  
	float                                              PreviousFKIKBlend;                                          // 0x0390   (0x0004)  
	unsigned char                                      UnknownData02_5[0xC];                                       // 0x0394   (0x000C)  MISSED
	FTransform                                         StartJointIKTransform;                                      // 0x03A0   (0x0060)  
	FTransform                                         MidJointIKTransform;                                        // 0x0400   (0x0060)  
	FTransform                                         EndJointIKTransform;                                        // 0x0460   (0x0060)  
	int32_t                                            StartJointIndex;                                            // 0x04C0   (0x0004)  
	int32_t                                            MidJointIndex;                                              // 0x04C4   (0x0004)  
	int32_t                                            EndJointIndex;                                              // 0x04C8   (0x0004)  
	float                                              UpperLimbLength;                                            // 0x04CC   (0x0004)  
	float                                              LowerLimbLength;                                            // 0x04D0   (0x0004)  
	bool                                               bIsInitialized;                                             // 0x04D4   (0x0001)  
	unsigned char                                      UnknownData03_6[0xB];                                       // 0x04D5   (0x000B)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_DrawContainerGetInstruction
/// Size: 0x0078 (0x000008 - 0x000080)
struct FRigUnit_DrawContainerGetInstruction : FRigUnit
{ 
	FName                                              InstructionName;                                            // 0x0008   (0x0004)  
	FLinearColor                                       Color;                                                      // 0x000C   (0x0010)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x001C   (0x0004)  MISSED
	FTransform                                         Transform;                                                  // 0x0020   (0x0060)  
};

/// Struct /Script/ControlRig.RigUnit_DrawContainerSetColor
/// Size: 0x0020 (0x0001D0 - 0x0001F0)
struct FRigUnit_DrawContainerSetColor : FRigUnitMutable
{ 
	FName                                              InstructionName;                                            // 0x01D0   (0x0004)  
	FLinearColor                                       Color;                                                      // 0x01D4   (0x0010)  
	unsigned char                                      UnknownData00_6[0xC];                                       // 0x01E4   (0x000C)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_DrawContainerSetThickness
/// Size: 0x0010 (0x0001D0 - 0x0001E0)
struct FRigUnit_DrawContainerSetThickness : FRigUnitMutable
{ 
	FName                                              InstructionName;                                            // 0x01D0   (0x0004)  
	float                                              Thickness;                                                  // 0x01D4   (0x0004)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x01D8   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_DrawContainerSetTransform
/// Size: 0x0070 (0x0001D0 - 0x000240)
struct FRigUnit_DrawContainerSetTransform : FRigUnitMutable
{ 
	FName                                              InstructionName;                                            // 0x01D0   (0x0004)  
	unsigned char                                      UnknownData00_5[0xC];                                       // 0x01D4   (0x000C)  MISSED
	FTransform                                         Transform;                                                  // 0x01E0   (0x0060)  
};

/// Struct /Script/ControlRig.RigUnit_BeginExecution
/// Size: 0x01C8 (0x000008 - 0x0001D0)
struct FRigUnit_BeginExecution : FRigUnit
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0008   (0x0008)  MISSED
	FControlRigExecuteContext                          ExecuteContext;                                             // 0x0010   (0x01C0)  
};

/// Struct /Script/ControlRig.RigUnit_PreBeginExecution
/// Size: 0x01C8 (0x000008 - 0x0001D0)
struct FRigUnit_PreBeginExecution : FRigUnit
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0008   (0x0008)  MISSED
	FControlRigExecuteContext                          ExecuteContext;                                             // 0x0010   (0x01C0)  
};

/// Struct /Script/ControlRig.RigUnit_PostBeginExecution
/// Size: 0x01C8 (0x000008 - 0x0001D0)
struct FRigUnit_PostBeginExecution : FRigUnit
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0008   (0x0008)  MISSED
	FControlRigExecuteContext                          ExecuteContext;                                             // 0x0010   (0x01C0)  
};

/// Struct /Script/ControlRig.RigUnit_CollectionBase
/// Size: 0x0000 (0x000008 - 0x000008)
struct FRigUnit_CollectionBase : FRigUnit
{ 
};

/// Struct /Script/ControlRig.RigUnit_CollectionBaseMutable
/// Size: 0x0000 (0x0001D0 - 0x0001D0)
struct FRigUnit_CollectionBaseMutable : FRigUnitMutable
{ 
};

/// Struct /Script/ControlRig.RigUnit_CollectionChain
/// Size: 0x0028 (0x000008 - 0x000030)
struct FRigUnit_CollectionChain : FRigUnit_CollectionBase
{ 
	FRigElementKey                                     FirstItem;                                                  // 0x0008   (0x0008)  
	FRigElementKey                                     LastItem;                                                   // 0x0010   (0x0008)  
	bool                                               Reverse;                                                    // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0019   (0x0007)  MISSED
	FRigElementKeyCollection                           Collection;                                                 // 0x0020   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_CollectionChainArray
/// Size: 0x0028 (0x000008 - 0x000030)
struct FRigUnit_CollectionChainArray : FRigUnit_CollectionBase
{ 
	FRigElementKey                                     FirstItem;                                                  // 0x0008   (0x0008)  
	FRigElementKey                                     LastItem;                                                   // 0x0010   (0x0008)  
	bool                                               Reverse;                                                    // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0019   (0x0007)  MISSED
	TArray<FRigElementKey>                             Items;                                                      // 0x0020   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_CollectionNameSearch
/// Size: 0x0018 (0x000008 - 0x000020)
struct FRigUnit_CollectionNameSearch : FRigUnit_CollectionBase
{ 
	FName                                              PartialName;                                                // 0x0008   (0x0004)  
	ERigElementType                                    TypeToSearch;                                               // 0x000C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x000D   (0x0003)  MISSED
	FRigElementKeyCollection                           Collection;                                                 // 0x0010   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_CollectionNameSearchArray
/// Size: 0x0018 (0x000008 - 0x000020)
struct FRigUnit_CollectionNameSearchArray : FRigUnit_CollectionBase
{ 
	FName                                              PartialName;                                                // 0x0008   (0x0004)  
	ERigElementType                                    TypeToSearch;                                               // 0x000C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x000D   (0x0003)  MISSED
	TArray<FRigElementKey>                             Items;                                                      // 0x0010   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_CollectionChildren
/// Size: 0x0020 (0x000008 - 0x000028)
struct FRigUnit_CollectionChildren : FRigUnit_CollectionBase
{ 
	FRigElementKey                                     Parent;                                                     // 0x0008   (0x0008)  
	bool                                               bIncludeParent;                                             // 0x0010   (0x0001)  
	bool                                               bRecursive;                                                 // 0x0011   (0x0001)  
	ERigElementType                                    TypeToSearch;                                               // 0x0012   (0x0001)  
	unsigned char                                      UnknownData00_5[0x5];                                       // 0x0013   (0x0005)  MISSED
	FRigElementKeyCollection                           Collection;                                                 // 0x0018   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_CollectionChildrenArray
/// Size: 0x0020 (0x000008 - 0x000028)
struct FRigUnit_CollectionChildrenArray : FRigUnit_CollectionBase
{ 
	FRigElementKey                                     Parent;                                                     // 0x0008   (0x0008)  
	bool                                               bIncludeParent;                                             // 0x0010   (0x0001)  
	bool                                               bRecursive;                                                 // 0x0011   (0x0001)  
	ERigElementType                                    TypeToSearch;                                               // 0x0012   (0x0001)  
	unsigned char                                      UnknownData00_5[0x5];                                       // 0x0013   (0x0005)  MISSED
	TArray<FRigElementKey>                             Items;                                                      // 0x0018   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_CollectionGetAll
/// Size: 0x0018 (0x000008 - 0x000020)
struct FRigUnit_CollectionGetAll : FRigUnit_CollectionBase
{ 
	ERigElementType                                    TypeToSearch;                                               // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0009   (0x0007)  MISSED
	TArray<FRigElementKey>                             Items;                                                      // 0x0010   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_CollectionReplaceItems
/// Size: 0x0030 (0x000008 - 0x000038)
struct FRigUnit_CollectionReplaceItems : FRigUnit_CollectionBase
{ 
	FRigElementKeyCollection                           Items;                                                      // 0x0008   (0x0010)  
	FName                                              Old;                                                        // 0x0018   (0x0004)  
	FName                                              New;                                                        // 0x001C   (0x0004)  
	bool                                               RemoveInvalidItems;                                         // 0x0020   (0x0001)  
	bool                                               bAllowDuplicates;                                           // 0x0021   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x0022   (0x0006)  MISSED
	FRigElementKeyCollection                           Collection;                                                 // 0x0028   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_CollectionReplaceItemsArray
/// Size: 0x0030 (0x000008 - 0x000038)
struct FRigUnit_CollectionReplaceItemsArray : FRigUnit_CollectionBase
{ 
	TArray<FRigElementKey>                             Items;                                                      // 0x0008   (0x0010)  
	FName                                              Old;                                                        // 0x0018   (0x0004)  
	FName                                              New;                                                        // 0x001C   (0x0004)  
	bool                                               RemoveInvalidItems;                                         // 0x0020   (0x0001)  
	bool                                               bAllowDuplicates;                                           // 0x0021   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x0022   (0x0006)  MISSED
	TArray<FRigElementKey>                             Result;                                                     // 0x0028   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_CollectionItems
/// Size: 0x0028 (0x000008 - 0x000030)
struct FRigUnit_CollectionItems : FRigUnit_CollectionBase
{ 
	TArray<FRigElementKey>                             Items;                                                      // 0x0008   (0x0010)  
	bool                                               bAllowDuplicates;                                           // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0019   (0x0007)  MISSED
	FRigElementKeyCollection                           Collection;                                                 // 0x0020   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_CollectionGetItems
/// Size: 0x0020 (0x000008 - 0x000028)
struct FRigUnit_CollectionGetItems : FRigUnit_CollectionBase
{ 
	FRigElementKeyCollection                           Collection;                                                 // 0x0008   (0x0010)  
	TArray<FRigElementKey>                             Items;                                                      // 0x0018   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_CollectionGetParentIndices
/// Size: 0x0020 (0x000008 - 0x000028)
struct FRigUnit_CollectionGetParentIndices : FRigUnit_CollectionBase
{ 
	FRigElementKeyCollection                           Collection;                                                 // 0x0008   (0x0010)  
	TArray<int32_t>                                    ParentIndices;                                              // 0x0018   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_CollectionGetParentIndicesItemArray
/// Size: 0x0020 (0x000008 - 0x000028)
struct FRigUnit_CollectionGetParentIndicesItemArray : FRigUnit_CollectionBase
{ 
	TArray<FRigElementKey>                             Items;                                                      // 0x0008   (0x0010)  
	TArray<int32_t>                                    ParentIndices;                                              // 0x0018   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_CollectionUnion
/// Size: 0x0038 (0x000008 - 0x000040)
struct FRigUnit_CollectionUnion : FRigUnit_CollectionBase
{ 
	FRigElementKeyCollection                           A;                                                          // 0x0008   (0x0010)  
	FRigElementKeyCollection                           B;                                                          // 0x0018   (0x0010)  
	bool                                               bAllowDuplicates;                                           // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0029   (0x0007)  MISSED
	FRigElementKeyCollection                           Collection;                                                 // 0x0030   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_CollectionIntersection
/// Size: 0x0030 (0x000008 - 0x000038)
struct FRigUnit_CollectionIntersection : FRigUnit_CollectionBase
{ 
	FRigElementKeyCollection                           A;                                                          // 0x0008   (0x0010)  
	FRigElementKeyCollection                           B;                                                          // 0x0018   (0x0010)  
	FRigElementKeyCollection                           Collection;                                                 // 0x0028   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_CollectionDifference
/// Size: 0x0030 (0x000008 - 0x000038)
struct FRigUnit_CollectionDifference : FRigUnit_CollectionBase
{ 
	FRigElementKeyCollection                           A;                                                          // 0x0008   (0x0010)  
	FRigElementKeyCollection                           B;                                                          // 0x0018   (0x0010)  
	FRigElementKeyCollection                           Collection;                                                 // 0x0028   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_CollectionReverse
/// Size: 0x0020 (0x000008 - 0x000028)
struct FRigUnit_CollectionReverse : FRigUnit_CollectionBase
{ 
	FRigElementKeyCollection                           Collection;                                                 // 0x0008   (0x0010)  
	FRigElementKeyCollection                           Reversed;                                                   // 0x0018   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_CollectionCount
/// Size: 0x0018 (0x000008 - 0x000020)
struct FRigUnit_CollectionCount : FRigUnit_CollectionBase
{ 
	FRigElementKeyCollection                           Collection;                                                 // 0x0008   (0x0010)  
	int32_t                                            Count;                                                      // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_CollectionItemAtIndex
/// Size: 0x0020 (0x000008 - 0x000028)
struct FRigUnit_CollectionItemAtIndex : FRigUnit_CollectionBase
{ 
	FRigElementKeyCollection                           Collection;                                                 // 0x0008   (0x0010)  
	int32_t                                            Index;                                                      // 0x0018   (0x0004)  
	FRigElementKey                                     Item;                                                       // 0x001C   (0x0008)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_CollectionLoop
/// Size: 0x01F0 (0x0001D0 - 0x0003C0)
struct FRigUnit_CollectionLoop : FRigUnit_CollectionBaseMutable
{ 
	FName                                              BlockToRun;                                                 // 0x01D0   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x01D4   (0x0004)  MISSED
	FRigElementKeyCollection                           Collection;                                                 // 0x01D8   (0x0010)  
	FRigElementKey                                     Item;                                                       // 0x01E8   (0x0008)  
	int32_t                                            Index;                                                      // 0x01F0   (0x0004)  
	int32_t                                            Count;                                                      // 0x01F4   (0x0004)  
	float                                              Ratio;                                                      // 0x01F8   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x01FC   (0x0004)  MISSED
	FControlRigExecuteContext                          Completed;                                                  // 0x0200   (0x01C0)  
};

/// Struct /Script/ControlRig.RigUnit_CollectionAddItem
/// Size: 0x0028 (0x000008 - 0x000030)
struct FRigUnit_CollectionAddItem : FRigUnit_CollectionBase
{ 
	FRigElementKeyCollection                           Collection;                                                 // 0x0008   (0x0010)  
	FRigElementKey                                     Item;                                                       // 0x0018   (0x0008)  
	FRigElementKeyCollection                           Result;                                                     // 0x0020   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_DynamicHierarchyBase
/// Size: 0x0000 (0x000008 - 0x000008)
struct FRigUnit_DynamicHierarchyBase : FRigUnit
{ 
};

/// Struct /Script/ControlRig.RigUnit_DynamicHierarchyBaseMutable
/// Size: 0x0000 (0x0001D0 - 0x0001D0)
struct FRigUnit_DynamicHierarchyBaseMutable : FRigUnitMutable
{ 
};

/// Struct /Script/ControlRig.RigUnit_AddParent
/// Size: 0x0010 (0x0001D0 - 0x0001E0)
struct FRigUnit_AddParent : FRigUnit_DynamicHierarchyBaseMutable
{ 
	FRigElementKey                                     Child;                                                      // 0x01D0   (0x0008)  
	FRigElementKey                                     Parent;                                                     // 0x01D8   (0x0008)  
};

/// Struct /Script/ControlRig.RigUnit_SetDefaultParent
/// Size: 0x0010 (0x0001D0 - 0x0001E0)
struct FRigUnit_SetDefaultParent : FRigUnit_DynamicHierarchyBaseMutable
{ 
	FRigElementKey                                     Child;                                                      // 0x01D0   (0x0008)  
	FRigElementKey                                     Parent;                                                     // 0x01D8   (0x0008)  
};

/// Struct /Script/ControlRig.RigUnit_SwitchParent
/// Size: 0x0020 (0x0001D0 - 0x0001F0)
struct FRigUnit_SwitchParent : FRigUnit_DynamicHierarchyBaseMutable
{ 
	ERigSwitchParentMode                               Mode;                                                       // 0x01D0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x01D1   (0x0003)  MISSED
	FRigElementKey                                     Child;                                                      // 0x01D4   (0x0008)  
	FRigElementKey                                     Parent;                                                     // 0x01DC   (0x0008)  
	bool                                               bMaintainGlobal;                                            // 0x01E4   (0x0001)  
	unsigned char                                      UnknownData01_6[0xB];                                       // 0x01E5   (0x000B)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_HierarchyGetParentWeights
/// Size: 0x0028 (0x000008 - 0x000030)
struct FRigUnit_HierarchyGetParentWeights : FRigUnit_DynamicHierarchyBase
{ 
	FRigElementKey                                     Child;                                                      // 0x0008   (0x0008)  
	TArray<FRigElementWeight>                          Weights;                                                    // 0x0010   (0x0010)  
	FRigElementKeyCollection                           Parents;                                                    // 0x0020   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_HierarchyGetParentWeightsArray
/// Size: 0x0028 (0x000008 - 0x000030)
struct FRigUnit_HierarchyGetParentWeightsArray : FRigUnit_DynamicHierarchyBase
{ 
	FRigElementKey                                     Child;                                                      // 0x0008   (0x0008)  
	TArray<FRigElementWeight>                          Weights;                                                    // 0x0010   (0x0010)  
	TArray<FRigElementKey>                             Parents;                                                    // 0x0020   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_HierarchySetParentWeights
/// Size: 0x0020 (0x0001D0 - 0x0001F0)
struct FRigUnit_HierarchySetParentWeights : FRigUnit_DynamicHierarchyBaseMutable
{ 
	FRigElementKey                                     Child;                                                      // 0x01D0   (0x0008)  
	TArray<FRigElementWeight>                          Weights;                                                    // 0x01D8   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x01E8   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_HierarchyReset
/// Size: 0x0000 (0x0001D0 - 0x0001D0)
struct FRigUnit_HierarchyReset : FRigUnit_DynamicHierarchyBaseMutable
{ 
};

/// Struct /Script/ControlRig.RigUnit_HierarchyImportFromSkeleton
/// Size: 0x0020 (0x0001D0 - 0x0001F0)
struct FRigUnit_HierarchyImportFromSkeleton : FRigUnit_DynamicHierarchyBaseMutable
{ 
	FName                                              NameSpace;                                                  // 0x01D0   (0x0004)  
	bool                                               bIncludeCurves;                                             // 0x01D4   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x01D5   (0x0003)  MISSED
	TArray<FRigElementKey>                             Items;                                                      // 0x01D8   (0x0010)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x01E8   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_HierarchyRemoveElement
/// Size: 0x0010 (0x0001D0 - 0x0001E0)
struct FRigUnit_HierarchyRemoveElement : FRigUnit_DynamicHierarchyBaseMutable
{ 
	FRigElementKey                                     Item;                                                       // 0x01D0   (0x0008)  
	bool                                               bSuccess;                                                   // 0x01D8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x01D9   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddElement
/// Size: 0x0020 (0x0001D0 - 0x0001F0)
#pragma pack(push, 0x1)
struct alignas(0x10) FRigUnit_HierarchyAddElement : FRigUnit_DynamicHierarchyBaseMutable
{ 
	FRigElementKey                                     Parent;                                                     // 0x01D0   (0x0008)  
	FName                                              Name;                                                       // 0x01D8   (0x0004)  
	FRigElementKey                                     Item;                                                       // 0x01DC   (0x0008)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x01E4   (0x0004)  MISSED
};
#pragma pack(pop)

/// Struct /Script/ControlRig.RigUnit_HierarchyAddBone
/// Size: 0x0070 (0x0001F0 - 0x000260)
struct FRigUnit_HierarchyAddBone : FRigUnit_HierarchyAddElement
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x01E8   (0x0008)  MISSED
	FTransform                                         Transform;                                                  // 0x01F0   (0x0060)  
	ERigVMTransformSpace                               Space;                                                      // 0x0250   (0x0001)  
	unsigned char                                      UnknownData01_6[0xF];                                       // 0x0251   (0x000F)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddNull
/// Size: 0x0070 (0x0001F0 - 0x000260)
struct FRigUnit_HierarchyAddNull : FRigUnit_HierarchyAddElement
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x01E8   (0x0008)  MISSED
	FTransform                                         Transform;                                                  // 0x01F0   (0x0060)  
	ERigVMTransformSpace                               Space;                                                      // 0x0250   (0x0001)  
	unsigned char                                      UnknownData01_6[0xF];                                       // 0x0251   (0x000F)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddControl_Settings
/// Size: 0x0010 (0x000000 - 0x000010)
struct FRigUnit_HierarchyAddControl_Settings
{ 
	FName                                              DisplayName;                                                // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddControl_ShapeSettings
/// Size: 0x0080 (0x000000 - 0x000080)
struct FRigUnit_HierarchyAddControl_ShapeSettings
{ 
	bool                                               bVisible;                                                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	FName                                              Name;                                                       // 0x0004   (0x0004)  
	FLinearColor                                       Color;                                                      // 0x0008   (0x0010)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x0018   (0x0008)  MISSED
	FTransform                                         Transform;                                                  // 0x0020   (0x0060)  
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddControl_ProxySettings
/// Size: 0x0020 (0x000000 - 0x000020)
struct FRigUnit_HierarchyAddControl_ProxySettings
{ 
	bool                                               bIsProxy;                                                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	TArray<FRigElementKey>                             DrivenControls;                                             // 0x0008   (0x0010)  
	ERigControlVisibility                              ShapeVisibility;                                            // 0x0018   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0019   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddControlFloat_LimitSettings
/// Size: 0x0010 (0x000000 - 0x000010)
struct FRigUnit_HierarchyAddControlFloat_LimitSettings
{ 
	FRigControlLimitEnabled                            Limit;                                                      // 0x0000   (0x0002)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0002   (0x0002)  MISSED
	float                                              MinValue;                                                   // 0x0004   (0x0004)  
	float                                              MaxValue;                                                   // 0x0008   (0x0004)  
	bool                                               bDrawLimits;                                                // 0x000C   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x000D   (0x0003)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddControlFloat_Settings
/// Size: 0x00C0 (0x000010 - 0x0000D0)
struct FRigUnit_HierarchyAddControlFloat_Settings : FRigUnit_HierarchyAddControl_Settings
{ 
	ERigControlAxis                                    PrimaryAxis;                                                // 0x0010   (0x0001)  
	bool                                               bIsScale;                                                   // 0x0011   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0012   (0x0002)  MISSED
	FRigUnit_HierarchyAddControlFloat_LimitSettings    Limits;                                                     // 0x0014   (0x0010)  
	unsigned char                                      UnknownData01_5[0xC];                                       // 0x0024   (0x000C)  MISSED
	FRigUnit_HierarchyAddControl_ShapeSettings         Shape;                                                      // 0x0030   (0x0080)  
	FRigUnit_HierarchyAddControl_ProxySettings         Proxy;                                                      // 0x00B0   (0x0020)  
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddControlElement
/// Size: 0x0070 (0x0001F0 - 0x000260)
#pragma pack(push, 0x1)
struct alignas(0x10) FRigUnit_HierarchyAddControlElement : FRigUnit_HierarchyAddElement
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x01E8   (0x0008)  MISSED
	FTransform                                         OffsetTransform;                                            // 0x01F0   (0x0060)  
	ERigVMTransformSpace                               OffsetSpace;                                                // 0x0250   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0251   (0x0007)  MISSED
};
#pragma pack(pop)

/// Struct /Script/ControlRig.RigUnit_HierarchyAddControlFloat
/// Size: 0x00D0 (0x000260 - 0x000330)
struct FRigUnit_HierarchyAddControlFloat : FRigUnit_HierarchyAddControlElement
{ 
	float                                              InitialValue;                                               // 0x0258   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x025C   (0x0004)  MISSED
	FRigUnit_HierarchyAddControlFloat_Settings         Settings;                                                   // 0x0260   (0x00D0)  
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddControlInteger_LimitSettings
/// Size: 0x0010 (0x000000 - 0x000010)
struct FRigUnit_HierarchyAddControlInteger_LimitSettings
{ 
	FRigControlLimitEnabled                            Limit;                                                      // 0x0000   (0x0002)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0002   (0x0002)  MISSED
	int32_t                                            MinValue;                                                   // 0x0004   (0x0004)  
	int32_t                                            MaxValue;                                                   // 0x0008   (0x0004)  
	bool                                               bDrawLimits;                                                // 0x000C   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x000D   (0x0003)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddControlInteger_Settings
/// Size: 0x00C0 (0x000010 - 0x0000D0)
struct FRigUnit_HierarchyAddControlInteger_Settings : FRigUnit_HierarchyAddControl_Settings
{ 
	ERigControlAxis                                    PrimaryAxis;                                                // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0011   (0x0007)  MISSED
	class UEnum*                                       ControlEnum;                                                // 0x0018   (0x0008)  
	FRigUnit_HierarchyAddControlInteger_LimitSettings  Limits;                                                     // 0x0020   (0x0010)  
	FRigUnit_HierarchyAddControl_ShapeSettings         Shape;                                                      // 0x0030   (0x0080)  
	FRigUnit_HierarchyAddControl_ProxySettings         Proxy;                                                      // 0x00B0   (0x0020)  
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddControlInteger
/// Size: 0x00D0 (0x000260 - 0x000330)
struct FRigUnit_HierarchyAddControlInteger : FRigUnit_HierarchyAddControlElement
{ 
	int32_t                                            InitialValue;                                               // 0x0258   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x025C   (0x0004)  MISSED
	FRigUnit_HierarchyAddControlInteger_Settings       Settings;                                                   // 0x0260   (0x00D0)  
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddControlVector2D_LimitSettings
/// Size: 0x0030 (0x000000 - 0x000030)
struct FRigUnit_HierarchyAddControlVector2D_LimitSettings
{ 
	FRigControlLimitEnabled                            LimitX;                                                     // 0x0000   (0x0002)  
	FRigControlLimitEnabled                            LimitY;                                                     // 0x0002   (0x0002)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	FVector2D                                          MinValue;                                                   // 0x0008   (0x0010)  
	FVector2D                                          MaxValue;                                                   // 0x0018   (0x0010)  
	bool                                               bDrawLimits;                                                // 0x0028   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0029   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddControlVector2D_Settings
/// Size: 0x00F0 (0x000010 - 0x000100)
struct FRigUnit_HierarchyAddControlVector2D_Settings : FRigUnit_HierarchyAddControl_Settings
{ 
	ERigControlAxis                                    PrimaryAxis;                                                // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0011   (0x0007)  MISSED
	FRigUnit_HierarchyAddControlVector2D_LimitSettings Limits;                                                     // 0x0018   (0x0030)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x0048   (0x0008)  MISSED
	FRigUnit_HierarchyAddControl_ShapeSettings         Shape;                                                      // 0x0050   (0x0080)  
	FRigUnit_HierarchyAddControl_ProxySettings         Proxy;                                                      // 0x00D0   (0x0020)  
	TArray<ERigControlTransformChannel>                FilteredChannels;                                           // 0x00F0   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddControlVector2D
/// Size: 0x0110 (0x000260 - 0x000370)
struct FRigUnit_HierarchyAddControlVector2D : FRigUnit_HierarchyAddControlElement
{ 
	FVector2D                                          InitialValue;                                               // 0x0258   (0x0010)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0268   (0x0008)  MISSED
	FRigUnit_HierarchyAddControlVector2D_Settings      Settings;                                                   // 0x0270   (0x0100)  
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddControlVector_LimitSettings
/// Size: 0x0040 (0x000000 - 0x000040)
struct FRigUnit_HierarchyAddControlVector_LimitSettings
{ 
	FRigControlLimitEnabled                            LimitX;                                                     // 0x0000   (0x0002)  
	FRigControlLimitEnabled                            LimitY;                                                     // 0x0002   (0x0002)  
	FRigControlLimitEnabled                            LimitZ;                                                     // 0x0004   (0x0002)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0006   (0x0002)  MISSED
	FVector                                            MinValue;                                                   // 0x0008   (0x0018)  
	FVector                                            MaxValue;                                                   // 0x0020   (0x0018)  
	bool                                               bDrawLimits;                                                // 0x0038   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0039   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddControlVector_Settings
/// Size: 0x0100 (0x000010 - 0x000110)
struct FRigUnit_HierarchyAddControlVector_Settings : FRigUnit_HierarchyAddControl_Settings
{ 
	ERigVMTransformSpace                               InitialSpace;                                               // 0x0010   (0x0001)  
	bool                                               bIsPosition;                                                // 0x0011   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x0012   (0x0006)  MISSED
	FRigUnit_HierarchyAddControlVector_LimitSettings   Limits;                                                     // 0x0018   (0x0040)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x0058   (0x0008)  MISSED
	FRigUnit_HierarchyAddControl_ShapeSettings         Shape;                                                      // 0x0060   (0x0080)  
	FRigUnit_HierarchyAddControl_ProxySettings         Proxy;                                                      // 0x00E0   (0x0020)  
	TArray<ERigControlTransformChannel>                FilteredChannels;                                           // 0x0100   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddControlVector
/// Size: 0x0120 (0x000260 - 0x000380)
struct FRigUnit_HierarchyAddControlVector : FRigUnit_HierarchyAddControlElement
{ 
	FVector                                            InitialValue;                                               // 0x0258   (0x0018)  
	FRigUnit_HierarchyAddControlVector_Settings        Settings;                                                   // 0x0270   (0x0110)  
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddControlRotator_LimitSettings
/// Size: 0x0040 (0x000000 - 0x000040)
struct FRigUnit_HierarchyAddControlRotator_LimitSettings
{ 
	FRigControlLimitEnabled                            LimitPitch;                                                 // 0x0000   (0x0002)  
	FRigControlLimitEnabled                            LimitYaw;                                                   // 0x0002   (0x0002)  
	FRigControlLimitEnabled                            LimitRoll;                                                  // 0x0004   (0x0002)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0006   (0x0002)  MISSED
	FRotator                                           MinValue;                                                   // 0x0008   (0x0018)  
	FRotator                                           MaxValue;                                                   // 0x0020   (0x0018)  
	bool                                               bDrawLimits;                                                // 0x0038   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0039   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddControlRotator_Settings
/// Size: 0x0100 (0x000010 - 0x000110)
struct FRigUnit_HierarchyAddControlRotator_Settings : FRigUnit_HierarchyAddControl_Settings
{ 
	ERigVMTransformSpace                               InitialSpace;                                               // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0011   (0x0007)  MISSED
	FRigUnit_HierarchyAddControlRotator_LimitSettings  Limits;                                                     // 0x0018   (0x0040)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x0058   (0x0008)  MISSED
	FRigUnit_HierarchyAddControl_ShapeSettings         Shape;                                                      // 0x0060   (0x0080)  
	FRigUnit_HierarchyAddControl_ProxySettings         Proxy;                                                      // 0x00E0   (0x0020)  
	TArray<ERigControlTransformChannel>                FilteredChannels;                                           // 0x0100   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddControlRotator
/// Size: 0x0120 (0x000260 - 0x000380)
struct FRigUnit_HierarchyAddControlRotator : FRigUnit_HierarchyAddControlElement
{ 
	FRotator                                           InitialValue;                                               // 0x0258   (0x0018)  
	FRigUnit_HierarchyAddControlRotator_Settings       Settings;                                                   // 0x0270   (0x0110)  
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddControlTransform_LimitSettings
/// Size: 0x00B0 (0x000000 - 0x0000B0)
struct FRigUnit_HierarchyAddControlTransform_LimitSettings
{ 
	FRigControlLimitEnabled                            LimitTranslationX;                                          // 0x0000   (0x0002)  
	FRigControlLimitEnabled                            LimitTranslationY;                                          // 0x0002   (0x0002)  
	FRigControlLimitEnabled                            LimitTranslationZ;                                          // 0x0004   (0x0002)  
	FRigControlLimitEnabled                            LimitPitch;                                                 // 0x0006   (0x0002)  
	FRigControlLimitEnabled                            LimitYaw;                                                   // 0x0008   (0x0002)  
	FRigControlLimitEnabled                            LimitRoll;                                                  // 0x000A   (0x0002)  
	FRigControlLimitEnabled                            LimitScaleX;                                                // 0x000C   (0x0002)  
	FRigControlLimitEnabled                            LimitScaleY;                                                // 0x000E   (0x0002)  
	FRigControlLimitEnabled                            LimitScaleZ;                                                // 0x0010   (0x0002)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x0012   (0x0006)  MISSED
	FEulerTransform                                    MinValue;                                                   // 0x0018   (0x0048)  
	FEulerTransform                                    MaxValue;                                                   // 0x0060   (0x0048)  
	bool                                               bDrawLimits;                                                // 0x00A8   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x00A9   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddControlTransform_Settings
/// Size: 0x0170 (0x000010 - 0x000180)
struct FRigUnit_HierarchyAddControlTransform_Settings : FRigUnit_HierarchyAddControl_Settings
{ 
	ERigVMTransformSpace                               InitialSpace;                                               // 0x0010   (0x0001)  
	bool                                               bUsePreferredRotationOrder;                                 // 0x0011   (0x0001)  
	EEulerRotationOrder                                PreferredRotationOrder;                                     // 0x0012   (0x0001)  
	unsigned char                                      UnknownData00_5[0x5];                                       // 0x0013   (0x0005)  MISSED
	FRigUnit_HierarchyAddControlTransform_LimitSettings Limits;                                                    // 0x0018   (0x00B0)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x00C8   (0x0008)  MISSED
	FRigUnit_HierarchyAddControl_ShapeSettings         Shape;                                                      // 0x00D0   (0x0080)  
	FRigUnit_HierarchyAddControl_ProxySettings         Proxy;                                                      // 0x0150   (0x0020)  
	TArray<ERigControlTransformChannel>                FilteredChannels;                                           // 0x0170   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddControlTransform
/// Size: 0x01E0 (0x000260 - 0x000440)
struct FRigUnit_HierarchyAddControlTransform : FRigUnit_HierarchyAddControlElement
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0258   (0x0008)  MISSED
	FTransform                                         InitialValue;                                               // 0x0260   (0x0060)  
	FRigUnit_HierarchyAddControlTransform_Settings     Settings;                                                   // 0x02C0   (0x0180)  
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddAnimationChannelEmptyLimitSettings
/// Size: 0x0001 (0x000000 - 0x000001)
struct FRigUnit_HierarchyAddAnimationChannelEmptyLimitSettings
{ 
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddAnimationChannelBool
/// Size: 0x0000 (0x0001F0 - 0x0001F0)
struct FRigUnit_HierarchyAddAnimationChannelBool : FRigUnit_HierarchyAddElement
{ 
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddAnimationChannelSingleLimitSettings
/// Size: 0x0001 (0x000001 - 0x000002)
struct FRigUnit_HierarchyAddAnimationChannelSingleLimitSettings : FRigUnit_HierarchyAddAnimationChannelEmptyLimitSettings
{ 
	FRigControlLimitEnabled                            Enabled;                                                    // 0x0000   (0x0002)  
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddAnimationChannelFloat
/// Size: 0x0010 (0x0001F0 - 0x000200)
struct FRigUnit_HierarchyAddAnimationChannelFloat : FRigUnit_HierarchyAddElement
{ 
	float                                              InitialValue;                                               // 0x01E8   (0x0004)  
	float                                              MinimumValue;                                               // 0x01EC   (0x0004)  
	float                                              MaximumValue;                                               // 0x01F0   (0x0004)  
	FRigUnit_HierarchyAddAnimationChannelSingleLimitSettings LimitsEnabled;                                        // 0x01F4   (0x0002)  
	unsigned char                                      UnknownData00_6[0xA];                                       // 0x01F6   (0x000A)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddAnimationChannelScaleFloat
/// Size: 0x0010 (0x0001F0 - 0x000200)
struct FRigUnit_HierarchyAddAnimationChannelScaleFloat : FRigUnit_HierarchyAddElement
{ 
	float                                              InitialValue;                                               // 0x01E8   (0x0004)  
	float                                              MinimumValue;                                               // 0x01EC   (0x0004)  
	float                                              MaximumValue;                                               // 0x01F0   (0x0004)  
	FRigUnit_HierarchyAddAnimationChannelSingleLimitSettings LimitsEnabled;                                        // 0x01F4   (0x0002)  
	unsigned char                                      UnknownData00_6[0xA];                                       // 0x01F6   (0x000A)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddAnimationChannelInteger
/// Size: 0x0010 (0x0001F0 - 0x000200)
struct FRigUnit_HierarchyAddAnimationChannelInteger : FRigUnit_HierarchyAddElement
{ 
	int32_t                                            InitialValue;                                               // 0x01E8   (0x0004)  
	int32_t                                            MinimumValue;                                               // 0x01EC   (0x0004)  
	int32_t                                            MaximumValue;                                               // 0x01F0   (0x0004)  
	FRigUnit_HierarchyAddAnimationChannelSingleLimitSettings LimitsEnabled;                                        // 0x01F4   (0x0002)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x01F6   (0x0002)  MISSED
	class UEnum*                                       ControlEnum;                                                // 0x01F8   (0x0008)  
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddAnimationChannel2DLimitSettings
/// Size: 0x0003 (0x000001 - 0x000004)
struct FRigUnit_HierarchyAddAnimationChannel2DLimitSettings : FRigUnit_HierarchyAddAnimationChannelEmptyLimitSettings
{ 
	FRigControlLimitEnabled                            X;                                                          // 0x0000   (0x0002)  
	FRigControlLimitEnabled                            Y;                                                          // 0x0002   (0x0002)  
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddAnimationChannelVector2D
/// Size: 0x0030 (0x0001F0 - 0x000220)
struct FRigUnit_HierarchyAddAnimationChannelVector2D : FRigUnit_HierarchyAddElement
{ 
	FVector2D                                          InitialValue;                                               // 0x01E8   (0x0010)  
	FVector2D                                          MinimumValue;                                               // 0x01F8   (0x0010)  
	FVector2D                                          MaximumValue;                                               // 0x0208   (0x0010)  
	FRigUnit_HierarchyAddAnimationChannel2DLimitSettings LimitsEnabled;                                            // 0x0218   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x021C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddAnimationChannelVectorLimitSettings
/// Size: 0x0005 (0x000001 - 0x000006)
struct FRigUnit_HierarchyAddAnimationChannelVectorLimitSettings : FRigUnit_HierarchyAddAnimationChannelEmptyLimitSettings
{ 
	FRigControlLimitEnabled                            X;                                                          // 0x0000   (0x0002)  
	FRigControlLimitEnabled                            Y;                                                          // 0x0002   (0x0002)  
	FRigControlLimitEnabled                            Z;                                                          // 0x0004   (0x0002)  
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddAnimationChannelVector
/// Size: 0x0050 (0x0001F0 - 0x000240)
struct FRigUnit_HierarchyAddAnimationChannelVector : FRigUnit_HierarchyAddElement
{ 
	FVector                                            InitialValue;                                               // 0x01E8   (0x0018)  
	FVector                                            MinimumValue;                                               // 0x0200   (0x0018)  
	FVector                                            MaximumValue;                                               // 0x0218   (0x0018)  
	FRigUnit_HierarchyAddAnimationChannelVectorLimitSettings LimitsEnabled;                                        // 0x0230   (0x0006)  
	unsigned char                                      UnknownData00_6[0xA];                                       // 0x0236   (0x000A)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddAnimationChannelScaleVector
/// Size: 0x0050 (0x0001F0 - 0x000240)
struct FRigUnit_HierarchyAddAnimationChannelScaleVector : FRigUnit_HierarchyAddElement
{ 
	FVector                                            InitialValue;                                               // 0x01E8   (0x0018)  
	FVector                                            MinimumValue;                                               // 0x0200   (0x0018)  
	FVector                                            MaximumValue;                                               // 0x0218   (0x0018)  
	FRigUnit_HierarchyAddAnimationChannelVectorLimitSettings LimitsEnabled;                                        // 0x0230   (0x0006)  
	unsigned char                                      UnknownData00_6[0xA];                                       // 0x0236   (0x000A)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddAnimationChannelRotatorLimitSettings
/// Size: 0x0005 (0x000001 - 0x000006)
struct FRigUnit_HierarchyAddAnimationChannelRotatorLimitSettings : FRigUnit_HierarchyAddAnimationChannelEmptyLimitSettings
{ 
	FRigControlLimitEnabled                            pitch;                                                      // 0x0000   (0x0002)  
	FRigControlLimitEnabled                            Yaw;                                                        // 0x0002   (0x0002)  
	FRigControlLimitEnabled                            Roll;                                                       // 0x0004   (0x0002)  
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddAnimationChannelRotator
/// Size: 0x0050 (0x0001F0 - 0x000240)
struct FRigUnit_HierarchyAddAnimationChannelRotator : FRigUnit_HierarchyAddElement
{ 
	FRotator                                           InitialValue;                                               // 0x01E8   (0x0018)  
	FRotator                                           MinimumValue;                                               // 0x0200   (0x0018)  
	FRotator                                           MaximumValue;                                               // 0x0218   (0x0018)  
	FRigUnit_HierarchyAddAnimationChannelRotatorLimitSettings LimitsEnabled;                                       // 0x0230   (0x0006)  
	unsigned char                                      UnknownData00_6[0xA];                                       // 0x0236   (0x000A)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_HierarchyGetShapeSettings
/// Size: 0x0088 (0x000008 - 0x000090)
struct FRigUnit_HierarchyGetShapeSettings : FRigUnit_DynamicHierarchyBase
{ 
	FRigElementKey                                     Item;                                                       // 0x0008   (0x0008)  
	FRigUnit_HierarchyAddControl_ShapeSettings         Settings;                                                   // 0x0010   (0x0080)  
};

/// Struct /Script/ControlRig.RigUnit_HierarchySetShapeSettings
/// Size: 0x0090 (0x0001D0 - 0x000260)
struct FRigUnit_HierarchySetShapeSettings : FRigUnit_DynamicHierarchyBaseMutable
{ 
	FRigElementKey                                     Item;                                                       // 0x01D0   (0x0008)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x01D8   (0x0008)  MISSED
	FRigUnit_HierarchyAddControl_ShapeSettings         Settings;                                                   // 0x01E0   (0x0080)  
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddSocket
/// Size: 0x0090 (0x0001F0 - 0x000280)
struct FRigUnit_HierarchyAddSocket : FRigUnit_HierarchyAddElement
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x01E8   (0x0008)  MISSED
	FTransform                                         Transform;                                                  // 0x01F0   (0x0060)  
	ERigVMTransformSpace                               Space;                                                      // 0x0250   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0251   (0x0003)  MISSED
	FLinearColor                                       Color;                                                      // 0x0254   (0x0010)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x0264   (0x0004)  MISSED
	SDK_UNDEFINED(16,12559) /* FString */              __um(Description);                                          // 0x0268   (0x0010)  
	unsigned char                                      UnknownData03_6[0x8];                                       // 0x0278   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_HierarchyBase
/// Size: 0x0000 (0x000008 - 0x000008)
struct FRigUnit_HierarchyBase : FRigUnit
{ 
};

/// Struct /Script/ControlRig.RigUnit_HierarchyBaseMutable
/// Size: 0x0000 (0x0001D0 - 0x0001D0)
struct FRigUnit_HierarchyBaseMutable : FRigUnitMutable
{ 
};

/// Struct /Script/ControlRig.RigUnit_HierarchyGetParent
/// Size: 0x0040 (0x000008 - 0x000048)
struct FRigUnit_HierarchyGetParent : FRigUnit_HierarchyBase
{ 
	FRigElementKey                                     Child;                                                      // 0x0008   (0x0008)  
	FRigElementKey                                     Parent;                                                     // 0x0010   (0x0008)  
	FCachedRigElement                                  CachedChild;                                                // 0x0018   (0x0018)  
	FCachedRigElement                                  CachedParent;                                               // 0x0030   (0x0018)  
};

/// Struct /Script/ControlRig.RigUnit_HierarchyGetParents
/// Size: 0x0048 (0x000008 - 0x000050)
struct FRigUnit_HierarchyGetParents : FRigUnit_HierarchyBase
{ 
	FRigElementKey                                     Child;                                                      // 0x0008   (0x0008)  
	bool                                               bIncludeChild;                                              // 0x0010   (0x0001)  
	bool                                               bReverse;                                                   // 0x0011   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x0012   (0x0006)  MISSED
	FRigElementKeyCollection                           Parents;                                                    // 0x0018   (0x0010)  
	FCachedRigElement                                  CachedChild;                                                // 0x0028   (0x0018)  
	FRigElementKeyCollection                           CachedParents;                                              // 0x0040   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_HierarchyGetParentsItemArray
/// Size: 0x0048 (0x000008 - 0x000050)
struct FRigUnit_HierarchyGetParentsItemArray : FRigUnit_HierarchyBase
{ 
	FRigElementKey                                     Child;                                                      // 0x0008   (0x0008)  
	bool                                               bIncludeChild;                                              // 0x0010   (0x0001)  
	bool                                               bReverse;                                                   // 0x0011   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x0012   (0x0006)  MISSED
	TArray<FRigElementKey>                             Parents;                                                    // 0x0018   (0x0010)  
	FCachedRigElement                                  CachedChild;                                                // 0x0028   (0x0018)  
	FRigElementKeyCollection                           CachedParents;                                              // 0x0040   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_HierarchyGetChildren
/// Size: 0x0048 (0x000008 - 0x000050)
struct FRigUnit_HierarchyGetChildren : FRigUnit_HierarchyBase
{ 
	FRigElementKey                                     Parent;                                                     // 0x0008   (0x0008)  
	bool                                               bIncludeParent;                                             // 0x0010   (0x0001)  
	bool                                               bRecursive;                                                 // 0x0011   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x0012   (0x0006)  MISSED
	FRigElementKeyCollection                           Children;                                                   // 0x0018   (0x0010)  
	FCachedRigElement                                  CachedParent;                                               // 0x0028   (0x0018)  
	FRigElementKeyCollection                           CachedChildren;                                             // 0x0040   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_HierarchyGetSiblings
/// Size: 0x0048 (0x000008 - 0x000050)
struct FRigUnit_HierarchyGetSiblings : FRigUnit_HierarchyBase
{ 
	FRigElementKey                                     Item;                                                       // 0x0008   (0x0008)  
	bool                                               bIncludeItem;                                               // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0011   (0x0007)  MISSED
	FRigElementKeyCollection                           Siblings;                                                   // 0x0018   (0x0010)  
	FCachedRigElement                                  CachedItem;                                                 // 0x0028   (0x0018)  
	FRigElementKeyCollection                           CachedSiblings;                                             // 0x0040   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_HierarchyGetSiblingsItemArray
/// Size: 0x0048 (0x000008 - 0x000050)
struct FRigUnit_HierarchyGetSiblingsItemArray : FRigUnit_HierarchyBase
{ 
	FRigElementKey                                     Item;                                                       // 0x0008   (0x0008)  
	bool                                               bIncludeItem;                                               // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0011   (0x0007)  MISSED
	TArray<FRigElementKey>                             Siblings;                                                   // 0x0018   (0x0010)  
	FCachedRigElement                                  CachedItem;                                                 // 0x0028   (0x0018)  
	FRigElementKeyCollection                           CachedSiblings;                                             // 0x0040   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_HierarchyGetChainItemArray
/// Size: 0x0068 (0x000008 - 0x000070)
struct FRigUnit_HierarchyGetChainItemArray : FRigUnit_HierarchyBase
{ 
	FRigElementKey                                     Start;                                                      // 0x0008   (0x0008)  
	FRigElementKey                                     End;                                                        // 0x0010   (0x0008)  
	bool                                               bIncludeStart;                                              // 0x0018   (0x0001)  
	bool                                               bIncludeEnd;                                                // 0x0019   (0x0001)  
	bool                                               bReverse;                                                   // 0x001A   (0x0001)  
	unsigned char                                      UnknownData00_5[0x5];                                       // 0x001B   (0x0005)  MISSED
	TArray<FRigElementKey>                             Chain;                                                      // 0x0020   (0x0010)  
	FCachedRigElement                                  CachedStart;                                                // 0x0030   (0x0018)  
	FCachedRigElement                                  CachedEnd;                                                  // 0x0048   (0x0018)  
	FRigElementKeyCollection                           CachedChain;                                                // 0x0060   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_HierarchyGetPose
/// Size: 0x0088 (0x000008 - 0x000090)
struct FRigUnit_HierarchyGetPose : FRigUnit_HierarchyBase
{ 
	bool                                               Initial;                                                    // 0x0008   (0x0001)  
	ERigElementType                                    ElementType;                                                // 0x0009   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x000A   (0x0006)  MISSED
	FRigElementKeyCollection                           ItemsToGet;                                                 // 0x0010   (0x0010)  
	FRigPose                                           Pose;                                                       // 0x0020   (0x0070)  
};

/// Struct /Script/ControlRig.RigUnit_HierarchyGetPoseItemArray
/// Size: 0x0088 (0x000008 - 0x000090)
struct FRigUnit_HierarchyGetPoseItemArray : FRigUnit_HierarchyBase
{ 
	bool                                               Initial;                                                    // 0x0008   (0x0001)  
	ERigElementType                                    ElementType;                                                // 0x0009   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x000A   (0x0006)  MISSED
	TArray<FRigElementKey>                             ItemsToGet;                                                 // 0x0010   (0x0010)  
	FRigPose                                           Pose;                                                       // 0x0020   (0x0070)  
};

/// Struct /Script/ControlRig.RigUnit_HierarchySetPose
/// Size: 0x0090 (0x0001D0 - 0x000260)
struct FRigUnit_HierarchySetPose : FRigUnit_HierarchyBaseMutable
{ 
	FRigPose                                           Pose;                                                       // 0x01D0   (0x0070)  
	ERigElementType                                    ElementType;                                                // 0x0240   (0x0001)  
	ERigVMTransformSpace                               Space;                                                      // 0x0241   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x0242   (0x0006)  MISSED
	FRigElementKeyCollection                           ItemsToSet;                                                 // 0x0248   (0x0010)  
	float                                              Weight;                                                     // 0x0258   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x025C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_HierarchySetPoseItemArray
/// Size: 0x0090 (0x0001D0 - 0x000260)
struct FRigUnit_HierarchySetPoseItemArray : FRigUnit_HierarchyBaseMutable
{ 
	FRigPose                                           Pose;                                                       // 0x01D0   (0x0070)  
	ERigElementType                                    ElementType;                                                // 0x0240   (0x0001)  
	ERigVMTransformSpace                               Space;                                                      // 0x0241   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x0242   (0x0006)  MISSED
	TArray<FRigElementKey>                             ItemsToSet;                                                 // 0x0248   (0x0010)  
	float                                              Weight;                                                     // 0x0258   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x025C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_PoseIsEmpty
/// Size: 0x0078 (0x000008 - 0x000080)
struct FRigUnit_PoseIsEmpty : FRigUnit_HierarchyBase
{ 
	FRigPose                                           Pose;                                                       // 0x0008   (0x0070)  
	bool                                               IsEmpty;                                                    // 0x0078   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0079   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_PoseGetItems
/// Size: 0x0088 (0x000008 - 0x000090)
struct FRigUnit_PoseGetItems : FRigUnit_HierarchyBase
{ 
	FRigPose                                           Pose;                                                       // 0x0008   (0x0070)  
	ERigElementType                                    ElementType;                                                // 0x0078   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0079   (0x0007)  MISSED
	FRigElementKeyCollection                           Items;                                                      // 0x0080   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_PoseGetItemsItemArray
/// Size: 0x0088 (0x000008 - 0x000090)
struct FRigUnit_PoseGetItemsItemArray : FRigUnit_HierarchyBase
{ 
	FRigPose                                           Pose;                                                       // 0x0008   (0x0070)  
	ERigElementType                                    ElementType;                                                // 0x0078   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0079   (0x0007)  MISSED
	TArray<FRigElementKey>                             Items;                                                      // 0x0080   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_PoseGetDelta
/// Size: 0x0120 (0x000008 - 0x000128)
struct FRigUnit_PoseGetDelta : FRigUnit_HierarchyBase
{ 
	FRigPose                                           PoseA;                                                      // 0x0008   (0x0070)  
	FRigPose                                           PoseB;                                                      // 0x0078   (0x0070)  
	float                                              PositionThreshold;                                          // 0x00E8   (0x0004)  
	float                                              RotationThreshold;                                          // 0x00EC   (0x0004)  
	float                                              ScaleThreshold;                                             // 0x00F0   (0x0004)  
	float                                              CurveThreshold;                                             // 0x00F4   (0x0004)  
	ERigElementType                                    ElementType;                                                // 0x00F8   (0x0001)  
	ERigVMTransformSpace                               Space;                                                      // 0x00F9   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x00FA   (0x0006)  MISSED
	FRigElementKeyCollection                           ItemsToCompare;                                             // 0x0100   (0x0010)  
	bool                                               PosesAreEqual;                                              // 0x0110   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0111   (0x0007)  MISSED
	FRigElementKeyCollection                           ItemsWithDelta;                                             // 0x0118   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_PoseGetTransform
/// Size: 0x00F8 (0x000008 - 0x000100)
struct FRigUnit_PoseGetTransform : FRigUnit_HierarchyBase
{ 
	FRigPose                                           Pose;                                                       // 0x0008   (0x0070)  
	FRigElementKey                                     Item;                                                       // 0x0078   (0x0008)  
	ERigVMTransformSpace                               Space;                                                      // 0x0080   (0x0001)  
	bool                                               Valid;                                                      // 0x0081   (0x0001)  
	unsigned char                                      UnknownData00_5[0xE];                                       // 0x0082   (0x000E)  MISSED
	FTransform                                         Transform;                                                  // 0x0090   (0x0060)  
	float                                              CurveValue;                                                 // 0x00F0   (0x0004)  
	int32_t                                            CachedPoseElementIndex;                                     // 0x00F4   (0x0004)  
	int32_t                                            CachedPoseHash;                                             // 0x00F8   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x00FC   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_PoseGetTransformArray
/// Size: 0x0088 (0x000008 - 0x000090)
struct FRigUnit_PoseGetTransformArray : FRigUnit_HierarchyBase
{ 
	FRigPose                                           Pose;                                                       // 0x0008   (0x0070)  
	ERigVMTransformSpace                               Space;                                                      // 0x0078   (0x0001)  
	bool                                               Valid;                                                      // 0x0079   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x007A   (0x0006)  MISSED
	TArray<FTransform>                                 Transforms;                                                 // 0x0080   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_PoseGetCurve
/// Size: 0x0088 (0x000008 - 0x000090)
struct FRigUnit_PoseGetCurve : FRigUnit_HierarchyBase
{ 
	FRigPose                                           Pose;                                                       // 0x0008   (0x0070)  
	FName                                              Curve;                                                      // 0x0078   (0x0004)  
	bool                                               Valid;                                                      // 0x007C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x007D   (0x0003)  MISSED
	float                                              CurveValue;                                                 // 0x0080   (0x0004)  
	int32_t                                            CachedPoseElementIndex;                                     // 0x0084   (0x0004)  
	int32_t                                            CachedPoseHash;                                             // 0x0088   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x008C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_PoseLoop
/// Size: 0x0310 (0x0001D0 - 0x0004E0)
struct FRigUnit_PoseLoop : FRigUnit_HierarchyBaseMutable
{ 
	FName                                              BlockToRun;                                                 // 0x01D0   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x01D4   (0x0004)  MISSED
	FRigPose                                           Pose;                                                       // 0x01D8   (0x0070)  
	FRigElementKey                                     Item;                                                       // 0x0248   (0x0008)  
	FTransform                                         GlobalTransform;                                            // 0x0250   (0x0060)  
	FTransform                                         LocalTransform;                                             // 0x02B0   (0x0060)  
	float                                              CurveValue;                                                 // 0x0310   (0x0004)  
	int32_t                                            Index;                                                      // 0x0314   (0x0004)  
	int32_t                                            Count;                                                      // 0x0318   (0x0004)  
	float                                              Ratio;                                                      // 0x031C   (0x0004)  
	FControlRigExecuteContext                          Completed;                                                  // 0x0320   (0x01C0)  
};

/// Struct /Script/ControlRig.RigUnit_InteractionExecution
/// Size: 0x01C8 (0x000008 - 0x0001D0)
struct FRigUnit_InteractionExecution : FRigUnit
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0008   (0x0008)  MISSED
	FControlRigExecuteContext                          ExecuteContext;                                             // 0x0010   (0x01C0)  
};

/// Struct /Script/ControlRig.RigUnit_InverseExecution
/// Size: 0x01C8 (0x000008 - 0x0001D0)
struct FRigUnit_InverseExecution : FRigUnit
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0008   (0x0008)  MISSED
	FControlRigExecuteContext                          ExecuteContext;                                             // 0x0010   (0x01C0)  
};

/// Struct /Script/ControlRig.RigUnit_IsInteracting
/// Size: 0x0018 (0x000008 - 0x000020)
struct FRigUnit_IsInteracting : FRigUnit
{ 
	bool                                               bIsInteracting;                                             // 0x0008   (0x0001)  
	bool                                               bIsTranslating;                                             // 0x0009   (0x0001)  
	bool                                               bIsRotating;                                                // 0x000A   (0x0001)  
	bool                                               bIsScaling;                                                 // 0x000B   (0x0001)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	TArray<FRigElementKey>                             Items;                                                      // 0x0010   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_ItemBase
/// Size: 0x0000 (0x000008 - 0x000008)
struct FRigUnit_ItemBase : FRigUnit
{ 
};

/// Struct /Script/ControlRig.RigUnit_ItemBaseMutable
/// Size: 0x0000 (0x0001D0 - 0x0001D0)
struct FRigUnit_ItemBaseMutable : FRigUnitMutable
{ 
};

/// Struct /Script/ControlRig.RigUnit_ItemExists
/// Size: 0x0028 (0x000008 - 0x000030)
struct FRigUnit_ItemExists : FRigUnit_ItemBase
{ 
	FRigElementKey                                     Item;                                                       // 0x0008   (0x0008)  
	bool                                               Exists;                                                     // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0011   (0x0007)  MISSED
	FCachedRigElement                                  CachedIndex;                                                // 0x0018   (0x0018)  
};

/// Struct /Script/ControlRig.RigUnit_ItemReplace
/// Size: 0x0018 (0x000008 - 0x000020)
struct FRigUnit_ItemReplace : FRigUnit_ItemBase
{ 
	FRigElementKey                                     Item;                                                       // 0x0008   (0x0008)  
	FName                                              Old;                                                        // 0x0010   (0x0004)  
	FName                                              New;                                                        // 0x0014   (0x0004)  
	FRigElementKey                                     Result;                                                     // 0x0018   (0x0008)  
};

/// Struct /Script/ControlRig.RigUnit_ItemEquals
/// Size: 0x0018 (0x000008 - 0x000020)
struct FRigUnit_ItemEquals : FRigUnit_ItemBase
{ 
	FRigElementKey                                     A;                                                          // 0x0008   (0x0008)  
	FRigElementKey                                     B;                                                          // 0x0010   (0x0008)  
	bool                                               Result;                                                     // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0019   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_ItemNotEquals
/// Size: 0x0018 (0x000008 - 0x000020)
struct FRigUnit_ItemNotEquals : FRigUnit_ItemBase
{ 
	FRigElementKey                                     A;                                                          // 0x0008   (0x0008)  
	FRigElementKey                                     B;                                                          // 0x0010   (0x0008)  
	bool                                               Result;                                                     // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0019   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_ItemTypeEquals
/// Size: 0x0018 (0x000008 - 0x000020)
struct FRigUnit_ItemTypeEquals : FRigUnit_ItemBase
{ 
	FRigElementKey                                     A;                                                          // 0x0008   (0x0008)  
	FRigElementKey                                     B;                                                          // 0x0010   (0x0008)  
	bool                                               Result;                                                     // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0019   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_ItemTypeNotEquals
/// Size: 0x0018 (0x000008 - 0x000020)
struct FRigUnit_ItemTypeNotEquals : FRigUnit_ItemBase
{ 
	FRigElementKey                                     A;                                                          // 0x0008   (0x0008)  
	FRigElementKey                                     B;                                                          // 0x0010   (0x0008)  
	bool                                               Result;                                                     // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0019   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_ItemToName
/// Size: 0x0010 (0x000008 - 0x000018)
struct FRigUnit_ItemToName : FRigUnit_ItemBase
{ 
	FRigElementKey                                     Value;                                                      // 0x0008   (0x0008)  
	FName                                              Result;                                                     // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_PrepareForExecution
/// Size: 0x01C8 (0x000008 - 0x0001D0)
struct FRigUnit_PrepareForExecution : FRigUnit
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0008   (0x0008)  MISSED
	FControlRigExecuteContext                          ExecuteContext;                                             // 0x0010   (0x01C0)  
};

/// Struct /Script/ControlRig.RigUnit_RigModulesBase
/// Size: 0x0000 (0x000008 - 0x000008)
struct FRigUnit_RigModulesBase : FRigUnit
{ 
};

/// Struct /Script/ControlRig.RigUnit_RigModulesBaseMutable
/// Size: 0x0000 (0x0001D0 - 0x0001D0)
struct FRigUnit_RigModulesBaseMutable : FRigUnitMutable
{ 
};

/// Struct /Script/ControlRig.RigUnit_ResolveConnector
/// Size: 0x0018 (0x000008 - 0x000020)
struct FRigUnit_ResolveConnector : FRigUnit_RigModulesBase
{ 
	FRigElementKey                                     Connector;                                                  // 0x0008   (0x0008)  
	bool                                               SkipSocket;                                                 // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0011   (0x0003)  MISSED
	FRigElementKey                                     Result;                                                     // 0x0014   (0x0008)  
	bool                                               bIsConnected;                                               // 0x001C   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x001D   (0x0003)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_GetCurrentNameSpace
/// Size: 0x0010 (0x000008 - 0x000018)
struct FRigUnit_GetCurrentNameSpace : FRigUnit_RigModulesBase
{ 
	SDK_UNDEFINED(16,12560) /* FString */              __um(NameSpace);                                            // 0x0008   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_GetItemShortName
/// Size: 0x0010 (0x000008 - 0x000018)
struct FRigUnit_GetItemShortName : FRigUnit_RigModulesBase
{ 
	FRigElementKey                                     Item;                                                       // 0x0008   (0x0008)  
	FName                                              ShortName;                                                  // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_GetItemNameSpace
/// Size: 0x0020 (0x000008 - 0x000028)
struct FRigUnit_GetItemNameSpace : FRigUnit_RigModulesBase
{ 
	FRigElementKey                                     Item;                                                       // 0x0008   (0x0008)  
	bool                                               HasNameSpace;                                               // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0011   (0x0007)  MISSED
	SDK_UNDEFINED(16,12561) /* FString */              __um(NameSpace);                                            // 0x0018   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_IsItemInCurrentNameSpace
/// Size: 0x0010 (0x000008 - 0x000018)
struct FRigUnit_IsItemInCurrentNameSpace : FRigUnit_RigModulesBase
{ 
	FRigElementKey                                     Item;                                                       // 0x0008   (0x0008)  
	bool                                               Result;                                                     // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_GetItemsInNameSpace
/// Size: 0x0018 (0x000008 - 0x000020)
struct FRigUnit_GetItemsInNameSpace : FRigUnit_RigModulesBase
{ 
	ERigElementType                                    TypeToSearch;                                               // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0009   (0x0007)  MISSED
	TArray<FRigElementKey>                             Items;                                                      // 0x0010   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_SequenceExecution
/// Size: 0x08C8 (0x000008 - 0x0008D0)
struct FRigUnit_SequenceExecution : FRigUnit
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0008   (0x0008)  MISSED
	FControlRigExecuteContext                          ExecuteContext;                                             // 0x0010   (0x01C0)  
	FControlRigExecuteContext                          A;                                                          // 0x01D0   (0x01C0)  
	FControlRigExecuteContext                          B;                                                          // 0x0390   (0x01C0)  
	FControlRigExecuteContext                          C;                                                          // 0x0550   (0x01C0)  
	FControlRigExecuteContext                          D;                                                          // 0x0710   (0x01C0)  
};

/// Struct /Script/ControlRig.RigUnit_AddBoneTransform
/// Size: 0x0090 (0x0001D0 - 0x000260)
struct FRigUnit_AddBoneTransform : FRigUnitMutable
{ 
	FName                                              bone;                                                       // 0x01D0   (0x0004)  
	unsigned char                                      UnknownData00_5[0xC];                                       // 0x01D4   (0x000C)  MISSED
	FTransform                                         Transform;                                                  // 0x01E0   (0x0060)  
	float                                              Weight;                                                     // 0x0240   (0x0004)  
	bool                                               bPostMultiply;                                              // 0x0244   (0x0001)  
	bool                                               bPropagateToChildren;                                       // 0x0245   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x0246   (0x0002)  MISSED
	FCachedRigElement                                  CachedBone;                                                 // 0x0248   (0x0018)  
};

/// Struct /Script/ControlRig.RigUnit_Item
/// Size: 0x0008 (0x000008 - 0x000010)
struct FRigUnit_Item : FRigUnit
{ 
	FRigElementKey                                     Item;                                                       // 0x0008   (0x0008)  
};

/// Struct /Script/ControlRig.RigUnit_ItemArray
/// Size: 0x0010 (0x000008 - 0x000018)
struct FRigUnit_ItemArray : FRigUnit
{ 
	TArray<FRigElementKey>                             Items;                                                      // 0x0008   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_BoneName
/// Size: 0x0008 (0x000008 - 0x000010)
struct FRigUnit_BoneName : FRigUnit
{ 
	FName                                              bone;                                                       // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_SpaceName
/// Size: 0x0008 (0x000008 - 0x000010)
struct FRigUnit_SpaceName : FRigUnit
{ 
	FName                                              Space;                                                      // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_ControlName
/// Size: 0x0008 (0x000008 - 0x000010)
struct FRigUnit_ControlName : FRigUnit
{ 
	FName                                              Control;                                                    // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_GetAnimationChannelBase
/// Size: 0x0018 (0x000008 - 0x000020)
struct FRigUnit_GetAnimationChannelBase : FRigUnit
{ 
	FName                                              Control;                                                    // 0x0008   (0x0004)  
	FName                                              Channel;                                                    // 0x000C   (0x0004)  
	bool                                               bInitial;                                                   // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0011   (0x0003)  MISSED
	FRigElementKey                                     CachedChannelKey;                                           // 0x0014   (0x0008)  
	int32_t                                            CachedChannelHash;                                          // 0x001C   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_GetBoolAnimationChannel
/// Size: 0x0008 (0x000020 - 0x000028)
struct FRigUnit_GetBoolAnimationChannel : FRigUnit_GetAnimationChannelBase
{ 
	bool                                               Value;                                                      // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0021   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_GetFloatAnimationChannel
/// Size: 0x0008 (0x000020 - 0x000028)
struct FRigUnit_GetFloatAnimationChannel : FRigUnit_GetAnimationChannelBase
{ 
	float                                              Value;                                                      // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_GetIntAnimationChannel
/// Size: 0x0008 (0x000020 - 0x000028)
struct FRigUnit_GetIntAnimationChannel : FRigUnit_GetAnimationChannelBase
{ 
	int32_t                                            Value;                                                      // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_GetVector2DAnimationChannel
/// Size: 0x0010 (0x000020 - 0x000030)
struct FRigUnit_GetVector2DAnimationChannel : FRigUnit_GetAnimationChannelBase
{ 
	FVector2D                                          Value;                                                      // 0x0020   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_GetVectorAnimationChannel
/// Size: 0x0018 (0x000020 - 0x000038)
struct FRigUnit_GetVectorAnimationChannel : FRigUnit_GetAnimationChannelBase
{ 
	FVector                                            Value;                                                      // 0x0020   (0x0018)  
};

/// Struct /Script/ControlRig.RigUnit_GetRotatorAnimationChannel
/// Size: 0x0018 (0x000020 - 0x000038)
struct FRigUnit_GetRotatorAnimationChannel : FRigUnit_GetAnimationChannelBase
{ 
	FRotator                                           Value;                                                      // 0x0020   (0x0018)  
};

/// Struct /Script/ControlRig.RigUnit_GetTransformAnimationChannel
/// Size: 0x0060 (0x000020 - 0x000080)
struct FRigUnit_GetTransformAnimationChannel : FRigUnit_GetAnimationChannelBase
{ 
	FTransform                                         Value;                                                      // 0x0020   (0x0060)  
};

/// Struct /Script/ControlRig.RigUnit_SetAnimationChannelBase
/// Size: 0x01C0 (0x000020 - 0x0001E0)
struct FRigUnit_SetAnimationChannelBase : FRigUnit_GetAnimationChannelBase
{ 
	FControlRigExecuteContext                          ExecuteContext;                                             // 0x0020   (0x01C0)  
};

/// Struct /Script/ControlRig.RigUnit_SetBoolAnimationChannel
/// Size: 0x0010 (0x0001E0 - 0x0001F0)
struct FRigUnit_SetBoolAnimationChannel : FRigUnit_SetAnimationChannelBase
{ 
	bool                                               Value;                                                      // 0x01E0   (0x0001)  
	unsigned char                                      UnknownData00_6[0xF];                                       // 0x01E1   (0x000F)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_SetFloatAnimationChannel
/// Size: 0x0010 (0x0001E0 - 0x0001F0)
struct FRigUnit_SetFloatAnimationChannel : FRigUnit_SetAnimationChannelBase
{ 
	float                                              Value;                                                      // 0x01E0   (0x0004)  
	unsigned char                                      UnknownData00_6[0xC];                                       // 0x01E4   (0x000C)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_SetIntAnimationChannel
/// Size: 0x0010 (0x0001E0 - 0x0001F0)
struct FRigUnit_SetIntAnimationChannel : FRigUnit_SetAnimationChannelBase
{ 
	int32_t                                            Value;                                                      // 0x01E0   (0x0004)  
	unsigned char                                      UnknownData00_6[0xC];                                       // 0x01E4   (0x000C)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_SetVector2DAnimationChannel
/// Size: 0x0010 (0x0001E0 - 0x0001F0)
struct FRigUnit_SetVector2DAnimationChannel : FRigUnit_SetAnimationChannelBase
{ 
	FVector2D                                          Value;                                                      // 0x01E0   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_SetVectorAnimationChannel
/// Size: 0x0020 (0x0001E0 - 0x000200)
struct FRigUnit_SetVectorAnimationChannel : FRigUnit_SetAnimationChannelBase
{ 
	FVector                                            Value;                                                      // 0x01E0   (0x0018)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x01F8   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_SetRotatorAnimationChannel
/// Size: 0x0020 (0x0001E0 - 0x000200)
struct FRigUnit_SetRotatorAnimationChannel : FRigUnit_SetAnimationChannelBase
{ 
	FRotator                                           Value;                                                      // 0x01E0   (0x0018)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x01F8   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_SetTransformAnimationChannel
/// Size: 0x0060 (0x0001E0 - 0x000240)
struct FRigUnit_SetTransformAnimationChannel : FRigUnit_SetAnimationChannelBase
{ 
	FTransform                                         Value;                                                      // 0x01E0   (0x0060)  
};

/// Struct /Script/ControlRig.RigUnit_CurveExists
/// Size: 0x0020 (0x000008 - 0x000028)
struct FRigUnit_CurveExists : FRigUnit
{ 
	FName                                              Curve;                                                      // 0x0008   (0x0004)  
	bool                                               Exists;                                                     // 0x000C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x000D   (0x0003)  MISSED
	FCachedRigElement                                  CachedCurveIndex;                                           // 0x0010   (0x0018)  
};

/// Struct /Script/ControlRig.RigUnit_GetBoneTransform
/// Size: 0x0088 (0x000008 - 0x000090)
struct FRigUnit_GetBoneTransform : FRigUnit
{ 
	FName                                              bone;                                                       // 0x0008   (0x0004)  
	ERigVMTransformSpace                               Space;                                                      // 0x000C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x000D   (0x0003)  MISSED
	FTransform                                         Transform;                                                  // 0x0010   (0x0060)  
	FCachedRigElement                                  CachedBone;                                                 // 0x0070   (0x0018)  
	bool                                               bFirstUpdate;                                               // 0x0088   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0089   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_GetControlInitialTransform
/// Size: 0x0088 (0x000008 - 0x000090)
struct FRigUnit_GetControlInitialTransform : FRigUnit
{ 
	FName                                              Control;                                                    // 0x0008   (0x0004)  
	ERigVMTransformSpace                               Space;                                                      // 0x000C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x000D   (0x0003)  MISSED
	FTransform                                         Transform;                                                  // 0x0010   (0x0060)  
	FCachedRigElement                                  CachedControlIndex;                                         // 0x0070   (0x0018)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0088   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_GetControlBool
/// Size: 0x0020 (0x000008 - 0x000028)
struct FRigUnit_GetControlBool : FRigUnit
{ 
	FName                                              Control;                                                    // 0x0008   (0x0004)  
	bool                                               BoolValue;                                                  // 0x000C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x000D   (0x0003)  MISSED
	FCachedRigElement                                  CachedControlIndex;                                         // 0x0010   (0x0018)  
};

/// Struct /Script/ControlRig.RigUnit_GetControlFloat
/// Size: 0x0028 (0x000008 - 0x000030)
struct FRigUnit_GetControlFloat : FRigUnit
{ 
	FName                                              Control;                                                    // 0x0008   (0x0004)  
	float                                              FloatValue;                                                 // 0x000C   (0x0004)  
	float                                              Minimum;                                                    // 0x0010   (0x0004)  
	float                                              Maximum;                                                    // 0x0014   (0x0004)  
	FCachedRigElement                                  CachedControlIndex;                                         // 0x0018   (0x0018)  
};

/// Struct /Script/ControlRig.RigUnit_GetControlInteger
/// Size: 0x0028 (0x000008 - 0x000030)
struct FRigUnit_GetControlInteger : FRigUnit
{ 
	FName                                              Control;                                                    // 0x0008   (0x0004)  
	int32_t                                            IntegerValue;                                               // 0x000C   (0x0004)  
	int32_t                                            Minimum;                                                    // 0x0010   (0x0004)  
	int32_t                                            Maximum;                                                    // 0x0014   (0x0004)  
	FCachedRigElement                                  CachedControlIndex;                                         // 0x0018   (0x0018)  
};

/// Struct /Script/ControlRig.RigUnit_GetControlVector2D
/// Size: 0x0050 (0x000008 - 0x000058)
struct FRigUnit_GetControlVector2D : FRigUnit
{ 
	FName                                              Control;                                                    // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	FVector2D                                          Vector;                                                     // 0x0010   (0x0010)  
	FVector2D                                          Minimum;                                                    // 0x0020   (0x0010)  
	FVector2D                                          Maximum;                                                    // 0x0030   (0x0010)  
	FCachedRigElement                                  CachedControlIndex;                                         // 0x0040   (0x0018)  
};

/// Struct /Script/ControlRig.RigUnit_GetControlVector
/// Size: 0x0068 (0x000008 - 0x000070)
struct FRigUnit_GetControlVector : FRigUnit
{ 
	FName                                              Control;                                                    // 0x0008   (0x0004)  
	ERigVMTransformSpace                               Space;                                                      // 0x000C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x000D   (0x0003)  MISSED
	FVector                                            Vector;                                                     // 0x0010   (0x0018)  
	FVector                                            Minimum;                                                    // 0x0028   (0x0018)  
	FVector                                            Maximum;                                                    // 0x0040   (0x0018)  
	FCachedRigElement                                  CachedControlIndex;                                         // 0x0058   (0x0018)  
};

/// Struct /Script/ControlRig.RigUnit_GetControlRotator
/// Size: 0x0068 (0x000008 - 0x000070)
struct FRigUnit_GetControlRotator : FRigUnit
{ 
	FName                                              Control;                                                    // 0x0008   (0x0004)  
	ERigVMTransformSpace                               Space;                                                      // 0x000C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x000D   (0x0003)  MISSED
	FRotator                                           Rotator;                                                    // 0x0010   (0x0018)  
	FRotator                                           Minimum;                                                    // 0x0028   (0x0018)  
	FRotator                                           Maximum;                                                    // 0x0040   (0x0018)  
	FCachedRigElement                                  CachedControlIndex;                                         // 0x0058   (0x0018)  
};

/// Struct /Script/ControlRig.RigUnit_GetControlTransform
/// Size: 0x0148 (0x000008 - 0x000150)
struct FRigUnit_GetControlTransform : FRigUnit
{ 
	FName                                              Control;                                                    // 0x0008   (0x0004)  
	ERigVMTransformSpace                               Space;                                                      // 0x000C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x000D   (0x0003)  MISSED
	FTransform                                         Transform;                                                  // 0x0010   (0x0060)  
	FTransform                                         Minimum;                                                    // 0x0070   (0x0060)  
	FTransform                                         Maximum;                                                    // 0x00D0   (0x0060)  
	FCachedRigElement                                  CachedControlIndex;                                         // 0x0130   (0x0018)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0148   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_GetCurveValue
/// Size: 0x0028 (0x000008 - 0x000030)
struct FRigUnit_GetCurveValue : FRigUnit
{ 
	FName                                              Curve;                                                      // 0x0008   (0x0004)  
	bool                                               Valid;                                                      // 0x000C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x000D   (0x0003)  MISSED
	float                                              Value;                                                      // 0x0010   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0014   (0x0004)  MISSED
	FCachedRigElement                                  CachedCurveIndex;                                           // 0x0018   (0x0018)  
};

/// Struct /Script/ControlRig.RigUnit_GetInitialBoneTransform
/// Size: 0x0088 (0x000008 - 0x000090)
struct FRigUnit_GetInitialBoneTransform : FRigUnit
{ 
	FName                                              bone;                                                       // 0x0008   (0x0004)  
	ERigVMTransformSpace                               Space;                                                      // 0x000C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x000D   (0x0003)  MISSED
	FTransform                                         Transform;                                                  // 0x0010   (0x0060)  
	FCachedRigElement                                  CachedBone;                                                 // 0x0070   (0x0018)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0088   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_GetRelativeBoneTransform
/// Size: 0x0098 (0x000008 - 0x0000A0)
struct FRigUnit_GetRelativeBoneTransform : FRigUnit
{ 
	FName                                              bone;                                                       // 0x0008   (0x0004)  
	FName                                              Space;                                                      // 0x000C   (0x0004)  
	FTransform                                         Transform;                                                  // 0x0010   (0x0060)  
	FCachedRigElement                                  CachedBone;                                                 // 0x0070   (0x0018)  
	FCachedRigElement                                  CachedSpace;                                                // 0x0088   (0x0018)  
};

/// Struct /Script/ControlRig.RigUnit_GetRelativeTransformForItem
/// Size: 0x00A8 (0x000008 - 0x0000B0)
struct FRigUnit_GetRelativeTransformForItem : FRigUnit
{ 
	FRigElementKey                                     Child;                                                      // 0x0008   (0x0008)  
	bool                                               bChildInitial;                                              // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0011   (0x0003)  MISSED
	FRigElementKey                                     Parent;                                                     // 0x0014   (0x0008)  
	bool                                               bParentInitial;                                             // 0x001C   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x001D   (0x0003)  MISSED
	FTransform                                         RelativeTransform;                                          // 0x0020   (0x0060)  
	FCachedRigElement                                  CachedChild;                                                // 0x0080   (0x0018)  
	FCachedRigElement                                  CachedParent;                                               // 0x0098   (0x0018)  
};

/// Struct /Script/ControlRig.RigUnit_GetSpaceTransform
/// Size: 0x0088 (0x000008 - 0x000090)
struct FRigUnit_GetSpaceTransform : FRigUnit
{ 
	FName                                              Space;                                                      // 0x0008   (0x0004)  
	ERigVMTransformSpace                               SpaceType;                                                  // 0x000C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x000D   (0x0003)  MISSED
	FTransform                                         Transform;                                                  // 0x0010   (0x0060)  
	FCachedRigElement                                  CachedSpaceIndex;                                           // 0x0070   (0x0018)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0088   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_GetTransform
/// Size: 0x0098 (0x000008 - 0x0000A0)
struct FRigUnit_GetTransform : FRigUnit
{ 
	FRigElementKey                                     Item;                                                       // 0x0008   (0x0008)  
	ERigVMTransformSpace                               Space;                                                      // 0x0010   (0x0001)  
	bool                                               bInitial;                                                   // 0x0011   (0x0001)  
	unsigned char                                      UnknownData00_5[0xE];                                       // 0x0012   (0x000E)  MISSED
	FTransform                                         Transform;                                                  // 0x0020   (0x0060)  
	FCachedRigElement                                  CachedIndex;                                                // 0x0080   (0x0018)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0098   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_GetTransformArray
/// Size: 0x0038 (0x000008 - 0x000040)
struct FRigUnit_GetTransformArray : FRigUnit
{ 
	FRigElementKeyCollection                           Items;                                                      // 0x0008   (0x0010)  
	ERigVMTransformSpace                               Space;                                                      // 0x0018   (0x0001)  
	bool                                               bInitial;                                                   // 0x0019   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x001A   (0x0006)  MISSED
	TArray<FTransform>                                 Transforms;                                                 // 0x0020   (0x0010)  
	TArray<FCachedRigElement>                          CachedIndex;                                                // 0x0030   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_GetTransformItemArray
/// Size: 0x0038 (0x000008 - 0x000040)
struct FRigUnit_GetTransformItemArray : FRigUnit
{ 
	TArray<FRigElementKey>                             Items;                                                      // 0x0008   (0x0010)  
	ERigVMTransformSpace                               Space;                                                      // 0x0018   (0x0001)  
	bool                                               bInitial;                                                   // 0x0019   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x001A   (0x0006)  MISSED
	TArray<FTransform>                                 Transforms;                                                 // 0x0020   (0x0010)  
	TArray<FCachedRigElement>                          CachedIndex;                                                // 0x0030   (0x0010)  
};

/// Struct /Script/ControlRig.RigDispatch_MetadataBase
/// Size: 0x0030 (0x000070 - 0x0000A0)
struct FRigDispatch_MetadataBase : FRigDispatchFactory
{ 
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x0070   (0x0030)  MISSED
};

/// Struct /Script/ControlRig.RigDispatch_GetMetadata
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
struct FRigDispatch_GetMetadata : FRigDispatch_MetadataBase
{ 
};

/// Struct /Script/ControlRig.RigDispatch_SetMetadata
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
struct FRigDispatch_SetMetadata : FRigDispatch_MetadataBase
{ 
};

/// Struct /Script/ControlRig.RigUnit_RemoveMetadata
/// Size: 0x0030 (0x0001D0 - 0x000200)
struct FRigUnit_RemoveMetadata : FRigUnitMutable
{ 
	FRigElementKey                                     Item;                                                       // 0x01D0   (0x0008)  
	FName                                              Name;                                                       // 0x01D8   (0x0004)  
	ERigMetaDataNameSpace                              NameSpace;                                                  // 0x01DC   (0x0001)  
	bool                                               Removed;                                                    // 0x01DD   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x01DE   (0x0002)  MISSED
	FCachedRigElement                                  CachedIndex;                                                // 0x01E0   (0x0018)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x01F8   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_RemoveAllMetadata
/// Size: 0x0030 (0x0001D0 - 0x000200)
struct FRigUnit_RemoveAllMetadata : FRigUnitMutable
{ 
	FRigElementKey                                     Item;                                                       // 0x01D0   (0x0008)  
	ERigMetaDataNameSpace                              NameSpace;                                                  // 0x01D8   (0x0001)  
	bool                                               Removed;                                                    // 0x01D9   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x01DA   (0x0006)  MISSED
	FCachedRigElement                                  CachedIndex;                                                // 0x01E0   (0x0018)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x01F8   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_HasMetadata
/// Size: 0x0028 (0x000008 - 0x000030)
struct FRigUnit_HasMetadata : FRigUnit
{ 
	FRigElementKey                                     Item;                                                       // 0x0008   (0x0008)  
	FName                                              Name;                                                       // 0x0010   (0x0004)  
	ERigMetadataType                                   Type;                                                       // 0x0014   (0x0001)  
	ERigMetaDataNameSpace                              NameSpace;                                                  // 0x0015   (0x0001)  
	bool                                               Found;                                                      // 0x0016   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x0017   (0x0001)  MISSED
	FCachedRigElement                                  CachedIndex;                                                // 0x0018   (0x0018)  
};

/// Struct /Script/ControlRig.RigUnit_FindItemsWithMetadata
/// Size: 0x0018 (0x000008 - 0x000020)
struct FRigUnit_FindItemsWithMetadata : FRigUnit
{ 
	FName                                              Name;                                                       // 0x0008   (0x0004)  
	ERigMetadataType                                   Type;                                                       // 0x000C   (0x0001)  
	ERigMetaDataNameSpace                              NameSpace;                                                  // 0x000D   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x000E   (0x0002)  MISSED
	TArray<FRigElementKey>                             Items;                                                      // 0x0010   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_GetMetadataTags
/// Size: 0x0030 (0x000008 - 0x000038)
struct FRigUnit_GetMetadataTags : FRigUnit
{ 
	FRigElementKey                                     Item;                                                       // 0x0008   (0x0008)  
	TArray<FName>                                      Tags;                                                       // 0x0010   (0x0010)  
	FCachedRigElement                                  CachedIndex;                                                // 0x0020   (0x0018)  
};

/// Struct /Script/ControlRig.RigUnit_SetMetadataTag
/// Size: 0x0030 (0x0001D0 - 0x000200)
struct FRigUnit_SetMetadataTag : FRigUnitMutable
{ 
	FRigElementKey                                     Item;                                                       // 0x01D0   (0x0008)  
	FName                                              tag;                                                        // 0x01D8   (0x0004)  
	ERigMetaDataNameSpace                              NameSpace;                                                  // 0x01DC   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x01DD   (0x0003)  MISSED
	FCachedRigElement                                  CachedIndex;                                                // 0x01E0   (0x0018)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x01F8   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_SetMetadataTagArray
/// Size: 0x0040 (0x0001D0 - 0x000210)
struct FRigUnit_SetMetadataTagArray : FRigUnitMutable
{ 
	FRigElementKey                                     Item;                                                       // 0x01D0   (0x0008)  
	TArray<FName>                                      Tags;                                                       // 0x01D8   (0x0010)  
	ERigMetaDataNameSpace                              NameSpace;                                                  // 0x01E8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x01E9   (0x0007)  MISSED
	FCachedRigElement                                  CachedIndex;                                                // 0x01F0   (0x0018)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0208   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_RemoveMetadataTag
/// Size: 0x0030 (0x0001D0 - 0x000200)
struct FRigUnit_RemoveMetadataTag : FRigUnitMutable
{ 
	FRigElementKey                                     Item;                                                       // 0x01D0   (0x0008)  
	FName                                              tag;                                                        // 0x01D8   (0x0004)  
	ERigMetaDataNameSpace                              NameSpace;                                                  // 0x01DC   (0x0001)  
	bool                                               Removed;                                                    // 0x01DD   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x01DE   (0x0002)  MISSED
	FCachedRigElement                                  CachedIndex;                                                // 0x01E0   (0x0018)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x01F8   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_HasMetadataTag
/// Size: 0x0028 (0x000008 - 0x000030)
struct FRigUnit_HasMetadataTag : FRigUnit
{ 
	FRigElementKey                                     Item;                                                       // 0x0008   (0x0008)  
	FName                                              tag;                                                        // 0x0010   (0x0004)  
	ERigMetaDataNameSpace                              NameSpace;                                                  // 0x0014   (0x0001)  
	bool                                               Found;                                                      // 0x0015   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0016   (0x0002)  MISSED
	FCachedRigElement                                  CachedIndex;                                                // 0x0018   (0x0018)  
};

/// Struct /Script/ControlRig.RigUnit_HasMetadataTagArray
/// Size: 0x0038 (0x000008 - 0x000040)
struct FRigUnit_HasMetadataTagArray : FRigUnit
{ 
	FRigElementKey                                     Item;                                                       // 0x0008   (0x0008)  
	TArray<FName>                                      Tags;                                                       // 0x0010   (0x0010)  
	ERigMetaDataNameSpace                              NameSpace;                                                  // 0x0020   (0x0001)  
	bool                                               Found;                                                      // 0x0021   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x0022   (0x0006)  MISSED
	FCachedRigElement                                  CachedIndex;                                                // 0x0028   (0x0018)  
};

/// Struct /Script/ControlRig.RigUnit_FindItemsWithMetadataTag
/// Size: 0x0018 (0x000008 - 0x000020)
struct FRigUnit_FindItemsWithMetadataTag : FRigUnit
{ 
	FName                                              tag;                                                        // 0x0008   (0x0004)  
	ERigMetaDataNameSpace                              NameSpace;                                                  // 0x000C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x000D   (0x0003)  MISSED
	TArray<FRigElementKey>                             Items;                                                      // 0x0010   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_FindItemsWithMetadataTagArray
/// Size: 0x0028 (0x000008 - 0x000030)
struct FRigUnit_FindItemsWithMetadataTagArray : FRigUnit
{ 
	TArray<FName>                                      Tags;                                                       // 0x0008   (0x0010)  
	ERigMetaDataNameSpace                              NameSpace;                                                  // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0019   (0x0007)  MISSED
	TArray<FRigElementKey>                             Items;                                                      // 0x0020   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_FilterItemsByMetadataTags
/// Size: 0x0048 (0x000008 - 0x000050)
struct FRigUnit_FilterItemsByMetadataTags : FRigUnit
{ 
	TArray<FRigElementKey>                             Items;                                                      // 0x0008   (0x0010)  
	TArray<FName>                                      Tags;                                                       // 0x0018   (0x0010)  
	ERigMetaDataNameSpace                              NameSpace;                                                  // 0x0028   (0x0001)  
	bool                                               Inclusive;                                                  // 0x0029   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x002A   (0x0006)  MISSED
	TArray<FRigElementKey>                             Result;                                                     // 0x0030   (0x0010)  
	TArray<FCachedRigElement>                          CachedIndices;                                              // 0x0040   (0x0010)  
};

/// Struct /Script/ControlRig.RigDispatch_GetModuleMetadata
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
struct FRigDispatch_GetModuleMetadata : FRigDispatch_GetMetadata
{ 
};

/// Struct /Script/ControlRig.RigDispatch_SetModuleMetadata
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
struct FRigDispatch_SetModuleMetadata : FRigDispatch_SetMetadata
{ 
};

/// Struct /Script/ControlRig.RigUnit_OffsetTransformForItem
/// Size: 0x0090 (0x0001D0 - 0x000260)
struct FRigUnit_OffsetTransformForItem : FRigUnitMutable
{ 
	FRigElementKey                                     Item;                                                       // 0x01D0   (0x0008)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x01D8   (0x0008)  MISSED
	FTransform                                         OffsetTransform;                                            // 0x01E0   (0x0060)  
	float                                              Weight;                                                     // 0x0240   (0x0004)  
	bool                                               bPropagateToChildren;                                       // 0x0244   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0245   (0x0003)  MISSED
	FCachedRigElement                                  CachedIndex;                                                // 0x0248   (0x0018)  
};

/// Struct /Script/ControlRig.RigUnit_ParentSwitchConstraint
/// Size: 0x0190 (0x0001D0 - 0x000360)
struct FRigUnit_ParentSwitchConstraint : FRigUnitMutable
{ 
	FRigElementKey                                     Subject;                                                    // 0x01D0   (0x0008)  
	int32_t                                            ParentIndex;                                                // 0x01D8   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x01DC   (0x0004)  MISSED
	FRigElementKeyCollection                           Parents;                                                    // 0x01E0   (0x0010)  
	FTransform                                         InitialGlobalTransform;                                     // 0x01F0   (0x0060)  
	float                                              Weight;                                                     // 0x0250   (0x0004)  
	unsigned char                                      UnknownData01_5[0xC];                                       // 0x0254   (0x000C)  MISSED
	FTransform                                         Transform;                                                  // 0x0260   (0x0060)  
	bool                                               Switched;                                                   // 0x02C0   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x02C1   (0x0007)  MISSED
	FCachedRigElement                                  CachedSubject;                                              // 0x02C8   (0x0018)  
	FCachedRigElement                                  CachedParent;                                               // 0x02E0   (0x0018)  
	unsigned char                                      UnknownData03_5[0x8];                                       // 0x02F8   (0x0008)  MISSED
	FTransform                                         RelativeOffset;                                             // 0x0300   (0x0060)  
};

/// Struct /Script/ControlRig.RigUnit_ParentSwitchConstraintArray
/// Size: 0x0190 (0x0001D0 - 0x000360)
struct FRigUnit_ParentSwitchConstraintArray : FRigUnitMutable
{ 
	FRigElementKey                                     Subject;                                                    // 0x01D0   (0x0008)  
	int32_t                                            ParentIndex;                                                // 0x01D8   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x01DC   (0x0004)  MISSED
	TArray<FRigElementKey>                             Parents;                                                    // 0x01E0   (0x0010)  
	FTransform                                         InitialGlobalTransform;                                     // 0x01F0   (0x0060)  
	float                                              Weight;                                                     // 0x0250   (0x0004)  
	unsigned char                                      UnknownData01_5[0xC];                                       // 0x0254   (0x000C)  MISSED
	FTransform                                         Transform;                                                  // 0x0260   (0x0060)  
	bool                                               Switched;                                                   // 0x02C0   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x02C1   (0x0007)  MISSED
	FCachedRigElement                                  CachedSubject;                                              // 0x02C8   (0x0018)  
	FCachedRigElement                                  CachedParent;                                               // 0x02E0   (0x0018)  
	unsigned char                                      UnknownData03_5[0x8];                                       // 0x02F8   (0x0008)  MISSED
	FTransform                                         RelativeOffset;                                             // 0x0300   (0x0060)  
};

/// Struct /Script/ControlRig.RigUnit_ProjectTransformToNewParent
/// Size: 0x00D8 (0x000008 - 0x0000E0)
struct FRigUnit_ProjectTransformToNewParent : FRigUnit
{ 
	FRigElementKey                                     Child;                                                      // 0x0008   (0x0008)  
	bool                                               bChildInitial;                                              // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0011   (0x0003)  MISSED
	FRigElementKey                                     OldParent;                                                  // 0x0014   (0x0008)  
	bool                                               bOldParentInitial;                                          // 0x001C   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x001D   (0x0003)  MISSED
	FRigElementKey                                     NewParent;                                                  // 0x0020   (0x0008)  
	bool                                               bNewParentInitial;                                          // 0x0028   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x0029   (0x0007)  MISSED
	FTransform                                         Transform;                                                  // 0x0030   (0x0060)  
	FCachedRigElement                                  CachedChild;                                                // 0x0090   (0x0018)  
	FCachedRigElement                                  CachedOldParent;                                            // 0x00A8   (0x0018)  
	FCachedRigElement                                  CachedNewParent;                                            // 0x00C0   (0x0018)  
	unsigned char                                      UnknownData03_6[0x8];                                       // 0x00D8   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_PropagateTransform
/// Size: 0x0030 (0x0001D0 - 0x000200)
struct FRigUnit_PropagateTransform : FRigUnitMutable
{ 
	FRigElementKey                                     Item;                                                       // 0x01D0   (0x0008)  
	bool                                               bRecomputeGlobal;                                           // 0x01D8   (0x0001)  
	bool                                               bApplyToChildren;                                           // 0x01D9   (0x0001)  
	bool                                               bRecursive;                                                 // 0x01DA   (0x0001)  
	unsigned char                                      UnknownData00_5[0x5];                                       // 0x01DB   (0x0005)  MISSED
	FCachedRigElement                                  CachedIndex;                                                // 0x01E0   (0x0018)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x01F8   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_SendEvent
/// Size: 0x0020 (0x0001D0 - 0x0001F0)
struct FRigUnit_SendEvent : FRigUnitMutable
{ 
	ERigEvent                                          Event;                                                      // 0x01D0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x01D1   (0x0003)  MISSED
	FRigElementKey                                     Item;                                                       // 0x01D4   (0x0008)  
	float                                              OffsetInSeconds;                                            // 0x01DC   (0x0004)  
	bool                                               bEnable;                                                    // 0x01E0   (0x0001)  
	bool                                               bOnlyDuringInteraction;                                     // 0x01E1   (0x0001)  
	unsigned char                                      UnknownData01_6[0xE];                                       // 0x01E2   (0x000E)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_SetBoneInitialTransform
/// Size: 0x00F0 (0x0001D0 - 0x0002C0)
struct FRigUnit_SetBoneInitialTransform : FRigUnitMutable
{ 
	FName                                              bone;                                                       // 0x01D0   (0x0004)  
	unsigned char                                      UnknownData00_5[0xC];                                       // 0x01D4   (0x000C)  MISSED
	FTransform                                         Transform;                                                  // 0x01E0   (0x0060)  
	FTransform                                         Result;                                                     // 0x0240   (0x0060)  
	ERigVMTransformSpace                               Space;                                                      // 0x02A0   (0x0001)  
	bool                                               bPropagateToChildren;                                       // 0x02A1   (0x0001)  
	unsigned char                                      UnknownData01_5[0x6];                                       // 0x02A2   (0x0006)  MISSED
	FCachedRigElement                                  CachedBone;                                                 // 0x02A8   (0x0018)  
};

/// Struct /Script/ControlRig.RigUnit_SetBoneRotation
/// Size: 0x0060 (0x0001D0 - 0x000230)
struct FRigUnit_SetBoneRotation : FRigUnitMutable
{ 
	FName                                              bone;                                                       // 0x01D0   (0x0004)  
	unsigned char                                      UnknownData00_5[0xC];                                       // 0x01D4   (0x000C)  MISSED
	FQuat                                              Rotation;                                                   // 0x01E0   (0x0020)  
	ERigVMTransformSpace                               Space;                                                      // 0x0200   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0201   (0x0003)  MISSED
	float                                              Weight;                                                     // 0x0204   (0x0004)  
	bool                                               bPropagateToChildren;                                       // 0x0208   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x0209   (0x0007)  MISSED
	FCachedRigElement                                  CachedBone;                                                 // 0x0210   (0x0018)  
	unsigned char                                      UnknownData03_6[0x8];                                       // 0x0228   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_SetBoneTransform
/// Size: 0x0100 (0x0001D0 - 0x0002D0)
struct FRigUnit_SetBoneTransform : FRigUnitMutable
{ 
	FName                                              bone;                                                       // 0x01D0   (0x0004)  
	unsigned char                                      UnknownData00_5[0xC];                                       // 0x01D4   (0x000C)  MISSED
	FTransform                                         Transform;                                                  // 0x01E0   (0x0060)  
	FTransform                                         Result;                                                     // 0x0240   (0x0060)  
	ERigVMTransformSpace                               Space;                                                      // 0x02A0   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x02A1   (0x0003)  MISSED
	float                                              Weight;                                                     // 0x02A4   (0x0004)  
	bool                                               bPropagateToChildren;                                       // 0x02A8   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x02A9   (0x0007)  MISSED
	FCachedRigElement                                  CachedBone;                                                 // 0x02B0   (0x0018)  
	unsigned char                                      UnknownData03_6[0x8];                                       // 0x02C8   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_SetBoneTranslation
/// Size: 0x0050 (0x0001D0 - 0x000220)
struct FRigUnit_SetBoneTranslation : FRigUnitMutable
{ 
	FName                                              bone;                                                       // 0x01D0   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x01D4   (0x0004)  MISSED
	FVector                                            Translation;                                                // 0x01D8   (0x0018)  
	ERigVMTransformSpace                               Space;                                                      // 0x01F0   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x01F1   (0x0003)  MISSED
	float                                              Weight;                                                     // 0x01F4   (0x0004)  
	bool                                               bPropagateToChildren;                                       // 0x01F8   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x01F9   (0x0007)  MISSED
	FCachedRigElement                                  CachedBone;                                                 // 0x0200   (0x0018)  
	unsigned char                                      UnknownData03_6[0x8];                                       // 0x0218   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_GetControlColor
/// Size: 0x0030 (0x000008 - 0x000038)
struct FRigUnit_GetControlColor : FRigUnit
{ 
	FName                                              Control;                                                    // 0x0008   (0x0004)  
	FLinearColor                                       Color;                                                      // 0x000C   (0x0010)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x001C   (0x0004)  MISSED
	FCachedRigElement                                  CachedControlIndex;                                         // 0x0020   (0x0018)  
};

/// Struct /Script/ControlRig.RigUnit_SetControlColor
/// Size: 0x0030 (0x0001D0 - 0x000200)
struct FRigUnit_SetControlColor : FRigUnitMutable
{ 
	FName                                              Control;                                                    // 0x01D0   (0x0004)  
	FLinearColor                                       Color;                                                      // 0x01D4   (0x0010)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x01E4   (0x0004)  MISSED
	FCachedRigElement                                  CachedControlIndex;                                         // 0x01E8   (0x0018)  
};

/// Struct /Script/ControlRig.RigUnit_GetControlDrivenList
/// Size: 0x0030 (0x000008 - 0x000038)
struct FRigUnit_GetControlDrivenList : FRigUnit
{ 
	FName                                              Control;                                                    // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	TArray<FRigElementKey>                             Driven;                                                     // 0x0010   (0x0010)  
	FCachedRigElement                                  CachedControlIndex;                                         // 0x0020   (0x0018)  
};

/// Struct /Script/ControlRig.RigUnit_SetControlDrivenList
/// Size: 0x0030 (0x0001D0 - 0x000200)
struct FRigUnit_SetControlDrivenList : FRigUnitMutable
{ 
	FName                                              Control;                                                    // 0x01D0   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x01D4   (0x0004)  MISSED
	TArray<FRigElementKey>                             Driven;                                                     // 0x01D8   (0x0010)  
	FCachedRigElement                                  CachedControlIndex;                                         // 0x01E8   (0x0018)  
};

/// Struct /Script/ControlRig.RigUnit_SetControlOffset
/// Size: 0x0090 (0x0001D0 - 0x000260)
struct FRigUnit_SetControlOffset : FRigUnitMutable
{ 
	FName                                              Control;                                                    // 0x01D0   (0x0004)  
	unsigned char                                      UnknownData00_5[0xC];                                       // 0x01D4   (0x000C)  MISSED
	FTransform                                         Offset;                                                     // 0x01E0   (0x0060)  
	ERigVMTransformSpace                               Space;                                                      // 0x0240   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0241   (0x0007)  MISSED
	FCachedRigElement                                  CachedControlIndex;                                         // 0x0248   (0x0018)  
};

/// Struct /Script/ControlRig.RigUnit_GetShapeTransform
/// Size: 0x0088 (0x000008 - 0x000090)
struct FRigUnit_GetShapeTransform : FRigUnit
{ 
	FName                                              Control;                                                    // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	FTransform                                         Transform;                                                  // 0x0010   (0x0060)  
	FCachedRigElement                                  CachedControlIndex;                                         // 0x0070   (0x0018)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0088   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_SetShapeTransform
/// Size: 0x0090 (0x0001D0 - 0x000260)
struct FRigUnit_SetShapeTransform : FRigUnitMutable
{ 
	FName                                              Control;                                                    // 0x01D0   (0x0004)  
	unsigned char                                      UnknownData00_5[0xC];                                       // 0x01D4   (0x000C)  MISSED
	FTransform                                         Transform;                                                  // 0x01E0   (0x0060)  
	FCachedRigElement                                  CachedControlIndex;                                         // 0x0240   (0x0018)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0258   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_SetControlBool
/// Size: 0x0020 (0x0001D0 - 0x0001F0)
struct FRigUnit_SetControlBool : FRigUnitMutable
{ 
	FName                                              Control;                                                    // 0x01D0   (0x0004)  
	bool                                               BoolValue;                                                  // 0x01D4   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x01D5   (0x0003)  MISSED
	FCachedRigElement                                  CachedControlIndex;                                         // 0x01D8   (0x0018)  
};

/// Struct /Script/ControlRig.RigUnit_SetMultiControlBool_Entry
/// Size: 0x0008 (0x000000 - 0x000008)
struct FRigUnit_SetMultiControlBool_Entry
{ 
	FName                                              Control;                                                    // 0x0000   (0x0004)  
	bool                                               BoolValue;                                                  // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0005   (0x0003)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_SetMultiControlBool
/// Size: 0x0020 (0x0001D0 - 0x0001F0)
struct FRigUnit_SetMultiControlBool : FRigUnitMutable
{ 
	TArray<FRigUnit_SetMultiControlBool_Entry>         Entries;                                                    // 0x01D0   (0x0010)  
	TArray<FCachedRigElement>                          CachedControlIndices;                                       // 0x01E0   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_SetControlFloat
/// Size: 0x0030 (0x0001D0 - 0x000200)
struct FRigUnit_SetControlFloat : FRigUnitMutable
{ 
	FName                                              Control;                                                    // 0x01D0   (0x0004)  
	float                                              Weight;                                                     // 0x01D4   (0x0004)  
	float                                              FloatValue;                                                 // 0x01D8   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x01DC   (0x0004)  MISSED
	FCachedRigElement                                  CachedControlIndex;                                         // 0x01E0   (0x0018)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x01F8   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_SetMultiControlFloat_Entry
/// Size: 0x0008 (0x000000 - 0x000008)
struct FRigUnit_SetMultiControlFloat_Entry
{ 
	FName                                              Control;                                                    // 0x0000   (0x0004)  
	float                                              FloatValue;                                                 // 0x0004   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_SetMultiControlFloat
/// Size: 0x0030 (0x0001D0 - 0x000200)
struct FRigUnit_SetMultiControlFloat : FRigUnitMutable
{ 
	TArray<FRigUnit_SetMultiControlFloat_Entry>        Entries;                                                    // 0x01D0   (0x0010)  
	float                                              Weight;                                                     // 0x01E0   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x01E4   (0x0004)  MISSED
	TArray<FCachedRigElement>                          CachedControlIndices;                                       // 0x01E8   (0x0010)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x01F8   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_SetControlInteger
/// Size: 0x0030 (0x0001D0 - 0x000200)
struct FRigUnit_SetControlInteger : FRigUnitMutable
{ 
	FName                                              Control;                                                    // 0x01D0   (0x0004)  
	int32_t                                            Weight;                                                     // 0x01D4   (0x0004)  
	int32_t                                            IntegerValue;                                               // 0x01D8   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x01DC   (0x0004)  MISSED
	FCachedRigElement                                  CachedControlIndex;                                         // 0x01E0   (0x0018)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x01F8   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_SetMultiControlInteger_Entry
/// Size: 0x0008 (0x000000 - 0x000008)
struct FRigUnit_SetMultiControlInteger_Entry
{ 
	FName                                              Control;                                                    // 0x0000   (0x0004)  
	int32_t                                            IntegerValue;                                               // 0x0004   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_SetMultiControlInteger
/// Size: 0x0030 (0x0001D0 - 0x000200)
struct FRigUnit_SetMultiControlInteger : FRigUnitMutable
{ 
	TArray<FRigUnit_SetMultiControlInteger_Entry>      Entries;                                                    // 0x01D0   (0x0010)  
	float                                              Weight;                                                     // 0x01E0   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x01E4   (0x0004)  MISSED
	TArray<FCachedRigElement>                          CachedControlIndices;                                       // 0x01E8   (0x0010)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x01F8   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_SetControlVector2D
/// Size: 0x0030 (0x0001D0 - 0x000200)
struct FRigUnit_SetControlVector2D : FRigUnitMutable
{ 
	FName                                              Control;                                                    // 0x01D0   (0x0004)  
	float                                              Weight;                                                     // 0x01D4   (0x0004)  
	FVector2D                                          Vector;                                                     // 0x01D8   (0x0010)  
	FCachedRigElement                                  CachedControlIndex;                                         // 0x01E8   (0x0018)  
};

/// Struct /Script/ControlRig.RigUnit_SetMultiControlVector2D_Entry
/// Size: 0x0018 (0x000000 - 0x000018)
struct FRigUnit_SetMultiControlVector2D_Entry
{ 
	FName                                              Control;                                                    // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	FVector2D                                          Vector;                                                     // 0x0008   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_SetMultiControlVector2D
/// Size: 0x0030 (0x0001D0 - 0x000200)
struct FRigUnit_SetMultiControlVector2D : FRigUnitMutable
{ 
	TArray<FRigUnit_SetMultiControlVector2D_Entry>     Entries;                                                    // 0x01D0   (0x0010)  
	float                                              Weight;                                                     // 0x01E0   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x01E4   (0x0004)  MISSED
	TArray<FCachedRigElement>                          CachedControlIndices;                                       // 0x01E8   (0x0010)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x01F8   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_SetControlVector
/// Size: 0x0040 (0x0001D0 - 0x000210)
struct FRigUnit_SetControlVector : FRigUnitMutable
{ 
	FName                                              Control;                                                    // 0x01D0   (0x0004)  
	float                                              Weight;                                                     // 0x01D4   (0x0004)  
	FVector                                            Vector;                                                     // 0x01D8   (0x0018)  
	ERigVMTransformSpace                               Space;                                                      // 0x01F0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x01F1   (0x0007)  MISSED
	FCachedRigElement                                  CachedControlIndex;                                         // 0x01F8   (0x0018)  
};

/// Struct /Script/ControlRig.RigUnit_SetControlRotator
/// Size: 0x0040 (0x0001D0 - 0x000210)
struct FRigUnit_SetControlRotator : FRigUnitMutable
{ 
	FName                                              Control;                                                    // 0x01D0   (0x0004)  
	float                                              Weight;                                                     // 0x01D4   (0x0004)  
	FRotator                                           Rotator;                                                    // 0x01D8   (0x0018)  
	ERigVMTransformSpace                               Space;                                                      // 0x01F0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x01F1   (0x0007)  MISSED
	FCachedRigElement                                  CachedControlIndex;                                         // 0x01F8   (0x0018)  
};

/// Struct /Script/ControlRig.RigUnit_SetMultiControlRotator_Entry
/// Size: 0x0028 (0x000000 - 0x000028)
struct FRigUnit_SetMultiControlRotator_Entry
{ 
	FName                                              Control;                                                    // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	FRotator                                           Rotator;                                                    // 0x0008   (0x0018)  
	ERigVMTransformSpace                               Space;                                                      // 0x0020   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0021   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_SetMultiControlRotator
/// Size: 0x0030 (0x0001D0 - 0x000200)
struct FRigUnit_SetMultiControlRotator : FRigUnitMutable
{ 
	TArray<FRigUnit_SetMultiControlRotator_Entry>      Entries;                                                    // 0x01D0   (0x0010)  
	float                                              Weight;                                                     // 0x01E0   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x01E4   (0x0004)  MISSED
	TArray<FCachedRigElement>                          CachedControlIndices;                                       // 0x01E8   (0x0010)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x01F8   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_SetControlTransform
/// Size: 0x0090 (0x0001D0 - 0x000260)
struct FRigUnit_SetControlTransform : FRigUnitMutable
{ 
	FName                                              Control;                                                    // 0x01D0   (0x0004)  
	float                                              Weight;                                                     // 0x01D4   (0x0004)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x01D8   (0x0008)  MISSED
	FTransform                                         Transform;                                                  // 0x01E0   (0x0060)  
	ERigVMTransformSpace                               Space;                                                      // 0x0240   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0241   (0x0007)  MISSED
	FCachedRigElement                                  CachedControlIndex;                                         // 0x0248   (0x0018)  
};

/// Struct /Script/ControlRig.RigUnit_GetControlVisibility
/// Size: 0x0028 (0x000008 - 0x000030)
struct FRigUnit_GetControlVisibility : FRigUnit
{ 
	FRigElementKey                                     Item;                                                       // 0x0008   (0x0008)  
	bool                                               bVisible;                                                   // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0011   (0x0007)  MISSED
	FCachedRigElement                                  CachedControlIndex;                                         // 0x0018   (0x0018)  
};

/// Struct /Script/ControlRig.RigUnit_SetControlVisibility
/// Size: 0x0030 (0x0001D0 - 0x000200)
struct FRigUnit_SetControlVisibility : FRigUnitMutable
{ 
	FRigElementKey                                     Item;                                                       // 0x01D0   (0x0008)  
	SDK_UNDEFINED(16,12562) /* FString */              __um(Pattern);                                              // 0x01D8   (0x0010)  
	bool                                               bVisible;                                                   // 0x01E8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x01E9   (0x0007)  MISSED
	TArray<FCachedRigElement>                          CachedControlIndices;                                       // 0x01F0   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_SetCurveValue
/// Size: 0x0020 (0x0001D0 - 0x0001F0)
struct FRigUnit_SetCurveValue : FRigUnitMutable
{ 
	FName                                              Curve;                                                      // 0x01D0   (0x0004)  
	float                                              Value;                                                      // 0x01D4   (0x0004)  
	FCachedRigElement                                  CachedCurveIndex;                                           // 0x01D8   (0x0018)  
};

/// Struct /Script/ControlRig.RigUnit_SetRelativeBoneTransform
/// Size: 0x00B0 (0x0001D0 - 0x000280)
struct FRigUnit_SetRelativeBoneTransform : FRigUnitMutable
{ 
	FName                                              bone;                                                       // 0x01D0   (0x0004)  
	FName                                              Space;                                                      // 0x01D4   (0x0004)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x01D8   (0x0008)  MISSED
	FTransform                                         Transform;                                                  // 0x01E0   (0x0060)  
	float                                              Weight;                                                     // 0x0240   (0x0004)  
	bool                                               bPropagateToChildren;                                       // 0x0244   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0245   (0x0003)  MISSED
	FCachedRigElement                                  CachedBone;                                                 // 0x0248   (0x0018)  
	FCachedRigElement                                  CachedSpaceIndex;                                           // 0x0260   (0x0018)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x0278   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_SetRelativeTransformForItem
/// Size: 0x00C0 (0x0001D0 - 0x000290)
struct FRigUnit_SetRelativeTransformForItem : FRigUnitMutable
{ 
	FRigElementKey                                     Child;                                                      // 0x01D0   (0x0008)  
	FRigElementKey                                     Parent;                                                     // 0x01D8   (0x0008)  
	bool                                               bParentInitial;                                             // 0x01E0   (0x0001)  
	unsigned char                                      UnknownData00_5[0xF];                                       // 0x01E1   (0x000F)  MISSED
	FTransform                                         Value;                                                      // 0x01F0   (0x0060)  
	float                                              Weight;                                                     // 0x0250   (0x0004)  
	bool                                               bPropagateToChildren;                                       // 0x0254   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0255   (0x0003)  MISSED
	FCachedRigElement                                  CachedChild;                                                // 0x0258   (0x0018)  
	FCachedRigElement                                  CachedParent;                                               // 0x0270   (0x0018)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x0288   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_SetRelativeTranslationForItem
/// Size: 0x0070 (0x0001D0 - 0x000240)
struct FRigUnit_SetRelativeTranslationForItem : FRigUnitMutable
{ 
	FRigElementKey                                     Child;                                                      // 0x01D0   (0x0008)  
	FRigElementKey                                     Parent;                                                     // 0x01D8   (0x0008)  
	bool                                               bParentInitial;                                             // 0x01E0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x01E1   (0x0007)  MISSED
	FVector                                            Value;                                                      // 0x01E8   (0x0018)  
	float                                              Weight;                                                     // 0x0200   (0x0004)  
	bool                                               bPropagateToChildren;                                       // 0x0204   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0205   (0x0003)  MISSED
	FCachedRigElement                                  CachedChild;                                                // 0x0208   (0x0018)  
	FCachedRigElement                                  CachedParent;                                               // 0x0220   (0x0018)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x0238   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_SetRelativeRotationForItem
/// Size: 0x0080 (0x0001D0 - 0x000250)
struct FRigUnit_SetRelativeRotationForItem : FRigUnitMutable
{ 
	FRigElementKey                                     Child;                                                      // 0x01D0   (0x0008)  
	FRigElementKey                                     Parent;                                                     // 0x01D8   (0x0008)  
	bool                                               bParentInitial;                                             // 0x01E0   (0x0001)  
	unsigned char                                      UnknownData00_5[0xF];                                       // 0x01E1   (0x000F)  MISSED
	FQuat                                              Value;                                                      // 0x01F0   (0x0020)  
	float                                              Weight;                                                     // 0x0210   (0x0004)  
	bool                                               bPropagateToChildren;                                       // 0x0214   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0215   (0x0003)  MISSED
	FCachedRigElement                                  CachedChild;                                                // 0x0218   (0x0018)  
	FCachedRigElement                                  CachedParent;                                               // 0x0230   (0x0018)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x0248   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_SetSpaceInitialTransform
/// Size: 0x00F0 (0x0001D0 - 0x0002C0)
struct FRigUnit_SetSpaceInitialTransform : FRigUnitMutable
{ 
	FName                                              SpaceName;                                                  // 0x01D0   (0x0004)  
	unsigned char                                      UnknownData00_5[0xC];                                       // 0x01D4   (0x000C)  MISSED
	FTransform                                         Transform;                                                  // 0x01E0   (0x0060)  
	FTransform                                         Result;                                                     // 0x0240   (0x0060)  
	ERigVMTransformSpace                               Space;                                                      // 0x02A0   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x02A1   (0x0007)  MISSED
	FCachedRigElement                                  CachedSpaceIndex;                                           // 0x02A8   (0x0018)  
};

/// Struct /Script/ControlRig.RigUnit_SetSpaceTransform
/// Size: 0x0090 (0x0001D0 - 0x000260)
struct FRigUnit_SetSpaceTransform : FRigUnitMutable
{ 
	FName                                              Space;                                                      // 0x01D0   (0x0004)  
	float                                              Weight;                                                     // 0x01D4   (0x0004)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x01D8   (0x0008)  MISSED
	FTransform                                         Transform;                                                  // 0x01E0   (0x0060)  
	ERigVMTransformSpace                               SpaceType;                                                  // 0x0240   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0241   (0x0007)  MISSED
	FCachedRigElement                                  CachedSpaceIndex;                                           // 0x0248   (0x0018)  
};

/// Struct /Script/ControlRig.RigUnit_SetTransform
/// Size: 0x0090 (0x0001D0 - 0x000260)
struct FRigUnit_SetTransform : FRigUnitMutable
{ 
	FRigElementKey                                     Item;                                                       // 0x01D0   (0x0008)  
	ERigVMTransformSpace                               Space;                                                      // 0x01D8   (0x0001)  
	bool                                               bInitial;                                                   // 0x01D9   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x01DA   (0x0006)  MISSED
	FTransform                                         Value;                                                      // 0x01E0   (0x0060)  
	float                                              Weight;                                                     // 0x0240   (0x0004)  
	bool                                               bPropagateToChildren;                                       // 0x0244   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0245   (0x0003)  MISSED
	FCachedRigElement                                  CachedIndex;                                                // 0x0248   (0x0018)  
};

/// Struct /Script/ControlRig.RigUnit_SetTranslation
/// Size: 0x0050 (0x0001D0 - 0x000220)
struct FRigUnit_SetTranslation : FRigUnitMutable
{ 
	FRigElementKey                                     Item;                                                       // 0x01D0   (0x0008)  
	ERigVMTransformSpace                               Space;                                                      // 0x01D8   (0x0001)  
	bool                                               bInitial;                                                   // 0x01D9   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x01DA   (0x0006)  MISSED
	FVector                                            Value;                                                      // 0x01E0   (0x0018)  
	float                                              Weight;                                                     // 0x01F8   (0x0004)  
	bool                                               bPropagateToChildren;                                       // 0x01FC   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x01FD   (0x0003)  MISSED
	FCachedRigElement                                  CachedIndex;                                                // 0x0200   (0x0018)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x0218   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_SetRotation
/// Size: 0x0050 (0x0001D0 - 0x000220)
struct FRigUnit_SetRotation : FRigUnitMutable
{ 
	FRigElementKey                                     Item;                                                       // 0x01D0   (0x0008)  
	ERigVMTransformSpace                               Space;                                                      // 0x01D8   (0x0001)  
	bool                                               bInitial;                                                   // 0x01D9   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x01DA   (0x0006)  MISSED
	FQuat                                              Value;                                                      // 0x01E0   (0x0020)  
	float                                              Weight;                                                     // 0x0200   (0x0004)  
	bool                                               bPropagateToChildren;                                       // 0x0204   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0205   (0x0003)  MISSED
	FCachedRigElement                                  CachedIndex;                                                // 0x0208   (0x0018)  
};

/// Struct /Script/ControlRig.RigUnit_SetScale
/// Size: 0x0050 (0x0001D0 - 0x000220)
struct FRigUnit_SetScale : FRigUnitMutable
{ 
	FRigElementKey                                     Item;                                                       // 0x01D0   (0x0008)  
	ERigVMTransformSpace                               Space;                                                      // 0x01D8   (0x0001)  
	bool                                               bInitial;                                                   // 0x01D9   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x01DA   (0x0006)  MISSED
	FVector                                            Scale;                                                      // 0x01E0   (0x0018)  
	float                                              Weight;                                                     // 0x01F8   (0x0004)  
	bool                                               bPropagateToChildren;                                       // 0x01FC   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x01FD   (0x0003)  MISSED
	FCachedRigElement                                  CachedIndex;                                                // 0x0200   (0x0018)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x0218   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_SetTransformArray
/// Size: 0x0040 (0x0001D0 - 0x000210)
struct FRigUnit_SetTransformArray : FRigUnitMutable
{ 
	FRigElementKeyCollection                           Items;                                                      // 0x01D0   (0x0010)  
	ERigVMTransformSpace                               Space;                                                      // 0x01E0   (0x0001)  
	bool                                               bInitial;                                                   // 0x01E1   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x01E2   (0x0006)  MISSED
	TArray<FTransform>                                 Transforms;                                                 // 0x01E8   (0x0010)  
	float                                              Weight;                                                     // 0x01F8   (0x0004)  
	bool                                               bPropagateToChildren;                                       // 0x01FC   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x01FD   (0x0003)  MISSED
	TArray<FCachedRigElement>                          CachedIndex;                                                // 0x0200   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_SetTransformItemArray
/// Size: 0x0040 (0x0001D0 - 0x000210)
struct FRigUnit_SetTransformItemArray : FRigUnitMutable
{ 
	TArray<FRigElementKey>                             Items;                                                      // 0x01D0   (0x0010)  
	ERigVMTransformSpace                               Space;                                                      // 0x01E0   (0x0001)  
	bool                                               bInitial;                                                   // 0x01E1   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x01E2   (0x0006)  MISSED
	TArray<FTransform>                                 Transforms;                                                 // 0x01E8   (0x0010)  
	float                                              Weight;                                                     // 0x01F8   (0x0004)  
	bool                                               bPropagateToChildren;                                       // 0x01FC   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x01FD   (0x0003)  MISSED
	TArray<FCachedRigElement>                          CachedIndex;                                                // 0x0200   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_UnsetCurveValue
/// Size: 0x0020 (0x0001D0 - 0x0001F0)
struct FRigUnit_UnsetCurveValue : FRigUnitMutable
{ 
	FName                                              Curve;                                                      // 0x01D0   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x01D4   (0x0004)  MISSED
	FCachedRigElement                                  CachedCurveIndex;                                           // 0x01D8   (0x0018)  
};

/// Struct /Script/ControlRig.RigUnit_ToWorldSpace_Transform
/// Size: 0x00C8 (0x000008 - 0x0000D0)
struct FRigUnit_ToWorldSpace_Transform : FRigUnit
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         Value;                                                      // 0x0010   (0x0060)  
	FTransform                                         World;                                                      // 0x0070   (0x0060)  
};

/// Struct /Script/ControlRig.RigUnit_ToRigSpace_Transform
/// Size: 0x00C8 (0x000008 - 0x0000D0)
struct FRigUnit_ToRigSpace_Transform : FRigUnit
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         Value;                                                      // 0x0010   (0x0060)  
	FTransform                                         Global;                                                     // 0x0070   (0x0060)  
};

/// Struct /Script/ControlRig.RigUnit_ToWorldSpace_Location
/// Size: 0x0030 (0x000008 - 0x000038)
struct FRigUnit_ToWorldSpace_Location : FRigUnit
{ 
	FVector                                            Value;                                                      // 0x0008   (0x0018)  
	FVector                                            World;                                                      // 0x0020   (0x0018)  
};

/// Struct /Script/ControlRig.RigUnit_ToRigSpace_Location
/// Size: 0x0030 (0x000008 - 0x000038)
struct FRigUnit_ToRigSpace_Location : FRigUnit
{ 
	FVector                                            Value;                                                      // 0x0008   (0x0018)  
	FVector                                            Global;                                                     // 0x0020   (0x0018)  
};

/// Struct /Script/ControlRig.RigUnit_ToWorldSpace_Rotation
/// Size: 0x0048 (0x000008 - 0x000050)
struct FRigUnit_ToWorldSpace_Rotation : FRigUnit
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              Value;                                                      // 0x0010   (0x0020)  
	FQuat                                              World;                                                      // 0x0030   (0x0020)  
};

/// Struct /Script/ControlRig.RigUnit_ToRigSpace_Rotation
/// Size: 0x0048 (0x000008 - 0x000050)
struct FRigUnit_ToRigSpace_Rotation : FRigUnit
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              Value;                                                      // 0x0010   (0x0020)  
	FQuat                                              Global;                                                     // 0x0030   (0x0020)  
};

/// Struct /Script/ControlRig.RigUnit_BoneHarmonics_BoneTarget
/// Size: 0x0008 (0x000000 - 0x000008)
struct FRigUnit_BoneHarmonics_BoneTarget
{ 
	FName                                              bone;                                                       // 0x0000   (0x0004)  
	float                                              Ratio;                                                      // 0x0004   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_Harmonics_TargetItem
/// Size: 0x000C (0x000000 - 0x00000C)
struct FRigUnit_Harmonics_TargetItem
{ 
	FRigElementKey                                     Item;                                                       // 0x0000   (0x0008)  
	float                                              Ratio;                                                      // 0x0008   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_BoneHarmonics_WorkData
/// Size: 0x0028 (0x000000 - 0x000028)
struct FRigUnit_BoneHarmonics_WorkData
{ 
	TArray<FCachedRigElement>                          CachedItems;                                                // 0x0000   (0x0010)  
	FVector                                            WaveTime;                                                   // 0x0010   (0x0018)  
};

/// Struct /Script/ControlRig.RigUnit_BoneHarmonics
/// Size: 0x00C0 (0x0001D0 - 0x000290)
struct FRigUnit_BoneHarmonics : FRigUnit_HighlevelBaseMutable
{ 
	TArray<FRigUnit_BoneHarmonics_BoneTarget>          Bones;                                                      // 0x01D0   (0x0010)  
	FVector                                            WaveSpeed;                                                  // 0x01E0   (0x0018)  
	FVector                                            WaveFrequency;                                              // 0x01F8   (0x0018)  
	FVector                                            WaveAmplitude;                                              // 0x0210   (0x0018)  
	FVector                                            WaveOffset;                                                 // 0x0228   (0x0018)  
	FVector                                            WaveNoise;                                                  // 0x0240   (0x0018)  
	ERigVMAnimEasingType                               WaveEase;                                                   // 0x0258   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0259   (0x0003)  MISSED
	float                                              WaveMinimum;                                                // 0x025C   (0x0004)  
	float                                              WaveMaximum;                                                // 0x0260   (0x0004)  
	EEulerRotationOrder                                RotationOrder;                                              // 0x0264   (0x0001)  
	bool                                               bPropagateToChildren;                                       // 0x0265   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x0266   (0x0002)  MISSED
	FRigUnit_BoneHarmonics_WorkData                    WorkData;                                                   // 0x0268   (0x0028)  
};

/// Struct /Script/ControlRig.RigUnit_ItemHarmonics
/// Size: 0x00C0 (0x0001D0 - 0x000290)
struct FRigUnit_ItemHarmonics : FRigUnit_HighlevelBaseMutable
{ 
	TArray<FRigUnit_Harmonics_TargetItem>              Targets;                                                    // 0x01D0   (0x0010)  
	FVector                                            WaveSpeed;                                                  // 0x01E0   (0x0018)  
	FVector                                            WaveFrequency;                                              // 0x01F8   (0x0018)  
	FVector                                            WaveAmplitude;                                              // 0x0210   (0x0018)  
	FVector                                            WaveOffset;                                                 // 0x0228   (0x0018)  
	FVector                                            WaveNoise;                                                  // 0x0240   (0x0018)  
	ERigVMAnimEasingType                               WaveEase;                                                   // 0x0258   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0259   (0x0003)  MISSED
	float                                              WaveMinimum;                                                // 0x025C   (0x0004)  
	float                                              WaveMaximum;                                                // 0x0260   (0x0004)  
	EEulerRotationOrder                                RotationOrder;                                              // 0x0264   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0265   (0x0003)  MISSED
	FRigUnit_BoneHarmonics_WorkData                    WorkData;                                                   // 0x0268   (0x0028)  
};

/// Struct /Script/ControlRig.RigUnit_ChainHarmonics_Reach
/// Size: 0x0048 (0x000000 - 0x000048)
struct FRigUnit_ChainHarmonics_Reach
{ 
	bool                                               bEnabled;                                                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	FVector                                            ReachTarget;                                                // 0x0008   (0x0018)  
	FVector                                            ReachAxis;                                                  // 0x0020   (0x0018)  
	float                                              ReachMinimum;                                               // 0x0038   (0x0004)  
	float                                              ReachMaximum;                                               // 0x003C   (0x0004)  
	ERigVMAnimEasingType                               ReachEase;                                                  // 0x0040   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0041   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_ChainHarmonics_Wave
/// Size: 0x0078 (0x000000 - 0x000078)
struct FRigUnit_ChainHarmonics_Wave
{ 
	bool                                               bEnabled;                                                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	FVector                                            WaveFrequency;                                              // 0x0008   (0x0018)  
	FVector                                            WaveAmplitude;                                              // 0x0020   (0x0018)  
	FVector                                            WaveOffset;                                                 // 0x0038   (0x0018)  
	FVector                                            WaveNoise;                                                  // 0x0050   (0x0018)  
	float                                              WaveMinimum;                                                // 0x0068   (0x0004)  
	float                                              WaveMaximum;                                                // 0x006C   (0x0004)  
	ERigVMAnimEasingType                               WaveEase;                                                   // 0x0070   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0071   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_ChainHarmonics_Pendulum
/// Size: 0x0058 (0x000000 - 0x000058)
struct FRigUnit_ChainHarmonics_Pendulum
{ 
	bool                                               bEnabled;                                                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              PendulumStiffness;                                          // 0x0004   (0x0004)  
	FVector                                            PendulumGravity;                                            // 0x0008   (0x0018)  
	float                                              PendulumBlend;                                              // 0x0020   (0x0004)  
	float                                              PendulumDrag;                                               // 0x0024   (0x0004)  
	float                                              PendulumMinimum;                                            // 0x0028   (0x0004)  
	float                                              PendulumMaximum;                                            // 0x002C   (0x0004)  
	ERigVMAnimEasingType                               PendulumEase;                                               // 0x0030   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0031   (0x0007)  MISSED
	FVector                                            UnwindAxis;                                                 // 0x0038   (0x0018)  
	float                                              UnwindMinimum;                                              // 0x0050   (0x0004)  
	float                                              UnwindMaximum;                                              // 0x0054   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_ChainHarmonics_WorkData
/// Size: 0x0098 (0x000000 - 0x000098)
struct FRigUnit_ChainHarmonics_WorkData
{ 
	FVector                                            Time;                                                       // 0x0000   (0x0018)  
	TArray<FCachedRigElement>                          Items;                                                      // 0x0018   (0x0010)  
	TArray<float>                                      Ratio;                                                      // 0x0028   (0x0010)  
	TArray<FVector>                                    LocalTip;                                                   // 0x0038   (0x0010)  
	TArray<FVector>                                    PendulumTip;                                                // 0x0048   (0x0010)  
	TArray<FVector>                                    PendulumPosition;                                           // 0x0058   (0x0010)  
	TArray<FVector>                                    PendulumVelocity;                                           // 0x0068   (0x0010)  
	TArray<FVector>                                    HierarchyLine;                                              // 0x0078   (0x0010)  
	TArray<FVector>                                    VelocityLines;                                              // 0x0088   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_ChainHarmonics
/// Size: 0x02D0 (0x0001D0 - 0x0004A0)
struct FRigUnit_ChainHarmonics : FRigUnit_HighlevelBaseMutable
{ 
	FName                                              ChainRoot;                                                  // 0x01D0   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x01D4   (0x0004)  MISSED
	FVector                                            Speed;                                                      // 0x01D8   (0x0018)  
	FRigUnit_ChainHarmonics_Reach                      Reach;                                                      // 0x01F0   (0x0048)  
	FRigUnit_ChainHarmonics_Wave                       Wave;                                                       // 0x0238   (0x0078)  
	FRuntimeFloatCurve                                 WaveCurve;                                                  // 0x02B0   (0x0088)  
	FRigUnit_ChainHarmonics_Pendulum                   Pendulum;                                                   // 0x0338   (0x0058)  
	bool                                               bDrawDebug;                                                 // 0x0390   (0x0001)  
	unsigned char                                      UnknownData01_5[0xF];                                       // 0x0391   (0x000F)  MISSED
	FTransform                                         DrawWorldOffset;                                            // 0x03A0   (0x0060)  
	FRigUnit_ChainHarmonics_WorkData                   WorkData;                                                   // 0x0400   (0x0098)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x0498   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_ChainHarmonicsPerItem
/// Size: 0x02D0 (0x0001D0 - 0x0004A0)
struct FRigUnit_ChainHarmonicsPerItem : FRigUnit_HighlevelBaseMutable
{ 
	FRigElementKey                                     ChainRoot;                                                  // 0x01D0   (0x0008)  
	FVector                                            Speed;                                                      // 0x01D8   (0x0018)  
	FRigUnit_ChainHarmonics_Reach                      Reach;                                                      // 0x01F0   (0x0048)  
	FRigUnit_ChainHarmonics_Wave                       Wave;                                                       // 0x0238   (0x0078)  
	FRuntimeFloatCurve                                 WaveCurve;                                                  // 0x02B0   (0x0088)  
	FRigUnit_ChainHarmonics_Pendulum                   Pendulum;                                                   // 0x0338   (0x0058)  
	bool                                               bDrawDebug;                                                 // 0x0390   (0x0001)  
	unsigned char                                      UnknownData00_5[0xF];                                       // 0x0391   (0x000F)  MISSED
	FTransform                                         DrawWorldOffset;                                            // 0x03A0   (0x0060)  
	FRigUnit_ChainHarmonics_WorkData                   WorkData;                                                   // 0x0400   (0x0098)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0498   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_AimBone_Target
/// Size: 0x0040 (0x000000 - 0x000040)
struct FRigUnit_AimBone_Target
{ 
	float                                              Weight;                                                     // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	FVector                                            Axis;                                                       // 0x0008   (0x0018)  
	FVector                                            Target;                                                     // 0x0020   (0x0018)  
	EControlRigVectorKind                              Kind;                                                       // 0x0038   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0039   (0x0003)  MISSED
	FName                                              Space;                                                      // 0x003C   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_AimItem_Target
/// Size: 0x0048 (0x000000 - 0x000048)
struct FRigUnit_AimItem_Target
{ 
	float                                              Weight;                                                     // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	FVector                                            Axis;                                                       // 0x0008   (0x0018)  
	FVector                                            Target;                                                     // 0x0020   (0x0018)  
	EControlRigVectorKind                              Kind;                                                       // 0x0038   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0039   (0x0003)  MISSED
	FRigElementKey                                     Space;                                                      // 0x003C   (0x0008)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x0044   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_AimBone_DebugSettings
/// Size: 0x0070 (0x000000 - 0x000070)
struct FRigUnit_AimBone_DebugSettings
{ 
	bool                                               bEnabled;                                                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              Scale;                                                      // 0x0004   (0x0004)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         WorldOffset;                                                // 0x0010   (0x0060)  
};

/// Struct /Script/ControlRig.RigUnit_AimBoneMath
/// Size: 0x0218 (0x000008 - 0x000220)
struct FRigUnit_AimBoneMath : FRigUnit_HighlevelBase
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         InputTransform;                                             // 0x0010   (0x0060)  
	FRigUnit_AimItem_Target                            Primary;                                                    // 0x0070   (0x0048)  
	FRigUnit_AimItem_Target                            Secondary;                                                  // 0x00B8   (0x0048)  
	float                                              Weight;                                                     // 0x0100   (0x0004)  
	unsigned char                                      UnknownData01_5[0xC];                                       // 0x0104   (0x000C)  MISSED
	FTransform                                         Result;                                                     // 0x0110   (0x0060)  
	FRigUnit_AimBone_DebugSettings                     DebugSettings;                                              // 0x0170   (0x0070)  
	FCachedRigElement                                  PrimaryCachedSpace;                                         // 0x01E0   (0x0018)  
	FCachedRigElement                                  SecondaryCachedSpace;                                       // 0x01F8   (0x0018)  
	bool                                               bIsInitialized;                                             // 0x0210   (0x0001)  
	unsigned char                                      UnknownData02_6[0xF];                                       // 0x0211   (0x000F)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_AimBone
/// Size: 0x0150 (0x0001D0 - 0x000320)
struct FRigUnit_AimBone : FRigUnit_HighlevelBaseMutable
{ 
	FName                                              bone;                                                       // 0x01D0   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x01D4   (0x0004)  MISSED
	FRigUnit_AimBone_Target                            Primary;                                                    // 0x01D8   (0x0040)  
	FRigUnit_AimBone_Target                            Secondary;                                                  // 0x0218   (0x0040)  
	float                                              Weight;                                                     // 0x0258   (0x0004)  
	bool                                               bPropagateToChildren;                                       // 0x025C   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x025D   (0x0003)  MISSED
	FRigUnit_AimBone_DebugSettings                     DebugSettings;                                              // 0x0260   (0x0070)  
	FCachedRigElement                                  CachedBoneIndex;                                            // 0x02D0   (0x0018)  
	FCachedRigElement                                  PrimaryCachedSpace;                                         // 0x02E8   (0x0018)  
	FCachedRigElement                                  SecondaryCachedSpace;                                       // 0x0300   (0x0018)  
	bool                                               bIsInitialized;                                             // 0x0318   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x0319   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_AimItem
/// Size: 0x0160 (0x0001D0 - 0x000330)
struct FRigUnit_AimItem : FRigUnit_HighlevelBaseMutable
{ 
	FRigElementKey                                     Item;                                                       // 0x01D0   (0x0008)  
	FRigUnit_AimItem_Target                            Primary;                                                    // 0x01D8   (0x0048)  
	FRigUnit_AimItem_Target                            Secondary;                                                  // 0x0220   (0x0048)  
	float                                              Weight;                                                     // 0x0268   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x026C   (0x0004)  MISSED
	FRigUnit_AimBone_DebugSettings                     DebugSettings;                                              // 0x0270   (0x0070)  
	FCachedRigElement                                  CachedItem;                                                 // 0x02E0   (0x0018)  
	FCachedRigElement                                  PrimaryCachedSpace;                                         // 0x02F8   (0x0018)  
	FCachedRigElement                                  SecondaryCachedSpace;                                       // 0x0310   (0x0018)  
	bool                                               bIsInitialized;                                             // 0x0328   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0329   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_AimConstraint_WorldUp
/// Size: 0x0028 (0x000000 - 0x000028)
struct FRigUnit_AimConstraint_WorldUp
{ 
	FVector                                            Target;                                                     // 0x0000   (0x0018)  
	EControlRigVectorKind                              Kind;                                                       // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0019   (0x0003)  MISSED
	FRigElementKey                                     Space;                                                      // 0x001C   (0x0008)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_AimConstraint_AdvancedSettings
/// Size: 0x0080 (0x000000 - 0x000080)
struct FRigUnit_AimConstraint_AdvancedSettings
{ 
	FRigUnit_AimBone_DebugSettings                     DebugSettings;                                              // 0x0000   (0x0070)  
	EEulerRotationOrder                                RotationOrderForFilter;                                     // 0x0070   (0x0001)  
	unsigned char                                      UnknownData00_6[0xF];                                       // 0x0071   (0x000F)  MISSED
};

/// Struct /Script/ControlRig.ConstraintParent
/// Size: 0x000C (0x000000 - 0x00000C)
struct FConstraintParent
{ 
	FRigElementKey                                     Item;                                                       // 0x0000   (0x0008)  
	float                                              Weight;                                                     // 0x0008   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_AimConstraintLocalSpaceOffset
/// Size: 0x0150 (0x0001D0 - 0x000320)
struct FRigUnit_AimConstraintLocalSpaceOffset : FRigUnit_HighlevelBaseMutable
{ 
	FRigElementKey                                     Child;                                                      // 0x01D0   (0x0008)  
	bool                                               bMaintainOffset;                                            // 0x01D8   (0x0001)  
	FFilterOptionPerAxis                               Filter;                                                     // 0x01D9   (0x0003)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x01DC   (0x0004)  MISSED
	FVector                                            AimAxis;                                                    // 0x01E0   (0x0018)  
	FVector                                            UpAxis;                                                     // 0x01F8   (0x0018)  
	FRigUnit_AimConstraint_WorldUp                     WorldUp;                                                    // 0x0210   (0x0028)  
	TArray<FConstraintParent>                          Parents;                                                    // 0x0238   (0x0010)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x0248   (0x0008)  MISSED
	FRigUnit_AimConstraint_AdvancedSettings            AdvancedSettings;                                           // 0x0250   (0x0080)  
	float                                              Weight;                                                     // 0x02D0   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x02D4   (0x0004)  MISSED
	FCachedRigElement                                  WorldUpSpaceCache;                                          // 0x02D8   (0x0018)  
	FCachedRigElement                                  ChildCache;                                                 // 0x02F0   (0x0018)  
	TArray<FCachedRigElement>                          ParentCaches;                                               // 0x0308   (0x0010)  
	bool                                               bIsInitialized;                                             // 0x0318   (0x0001)  
	unsigned char                                      UnknownData03_6[0x7];                                       // 0x0319   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_CCDIK_RotationLimit
/// Size: 0x0008 (0x000000 - 0x000008)
struct FRigUnit_CCDIK_RotationLimit
{ 
	FName                                              bone;                                                       // 0x0000   (0x0004)  
	float                                              Limit;                                                      // 0x0004   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_CCDIK_RotationLimitPerItem
/// Size: 0x000C (0x000000 - 0x00000C)
struct FRigUnit_CCDIK_RotationLimitPerItem
{ 
	FRigElementKey                                     Item;                                                       // 0x0000   (0x0008)  
	float                                              Limit;                                                      // 0x0008   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_CCDIK_WorkData
/// Size: 0x0058 (0x000000 - 0x000058)
struct FRigUnit_CCDIK_WorkData
{ 
	TArray<FCCDIKChainLink>                            Chain;                                                      // 0x0000   (0x0010)  
	TArray<FCachedRigElement>                          CachedItems;                                                // 0x0010   (0x0010)  
	TArray<int32_t>                                    RotationLimitIndex;                                         // 0x0020   (0x0010)  
	TArray<float>                                      RotationLimitsPerItem;                                      // 0x0030   (0x0010)  
	FCachedRigElement                                  CachedEffector;                                             // 0x0040   (0x0018)  
};

/// Struct /Script/ControlRig.RigUnit_CCDIK
/// Size: 0x0100 (0x0001D0 - 0x0002D0)
struct FRigUnit_CCDIK : FRigUnit_HighlevelBaseMutable
{ 
	FName                                              StartBone;                                                  // 0x01D0   (0x0004)  
	FName                                              EffectorBone;                                               // 0x01D4   (0x0004)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x01D8   (0x0008)  MISSED
	FTransform                                         EffectorTransform;                                          // 0x01E0   (0x0060)  
	float                                              Precision;                                                  // 0x0240   (0x0004)  
	float                                              Weight;                                                     // 0x0244   (0x0004)  
	int32_t                                            MaxIterations;                                              // 0x0248   (0x0004)  
	bool                                               bStartFromTail;                                             // 0x024C   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x024D   (0x0003)  MISSED
	float                                              BaseRotationLimit;                                          // 0x0250   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x0254   (0x0004)  MISSED
	TArray<FRigUnit_CCDIK_RotationLimit>               RotationLimits;                                             // 0x0258   (0x0010)  
	bool                                               bPropagateToChildren;                                       // 0x0268   (0x0001)  
	unsigned char                                      UnknownData03_5[0x7];                                       // 0x0269   (0x0007)  MISSED
	FRigUnit_CCDIK_WorkData                            WorkData;                                                   // 0x0270   (0x0058)  
	unsigned char                                      UnknownData04_6[0x8];                                       // 0x02C8   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_CCDIKPerItem
/// Size: 0x0100 (0x0001D0 - 0x0002D0)
struct FRigUnit_CCDIKPerItem : FRigUnit_HighlevelBaseMutable
{ 
	FRigElementKeyCollection                           Items;                                                      // 0x01D0   (0x0010)  
	FTransform                                         EffectorTransform;                                          // 0x01E0   (0x0060)  
	float                                              Precision;                                                  // 0x0240   (0x0004)  
	float                                              Weight;                                                     // 0x0244   (0x0004)  
	int32_t                                            MaxIterations;                                              // 0x0248   (0x0004)  
	bool                                               bStartFromTail;                                             // 0x024C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x024D   (0x0003)  MISSED
	float                                              BaseRotationLimit;                                          // 0x0250   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0254   (0x0004)  MISSED
	TArray<FRigUnit_CCDIK_RotationLimitPerItem>        RotationLimits;                                             // 0x0258   (0x0010)  
	bool                                               bPropagateToChildren;                                       // 0x0268   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x0269   (0x0007)  MISSED
	FRigUnit_CCDIK_WorkData                            WorkData;                                                   // 0x0270   (0x0058)  
	unsigned char                                      UnknownData03_6[0x8];                                       // 0x02C8   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_CCDIKItemArray
/// Size: 0x0100 (0x0001D0 - 0x0002D0)
struct FRigUnit_CCDIKItemArray : FRigUnit_HighlevelBaseMutable
{ 
	TArray<FRigElementKey>                             Items;                                                      // 0x01D0   (0x0010)  
	FTransform                                         EffectorTransform;                                          // 0x01E0   (0x0060)  
	float                                              Precision;                                                  // 0x0240   (0x0004)  
	float                                              Weight;                                                     // 0x0244   (0x0004)  
	int32_t                                            MaxIterations;                                              // 0x0248   (0x0004)  
	bool                                               bStartFromTail;                                             // 0x024C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x024D   (0x0003)  MISSED
	float                                              BaseRotationLimit;                                          // 0x0250   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0254   (0x0004)  MISSED
	TArray<FRigUnit_CCDIK_RotationLimitPerItem>        RotationLimits;                                             // 0x0258   (0x0010)  
	bool                                               bPropagateToChildren;                                       // 0x0268   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x0269   (0x0007)  MISSED
	FRigUnit_CCDIK_WorkData                            WorkData;                                                   // 0x0270   (0x0058)  
	unsigned char                                      UnknownData03_6[0x8];                                       // 0x02C8   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_DistributeRotation_Rotation
/// Size: 0x0030 (0x000000 - 0x000030)
struct FRigUnit_DistributeRotation_Rotation
{ 
	FQuat                                              Rotation;                                                   // 0x0000   (0x0020)  
	float                                              Ratio;                                                      // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_6[0xC];                                       // 0x0024   (0x000C)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_DistributeRotation_WorkData
/// Size: 0x0050 (0x000000 - 0x000050)
struct FRigUnit_DistributeRotation_WorkData
{ 
	TArray<FCachedRigElement>                          CachedItems;                                                // 0x0000   (0x0010)  
	TArray<int32_t>                                    ItemRotationA;                                              // 0x0010   (0x0010)  
	TArray<int32_t>                                    ItemRotationB;                                              // 0x0020   (0x0010)  
	TArray<float>                                      ItemRotationT;                                              // 0x0030   (0x0010)  
	TArray<FTransform>                                 ItemLocalTransforms;                                        // 0x0040   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_DistributeRotation
/// Size: 0x0080 (0x0001D0 - 0x000250)
struct FRigUnit_DistributeRotation : FRigUnit_HighlevelBaseMutable
{ 
	FName                                              StartBone;                                                  // 0x01D0   (0x0004)  
	FName                                              EndBone;                                                    // 0x01D4   (0x0004)  
	TArray<FRigUnit_DistributeRotation_Rotation>       Rotations;                                                  // 0x01D8   (0x0010)  
	ERigVMAnimEasingType                               RotationEaseType;                                           // 0x01E8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x01E9   (0x0003)  MISSED
	float                                              Weight;                                                     // 0x01EC   (0x0004)  
	bool                                               bPropagateToChildren;                                       // 0x01F0   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x01F1   (0x0007)  MISSED
	FRigUnit_DistributeRotation_WorkData               WorkData;                                                   // 0x01F8   (0x0050)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x0248   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_DistributeRotationForCollection
/// Size: 0x0080 (0x0001D0 - 0x000250)
struct FRigUnit_DistributeRotationForCollection : FRigUnit_HighlevelBaseMutable
{ 
	FRigElementKeyCollection                           Items;                                                      // 0x01D0   (0x0010)  
	TArray<FRigUnit_DistributeRotation_Rotation>       Rotations;                                                  // 0x01E0   (0x0010)  
	ERigVMAnimEasingType                               RotationEaseType;                                           // 0x01F0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x01F1   (0x0003)  MISSED
	float                                              Weight;                                                     // 0x01F4   (0x0004)  
	FRigUnit_DistributeRotation_WorkData               WorkData;                                                   // 0x01F8   (0x0050)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0248   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_DistributeRotationForItemArray
/// Size: 0x0080 (0x0001D0 - 0x000250)
struct FRigUnit_DistributeRotationForItemArray : FRigUnit_HighlevelBaseMutable
{ 
	TArray<FRigElementKey>                             Items;                                                      // 0x01D0   (0x0010)  
	TArray<FRigUnit_DistributeRotation_Rotation>       Rotations;                                                  // 0x01E0   (0x0010)  
	ERigVMAnimEasingType                               RotationEaseType;                                           // 0x01F0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x01F1   (0x0003)  MISSED
	float                                              Weight;                                                     // 0x01F4   (0x0004)  
	FRigUnit_DistributeRotation_WorkData               WorkData;                                                   // 0x01F8   (0x0050)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0248   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_FABRIK_WorkData
/// Size: 0x0038 (0x000000 - 0x000038)
struct FRigUnit_FABRIK_WorkData
{ 
	TArray<FFABRIKChainLink>                           Chain;                                                      // 0x0000   (0x0010)  
	TArray<FCachedRigElement>                          CachedItems;                                                // 0x0010   (0x0010)  
	FCachedRigElement                                  CachedEffector;                                             // 0x0020   (0x0018)  
};

/// Struct /Script/ControlRig.RigUnit_FABRIK
/// Size: 0x00C0 (0x0001D0 - 0x000290)
struct FRigUnit_FABRIK : FRigUnit_HighlevelBaseMutable
{ 
	FName                                              StartBone;                                                  // 0x01D0   (0x0004)  
	FName                                              EffectorBone;                                               // 0x01D4   (0x0004)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x01D8   (0x0008)  MISSED
	FTransform                                         EffectorTransform;                                          // 0x01E0   (0x0060)  
	float                                              Precision;                                                  // 0x0240   (0x0004)  
	float                                              Weight;                                                     // 0x0244   (0x0004)  
	bool                                               bPropagateToChildren;                                       // 0x0248   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0249   (0x0003)  MISSED
	int32_t                                            MaxIterations;                                              // 0x024C   (0x0004)  
	FRigUnit_FABRIK_WorkData                           WorkData;                                                   // 0x0250   (0x0038)  
	bool                                               bSetEffectorTransform;                                      // 0x0288   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x0289   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_FABRIKPerItem
/// Size: 0x00C0 (0x0001D0 - 0x000290)
struct FRigUnit_FABRIKPerItem : FRigUnit_HighlevelBaseMutable
{ 
	FRigElementKeyCollection                           Items;                                                      // 0x01D0   (0x0010)  
	FTransform                                         EffectorTransform;                                          // 0x01E0   (0x0060)  
	float                                              Precision;                                                  // 0x0240   (0x0004)  
	float                                              Weight;                                                     // 0x0244   (0x0004)  
	bool                                               bPropagateToChildren;                                       // 0x0248   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0249   (0x0003)  MISSED
	int32_t                                            MaxIterations;                                              // 0x024C   (0x0004)  
	FRigUnit_FABRIK_WorkData                           WorkData;                                                   // 0x0250   (0x0038)  
	bool                                               bSetEffectorTransform;                                      // 0x0288   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0289   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_FABRIKItemArray
/// Size: 0x00C0 (0x0001D0 - 0x000290)
struct FRigUnit_FABRIKItemArray : FRigUnit_HighlevelBaseMutable
{ 
	TArray<FRigElementKey>                             Items;                                                      // 0x01D0   (0x0010)  
	FTransform                                         EffectorTransform;                                          // 0x01E0   (0x0060)  
	float                                              Precision;                                                  // 0x0240   (0x0004)  
	float                                              Weight;                                                     // 0x0244   (0x0004)  
	bool                                               bPropagateToChildren;                                       // 0x0248   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0249   (0x0003)  MISSED
	int32_t                                            MaxIterations;                                              // 0x024C   (0x0004)  
	FRigUnit_FABRIK_WorkData                           WorkData;                                                   // 0x0250   (0x0038)  
	bool                                               bSetEffectorTransform;                                      // 0x0288   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0289   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_FitChainToCurve_Rotation
/// Size: 0x0030 (0x000000 - 0x000030)
struct FRigUnit_FitChainToCurve_Rotation
{ 
	FQuat                                              Rotation;                                                   // 0x0000   (0x0020)  
	float                                              Ratio;                                                      // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_6[0xC];                                       // 0x0024   (0x000C)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_FitChainToCurve_DebugSettings
/// Size: 0x0090 (0x000000 - 0x000090)
struct FRigUnit_FitChainToCurve_DebugSettings
{ 
	bool                                               bEnabled;                                                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              Scale;                                                      // 0x0004   (0x0004)  
	FLinearColor                                       CurveColor;                                                 // 0x0008   (0x0010)  
	FLinearColor                                       SegmentsColor;                                              // 0x0018   (0x0010)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x0028   (0x0008)  MISSED
	FTransform                                         WorldOffset;                                                // 0x0030   (0x0060)  
};

/// Struct /Script/ControlRig.RigUnit_FitChainToCurve_WorkData
/// Size: 0x0098 (0x000000 - 0x000098)
struct FRigUnit_FitChainToCurve_WorkData
{ 
	float                                              ChainLength;                                                // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	TArray<FVector>                                    ItemPositions;                                              // 0x0008   (0x0010)  
	TArray<float>                                      ItemSegments;                                               // 0x0018   (0x0010)  
	TArray<FVector>                                    CurvePositions;                                             // 0x0028   (0x0010)  
	TArray<float>                                      CurveSegments;                                              // 0x0038   (0x0010)  
	TArray<FCachedRigElement>                          CachedItems;                                                // 0x0048   (0x0010)  
	TArray<int32_t>                                    ItemRotationA;                                              // 0x0058   (0x0010)  
	TArray<int32_t>                                    ItemRotationB;                                              // 0x0068   (0x0010)  
	TArray<float>                                      ItemRotationT;                                              // 0x0078   (0x0010)  
	TArray<FTransform>                                 ItemLocalTransforms;                                        // 0x0088   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_FitChainToCurve
/// Size: 0x0210 (0x0001D0 - 0x0003E0)
struct FRigUnit_FitChainToCurve : FRigUnit_HighlevelBaseMutable
{ 
	FName                                              StartBone;                                                  // 0x01D0   (0x0004)  
	FName                                              EndBone;                                                    // 0x01D4   (0x0004)  
	FRigVMFourPointBezier                              Bezier;                                                     // 0x01D8   (0x0060)  
	EControlRigCurveAlignment                          Alignment;                                                  // 0x0238   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0239   (0x0003)  MISSED
	float                                              Minimum;                                                    // 0x023C   (0x0004)  
	float                                              Maximum;                                                    // 0x0240   (0x0004)  
	int32_t                                            SamplingPrecision;                                          // 0x0244   (0x0004)  
	FVector                                            PrimaryAxis;                                                // 0x0248   (0x0018)  
	FVector                                            SecondaryAxis;                                              // 0x0260   (0x0018)  
	FVector                                            PoleVectorPosition;                                         // 0x0278   (0x0018)  
	TArray<FRigUnit_FitChainToCurve_Rotation>          Rotations;                                                  // 0x0290   (0x0010)  
	ERigVMAnimEasingType                               RotationEaseType;                                           // 0x02A0   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x02A1   (0x0003)  MISSED
	float                                              Weight;                                                     // 0x02A4   (0x0004)  
	bool                                               bPropagateToChildren;                                       // 0x02A8   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x02A9   (0x0007)  MISSED
	FRigUnit_FitChainToCurve_DebugSettings             DebugSettings;                                              // 0x02B0   (0x0090)  
	FRigUnit_FitChainToCurve_WorkData                  WorkData;                                                   // 0x0340   (0x0098)  
	unsigned char                                      UnknownData03_6[0x8];                                       // 0x03D8   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_FitChainToCurvePerItem
/// Size: 0x0220 (0x0001D0 - 0x0003F0)
struct FRigUnit_FitChainToCurvePerItem : FRigUnit_HighlevelBaseMutable
{ 
	FRigElementKeyCollection                           Items;                                                      // 0x01D0   (0x0010)  
	FRigVMFourPointBezier                              Bezier;                                                     // 0x01E0   (0x0060)  
	EControlRigCurveAlignment                          Alignment;                                                  // 0x0240   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0241   (0x0003)  MISSED
	float                                              Minimum;                                                    // 0x0244   (0x0004)  
	float                                              Maximum;                                                    // 0x0248   (0x0004)  
	int32_t                                            SamplingPrecision;                                          // 0x024C   (0x0004)  
	FVector                                            PrimaryAxis;                                                // 0x0250   (0x0018)  
	FVector                                            SecondaryAxis;                                              // 0x0268   (0x0018)  
	FVector                                            PoleVectorPosition;                                         // 0x0280   (0x0018)  
	TArray<FRigUnit_FitChainToCurve_Rotation>          Rotations;                                                  // 0x0298   (0x0010)  
	ERigVMAnimEasingType                               RotationEaseType;                                           // 0x02A8   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x02A9   (0x0003)  MISSED
	float                                              Weight;                                                     // 0x02AC   (0x0004)  
	bool                                               bPropagateToChildren;                                       // 0x02B0   (0x0001)  
	unsigned char                                      UnknownData02_5[0xF];                                       // 0x02B1   (0x000F)  MISSED
	FRigUnit_FitChainToCurve_DebugSettings             DebugSettings;                                              // 0x02C0   (0x0090)  
	FRigUnit_FitChainToCurve_WorkData                  WorkData;                                                   // 0x0350   (0x0098)  
	unsigned char                                      UnknownData03_6[0x8];                                       // 0x03E8   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_FitChainToCurveItemArray
/// Size: 0x0220 (0x0001D0 - 0x0003F0)
struct FRigUnit_FitChainToCurveItemArray : FRigUnit_HighlevelBaseMutable
{ 
	TArray<FRigElementKey>                             Items;                                                      // 0x01D0   (0x0010)  
	FRigVMFourPointBezier                              Bezier;                                                     // 0x01E0   (0x0060)  
	EControlRigCurveAlignment                          Alignment;                                                  // 0x0240   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0241   (0x0003)  MISSED
	float                                              Minimum;                                                    // 0x0244   (0x0004)  
	float                                              Maximum;                                                    // 0x0248   (0x0004)  
	int32_t                                            SamplingPrecision;                                          // 0x024C   (0x0004)  
	FVector                                            PrimaryAxis;                                                // 0x0250   (0x0018)  
	FVector                                            SecondaryAxis;                                              // 0x0268   (0x0018)  
	FVector                                            PoleVectorPosition;                                         // 0x0280   (0x0018)  
	TArray<FRigUnit_FitChainToCurve_Rotation>          Rotations;                                                  // 0x0298   (0x0010)  
	ERigVMAnimEasingType                               RotationEaseType;                                           // 0x02A8   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x02A9   (0x0003)  MISSED
	float                                              Weight;                                                     // 0x02AC   (0x0004)  
	bool                                               bPropagateToChildren;                                       // 0x02B0   (0x0001)  
	unsigned char                                      UnknownData02_5[0xF];                                       // 0x02B1   (0x000F)  MISSED
	FRigUnit_FitChainToCurve_DebugSettings             DebugSettings;                                              // 0x02C0   (0x0090)  
	FRigUnit_FitChainToCurve_WorkData                  WorkData;                                                   // 0x0350   (0x0098)  
	unsigned char                                      UnknownData03_6[0x8];                                       // 0x03E8   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_ModifyBoneTransforms_PerBone
/// Size: 0x0070 (0x000000 - 0x000070)
struct FRigUnit_ModifyBoneTransforms_PerBone
{ 
	FName                                              bone;                                                       // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0xC];                                       // 0x0004   (0x000C)  MISSED
	FTransform                                         Transform;                                                  // 0x0010   (0x0060)  
};

/// Struct /Script/ControlRig.RigUnit_ModifyTransforms_WorkData
/// Size: 0x0010 (0x000000 - 0x000010)
struct FRigUnit_ModifyTransforms_WorkData
{ 
	TArray<FCachedRigElement>                          CachedItems;                                                // 0x0000   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_ModifyBoneTransforms_WorkData
/// Size: 0x0000 (0x000010 - 0x000010)
struct FRigUnit_ModifyBoneTransforms_WorkData : FRigUnit_ModifyTransforms_WorkData
{ 
};

/// Struct /Script/ControlRig.RigUnit_ModifyBoneTransforms
/// Size: 0x0030 (0x0001D0 - 0x000200)
struct FRigUnit_ModifyBoneTransforms : FRigUnit_HighlevelBaseMutable
{ 
	TArray<FRigUnit_ModifyBoneTransforms_PerBone>      BoneToModify;                                               // 0x01D0   (0x0010)  
	float                                              Weight;                                                     // 0x01E0   (0x0004)  
	float                                              WeightMinimum;                                              // 0x01E4   (0x0004)  
	float                                              WeightMaximum;                                              // 0x01E8   (0x0004)  
	EControlRigModifyBoneMode                          Mode;                                                       // 0x01EC   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x01ED   (0x0003)  MISSED
	FRigUnit_ModifyBoneTransforms_WorkData             WorkData;                                                   // 0x01F0   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_ModifyTransforms_PerItem
/// Size: 0x0070 (0x000000 - 0x000070)
struct FRigUnit_ModifyTransforms_PerItem
{ 
	FRigElementKey                                     Item;                                                       // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         Transform;                                                  // 0x0010   (0x0060)  
};

/// Struct /Script/ControlRig.RigUnit_ModifyTransforms
/// Size: 0x0030 (0x0001D0 - 0x000200)
struct FRigUnit_ModifyTransforms : FRigUnit_HighlevelBaseMutable
{ 
	TArray<FRigUnit_ModifyTransforms_PerItem>          ItemToModify;                                               // 0x01D0   (0x0010)  
	float                                              Weight;                                                     // 0x01E0   (0x0004)  
	float                                              WeightMinimum;                                              // 0x01E4   (0x0004)  
	float                                              WeightMaximum;                                              // 0x01E8   (0x0004)  
	EControlRigModifyBoneMode                          Mode;                                                       // 0x01EC   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x01ED   (0x0003)  MISSED
	FRigUnit_ModifyTransforms_WorkData                 WorkData;                                                   // 0x01F0   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_MultiFABRIK_WorkData
/// Size: 0x0068 (0x000000 - 0x000068)
struct FRigUnit_MultiFABRIK_WorkData
{ 
	unsigned char                                      UnknownData00_2[0x68];                                      // 0x0000   (0x0068)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MultiFABRIK_EndEffector
/// Size: 0x0020 (0x000000 - 0x000020)
struct FRigUnit_MultiFABRIK_EndEffector
{ 
	FName                                              bone;                                                       // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	FVector                                            Location;                                                   // 0x0008   (0x0018)  
};

/// Struct /Script/ControlRig.RigUnit_MultiFABRIK
/// Size: 0x00A0 (0x0001D0 - 0x000270)
struct FRigUnit_MultiFABRIK : FRigUnit_HighlevelBaseMutable
{ 
	FName                                              RootBone;                                                   // 0x01D0   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x01D4   (0x0004)  MISSED
	TArray<FRigUnit_MultiFABRIK_EndEffector>           Effectors;                                                  // 0x01D8   (0x0010)  
	float                                              Precision;                                                  // 0x01E8   (0x0004)  
	bool                                               bPropagateToChildren;                                       // 0x01EC   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x01ED   (0x0003)  MISSED
	int32_t                                            MaxIterations;                                              // 0x01F0   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x01F4   (0x0004)  MISSED
	FRigUnit_MultiFABRIK_WorkData                      WorkData;                                                   // 0x01F8   (0x0068)  
	bool                                               bIsInitialized;                                             // 0x0260   (0x0001)  
	unsigned char                                      UnknownData03_6[0xF];                                       // 0x0261   (0x000F)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_SlideChain_WorkData
/// Size: 0x0048 (0x000000 - 0x000048)
struct FRigUnit_SlideChain_WorkData
{ 
	float                                              ChainLength;                                                // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	TArray<float>                                      ItemSegments;                                               // 0x0008   (0x0010)  
	TArray<FCachedRigElement>                          CachedItems;                                                // 0x0018   (0x0010)  
	TArray<FTransform>                                 Transforms;                                                 // 0x0028   (0x0010)  
	TArray<FTransform>                                 BlendedTransforms;                                          // 0x0038   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_SlideChain
/// Size: 0x0060 (0x0001D0 - 0x000230)
struct FRigUnit_SlideChain : FRigUnit_HighlevelBaseMutable
{ 
	FName                                              StartBone;                                                  // 0x01D0   (0x0004)  
	FName                                              EndBone;                                                    // 0x01D4   (0x0004)  
	float                                              SlideAmount;                                                // 0x01D8   (0x0004)  
	bool                                               bPropagateToChildren;                                       // 0x01DC   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x01DD   (0x0003)  MISSED
	FRigUnit_SlideChain_WorkData                       WorkData;                                                   // 0x01E0   (0x0048)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0228   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_SlideChainPerItem
/// Size: 0x0060 (0x0001D0 - 0x000230)
struct FRigUnit_SlideChainPerItem : FRigUnit_HighlevelBaseMutable
{ 
	FRigElementKeyCollection                           Items;                                                      // 0x01D0   (0x0010)  
	float                                              SlideAmount;                                                // 0x01E0   (0x0004)  
	bool                                               bPropagateToChildren;                                       // 0x01E4   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x01E5   (0x0003)  MISSED
	FRigUnit_SlideChain_WorkData                       WorkData;                                                   // 0x01E8   (0x0048)  
};

/// Struct /Script/ControlRig.RigUnit_SlideChainItemArray
/// Size: 0x0060 (0x0001D0 - 0x000230)
struct FRigUnit_SlideChainItemArray : FRigUnit_HighlevelBaseMutable
{ 
	TArray<FRigElementKey>                             Items;                                                      // 0x01D0   (0x0010)  
	float                                              SlideAmount;                                                // 0x01E0   (0x0004)  
	bool                                               bPropagateToChildren;                                       // 0x01E4   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x01E5   (0x0003)  MISSED
	FRigUnit_SlideChain_WorkData                       WorkData;                                                   // 0x01E8   (0x0048)  
};

/// Struct /Script/ControlRig.RegionScaleFactors
/// Size: 0x0010 (0x000000 - 0x000010)
struct FRegionScaleFactors
{ 
	float                                              PositiveWidth;                                              // 0x0000   (0x0004)  
	float                                              NegativeWidth;                                              // 0x0004   (0x0004)  
	float                                              PositiveHeight;                                             // 0x0008   (0x0004)  
	float                                              NegativeHeight;                                             // 0x000C   (0x0004)  
};

/// Struct /Script/ControlRig.SphericalRegion
/// Size: 0x0014 (0x000000 - 0x000014)
struct FSphericalRegion
{ 
	unsigned char                                      UnknownData00_2[0x14];                                      // 0x0000   (0x0014)  MISSED
};

/// Struct /Script/ControlRig.SphericalPoseReaderDebugSettings
/// Size: 0x0010 (0x000000 - 0x000010)
struct FSphericalPoseReaderDebugSettings
{ 
	bool                                               bDrawDebug;                                                 // 0x0000   (0x0001)  
	bool                                               bDraw2D;                                                    // 0x0001   (0x0001)  
	bool                                               bDrawLocalAxes;                                             // 0x0002   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x0003   (0x0001)  MISSED
	float                                              DebugScale;                                                 // 0x0004   (0x0004)  
	int32_t                                            DebugSegments;                                              // 0x0008   (0x0004)  
	float                                              DebugThickness;                                             // 0x000C   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_SphericalPoseReader
/// Size: 0x0190 (0x0001D0 - 0x000360)
struct FRigUnit_SphericalPoseReader : FRigUnit_HighlevelBaseMutable
{ 
	float                                              OutputParam;                                                // 0x01D0   (0x0004)  
	FRigElementKey                                     DriverItem;                                                 // 0x01D4   (0x0008)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x01DC   (0x0004)  MISSED
	FVector                                            DriverAxis;                                                 // 0x01E0   (0x0018)  
	FVector                                            RotationOffset;                                             // 0x01F8   (0x0018)  
	float                                              ActiveRegionSize;                                           // 0x0210   (0x0004)  
	FRegionScaleFactors                                ActiveRegionScaleFactors;                                   // 0x0214   (0x0010)  
	float                                              FalloffSize;                                                // 0x0224   (0x0004)  
	FRegionScaleFactors                                FalloffRegionScaleFactors;                                  // 0x0228   (0x0010)  
	bool                                               FlipWidthScaling;                                           // 0x0238   (0x0001)  
	bool                                               FlipHeightScaling;                                          // 0x0239   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x023A   (0x0002)  MISSED
	FRigElementKey                                     OptionalParentItem;                                         // 0x023C   (0x0008)  
	FSphericalPoseReaderDebugSettings                  Debug;                                                      // 0x0244   (0x0010)  
	FSphericalRegion                                   InnerRegion;                                                // 0x0254   (0x0014)  
	FSphericalRegion                                   OuterRegion;                                                // 0x0268   (0x0014)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x027C   (0x0004)  MISSED
	FVector                                            DriverNormal;                                               // 0x0280   (0x0018)  
	FVector                                            Driver2D;                                                   // 0x0298   (0x0018)  
	FCachedRigElement                                  DriverCache;                                                // 0x02B0   (0x0018)  
	FCachedRigElement                                  OptionalParentCache;                                        // 0x02C8   (0x0018)  
	FTransform                                         LocalDriverTransformInit;                                   // 0x02E0   (0x0060)  
	FVector                                            CachedRotationOffset;                                       // 0x0340   (0x0018)  
	bool                                               bCachedInitTransforms;                                      // 0x0358   (0x0001)  
	unsigned char                                      UnknownData03_6[0x7];                                       // 0x0359   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_SpringIK_DebugSettings
/// Size: 0x0080 (0x000000 - 0x000080)
struct FRigUnit_SpringIK_DebugSettings
{ 
	bool                                               bEnabled;                                                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              Scale;                                                      // 0x0004   (0x0004)  
	FLinearColor                                       Color;                                                      // 0x0008   (0x0010)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x0018   (0x0008)  MISSED
	FTransform                                         WorldOffset;                                                // 0x0020   (0x0060)  
};

/// Struct /Script/ControlRig.RigUnit_SpringIK_WorkData
/// Size: 0x00B0 (0x000000 - 0x0000B0)
struct FRigUnit_SpringIK_WorkData
{ 
	TArray<FCachedRigElement>                          CachedBones;                                                // 0x0000   (0x0010)  
	FCachedRigElement                                  CachedPoleVector;                                           // 0x0010   (0x0018)  
	TArray<FTransform>                                 Transforms;                                                 // 0x0028   (0x0010)  
	FCRSimPointContainer                               Simulation;                                                 // 0x0038   (0x0078)  
};

/// Struct /Script/ControlRig.RigUnit_SpringIK
/// Size: 0x01B0 (0x0001D0 - 0x000380)
struct FRigUnit_SpringIK : FRigUnit_HighlevelBaseMutable
{ 
	FName                                              StartBone;                                                  // 0x01D0   (0x0004)  
	FName                                              EndBone;                                                    // 0x01D4   (0x0004)  
	float                                              HierarchyStrength;                                          // 0x01D8   (0x0004)  
	float                                              EffectorStrength;                                           // 0x01DC   (0x0004)  
	float                                              EffectorRatio;                                              // 0x01E0   (0x0004)  
	float                                              RootStrength;                                               // 0x01E4   (0x0004)  
	float                                              RootRatio;                                                  // 0x01E8   (0x0004)  
	float                                              Damping;                                                    // 0x01EC   (0x0004)  
	FVector                                            PoleVector;                                                 // 0x01F0   (0x0018)  
	bool                                               bFlipPolePlane;                                             // 0x0208   (0x0001)  
	EControlRigVectorKind                              PoleVectorKind;                                             // 0x0209   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x020A   (0x0002)  MISSED
	FName                                              PoleVectorSpace;                                            // 0x020C   (0x0004)  
	FVector                                            PrimaryAxis;                                                // 0x0210   (0x0018)  
	FVector                                            SecondaryAxis;                                              // 0x0228   (0x0018)  
	bool                                               bLiveSimulation;                                            // 0x0240   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0241   (0x0003)  MISSED
	int32_t                                            Iterations;                                                 // 0x0244   (0x0004)  
	bool                                               bLimitLocalPosition;                                        // 0x0248   (0x0001)  
	bool                                               bPropagateToChildren;                                       // 0x0249   (0x0001)  
	unsigned char                                      UnknownData02_5[0x6];                                       // 0x024A   (0x0006)  MISSED
	FRigUnit_SpringIK_DebugSettings                    DebugSettings;                                              // 0x0250   (0x0080)  
	FRigUnit_SpringIK_WorkData                         WorkData;                                                   // 0x02D0   (0x00B0)  
};

/// Struct /Script/ControlRig.ConstraintTarget
/// Size: 0x0070 (0x000000 - 0x000070)
struct FConstraintTarget
{ 
	FTransform                                         Transform;                                                  // 0x0000   (0x0060)  
	float                                              Weight;                                                     // 0x0060   (0x0004)  
	bool                                               bMaintainOffset;                                            // 0x0064   (0x0001)  
	FTransformFilter                                   Filter;                                                     // 0x0065   (0x0009)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x006E   (0x0002)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_TransformConstraint_WorkData
/// Size: 0x0060 (0x000000 - 0x000060)
struct FRigUnit_TransformConstraint_WorkData
{ 
	TArray<FConstraintData>                            ConstraintData;                                             // 0x0000   (0x0010)  
	SDK_UNDEFINED(80,12563) /* TMap<int32_t, int32_t> */ __um(ConstraintDataToTargets);                            // 0x0010   (0x0050)  
};

/// Struct /Script/ControlRig.RigUnit_TransformConstraint
/// Size: 0x00F0 (0x0001D0 - 0x0002C0)
struct FRigUnit_TransformConstraint : FRigUnit_HighlevelBaseMutable
{ 
	FName                                              bone;                                                       // 0x01D0   (0x0004)  
	ETransformSpaceMode                                BaseTransformSpace;                                         // 0x01D4   (0x0001)  
	unsigned char                                      UnknownData00_5[0xB];                                       // 0x01D5   (0x000B)  MISSED
	FTransform                                         BaseTransform;                                              // 0x01E0   (0x0060)  
	FName                                              BaseBone;                                                   // 0x0240   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0244   (0x0004)  MISSED
	TArray<FConstraintTarget>                          Targets;                                                    // 0x0248   (0x0010)  
	bool                                               bUseInitialTransforms;                                      // 0x0258   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x0259   (0x0007)  MISSED
	FRigUnit_TransformConstraint_WorkData              WorkData;                                                   // 0x0260   (0x0060)  
};

/// Struct /Script/ControlRig.RigUnit_TransformConstraintPerItem
/// Size: 0x00F0 (0x0001D0 - 0x0002C0)
struct FRigUnit_TransformConstraintPerItem : FRigUnit_HighlevelBaseMutable
{ 
	FRigElementKey                                     Item;                                                       // 0x01D0   (0x0008)  
	ETransformSpaceMode                                BaseTransformSpace;                                         // 0x01D8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x01D9   (0x0007)  MISSED
	FTransform                                         BaseTransform;                                              // 0x01E0   (0x0060)  
	FRigElementKey                                     BaseItem;                                                   // 0x0240   (0x0008)  
	TArray<FConstraintTarget>                          Targets;                                                    // 0x0248   (0x0010)  
	bool                                               bUseInitialTransforms;                                      // 0x0258   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0259   (0x0007)  MISSED
	FRigUnit_TransformConstraint_WorkData              WorkData;                                                   // 0x0260   (0x0060)  
};

/// Struct /Script/ControlRig.RigUnit_ParentConstraint_AdvancedSettings
/// Size: 0x0002 (0x000000 - 0x000002)
struct FRigUnit_ParentConstraint_AdvancedSettings
{ 
	EConstraintInterpType                              InterpolationType;                                          // 0x0000   (0x0001)  
	EEulerRotationOrder                                RotationOrderForFilter;                                     // 0x0001   (0x0001)  
};

/// Struct /Script/ControlRig.RigUnit_ParentConstraint
/// Size: 0x0060 (0x0001D0 - 0x000230)
struct FRigUnit_ParentConstraint : FRigUnit_HighlevelBaseMutable
{ 
	FRigElementKey                                     Child;                                                      // 0x01D0   (0x0008)  
	bool                                               bMaintainOffset;                                            // 0x01D8   (0x0001)  
	FTransformFilter                                   Filter;                                                     // 0x01D9   (0x0009)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x01E2   (0x0006)  MISSED
	TArray<FConstraintParent>                          Parents;                                                    // 0x01E8   (0x0010)  
	FRigUnit_ParentConstraint_AdvancedSettings         AdvancedSettings;                                           // 0x01F8   (0x0002)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x01FA   (0x0002)  MISSED
	float                                              Weight;                                                     // 0x01FC   (0x0004)  
	FCachedRigElement                                  ChildCache;                                                 // 0x0200   (0x0018)  
	TArray<FCachedRigElement>                          ParentCaches;                                               // 0x0218   (0x0010)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x0228   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_ParentConstraintMath_AdvancedSettings
/// Size: 0x0001 (0x000000 - 0x000001)
struct FRigUnit_ParentConstraintMath_AdvancedSettings
{ 
	EConstraintInterpType                              InterpolationType;                                          // 0x0000   (0x0001)  
};

/// Struct /Script/ControlRig.RigUnit_ParentConstraintMath
/// Size: 0x00F8 (0x000008 - 0x000100)
struct FRigUnit_ParentConstraintMath : FRigUnit_HighlevelBase
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         Input;                                                      // 0x0010   (0x0060)  
	TArray<FConstraintParent>                          Parents;                                                    // 0x0070   (0x0010)  
	FRigUnit_ParentConstraintMath_AdvancedSettings     AdvancedSettings;                                           // 0x0080   (0x0001)  
	unsigned char                                      UnknownData01_5[0xF];                                       // 0x0081   (0x000F)  MISSED
	FTransform                                         Output;                                                     // 0x0090   (0x0060)  
	TArray<FCachedRigElement>                          ParentCaches;                                               // 0x00F0   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_PositionConstraint
/// Size: 0x0030 (0x0001D0 - 0x000200)
struct FRigUnit_PositionConstraint : FRigUnit_HighlevelBaseMutable
{ 
	FRigElementKey                                     Child;                                                      // 0x01D0   (0x0008)  
	bool                                               bMaintainOffset;                                            // 0x01D8   (0x0001)  
	FFilterOptionPerAxis                               Filter;                                                     // 0x01D9   (0x0003)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x01DC   (0x0004)  MISSED
	TArray<FConstraintParent>                          Parents;                                                    // 0x01E0   (0x0010)  
	float                                              Weight;                                                     // 0x01F0   (0x0004)  
	unsigned char                                      UnknownData01_6[0xC];                                       // 0x01F4   (0x000C)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_PositionConstraintLocalSpaceOffset
/// Size: 0x0050 (0x0001D0 - 0x000220)
struct FRigUnit_PositionConstraintLocalSpaceOffset : FRigUnit_HighlevelBaseMutable
{ 
	FRigElementKey                                     Child;                                                      // 0x01D0   (0x0008)  
	bool                                               bMaintainOffset;                                            // 0x01D8   (0x0001)  
	FFilterOptionPerAxis                               Filter;                                                     // 0x01D9   (0x0003)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x01DC   (0x0004)  MISSED
	TArray<FConstraintParent>                          Parents;                                                    // 0x01E0   (0x0010)  
	float                                              Weight;                                                     // 0x01F0   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x01F4   (0x0004)  MISSED
	FCachedRigElement                                  ChildCache;                                                 // 0x01F8   (0x0018)  
	TArray<FCachedRigElement>                          ParentCaches;                                               // 0x0210   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_RotationConstraint_AdvancedSettings
/// Size: 0x0002 (0x000000 - 0x000002)
struct FRigUnit_RotationConstraint_AdvancedSettings
{ 
	EConstraintInterpType                              InterpolationType;                                          // 0x0000   (0x0001)  
	EEulerRotationOrder                                RotationOrderForFilter;                                     // 0x0001   (0x0001)  
};

/// Struct /Script/ControlRig.RigUnit_RotationConstraint
/// Size: 0x0030 (0x0001D0 - 0x000200)
struct FRigUnit_RotationConstraint : FRigUnit_HighlevelBaseMutable
{ 
	FRigElementKey                                     Child;                                                      // 0x01D0   (0x0008)  
	bool                                               bMaintainOffset;                                            // 0x01D8   (0x0001)  
	FFilterOptionPerAxis                               Filter;                                                     // 0x01D9   (0x0003)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x01DC   (0x0004)  MISSED
	TArray<FConstraintParent>                          Parents;                                                    // 0x01E0   (0x0010)  
	FRigUnit_RotationConstraint_AdvancedSettings       AdvancedSettings;                                           // 0x01F0   (0x0002)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x01F2   (0x0002)  MISSED
	float                                              Weight;                                                     // 0x01F4   (0x0004)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x01F8   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_RotationConstraintLocalSpaceOffset
/// Size: 0x0050 (0x0001D0 - 0x000220)
struct FRigUnit_RotationConstraintLocalSpaceOffset : FRigUnit_HighlevelBaseMutable
{ 
	FRigElementKey                                     Child;                                                      // 0x01D0   (0x0008)  
	bool                                               bMaintainOffset;                                            // 0x01D8   (0x0001)  
	FFilterOptionPerAxis                               Filter;                                                     // 0x01D9   (0x0003)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x01DC   (0x0004)  MISSED
	TArray<FConstraintParent>                          Parents;                                                    // 0x01E0   (0x0010)  
	FRigUnit_RotationConstraint_AdvancedSettings       AdvancedSettings;                                           // 0x01F0   (0x0002)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x01F2   (0x0002)  MISSED
	float                                              Weight;                                                     // 0x01F4   (0x0004)  
	FCachedRigElement                                  ChildCache;                                                 // 0x01F8   (0x0018)  
	TArray<FCachedRigElement>                          ParentCaches;                                               // 0x0210   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_ScaleConstraint
/// Size: 0x0030 (0x0001D0 - 0x000200)
struct FRigUnit_ScaleConstraint : FRigUnit_HighlevelBaseMutable
{ 
	FRigElementKey                                     Child;                                                      // 0x01D0   (0x0008)  
	bool                                               bMaintainOffset;                                            // 0x01D8   (0x0001)  
	FFilterOptionPerAxis                               Filter;                                                     // 0x01D9   (0x0003)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x01DC   (0x0004)  MISSED
	TArray<FConstraintParent>                          Parents;                                                    // 0x01E0   (0x0010)  
	float                                              Weight;                                                     // 0x01F0   (0x0004)  
	unsigned char                                      UnknownData01_6[0xC];                                       // 0x01F4   (0x000C)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_ScaleConstraintLocalSpaceOffset
/// Size: 0x0050 (0x0001D0 - 0x000220)
struct FRigUnit_ScaleConstraintLocalSpaceOffset : FRigUnit_HighlevelBaseMutable
{ 
	FRigElementKey                                     Child;                                                      // 0x01D0   (0x0008)  
	bool                                               bMaintainOffset;                                            // 0x01D8   (0x0001)  
	FFilterOptionPerAxis                               Filter;                                                     // 0x01D9   (0x0003)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x01DC   (0x0004)  MISSED
	TArray<FConstraintParent>                          Parents;                                                    // 0x01E0   (0x0010)  
	float                                              Weight;                                                     // 0x01F0   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x01F4   (0x0004)  MISSED
	FCachedRigElement                                  ChildCache;                                                 // 0x01F8   (0x0018)  
	TArray<FCachedRigElement>                          ParentCaches;                                               // 0x0210   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_TwistBones_WorkData
/// Size: 0x0030 (0x000000 - 0x000030)
struct FRigUnit_TwistBones_WorkData
{ 
	TArray<FCachedRigElement>                          CachedItems;                                                // 0x0000   (0x0010)  
	TArray<float>                                      ItemRatios;                                                 // 0x0010   (0x0010)  
	TArray<FTransform>                                 ItemTransforms;                                             // 0x0020   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_TwistBones
/// Size: 0x0080 (0x0001D0 - 0x000250)
struct FRigUnit_TwistBones : FRigUnit_HighlevelBaseMutable
{ 
	FName                                              StartBone;                                                  // 0x01D0   (0x0004)  
	FName                                              EndBone;                                                    // 0x01D4   (0x0004)  
	FVector                                            TwistAxis;                                                  // 0x01D8   (0x0018)  
	FVector                                            PoleAxis;                                                   // 0x01F0   (0x0018)  
	ERigVMAnimEasingType                               TwistEaseType;                                              // 0x0208   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0209   (0x0003)  MISSED
	float                                              Weight;                                                     // 0x020C   (0x0004)  
	bool                                               bPropagateToChildren;                                       // 0x0210   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0211   (0x0007)  MISSED
	FRigUnit_TwistBones_WorkData                       WorkData;                                                   // 0x0218   (0x0030)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x0248   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_TwistBonesPerItem
/// Size: 0x0080 (0x0001D0 - 0x000250)
struct FRigUnit_TwistBonesPerItem : FRigUnit_HighlevelBaseMutable
{ 
	FRigElementKeyCollection                           Items;                                                      // 0x01D0   (0x0010)  
	FVector                                            TwistAxis;                                                  // 0x01E0   (0x0018)  
	FVector                                            PoleAxis;                                                   // 0x01F8   (0x0018)  
	ERigVMAnimEasingType                               TwistEaseType;                                              // 0x0210   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0211   (0x0003)  MISSED
	float                                              Weight;                                                     // 0x0214   (0x0004)  
	bool                                               bPropagateToChildren;                                       // 0x0218   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0219   (0x0007)  MISSED
	FRigUnit_TwistBones_WorkData                       WorkData;                                                   // 0x0220   (0x0030)  
};

/// Struct /Script/ControlRig.RigUnit_TwoBoneIKSimple_DebugSettings
/// Size: 0x0070 (0x000000 - 0x000070)
struct FRigUnit_TwoBoneIKSimple_DebugSettings
{ 
	bool                                               bEnabled;                                                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              Scale;                                                      // 0x0004   (0x0004)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         WorldOffset;                                                // 0x0010   (0x0060)  
};

/// Struct /Script/ControlRig.RigUnit_TwoBoneIKSimple
/// Size: 0x01C0 (0x0001D0 - 0x000390)
struct FRigUnit_TwoBoneIKSimple : FRigUnit_HighlevelBaseMutable
{ 
	FName                                              BoneA;                                                      // 0x01D0   (0x0004)  
	FName                                              BoneB;                                                      // 0x01D4   (0x0004)  
	FName                                              EffectorBone;                                               // 0x01D8   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x01DC   (0x0004)  MISSED
	FTransform                                         Effector;                                                   // 0x01E0   (0x0060)  
	FVector                                            PrimaryAxis;                                                // 0x0240   (0x0018)  
	FVector                                            SecondaryAxis;                                              // 0x0258   (0x0018)  
	float                                              SecondaryAxisWeight;                                        // 0x0270   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0274   (0x0004)  MISSED
	FVector                                            PoleVector;                                                 // 0x0278   (0x0018)  
	EControlRigVectorKind                              PoleVectorKind;                                             // 0x0290   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0291   (0x0003)  MISSED
	FName                                              PoleVectorSpace;                                            // 0x0294   (0x0004)  
	bool                                               bEnableStretch;                                             // 0x0298   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x0299   (0x0003)  MISSED
	float                                              StretchStartRatio;                                          // 0x029C   (0x0004)  
	float                                              StretchMaximumRatio;                                        // 0x02A0   (0x0004)  
	float                                              Weight;                                                     // 0x02A4   (0x0004)  
	float                                              BoneALength;                                                // 0x02A8   (0x0004)  
	float                                              BoneBLength;                                                // 0x02AC   (0x0004)  
	bool                                               bPropagateToChildren;                                       // 0x02B0   (0x0001)  
	unsigned char                                      UnknownData04_5[0xF];                                       // 0x02B1   (0x000F)  MISSED
	FRigUnit_TwoBoneIKSimple_DebugSettings             DebugSettings;                                              // 0x02C0   (0x0070)  
	FCachedRigElement                                  CachedBoneAIndex;                                           // 0x0330   (0x0018)  
	FCachedRigElement                                  CachedBoneBIndex;                                           // 0x0348   (0x0018)  
	FCachedRigElement                                  CachedEffectorBoneIndex;                                    // 0x0360   (0x0018)  
	FCachedRigElement                                  CachedPoleVectorSpaceIndex;                                 // 0x0378   (0x0018)  
};

/// Struct /Script/ControlRig.RigUnit_TwoBoneIKSimplePerItem
/// Size: 0x01D0 (0x0001D0 - 0x0003A0)
struct FRigUnit_TwoBoneIKSimplePerItem : FRigUnit_HighlevelBaseMutable
{ 
	FRigElementKey                                     ItemA;                                                      // 0x01D0   (0x0008)  
	FRigElementKey                                     ItemB;                                                      // 0x01D8   (0x0008)  
	FRigElementKey                                     EffectorItem;                                               // 0x01E0   (0x0008)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x01E8   (0x0008)  MISSED
	FTransform                                         Effector;                                                   // 0x01F0   (0x0060)  
	FVector                                            PrimaryAxis;                                                // 0x0250   (0x0018)  
	FVector                                            SecondaryAxis;                                              // 0x0268   (0x0018)  
	float                                              SecondaryAxisWeight;                                        // 0x0280   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0284   (0x0004)  MISSED
	FVector                                            PoleVector;                                                 // 0x0288   (0x0018)  
	EControlRigVectorKind                              PoleVectorKind;                                             // 0x02A0   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x02A1   (0x0003)  MISSED
	FRigElementKey                                     PoleVectorSpace;                                            // 0x02A4   (0x0008)  
	bool                                               bEnableStretch;                                             // 0x02AC   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x02AD   (0x0003)  MISSED
	float                                              StretchStartRatio;                                          // 0x02B0   (0x0004)  
	float                                              StretchMaximumRatio;                                        // 0x02B4   (0x0004)  
	float                                              Weight;                                                     // 0x02B8   (0x0004)  
	float                                              ItemALength;                                                // 0x02BC   (0x0004)  
	float                                              ItemBLength;                                                // 0x02C0   (0x0004)  
	bool                                               bPropagateToChildren;                                       // 0x02C4   (0x0001)  
	unsigned char                                      UnknownData04_5[0xB];                                       // 0x02C5   (0x000B)  MISSED
	FRigUnit_TwoBoneIKSimple_DebugSettings             DebugSettings;                                              // 0x02D0   (0x0070)  
	FCachedRigElement                                  CachedItemAIndex;                                           // 0x0340   (0x0018)  
	FCachedRigElement                                  CachedItemBIndex;                                           // 0x0358   (0x0018)  
	FCachedRigElement                                  CachedEffectorItemIndex;                                    // 0x0370   (0x0018)  
	FCachedRigElement                                  CachedPoleVectorSpaceIndex;                                 // 0x0388   (0x0018)  
};

/// Struct /Script/ControlRig.RigUnit_TwoBoneIKSimpleVectors
/// Size: 0x0078 (0x000008 - 0x000080)
struct FRigUnit_TwoBoneIKSimpleVectors : FRigUnit_HighlevelBase
{ 
	FVector                                            Root;                                                       // 0x0008   (0x0018)  
	FVector                                            PoleVector;                                                 // 0x0020   (0x0018)  
	FVector                                            Effector;                                                   // 0x0038   (0x0018)  
	bool                                               bEnableStretch;                                             // 0x0050   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0051   (0x0003)  MISSED
	float                                              StretchStartRatio;                                          // 0x0054   (0x0004)  
	float                                              StretchMaximumRatio;                                        // 0x0058   (0x0004)  
	float                                              BoneALength;                                                // 0x005C   (0x0004)  
	float                                              BoneBLength;                                                // 0x0060   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0064   (0x0004)  MISSED
	FVector                                            Elbow;                                                      // 0x0068   (0x0018)  
};

/// Struct /Script/ControlRig.RigUnit_TwoBoneIKSimpleTransforms
/// Size: 0x0198 (0x000008 - 0x0001A0)
struct FRigUnit_TwoBoneIKSimpleTransforms : FRigUnit_HighlevelBase
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         Root;                                                       // 0x0010   (0x0060)  
	FVector                                            PoleVector;                                                 // 0x0070   (0x0018)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x0088   (0x0008)  MISSED
	FTransform                                         Effector;                                                   // 0x0090   (0x0060)  
	FVector                                            PrimaryAxis;                                                // 0x00F0   (0x0018)  
	FVector                                            SecondaryAxis;                                              // 0x0108   (0x0018)  
	float                                              SecondaryAxisWeight;                                        // 0x0120   (0x0004)  
	bool                                               bEnableStretch;                                             // 0x0124   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0125   (0x0003)  MISSED
	float                                              StretchStartRatio;                                          // 0x0128   (0x0004)  
	float                                              StretchMaximumRatio;                                        // 0x012C   (0x0004)  
	float                                              BoneALength;                                                // 0x0130   (0x0004)  
	float                                              BoneBLength;                                                // 0x0134   (0x0004)  
	unsigned char                                      UnknownData03_5[0x8];                                       // 0x0138   (0x0008)  MISSED
	FTransform                                         Elbow;                                                      // 0x0140   (0x0060)  
};

/// Struct /Script/ControlRig.RigUnit_GetCandidates
/// Size: 0x0018 (0x000008 - 0x000020)
struct FRigUnit_GetCandidates : FRigUnit
{ 
	FRigElementKey                                     Connector;                                                  // 0x0008   (0x0008)  
	TArray<FRigElementKey>                             Candidates;                                                 // 0x0010   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_DiscardMatches
/// Size: 0x0020 (0x0001D0 - 0x0001F0)
struct FRigUnit_DiscardMatches : FRigUnitMutable
{ 
	TArray<FRigElementKey>                             Excluded;                                                   // 0x01D0   (0x0010)  
	SDK_UNDEFINED(16,12564) /* FString */              __um(Message);                                              // 0x01E0   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_SetDefaultMatch
/// Size: 0x0010 (0x0001D0 - 0x0001E0)
struct FRigUnit_SetDefaultMatch : FRigUnitMutable
{ 
	FRigElementKey                                     Default;                                                    // 0x01D0   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x01D8   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_ConnectorExecution
/// Size: 0x01C8 (0x000008 - 0x0001D0)
struct FRigUnit_ConnectorExecution : FRigUnit
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0008   (0x0008)  MISSED
	FControlRigExecuteContext                          ExecuteContext;                                             // 0x0010   (0x01C0)  
};

/// Struct /Script/ControlRig.RigUnit_PointSimulation_DebugSettings
/// Size: 0x0080 (0x000000 - 0x000080)
struct FRigUnit_PointSimulation_DebugSettings
{ 
	bool                                               bEnabled;                                                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              Scale;                                                      // 0x0004   (0x0004)  
	float                                              CollisionScale;                                             // 0x0008   (0x0004)  
	bool                                               bDrawPointsAsSpheres;                                       // 0x000C   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x000D   (0x0003)  MISSED
	FLinearColor                                       Color;                                                      // 0x0010   (0x0010)  
	FTransform                                         WorldOffset;                                                // 0x0020   (0x0060)  
};

/// Struct /Script/ControlRig.RigUnit_PointSimulation_BoneTarget
/// Size: 0x0010 (0x000000 - 0x000010)
struct FRigUnit_PointSimulation_BoneTarget
{ 
	FName                                              bone;                                                       // 0x0000   (0x0004)  
	int32_t                                            TranslationPoint;                                           // 0x0004   (0x0004)  
	int32_t                                            PrimaryAimPoint;                                            // 0x0008   (0x0004)  
	int32_t                                            SecondaryAimPoint;                                          // 0x000C   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_PointSimulation_WorkData
/// Size: 0x0088 (0x000000 - 0x000088)
struct FRigUnit_PointSimulation_WorkData
{ 
	FCRSimPointContainer                               Simulation;                                                 // 0x0000   (0x0078)  
	TArray<FCachedRigElement>                          BoneIndices;                                                // 0x0078   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_PointSimulation
/// Size: 0x0210 (0x000100 - 0x000310)
struct FRigUnit_PointSimulation : FRigVMFunction_SimBaseMutable
{ 
	TArray<FRigVMSimPoint>                             Points;                                                     // 0x0100   (0x0010)  
	TArray<FCRSimLinearSpring>                         Links;                                                      // 0x0110   (0x0010)  
	TArray<FCRSimPointForce>                           Forces;                                                     // 0x0120   (0x0010)  
	TArray<FCRSimSoftCollision>                        CollisionVolumes;                                           // 0x0130   (0x0010)  
	float                                              SimulatedStepsPerSecond;                                    // 0x0140   (0x0004)  
	ERigVMSimPointIntegrateType                        IntegratorType;                                             // 0x0144   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0145   (0x0003)  MISSED
	float                                              VerletBlend;                                                // 0x0148   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x014C   (0x0004)  MISSED
	TArray<FRigUnit_PointSimulation_BoneTarget>        BoneTargets;                                                // 0x0150   (0x0010)  
	bool                                               bLimitLocalPosition;                                        // 0x0160   (0x0001)  
	bool                                               bPropagateToChildren;                                       // 0x0161   (0x0001)  
	unsigned char                                      UnknownData02_5[0x6];                                       // 0x0162   (0x0006)  MISSED
	FVector                                            PrimaryAimAxis;                                             // 0x0168   (0x0018)  
	FVector                                            SecondaryAimAxis;                                           // 0x0180   (0x0018)  
	unsigned char                                      UnknownData03_5[0x8];                                       // 0x0198   (0x0008)  MISSED
	FRigUnit_PointSimulation_DebugSettings             DebugSettings;                                              // 0x01A0   (0x0080)  
	FRigVMFourPointBezier                              Bezier;                                                     // 0x0220   (0x0060)  
	FRigUnit_PointSimulation_WorkData                  WorkData;                                                   // 0x0280   (0x0088)  
	unsigned char                                      UnknownData04_6[0x8];                                       // 0x0308   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_SpringInterp
/// Size: 0x0028 (0x000008 - 0x000030)
struct FRigUnit_SpringInterp : FRigVMFunction_SimBase
{ 
	float                                              Current;                                                    // 0x0008   (0x0004)  
	float                                              Target;                                                     // 0x000C   (0x0004)  
	float                                              Stiffness;                                                  // 0x0010   (0x0004)  
	float                                              CriticalDamping;                                            // 0x0014   (0x0004)  
	float                                              Mass;                                                       // 0x0018   (0x0004)  
	float                                              Result;                                                     // 0x001C   (0x0004)  
	FFloatSpringState                                  SpringState;                                                // 0x0020   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x002C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_SpringInterpVector
/// Size: 0x0090 (0x000008 - 0x000098)
struct FRigUnit_SpringInterpVector : FRigVMFunction_SimBase
{ 
	FVector                                            Current;                                                    // 0x0008   (0x0018)  
	FVector                                            Target;                                                     // 0x0020   (0x0018)  
	float                                              Stiffness;                                                  // 0x0038   (0x0004)  
	float                                              CriticalDamping;                                            // 0x003C   (0x0004)  
	float                                              Mass;                                                       // 0x0040   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0044   (0x0004)  MISSED
	FVector                                            Result;                                                     // 0x0048   (0x0018)  
	FVectorSpringState                                 SpringState;                                                // 0x0060   (0x0038)  
};

/// Struct /Script/ControlRig.RigUnit_SpringInterpV2
/// Size: 0x0038 (0x000008 - 0x000040)
struct FRigUnit_SpringInterpV2 : FRigVMFunction_SimBase
{ 
	float                                              Target;                                                     // 0x0008   (0x0004)  
	float                                              Strength;                                                   // 0x000C   (0x0004)  
	float                                              CriticalDamping;                                            // 0x0010   (0x0004)  
	float                                              Force;                                                      // 0x0014   (0x0004)  
	bool                                               bUseCurrentInput;                                           // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0019   (0x0003)  MISSED
	float                                              Current;                                                    // 0x001C   (0x0004)  
	float                                              TargetVelocityAmount;                                       // 0x0020   (0x0004)  
	bool                                               bInitializeFromTarget;                                      // 0x0024   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0025   (0x0003)  MISSED
	float                                              Result;                                                     // 0x0028   (0x0004)  
	float                                              Velocity;                                                   // 0x002C   (0x0004)  
	float                                              SimulatedResult;                                            // 0x0030   (0x0004)  
	FFloatSpringState                                  SpringState;                                                // 0x0034   (0x000C)  
};

/// Struct /Script/ControlRig.RigUnit_SpringInterpVectorV2
/// Size: 0x00E0 (0x000008 - 0x0000E8)
struct FRigUnit_SpringInterpVectorV2 : FRigVMFunction_SimBase
{ 
	FVector                                            Target;                                                     // 0x0008   (0x0018)  
	float                                              Strength;                                                   // 0x0020   (0x0004)  
	float                                              CriticalDamping;                                            // 0x0024   (0x0004)  
	FVector                                            Force;                                                      // 0x0028   (0x0018)  
	bool                                               bUseCurrentInput;                                           // 0x0040   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0041   (0x0007)  MISSED
	FVector                                            Current;                                                    // 0x0048   (0x0018)  
	float                                              TargetVelocityAmount;                                       // 0x0060   (0x0004)  
	bool                                               bInitializeFromTarget;                                      // 0x0064   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0065   (0x0003)  MISSED
	FVector                                            Result;                                                     // 0x0068   (0x0018)  
	FVector                                            Velocity;                                                   // 0x0080   (0x0018)  
	FVector                                            SimulatedResult;                                            // 0x0098   (0x0018)  
	FVectorSpringState                                 SpringState;                                                // 0x00B0   (0x0038)  
};

/// Struct /Script/ControlRig.RigUnit_SpringInterpQuaternionV2
/// Size: 0x0128 (0x000008 - 0x000130)
struct FRigUnit_SpringInterpQuaternionV2 : FRigVMFunction_SimBase
{ 
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              Target;                                                     // 0x0010   (0x0020)  
	float                                              Strength;                                                   // 0x0030   (0x0004)  
	float                                              CriticalDamping;                                            // 0x0034   (0x0004)  
	FVector                                            Torque;                                                     // 0x0038   (0x0018)  
	bool                                               bUseCurrentInput;                                           // 0x0050   (0x0001)  
	unsigned char                                      UnknownData01_5[0xF];                                       // 0x0051   (0x000F)  MISSED
	FQuat                                              Current;                                                    // 0x0060   (0x0020)  
	float                                              TargetVelocityAmount;                                       // 0x0080   (0x0004)  
	bool                                               bInitializeFromTarget;                                      // 0x0084   (0x0001)  
	unsigned char                                      UnknownData02_5[0xB];                                       // 0x0085   (0x000B)  MISSED
	FQuat                                              Result;                                                     // 0x0090   (0x0020)  
	FVector                                            AngularVelocity;                                            // 0x00B0   (0x0018)  
	unsigned char                                      UnknownData03_5[0x8];                                       // 0x00C8   (0x0008)  MISSED
	FQuat                                              SimulatedResult;                                            // 0x00D0   (0x0020)  
	FQuaternionSpringState                             SpringState;                                                // 0x00F0   (0x0040)  
};

