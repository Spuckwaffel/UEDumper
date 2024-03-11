
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine
/// dependency: LocalizableMessage
/// dependency: ModelViewViewModel
/// dependency: NetCore
/// dependency: Slate
/// dependency: SlateCore
/// dependency: UMG

/// Enum /Script/UIFramework.EUIFrameworkGameLayerType
/// Size: 0x03
enum class EUIFrameworkGameLayerType : uint8_t
{
	EUIFrameworkGameLayerType__Viewport                                              = 0,
	EUIFrameworkGameLayerType__PlayerScreen                                          = 1,
	EUIFrameworkGameLayerType__EUIFrameworkGameLayerType_MAX                         = 2
};

/// Enum /Script/UIFramework.EUIFrameworkInputMode
/// Size: 0x03
enum class EUIFrameworkInputMode : uint8_t
{
	EUIFrameworkInputMode__UI                                                        = 0,
	EUIFrameworkInputMode__Game                                                      = 1,
	EUIFrameworkInputMode__EUIFrameworkInputMode_MAX                                 = 2
};

/// Class /Script/UIFramework.UIFrameworkLocalSettings
/// Size: 0x0058 (0x000030 - 0x000088)
class UUIFrameworkLocalSettings : public UDeveloperSettings
{ 
public:
	SDK_UNDEFINED(32,9343) /* TWeakObjectPtr<UObject*> */ __um(ErrorResource);                                     // 0x0030   (0x0020)  
	SDK_UNDEFINED(32,9344) /* TWeakObjectPtr<UObject*> */ __um(LoadingResource);                                   // 0x0050   (0x0020)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x0070   (0x0018)  MISSED
};

/// Struct /Script/UIFramework.UIFrameworkWidgetId
/// Size: 0x0008 (0x000000 - 0x000008)
struct FUIFrameworkWidgetId
{ 
	int64_t                                            Key;                                                        // 0x0000   (0x0008)  
};

/// Struct /Script/UIFramework.UIFrameworkSlotBase
/// Size: 0x001C (0x00000C - 0x000028)
struct FUIFrameworkSlotBase : FFastArraySerializerItem
{ 
	unsigned char                                      UnknownData00_3[0x4];                                       // 0x000C   (0x0004)  MISSED
	class UUIFrameworkWidget*                          Widget;                                                     // 0x0010   (0x0008)  
	FUIFrameworkWidgetId                               WidgetId;                                                   // 0x0018   (0x0008)  
	FUIFrameworkWidgetId                               LocalPreviousWidgetId;                                      // 0x0020   (0x0008)  
};

/// Struct /Script/UIFramework.UIFrameworkGameLayerSlot
/// Size: 0x0008 (0x000028 - 0x000030)
struct FUIFrameworkGameLayerSlot : FUIFrameworkSlotBase
{ 
	int32_t                                            ZOrder;                                                     // 0x0028   (0x0004)  
	EUIFrameworkInputMode                              InputMode;                                                  // 0x002C   (0x0001)  
	EUIFrameworkGameLayerType                          Type;                                                       // 0x002D   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x002E   (0x0002)  MISSED
};

/// Struct /Script/UIFramework.UIFrameworkGameLayerSlotList
/// Size: 0x0018 (0x000108 - 0x000120)
struct FUIFrameworkGameLayerSlotList : FFastArraySerializer
{ 
	TArray<FUIFrameworkGameLayerSlot>                  Entries;                                                    // 0x0108   (0x0010)  
	class UUIFrameworkPlayerComponent*                 Owner;                                                      // 0x0118   (0x0008)  
};

/// Struct /Script/UIFramework.UIFrameworkWidgetTreeEntry
/// Size: 0x0024 (0x00000C - 0x000030)
struct FUIFrameworkWidgetTreeEntry : FFastArraySerializerItem
{ 
	unsigned char                                      UnknownData00_3[0x4];                                       // 0x000C   (0x0004)  MISSED
	class UUIFrameworkWidget*                          Parent;                                                     // 0x0010   (0x0008)  
	class UUIFrameworkWidget*                          Child;                                                      // 0x0018   (0x0008)  
	FUIFrameworkWidgetId                               ParentID;                                                   // 0x0020   (0x0008)  
	FUIFrameworkWidgetId                               ChildId;                                                    // 0x0028   (0x0008)  
};

