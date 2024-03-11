
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CommonConversationRuntime
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: GameplayTags

/// Enum /Script/FortniteConversationRuntime.EInteractionRange
/// Size: 0x03
enum class EInteractionRange : uint8_t
{
	EInteractionRange__Preview                                                       = 0,
	EInteractionRange__Interaction                                                   = 1,
	EInteractionRange__EInteractionRange_MAX                                         = 2
};

/// Class /Script/FortniteConversationRuntime.FortConversationMarkerInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortConversationMarkerInterface : public UInterface
{ 
public:
};

/// Class /Script/FortniteConversationRuntime.FortConversationParticipantComponent
/// Size: 0x0000 (0x0001A0 - 0x0001A0)
class UFortConversationParticipantComponent : public UConversationParticipantComponent
{ 
public:
};

/// Class /Script/FortniteConversationRuntime.FortConversationContextCondition
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortConversationContextCondition : public UObject
{ 
public:


	/// Functions
	// Function /Script/FortniteConversationRuntime.FortConversationContextCondition.DoesContextPass
	// bool DoesContextPass(FConversationContext& Context);                                                                  // [0xa17dcc8] Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/FortniteConversationRuntime.FortConversationContextCondition_ParticipantHasCID
/// Size: 0x0018 (0x000028 - 0x000040)
class UFortConversationContextCondition_ParticipantHasCID : public UFortConversationContextCondition
{ 
public:
	FGameplayTag                                       ParticipantID;                                              // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x002C   (0x0004)  MISSED
	TArray<FSoftObjectPath>                            AllowedCIDs;                                                // 0x0030   (0x0010)  
};

/// Class /Script/FortniteConversationRuntime.FortConversationContextCondition_ParticipantHasMetaTag
/// Size: 0x0008 (0x000028 - 0x000030)
class UFortConversationContextCondition_ParticipantHasMetaTag : public UFortConversationContextCondition
{ 
public:
	FGameplayTag                                       ParticipantID;                                              // 0x0028   (0x0004)  
	FGameplayTag                                       MetaTag;                                                    // 0x002C   (0x0004)  
};

/// Class /Script/FortniteConversationRuntime.FortConversationContextCondition_ParticipantHasOwnedTag
/// Size: 0x0008 (0x000028 - 0x000030)
class UFortConversationContextCondition_ParticipantHasOwnedTag : public UFortConversationContextCondition
{ 
public:
	FGameplayTag                                       ParticipantID;                                              // 0x0028   (0x0004)  
	FGameplayTag                                       OwnedTag;                                                   // 0x002C   (0x0004)  
};

/// Class /Script/FortniteConversationRuntime.FortConversationContextCondition_ParticipantControllerMeetsRequirement
/// Size: 0x0010 (0x000028 - 0x000038)
class UFortConversationContextCondition_ParticipantControllerMeetsRequirement : public UFortConversationContextCondition
{ 
public:
	FGameplayTag                                       ParticipantID;                                              // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x002C   (0x0004)  MISSED
	class UFortControllerRequirement*                  Requirement;                                                // 0x0030   (0x0008)  
};

/// Class /Script/FortniteConversationRuntime.FortConversationContextConditionHelpers
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortConversationContextConditionHelpers : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/FortniteConversationRuntime.FortConversationContextConditionHelpers.GetMessageForContext
	// bool GetMessageForContext(FFortConversationNodeConditionalMessages& Messages, FConversationContext& Context, FText& OutText); // [0xa17e104] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
};

/// Class /Script/FortniteConversationRuntime.FortConversationParamLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortConversationParamLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/FortniteConversationRuntime.FortConversationParamLibrary.ExtractConversationParameterValue
	// bool ExtractConversationParameterValue(TArray<FConversationNodeParameterPair>& ConversationParameters, FString DesiredParameterName, FString& ParameterValueOut); // [0xa17de5c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/FortniteConversationRuntime.FortniteConversationGlobals
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortniteConversationGlobals : public UObject
{ 
public:
};

