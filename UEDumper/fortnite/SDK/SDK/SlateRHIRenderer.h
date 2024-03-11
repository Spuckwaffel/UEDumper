
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine

/// Class /Script/SlateRHIRenderer.SlateFXSubsystem
/// Size: 0x00A0 (0x000030 - 0x0000D0)
class USlateFXSubsystem : public UEngineSubsystem
{ 
public:
	SDK_UNDEFINED(80,9450) /* TMap<ESlatePostRT, USlateRHIPostBufferProcessor*> */ __um(SlatePostBufferProcessors); // 0x0030   (0x0050)  
	unsigned char                                      UnknownData00_6[0x50];                                      // 0x0080   (0x0050)  MISSED


	/// Functions
	// Function /Script/SlateRHIRenderer.SlateFXSubsystem.GetSlatePostProcessor
	// class USlateRHIPostBufferProcessor* GetSlatePostProcessor(ESlatePostRT InPostBufferBit);                              // [0x6424e80] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/SlateRHIRenderer.SlateRHIPostBufferProcessor
/// Size: 0x0000 (0x000028 - 0x000028)
class USlateRHIPostBufferProcessor : public UObject
{ 
public:
};

/// Class /Script/SlateRHIRenderer.SlatePostBufferBlur
/// Size: 0x0018 (0x000028 - 0x000040)
class USlatePostBufferBlur : public USlateRHIPostBufferProcessor
{ 
public:
	float                                              GaussianBlurStrength;                                       // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_6[0x14];                                      // 0x002C   (0x0014)  MISSED
};

/// Class /Script/SlateRHIRenderer.SlateRHIRendererSettings
/// Size: 0x0050 (0x000030 - 0x000080)
class USlateRHIRendererSettings : public UDeveloperSettings
{ 
public:
	SDK_UNDEFINED(80,9451) /* TMap<ESlatePostRT, FSlatePostSettings> */ __um(SlatePostSettings);                   // 0x0030   (0x0050)  


	/// Functions
	// Function /Script/SlateRHIRenderer.SlateRHIRendererSettings.GetSlatePostSetting
	// FSlatePostSettings GetSlatePostSetting(ESlatePostRT InPostBufferBit);                                                 // [0x6424f10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SlateRHIRenderer.SlateRHIRendererSettings.GetMutableSlatePostSetting
	// FSlatePostSettings GetMutableSlatePostSetting(ESlatePostRT InPostBufferBit);                                          // [0x6424da4] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/SlateRHIRenderer.SlatePostSettings
/// Size: 0x0030 (0x000000 - 0x000030)
struct FSlatePostSettings
{ 
	bool                                               bEnabled : 1;                                               // 0x0000:0 (0x0001)  
	unsigned char                                      UnknownData00_4[0x7];                                       // 0x0001   (0x0007)  MISSED
	class UClass*                                      PostProcessorClass;                                         // 0x0008   (0x0008)  
	SDK_UNDEFINED(16,9452) /* FString */               __um(PathToSlatePostRT);                                    // 0x0010   (0x0010)  
	class UTextureRenderTarget2D*                      CachedSlatePostRT;                                          // 0x0020   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0028   (0x0008)  MISSED
};

