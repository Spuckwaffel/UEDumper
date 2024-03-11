#include "IGHelper.h"

#include <imgui_internal.h>

#include "resource.h"
#include "Fonts/arials.h"
#include "Fonts/InterFont.h"
#include "Fonts/fontAwesome.h"
#include "Fonts/fontAwesomeHelper.h"

//imgui related stuff to handle Window Messages
extern IMGUI_IMPL_API LRESULT ImGui_ImplWin32_WndProcHandler(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);

LRESULT WINAPI WndProc(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam)
{
    if (ImGui_ImplWin32_WndProcHandler(hWnd, msg, wParam, lParam))
        return true;

    switch (msg)
    {
    case WM_SIZE:
        if (IGHelper::getGPd3dDevice() != nullptr && wParam != SIZE_MINIMIZED)
        {
            IGHelper::cleanupRenderTarget();
            IGHelper::getSwapChain()->ResizeBuffers(0, (UINT)LOWORD(lParam), (UINT)HIWORD(lParam), DXGI_FORMAT_UNKNOWN, 0);
            IGHelper::createRenderTarget();
            IGHelper::setWindowSize(ImVec2(LOWORD(lParam), HIWORD(lParam)));
        }
        return 0;
    case WM_SYSCOMMAND:
        if ((wParam & 0xfff0) == SC_KEYMENU) // Disable ALT application menu
            return 0;
        break;
    case WM_DESTROY:
        ::PostQuitMessage(0);
        return 0;
    }
    return ::DefWindowProc(hWnd, msg, wParam, lParam);
}

void IGHelper::createRenderTarget()
{
    ID3D11Texture2D* pBackBuffer;
    gPSwapChain->GetBuffer(0, IID_PPV_ARGS(&pBackBuffer));
    gPd3dDevice->CreateRenderTargetView(pBackBuffer, nullptr, &gMainRenderTargetView);
    pBackBuffer->Release();
}

void IGHelper::cleanupRenderTarget()
{
    if (gMainRenderTargetView) { gMainRenderTargetView->Release(); gMainRenderTargetView = nullptr; }

}

void IGHelper::cleanupDeviceD3D()
{
    cleanupRenderTarget();
    if (gPSwapChain) { gPSwapChain->Release(); gPSwapChain = nullptr; }
    if (gPd3dDeviceContext) { gPd3dDeviceContext->Release(); gPd3dDeviceContext = nullptr; }
    if (gPd3dDevice) { gPd3dDevice->Release(); gPd3dDevice = nullptr; }
}

bool IGHelper::createDeviceD3D(const HWND hWnd)
{
    // Setup swap chain
    DXGI_SWAP_CHAIN_DESC sd;
    ZeroMemory(&sd, sizeof(sd));
    sd.BufferCount = 2;
    sd.BufferDesc.Width = 0;
    sd.BufferDesc.Height = 0;
    sd.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;
    sd.BufferDesc.RefreshRate.Numerator = 144;
    sd.BufferDesc.RefreshRate.Denominator = 1;
    sd.Flags = DXGI_SWAP_CHAIN_FLAG_ALLOW_MODE_SWITCH;
    sd.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;
    sd.OutputWindow = hWnd;
    sd.SampleDesc.Count = 1;
    sd.SampleDesc.Quality = 0;
    sd.Windowed = TRUE;
    sd.SwapEffect = DXGI_SWAP_EFFECT_DISCARD;

    UINT createDeviceFlags = 0;
    //createDeviceFlags |= D3D11_CREATE_DEVICE_DEBUG;
    D3D_FEATURE_LEVEL featureLevel;
    if (constexpr D3D_FEATURE_LEVEL featureLevelArray[2] = { D3D_FEATURE_LEVEL_11_0, D3D_FEATURE_LEVEL_10_0, }; 
        D3D11CreateDeviceAndSwapChain(nullptr, D3D_DRIVER_TYPE_HARDWARE, nullptr, createDeviceFlags, 
            featureLevelArray, 2, D3D11_SDK_VERSION, &sd, &gPSwapChain, &gPd3dDevice, &featureLevel, &gPd3dDeviceContext) != S_OK)
        return false;

    createRenderTarget();
    return true;
}

