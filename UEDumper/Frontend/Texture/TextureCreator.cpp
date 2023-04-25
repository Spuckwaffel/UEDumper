#include "TextureCreator.h"

#include "logo.h"

#define BAD_HR(hr) if(FAILED(hr)) { bSuccess = false; return;}

#define BAD_HR0(hr) if(FAILED(hr)) { bSuccess = false; return nullptr;}

TextureCreator::TextureCreator()
{
	HRESULT hr = CoCreateInstance(
		CLSID_WICImagingFactory, // rclsid: CLSID of the object to create
		nullptr, // pUnkOuter: nullptr for the default outer object
		CLSCTX_INPROC_SERVER, // dwClsContext: context for running code
		IID_IWICImagingFactory, // riid: interface identifier
		reinterpret_cast<LPVOID*>(&pWICFactory) // ppv: pointer to the created object
	);
	BAD_HR(hr);
}

void TextureCreator::createDefaultTextures()
{
    createTexture(logoData, sizeof(logoData), "logo");
}

ID3D11ShaderResourceView* TextureCreator::getTexture(const std::string& description)
{
    if (textureMap.contains(description))
        return textureMap[description];

    return nullptr;
}

ID3D11ShaderResourceView* TextureCreator::createTexture(unsigned char* imageData, DWORD size, const std::string& description)
{
    if (textureMap.contains(description))
        return textureMap[description];

    IWICStream* pWICStream = nullptr;
    HRESULT hr = pWICFactory->CreateStream(&pWICStream);

    BAD_HR0(hr);

	hr = pWICStream->InitializeFromMemory(imageData, size);

    if (FAILED(hr))
    {
        // Handle stream initialization failure
        pWICStream->Release();
        return nullptr;
    }

    IWICBitmapDecoder* pDecoder = nullptr;
    hr = pWICFactory->CreateDecoderFromStream(
        pWICStream,                 // pIStream: pointer to the initialized stream
        nullptr,                    // pguidVendor: vendor identifier
        WICDecodeMetadataCacheOnLoad,   // dwOptions: options for decoding
        &pDecoder                   // ppIDecoder: pointer to the created decoder
    );

    if (FAILED(hr))
    {
        // Handle decoder creation failure
        pWICStream->Release();
        return nullptr;
    }

    IWICBitmapFrameDecode* pFrame = nullptr;
    hr = pDecoder->GetFrame(0, &pFrame);
    if (FAILED(hr))
    {
        // Handle frame retrieval failure
        pDecoder->Release();
        pWICStream->Release();
        return nullptr;
    }

    UINT width, height;
    hr = pFrame->GetSize(&width, &height);
    if (FAILED(hr))
    {
        // Handle getting frame size failure
        pDecoder->Release();
        pWICStream->Release();
        return nullptr;
    }

    const UINT rowPitch = width * 4; // Assuming 32-bit RGBA format
    const UINT imageSize = rowPitch * height;

    BYTE* pData = new BYTE[imageSize];
    hr = pFrame->CopyPixels(nullptr, rowPitch, imageSize, pData);
    if (FAILED(hr))
    {
        delete[] pData;
        pFrame->Release();
        pDecoder->Release();
        pWICStream->Release();
        return nullptr;
    }

    D3D11_TEXTURE2D_DESC textureDesc;
    ZeroMemory(&textureDesc, sizeof(textureDesc));
    textureDesc.Width = width;
    textureDesc.Height = height;
    textureDesc.MipLevels = 1; // Only one mip level for a basic texture
    textureDesc.ArraySize = 1; // Only one texture in the array
    textureDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM; // Assuming 32-bit RGBA format
    textureDesc.SampleDesc.Count = 1; // No multisampling
    textureDesc.SampleDesc.Quality = 0;
    textureDesc.Usage = D3D11_USAGE_DEFAULT; // Default usage
    textureDesc.BindFlags = D3D11_BIND_SHADER_RESOURCE; // Texture will be bound as a shader resource
    textureDesc.CPUAccessFlags = 0; // No CPU access is required
    textureDesc.MiscFlags = 0;

    D3D11_SUBRESOURCE_DATA initData;
    ZeroMemory(&initData, sizeof(initData));
    initData.pSysMem = pData;
    initData.SysMemPitch = rowPitch;
    initData.SysMemSlicePitch = imageSize;

    ID3D11Texture2D* pTexture = nullptr;

    hr = IGHelper::getGPd3dDevice()->CreateTexture2D(&textureDesc, &initData, &pTexture);

    if (FAILED(hr))
    {
        delete[] pData;
        pFrame->Release();
        pDecoder->Release();
        pWICStream->Release();
        return nullptr;
    }

    ID3D11ShaderResourceView* pTextureView = nullptr;
    D3D11_SHADER_RESOURCE_VIEW_DESC srvDesc;
    ZeroMemory(&srvDesc, sizeof(srvDesc));
    srvDesc.Format = textureDesc.Format;
    srvDesc.ViewDimension = D3D11_SRV_DIMENSION_TEXTURE2D;
    srvDesc.Texture2D.MipLevels = textureDesc.MipLevels;
    srvDesc.Texture2D.MostDetailedMip = 0;

    hr = IGHelper::getGPd3dDevice()->CreateShaderResourceView(pTexture, &srvDesc, &pTextureView);


    if (FAILED(hr))
    {
        delete[] pData;
        pTexture->Release();
        pFrame->Release();
        pDecoder->Release();
        pWICStream->Release();
        return nullptr;
    }

    delete[] pData;
    pTexture->Release();
    pFrame->Release();
    pDecoder->Release();
    pWICStream->Release();

    textureMap.insert(std::pair(description, pTextureView));

    return pTextureView;
}

bool TextureCreator::success()
{
    return bSuccess;
}