/// Struct /Script/UIFramework.UIFrameworkWidgetTree
/// Size: 0x00F0 (0x000108 - 0x0001F8)
struct FUIFrameworkWidgetTree : FFastArraySerializer
{ 
	unsigned char                                      UnknownData00_3[0x30];                                      // 0x0108   (0x0030)  MISSED
	TArray<FUIFrameworkWidgetTreeEntry>                Entries;                                                    // 0x0138   (0x0010)  
	class AActor*                                      ReplicatedOwner;                                            // 0x0148   (0x0008)  
	unsigned char                                      UnknownData01_6[0xA8];                                      // 0x0150   (0x00A8)  MISSED
};

/// Class /Script/UIFramework.UIFrameworkPlayerComponent
/// Size: 0x0438 (0x0000A0 - 0x0004D8)
class UUIFrameworkPlayerComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x00A0   (0x0008)  MISSED
	FUIFrameworkGameLayerSlotList                      RootList;                                                   // 0x00A8   (0x0120)  
	FUIFrameworkWidgetTree                             WidgetTree;                                                 // 0x01C8   (0x01F8)  
	class UUIFrameworkPresenter*                       Presenter;                                                  // 0x03C0   (0x0008)  
	SDK_UNDEFINED(80,9345) /* TSet<int32_t> */         __um(NetReplicationPending);                                // 0x03C8   (0x0050)  
	SDK_UNDEFINED(80,9346) /* TSet<int32_t> */         __um(AddPending);                                           // 0x0418   (0x0050)  
	unsigned char                                      UnknownData01_6[0x70];                                      // 0x0468   (0x0070)  MISSED


	/// Functions
	// Function /Script/UIFramework.UIFrameworkPlayerComponent.ServerRemoveWidgetRootFromTree
	// void ServerRemoveWidgetRootFromTree(FUIFrameworkWidgetId WidgetId);                                                   // [0x76f7d70] Final|Net|NetReliableNative|Event|Private|NetServer 
	// Function /Script/UIFramework.UIFrameworkPlayerComponent.RemoveWidget
	// void RemoveWidget(class UUIFrameworkWidget* Widget);                                                                  // [0x76f7c70] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/UIFramework.UIFrameworkPlayerComponent.AddWidget
	// void AddWidget(FUIFrameworkGameLayerSlot Widget);                                                                     // [0x76f7420] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
};

/// Class /Script/UIFramework.UIFrameworkPresenter
/// Size: 0x0000 (0x000028 - 0x000028)
class UUIFrameworkPresenter : public UObject
{ 
public:
};

/// Class /Script/UIFramework.UIFrameworkGameViewportPresenter
/// Size: 0x0010 (0x000028 - 0x000038)
class UUIFrameworkGameViewportPresenter : public UUIFrameworkPresenter
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0028   (0x0010)  MISSED
};

/// Class /Script/UIFramework.UIFrameworkWidgetWrapperInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UUIFrameworkWidgetWrapperInterface : public UInterface
{ 
public:
};

/// Struct /Script/UIFramework.UIFrameworkParentWidget
/// Size: 0x0010 (0x000000 - 0x000010)
struct FUIFrameworkParentWidget
{ 
	class UObject*                                     Parent;                                                     // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0008   (0x0008)  MISSED
};

/// Class /Script/UIFramework.UIFrameworkWidget
/// Size: 0x0060 (0x000068 - 0x0000C8)
class UUIFrameworkWidget : public UMVVMViewModelBase
{ 
public:
	bool                                               bIsEnabled;                                                 // 0x0068   (0x0001)  
	ESlateVisibility                                   Visibility;                                                 // 0x0069   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x006A   (0x0006)  MISSED
	SDK_UNDEFINED(32,9347) /* TWeakObjectPtr<UClass*> */ __um(WidgetClass);                                        // 0x0070   (0x0020)  
	FUIFrameworkWidgetId                               ID;                                                         // 0x0090   (0x0008)  
	SDK_UNDEFINED(16,9348) /* TScriptInterface<Class> */ __um(Wrapper);                                            // 0x0098   (0x0010)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x00A8   (0x0008)  MISSED
	FUIFrameworkParentWidget                           AuthorityParent;                                            // 0x00B0   (0x0010)  
	class UWidget*                                     LocalUMGWidget;                                             // 0x00C0   (0x0008)  


