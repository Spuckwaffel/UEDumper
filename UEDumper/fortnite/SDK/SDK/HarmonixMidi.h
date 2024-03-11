
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

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

/// Struct /Script/HarmonixMidi.MusicMapTimespanBase
/// Size: 0x0008 (0x000000 - 0x000008)
struct FMusicMapTimespanBase
{ 
	int32_t                                            StartTick;                                                  // 0x0000   (0x0004)  
	int32_t                                            LengthTicks;                                                // 0x0004   (0x0004)  
};

/// Struct /Script/HarmonixMidi.TempoInfoPoint
/// Size: 0x0008 (0x000008 - 0x000010)
struct FTempoInfoPoint : FMusicMapTimespanBase
{ 
	float                                              Ms;                                                         // 0x0008   (0x0004)  
	int32_t                                            MidiTempo;                                                  // 0x000C   (0x0004)  
};

/// Struct /Script/HarmonixMidi.TempoMap
/// Size: 0x0020 (0x000000 - 0x000020)
struct FTempoMap
{ 
	int32_t                                            TicksPerQuarterNote;                                        // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	TArray<FTempoInfoPoint>                            Points;                                                     // 0x0010   (0x0010)  
};

/// Struct /Script/HarmonixMidi.TimeSignature
/// Size: 0x0004 (0x000000 - 0x000004)
struct FTimeSignature
{ 
	int16_t                                            Numerator;                                                  // 0x0000   (0x0002)  
	int16_t                                            Denominator;                                                // 0x0002   (0x0002)  
};

/// Struct /Script/HarmonixMidi.TimeSignaturePoint
/// Size: 0x000C (0x000008 - 0x000014)
struct FTimeSignaturePoint : FMusicMapTimespanBase
{ 
	int32_t                                            BarIndex;                                                   // 0x0008   (0x0004)  
	int32_t                                            BeatIndex;                                                  // 0x000C   (0x0004)  
	FTimeSignature                                     TimeSignature;                                              // 0x0010   (0x0004)  
};

/// Struct /Script/HarmonixMidi.BarMap
/// Size: 0x0018 (0x000000 - 0x000018)
struct FBarMap
{ 
	int32_t                                            StartBar;                                                   // 0x0000   (0x0004)  
	int32_t                                            TicksPerQuarterNote;                                        // 0x0004   (0x0004)  
	TArray<FTimeSignaturePoint>                        Points;                                                     // 0x0008   (0x0010)  
};

/// Struct /Script/HarmonixMidi.BeatMapPoint
/// Size: 0x0008 (0x000008 - 0x000010)
struct FBeatMapPoint : FMusicMapTimespanBase
{ 
	int32_t                                            PulseBar;                                                   // 0x0008   (0x0004)  
	EMusicalBeatType                                   Type;                                                       // 0x000C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x000D   (0x0003)  MISSED
};

/// Struct /Script/HarmonixMidi.PulseBar
/// Size: 0x0010 (0x000000 - 0x000010)
struct FPulseBar
{ 
	int32_t                                            StartTick;                                                  // 0x0000   (0x0004)  
	int32_t                                            LengthTicks;                                                // 0x0004   (0x0004)  
	int32_t                                            FirstIncludedBeatIndex;                                     // 0x0008   (0x0004)  
	int32_t                                            LastIncludedBeatIndex;                                      // 0x000C   (0x0004)  
};

/// Struct /Script/HarmonixMidi.BeatMap
/// Size: 0x0028 (0x000000 - 0x000028)
struct FBeatMap
{ 
	int32_t                                            TicksPerQuarterNote;                                        // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	TArray<FBeatMapPoint>                              Points;                                                     // 0x0008   (0x0010)  
	TArray<FPulseBar>                                  Bars;                                                       // 0x0018   (0x0010)  
};

/// Struct /Script/HarmonixMidi.SongSection
/// Size: 0x0010 (0x000008 - 0x000018)
struct FSongSection : FMusicMapTimespanBase
{ 
	SDK_UNDEFINED(16,11890) /* FString */              __um(Name);                                                 // 0x0008   (0x0010)  
};

/// Struct /Script/HarmonixMidi.SectionMap
/// Size: 0x0018 (0x000000 - 0x000018)
struct FSectionMap
{ 
	int32_t                                            TicksPerQuarterNote;                                        // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	TArray<FSongSection>                               Points;                                                     // 0x0008   (0x0010)  
};

/// Struct /Script/HarmonixMidi.ChordMapPoint
/// Size: 0x0004 (0x000008 - 0x00000C)
struct FChordMapPoint : FMusicMapTimespanBase
{ 
	FName                                              Name;                                                       // 0x0008   (0x0004)  
};

/// Struct /Script/HarmonixMidi.ChordProgressionMap
/// Size: 0x0020 (0x000000 - 0x000020)
struct FChordProgressionMap
{ 
	int32_t                                            TicksPerQuarterNote;                                        // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	TArray<FChordMapPoint>                             Points;                                                     // 0x0008   (0x0010)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0018   (0x0008)  MISSED
};

