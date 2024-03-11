
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: LiveLink
/// dependency: LiveLinkInterface

/// Class /Script/LiveLinkHubMessaging.LiveLinkHubMessageBusSourceFactory
/// Size: 0x0000 (0x000028 - 0x000028)
class ULiveLinkHubMessageBusSourceFactory : public ULiveLinkMessageBusSourceFactory
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Struct /Script/LiveLinkHubMessaging.LiveLinkHubTimecodeSettings
/// Size: 0x0010 (0x000000 - 0x000010)
class FLiveLinkHubTimecodeSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(ELiveLinkHubTimecodeSource)                Source                                                      OFFSET(get<T>, {0x0, 4, 0, 0})
	SMember(FName)                                     SubjectName                                                 OFFSET(getStruct<T>, {0x4, 4, 0, 0})
	SMember(FFrameRate)                                DesiredFrameRate                                            OFFSET(getStruct<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/LiveLinkHubMessaging.LiveLinkClientInfoMessage
/// Size: 0x0050 (0x000000 - 0x000050)
class FLiveLinkClientInfoMessage : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FString)                                   LongName                                                    OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	CMember(ELiveLinkClientStatus)                     Status                                                      OFFSET(get<T>, {0x10, 4, 0, 0})
	SMember(FString)                                   HostName                                                    OFFSET(getStruct<T>, {0x18, 16, 0, 0})
	SMember(FString)                                   ProjectName                                                 OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	SMember(FString)                                   CurrentLevel                                                OFFSET(getStruct<T>, {0x38, 16, 0, 0})
	DMember(int32_t)                                   LiveLinkVersion                                             OFFSET(get<int32_t>, {0x48, 4, 0, 0})
};

/// Struct /Script/LiveLinkHubMessaging.LiveLinkHubConnectMessage
/// Size: 0x0050 (0x000000 - 0x000050)
class FLiveLinkHubConnectMessage : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FLiveLinkClientInfoMessage)                ClientInfo                                                  OFFSET(getStruct<T>, {0x0, 80, 0, 0})
};

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

