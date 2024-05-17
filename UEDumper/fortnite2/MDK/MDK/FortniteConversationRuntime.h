
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CommonConversationRuntime
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: GameplayTags

/// Class /Script/FortniteConversationRuntime.FortConversationGetGraphInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortConversationGetGraphInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/FortniteConversationRuntime.FortConversationGetGraphInterface.GetConversationGraph
	// class UConversationDatabase* GetConversationGraph();                                                                     // [0x2c33f24] Native|Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/FortniteConversationRuntime.FortConversationMarkerInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortConversationMarkerInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/FortniteConversationRuntime.FortConversationParticipantComponent
/// Size: 0x0000 (0x000190 - 0x000190)
class UFortConversationParticipantComponent : public UConversationParticipantComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Script/FortniteConversationRuntime.FortConversationContextCondition
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortConversationContextCondition : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/FortniteConversationRuntime.FortConversationContextCondition.DoesContextPass
	// bool DoesContextPass(FConversationContext& Context);                                                                     // [0xb3e84e0] Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/FortniteConversationRuntime.FortConversationContextCondition_ParticipantHasCID
/// Size: 0x0018 (0x000028 - 0x000040)
class UFortConversationContextCondition_ParticipantHasCID : public UFortConversationContextCondition
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FGameplayTag)                              ParticipantID                                               OFFSET(getStruct<T>, {0x28, 4, 0, 0})
	CMember(TArray<FSoftObjectPath>)                   AllowedCIDs                                                 OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Class /Script/FortniteConversationRuntime.FortConversationContextCondition_ParticipantHasMetaTag
/// Size: 0x0008 (0x000028 - 0x000030)
class UFortConversationContextCondition_ParticipantHasMetaTag : public UFortConversationContextCondition
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FGameplayTag)                              ParticipantID                                               OFFSET(getStruct<T>, {0x28, 4, 0, 0})
	SMember(FGameplayTag)                              MetaTag                                                     OFFSET(getStruct<T>, {0x2C, 4, 0, 0})
};

/// Class /Script/FortniteConversationRuntime.FortConversationContextCondition_ParticipantHasOwnedTag
/// Size: 0x0008 (0x000028 - 0x000030)
class UFortConversationContextCondition_ParticipantHasOwnedTag : public UFortConversationContextCondition
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FGameplayTag)                              ParticipantID                                               OFFSET(getStruct<T>, {0x28, 4, 0, 0})
	SMember(FGameplayTag)                              OwnedTag                                                    OFFSET(getStruct<T>, {0x2C, 4, 0, 0})
};

/// Class /Script/FortniteConversationRuntime.FortConversationContextCondition_ParticipantControllerMeetsRequirement
/// Size: 0x0010 (0x000028 - 0x000038)
class UFortConversationContextCondition_ParticipantControllerMeetsRequirement : public UFortConversationContextCondition
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FGameplayTag)                              ParticipantID                                               OFFSET(getStruct<T>, {0x28, 4, 0, 0})
	CMember(class UFortControllerRequirement*)         Requirement                                                 OFFSET(get<T>, {0x30, 8, 0, 0})
};

/// Class /Script/FortniteConversationRuntime.FortConversationContextConditionHelpers
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortConversationContextConditionHelpers : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/FortniteConversationRuntime.FortConversationContextConditionHelpers.GetMessageForContext
	// bool GetMessageForContext(FFortConversationNodeConditionalMessages& Messages, FConversationContext& Context, FText& OutText); // [0xb3e93dc] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
};

/// Class /Script/FortniteConversationRuntime.FortConversationParamLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortConversationParamLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/FortniteConversationRuntime.FortConversationParamLibrary.ExtractConversationParameterValue
	// bool ExtractConversationParameterValue(TArray<FConversationNodeParameterPair>& ConversationParameters, FString DesiredParameterName, FString& ParameterValueOut); // [0xb3e8bd4] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/FortniteConversationRuntime.FortniteConversationGlobals
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortniteConversationGlobals : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/FortniteConversationRuntime.FortPlayerConversationComponent
/// Size: 0x0248 (0x000190 - 0x0003D8)
class UFortPlayerConversationComponent : public UFortConversationParticipantComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 984;

