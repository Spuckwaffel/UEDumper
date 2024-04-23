
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/HarmonixMidi.MidiFile
/// Size: 0x0100 (0x000028 - 0x000128)
class UMidiFile : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
	SMember(FMidiFileData)                             TheMidiData                                                 OFFSET(getStruct<T>, {0x30, 232, 0, 0})
};

/// Class /Script/HarmonixMidi.MidiNoteFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UMidiNoteFunctionLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/HarmonixMidi.MidiNoteFunctionLibrary.MidiNoteToInt
	// int32_t MidiNoteToInt(FMidiNote& InMidiNote);                                                                            // [0xb59d9dc] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/HarmonixMidi.MidiNoteFunctionLibrary.MidiNoteToByte
	// char MidiNoteToByte(FMidiNote& InMidiNote);                                                                              // [0xb59d954] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/HarmonixMidi.MidiNoteFunctionLibrary.MakeLiteralMidiNote
	// FMidiNote MakeLiteralMidiNote(FMidiNote Value);                                                                          // [0xb59d8dc] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/HarmonixMidi.MidiNoteFunctionLibrary.IntToMidiNote
	// FMidiNote IntToMidiNote(int32_t inInt);                                                                                  // [0xb59d864] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/HarmonixMidi.MidiNoteFunctionLibrary.GetMinNoteVelocity
	// char GetMinNoteVelocity();                                                                                               // [0x3128b98] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/HarmonixMidi.MidiNoteFunctionLibrary.GetMinNoteNumber
	// char GetMinNoteNumber();                                                                                                 // [0x3128b98] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/HarmonixMidi.MidiNoteFunctionLibrary.GetMinMidiNote
	// FMidiNote GetMinMidiNote();                                                                                              // [0x3128b98] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/HarmonixMidi.MidiNoteFunctionLibrary.GetMaxNumNotes
	// int32_t GetMaxNumNotes();                                                                                                // [0xb59d804] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/HarmonixMidi.MidiNoteFunctionLibrary.GetMaxNoteVelocity
	// char GetMaxNoteVelocity();                                                                                               // [0xb59d7f0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/HarmonixMidi.MidiNoteFunctionLibrary.GetMaxNoteNumber
	// char GetMaxNoteNumber();                                                                                                 // [0xb59d7f0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/HarmonixMidi.MidiNoteFunctionLibrary.GetMaxMidiNote
	// FMidiNote GetMaxMidiNote();                                                                                              // [0xb59d7f0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/HarmonixMidi.MidiNoteFunctionLibrary.ByteToMidiNote
	// FMidiNote ByteToMidiNote(char InByte);                                                                                   // [0x9758e64] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/HarmonixMidi.MusicalTickFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UMusicalTickFunctionLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/HarmonixMidi.MusicalTickFunctionLibrary.TickToQuarterNote
	// float TickToQuarterNote(float InTick);                                                                                   // [0xb59dae8] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/HarmonixMidi.MusicalTickFunctionLibrary.QuarterNoteToTick
	// float QuarterNoteToTick(float InQuarterNote);                                                                            // [0xb59da64] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/HarmonixMidi.MusicalTickFunctionLibrary.GetTicksPerQuarterNoteInt
	// int32_t GetTicksPerQuarterNoteInt();                                                                                     // [0xb59d84c] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/HarmonixMidi.MusicalTickFunctionLibrary.GetTicksPerQuarterNote
	// float GetTicksPerQuarterNote();                                                                                          // [0xb59d834] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/HarmonixMidi.MusicalTickFunctionLibrary.GetQuarterNotesPerTick
	// float GetQuarterNotesPerTick();                                                                                          // [0xb59d81c] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Struct /Script/HarmonixMidi.MusicTimestamp
/// Size: 0x0008 (0x000000 - 0x000008)
class FMusicTimestamp : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(int32_t)                                   Bar                                                         OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(float)                                     Beat                                                        OFFSET(get<float>, {0x4, 4, 0, 0})
};

/// Struct /Script/HarmonixMidi.MidiSongPos
/// Size: 0x0040 (0x000000 - 0x000040)
class FMidiSongPos : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(float)                                     SecondsFromBarOne                                           OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     SecondsIncludingCountIn                                     OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   TimeSigNumerator                                            OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   TimeSigDenominator                                          OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	DMember(float)                                     Tempo                                                       OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     BarsIncludingCountIn                                        OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     BeatsIncludingCountIn                                       OFFSET(get<float>, {0x18, 4, 0, 0})
	CMember(EMusicalBeatType)                          BeatType                                                    OFFSET(get<T>, {0x1C, 1, 0, 0})
	SMember(FMusicTimestamp)                           Timestamp                                                   OFFSET(getStruct<T>, {0x20, 8, 0, 0})
};