	/// Functions
	// Function /Script/UIFramework.UIFrameworkWidget.OnRep_Visibility
	// void OnRep_Visibility();                                                                                              // [0x76f7b3c] Final|Native|Private 
	// Function /Script/UIFramework.UIFrameworkWidget.OnRep_IsEnabled
	// void OnRep_IsEnabled();                                                                                               // [0x76f794c] Final|Native|Private 
};

/// Struct /Script/UIFramework.UIFrameworkSimpleSlot
/// Size: 0x0018 (0x000028 - 0x000040)
struct FUIFrameworkSimpleSlot : FUIFrameworkSlotBase
{ 
	FMargin                                            Padding;                                                    // 0x0028   (0x0010)  
	SDK_UNDEFINED(1,9349) /* TEnumAsByte<EHorizontalAlignment> */ __um(HorizontalAlignment);                       // 0x0038   (0x0001)  
	SDK_UNDEFINED(1,9350) /* TEnumAsByte<EVerticalAlignment> */ __um(VerticalAlignment);                           // 0x0039   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x003A   (0x0006)  MISSED
};

/// Class /Script/UIFramework.UIFrameworkButton
/// Size: 0x0058 (0x0000C8 - 0x000120)
class UUIFrameworkButton : public UUIFrameworkWidget
{ 
public:
	unsigned char                                      UnknownData00_3[0x18];                                      // 0x00C8   (0x0018)  MISSED
	FUIFrameworkSimpleSlot                             Slot;                                                       // 0x00E0   (0x0040)  


	/// Functions
	// Function /Script/UIFramework.UIFrameworkButton.SetContent
	// void SetContent(FUIFrameworkSimpleSlot Content);                                                                      // [0x76f7fdc] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/UIFramework.UIFrameworkButton.ServerClick
	// void ServerClick(class APlayerController* PlayerController);                                                          // [0x66f6008] Final|Net|NetReliableNative|Event|Private|NetServer 
	// Function /Script/UIFramework.UIFrameworkButton.OnRep_Slot
	// void OnRep_Slot();                                                                                                    // [0x76f7aec] Final|Native|Private 
	// Function /Script/UIFramework.UIFrameworkButton.HandleClick
	// void HandleClick();                                                                                                   // [0x76f78fc] Final|Native|Private 
	// Function /Script/UIFramework.UIFrameworkButton.GetContent
	// FUIFrameworkSimpleSlot GetContent();                                                                                  // [0x76f7780] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/UIFramework.UIFrameworkButtonWidget
/// Size: 0x0000 (0x0005D0 - 0x0005D0)
class UUIFrameworkButtonWidget : public UButton
{ 
public:
};

/// Struct /Script/UIFramework.UIFrameworkCanvasBoxSlot
/// Size: 0x0048 (0x000028 - 0x000070)
struct FUIFrameworkCanvasBoxSlot : FUIFrameworkSlotBase
{ 
	FAnchors                                           Anchors;                                                    // 0x0028   (0x0020)  
	FMargin                                            Offsets;                                                    // 0x0048   (0x0010)  
	FVector2D                                          Alignment;                                                  // 0x0058   (0x0010)  
	int32_t                                            ZOrder;                                                     // 0x0068   (0x0004)  
	bool                                               bSizeToContent;                                             // 0x006C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x006D   (0x0003)  MISSED
};

/// Struct /Script/UIFramework.UIFrameworkCanvasBoxSlotList
/// Size: 0x0018 (0x000108 - 0x000120)
struct FUIFrameworkCanvasBoxSlotList : FFastArraySerializer
{ 
	TArray<FUIFrameworkCanvasBoxSlot>                  Slots;                                                      // 0x0108   (0x0010)  
	class UUIFrameworkCanvasBox*                       Owner;                                                      // 0x0118   (0x0008)  
};

/// Class /Script/UIFramework.UIFrameworkCanvasBox
/// Size: 0x0120 (0x0000C8 - 0x0001E8)
class UUIFrameworkCanvasBox : public UUIFrameworkWidget
{ 
public:
	FUIFrameworkCanvasBoxSlotList                      ReplicatedSlotList;                                         // 0x00C8   (0x0120)  


