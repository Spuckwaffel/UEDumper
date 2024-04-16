
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject

/// Class /Script/SidecarSys.SidecarDss
/// Size: 0x00B0 (0x000028 - 0x0000D8)
class USidecarDss : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
	CMember(TMap<FString, FSidecarFileInfo>)           FileInfoMap                                                 OFFSET(get<T>, {0x28, 80, 0, 0})
	SMember(FString)                                   DssDownloadUrl                                              OFFSET(getStruct<T>, {0x78, 16, 0, 0})
	SMember(FString)                                   DssCheckoutUrl                                              OFFSET(getStruct<T>, {0x88, 16, 0, 0})
	SMember(FString)                                   DssUploadUrl                                                OFFSET(getStruct<T>, {0x98, 16, 0, 0})
	SMember(FString)                                   DssRestoreUrl                                               OFFSET(getStruct<T>, {0xA8, 16, 0, 0})
	SMember(FString)                                   DssCheckinUrl                                               OFFSET(getStruct<T>, {0xB8, 16, 0, 0})
	SMember(FString)                                   DssListFilesUrl                                             OFFSET(getStruct<T>, {0xC8, 16, 0, 0})
};

/// Class /Script/SidecarSys.SidecarInventorySys
/// Size: 0x00B8 (0x000028 - 0x0000E0)
class USidecarInventorySys : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	SMember(FString)                                   InventoryDownloadUrl                                        OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	SMember(FString)                                   InventoryLockUrl                                            OFFSET(getStruct<T>, {0x40, 16, 0, 0})
	SMember(FString)                                   ItemUpdateUrl                                               OFFSET(getStruct<T>, {0x50, 16, 0, 0})
};

/// Class /Script/SidecarSys.SidecarSys
/// Size: 0x0030 (0x000028 - 0x000058)
class USidecarSys : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(class USidecarDss*)                        SidecarDss                                                  OFFSET(get<T>, {0x38, 8, 0, 0})
	CMember(class USidecarInventorySys*)               SidecarInventory                                            OFFSET(get<T>, {0x40, 8, 0, 0})
};

/// Struct /Script/SidecarSys.SidecarFileInfo
/// Size: 0x0068 (0x000000 - 0x000068)
class FSidecarFileInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	CMember(TMap<FString, FString>)                    Meta                                                        OFFSET(get<T>, {0x0, 80, 0, 0})
	DMember(bool)                                      bIsCheckedOut                                               OFFSET(get<bool>, {0x50, 1, 0, 0})
	DMember(bool)                                      bOperationPending                                           OFFSET(get<bool>, {0x51, 1, 0, 0})
	SMember(FString)                                   CheckoutGuid                                                OFFSET(getStruct<T>, {0x58, 16, 0, 0})
};

