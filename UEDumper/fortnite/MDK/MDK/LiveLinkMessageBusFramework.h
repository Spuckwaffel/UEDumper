
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: LiveLinkInterface

/// Struct /Script/LiveLinkMessageBusFramework.LiveLinkPingMessage
/// Size: 0x0014 (0x000000 - 0x000014)
class FLiveLinkPingMessage : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	SMember(FGuid)                                     PollRequest                                                 OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	DMember(int32_t)                                   LiveLinkVersion                                             OFFSET(get<int32_t>, {0x10, 4, 0, 0})
};

/// Struct /Script/LiveLinkMessageBusFramework.LiveLinkPongMessage
/// Size: 0x0040 (0x000000 - 0x000040)
class FLiveLinkPongMessage : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FString)                                   ProviderName                                                OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   MachineName                                                 OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FGuid)                                     PollRequest                                                 OFFSET(getStruct<T>, {0x20, 16, 0, 0})
	DMember(int32_t)                                   LiveLinkVersion                                             OFFSET(get<int32_t>, {0x30, 4, 0, 0})
	DMember(double)                                    CreationPlatformTime                                        OFFSET(get<double>, {0x38, 8, 0, 0})
};

/// Struct /Script/LiveLinkMessageBusFramework.LiveLinkConnectMessage
/// Size: 0x0004 (0x000000 - 0x000004)
class FLiveLinkConnectMessage : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(int32_t)                                   LiveLinkVersion                                             OFFSET(get<int32_t>, {0x0, 4, 0, 0})
};

/// Struct /Script/LiveLinkMessageBusFramework.LiveLinkHeartbeatMessage
/// Size: 0x0001 (0x000000 - 0x000001)
class FLiveLinkHeartbeatMessage : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/LiveLinkMessageBusFramework.LiveLinkClearSubject
/// Size: 0x0004 (0x000000 - 0x000004)
class FLiveLinkClearSubject : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	SMember(FName)                                     SubjectName                                                 OFFSET(getStruct<T>, {0x0, 4, 0, 0})
};

/// Struct /Script/LiveLinkMessageBusFramework.LiveLinkSubjectDataMessage
/// Size: 0x0028 (0x000000 - 0x000028)
class FLiveLinkSubjectDataMessage : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FLiveLinkRefSkeleton)                      RefSkeleton                                                 OFFSET(getStruct<T>, {0x0, 32, 0, 0})
	SMember(FName)                                     SubjectName                                                 OFFSET(getStruct<T>, {0x20, 4, 0, 0})
};

/// Struct /Script/LiveLinkMessageBusFramework.LiveLinkSubjectFrameMessage
/// Size: 0x0090 (0x000000 - 0x000090)
class FLiveLinkSubjectFrameMessage : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FName)                                     SubjectName                                                 OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(TArray<FTransform>)                        Transforms                                                  OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(TArray<FLiveLinkCurveElement>)             Curves                                                      OFFSET(get<T>, {0x18, 16, 0, 0})
	SMember(FLiveLinkMetaData)                         MetaData                                                    OFFSET(getStruct<T>, {0x28, 96, 0, 0})
	DMember(double)                                    Time                                                        OFFSET(get<double>, {0x88, 8, 0, 0})
};