	/// Functions
	// Function /Script/UIFramework.UIFrameworkCanvasBox.RemoveWidget
	// void RemoveWidget(class UUIFrameworkWidget* Widget);                                                                  // [0x76f7b70] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/UIFramework.UIFrameworkCanvasBox.AddWidget
	// void AddWidget(FUIFrameworkCanvasBoxSlot Widget);                                                                     // [0x76f7188] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
};

/// Class /Script/UIFramework.UIFrameworkColorBlock
/// Size: 0x0018 (0x0000C8 - 0x0000E0)
class UUIFrameworkColorBlock : public UUIFrameworkWidget
{ 
public:
	FLinearColor                                       Color;                                                      // 0x00C8   (0x0010)  
	FVector2f                                          DesiredSize;                                                // 0x00D8   (0x0008)  


	/// Functions
	// Function /Script/UIFramework.UIFrameworkColorBlock.SetDesiredSize
	// void SetDesiredSize(FVector2f DesiredSize);                                                                           // [0x76f8128] Final|BlueprintAuthorityOnly|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UIFramework.UIFrameworkColorBlock.SetColor
	// void SetColor(FLinearColor Tint);                                                                                     // [0x76f7ea4] Final|BlueprintAuthorityOnly|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UIFramework.UIFrameworkColorBlock.OnRep_DesiredSize
	// void OnRep_DesiredSize();                                                                                             // [0x76f7910] Final|Native|Private 
	// Function /Script/UIFramework.UIFrameworkColorBlock.OnRep_Color
	// void OnRep_Color();                                                                                                   // [0x76f7910] Final|Native|Private 
	// Function /Script/UIFramework.UIFrameworkColorBlock.GetDesiredSize
	// FVector2f GetDesiredSize();                                                                                           // [0x76f77fc] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UIFramework.UIFrameworkColorBlock.GetColor
	// FLinearColor GetColor();                                                                                              // [0x76f7764] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/UIFramework.UIFrameworkImageBlockData
/// Size: 0x0040 (0x000000 - 0x000040)
struct FUIFrameworkImageBlockData
{ 
	FLinearColor                                       Tint;                                                       // 0x0000   (0x0010)  
	SDK_UNDEFINED(32,9351) /* TWeakObjectPtr<UObject*> */ __um(ResourceObject);                                    // 0x0010   (0x0020)  
	FVector2f                                          DesiredSize;                                                // 0x0030   (0x0008)  
	SDK_UNDEFINED(1,9352) /* TEnumAsByte<ESlateBrushTileType> */ __um(Tiling);                                     // 0x0038   (0x0001)  
	bool                                               bUseTextureSize;                                            // 0x0039   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x003A   (0x0006)  MISSED
};

/// Class /Script/UIFramework.UIFrameworkImageBlock
/// Size: 0x0060 (0x0000C8 - 0x000128)
class UUIFrameworkImageBlock : public UUIFrameworkWidget
{ 
public:
	FUIFrameworkImageBlockData                         Data;                                                       // 0x00C8   (0x0040)  
	bool                                               bWaitForResourceToBeLoaded;                                 // 0x0108   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1F];                                      // 0x0109   (0x001F)  MISSED


