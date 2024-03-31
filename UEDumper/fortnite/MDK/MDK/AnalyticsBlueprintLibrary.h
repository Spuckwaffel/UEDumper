
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UAnalyticsBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.StartSessionWithAttributes
	// bool StartSessionWithAttributes(TArray<FAnalyticsEventAttr>& Attributes);                                                // [0x835d6c8] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.StartSession
	// bool StartSession();                                                                                                     // [0x835d650] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.SetUserId
	// void SetUserId(FString UserId);                                                                                          // [0x835cfc4] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.SetSessionId
	// void SetSessionId(FString SessionId);                                                                                    // [0x835c938] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.SetLocation
	// void SetLocation(FString Location);                                                                                      // [0x835c2ac] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.SetGender
	// void SetGender(FString Gender);                                                                                          // [0x835bc20] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.SetBuildInfo
	// void SetBuildInfo(FString BuildInfo);                                                                                    // [0x835b594] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.SetAge
	// void SetAge(int32_t Age);                                                                                                // [0x835b4a4] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordSimpleItemPurchaseWithAttributes
	// void RecordSimpleItemPurchaseWithAttributes(FString ItemId, int32_t ItemQuantity, TArray<FAnalyticsEventAttr>& Attributes); // [0x835ad8c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordSimpleItemPurchase
	// void RecordSimpleItemPurchase(FString ItemId, int32_t ItemQuantity);                                                     // [0x835a6cc] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordSimpleCurrencyPurchaseWithAttributes
	// void RecordSimpleCurrencyPurchaseWithAttributes(FString GameCurrencyType, int32_t GameCurrencyAmount, TArray<FAnalyticsEventAttr>& Attributes); // [0x8359fb4] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordSimpleCurrencyPurchase
	// void RecordSimpleCurrencyPurchase(FString GameCurrencyType, int32_t GameCurrencyAmount);                                 // [0x83598a4] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordProgressWithFullHierarchyAndAttributes
	// void RecordProgressWithFullHierarchyAndAttributes(FString ProgressType, TArray<FString>& ProgressNames, TArray<FAnalyticsEventAttr>& Attributes); // [0x83591b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordProgressWithAttributes
	// void RecordProgressWithAttributes(FString ProgressType, FString ProgressName, TArray<FAnalyticsEventAttr>& Attributes);  // [0x8358a84] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordProgress
	// void RecordProgress(FString ProgressType, FString ProgressName);                                                         // [0x8358364] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordItemPurchase
	// void RecordItemPurchase(FString ItemId, FString Currency, int32_t PerItemCost, int32_t ItemQuantity);                    // [0x8357b98] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordEventWithAttributes
	// void RecordEventWithAttributes(FString EventName, TArray<FAnalyticsEventAttr>& Attributes);                              // [0x83574f8] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordEventWithAttribute
	// void RecordEventWithAttribute(FString EventName, FString AttributeName, FString AttributeValue);                         // [0x8356d94] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordEvent
	// void RecordEvent(FString EventName);                                                                                     // [0x8356700] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordErrorWithAttributes
	// void RecordErrorWithAttributes(FString Error, TArray<FAnalyticsEventAttr>& Attributes);                                  // [0x8356060] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordError
	// void RecordError(FString Error);                                                                                         // [0x83559d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordCurrencyPurchase
	// void RecordCurrencyPurchase(FString GameCurrencyType, int32_t GameCurrencyAmount, FString RealCurrencyType, float RealMoneyCost, FString PaymentProvider); // [0x8355174] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordCurrencyGivenWithAttributes
	// void RecordCurrencyGivenWithAttributes(FString GameCurrencyType, int32_t GameCurrencyAmount, TArray<FAnalyticsEventAttr>& Attributes); // [0x8354a5c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordCurrencyGiven
	// void RecordCurrencyGiven(FString GameCurrencyType, int32_t GameCurrencyAmount);                                          // [0x835434c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.MakeEventAttribute
	// FAnalyticsEventAttr MakeEventAttribute(FString AttributeName, FString AttributeValue);                                   // [0x8353c3c] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.GetUserId
	// FString GetUserId();                                                                                                     // [0x8353638] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.GetSessionId
	// FString GetSessionId();                                                                                                  // [0x8353034] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.FlushEvents
	// void FlushEvents();                                                                                                      // [0x8352fd0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.EndSession
	// void EndSession();                                                                                                       // [0x8352f6c] Final|Native|Static|Public|BlueprintCallable 
};

/// Struct /Script/AnalyticsBlueprintLibrary.AnalyticsEventAttr
/// Size: 0x0020 (0x000000 - 0x000020)
class FAnalyticsEventAttr : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FString)                                   Name                                                        OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   Value                                                       OFFSET(getStruct<T>, {0x10, 16, 0, 0})
};

