
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine

/// Class /Script/SlateRHIRenderer.SlateFXSubsystem
/// Size: 0x00A0 (0x000030 - 0x0000D0)
class USlateFXSubsystem : public UEngineSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	CMember(TMap<ESlatePostRT, USlateRHIPostBufferProcessor*>) SlatePostBufferProcessors                           OFFSET(get<T>, {0x30, 80, 0, 0})


	/// Functions
	// Function /Script/SlateRHIRenderer.SlateFXSubsystem.GetSlatePostProcessor
	// class USlateRHIPostBufferProcessor* GetSlatePostProcessor(ESlatePostRT InPostBufferBit);                                 // [0x632fadc] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/SlateRHIRenderer.SlateRHIPostBufferProcessor
/// Size: 0x0000 (0x000028 - 0x000028)
class USlateRHIPostBufferProcessor : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/SlateRHIRenderer.SlatePostBufferBlur
/// Size: 0x0018 (0x000028 - 0x000040)
class USlatePostBufferBlur : public USlateRHIPostBufferProcessor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(float)                                     GaussianBlurStrength                                        OFFSET(get<float>, {0x28, 4, 0, 0})
};

/// Class /Script/SlateRHIRenderer.SlateRHIRendererSettings
/// Size: 0x0050 (0x000030 - 0x000080)
class USlateRHIRendererSettings : public UDeveloperSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	CMember(TMap<ESlatePostRT, FSlatePostSettings>)    SlatePostSettings                                           OFFSET(get<T>, {0x30, 80, 0, 0})


	/// Functions
	// Function /Script/SlateRHIRenderer.SlateRHIRendererSettings.GetSlatePostSetting
	// FSlatePostSettings GetSlatePostSetting(ESlatePostRT InPostBufferBit);                                                    // [0x632fbac] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SlateRHIRenderer.SlateRHIRendererSettings.GetMutableSlatePostSetting
	// FSlatePostSettings GetMutableSlatePostSetting(ESlatePostRT InPostBufferBit);                                             // [0x632f9c0] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/SlateRHIRenderer.SlatePostSettings
/// Size: 0x0030 (0x000000 - 0x000030)
class FSlatePostSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x0, 1, 1, 0})
	CMember(class UClass*)                             PostProcessorClass                                          OFFSET(get<T>, {0x8, 8, 0, 0})
	SMember(FString)                                   PathToSlatePostRT                                           OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	CMember(class UTextureRenderTarget2D*)             CachedSlatePostRT                                           OFFSET(get<T>, {0x20, 8, 0, 0})
};

