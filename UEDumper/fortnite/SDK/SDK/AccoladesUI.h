
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: AccoladesRuntime
/// dependency: CommonUI
/// dependency: CoreUObject
/// dependency: UMG

/// Class /Script/AccoladesUI.AthenaAccoladeWrapper
/// Size: 0x0010 (0x000028 - 0x000038)
class UAthenaAccoladeWrapper : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	FName                                              AccoladeRowName;                                            // 0x0028   (0x0004)  
	FFortAccoladeSessionData                           AccoladeData;                                               // 0x002C   (0x000C)  
};

/// Class /Script/AccoladesUI.AthenaAccoladeListEntryWidget
/// Size: 0x0008 (0x0002E8 - 0x0002F0)
class UAthenaAccoladeListEntryWidget : public UCommonUserWidget
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x02E8   (0x0008)  MISSED


	/// Functions
	// Function /Script/AccoladesUI.AthenaAccoladeListEntryWidget.SetTitle
	// void SetTitle(FText& TitleText);                                                                                      // [0x18a39e4] Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/AccoladesUI.AthenaAccoladeListEntryWidget.SetSource
	// void SetSource(FText& SourceText);                                                                                    // [0x18a39e4] Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/AccoladesUI.AthenaAccoladeListEntryWidget.SetJustCompleted
	// void SetJustCompleted(bool bJustCompleted);                                                                           // [0x18a39e4] Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /Script/AccoladesUI.AthenaAccoladeListEntryWidget.SetIconImage
	// void SetIconImage(TWeakObjectPtr<UTexture2D*>& IconImage, EFortAccoladeType AccoladeType);                            // [0x18a39e4] Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/AccoladesUI.AthenaAccoladeListEntryWidget.SetIcon
	// void SetIcon(class UFortAccoladeItemDefinition* ItemDef);                                                             // [0x18a39e4] Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /Script/AccoladesUI.AthenaAccoladeListEntryWidget.SetCount
	// void SetCount(int32_t Count);                                                                                         // [0x18a39e4] Event|Protected|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/AccoladesUI.AthenaAccoladeListWidget
/// Size: 0x0000 (0x000BD0 - 0x000BD0)
class UAthenaAccoladeListWidget : public UCommonListView
{ 
public:


	/// Functions
	// Function /Script/AccoladesUI.AthenaAccoladeListWidget.PopulateWidget
	// void PopulateWidget();                                                                                                // [0xa178c08] Final|Native|Public|BlueprintCallable 
};

