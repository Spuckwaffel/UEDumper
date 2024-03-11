
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: AssembledMeshSystem
/// dependency: Athena
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: EventModeRuntime
/// dependency: FortniteGame
/// dependency: GameplayAbilities
/// dependency: GameplayTags
/// dependency: ModularGameplay
/// dependency: RidingCodeRuntime
/// dependency: SlateCore
/// dependency: SoundLibrary
/// dependency: VehicleCosmeticsRuntime

/// Class /RidingContent/Components/RidingGeneric_Interafce.RidingGeneric_Interafce_C
/// Size: 0x0000 (0x000028 - 0x000028)
class URidingGeneric_Interafce_C : public UInterface
{ 
public:


	/// Functions
	// Function /RidingContent/Components/RidingGeneric_Interafce.RidingGeneric_Interafce_C.ToggleRidingAlternative
	// void ToggleRidingAlternative();                                                                                       // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Components/RidingGeneric_Interafce.RidingGeneric_Interafce_C.GetRidingInfoFromTarget
	// void GetRidingInfoFromTarget(double& JumpAttachGroundHeightMin, double& JumpAttachGroundHeightBuffer, bool& UsesAltRidingMessage); // [0x18a39e4] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
};

/// Class /RidingContent/Components/CreatureBaseNonRidableComponent.CreatureBaseNonRidableComponent_C
/// Size: 0x001A (0x0000A0 - 0x0000BA)
class UCreatureBaseNonRidableComponent_C : public UActorComponent
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x00A0   (0x0008)  
	double                                             Jump_Attach_Ground_Height_Min;                              // 0x00A8   (0x0008)  
	double                                             Jump_Attach_Ground_Height_Buffer;                           // 0x00B0   (0x0008)  
	bool                                               Uses_Alt_Riding_Message;                                    // 0x00B8   (0x0001)  
	bool                                               KillOnRideAttempt;                                          // 0x00B9   (0x0001)  


	/// Functions
	// Function /RidingContent/Components/CreatureBaseNonRidableComponent.CreatureBaseNonRidableComponent_C.GetRidingInfoFromTarget
	// void GetRidingInfoFromTarget(double& JumpAttachGroundHeightMin, double& JumpAttachGroundHeightBuffer, bool& UsesAltRidingMessage); // [0x18a39e4] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Components/CreatureBaseNonRidableComponent.CreatureBaseNonRidableComponent_C.ToggleRidingAlternative
	// void ToggleRidingAlternative();                                                                                       // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Components/CreatureBaseNonRidableComponent.CreatureBaseNonRidableComponent_C.AlternateRidingEvent
	// void AlternateRidingEvent();                                                                                          // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Components/CreatureBaseNonRidableComponent.CreatureBaseNonRidableComponent_C.ExecuteUbergraph_CreatureBaseNonRidableComponent
	// void ExecuteUbergraph_CreatureBaseNonRidableComponent(int32_t EntryPoint);                                            // [0x18a39e4] Final                
};

