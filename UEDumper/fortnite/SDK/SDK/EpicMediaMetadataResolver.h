
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: EpicMediaCDNHostnames

/// Class /Script/EpicMediaMetadataResolver.EpicMediaMetadataResolver
/// Size: 0x01A0 (0x0000A0 - 0x000240)
class UEpicMediaMetadataResolver : public UActorComponent
{ 
public:
	SDK_UNDEFINED(16,1990) /* FMulticastInlineDelegate */ __um(OnSuccess);                                         // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,1991) /* FMulticastInlineDelegate */ __um(OnFailure);                                         // 0x00B0   (0x0010)  
	SDK_UNDEFINED(16,1992) /* FMulticastInlineDelegate */ __um(MetadataResultExt);                                 // 0x00C0   (0x0010)  
	class UEpicMediaCDNHostnames*                      CDNHostNames;                                               // 0x00D0   (0x0008)  
	unsigned char                                      UnknownData00_6[0x168];                                     // 0x00D8   (0x0168)  MISSED


	/// Functions
	// Function /Script/EpicMediaMetadataResolver.EpicMediaMetadataResolver.GetData
	// bool GetData(FString UID, bool bLive, FEpicMediaOptions InMediaOptions);                                              // [0x7d8dd08] Final|Native|Public|BlueprintCallable 
	// Function /Script/EpicMediaMetadataResolver.EpicMediaMetadataResolver.GetBlurl
	// bool GetBlurl(FString InVUID, bool bInBlurlLive, FEpicMediaOptions InMediaOptions);                                   // [0x7d8d80c] Final|Native|Public|BlueprintCallable 
};