public:
	CMember(TArray<class UFortNonPlayerConversationParticipantComponent*>) ConversationParticipantsInRange         OFFSET(get<T>, {0x198, 16, 0, 0})
	DMember(float)                                     GreetSphereRadius                                           OFFSET(get<float>, {0x1A8, 4, 0, 0})
	DMember(float)                                     IconVisibilityRadius                                        OFFSET(get<float>, {0x1AC, 4, 0, 0})
	DMember(float)                                     AbortConversationRange                                      OFFSET(get<float>, {0x1B0, 4, 0, 0})
	SMember(FGameplayTag)                              RidingOnActorTag                                            OFFSET(getStruct<T>, {0x1B4, 4, 0, 0})
	DMember(float)                                     RidingOnActorRangeMultiplierSquared                         OFFSET(get<float>, {0x1B8, 4, 0, 0})
	CMember(TSet<UFortNonPlayerConversationParticipantComponent*>) IndicatedNPCConversationComponents              OFFSET(get<T>, {0x1F8, 80, 0, 0})
	DMember(bool)                                      bMoveShouldAbortConversation                                OFFSET(get<bool>, {0x250, 1, 0, 0})
	DMember(bool)                                      bCachedDefaultMoveShouldAbortConverationValue               OFFSET(get<bool>, {0x251, 1, 0, 0})
	SMember(FClientConversationMessagePayload)         LastSanitizationMessage                                     OFFSET(getStruct<T>, {0x370, 104, 0, 0})


	/// Functions
	// Function /Script/FortniteConversationRuntime.FortPlayerConversationComponent.RequestServerAbortConversationWithParticipant
	// void RequestServerAbortConversationWithParticipant(class UFortNonPlayerConversationParticipantComponent* Participant);   // [0xb3e9c54] Net|NetReliableNative|Event|Public|NetServer 
	// Function /Script/FortniteConversationRuntime.FortPlayerConversationComponent.RequestServerAbortConversation
	// void RequestServerAbortConversation();                                                                                   // [0x941dcf4] Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable 
	// Function /Script/FortniteConversationRuntime.FortPlayerConversationComponent.HandleWeaponEquipped
	// void HandleWeaponEquipped(class AFortWeapon* NewWeapon, class AFortWeapon* PrevWeapon);                                  // [0x6fbbe88] Final|Native|Private 
	// Function /Script/FortniteConversationRuntime.FortPlayerConversationComponent.HandleViewTargetChanged
	// void HandleViewTargetChanged();                                                                                          // [0xb3e9c40] Final|Native|Private 
	// Function /Script/FortniteConversationRuntime.FortPlayerConversationComponent.HandleFollowedPlayerChanged
	// void HandleFollowedPlayerChanged(class AFortPlayerControllerSpectating* SpectatingPC, class AFortPlayerState* FollowedPlayerState); // [0xb3e9b7c] Final|Native|Private 
	// Function /Script/FortniteConversationRuntime.FortPlayerConversationComponent.HandleDBNOChanged
	// void HandleDBNOChanged(class AFortPawn* Pawn, bool bIsDBNO);                                                             // [0x8ae7dc0] Final|Native|Private 
	// Function /Script/FortniteConversationRuntime.FortPlayerConversationComponent.ClientSpectatorOpenUI
	// void ClientSpectatorOpenUI();                                                                                            // [0x8abc230] Net|NetReliableNative|Event|Public|NetClient 
	// Function /Script/FortniteConversationRuntime.FortPlayerConversationComponent.ClientSpectatorLeaveConversationState
	// void ClientSpectatorLeaveConversationState();                                                                            // [0x8d7e180] Net|NetReliableNative|Event|Public|NetClient 
	// Function /Script/FortniteConversationRuntime.FortPlayerConversationComponent.ClientSpectatorEnterConversationState
	// void ClientSpectatorEnterConversationState();                                                                            // [0x8d7e0a0] Net|NetReliableNative|Event|Public|NetClient 
	// Function /Script/FortniteConversationRuntime.FortPlayerConversationComponent.ClientSpectatorCloseUI
	// void ClientSpectatorCloseUI();                                                                                           // [0xa02ef44] Net|NetReliableNative|Event|Public|NetClient 
	// Function /Script/FortniteConversationRuntime.FortPlayerConversationComponent.ClientReceiveConversationGiftUINotification
	// void ClientReceiveConversationGiftUINotification(FGiftUINotificationInfo ConversationGiftUINotification);                // [0xb3e844c] Net|NetReliableNative|Event|Public|NetClient 
};