	/// Functions
	// Function /Script/UIFramework.UIFrameworkImageBlock.SetTint
	// void SetTint(FLinearColor Tint);                                                                                      // [0x76f7ea4] Final|BlueprintAuthorityOnly|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UIFramework.UIFrameworkImageBlock.SetTiling
	// void SetTiling(TEnumAsByte<ESlateBrushTileType> OverflowPolicy);                                                      // [0x76f8bf4] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/UIFramework.UIFrameworkImageBlock.SetTexture
	// void SetTexture(TWeakObjectPtr<UTexture2D*> Texture, bool bUseTextureSize);                                           // [0x76f8ac4] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/UIFramework.UIFrameworkImageBlock.SetMaterial
	// void SetMaterial(TWeakObjectPtr<UMaterialInterface*> Material);                                                       // [0x76f8400] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/UIFramework.UIFrameworkImageBlock.SetDesiredSize
	// void SetDesiredSize(FVector2f DesiredSize);                                                                           // [0x76f8254] Final|BlueprintAuthorityOnly|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UIFramework.UIFrameworkImageBlock.OnRep_Data
	// void OnRep_Data();                                                                                                    // [0x76f7938] Final|Native|Private 
	// Function /Script/UIFramework.UIFrameworkImageBlock.GetTint
	// FLinearColor GetTint();                                                                                               // [0x76f7764] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UIFramework.UIFrameworkImageBlock.GetTiling
	// TEnumAsByte<ESlateBrushTileType> GetTiling();                                                                         // [0x76f78e4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UIFramework.UIFrameworkImageBlock.GetDesiredSize
	// FVector2f GetDesiredSize();                                                                                           // [0x6581ba4] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UIFramework.UIFrameworkImageBlock.GeResourceObject
	// TWeakObjectPtr<UObject*> GeResourceObject();                                                                          // [0x76f76b8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/UIFramework.UIFrameworkOverlaySlot
/// Size: 0x0018 (0x000028 - 0x000040)
struct FUIFrameworkOverlaySlot : FUIFrameworkSlotBase
{ 
	FMargin                                            Padding;                                                    // 0x0028   (0x0010)  
	SDK_UNDEFINED(1,9353) /* TEnumAsByte<EHorizontalAlignment> */ __um(HorizontalAlignment);                       // 0x0038   (0x0001)  
	SDK_UNDEFINED(1,9354) /* TEnumAsByte<EVerticalAlignment> */ __um(VerticalAlignment);                           // 0x0039   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x003A   (0x0002)  MISSED
	int32_t                                            Index;                                                      // 0x003C   (0x0004)  
};

/// Struct /Script/UIFramework.UIFrameworkOverlaySlotList
/// Size: 0x0018 (0x000108 - 0x000120)
struct FUIFrameworkOverlaySlotList : FFastArraySerializer
{ 
	TArray<FUIFrameworkOverlaySlot>                    Slots;                                                      // 0x0108   (0x0010)  
	class UUIFrameworkOverlay*                         Owner;                                                      // 0x0118   (0x0008)  
};

/// Class /Script/UIFramework.UIFrameworkOverlay
/// Size: 0x0120 (0x0000C8 - 0x0001E8)
class UUIFrameworkOverlay : public UUIFrameworkWidget
{ 
public:
	FUIFrameworkOverlaySlotList                        ReplicatedSlotList;                                         // 0x00C8   (0x0120)  


	/// Functions
	// Function /Script/UIFramework.UIFrameworkOverlay.RemoveWidget
	// void RemoveWidget(class UUIFrameworkWidget* Widget);                                                                  // [0x76f7bf0] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/UIFramework.UIFrameworkOverlay.AddWidget
	// void AddWidget(FUIFrameworkOverlaySlot Widget);                                                                       // [0x76f72d4] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
};

/// Struct /Script/UIFramework.UIFrameworkStackBoxSlot
/// Size: 0x0020 (0x000028 - 0x000048)
struct FUIFrameworkStackBoxSlot : FUIFrameworkSlotBase
{ 
	SDK_UNDEFINED(1,9355) /* TEnumAsByte<EHorizontalAlignment> */ __um(HorizontalAlignment);                       // 0x0028   (0x0001)  
	SDK_UNDEFINED(1,9356) /* TEnumAsByte<EVerticalAlignment> */ __um(VerticalAlignment);                           // 0x0029   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x002A   (0x0002)  MISSED
	FMargin                                            Padding;                                                    // 0x002C   (0x0010)  
	FSlateChildSize                                    Size;                                                       // 0x003C   (0x0008)  
	int32_t                                            Index;                                                      // 0x0044   (0x0004)  
};

/// Struct /Script/UIFramework.UIFrameworkStackBoxSlotList
/// Size: 0x0018 (0x000108 - 0x000120)
struct FUIFrameworkStackBoxSlotList : FFastArraySerializer
{ 
	TArray<FUIFrameworkStackBoxSlot>                   Slots;                                                      // 0x0108   (0x0010)  
	class UUIFrameworkStackBox*                        Owner;                                                      // 0x0118   (0x0008)  
};

/// Class /Script/UIFramework.UIFrameworkStackBox
/// Size: 0x0128 (0x0000C8 - 0x0001F0)
class UUIFrameworkStackBox : public UUIFrameworkWidget
{ 
public:
	SDK_UNDEFINED(1,9357) /* TEnumAsByte<EOrientation> */ __um(orientation);                                       // 0x00C8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x00C9   (0x0007)  MISSED
	FUIFrameworkStackBoxSlotList                       ReplicatedSlotList;                                         // 0x00D0   (0x0120)  


