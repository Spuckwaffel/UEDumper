
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: ControlRig
/// dependency: CoreUObject
/// dependency: Engine

/// Class /FigureCosmetics/Figure/_Figure_Core/Rig/Data/FaceRegistration/MouthRegistration/BP_FigureMouthRegistration.BP_FigureMouthRegistration_C
/// Size: 0x0050 (0x000030 - 0x000080)
class UBP_FigureMouthRegistration_C : public UPrimaryDataAsset
{ 
public:
	TArray<FTransform>                                 MouthRegistration01;                                        // 0x0030   (0x0010)  
	TArray<FTransform>                                 MouthRegistration02;                                        // 0x0040   (0x0010)  
	TArray<FTransform>                                 MouthRegistration03;                                        // 0x0050   (0x0010)  
	TArray<FTransform>                                 MouthRegistration04;                                        // 0x0060   (0x0010)  
	TArray<FTransform>                                 MouthRegistration05;                                        // 0x0070   (0x0010)  
};

/// Class /FigureCosmetics/Figure/_Figure_Core/Rig/Data/FaceRegistration/BeardRegistration/BP_FigureBeardRegistration.BP_FigureBeardRegistration_C
/// Size: 0x0043 (0x000030 - 0x000073)
class UBP_FigureBeardRegistration_C : public UPrimaryDataAsset
{ 
public:
	TArray<int32_t>                                    BeardPoses;                                                 // 0x0030   (0x0010)  
	TArray<int32_t>                                    BeardBeanPoses;                                             // 0x0040   (0x0010)  
	TArray<FTransform>                                 BeardBean;                                                  // 0x0050   (0x0010)  
	TArray<FTransform>                                 Beard;                                                      // 0x0060   (0x0010)  
	bool                                               Transform_Beard;                                            // 0x0070   (0x0001)  
	bool                                               Scale_Bean;                                                 // 0x0071   (0x0001)  
	bool                                               Transform_Bean;                                             // 0x0072   (0x0001)  
};

/// Struct /FigureCosmetics/Figure/_Figure_Core/Rig/Data/CharacterAcc/Figure_PushAwayControl_Struct.Figure_PushAwayControl_Struct
/// Size: 0x0150 (0x000000 - 0x000150)
struct FFigure_PushAwayControl_Struct
{ 
	FRigElementKey                                     Affector_2_0F932BFA4FD7345127F934B9413237B3;                // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         AffectorOffset_5_599FE47240583AD027829FBF112F6535;          // 0x0010   (0x0060)  
	double                                             InnerRadius_8_917B22284DAEE1BBD88B7B83290F3986;             // 0x0070   (0x0008)  
	double                                             Radius_10_0EDB5CC245EAF1283DBF25AC54A9DD76;                 // 0x0078   (0x0008)  
	double                                             OutterRadius_12_DAEDB4B14711B5DBC7B148BEB0E6ECDB;           // 0x0080   (0x0008)  
	double                                             TranslateMultiplier_14_1EF925E44F205CD825FB4A9449D399D6;    // 0x0088   (0x0008)  
	double                                             RotateMultiplier_16_99E3F7034B9EE85B2D6085BF24E4BCE9;       // 0x0090   (0x0008)  
	double                                             ScaleUMultiplier_18_B3291BED4BAA082AB5582E948F242433;       // 0x0098   (0x0008)  
	double                                             ScaleVMultiplier_20_775F7EA94B19B923A837E288EA29402F;       // 0x00A0   (0x0008)  
	double                                             OuterTranslateMultiplier_25_1211C9294DF099D3B75B9B8E22050470; // 0x00A8   (0x0008)  
	double                                             OuterRotateMultiplier_26_ED955A2A412C8CEE32E2859BC05C235F;  // 0x00B0   (0x0008)  
	double                                             OuterScaleUMultiplier_28_0CF915C54896A4E25EA294828EF2362A;  // 0x00B8   (0x0008)  
	double                                             OuterScaleVMultiplier_30_4FEAAF224A35828D6F1EE2AD379FA0E5;  // 0x00C0   (0x0008)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x00C8   (0x0008)  MISSED
	FTransform                                         ScaleOffsetfromChild_33_84F9356748F26B1DFB0FDDA3A97B15DF;   // 0x00D0   (0x0060)  
	FVector                                            InitialCords_37_C80DCD7E41F3C6BA7F1F9F8002AC2EF9;           // 0x0130   (0x0018)  
	FRigElementKey                                     DrivenControl_40_C18ED7444157F3A0F3182D9ACA8188B8;          // 0x0148   (0x0008)  
};

/// Class /FigureCosmetics/Figure/_Figure_Core/Rig/Data/CharacterAcc/BP_Figure_CharacterAccUserData.BP_Figure_CharacterAccUserData_C
/// Size: 0x0040 (0x000030 - 0x000070)
class UBP_Figure_CharacterAccUserData_C : public UPrimaryDataAsset
{ 
public:
	TArray<FName>                                      Character_Accent_Registration;                              // 0x0030   (0x0010)  
	TArray<FVector>                                    Character_Accent_Initial;                                   // 0x0040   (0x0010)  
	TArray<FFigure_PushAwayControl_Struct>             Spawn_Push_Away_Control;                                    // 0x0050   (0x0010)  
	TArray<bool>                                       CharacterAccent_Anim_Override;                              // 0x0060   (0x0010)  
};

