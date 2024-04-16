
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CommonUI
/// dependency: CoreUObject
/// dependency: FortniteUI
/// dependency: UMG

/// Class /Script/POIBannerUI.POIBannerToastSocialAvatar
/// Size: 0x0008 (0x000330 - 0x000338)
class UPOIBannerToastSocialAvatar : public UFortHUDElementWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 824;

public:
	CMember(class UFortSocialAvatarIcon*)              Icon_SocialAvatar                                           OFFSET(get<T>, {0x330, 8, 0, 0})


	/// Functions
	// Function /Script/POIBannerUI.POIBannerToastSocialAvatar.SetSocialAvatarTexture
	// void SetSocialAvatarTexture(TWeakObjectPtr<UTexture2D*> AvatarTexture);                                                  // [0xb1ac45c] Final|Native|Protected|BlueprintCallable 
	// Function /Script/POIBannerUI.POIBannerToastSocialAvatar.SetSocialAvatar
	// void SetSocialAvatar(class AFortPlayerState* PlayerState);                                                               // [0xb1ac394] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/POIBannerUI.POIBannerToastWidgetBase
/// Size: 0x0048 (0x000330 - 0x000378)
class UPOIBannerToastWidgetBase : public UFortHUDElementWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 888;

public:
	SMember(FFortPrioritizedWidgetData)                PrioritizationData                                          OFFSET(getStruct<T>, {0x370, 2, 0, 0})


	/// Functions
	// Function /Script/POIBannerUI.POIBannerToastWidgetBase.OnStompFailed
	// void OnStompFailed();                                                                                                    // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /Script/POIBannerUI.POIBannerToastWidgetBase.OnStompedByOtherWidget
	// void OnStompedByOtherWidget();                                                                                           // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /Script/POIBannerUI.POIBannerToastWidgetBase.K2_OnBecomeInactive
	// void K2_OnBecomeInactive();                                                                                              // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /Script/POIBannerUI.POIBannerToastWidgetBase.K2_OnBecomeActive
	// void K2_OnBecomeActive();                                                                                                // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /Script/POIBannerUI.POIBannerToastWidgetBase.GetLocationTextFromTag
	// FText GetLocationTextFromTag(FGameplayTag& LocationTag);                                                                 // [0xb1ac25c] Final|Native|Protected|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

