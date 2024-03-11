
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: ModularGameplay

/// Class /Script/VKDownloadOnDemandGameplay.DownloadOnDemandComponent
/// Size: 0x0190 (0x0000A0 - 0x000230)
class UDownloadOnDemandComponent : public UControllerComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x168];                                     // 0x00A0   (0x0168)  MISSED
	class UDownloadOnDemandPlot*                       Plot;                                                       // 0x0208   (0x0008)  
	TArray<class UDownloadOnDemandProject*>            UserOwnedProjects;                                          // 0x0210   (0x0010)  
	TArray<class UDownloadOnDemandProjectContent*>     ShelvedContents;                                            // 0x0220   (0x0010)  


	/// Functions
	// Function /Script/VKDownloadOnDemandGameplay.DownloadOnDemandComponent.HandleMnemonicsFromValkyriePaletteProviderReceived
	// void HandleMnemonicsFromValkyriePaletteProviderReceived(TArray<FString>& Mnemonics);                                  // [0xacf5ba4] Final|Native|Private|HasOutParms 
};

/// Class /Script/VKDownloadOnDemandGameplay.DownloadOnDemandPlot
/// Size: 0x0098 (0x000028 - 0x0000C0)
class UDownloadOnDemandPlot : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0xA0];                                      // 0x0000   (0x00A0)  MISSED
	TArray<class UDownloadOnDemandProject*>            ActiveProjects;                                             // 0x00A0   (0x0010)  
	TArray<class UDownloadOnDemandProject*>            PendingProjects;                                            // 0x00B0   (0x0010)  
};

/// Class /Script/VKDownloadOnDemandGameplay.DownloadOnDemandProject
/// Size: 0x0108 (0x000028 - 0x000130)
class UDownloadOnDemandProject : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0xB8];                                      // 0x0000   (0x00B8)  MISSED
	class UDownloadOnDemandProjectDescriptor*          Descriptor;                                                 // 0x00B8   (0x0008)  
	SDK_UNDEFINED(80,15744) /* TMap<FString, UDownloadOnDemandProjectContent*> */ __um(Contents);                  // 0x00C0   (0x0050)  
	unsigned char                                      UnknownData01_6[0x20];                                      // 0x0110   (0x0020)  MISSED
};

/// Class /Script/VKDownloadOnDemandGameplay.DownloadOnDemandProjectContent
/// Size: 0x0078 (0x000028 - 0x0000A0)
class UDownloadOnDemandProjectContent : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x70];                                      // 0x0000   (0x0070)  MISSED
	TArray<class UFortItemDefinition*>                 ContentItemDefinitions;                                     // 0x0070   (0x0010)  
	TArray<FSoftObjectPath>                            ContentSoftObjectPaths;                                     // 0x0080   (0x0010)  
	TArray<FSoftObjectPath>                            LoadFailedContentObjectPaths;                               // 0x0090   (0x0010)  
};

/// Class /Script/VKDownloadOnDemandGameplay.DownloadOnDemandProjectDescriptor
/// Size: 0x0058 (0x000028 - 0x000080)
class UDownloadOnDemandProjectDescriptor : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x70];                                      // 0x0000   (0x0070)  MISSED
	class UDownloadOnDemandProjectImage*               Image;                                                      // 0x0070   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0078   (0x0008)  MISSED
};

/// Class /Script/VKDownloadOnDemandGameplay.DownloadOnDemandProjectImage
/// Size: 0x0038 (0x000028 - 0x000060)
class UDownloadOnDemandProjectImage : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x58];                                      // 0x0000   (0x0058)  MISSED
	class UTexture2DDynamic*                           PreviewTexture;                                             // 0x0058   (0x0008)  
};

