
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject

/// Class /Script/SidecarSys.SidecarDss
/// Size: 0x00B0 (0x000028 - 0x0000D8)
class USidecarDss : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	SDK_UNDEFINED(80,2693) /* TMap<FString, FSidecarFileInfo> */ __um(FileInfoMap);                                // 0x0028   (0x0050)  
	SDK_UNDEFINED(16,2694) /* FString */               __um(DssDownloadUrl);                                       // 0x0078   (0x0010)  
	SDK_UNDEFINED(16,2695) /* FString */               __um(DssCheckoutUrl);                                       // 0x0088   (0x0010)  
	SDK_UNDEFINED(16,2696) /* FString */               __um(DssUploadUrl);                                         // 0x0098   (0x0010)  
	SDK_UNDEFINED(16,2697) /* FString */               __um(DssRestoreUrl);                                        // 0x00A8   (0x0010)  
	SDK_UNDEFINED(16,2698) /* FString */               __um(DssCheckinUrl);                                        // 0x00B8   (0x0010)  
	SDK_UNDEFINED(16,2699) /* FString */               __um(DssListFilesUrl);                                      // 0x00C8   (0x0010)  
};

/// Class /Script/SidecarSys.SidecarInventorySys
/// Size: 0x00B8 (0x000028 - 0x0000E0)
class USidecarInventorySys : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x30];                                      // 0x0000   (0x0030)  MISSED
	SDK_UNDEFINED(16,2700) /* FString */               __um(InventoryDownloadUrl);                                 // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,2701) /* FString */               __um(InventoryLockUrl);                                     // 0x0040   (0x0010)  
	SDK_UNDEFINED(16,2702) /* FString */               __um(ItemUpdateUrl);                                        // 0x0050   (0x0010)  
	unsigned char                                      UnknownData01_6[0x80];                                      // 0x0060   (0x0080)  MISSED
};

/// Class /Script/SidecarSys.SidecarSys
/// Size: 0x0030 (0x000028 - 0x000058)
class USidecarSys : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x38];                                      // 0x0000   (0x0038)  MISSED
	class USidecarDss*                                 SidecarDss;                                                 // 0x0038   (0x0008)  
	class USidecarInventorySys*                        SidecarInventory;                                           // 0x0040   (0x0008)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x0048   (0x0010)  MISSED
};

/// Struct /Script/SidecarSys.SidecarFileInfo
/// Size: 0x0068 (0x000000 - 0x000068)
struct FSidecarFileInfo
{ 
	SDK_UNDEFINED(80,2703) /* TMap<FString, FString> */ __um(Meta);                                                // 0x0000   (0x0050)  
	bool                                               bIsCheckedOut;                                              // 0x0050   (0x0001)  
	bool                                               bOperationPending;                                          // 0x0051   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x0052   (0x0006)  MISSED
	SDK_UNDEFINED(16,2704) /* FString */               __um(CheckoutGuid);                                         // 0x0058   (0x0010)  
};