/// Struct /Script/HarmonixMidi.SongLengthData
/// Size: 0x000C (0x000000 - 0x00000C)
struct FSongLengthData
{ 
	int32_t                                            LengthTicks;                                                // 0x0000   (0x0004)  
	int32_t                                            LengthBars;                                                 // 0x0004   (0x0004)  
	int32_t                                            LastTick;                                                   // 0x0008   (0x0004)  
};

/// Struct /Script/HarmonixMidi.SongMaps
/// Size: 0x00C0 (0x000000 - 0x0000C0)
struct FSongMaps
{ 
	int32_t                                            TicksPerQuarterNote;                                        // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	FTempoMap                                          TempoMap;                                                   // 0x0008   (0x0020)  
	FBarMap                                            BarMap;                                                     // 0x0028   (0x0018)  
	FBeatMap                                           BeatMap;                                                    // 0x0040   (0x0028)  
	FSectionMap                                        SectionMap;                                                 // 0x0068   (0x0018)  
	FChordProgressionMap                               ChordMap;                                                   // 0x0080   (0x0020)  
	SDK_UNDEFINED(16,11891) /* TArray<FString> */      __um(TrackNames);                                           // 0x00A0   (0x0010)  
	FSongLengthData                                    LengthData;                                                 // 0x00B0   (0x000C)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x00BC   (0x0004)  MISSED
};

/// Struct /Script/HarmonixMidi.MidiMsg
/// Size: 0x0004 (0x000000 - 0x000004)
struct FMidiMsg
{ 
	unsigned char                                      UnknownData00_2[0x4];                                       // 0x0000   (0x0004)  MISSED
};

/// Struct /Script/HarmonixMidi.MidiEvent
/// Size: 0x0008 (0x000000 - 0x000008)
struct FMidiEvent
{ 
	int32_t                                            Tick;                                                       // 0x0000   (0x0004)  
	FMidiMsg                                           Message;                                                    // 0x0004   (0x0004)  
};

/// Struct /Script/HarmonixMidi.MidiTrack
/// Size: 0x0028 (0x000000 - 0x000028)
struct FMidiTrack
{ 
	TArray<FMidiEvent>                                 Events;                                                     // 0x0000   (0x0010)  
	bool                                               Sorted;                                                     // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0011   (0x0003)  MISSED
	int32_t                                            PrimaryMidiChannel;                                         // 0x0014   (0x0004)  
	SDK_UNDEFINED(16,11892) /* TArray<FString> */      __um(Strings);                                              // 0x0018   (0x0010)  
};

/// Struct /Script/HarmonixMidi.MidiFileData
/// Size: 0x00F0 (0x000000 - 0x0000F0)
struct FMidiFileData
{ 
	SDK_UNDEFINED(16,11893) /* FString */              __um(MidiFileName);                                         // 0x0000   (0x0010)  
	int32_t                                            TicksPerQuarterNote;                                        // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0014   (0x0004)  MISSED
	FSongMaps                                          SongMaps;                                                   // 0x0018   (0x00C0)  
	TArray<FMidiTrack>                                 Tracks;                                                     // 0x00D8   (0x0010)  
	int32_t                                            LastEventTick;                                              // 0x00E8   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x00EC   (0x0004)  MISSED
};

/// Class /Script/HarmonixMidi.MidiFile
/// Size: 0x0110 (0x000028 - 0x000138)
class UMidiFile : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x30];                                      // 0x0000   (0x0030)  MISSED
	bool                                               bLengthRoundedDown;                                         // 0x0030   (0x0001)  
	bool                                               bLengthRoundedUp;                                           // 0x0031   (0x0001)  
	bool                                               bLengthRoundedToNearest;                                    // 0x0032   (0x0001)  
	unsigned char                                      UnknownData01_5[0x5];                                       // 0x0033   (0x0005)  MISSED
	FMidiFileData                                      TheMidiData;                                                // 0x0038   (0x00F0)  
	unsigned char                                      UnknownData02_6[0x10];                                      // 0x0128   (0x0010)  MISSED
};