/// Struct /Script/FortniteConversationRuntime.FortConversationEnterEvent
/// Size: 0x0008 (0x000000 - 0x000008)
class FFortConversationEnterEvent : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(class APlayerController*)                  PlayerController                                            OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/FortniteConversationRuntime.FortConversationLeaveEvent
/// Size: 0x0008 (0x000000 - 0x000008)
class FFortConversationLeaveEvent : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(class APlayerController*)                  PlayerController                                            OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/FortniteConversationRuntime.FortConversation_Spectator_EnterConversation
/// Size: 0x0001 (0x000000 - 0x000001)
class FFortConversation_Spectator_EnterConversation : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/FortniteConversationRuntime.FortConversation_Spectator_LeaveConversation
/// Size: 0x0001 (0x000000 - 0x000001)
class FFortConversation_Spectator_LeaveConversation : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/FortniteConversationRuntime.FortConversation_SetDialogMarkerClassEvent
/// Size: 0x0001 (0x000000 - 0x000001)
class FFortConversation_SetDialogMarkerClassEvent : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/FortniteConversationRuntime.NPCConversationIndicatorMessage
/// Size: 0x0008 (0x000000 - 0x000008)
class FNPCConversationIndicatorMessage : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(class UFortNonPlayerConversationParticipantComponent*) NPCConversationComponent                        OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/FortniteConversationRuntime.FortConversation_NPC_AddIndicator
/// Size: 0x0000 (0x000008 - 0x000008)
class FFortConversation_NPC_AddIndicator : public FNPCConversationIndicatorMessage
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/FortniteConversationRuntime.FortConversation_NPC_RemoveIndicator
/// Size: 0x0000 (0x000008 - 0x000008)
class FFortConversation_NPC_RemoveIndicator : public FNPCConversationIndicatorMessage
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/FortniteConversationRuntime.ConversationSettingDialogMarkerData
/// Size: 0x0020 (0x000000 - 0x000020)
class FConversationSettingDialogMarkerData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(TWeakObjectPtr<UClass*>)                   DialogMarkerSoftClass                                       OFFSET(get<T>, {0x0, 32, 0, 0})
};

/// Struct /Script/FortniteConversationRuntime.FortConversationConditionalMessage
/// Size: 0x0018 (0x000000 - 0x000018)
class FFortConversationConditionalMessage : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(class UFortConversationContextCondition*)  Condition                                                   OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FText)                                     Message                                                     OFFSET(getStruct<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/FortniteConversationRuntime.FortConversationNodeConditionalMessages
/// Size: 0x0010 (0x000000 - 0x000010)
class FFortConversationNodeConditionalMessages : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FFortConversationConditionalMessage>) Messages                                                  OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Enum /Script/FortniteConversationRuntime.EInteractionRange
/// Size: 0x02
enum class EInteractionRange : uint8_t
{
	EInteractionRange__Preview                                                       = 0,
	EInteractionRange__Interaction                                                   = 1
};

