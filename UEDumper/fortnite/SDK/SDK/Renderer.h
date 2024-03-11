
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine

/// Enum /Script/Renderer.ESparseVolumeTexturePreviewAttribute
/// Size: 0x09
enum class ESparseVolumeTexturePreviewAttribute : uint8_t
{
	ESVTPA_AttributesA_R                                                             = 0,
	ESVTPA_AttributesA_G                                                             = 1,
	ESVTPA_AttributesA_B                                                             = 2,
	ESVTPA_AttributesA_A                                                             = 3,
	ESVTPA_AttributesB_R                                                             = 4,
	ESVTPA_AttributesB_G                                                             = 5,
	ESVTPA_AttributesB_B                                                             = 6,
	ESVTPA_AttributesB_A                                                             = 7,
	ESVTPA_MAX                                                                       = 8
};

/// Class /Script/Renderer.SparseVolumeTextureViewerComponent
/// Size: 0x0040 (0x000500 - 0x000540)
class USparseVolumeTextureViewerComponent : public UPrimitiveComponent
{ 
public:
	class USparseVolumeTexture*                        SparseVolumeTexturePreview;                                 // 0x0500   (0x0008)  
	float                                              Frame;                                                      // 0x0508   (0x0004)  
	float                                              FrameRate;                                                  // 0x050C   (0x0004)  
	bool                                               bPlaying : 1;                                               // 0x0510:0 (0x0001)  
	bool                                               bLooping : 1;                                               // 0x0510:1 (0x0001)  
	bool                                               bReversePlayback : 1;                                       // 0x0510:2 (0x0001)  
	bool                                               bBlockingStreamingRequests : 1;                             // 0x0510:3 (0x0001)  
	bool                                               bApplyPerFrameTransforms : 1;                               // 0x0510:4 (0x0001)  
	bool                                               bPivotAtCentroid : 1;                                       // 0x0510:5 (0x0001)  
	unsigned char                                      UnknownData00_4[0x3];                                       // 0x0511   (0x0003)  MISSED
	float                                              VoxelSize;                                                  // 0x0514   (0x0004)  
	SDK_UNDEFINED(1,15357) /* TEnumAsByte<ESparseVolumeTexturePreviewAttribute> */ __um(PreviewAttribute);         // 0x0518   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0519   (0x0003)  MISSED
	int32_t                                            MipLevel;                                                   // 0x051C   (0x0004)  
	float                                              Extinction;                                                 // 0x0520   (0x0004)  
	unsigned char                                      UnknownData02_6[0x1C];                                      // 0x0524   (0x001C)  MISSED
};

/// Class /Script/Renderer.SparseVolumeTextureViewer
/// Size: 0x0008 (0x000290 - 0x000298)
class ASparseVolumeTextureViewer : public AInfo
{ 
public:
	class USparseVolumeTextureViewerComponent*         SparseVolumeTextureViewerComponent;                         // 0x0290   (0x0008)  
};