/// Class /Script/FortniteConversationRuntime.FortPlayerConversationComponent
/// Size: 0x01C0 (0x0001A0 - 0x000360)
class UFortPlayerConversationComponent : public UFortConversationParticipantComponent
{ 
public:
	TArray<class UFortNonPlayerConversationParticipantComponent*> ConversationParticipantsInRange;                 // 0x01A0   (0x0010)  
	float                                              GreetSphereRadius;                                          // 0x01B0   (0x0004)  
	float                                              IconVisibilityRadius;                                       // 0x01B4   (0x0004)  
	float                                              AbortConversationRange;                                     // 0x01B8   (0x0004)  
	FGameplayTag                                       RidingOnActorTag;                                           // 0x01BC   (0x0004)  
	float                                              RidingOnActorRangeMultiplierSquared;                        // 0x01C0   (0x0004)  
	unsigned char                                      UnknownData00_5[0x3C];                                      // 0x01C4   (0x003C)  MISSED
	SDK_UNDEFINED(80,13988) /* TSet<UFortNonPlayerConversationParticipantComponent*> */ __um(IndicatedNPCConversationComponents); // 0x0200   (0x0050)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x0250   (0x0008)  MISSED
	bool                                               bMoveShouldAbortConversation;                               // 0x0258   (0x0001)  
	bool                                               bCachedDefaultMoveShouldAbortConverationValue;              // 0x0259   (0x0001)  
	unsigned char                                      UnknownData02_6[0x106];                                     // 0x025A   (0x0106)  MISSED


	/// Functions
	// Function /Script/FortniteConversationRuntime.FortPlayerConversationComponent.RequestServerAbortConversationWithParticipant
	// void RequestServerAbortConversationWithParticipant(class UFortNonPlayerConversationParticipantComponent* Participant); // [0x9a22108] Net|NetReliableNative|Event|Public|NetServer 
	// Function /Script/FortniteConversationRuntime.FortPlayerConversationComponent.RequestServerAbortConversation
	// void RequestServerAbortConversation();                                                                                // [0x7905660] Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable 
	// Function /Script/FortniteConversationRuntime.FortPlayerConversationComponent.HandleWeaponEquipped
	// void HandleWeaponEquipped(class AFortWeapon* NewWeapon, class AFortWeapon* PrevWeapon);                               // [0x6cbaff4] Final|Native|Private 
	// Function /Script/FortniteConversationRuntime.FortPlayerConversationComponent.HandleViewTargetChanged
	// void HandleViewTargetChanged();                                                                                       // [0xa17e480] Final|Native|Private 
	// Function /Script/FortniteConversationRuntime.FortPlayerConversationComponent.HandleFollowedPlayerChanged
	// void HandleFollowedPlayerChanged(class AFortPlayerControllerSpectating* SpectatingPC, class AFortPlayerState* FollowedPlayerState); // [0xa17e3bc] Final|Native|Private 
	// Function /Script/FortniteConversationRuntime.FortPlayerConversationComponent.HandleDBNOChanged
	// void HandleDBNOChanged(class AFortPawn* Pawn, bool bIsDBNO);                                                          // [0x81ff9b0] Final|Native|Private 
	// Function /Script/FortniteConversationRuntime.FortPlayerConversationComponent.ClientSpectatorOpenUI
	// void ClientSpectatorOpenUI();                                                                                         // [0x81db0dc] Net|NetReliableNative|Event|Public|NetClient 
	// Function /Script/FortniteConversationRuntime.FortPlayerConversationComponent.ClientSpectatorLeaveConversationState
	// void ClientSpectatorLeaveConversationState();                                                                         // [0x829f6f4] Net|NetReliableNative|Event|Public|NetClient 
	// Function /Script/FortniteConversationRuntime.FortPlayerConversationComponent.ClientSpectatorEnterConversationState
	// void ClientSpectatorEnterConversationState();                                                                         // [0x841c2d0] Net|NetReliableNative|Event|Public|NetClient 
	// Function /Script/FortniteConversationRuntime.FortPlayerConversationComponent.ClientSpectatorCloseUI
	// void ClientSpectatorCloseUI();                                                                                        // [0x92ababc] Net|NetReliableNative|Event|Public|NetClient 
	// Function /Script/FortniteConversationRuntime.FortPlayerConversationComponent.ClientReceiveConversationGiftUINotification
	// void ClientReceiveConversationGiftUINotification(FGiftUINotificationInfo ConversationGiftUINotification);             // [0xa17db84] Net|NetReliableNative|Event|Public|NetClient 
};