IGHelper::IGHelper(const LPCWSTR name, const bool applyDefaultStyle, const int sizeX, const int sizeY, const int x, const int y)
{
    HRESULT hr = CoInitializeEx(nullptr, COINIT_MULTITHREADED);
    if (FAILED(hr))
        exit(3);

	windowClass = { sizeof(WNDCLASSEX), CS_CLASSDC, WndProc, 0L, 0L, GetModuleHandle(nullptr), nullptr, nullptr, nullptr, nullptr, name, nullptr};

	::RegisterClassEx(&windowClass);

    hwnd = ::CreateWindow(windowClass.lpszClassName, name, WS_OVERLAPPEDWINDOW, x, y, sizeX, sizeY, NULL, NULL, windowClass.hInstance, NULL);
    
    windowSize = {static_cast<float>(sizeX), static_cast<float>(sizeY)};

    HICON hIcon = LoadIcon(windowClass.hInstance, MAKEINTRESOURCE(IDI_ICON1));  // Replace "IDI_MYICON" with your icon resource ID
    SendMessage(hwnd, WM_SETICON, ICON_BIG, (LPARAM)hIcon);
    SendMessage(hwnd, WM_SETICON, ICON_SMALL, (LPARAM)hIcon);

	if (!createDeviceD3D(hwnd))
	{
		cleanupDeviceD3D();
		::UnregisterClass(windowClass.lpszClassName, windowClass.hInstance);
		return;
	}

    // Show the window
    ::ShowWindow(hwnd, SW_SHOWDEFAULT);
    ::UpdateWindow(hwnd);

    IMGUI_CHECKVERSION();
    ImGui::CreateContext();
    const ImGuiIO& io = ImGui::GetIO();
    textFont = io.Fonts->AddFontFromMemoryCompressedTTF(InterFont_compressed_data, sizeof(InterFont_compressed_data), 22);
    ImFontConfig config;
    config.MergeMode = true;
    config.GlyphMinAdvanceX = 22.0f; // Use if you want to make the icon monospaced
    static constexpr ImWchar icon_ranges[] = { ICON_MIN_FA, ICON_MAX_FA, 0 };
    faFont = io.Fonts->AddFontFromMemoryCompressedTTF(fontAwesome_compressed_data, sizeof(fontAwesome_compressed_data), 20, &config, icon_ranges);
    titleFont = io.Fonts->AddFontFromMemoryCompressedTTF(InterFont_compressed_data, sizeof(InterFont_compressed_data), 35);
    smallFont = io.Fonts->AddFontFromMemoryCompressedTTF(InterFont_compressed_data, sizeof(InterFont_compressed_data), 18);
    consoleFont = io.Fonts->AddFontFromMemoryCompressedTTF(arials_compressed_data, sizeof(arials_compressed_data), 20);

    if (applyDefaultStyle) 
    {
        ImVec4* colors = ImGui::GetStyle().Colors;
        colors[ImGuiCol_Text] = ImVec4(1.00f, 1.00f, 1.00f, 1.00f);
        colors[ImGuiCol_TextDisabled] = ImVec4(0.50f, 0.50f, 0.50f, 1.00f);
        colors[ImGuiCol_WindowBg] = ImVec4(0.10f, 0.10f, 0.10f, 1.00f);
        colors[ImGuiCol_ChildBg] = ImVec4(0.09f, 0.09f, 0.09f, 1.00f);
        colors[ImGuiCol_PopupBg] = ImVec4(0.19f, 0.19f, 0.19f, 0.92f);
        colors[ImGuiCol_Border] = ImVec4(0.19f, 0.19f, 0.19f, 0.29f);
        colors[ImGuiCol_BorderShadow] = ImVec4(0.00f, 0.00f, 0.00f, 0.24f);
        colors[ImGuiCol_FrameBg] = ImVec4(0.05f, 0.05f, 0.05f, 0.54f);
        colors[ImGuiCol_FrameBgHovered] = ImVec4(0.19f, 0.19f, 0.19f, 0.54f);
        colors[ImGuiCol_FrameBgActive] = ImVec4(0.20f, 0.22f, 0.23f, 1.00f);
        colors[ImGuiCol_TitleBg] = ImVec4(0.00f, 0.00f, 0.00f, 1.00f);
        colors[ImGuiCol_TitleBgActive] = ImVec4(0.06f, 0.06f, 0.06f, 1.00f);
        colors[ImGuiCol_TitleBgCollapsed] = ImVec4(0.00f, 0.00f, 0.00f, 1.00f);
        colors[ImGuiCol_MenuBarBg] = ImVec4(0.14f, 0.14f, 0.14f, 1.00f);
        colors[ImGuiCol_ScrollbarBg] = ImVec4(0.05f, 0.05f, 0.05f, 0.00);
        colors[ImGuiCol_ScrollbarGrab] = ImVec4(0.34f, 0.34f, 0.34f, 0.54f);
        colors[ImGuiCol_ScrollbarGrabHovered] = ImVec4(0.40f, 0.40f, 0.40f, 0.54f);
        colors[ImGuiCol_ScrollbarGrabActive] = ImVec4(0.56f, 0.56f, 0.56f, 0.54f);
        colors[ImGuiCol_CheckMark] = ImVec4(0.33f, 0.67f, 0.86f, 1.00f);
        colors[ImGuiCol_SliderGrab] = ImVec4(0.34f, 0.34f, 0.34f, 0.54f);
        colors[ImGuiCol_SliderGrabActive] = ImVec4(0.56f, 0.56f, 0.56f, 0.54f);
        colors[ImGuiCol_Button] = ImVec4(0.05f, 0.05f, 0.05f, 0.54f);
        colors[ImGuiCol_ButtonHovered] = ImVec4(0.19f, 0.19f, 0.19f, 0.54f);
        colors[ImGuiCol_ButtonActive] = ImVec4(0.20f, 0.22f, 0.23f, 1.00f);
        colors[ImGuiCol_Header] = ImVec4(0.00f, 0.00f, 0.00f, 0.52f);
        colors[ImGuiCol_HeaderHovered] = ImVec4(0.00f, 0.00f, 0.00f, 0.36f);
        colors[ImGuiCol_HeaderActive] = ImVec4(0.20f, 0.22f, 0.23f, 0.33f);
        colors[ImGuiCol_Separator] = ImVec4(0.28f, 0.28f, 0.28f, 0.29f);
        colors[ImGuiCol_SeparatorHovered] = ImVec4(0.44f, 0.44f, 0.44f, 0.29f);
        colors[ImGuiCol_SeparatorActive] = ImVec4(0.40f, 0.44f, 0.47f, 1.00f);
        colors[ImGuiCol_ResizeGrip] = ImVec4(0.28f, 0.28f, 0.28f, 0.29f);
        colors[ImGuiCol_ResizeGripHovered] = ImVec4(0.44f, 0.44f, 0.44f, 0.29f);
        colors[ImGuiCol_ResizeGripActive] = ImVec4(0.40f, 0.44f, 0.47f, 1.00f);
        colors[ImGuiCol_Tab] = ImVec4(0.00f, 0.00f, 0.00f, 0.52f);
        colors[ImGuiCol_TabHovered] = ImVec4(0.14f, 0.14f, 0.14f, 1.00f);
        colors[ImGuiCol_TabActive] = ImVec4(0.20f, 0.20f, 0.20f, 0.36f);
        colors[ImGuiCol_TabUnfocused] = ImVec4(0.00f, 0.00f, 0.00f, 0.52f);
        colors[ImGuiCol_TabUnfocusedActive] = ImVec4(0.14f, 0.14f, 0.14f, 1.00f);
        //colors[ImGuiCol_DockingPreview] = ImVec4(0.33f, 0.67f, 0.86f, 1.00f);
        //colors[ImGuiCol_DockingEmptyBg] = ImVec4(1.00f, 0.00f, 0.00f, 1.00f);
        colors[ImGuiCol_PlotLines] = ImVec4(1.00f, 0.00f, 0.00f, 1.00f);
        colors[ImGuiCol_PlotLinesHovered] = ImVec4(1.00f, 0.00f, 0.00f, 1.00f);
        colors[ImGuiCol_PlotHistogram] = ImVec4(1.00f, 0.00f, 0.00f, 1.00f);
        colors[ImGuiCol_PlotHistogram_GRAD] = colToVec(255, 200, 0, 255);
        colors[ImGuiCol_PlotHistogramHovered] = ImVec4(1.00f, 0.00f, 0.00f, 1.00f);
        colors[ImGuiCol_TableHeaderBg] = ImVec4(0.00f, 0.00f, 0.00f, 0.52f);
        colors[ImGuiCol_TableBorderStrong] = ImVec4(0.00f, 0.00f, 0.00f, 0.52f);
        colors[ImGuiCol_TableBorderLight] = ImVec4(0.28f, 0.28f, 0.28f, 0.29f);
        colors[ImGuiCol_TableRowBg] = ImVec4(0.00f, 0.00f, 0.00f, 0.00f);
        colors[ImGuiCol_TableRowBgAlt] = ImVec4(1.00f, 1.00f, 1.00f, 0.06f);
        colors[ImGuiCol_TextSelectedBg] = ImVec4(0.20f, 0.22f, 0.23f, 1.00f);
        colors[ImGuiCol_DragDropTarget] = ImVec4(0.33f, 0.67f, 0.86f, 1.00f);
        colors[ImGuiCol_NavHighlight] = ImVec4(1.00f, 0.00f, 0.00f, 1.00f);
        colors[ImGuiCol_NavWindowingHighlight] = ImVec4(1.00f, 0.00f, 0.00f, 0.70f);
        colors[ImGuiCol_NavWindowingDimBg] = ImVec4(1.00f, 0.00f, 0.00f, 0.20f);
        colors[ImGuiCol_ModalWindowDimBg] = ImVec4(1.00f, 0.00f, 0.00f, 0.35f);

        ImGuiStyle& style = ImGui::GetStyle();
        style.WindowPadding = ImVec2(8.00f, 8.00f);
        style.CellPadding = ImVec2(6.00f, 6.00f);
        style.ItemSpacing = ImVec2(6.00f, 6.00f);
        style.ItemInnerSpacing = ImVec2(6.00f, 6.00f);
        style.TouchExtraPadding = ImVec2(0.00f, 0.00f);
        style.IndentSpacing = 25;
        style.ScrollbarSize = 15;
        style.GrabMinSize = 20;
        style.WindowBorderSize = 1;
        style.ChildBorderSize = 1;
        style.PopupBorderSize = 1;
        style.FrameBorderSize = 1;
        style.TabBorderSize = 1;
        style.ChildRounding = 4;
        style.FrameRounding = 3;
        style.PopupRounding = 4;
        style.ScrollbarRounding = 9;
        style.IndentSpacing = 85;
        style.GrabRounding = 3;
        style.LogSliderDeadzone = 4;
        style.TabRounding = 4;
        ImGui::GetIO().IniFilename = nullptr;
    }
    else 
    {
        ImGui::StyleColorsDark();
    }

    // Setup Platform/Renderer backends
    ImGui_ImplWin32_Init(hwnd);
    ImGui_ImplDX11_Init(gPd3dDevice, gPd3dDeviceContext);
}