	/// Functions
	// Function /Script/UIFramework.UIFrameworkStackBox.RemoveWidget
	// void RemoveWidget(class UUIFrameworkWidget* Widget);                                                                  // [0x76f7cf0] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/UIFramework.UIFrameworkStackBox.OnRep_Orientation
	// void OnRep_Orientation();                                                                                             // [0x76f79f8] Final|Native|Private 
	// Function /Script/UIFramework.UIFrameworkStackBox.AddWidget
	// void AddWidget(FUIFrameworkStackBoxSlot Widget);                                                                      // [0x76f756c] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
};

/// Class /Script/UIFramework.UIFrameworkTextBase
/// Size: 0x0060 (0x0000C8 - 0x000128)
class UUIFrameworkTextBase : public UUIFrameworkWidget
{ 
public:
	SDK_UNDEFINED(24,9358) /* FText */                 __um(Text);                                                 // 0x00C8   (0x0018)  
	FLocalizableMessage                                Message;                                                    // 0x00E0   (0x0030)  
	FLinearColor                                       TextColor;                                                  // 0x0110   (0x0010)  
	SDK_UNDEFINED(1,9359) /* TEnumAsByte<ETextJustify> */ __um(Justification);                                     // 0x0120   (0x0001)  
	ETextOverflowPolicy                                OverflowPolicy;                                             // 0x0121   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x0122   (0x0006)  MISSED


	/// Functions
	// Function /Script/UIFramework.UIFrameworkTextBase.SetTextColor
	// void SetTextColor(FLinearColor TextColor);                                                                            // [0x76f898c] Final|BlueprintAuthorityOnly|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UIFramework.UIFrameworkTextBase.SetOverflowPolicy
	// void SetOverflowPolicy(ETextOverflowPolicy OverflowPolicy);                                                           // [0x76f86a8] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/UIFramework.UIFrameworkTextBase.SetJustification
	// void SetJustification(TEnumAsByte<ETextJustify> Justification);                                                       // [0x76f8380] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/UIFramework.UIFrameworkTextBase.OnRep_TextColor
	// void OnRep_TextColor();                                                                                               // [0x76f7b00] Final|Native|Private 
	// Function /Script/UIFramework.UIFrameworkTextBase.OnRep_OverflowPolicy
	// void OnRep_OverflowPolicy();                                                                                          // [0x76f7a50] Final|Native|Private 
	// Function /Script/UIFramework.UIFrameworkTextBase.OnRep_Message
	// void OnRep_Message();                                                                                                 // [0x76f79b0] Final|Native|Private 
	// Function /Script/UIFramework.UIFrameworkTextBase.OnRep_Justification
	// void OnRep_Justification();                                                                                           // [0x76f7980] Final|Native|Private 
	// Function /Script/UIFramework.UIFrameworkTextBase.GetTextColor
	// FLinearColor GetTextColor();                                                                                          // [0x76f78c8] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UIFramework.UIFrameworkTextBase.GetText
	// FText GetText();                                                                                                      // [0x76f7878] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UIFramework.UIFrameworkTextBase.GetOverflowPolicy
	// ETextOverflowPolicy GetOverflowPolicy();                                                                              // [0x76f782c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UIFramework.UIFrameworkTextBase.GetJustification
	// TEnumAsByte<ETextJustify> GetJustification();                                                                         // [0x76f7814] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/UIFramework.UIFrameworkTextBlock
/// Size: 0x0018 (0x000128 - 0x000140)
class UUIFrameworkTextBlock : public UUIFrameworkTextBase
{ 
public:
	FVector2f                                          ShadowOffset;                                               // 0x0128   (0x0008)  
	FLinearColor                                       ShadowColor;                                                // 0x0130   (0x0010)  