/// Struct /Script/FortniteConversationRuntime.FortConversationEnterEvent
/// Size: 0x0008 (0x000000 - 0x000008)
struct FFortConversationEnterEvent
{ 
	class APlayerController*                           PlayerController;                                           // 0x0000   (0x0008)  
};

/// Struct /Script/FortniteConversationRuntime.FortConversationLeaveEvent
/// Size: 0x0008 (0x000000 - 0x000008)
struct FFortConversationLeaveEvent
{ 
	class APlayerController*                           PlayerController;                                           // 0x0000   (0x0008)  
};

/// Struct /Script/FortniteConversationRuntime.FortConversation_Spectator_EnterConversation
/// Size: 0x0001 (0x000000 - 0x000001)
struct FFortConversation_Spectator_EnterConversation
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/FortniteConversationRuntime.FortConversation_Spectator_LeaveConversation
/// Size: 0x0001 (0x000000 - 0x000001)
struct FFortConversation_Spectator_LeaveConversation
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/FortniteConversationRuntime.FortConversation_SetDialogMarkerClassEvent
/// Size: 0x0001 (0x000000 - 0x000001)
struct FFortConversation_SetDialogMarkerClassEvent
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/FortniteConversationRuntime.NPCConversationIndicatorMessage
/// Size: 0x0008 (0x000000 - 0x000008)
struct FNPCConversationIndicatorMessage
{ 
	class UFortNonPlayerConversationParticipantComponent* NPCConversationComponent;                                // 0x0000   (0x0008)  
};

/// Struct /Script/FortniteConversationRuntime.FortConversation_NPC_AddIndicator
/// Size: 0x0000 (0x000008 - 0x000008)
struct FFortConversation_NPC_AddIndicator : FNPCConversationIndicatorMessage
{ 
};

/// Struct /Script/FortniteConversationRuntime.FortConversation_NPC_RemoveIndicator
/// Size: 0x0000 (0x000008 - 0x000008)
struct FFortConversation_NPC_RemoveIndicator : FNPCConversationIndicatorMessage
{ 
};

/// Struct /Script/FortniteConversationRuntime.ConversationSettingDialogMarkerData
/// Size: 0x0020 (0x000000 - 0x000020)
struct FConversationSettingDialogMarkerData
{ 
	SDK_UNDEFINED(32,13989) /* TWeakObjectPtr<UClass*> */ __um(DialogMarkerSoftClass);                             // 0x0000   (0x0020)  
};

/// Struct /Script/FortniteConversationRuntime.FortConversationConditionalMessage
/// Size: 0x0020 (0x000000 - 0x000020)
struct FFortConversationConditionalMessage
{ 
	class UFortConversationContextCondition*           Condition;                                                  // 0x0000   (0x0008)  
	SDK_UNDEFINED(24,13990) /* FText */                __um(Message);                                              // 0x0008   (0x0018)  
};

/// Struct /Script/FortniteConversationRuntime.FortConversationNodeConditionalMessages
/// Size: 0x0010 (0x000000 - 0x000010)
struct FFortConversationNodeConditionalMessages
{ 
	TArray<FFortConversationConditionalMessage>        Messages;                                                   // 0x0000   (0x0010)  
};

