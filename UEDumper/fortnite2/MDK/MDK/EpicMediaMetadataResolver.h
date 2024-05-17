
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: EpicMediaCDNHostnames
/// dependency: EpicMediaOptions

/// Class /Script/EpicMediaMetadataResolver.EpicMediaMetadataResolver
/// Size: 0x01A0 (0x0000A0 - 0x000240)
class UEpicMediaMetadataResolver : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 576;

public:
	SMember(FMulticastInlineDelegate)                  OnSuccess                                                   OFFSET(getStruct<T>, {0xA0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnFailure                                                   OFFSET(getStruct<T>, {0xB0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  MetadataResultExt                                           OFFSET(getStruct<T>, {0xC0, 16, 0, 0})
	CMember(class UEpicMediaCDNHostnames*)             CDNHostNames                                                OFFSET(get<T>, {0xD0, 8, 0, 0})


	/// Functions
	// Function /Script/EpicMediaMetadataResolver.EpicMediaMetadataResolver.GetData
	// bool GetData(FString UID, bool bLive, FEpicMediaOptions InMediaOptions);                                                 // [0x86323a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/EpicMediaMetadataResolver.EpicMediaMetadataResolver.GetBlurl
	// bool GetBlurl(FString InVUID, bool bInBlurlLive, FEpicMediaOptions InMediaOptions);                                      // [0x86318c8] Final|Native|Public|BlueprintCallable 
};

