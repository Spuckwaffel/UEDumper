
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: LiveLink
/// dependency: LiveLinkInterface

/// Enum /Script/LiveLinkHubMessaging.ELiveLinkHubTimecodeSource
/// Size: 0x04
enum class ELiveLinkHubTimecodeSource : uint32_t
{
	ELiveLinkHubTimecodeSource__NotDefined                                           = 0,
	ELiveLinkHubTimecodeSource__SystemTimeEditor                                     = 1,
	ELiveLinkHubTimecodeSource__UseSubjectName                                       = 2,
	ELiveLinkHubTimecodeSource__ELiveLinkHubTimecodeSource_MAX                       = 3
};

/// Enum /Script/LiveLinkHubMessaging.ELiveLinkClientStatus
/// Size: 0x04
enum class ELiveLinkClientStatus : uint32_t
{
	ELiveLinkClientStatus__Connected                                                 = 0,
	ELiveLinkClientStatus__Disconnected                                              = 1,
	ELiveLinkClientStatus__Recording                                                 = 2,
	ELiveLinkClientStatus__ELiveLinkClientStatus_MAX                                 = 3
};

/// Class /Script/LiveLinkHubMessaging.LiveLinkHubMessageBusSourceFactory
/// Size: 0x0000 (0x000028 - 0x000028)
class ULiveLinkHubMessageBusSourceFactory : public ULiveLinkMessageBusSourceFactory
{ 
public:
};

/// Struct /Script/LiveLinkHubMessaging.LiveLinkHubTimecodeSettings
/// Size: 0x0010 (0x000000 - 0x000010)
struct FLiveLinkHubTimecodeSettings
{ 
	ELiveLinkHubTimecodeSource                         Source;                                                     // 0x0000   (0x0004)  
	FName                                              SubjectName;                                                // 0x0004   (0x0004)  
	FFrameRate                                         DesiredFrameRate;                                           // 0x0008   (0x0008)  
};

/// Struct /Script/LiveLinkHubMessaging.LiveLinkClientInfoMessage
/// Size: 0x0050 (0x000000 - 0x000050)
struct FLiveLinkClientInfoMessage
{ 
	SDK_UNDEFINED(16,14899) /* FString */              __um(LongName);                                             // 0x0000   (0x0010)  
	ELiveLinkClientStatus                              Status;                                                     // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0014   (0x0004)  MISSED
	SDK_UNDEFINED(16,14900) /* FString */              __um(HostName);                                             // 0x0018   (0x0010)  
	SDK_UNDEFINED(16,14901) /* FString */              __um(ProjectName);                                          // 0x0028   (0x0010)  
	SDK_UNDEFINED(16,14902) /* FString */              __um(CurrentLevel);                                         // 0x0038   (0x0010)  
	int32_t                                            LiveLinkVersion;                                            // 0x0048   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x004C   (0x0004)  MISSED
};

/// Struct /Script/LiveLinkHubMessaging.LiveLinkHubConnectMessage
/// Size: 0x0050 (0x000000 - 0x000050)
struct FLiveLinkHubConnectMessage
{ 
	FLiveLinkClientInfoMessage                         ClientInfo;                                                 // 0x0000   (0x0050)  
};

