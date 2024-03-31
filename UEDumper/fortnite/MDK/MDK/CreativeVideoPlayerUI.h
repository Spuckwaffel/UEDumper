
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CommonUI
/// dependency: CommonUILegacy
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: UMG

/// Class /Script/CreativeVideoPlayerUI.CreativeVideoPlayerFullScreenWidget
/// Size: 0x0078 (0x000400 - 0x000478)
class UCreativeVideoPlayerFullScreenWidget : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1144;

public:
	CMember(class USoundSourceBus*)                    SourceBus                                                   OFFSET(get<T>, {0x418, 8, 0, 0})
	CMember(class USoundClass*)                        SoundClass                                                  OFFSET(get<T>, {0x420, 8, 0, 0})
	SMember(FDataTableRowHandle)                       HoldToSkipAction                                            OFFSET(getStruct<T>, {0x428, 16, 0, 0})
	CMember(class UCommonButtonLegacy*)                Button_Skip                                                 OFFSET(get<T>, {0x438, 8, 0, 0})
	CMember(class UImage*)                             Image_VideoTexture                                          OFFSET(get<T>, {0x440, 8, 0, 0})
	DMember(float)                                     SkipButtonTimeout                                           OFFSET(get<float>, {0x448, 4, 0, 0})
	CMember(class UAudioComponent*)                    SoundComponent                                              OFFSET(get<T>, {0x460, 8, 0, 0})


	/// Functions
	// Function /Script/CreativeVideoPlayerUI.CreativeVideoPlayerFullScreenWidget.SetExternalComponents
	// void SetExternalComponents(class UMediaTexture* VideoTextureExt, class USoundSourceBus* ExtSourceBus);                   // [0xc0438ec] Final|Native|Public|BlueprintCallable 
	// Function /Script/CreativeVideoPlayerUI.CreativeVideoPlayerFullScreenWidget.OnSkipButtonActionProgress
	// void OnSkipButtonActionProgress(float HeldPercent);                                                                      // [0xc043830] Final|Native|Private 
	// Function /Script/CreativeVideoPlayerUI.CreativeVideoPlayerFullScreenWidget.OnSkipButtonActionComplete
	// void OnSkipButtonActionComplete();                                                                                       // [0xc04381c] Final|Native|Private 
};