void IGHelper::newFrame()
{
    ImGui_ImplDX11_NewFrame();
    ImGui_ImplWin32_NewFrame();
    ImGui::NewFrame();
}

void IGHelper::render(const bool vsync)
{
    ImGui::Render();
    gPd3dDeviceContext->OMSetRenderTargets(1, &gMainRenderTargetView, nullptr);
    gPd3dDeviceContext->ClearRenderTargetView(gMainRenderTargetView, clearColorKey);
    ImGui_ImplDX11_RenderDrawData(ImGui::GetDrawData());

    if(vsync)
        gPSwapChain->Present(1, 0);
    else
        gPSwapChain->Present(0, 0);
}

void IGHelper::shutdown()
{
    ImGui_ImplDX11_Shutdown();
    ImGui_ImplWin32_Shutdown();
    ImGui::DestroyContext();

    cleanupDeviceD3D();
    ::DestroyWindow(hwnd);
    ::UnregisterClass(windowClass.lpszClassName, windowClass.hInstance);
}

void IGHelper::handleMsg(bool* done)
{
    MSG msg;
    while (::PeekMessage(&msg, nullptr, 0U, 0U, PM_REMOVE))
    {
        ::TranslateMessage(&msg);
        ::DispatchMessage(&msg);
        if (msg.message == WM_QUIT)
            *done = true;
    }
}

