
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: AccoladesRuntime
/// dependency: CommonUI
/// dependency: CoreUObject
/// dependency: UMG

/// Class /Script/AccoladesUI.AthenaAccoladeWrapper
/// Size: 0x0010 (0x000028 - 0x000038)
class UAthenaAccoladeWrapper : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FName)                                     AccoladeRowName                                             OFFSET(getStruct<T>, {0x28, 4, 0, 0})
	SMember(FFortAccoladeSessionData)                  AccoladeData                                                OFFSET(getStruct<T>, {0x2C, 12, 0, 0})
};

/// Class /Script/AccoladesUI.AthenaAccoladeListEntryWidget
/// Size: 0x0008 (0x0002E8 - 0x0002F0)
class UAthenaAccoladeListEntryWidget : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 752;

public:


	/// Functions
	// Function /Script/AccoladesUI.AthenaAccoladeListEntryWidget.SetTitle
	// void SetTitle(FText& TitleText);                                                                                         // [0x18a39e4] Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/AccoladesUI.AthenaAccoladeListEntryWidget.SetSource
	// void SetSource(FText& SourceText);                                                                                       // [0x18a39e4] Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/AccoladesUI.AthenaAccoladeListEntryWidget.SetJustCompleted
	// void SetJustCompleted(bool bJustCompleted);                                                                              // [0x18a39e4] Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /Script/AccoladesUI.AthenaAccoladeListEntryWidget.SetIconImage
	// void SetIconImage(TWeakObjectPtr<UTexture2D*>& IconImage, EFortAccoladeType AccoladeType);                               // [0x18a39e4] Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/AccoladesUI.AthenaAccoladeListEntryWidget.SetIcon
	// void SetIcon(class UFortAccoladeItemDefinition* ItemDef);                                                                // [0x18a39e4] Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /Script/AccoladesUI.AthenaAccoladeListEntryWidget.SetCount
	// void SetCount(int32_t Count);                                                                                            // [0x18a39e4] Event|Protected|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/AccoladesUI.AthenaAccoladeListWidget
/// Size: 0x0000 (0x000BD0 - 0x000BD0)
class UAthenaAccoladeListWidget : public UCommonListView
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3024;

public:


	/// Functions
	// Function /Script/AccoladesUI.AthenaAccoladeListWidget.PopulateWidget
	// void PopulateWidget();                                                                                                   // [0xa178c08] Final|Native|Public|BlueprintCallable 
};