/// Struct /Script/HarmonixMidi.TimeSignature
/// Size: 0x0004 (0x000000 - 0x000004)
class FTimeSignature : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(int16_t)                                   Numerator                                                   OFFSET(get<int16_t>, {0x0, 2, 0, 0})
	DMember(int16_t)                                   Denominator                                                 OFFSET(get<int16_t>, {0x2, 2, 0, 0})
};

/// Struct /Script/HarmonixMidi.MusicMapTimespanBase
/// Size: 0x0008 (0x000000 - 0x000008)
class FMusicMapTimespanBase : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(int32_t)                                   StartTick                                                   OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   LengthTicks                                                 OFFSET(get<int32_t>, {0x4, 4, 0, 0})
};

/// Struct /Script/HarmonixMidi.TimeSignaturePoint
/// Size: 0x000C (0x000008 - 0x000014)
class FTimeSignaturePoint : public FMusicMapTimespanBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	DMember(int32_t)                                   BarIndex                                                    OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   BeatIndex                                                   OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	SMember(FTimeSignature)                            TimeSignature                                               OFFSET(getStruct<T>, {0x10, 4, 0, 0})
};

/// Struct /Script/HarmonixMidi.BarMap
/// Size: 0x0018 (0x000000 - 0x000018)
class FBarMap : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(int32_t)                                   StartBar                                                    OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   TicksPerQuarterNote                                         OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	CMember(TArray<FTimeSignaturePoint>)               Points                                                      OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/HarmonixMidi.BeatMapPoint
/// Size: 0x0008 (0x000008 - 0x000010)
class FBeatMapPoint : public FMusicMapTimespanBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(int32_t)                                   PulseBar                                                    OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	CMember(EMusicalBeatType)                          Type                                                        OFFSET(get<T>, {0xC, 1, 0, 0})
};

/// Struct /Script/HarmonixMidi.PulseBar
/// Size: 0x0010 (0x000000 - 0x000010)
class FPulseBar : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(int32_t)                                   StartTick                                                   OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   LengthTicks                                                 OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   FirstIncludedBeatIndex                                      OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   LastIncludedBeatIndex                                       OFFSET(get<int32_t>, {0xC, 4, 0, 0})
};

/// Struct /Script/HarmonixMidi.BeatMap
/// Size: 0x0028 (0x000000 - 0x000028)
class FBeatMap : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(int32_t)                                   TicksPerQuarterNote                                         OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	CMember(TArray<FBeatMapPoint>)                     Points                                                      OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(TArray<FPulseBar>)                         Bars                                                        OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/HarmonixMidi.ChordMapPoint
/// Size: 0x0004 (0x000008 - 0x00000C)
class FChordMapPoint : public FMusicMapTimespanBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x8, 4, 0, 0})
};

/// Struct /Script/HarmonixMidi.ChordProgressionMap
/// Size: 0x0020 (0x000000 - 0x000020)
class FChordProgressionMap : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(int32_t)                                   TicksPerQuarterNote                                         OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	CMember(TArray<FChordMapPoint>)                    Points                                                      OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/HarmonixMidi.MidiEvent
/// Size: 0x0008 (0x000000 - 0x000008)
class FMidiEvent : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(int32_t)                                   Tick                                                        OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	SMember(FMidiMsg)                                  Message                                                     OFFSET(getStruct<T>, {0x4, 4, 0, 0})
};

/// Struct /Script/HarmonixMidi.MidiMsg
/// Size: 0x0004 (0x000000 - 0x000004)
class FMidiMsg : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
};

/// Struct /Script/HarmonixMidi.MidiFileData
/// Size: 0x00E8 (0x000000 - 0x0000E8)
class FMidiFileData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
	SMember(FString)                                   MidiFileName                                                OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	DMember(int32_t)                                   TicksPerQuarterNote                                         OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	SMember(FSongMaps)                                 SongMaps                                                    OFFSET(getStruct<T>, {0x18, 192, 0, 0})
	CMember(TArray<FMidiTrack>)                        Tracks                                                      OFFSET(get<T>, {0xD8, 16, 0, 0})
};

/// Struct /Script/HarmonixMidi.MidiTrack
/// Size: 0x0028 (0x000000 - 0x000028)
class FMidiTrack : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(TArray<FMidiEvent>)                        Events                                                      OFFSET(get<T>, {0x0, 16, 0, 0})
	DMember(bool)                                      Sorted                                                      OFFSET(get<bool>, {0x10, 1, 0, 0})
	DMember(int32_t)                                   PrimaryMidiChannel                                          OFFSET(get<int32_t>, {0x14, 4, 0, 0})
	CMember(TArray<FString>)                           Strings                                                     OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/HarmonixMidi.SongMaps