void IGHelper::placeInCenter(const std::string& st, const float off)
{
	const float x = (ImGui::GetWindowSize().x / 2) - (ImGui::CalcTextSize(st.c_str()).x / 2);
	ImGui::SetCursorPosX(x - off);
	ImGui::Text(st.c_str());
}

void IGHelper::copyToClipBoard(const std::string& str)
{
    if (!OpenClipboard(nullptr))
    {
        return;
    }

    EmptyClipboard();

    const auto size = str.size() + 1;
    const auto hGlobal = GlobalAlloc(GMEM_MOVEABLE, size);
    if (!hGlobal) 
    {
        CloseClipboard();
        return;
    }

    const auto lpGlobal = GlobalLock(hGlobal);
    if (!lpGlobal) 
    {
        GlobalFree(hGlobal);
        CloseClipboard();
        return;
    }

    memcpy(lpGlobal, str.c_str(), size);
    GlobalUnlock(hGlobal);

    SetClipboardData(CF_TEXT, hGlobal);
    CloseClipboard();
}
void IGHelper::setLayeredWindowAttributes(const COLORREF crKey, const BYTE bAlpha, const DWORD dwFlags, float key[4])
{
    memcpy(&clearColorKey, &key, sizeof(clearColorKey));
    SetLayeredWindowAttributes(hwnd, crKey, bAlpha, dwFlags);
}

