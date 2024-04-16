
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/WaveTable.WaveTableBank
/// Size: 0x0038 (0x000028 - 0x000060)
class UWaveTableBank : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(EWaveTableSamplingMode)                    SampleMode                                                  OFFSET(get<T>, {0x30, 1, 0, 0})
	CMember(EWaveTableResolution)                      Resolution                                                  OFFSET(get<T>, {0x31, 1, 0, 0})
	DMember(int32_t)                                   SampleRate                                                  OFFSET(get<int32_t>, {0x34, 4, 0, 0})
	DMember(bool)                                      bBipolar                                                    OFFSET(get<bool>, {0x38, 1, 0, 0})
	CMember(TArray<FWaveTableBankEntry>)               Entries                                                     OFFSET(get<T>, {0x40, 16, 0, 0})
};

/// Struct /Script/WaveTable.WaveTableData
/// Size: 0x0020 (0x000000 - 0x000020)
class FWaveTableData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(EWaveTableBitDepth)                        BitDepth                                                    OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(TArray<char>)                              Data                                                        OFFSET(get<T>, {0x8, 16, 0, 0})
	DMember(float)                                     FinalValue                                                  OFFSET(get<float>, {0x18, 4, 0, 0})
};

/// Struct /Script/WaveTable.WaveTableBankEntry
/// Size: 0x00B8 (0x000000 - 0x0000B8)
class FWaveTableBankEntry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	SMember(FWaveTableTransform)                       Transform                                                   OFFSET(getStruct<T>, {0x0, 184, 0, 0})
};

/// Struct /Script/WaveTable.WaveTableTransform
/// Size: 0x00B8 (0x000000 - 0x0000B8)
class FWaveTableTransform : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	CMember(EWaveTableCurve)                           Curve                                                       OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(float)                                     Scalar                                                      OFFSET(get<float>, {0x4, 4, 0, 0})
	SMember(FRichCurve)                                CurveCustom                                                 OFFSET(getStruct<T>, {0x8, 128, 0, 0})
	CMember(class UCurveFloat*)                        CurveShared                                                 OFFSET(get<T>, {0x88, 8, 0, 0})
	SMember(FWaveTableData)                            TableData                                                   OFFSET(getStruct<T>, {0x90, 32, 0, 0})
	DMember(float)                                     duration                                                    OFFSET(get<float>, {0xB0, 4, 0, 0})
};

/// Struct /Script/WaveTable.WaveTableSettings
/// Size: 0x0058 (0x000000 - 0x000058)
class FWaveTableSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FFilePath)                                 FilePath                                                    OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	DMember(int32_t)                                   ChannelIndex                                                OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	SMember(FWaveTableData)                            SourceData                                                  OFFSET(getStruct<T>, {0x18, 32, 0, 0})
	DMember(int32_t)                                   SourceSampleRate                                            OFFSET(get<int32_t>, {0x38, 4, 0, 0})
	DMember(float)                                     Phase                                                       OFFSET(get<float>, {0x3C, 4, 0, 0})
	DMember(float)                                     Top                                                         OFFSET(get<float>, {0x40, 4, 0, 0})
	DMember(float)                                     Tail                                                        OFFSET(get<float>, {0x44, 4, 0, 0})
	DMember(float)                                     FadeIn                                                      OFFSET(get<float>, {0x48, 4, 0, 0})
	DMember(float)                                     FadeOut                                                     OFFSET(get<float>, {0x4C, 4, 0, 0})
	DMember(bool)                                      bNormalize                                                  OFFSET(get<bool>, {0x50, 1, 0, 0})
	DMember(bool)                                      bRemoveOffset                                               OFFSET(get<bool>, {0x51, 1, 0, 0})
};

/// Enum /Script/WaveTable.EWaveTableBitDepth
/// Size: 0x04
enum class EWaveTableBitDepth : uint8_t
{
	EWaveTableBitDepth__PCM                                                          = 0,
	EWaveTableBitDepth__IEEE_Float                                                   = 1,
	EWaveTableBitDepth__COUNT                                                        = 2,
	EWaveTableBitDepth__EWaveTableBitDepth_MAX                                       = 3
};

/// Enum /Script/WaveTable.EWaveTableResolution
/// Size: 0x14
enum class EWaveTableResolution : uint8_t
{
	EWaveTableResolution__None                                                       = 0,
	EWaveTableResolution__Res                                                        = 3,
	EWaveTableResolution__Res3                                                       = 4,
	EWaveTableResolution__Res4                                                       = 5,
	EWaveTableResolution__Res5                                                       = 6,
	EWaveTableResolution__Res6                                                       = 7,
	EWaveTableResolution__Res7                                                       = 8,
	EWaveTableResolution__Res8                                                       = 9,
	EWaveTableResolution__Res9                                                       = 10,
	EWaveTableResolution__Res10                                                      = 11,
	EWaveTableResolution__Res11                                                      = 12,
	EWaveTableResolution__Res_Max                                                    = 12,
	EWaveTableResolution__Maximum                                                    = 13,
	EWaveTableResolution__EWaveTableResolution_MAX                                   = 14
};

/// Enum /Script/WaveTable.EWaveTableSamplingMode
/// Size: 0x04
enum class EWaveTableSamplingMode : uint8_t
{
	EWaveTableSamplingMode__FixedSampleRate                                          = 0,
	EWaveTableSamplingMode__FixedResolution                                          = 1,
	EWaveTableSamplingMode__COUNT                                                    = 2,
	EWaveTableSamplingMode__EWaveTableSamplingMode_MAX                               = 3
};

/// Enum /Script/WaveTable.EWaveTableCurve
/// Size: 0x13
enum class EWaveTableCurve : uint8_t
{
	EWaveTableCurve__Linear                                                          = 0,
	EWaveTableCurve__Linear_Inv                                                      = 1,
	EWaveTableCurve__Exp                                                             = 2,
	EWaveTableCurve__Exp_Inverse                                                     = 3,
	EWaveTableCurve__Log                                                             = 4,
	EWaveTableCurve__Sin                                                             = 5,
	EWaveTableCurve__Sin_Full                                                        = 6,
	EWaveTableCurve__SCurve                                                          = 7,
	EWaveTableCurve__Shared                                                          = 8,
	EWaveTableCurve__Custom                                                          = 9,
	EWaveTableCurve__File                                                            = 10,
	EWaveTableCurve__Count                                                           = 11,
	EWaveTableCurve__EWaveTableCurve_MAX                                             = 12
};