/// Size: 0x00C0 (0x000000 - 0x0000C0)
class FSongMaps : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	DMember(int32_t)                                   TicksPerQuarterNote                                         OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	SMember(FTempoMap)                                 TempoMap                                                    OFFSET(getStruct<T>, {0x8, 32, 0, 0})
	SMember(FBarMap)                                   BarMap                                                      OFFSET(getStruct<T>, {0x28, 24, 0, 0})
	SMember(FBeatMap)                                  BeatMap                                                     OFFSET(getStruct<T>, {0x40, 40, 0, 0})
	SMember(FSectionMap)                               SectionMap                                                  OFFSET(getStruct<T>, {0x68, 24, 0, 0})
	SMember(FChordProgressionMap)                      ChordMap                                                    OFFSET(getStruct<T>, {0x80, 32, 0, 0})
	CMember(TArray<FString>)                           TrackNames                                                  OFFSET(get<T>, {0xA0, 16, 0, 0})
	SMember(FSongLengthData)                           LengthData                                                  OFFSET(getStruct<T>, {0xB0, 12, 0, 0})
};

/// Struct /Script/HarmonixMidi.SongLengthData
/// Size: 0x000C (0x000000 - 0x00000C)
class FSongLengthData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(int32_t)                                   LengthTicks                                                 OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(float)                                     LengthFractionalBars                                        OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   LastTick                                                    OFFSET(get<int32_t>, {0x8, 4, 0, 0})
};

/// Struct /Script/HarmonixMidi.SectionMap
/// Size: 0x0018 (0x000000 - 0x000018)
class FSectionMap : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(int32_t)                                   TicksPerQuarterNote                                         OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	CMember(TArray<FSongSection>)                      Points                                                      OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/HarmonixMidi.SongSection
/// Size: 0x0010 (0x000008 - 0x000018)
class FSongSection : public FMusicMapTimespanBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FString)                                   Name                                                        OFFSET(getStruct<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/HarmonixMidi.TempoMap
/// Size: 0x0020 (0x000000 - 0x000020)
class FTempoMap : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(int32_t)                                   TicksPerQuarterNote                                         OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	CMember(TArray<FTempoInfoPoint>)                   Points                                                      OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/HarmonixMidi.TempoInfoPoint
/// Size: 0x0008 (0x000008 - 0x000010)
class FTempoInfoPoint : public FMusicMapTimespanBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(float)                                     Ms                                                          OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   MidiTempo                                                   OFFSET(get<int32_t>, {0xC, 4, 0, 0})
};

/// Struct /Script/HarmonixMidi.MusicalTimeSpan
/// Size: 0x0010 (0x000000 - 0x000010)
class FMusicalTimeSpan : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(EMusicTimeSpanLengthUnits)                 LengthUnits                                                 OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(int32_t)                                   Length                                                      OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	CMember(EMusicTimeSpanOffsetUnits)                 OffsetUnits                                                 OFFSET(get<T>, {0x8, 1, 0, 0})
	DMember(int32_t)                                   Offset                                                      OFFSET(get<int32_t>, {0xC, 4, 0, 0})
};

/// Struct /Script/HarmonixMidi.MidiNote
/// Size: 0x0001 (0x000000 - 0x000001)
class FMidiNote : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
	DMember(char)                                      NoteNumber                                                  OFFSET(get<char>, {0x0, 1, 0, 0})
};

/// Enum /Script/HarmonixMidi.EMusicalBeatType
/// Size: 0x04
enum class EMusicalBeatType : uint8_t
{
	EMusicalBeatType__Downbeat                                                       = 0,
	EMusicalBeatType__Strong                                                         = 1,
	EMusicalBeatType__Normal                                                         = 2,
	EMusicalBeatType__EMusicalBeatType_MAX                                           = 3
};

/// Enum /Script/HarmonixMidi.EMusicTimeSpanOffsetUnits
/// Size: 0x19
enum class EMusicTimeSpanOffsetUnits : uint8_t
{
	EMusicTimeSpanOffsetUnits__Ms                                                    = 0,
	EMusicTimeSpanOffsetUnits__Bars                                                  = 1,
	EMusicTimeSpanOffsetUnits__Beats                                                 = 2,
	EMusicTimeSpanOffsetUnits__ThirtySecondNotes                                     = 3,
	EMusicTimeSpanOffsetUnits__SixteenthNotes                                        = 4,
	EMusicTimeSpanOffsetUnits__EighthNotes                                           = 5,
	EMusicTimeSpanOffsetUnits__QuarterNotes                                          = 6,
	EMusicTimeSpanOffsetUnits__HalfNotes                                             = 7,
	EMusicTimeSpanOffsetUnits__WholeNotes                                            = 8,
	EMusicTimeSpanOffsetUnits__DottedSixteenthNotes                                  = 9,
	EMusicTimeSpanOffsetUnits__DottedEighthNotes                                     = 10,
	EMusicTimeSpanOffsetUnits__DottedQuarterNotes                                    = 11,
	EMusicTimeSpanOffsetUnits__DottedHalfNotes                                       = 12,
	EMusicTimeSpanOffsetUnits__DottedWholeNotes                                      = 13,
	EMusicTimeSpanOffsetUnits__SixteenthNoteTriplets                                 = 14,
	EMusicTimeSpanOffsetUnits__EighthNoteTriplets                                    = 15,
	EMusicTimeSpanOffsetUnits__QuarterNoteTriplets                                   = 16,
	EMusicTimeSpanOffsetUnits__HalfNoteTriplets                                      = 17,
	EMusicTimeSpanOffsetUnits__EMusicTimeSpanOffsetUnits_MAX                         = 18
};

