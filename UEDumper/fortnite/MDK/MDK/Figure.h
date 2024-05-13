
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: ControlRig
/// dependency: CoreUObject
/// dependency: Engine

/// Class /FigureCosmetics/Figure/_Figure_Core/Rig/Data/FaceRegistration/BeardRegistration/BP_FigureBeardRegistration.BP_FigureBeardRegistration_C
/// Size: 0x0043 (0x000030 - 0x000073)
class UBP_FigureBeardRegistration_C : public UPrimaryDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 115;

public:
	CMember(TArray<int32_t>)                           BeardPoses                                                  OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(TArray<int32_t>)                           BeardBeanPoses                                              OFFSET(get<T>, {0x40, 16, 0, 0})
	CMember(TArray<FTransform>)                        BeardBean                                                   OFFSET(get<T>, {0x50, 16, 0, 0})
	CMember(TArray<FTransform>)                        Beard                                                       OFFSET(get<T>, {0x60, 16, 0, 0})
	DMember(bool)                                      Transform_Beard                                             OFFSET(get<bool>, {0x70, 1, 0, 0})
	DMember(bool)                                      Scale_Bean                                                  OFFSET(get<bool>, {0x71, 1, 0, 0})
	DMember(bool)                                      Transform_Bean                                              OFFSET(get<bool>, {0x72, 1, 0, 0})
};

/// Class /FigureCosmetics/Figure/_Figure_Core/Rig/Data/CharacterAcc/BP_Figure_CharacterAccUserData.BP_Figure_CharacterAccUserData_C
/// Size: 0x0040 (0x000030 - 0x000070)
class UBP_Figure_CharacterAccUserData_C : public UPrimaryDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	CMember(TArray<FName>)                             Character_Accent_Registration                               OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(TArray<FVector>)                           Character_Accent_Initial                                    OFFSET(get<T>, {0x40, 16, 0, 0})
	CMember(TArray<FFigure_PushAwayControl_Struct>)    Spawn_Push_Away_Control                                     OFFSET(get<T>, {0x50, 16, 0, 0})
	CMember(TArray<bool>)                              CharacterAccent_Anim_Override                               OFFSET(get<T>, {0x60, 16, 0, 0})
};

/// Class /FigureCosmetics/Figure/_Figure_Core/Rig/Data/FaceRegistration/MouthRegistration/BP_FigureMouthRegistration.BP_FigureMouthRegistration_C
/// Size: 0x0050 (0x000030 - 0x000080)
class UBP_FigureMouthRegistration_C : public UPrimaryDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	CMember(TArray<FTransform>)                        MouthRegistration01                                         OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(TArray<FTransform>)                        MouthRegistration02                                         OFFSET(get<T>, {0x40, 16, 0, 0})
	CMember(TArray<FTransform>)                        MouthRegistration03                                         OFFSET(get<T>, {0x50, 16, 0, 0})
	CMember(TArray<FTransform>)                        MouthRegistration04                                         OFFSET(get<T>, {0x60, 16, 0, 0})
	CMember(TArray<FTransform>)                        MouthRegistration05                                         OFFSET(get<T>, {0x70, 16, 0, 0})
};

/// Struct /FigureCosmetics/Figure/_Figure_Core/Rig/Data/CharacterAcc/Figure_PushAwayControl_Struct.Figure_PushAwayControl_Struct
/// Size: 0x0150 (0x000000 - 0x000150)
class FFigure_PushAwayControl_Struct : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:
	SMember(FRigElementKey)                            Affector_2_0F932BFA4FD7345127F934B9413237B3                 OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	SMember(FTransform)                                AffectorOffset_5_599FE47240583AD027829FBF112F6535           OFFSET(getStruct<T>, {0x10, 96, 0, 0})
	DMember(double)                                    InnerRadius_8_917B22284DAEE1BBD88B7B83290F3986              OFFSET(get<double>, {0x70, 8, 0, 0})
	DMember(double)                                    Radius_10_0EDB5CC245EAF1283DBF25AC54A9DD76                  OFFSET(get<double>, {0x78, 8, 0, 0})
	DMember(double)                                    OutterRadius_12_DAEDB4B14711B5DBC7B148BEB0E6ECDB            OFFSET(get<double>, {0x80, 8, 0, 0})
	DMember(double)                                    TranslateMultiplier_14_1EF925E44F205CD825FB4A9449D399D6     OFFSET(get<double>, {0x88, 8, 0, 0})
	DMember(double)                                    RotateMultiplier_16_99E3F7034B9EE85B2D6085BF24E4BCE9        OFFSET(get<double>, {0x90, 8, 0, 0})
	DMember(double)                                    ScaleUMultiplier_18_B3291BED4BAA082AB5582E948F242433        OFFSET(get<double>, {0x98, 8, 0, 0})
	DMember(double)                                    ScaleVMultiplier_20_775F7EA94B19B923A837E288EA29402F        OFFSET(get<double>, {0xA0, 8, 0, 0})
	DMember(double)                                    OuterTranslateMultiplier_25_1211C9294DF099D3B75B9B8E22050470 OFFSET(get<double>, {0xA8, 8, 0, 0})
	DMember(double)                                    OuterRotateMultiplier_26_ED955A2A412C8CEE32E2859BC05C235F   OFFSET(get<double>, {0xB0, 8, 0, 0})
	DMember(double)                                    OuterScaleUMultiplier_28_0CF915C54896A4E25EA294828EF2362A   OFFSET(get<double>, {0xB8, 8, 0, 0})
	DMember(double)                                    OuterScaleVMultiplier_30_4FEAAF224A35828D6F1EE2AD379FA0E5   OFFSET(get<double>, {0xC0, 8, 0, 0})
	SMember(FTransform)                                ScaleOffsetfromChild_33_84F9356748F26B1DFB0FDDA3A97B15DF    OFFSET(getStruct<T>, {0xD0, 96, 0, 0})
	SMember(FVector)                                   InitialCords_37_C80DCD7E41F3C6BA7F1F9F8002AC2EF9            OFFSET(getStruct<T>, {0x130, 24, 0, 0})
	SMember(FRigElementKey)                            DrivenControl_40_C18ED7444157F3A0F3182D9ACA8188B8           OFFSET(getStruct<T>, {0x148, 8, 0, 0})
};