ImVec2 IGHelper::getWindowSize()
{
    return windowSize;
}

void IGHelper::setWindowSize(ImVec2 const size)
{
    windowSize = size;
}

ID3D11Device* IGHelper::getGPd3dDevice()
{
    return gPd3dDevice;
}

IDXGISwapChain* IGHelper::getSwapChain()
{
    return gPSwapChain;
}

HWND IGHelper::getHwnd()
{
    return hwnd;
}

ImFont* IGHelper::getTitleFont()
{
    return titleFont;
}

ImFont* IGHelper::getTextFont()
{
    return textFont;
}

ImFont* IGHelper::getSmallFont()
{
    return smallFont;
}

ImFont* IGHelper::getFaFont()
{
    return faFont;
}

ImFont* IGHelper::getConsoleFont()
{
    return consoleFont;
}

ImVec4 IGHelper::colToVec(const float r, const float g, const float b, const float a)
{
    return ImVec4(r / 255, g / 255, b / 255, a / 255);
}

ImVec4 IGHelper::updateRGBColor(ImVec4 col, float highestVar, float minVar, int step)
{
    float r = col.x * 255;
    float g = col.y * 255;
    float b = col.z * 255;
#define fixAndRet(l) \
	if(l > highestVar) \
		l = highestVar;\
    else if (l < minVar) \
        l = minVar; \
    return colToVec(r, g, b, col.w * 255);

    if(r == highestVar)
    {
        if(b > minVar)
        {
            b -= step;
            fixAndRet(b);
        }
	    if(g < highestVar)
	    {
            g += step;
            fixAndRet(g);
	    }
    }
    if(g == highestVar)
    {
	    if(r > minVar)
	    {
            r -= step;
            fixAndRet(r);
	    }
        if (b < highestVar)
        {
            b += step;
            fixAndRet(b);
        }
    }
    if(b == highestVar)
    {
        if (g > minVar)
        {
            g -= step;
            fixAndRet(g);
        }
        if (r < highestVar)
        {
            r += step;
            fixAndRet(r);
        }
    }
    //this is a invalid state, fix by setting one var to max to trigger a state
    return {highestVar / 255, col.y, col.z, col.w};
}