/// Enum /Script/HarmonixMidi.EMusicTimeSpanLengthUnits
/// Size: 0x18
enum class EMusicTimeSpanLengthUnits : uint8_t
{
	EMusicTimeSpanLengthUnits__Bars                                                  = 0,
	EMusicTimeSpanLengthUnits__Beats                                                 = 1,
	EMusicTimeSpanLengthUnits__ThirtySecondNotes                                     = 2,
	EMusicTimeSpanLengthUnits__SixteenthNotes                                        = 3,
	EMusicTimeSpanLengthUnits__EighthNotes                                           = 4,
	EMusicTimeSpanLengthUnits__QuarterNotes                                          = 5,
	EMusicTimeSpanLengthUnits__HalfNotes                                             = 6,
	EMusicTimeSpanLengthUnits__WholeNotes                                            = 7,
	EMusicTimeSpanLengthUnits__DottedSixteenthNotes                                  = 8,
	EMusicTimeSpanLengthUnits__DottedEighthNotes                                     = 9,
	EMusicTimeSpanLengthUnits__DottedQuarterNotes                                    = 10,
	EMusicTimeSpanLengthUnits__DottedHalfNotes                                       = 11,
	EMusicTimeSpanLengthUnits__DottedWholeNotes                                      = 12,
	EMusicTimeSpanLengthUnits__SixteenthNoteTriplets                                 = 13,
	EMusicTimeSpanLengthUnits__EighthNoteTriplets                                    = 14,
	EMusicTimeSpanLengthUnits__QuarterNoteTriplets                                   = 15,
	EMusicTimeSpanLengthUnits__HalfNoteTriplets                                      = 16,
	EMusicTimeSpanLengthUnits__EMusicTimeSpanLengthUnits_MAX                         = 17
};

/// Enum /Script/HarmonixMidi.EMidiFileQuantizeDirection
/// Size: 0x04
enum class EMidiFileQuantizeDirection : uint8_t
{
	EMidiFileQuantizeDirection__Nearest                                              = 0,
	EMidiFileQuantizeDirection__Up                                                   = 1,
	EMidiFileQuantizeDirection__Down                                                 = 2,
	EMidiFileQuantizeDirection__EMidiFileQuantizeDirection_MAX                       = 3
};

/// Enum /Script/HarmonixMidi.EMidiClockSubdivisionQuantization
/// Size: 0x19
enum class EMidiClockSubdivisionQuantization : uint8_t
{
	EMidiClockSubdivisionQuantization__Bar                                           = 0,
	EMidiClockSubdivisionQuantization__Beat                                          = 1,
	EMidiClockSubdivisionQuantization__ThirtySecondNote                              = 2,
	EMidiClockSubdivisionQuantization__SixteenthNote                                 = 3,
	EMidiClockSubdivisionQuantization__EighthNote                                    = 4,
	EMidiClockSubdivisionQuantization__QuarterNote                                   = 5,
	EMidiClockSubdivisionQuantization__HalfNote                                      = 6,
	EMidiClockSubdivisionQuantization__WholeNote                                     = 7,
	EMidiClockSubdivisionQuantization__DottedSixteenthNote                           = 8,
	EMidiClockSubdivisionQuantization__DottedEighthNote                              = 9,
	EMidiClockSubdivisionQuantization__DottedQuarterNote                             = 10,
	EMidiClockSubdivisionQuantization__DottedHalfNote                                = 11,
	EMidiClockSubdivisionQuantization__DottedWholeNote                               = 12,
	EMidiClockSubdivisionQuantization__SixteenthNoteTriplet                          = 13,
	EMidiClockSubdivisionQuantization__EighthNoteTriplet                             = 14,
	EMidiClockSubdivisionQuantization__QuarterNoteTriplet                            = 15,
	EMidiClockSubdivisionQuantization__HalfNoteTriplet                               = 16,
	EMidiClockSubdivisionQuantization__None                                          = 19,
	EMidiClockSubdivisionQuantization__EMidiClockSubdivisionQuantization_MAX         = 20
};