/// Class /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C
/// Size: 0x06D0 (0x000730 - 0x000E00)
class UCreatureBaseRidableComponent_C : public UControllableRidableComponent
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0730   (0x0008)  
	FGameplayTagContainer                              T_CreatureIsBeingRidden;                                    // 0x0738   (0x0020)  
	class UClass*                                      GE_CreatureIsBeingRidden;                                   // 0x0758   (0x0008)  
	class UClass*                                      GE_CreatureIsBeingRidden_Passive;                           // 0x0760   (0x0008)  
	bool                                               bDebugDisplay;                                              // 0x0768   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0769   (0x0007)  MISSED
	double                                             DebugTickRate;                                              // 0x0770   (0x0008)  
	FVector                                            DebugServerRiderLocation;                                   // 0x0778   (0x0018)  
	double                                             CapsuleRadiusOffset;                                        // 0x0790   (0x0008)  
	double                                             CapsuleHalfHeightOffset;                                    // 0x0798   (0x0008)  
	FGameplayTagContainer                              T_RidingSpecialAbility;                                     // 0x07A0   (0x0020)  
	class UAnimSequence*                               IdleAnim_Add;                                               // 0x07C0   (0x0008)  
	class UAnimSequence*                               RunAnim_Add;                                                // 0x07C8   (0x0008)  
	class UBlendSpace*                                 TurnBS;                                                     // 0x07D0   (0x0008)  
	double                                             MinSpeedToRun;                                              // 0x07D8   (0x0008)  
	double                                             Run_RampIntoSpeed;                                          // 0x07E0   (0x0008)  
	double                                             Run_RampIntoSpeed_ADS;                                      // 0x07E8   (0x0008)  
	double                                             Run_PlayRate;                                               // 0x07F0   (0x0008)  
	double                                             Run_PlayRate_ADS;                                           // 0x07F8   (0x0008)  
	double                                             SpringAlpha;                                                // 0x0800   (0x0008)  
	double                                             SpringAlpha_ADS;                                            // 0x0808   (0x0008)  
	double                                             Idle_Alpha;                                                 // 0x0810   (0x0008)  
	double                                             Idle_Alpha_ADS;                                             // 0x0818   (0x0008)  
	double                                             Run_Alpha;                                                  // 0x0820   (0x0008)  
	double                                             Run_Alpha_ADS;                                              // 0x0828   (0x0008)  
	double                                             Turn_Alpha;                                                 // 0x0830   (0x0008)  
	double                                             Turn_Alpha_ADS;                                             // 0x0838   (0x0008)  
	class UAnimSequence*                               Clamp_AnimPose_LastResort;                                  // 0x0840   (0x0008)  
	FRotator                                           Clamp_Foot_R_Adjust;                                        // 0x0848   (0x0018)  
	FRotator                                           Clamp_Foot_L_Adjust;                                        // 0x0860   (0x0018)  
	double                                             CapsuleRadiusOffset_Emote;                                  // 0x0878   (0x0008)  
	double                                             CapsuleHalfHeightOffset_Emote;                              // 0x0880   (0x0008)  
	FVector                                            Clamp_Location_Offset;                                      // 0x0888   (0x0018)  
	FRotator                                           Clamp_Rotation_Offset;                                      // 0x08A0   (0x0018)  
	FVector                                            Clamp_ScaleAdjust;                                          // 0x08B8   (0x0018)  
	FName                                              RidableSocketName;                                          // 0x08D0   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x08D4   (0x0004)  MISSED
	double                                             RidableSocket_Alpha;                                        // 0x08D8   (0x0008)  
	class UClass*                                      GE_CooldownOverride;                                        // 0x08E0   (0x0008)  
	FGameplayTagContainer                              T_CreatureOverrideCooldown;                                 // 0x08E8   (0x0020)  
	SDK_UNDEFINED(80,12460) /* TMap<TEnumAsByte<ECollisionChannel>, TEnumAsByte<ECollisionResponse>> */ __um(OriginalCollisionResponseMap); // 0x0908   (0x0050)  
	FSoundIndicatorIconPicker                          RidingSoundIndicatorIconOverride;                           // 0x0958   (0x0028)  
	SDK_UNDEFINED(16,12461) /* FMulticastInlineDelegate */ __um(AudioOnJump);                                      // 0x0980   (0x0010)  
	SDK_UNDEFINED(16,12462) /* FMulticastInlineDelegate */ __um(AudioOnJumpApex);                                  // 0x0990   (0x0010)  
	char                                               MovementMode;                                               // 0x09A0   (0x0001)  
	bool                                               bFalling;                                                   // 0x09A1   (0x0001)  
	unsigned char                                      UnknownData02_5[0x6];                                       // 0x09A2   (0x0006)  MISSED
	FScalableFloat                                     RidingAbilityEnable_HF;                                     // 0x09A8   (0x0028)  
	double                                             JumpAttach_GroundHeightMin;                                 // 0x09D0   (0x0008)  
	double                                             JumpAttach_GroundHeightBuffer;                              // 0x09D8   (0x0008)  
	bool                                               UseAltRidingMessage;                                        // 0x09E0   (0x0001)  
	unsigned char                                      UnknownData03_5[0x7];                                       // 0x09E1   (0x0007)  MISSED
	SDK_UNDEFINED(24,12463) /* FText */                __um(Riding_Interaction_Text);                              // 0x09E8   (0x0018)  
	double                                             currentEnergyValue;                                         // 0x0A00   (0x0008)  
	class UPlayerRiderComponent_C*                     PlayerRiderComponentRef;                                    // 0x0A08   (0x0008)  
	class ANPC_Pawn_Wildlife_Parent_C*                 NPCPawnWildlifeRef;                                         // 0x0A10   (0x0008)  
	double                                             previousTimeTracked;                                        // 0x0A18   (0x0008)  
	double                                             energyTrackingDeltaTime;                                    // 0x0A20   (0x0008)  
	bool                                               ShouldHaveEnergy;                                           // 0x0A28   (0x0001)  
	unsigned char                                      UnknownData04_5[0x7];                                       // 0x0A29   (0x0007)  MISSED
	double                                             EnergyRateOfDecayStopped;                                   // 0x0A30   (0x0008)  
	bool                                               allowUpdateEnergyTrackingTick;                              // 0x0A38   (0x0001)  
	bool                                               lastBeingRiddenState;                                       // 0x0A39   (0x0001)  
	unsigned char                                      UnknownData05_5[0x6];                                       // 0x0A3A   (0x0006)  MISSED
	FCurveTableRowHandle                               EnergyRateOfDecayMoving;                                    // 0x0A40   (0x0010)  
	FCurveTableRowHandle                               EnergyRateOfDecaySprinting;                                 // 0x0A50   (0x0010)  
	double                                             CurrentEnergyRateOfRecharge;                                // 0x0A60   (0x0008)  
	FCurveTableRowHandle                               ExhaustedEnergyRateOfRecharge;                              // 0x0A68   (0x0010)  
	double                                             EnergyWarningThreshold;                                     // 0x0A78   (0x0008)  
	double                                             EnergyCriticalThreshold;                                    // 0x0A80   (0x0008)  
	bool                                               energyWarningActive;                                        // 0x0A88   (0x0001)  
	bool                                               energyCriticalActive;                                       // 0x0A89   (0x0001)  
	unsigned char                                      UnknownData06_5[0x6];                                       // 0x0A8A   (0x0006)  MISSED
	double                                             minMovementSpeedTreshold;                                   // 0x0A90   (0x0008)  
	bool                                               IsJumping;                                                  // 0x0A98   (0x0001)  
	unsigned char                                      UnknownData07_5[0x7];                                       // 0x0A99   (0x0007)  MISSED
	double                                             EnergyRegenThreshold;                                       // 0x0AA0   (0x0008)  
	bool                                               AlwaysRegenWhenNotRidden;                                   // 0x0AA8   (0x0001)  
	unsigned char                                      UnknownData08_5[0x7];                                       // 0x0AA9   (0x0007)  MISSED
	class UClass*                                      GE_EnergyWarning;                                           // 0x0AB0   (0x0008)  
	class UClass*                                      GE_EnergyCritical;                                          // 0x0AB8   (0x0008)  
	class UClass*                                      GE_EnergyDepleted;                                          // 0x0AC0   (0x0008)  
	FGameplayTagContainer                              T_EnergyWarning;                                            // 0x0AC8   (0x0020)  
	FGameplayTagContainer                              T_EnergyCritical;                                           // 0x0AE8   (0x0020)  
	FGameplayTagContainer                              T_EnergyDepleted;                                           // 0x0B08   (0x0020)  
	FGameplayTagContainer                              T_CannotRideBucket;                                         // 0x0B28   (0x0020)  
	class UClass*                                      Gameplay_Effect;                                            // 0x0B48   (0x0008)  
	FGameplayTag                                       SprintingAbilityTag;                                        // 0x0B50   (0x0004)  
	unsigned char                                      UnknownData09_5[0x4];                                       // 0x0B54   (0x0004)  MISSED
	class UClass*                                      GE_EatToRefuel;                                             // 0x0B58   (0x0008)  
	FSlateBrush                                        IconBrush;                                                  // 0x0B60   (0x00C0)  
	class UClass*                                      GE_Creature_Sprint;                                         // 0x0C20   (0x0008)  
	class USoundLibrary*                               RidingFoleySoundLibrary;                                    // 0x0C28   (0x0008)  
	FGameplayTagContainer                              TagsPreventSprinting;                                       // 0x0C30   (0x0020)  
	SDK_UNDEFINED(16,12464) /* FMulticastInlineDelegate */ __um(RidableUIStart);                                   // 0x0C50   (0x0010)  
	SDK_UNDEFINED(16,12465) /* FMulticastInlineDelegate */ __um(RidableUIUpdateEnergy);                            // 0x0C60   (0x0010)  
	FGameplayTag                                       OutOfEnergySoundLibTag;                                     // 0x0C70   (0x0004)  
	FGameplayTag                                       SprintStartSoundLibTag;                                     // 0x0C74   (0x0004)  
	SDK_UNDEFINED(1,12466) /* TEnumAsByte<TInteractionType> */ __um(Riding_Interaction_Type);                      // 0x0C78   (0x0001)  
	unsigned char                                      UnknownData10_5[0x7];                                       // 0x0C79   (0x0007)  MISSED
	double                                             StartInAirTimestamp;                                        // 0x0C80   (0x0008)  
	FTimerHandle                                       RetryJumpExitTimerHandle;                                   // 0x0C88   (0x0008)  
	double                                             JumpExitBufferStartTimeStamp;                               // 0x0C90   (0x0008)  
	FScalableFloat                                     JumpExitBufferTime;                                         // 0x0C98   (0x0028)  
	FTimerHandle                                       JumpExitBufferTimerHandle;                                  // 0x0CC0   (0x0008)  
	FGameplayTag                                       MountLandedCueTag;                                          // 0x0CC8   (0x0004)  
	unsigned char                                      UnknownData11_5[0x4];                                       // 0x0CCC   (0x0004)  MISSED
	class UClass*                                      GE_BlockCreatureAttackOnDismount;                           // 0x0CD0   (0x0008)  
	bool                                               EnergyRegenActive;                                          // 0x0CD8   (0x0001)  
	unsigned char                                      UnknownData12_5[0x7];                                       // 0x0CD9   (0x0007)  MISSED
	FGameplayTagContainer                              BlockPetting_TagContainer;                                  // 0x0CE0   (0x0020)  
	bool                                               infiniteStaminaBuffEnabled;                                 // 0x0D00   (0x0001)  
	unsigned char                                      UnknownData13_5[0x3];                                       // 0x0D01   (0x0003)  MISSED
	FGameplayTag                                       InfiniteStaminaEffect_GameplayCueTag;                       // 0x0D04   (0x0004)  
	FGameplayTagContainer                              Cannot_Ride_Rider_Bucket;                                   // 0x0D08   (0x0020)  
	FScalableFloat                                     JumpFatigue_Enabled;                                        // 0x0D28   (0x0028)  
	FScalableFloat                                     JumpFatigue_ApplyFatigueMinJumpCount;                       // 0x0D50   (0x0028)  
	class UClass*                                      JumpFatigueGameplayEffect;                                  // 0x0D78   (0x0008)  
	bool                                               JumpFatigueDebugEnabled;                                    // 0x0D80   (0x0001)  
	unsigned char                                      UnknownData14_5[0x3];                                       // 0x0D81   (0x0003)  MISSED
	int32_t                                            JumpFatigueJumpCount;                                       // 0x0D84   (0x0004)  
	double                                             JumpFatigue_LastLandingTimeStamp;                           // 0x0D88   (0x0008)  
	FScalableFloat                                     JumpFatigue_ResetCounterDelay;                              // 0x0D90   (0x0028)  
	bool                                               JumpFatigue_ShouldTimeStampNextLanding;                     // 0x0DB8   (0x0001)  
	unsigned char                                      UnknownData15_5[0x3];                                       // 0x0DB9   (0x0003)  MISSED
	FActiveGameplayEffectHandle                        JumpFatigue_GEHandle;                                       // 0x0DBC   (0x0008)  
	unsigned char                                      UnknownData16_5[0x4];                                       // 0x0DC4   (0x0004)  MISSED
	FTimerHandle                                       JumpFatigue_RemovalTimerHandle;                             // 0x0DC8   (0x0008)  
	FScalableFloat                                     JumpFatigue_GeDurationPostLanding;                          // 0x0DD0   (0x0028)  
	class UClass*                                      GE_NotPetable_IsBeingRidden;                                // 0x0DF8   (0x0008)  


	/// Functions
	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.GetRidingInfoFromTarget
	// void GetRidingInfoFromTarget(double& JumpAttachGroundHeightMin, double& JumpAttachGroundHeightBuffer, bool& UsesAltRidingMessage); // [0x18a39e4] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.JumpFatigue_LandTimeStamp
	// void JumpFatigue_LandTimeStamp();                                                                                     // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.JumpFatigue_CheckApplyFatigue
	// void JumpFatigue_CheckApplyFatigue();                                                                                 // [0x18a39e4] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.JumpFatigue_CountJumps
	// void JumpFatigue_CountJumps();                                                                                        // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.JumpFatigue_RemoveFatigue
	// void JumpFatigue_RemoveFatigue();                                                                                     // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.JumpFatigue_Landed
	// void JumpFatigue_Landed();                                                                                            // [0x18a39e4] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.Should Convert Jump Exit to Jump
	// void Should Convert Jump Exit to Jump(bool& Out);                                                                     // [0x18a39e4] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.ShouldBufferJumpExitToRetryJump
	// void ShouldBufferJumpExitToRetryJump(bool& Output);                                                                   // [0x18a39e4] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.SetInfiniteStaminaBuff
	// void SetInfiniteStaminaBuff(bool Enabled);                                                                            // [0x18a39e4] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.CanBePet
	// bool CanBePet(class URiderComponent* Rider);                                                                          // [0x18a39e4] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.CanJumpExit
	// void CanJumpExit(bool& CanJumpExit);                                                                                  // [0x18a39e4] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.UpdateLootAnimalGlow
	// void UpdateLootAnimalGlow(double Scale);                                                                              // [0x18a39e4] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.OnRep_currentEnergyValue
	// void OnRep_currentEnergyValue();                                                                                      // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.Propagate Immunity Fall Damage
	// void Propagate Immunity Fall Damage();                                                                                // [0x18a39e4] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.CanRiderPlayEmote
	// bool CanRiderPlayEmote(class URiderComponent* Rider);                                                                 // [0x18a39e4] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.HandleEnemyFoleySoundLibrary
	// void HandleEnemyFoleySoundLibrary(class UActorComponent* Rider, bool bIsRiding);                                      // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.OnMovementModeChanged
	// void OnMovementModeChanged(class ACharacter* Character, TEnumAsByte<EMovementMode> PrevMovementMode, char PreviousCustomMode); // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.IsSwimming
	// void IsSwimming(bool& IsSwimming);                                                                                    // [0x18a39e4] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.StopSprinting
	// void StopSprinting();                                                                                                 // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.RemoveGEByTag
	// void RemoveGEByTag(FGameplayTagContainer Tags);                                                                       // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.ApplyGEToSelf
	// void ApplyGEToSelf(class UClass* GameplayEffectClass, bool& IsValidClass);                                            // [0x18a39e4] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.KickRiderOffSelf
	// void KickRiderOffSelf();                                                                                              // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.DetermineRateOfChange
	// void DetermineRateOfChange(double& RateOfChange);                                                                     // [0x18a39e4] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.CommitEnergyCosts
	// void CommitEnergyCosts(bool RequireAllEnergy, double EnergyCost, bool& Success);                                      // [0x18a39e4] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.TestThreshold
	// void TestThreshold(bool isDecaying, double CurrentValue, double testTreshold, bool PreviousState, bool& crossedThreshold); // [0x18a39e4] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.SetWildlifeHealth
	// void SetWildlifeHealth();                                                                                             // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.UpdateValue
	// void UpdateValue(double TargetValue, double RateOfChange, double DeltaTime, double& updatedValue, bool& EnergyDepleted); // [0x18a39e4] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.ToggleRiding
	// void ToggleRiding(class AActor* PlayerPawn, class AActor* Target, bool ShouldRide, bool& bChangedRiding);             // [0x18a39e4] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.ForceTaming
	// void ForceTaming(class AActor* PlayerPawn, class AActor* CreaturePawn, bool& IsTamingEnabled);                        // [0x18a39e4] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.RestoreCollisionResponses
	// void RestoreCollisionResponses();                                                                                     // [0x18a39e4] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.ApplyCollisionResponse
	// void ApplyCollisionResponse(TArray<TEnumAsByte<ECollisionChannel>>& Channels, TEnumAsByte<ECollisionResponse> Response); // [0x18a39e4] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.ShouldCameraFocusOnRidable
	// bool ShouldCameraFocusOnRidable(class URiderComponent* Rider);                                                        // [0x18a39e4] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.UpdateAnimInputBool
	// void UpdateAnimInputBool(class AFortPawn* FortPawn, bool IsBeingRidden);                                              // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.GetRiderCapsuleSize
	// void GetRiderCapsuleSize(class URiderComponent* Rider, double& RiderCapsuleRadius, double& RiderCapsuleHH);           // [0x18a39e4] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.GetRidingEmoteCapsuleSize
	// void GetRidingEmoteCapsuleSize(class URiderComponent* Rider, float OriginalRadius, float OriginalHalfHeight, float& OutRadius, float& OutHalfHeight); // [0x18a39e4] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.GetRidingCapsuleSize
	// void GetRidingCapsuleSize(class URiderComponent* Rider, float OriginalRadius, float OriginalHalfHeight, float& OutRadius, float& OutHalfHeight); // [0x18a39e4] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.OnRep_IdleAnim_Add
	// void OnRep_IdleAnim_Add();                                                                                            // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.ShouldSetAsViewTarget
	// bool ShouldSetAsViewTarget(class URiderComponent* Rider);                                                             // [0x18a39e4] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.GetRiderLocation
	// void GetRiderLocation(FVector& Location);                                                                             // [0x18a39e4] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.Removed_AD51144144164FD235EE5BA4F6E87456
	// void Removed_AD51144144164FD235EE5BA4F6E87456();                                                                      // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.Added_FBD936634BCC61A726DA279226E2F4BE
	// void Added_FBD936634BCC61A726DA279226E2F4BE();                                                                        // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.Removed_C4C6E29B4217C014B9DE0E80B7134D6E
	// void Removed_C4C6E29B4217C014B9DE0E80B7134D6E();                                                                      // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.ToggleRidingAlternative
	// void ToggleRidingAlternative();                                                                                       // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                              // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.HandleRiderStartedRiding
	// void HandleRiderStartedRiding(class URiderComponent* Rider);                                                          // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.HandleRiderStoppedRiding
	// void HandleRiderStoppedRiding(class URiderComponent* Rider);                                                          // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.UpdateDebug
	// void UpdateDebug();                                                                                                   // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.HandleAbilityHeld
	// void HandleAbilityHeld();                                                                                             // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.HandleAbilityStarted
	// void HandleAbilityStarted();                                                                                          // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.HandleAbilityStopped
	// void HandleAbilityStopped();                                                                                          // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.HandleJumpStarted
	// void HandleJumpStarted();                                                                                             // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.OnJumping
	// void OnJumping(double JumpPitchInterpSpeed);                                                                          // [0x18a39e4] Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.OnJumpingApex
	// void OnJumpingApex();                                                                                                 // [0x18a39e4] Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.NPCPawnInteractWithDispatcher_Event
	// void NPCPawnInteractWithDispatcher_Event(class AActor* AIPawn, class AFortPlayerPawn* InteractingPlayerPawn);         // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.EnergyTrackingStart
	// void EnergyTrackingStart();                                                                                           // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.EnergyTrackingStop
	// void EnergyTrackingStop();                                                                                            // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.ReceiveEndPlay
	// void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);                                                       // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.UpdateEnergy
	// void UpdateEnergy();                                                                                                  // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.ConvertedDispatcher_Event
	// void ConvertedDispatcher_Event(bool Converted, class AFortPawn* InstigatorPawn);                                      // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.OnPawnHealthChanged_Event
	// void OnPawnHealthChanged_Event();                                                                                     // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.UseEnergyAmountServer
	// void UseEnergyAmountServer(double EnergyCost);                                                                        // [0x18a39e4] Net|NetServer|BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.HandleCancelSprint
	// void HandleCancelSprint(bool bAbilityInputHeld, bool bForceCancel);                                                   // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.CheatSetStaminaPercent
	// void CheatSetStaminaPercent(float StaminaPercent);                                                                    // [0x18a39e4] BlueprintAuthorityOnly|Event|Public|BlueprintEvent 
	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.OnEnergyUpdate
	// void OnEnergyUpdate(double Energy, bool bWarningActive);                                                              // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.OnEnergyDepletedClient
	// void OnEnergyDepletedClient();                                                                                        // [0x18a39e4] Net|NetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.OnSprintStarted
	// void OnSprintStarted();                                                                                               // [0x18a39e4] Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.OnEatToRefuel
	// void OnEatToRefuel(double EnergyCost);                                                                                // [0x18a39e4] Net|NetServer|BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.ReTryJumpExit
	// void ReTryJumpExit();                                                                                                 // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.ManualEnergyDepleted
	// void ManualEnergyDepleted();                                                                                          // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.Check Regen on Stopped Riding
	// void Check Regen on Stopped Riding();                                                                                 // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.Check Regen on Started Riding
	// void Check Regen on Started Riding();                                                                                 // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.Activate Regen
	// void Activate Regen();                                                                                                // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.Deactivate Regen
	// void Deactivate Regen();                                                                                              // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.HandleJumpStopped
	// void HandleJumpStopped();                                                                                             // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.ExecuteBufferedJumpExit
	// void ExecuteBufferedJumpExit();                                                                                       // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.CancelJumpExitAndJump
	// void CancelJumpExitAndJump();                                                                                         // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.MountLandedClient
	// void MountLandedClient(FHitResult& Hit);                                                                              // [0x18a39e4] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.TryConvertBufferedJumpExitToJump
	// void TryConvertBufferedJumpExitToJump();                                                                              // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.MountLandedServer_JumpFatigue
	// void MountLandedServer_JumpFatigue(FHitResult& Hit);                                                                  // [0x18a39e4] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.ExecuteUbergraph_CreatureBaseRidableComponent
	// void ExecuteUbergraph_CreatureBaseRidableComponent(int32_t EntryPoint);                                               // [0x18a39e4] Final|HasDefaults    
	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.RidableUIUpdateEnergy__DelegateSignature
	// void RidableUIUpdateEnergy__DelegateSignature(double Energy, bool bIsResting);                                        // [0x18a39e4] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.RidableUIStart__DelegateSignature
	// void RidableUIStart__DelegateSignature(FText Name, FSlateBrush Icon);                                                 // [0x18a39e4] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.AudioOnJumpApex__DelegateSignature
	// void AudioOnJumpApex__DelegateSignature();                                                                            // [0x18a39e4] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.AudioOnJump__DelegateSignature
	// void AudioOnJump__DelegateSignature(double JumpPitchInterpSpeed);                                                     // [0x18a39e4] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

