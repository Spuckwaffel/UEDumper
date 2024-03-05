#include "TextureCreator.h"
#include "WICTextureLoader/WICTextureLoader.h"

#include "logo.h"
#include "warninglogo.h"
#include "Frontend/IGHelper.h"

#define BAD_HR(hr) if(FAILED(hr)) { bSuccess = false; return;}

#define BAD_HR0(hr) if(FAILED(hr)) { bSuccess = false; return nullptr;}

TextureCreator::TextureCreator()
{

}

void TextureCreator::createDefaultTextures()
{
    createTexture(warningLogoData, sizeof(warningLogoData), "warninglogo");
    createTexture(logoData, sizeof(logoData), "logo");
}

ID3D11ShaderResourceView* TextureCreator::getTexture(const std::string& description)
{
    if (textureMap.contains(description))
        return textureMap[description];

    return nullptr;
}

ID3D11ShaderResourceView* TextureCreator::createTexture(const unsigned char* imageData, DWORD size, const std::string& description)
{
    if (textureMap.contains(description))
        return textureMap[description];

    ID3D11ShaderResourceView* view;
    CreateWICTextureFromMemory(IGHelper::getGPd3dDevice(), nullptr, imageData, size, nullptr, &view);

    textureMap.insert(std::pair(description, view));

    return view;
}

bool TextureCreator::success()
{
    return bSuccess;
}
