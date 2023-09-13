#pragma once

#include "stdafx.h"

#include <wincodec.h>

class TextureCreator
{
	static inline std::unordered_map<std::string, ID3D11ShaderResourceView*> textureMap;

	static inline IWICImagingFactory* pWICFactory;

	static inline bool bSuccess = false;

public:
	TextureCreator();

	static void createDefaultTextures();

	static ID3D11ShaderResourceView* getTexture(const std::string& description);

	static ID3D11ShaderResourceView* createTexture(const unsigned char* imageData, DWORD size, const std::string& description);

	static bool success();
};