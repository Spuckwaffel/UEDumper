
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CommonUI
/// dependency: CoreUObject
/// dependency: FortniteGame
/// dependency: FortniteUI
/// dependency: GameplayTags
/// dependency: UMG

/// Class /Script/KeysAndLocksUI.KeyPlayerInfoWidget
/// Size: 0x0028 (0x000330 - 0x000358)
class UKeyPlayerInfoWidget : public UFortHUDElementWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 856;

public:
	SMember(FGameplayTag)                              KeyStatusTag                                                OFFSET(getStruct<T>, {0x338, 4, 0, 0})


	/// Functions
	// Function /Script/KeysAndLocksUI.KeyPlayerInfoWidget.OnKeyStatusActivated
	// void OnKeyStatusActivated(class AFortPlayerStateAthena* InPlayerState, bool bActivated);                                 // [0x20c3f9c] Event|Protected|BlueprintEvent 
	// Function /Script/KeysAndLocksUI.KeyPlayerInfoWidget.HandleGameplayTagEvent
	// void HandleGameplayTagEvent(FGameplayTag UpdatedTag, int32_t TagCount);                                                  // [0xb5242ac] Final|Native|Protected 
};