/// Class /Script/HarmonixMidi.MidiNoteFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UMidiNoteFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/HarmonixMidi.MidiNoteFunctionLibrary.MidiNoteToInt
	// int32_t MidiNoteToInt(FMidiNote& InMidiNote);                                                                         // [0xa3e5f14] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/HarmonixMidi.MidiNoteFunctionLibrary.MidiNoteToByte
	// char MidiNoteToByte(FMidiNote& InMidiNote);                                                                           // [0xa3e5e8c] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/HarmonixMidi.MidiNoteFunctionLibrary.MakeLiteralMidiNote
	// FMidiNote MakeLiteralMidiNote(FMidiNote Value);                                                                       // [0xa3e5d64] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/HarmonixMidi.MidiNoteFunctionLibrary.IntToMidiNote
	// FMidiNote IntToMidiNote(int32_t inInt);                                                                               // [0xa3e5cec] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/HarmonixMidi.MidiNoteFunctionLibrary.GetMinNoteVelocity
	// char GetMinNoteVelocity();                                                                                            // [0x3219f08] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/HarmonixMidi.MidiNoteFunctionLibrary.GetMinNoteNumber
	// char GetMinNoteNumber();                                                                                              // [0x3219f08] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/HarmonixMidi.MidiNoteFunctionLibrary.GetMinMidiNote
	// FMidiNote GetMinMidiNote();                                                                                           // [0x3219f08] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/HarmonixMidi.MidiNoteFunctionLibrary.GetMaxNumNotes
	// int32_t GetMaxNumNotes();                                                                                             // [0xa3e5c8c] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/HarmonixMidi.MidiNoteFunctionLibrary.GetMaxNoteVelocity
	// char GetMaxNoteVelocity();                                                                                            // [0xa3e5c78] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/HarmonixMidi.MidiNoteFunctionLibrary.GetMaxNoteNumber
	// char GetMaxNoteNumber();                                                                                              // [0xa3e5c78] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/HarmonixMidi.MidiNoteFunctionLibrary.GetMaxMidiNote
	// FMidiNote GetMaxMidiNote();                                                                                           // [0xa3e5c78] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/HarmonixMidi.MidiNoteFunctionLibrary.ByteToMidiNote
	// FMidiNote ByteToMidiNote(char InByte);                                                                                // [0x8d2818c] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/HarmonixMidi.MusicalTickFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UMusicalTickFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/HarmonixMidi.MusicalTickFunctionLibrary.TickToQuarterNote
	// float TickToQuarterNote(float InTick);                                                                                // [0xa3e6020] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/HarmonixMidi.MusicalTickFunctionLibrary.QuarterNoteToTick
	// float QuarterNoteToTick(float InQuarterNote);                                                                         // [0xa3e5f9c] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/HarmonixMidi.MusicalTickFunctionLibrary.GetTicksPerQuarterNoteInt
	// int32_t GetTicksPerQuarterNoteInt();                                                                                  // [0xa3e5cd4] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/HarmonixMidi.MusicalTickFunctionLibrary.GetTicksPerQuarterNote
	// float GetTicksPerQuarterNote();                                                                                       // [0xa3e5cbc] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/HarmonixMidi.MusicalTickFunctionLibrary.GetQuarterNotesPerTick
	// float GetQuarterNotesPerTick();                                                                                       // [0xa3e5ca4] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Struct /Script/HarmonixMidi.MusicTimestamp
/// Size: 0x0008 (0x000000 - 0x000008)
struct FMusicTimestamp
{ 
	int32_t                                            Bar;                                                        // 0x0000   (0x0004)  
	float                                              Beat;                                                       // 0x0004   (0x0004)  
};

/// Struct /Script/HarmonixMidi.MidiSongPos
/// Size: 0x0040 (0x000000 - 0x000040)
struct FMidiSongPos
{ 
	float                                              SecondsFromBarOne;                                          // 0x0000   (0x0004)  
	float                                              SecondsIncludingCountIn;                                    // 0x0004   (0x0004)  
	int32_t                                            TimeSigNumerator;                                           // 0x0008   (0x0004)  
	int32_t                                            TimeSigDenominator;                                         // 0x000C   (0x0004)  
	float                                              Tempo;                                                      // 0x0010   (0x0004)  
	float                                              BarsIncludingCountIn;                                       // 0x0014   (0x0004)  
	float                                              BeatsIncludingCountIn;                                      // 0x0018   (0x0004)  
	EMusicalBeatType                                   BeatType;                                                   // 0x001C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x001D   (0x0003)  MISSED
	FMusicTimestamp                                    Timestamp;                                                  // 0x0020   (0x0008)  
	unsigned char                                      UnknownData01_6[0x18];                                      // 0x0028   (0x0018)  MISSED
};

/// Struct /Script/HarmonixMidi.MusicalTimeSpan
/// Size: 0x0010 (0x000000 - 0x000010)
struct FMusicalTimeSpan
{ 
	EMusicTimeSpanLengthUnits                          LengthUnits;                                                // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	int32_t                                            Length;                                                     // 0x0004   (0x0004)  
	EMusicTimeSpanOffsetUnits                          OffsetUnits;                                                // 0x0008   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0009   (0x0003)  MISSED
	int32_t                                            Offset;                                                     // 0x000C   (0x0004)  
};

/// Struct /Script/HarmonixMidi.MidiNote
/// Size: 0x0001 (0x000000 - 0x000001)
struct FMidiNote
{ 
	char                                               NoteNumber;                                                 // 0x0000   (0x0001)  
};