/// Class /RidingContent/Components/PlayerRiderComponent.PlayerRiderComponent_C
/// Size: 0x0130 (0x0006F0 - 0x000820)
class UPlayerRiderComponent_C : public UControllingRiderComponent
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x06F0   (0x0008)  
	FGameplayTagContainer                              T_PlayerIsRiding;                                           // 0x06F8   (0x0020)  
	class UClass*                                      GE_PlayerIsRiding;                                          // 0x0718   (0x0008)  
	class AFortPlayerPawn*                             FortPlayerRef;                                              // 0x0720   (0x0008)  
	double                                             JumpOnMountDistanceCheck;                                   // 0x0728   (0x0008)  
	SDK_UNDEFINED(16,12467) /* FMulticastInlineDelegate */ __um(RiderUINewStats);                                  // 0x0730   (0x0010)  
	SDK_UNDEFINED(16,12468) /* FMulticastInlineDelegate */ __um(RiderUIEnd);                                       // 0x0740   (0x0010)  
	double                                             targetEnergy;                                               // 0x0750   (0x0008)  
	double                                             targetHealth;                                               // 0x0758   (0x0008)  
	FGameplayTagContainer                              T_CannotRideBucket;                                         // 0x0760   (0x0020)  
	SDK_UNDEFINED(16,12469) /* FMulticastInlineDelegate */ __um(RiderUIUpdateEnergy);                              // 0x0780   (0x0010)  
	SDK_UNDEFINED(16,12470) /* FMulticastInlineDelegate */ __um(RiderUIUpdateHealth);                              // 0x0790   (0x0010)  
	class AActor*                                      CachedRidableActor;                                         // 0x07A0   (0x0008)  
	FGameplayTagContainer                              Cannot_Ride_Rider_Bucket;                                   // 0x07A8   (0x0020)  
	FGameplayTag                                       JumpOnCreature_Cue_Tag;                                     // 0x07C8   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x07CC   (0x0004)  MISSED
	class UClass*                                      GE_PlayerPetting;                                           // 0x07D0   (0x0008)  
	FGameplayTagContainer                              Tag_Quests_Wildlife_Pet;                                    // 0x07D8   (0x0020)  
	class UAbilityAsync_WaitGameplayTagAdded*          ActiveRidableBlockRidingGameplayTagAsyncAction;             // 0x07F8   (0x0008)  
	FGameplayTagContainer                              AllowRidingMovementModeChangeTags;                          // 0x0800   (0x0020)  


	/// Functions
	// Function /RidingContent/Components/PlayerRiderComponent.PlayerRiderComponent_C.GetRidingInfoFromTarget
	// void GetRidingInfoFromTarget(double& JumpAttachGroundHeightMin, double& JumpAttachGroundHeightBuffer, bool& UsesAltRidingMessage); // [0x18a39e4] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Components/PlayerRiderComponent.PlayerRiderComponent_C.OnRep_targetHealth
	// void OnRep_targetHealth();                                                                                            // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Components/PlayerRiderComponent.PlayerRiderComponent_C.OnRep_targetEnergy
	// void OnRep_targetEnergy();                                                                                            // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Components/PlayerRiderComponent.PlayerRiderComponent_C.GetJumpInfo
	// void GetJumpInfo(class AActor* TargetActor, class UActorComponent*& TargetActorComponent, double& JumpAttach_GroundHeightMin, double& JumpAttach_GroundHeightBuffer, bool& UseAltRidingMessage); // [0x18a39e4] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Components/PlayerRiderComponent.PlayerRiderComponent_C.TestIfValidForRidingAttempt
	// void TestIfValidForRidingAttempt(class UObject* Object, bool& Success, class UObject*& TargetObject, bool& UseAltRidingMessage); // [0x18a39e4] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Components/PlayerRiderComponent.PlayerRiderComponent_C.ToggleRiding
	// void ToggleRiding(class AActor* PlayerPawn, class AActor* Target, bool ShouldRide, bool& bChangedRiding);             // [0x18a39e4] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Components/PlayerRiderComponent.PlayerRiderComponent_C.EventReceived_E5B5FB5340DB5660002329825657B406
	// void EventReceived_E5B5FB5340DB5660002329825657B406(FGameplayEventData Payload);                                      // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Components/PlayerRiderComponent.PlayerRiderComponent_C.Added_42EF586645CCFF06FFA4D9A5D59B1298
	// void Added_42EF586645CCFF06FFA4D9A5D59B1298();                                                                        // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Components/PlayerRiderComponent.PlayerRiderComponent_C.Added_A83C775344FE0F6BDAAC4B971F57425E
	// void Added_A83C775344FE0F6BDAAC4B971F57425E();                                                                        // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Components/PlayerRiderComponent.PlayerRiderComponent_C.EventReceived_3DA19BC649FB853BA2CC0FADFF8D08F6
	// void EventReceived_3DA19BC649FB853BA2CC0FADFF8D08F6(FGameplayEventData Payload);                                      // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Components/PlayerRiderComponent.PlayerRiderComponent_C.Added_D3DFE4374EED456A4C597E95375A2028
	// void Added_D3DFE4374EED456A4C597E95375A2028();                                                                        // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Components/PlayerRiderComponent.PlayerRiderComponent_C.ToggleRidingAlternative
	// void ToggleRidingAlternative();                                                                                       // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Components/PlayerRiderComponent.PlayerRiderComponent_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                              // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /RidingContent/Components/PlayerRiderComponent.PlayerRiderComponent_C.HandleStartedRiding
	// void HandleStartedRiding(class URidableComponent* Ridable);                                                           // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /RidingContent/Components/PlayerRiderComponent.PlayerRiderComponent_C.HandleStoppedRiding
	// void HandleStoppedRiding(class URidableComponent* Ridable);                                                           // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /RidingContent/Components/PlayerRiderComponent.PlayerRiderComponent_C.ToggleRidingOnServer
	// void ToggleRidingOnServer(class UObject* TargetObject, bool UseAltRidingMessage);                                     // [0x18a39e4] Net|NetServer|BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Components/PlayerRiderComponent.PlayerRiderComponent_C.SetTargetHealth
	// void SetTargetHealth(double targetHealth);                                                                            // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Components/PlayerRiderComponent.PlayerRiderComponent_C.RiderUIStartClient
	// void RiderUIStartClient(FText Name, FSlateBrush Icon, class AActor* Ridable);                                         // [0x18a39e4] Net|NetClient|BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Components/PlayerRiderComponent.PlayerRiderComponent_C.RiderUIEndClient
	// void RiderUIEndClient(class AActor* Ridable);                                                                         // [0x18a39e4] Net|NetClient|BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Components/PlayerRiderComponent.PlayerRiderComponent_C.MovementModeChanged
	// void MovementModeChanged(class ACharacter* Character, TEnumAsByte<EMovementMode> PrevMovementMode, char PreviousCustomMode); // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Components/PlayerRiderComponent.PlayerRiderComponent_C.MountLanded
	// void MountLanded(FHitResult& Hit);                                                                                    // [0x18a39e4] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Components/PlayerRiderComponent.PlayerRiderComponent_C.HandleRequestPettingStart
	// void HandleRequestPettingStart();                                                                                     // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /RidingContent/Components/PlayerRiderComponent.PlayerRiderComponent_C.HandleRequestPettingStop
	// void HandleRequestPettingStop();                                                                                      // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /RidingContent/Components/PlayerRiderComponent.PlayerRiderComponent_C.HandleRidableFound
	// void HandleRidableFound(FHitResult& HitResult);                                                                       // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /RidingContent/Components/PlayerRiderComponent.PlayerRiderComponent_C.ExecuteUbergraph_PlayerRiderComponent
	// void ExecuteUbergraph_PlayerRiderComponent(int32_t EntryPoint);                                                       // [0x18a39e4] Final|HasDefaults    
	// Function /RidingContent/Components/PlayerRiderComponent.PlayerRiderComponent_C.RiderUIUpdateHealth__DelegateSignature
	// void RiderUIUpdateHealth__DelegateSignature(double Health);                                                           // [0x18a39e4] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Components/PlayerRiderComponent.PlayerRiderComponent_C.RiderUIUpdateEnergy__DelegateSignature
	// void RiderUIUpdateEnergy__DelegateSignature(double Energy);                                                           // [0x18a39e4] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Components/PlayerRiderComponent.PlayerRiderComponent_C.RiderUIEnd__DelegateSignature
	// void RiderUIEnd__DelegateSignature(class AActor* RidableActor);                                                       // [0x18a39e4] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Components/PlayerRiderComponent.PlayerRiderComponent_C.RiderUINewStats__DelegateSignature
	// void RiderUINewStats__DelegateSignature(FText Name, FSlateBrush Icon, class AActor* RidableActor);                    // [0x18a39e4] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