	/// Functions
	// Function /Script/UIFramework.UIFrameworkTextBlock.SetShadowOffset
	// void SetShadowOffset(FVector2f ShadowOffset);                                                                         // [0x76f8860] Final|BlueprintAuthorityOnly|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UIFramework.UIFrameworkTextBlock.SetShadowColor
	// void SetShadowColor(FLinearColor ShadowColor);                                                                        // [0x76f8728] Final|BlueprintAuthorityOnly|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UIFramework.UIFrameworkTextBlock.OnRep_ShadowOffset
	// void OnRep_ShadowOffset();                                                                                            // [0x76f7abc] Final|Native|Private 
	// Function /Script/UIFramework.UIFrameworkTextBlock.OnRep_ShadowColor
	// void OnRep_ShadowColor();                                                                                             // [0x76f7a80] Final|Native|Private 
	// Function /Script/UIFramework.UIFrameworkTextBlock.GetShadowOffset
	// FVector2f GetShadowOffset();                                                                                          // [0x76f7860] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UIFramework.UIFrameworkTextBlock.GetShadowColor
	// FLinearColor GetShadowColor();                                                                                        // [0x76f7844] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/UIFramework.UIFrameworkUserWidgetSlot
/// Size: 0x0008 (0x000028 - 0x000030)
struct FUIFrameworkUserWidgetSlot : FUIFrameworkSlotBase
{ 
	FName                                              SlotName;                                                   // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x002C   (0x0004)  MISSED
};

/// Struct /Script/UIFramework.UIFrameworkUserWidgetSlotList
/// Size: 0x0018 (0x000108 - 0x000120)
struct FUIFrameworkUserWidgetSlotList : FFastArraySerializer
{ 
	TArray<FUIFrameworkUserWidgetSlot>                 Slots;                                                      // 0x0108   (0x0010)  
	class UUIFrameworkUserWidget*                      Owner;                                                      // 0x0118   (0x0008)  
};

/// Class /Script/UIFramework.UIFrameworkUserWidget
/// Size: 0x0120 (0x0000C8 - 0x0001E8)
class UUIFrameworkUserWidget : public UUIFrameworkWidget
{ 
public:
	FUIFrameworkUserWidgetSlotList                     ReplicatedSlotList;                                         // 0x00C8   (0x0120)  


	/// Functions
	// Function /Script/UIFramework.UIFrameworkUserWidget.SetWidgetClass
	// void SetWidgetClass(TWeakObjectPtr<UClass*> Value);                                                                   // [0x76f8c74] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/UIFramework.UIFrameworkUserWidget.SetNamedSlot
	// void SetNamedSlot(FName SlotName, class UUIFrameworkWidget* Widget);                                                  // [0x76f84f4] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
};

/// Struct /Script/UIFramework.UIFrameworkSimpleEventArgument
/// Size: 0x0010 (0x000000 - 0x000010)
struct FUIFrameworkSimpleEventArgument
{ 
	class APlayerController*                           PlayerController;                                           // 0x0000   (0x0008)  
	class UUIFrameworkWidget*                          Sender;                                                     // 0x0008   (0x0008)  
};

/// Struct /Script/UIFramework.UIFrameworkClickEventArgument
/// Size: 0x0000 (0x000010 - 0x000010)
struct FUIFrameworkClickEventArgument : FUIFrameworkSimpleEventArgument
{ 
};

/// Struct /Script/UIFramework.UIFrameworkWidgetOwner
/// Size: 0x0018 (0x000000 - 0x000018)
struct FUIFrameworkWidgetOwner
{ 
	class APlayerController*                           PlayerController;                                           // 0x0000   (0x0008)  
	class UGameInstance*                               GameInstance;                                               // 0x0008   (0x0008)  
	class UWorld*                                      World;                                                      // 0x0010   (0x0008)  
};

