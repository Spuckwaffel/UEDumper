
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/DelMarValidatorCommon.DelMarValidatorInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UDelMarValidatorInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/DelMarValidatorCommon.DelMarWorldValidator_Task
/// Size: 0x0010 (0x000028 - 0x000038)
class UDelMarWorldValidator_Task : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(class UWorld*)                             DelMarWorld                                                 OFFSET(get<T>, {0x30, 8, 0, 0})


	/// Functions
	// Function /Script/DelMarValidatorCommon.DelMarWorldValidator_Task.ValidateDelMarWorld_CookOnly
	// void ValidateDelMarWorld_CookOnly();                                                                                     // [0x228deb8] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DelMarValidatorCommon.DelMarWorldValidator_Task.ValidateDelMarWorld_ClientOnly
	// void ValidateDelMarWorld_ClientOnly();                                                                                   // [0x228deb8] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DelMarValidatorCommon.DelMarWorldValidator_Task.ValidateDelMarWorld
	// void ValidateDelMarWorld();                                                                                              // [0x228deb8] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DelMarValidatorCommon.DelMarWorldValidator_Task.LogString
	// void LogString(FString InString);                                                                                        // [0xcb7ee58] Final|Native|Public|BlueprintCallable 
	// Function /Script/DelMarValidatorCommon.DelMarWorldValidator_Task.AddWarningTokenized
	// void AddWarningTokenized(class UObject* InAsset, FText& Msg);                                                            // [0xcb7ed78] Final|Native|Protected|HasOutParms|BlueprintCallable 
	// Function /Script/DelMarValidatorCommon.DelMarWorldValidator_Task.AddWarning
	// void AddWarning(FText& Msg);                                                                                             // [0xcb7ecd8] Final|Native|Protected|HasOutParms|BlueprintCallable 
	// Function /Script/DelMarValidatorCommon.DelMarWorldValidator_Task.AddErrorTokenized
	// void AddErrorTokenized(class UObject* InAsset, FText& Msg);                                                              // [0xcb7ebf8] Final|Native|Protected|HasOutParms|BlueprintCallable 
	// Function /Script/DelMarValidatorCommon.DelMarWorldValidator_Task.AddError
	// void AddError(FText& Msg);                                                                                               // [0xcb7eb5c] Final|Native|Protected|HasOutParms|BlueprintCallable 
};