/// Class /RidingContent/Components/WolfRidableComponent.WolfRidableComponent_C
/// Size: 0x0000 (0x000E00 - 0x000E00)
class UWolfRidableComponent_C : public UCreatureBaseRidableComponent_C
{ 
public:
};

/// Class /RidingContent/Components/BoarRidableComponent.BoarRidableComponent_C
/// Size: 0x0044 (0x000E00 - 0x000E44)
class UBoarRidableComponent_C : public UCreatureBaseRidableComponent_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0E00   (0x0008)  
	class USoundBase*                                  BurtChargeStartSound;                                       // 0x0E08   (0x0008)  
	class UAudioComponent*                             ChargeSoundComp;                                            // 0x0E10   (0x0008)  
	double                                             SprintCooldDownTime;                                        // 0x0E18   (0x0008)  
	class UClass*                                      GESprintImpactPawn;                                         // 0x0E20   (0x0008)  
	FGameplayTag                                       SprintImpactGameplayCueTag;                                 // 0x0E28   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0E2C   (0x0004)  MISSED
	class UClass*                                      GESprintImpactVehicle;                                      // 0x0E30   (0x0008)  
	FGameplayTag                                       SprintChargeImpact_Default_CueTag;                          // 0x0E38   (0x0004)  
	FGameplayTag                                       SprintChargeImpact_Pawn_CueTag;                             // 0x0E3C   (0x0004)  
	FGameplayTag                                       SprintChargeImpact_DestroyBuild_CueTag;                     // 0x0E40   (0x0004)  


	/// Functions
	// Function /RidingContent/Components/BoarRidableComponent.BoarRidableComponent_C.OnReaction
	// void OnReaction(class UObject* Object, FHitResult HitResult);                                                         // [0x18a39e4] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Components/BoarRidableComponent.BoarRidableComponent_C.HandleRiderStoppedRiding
	// void HandleRiderStoppedRiding(class URiderComponent* Rider);                                                          // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /RidingContent/Components/BoarRidableComponent.BoarRidableComponent_C.HandleRiderStartedRiding
	// void HandleRiderStartedRiding(class URiderComponent* Rider);                                                          // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /RidingContent/Components/BoarRidableComponent.BoarRidableComponent_C.HandleAbilityStarted
	// void HandleAbilityStarted();                                                                                          // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /RidingContent/Components/BoarRidableComponent.BoarRidableComponent_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                              // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /RidingContent/Components/BoarRidableComponent.BoarRidableComponent_C.OnReactionEvent
	// void OnReactionEvent(class AActor* HitActor, bool bFromAsyncSweepBox, FCollisionReactionType CollisionReactionType, bool bIsFirstContinuousReactionOnDelayableActor, FHitResult& HitResult); // [0x18a39e4] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Components/BoarRidableComponent.BoarRidableComponent_C.ReceiveEndPlay
	// void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);                                                       // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /RidingContent/Components/BoarRidableComponent.BoarRidableComponent_C.ExecuteUbergraph_BoarRidableComponent
	// void ExecuteUbergraph_BoarRidableComponent(int32_t EntryPoint);                                                       // [0x18a39e4] Final|HasDefaults    
};

