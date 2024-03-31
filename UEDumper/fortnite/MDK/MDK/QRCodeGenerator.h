
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: UMG

/// Class /Script/QRCodeGenerator.QRCodeGeneratorBlueprintFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UQRCodeGeneratorBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/QRCodeGenerator.QRCodeGeneratorBlueprintFunctionLibrary.GenerateQRCodeTextureFromString
	// class UTexture2D* GenerateQRCodeTextureFromString(FString StringToEncode);                                               // [0x85a6bdc] Final|Native|Static|Private|BlueprintCallable 
};

/// Class /Script/QRCodeGenerator.QRCodeGeneratorUserWidget
/// Size: 0x0018 (0x0002C0 - 0x0002D8)
class UQRCodeGeneratorUserWidget : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 728;

public:
	CMember(class UTexture2D*)                         QRCodeTexture2D                                             OFFSET(get<T>, {0x2C0, 8, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnQRCodeTextureUpdated                                      OFFSET(getStruct<T>, {0x2C8, 16, 0, 0})


	/// Functions
	// Function /Script/QRCodeGenerator.QRCodeGeneratorUserWidget.EncodeString
	// void EncodeString(FString StringToEncode);                                                                               // [0x85a6550] Final|Native|Public|BlueprintCallable 
};

