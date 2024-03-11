
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject

/// Class /Script/FieldNotification.NotifyFieldValueChanged
/// Size: 0x0000 (0x000028 - 0x000028)
class UNotifyFieldValueChanged : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Struct /Script/FieldNotification.FieldNotificationId
/// Size: 0x0004 (0x000000 - 0x000004)
class FFieldNotificationId : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	SMember(FName)                                     FieldName                                                   OFFSET(getStruct<T>, {0x0, 4, 0, 0})
};