/// Class /EventMode/Components/EventMode_Activator_Component.EventMode_Activator_Component_C
/// Size: 0x0000 (0x000210 - 0x000210)
class UEventMode_Activator_Component_C : public UFortGameFrameworkComponent_EventMode
{ 
public:
};

/// Class /VehicleCosmetics/Components/BP_VehicleCosmeticsAMUC.BP_VehicleCosmeticsAMUC_C
/// Size: 0x0014 (0x000688 - 0x00069C)
class UBP_VehicleCosmeticsAMUC_C : public UVehicleCosmeticsAssembledMeshUserComponent
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0688   (0x0008)  
	class AFortAthenaVehicle*                          VehiclePawn;                                                // 0x0690   (0x0008)  
	FGameplayTag                                       GC_LoopingApplication;                                      // 0x0698   (0x0004)  


	/// Functions
	// Function /VehicleCosmetics/Components/BP_VehicleCosmeticsAMUC.BP_VehicleCosmeticsAMUC_C.ApplyInitialGC
	// void ApplyInitialGC();                                                                                                // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /VehicleCosmetics/Components/BP_VehicleCosmeticsAMUC.BP_VehicleCosmeticsAMUC_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                              // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /VehicleCosmetics/Components/BP_VehicleCosmeticsAMUC.BP_VehicleCosmeticsAMUC_C.RemoveInitialGC
	// void RemoveInitialGC();                                                                                               // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /VehicleCosmetics/Components/BP_VehicleCosmeticsAMUC.BP_VehicleCosmeticsAMUC_C.ExecuteUbergraph_BP_VehicleCosmeticsAMUC
	// void ExecuteUbergraph_BP_VehicleCosmeticsAMUC(int32_t EntryPoint);                                                    // [0x18a39e4] Final|HasDefaults    
};

/// Class /NPCLibrary/Components/BP_PlayerStateCustomFeedMessages.BP_PlayerStateCustomFeedMessages_C
/// Size: 0x0000 (0x000108 - 0x000108)
class UBP_PlayerStateCustomFeedMessages_C : public UFortPlayerStateComponent_CustomFeedMessage
{ 
public:
};

