#pragma once
#include "stdafx.h"


/****************************************************
*													*
*	IGHelper - a helper class that does all the 	*
*	background stuff for ImGui.	If you rip this		*
*	class out of this project to paste it in your	*
*	project, please do leave the credits. Thanks.	*
*													*
****************************************************/

class IGHelper {
//protected for maybe future use cases
protected:

	static inline ID3D11Device*				gPd3dDevice = nullptr;
	static inline ID3D11DeviceContext*		gPd3dDeviceContext = nullptr;
	static inline IDXGISwapChain*			gPSwapChain = nullptr;
	static inline ID3D11RenderTargetView*	gMainRenderTargetView = nullptr;
	static inline HWND						hwnd = nullptr;
	static inline WNDCLASSEX				windowClass{};
	static inline ImVec2					windowSize{};

private:

	//clear color for directX
	static inline float clearColorKey[4] = { 255, 255, 255, 255};

	//fonts used listed here 
	static inline ImFont* titleFont = nullptr;
	static inline ImFont* textFont = nullptr;
	static inline ImFont* smallFont = nullptr;
	static inline ImFont* consoleFont = nullptr;
	static inline ImFont* faFont = nullptr;

	/**
	 * \brief Cleans up the existing D3D device
	 */
	static void cleanupDeviceD3D();

	/**
	 * \brief Creates a D3D device
	 * \param hWnd window HWND
	 * \return true upon successful creation
	 */
	static bool createDeviceD3D(HWND hWnd);

public:

	/**
	 * \brief UGHelper constructor
	 * \param name Window name
	 * \param applyDefaultStyle applies the default styling style
	 * \param sizeX x size of the window
	 * \param sizeY y size of the window
	 * \param x posX
	 * \param y posY
	 */
	IGHelper(LPCWSTR name, bool applyDefaultStyle, int sizeX, int sizeY, int x = 100, int y = 100);

/**
	 * \brief let ImGui draw a new frame
	 */
	static void newFrame();

	/**
	* \brief render the frame
	* \param vsync if vsync is enabled
	*/
	static void render(bool vsync = true);

	/**
	 * \brief Shuts down imgui safely
	 */
	static void shutdown();

	//get the fonts

	static ImFont* getTitleFont();

	static ImFont* getTextFont();

	static ImFont* getSmallFont();

	static ImFont* getFaFont();

	static ImFont* getConsoleFont();
	
	static void handleMsg(bool* done);

	static HWND getHwnd();

	static void setLayeredWindowAttributes(COLORREF crKey, BYTE bAlpha,DWORD dwFlags , float key[4]);

	static ImVec2 getWindowSize();

	static void setWindowSize(ImVec2 size);

	static ID3D11Device* getGPd3dDevice();

	static IDXGISwapChain* getSwapChain();

	static void createRenderTarget();

	static void cleanupRenderTarget();


	static ImVec4 colToVec(float r, float g, float b, float a);

	static ImVec4 updateRGBColor(ImVec4 col, float highestVar = 255, float minVar = 0, int step = 2);

	//places a text in center
	static void placeInCenter(const std::string& st, float off = 0);

	static void copyToClipBoard(const std::string& str);;

	//colors
	struct Colors
	{
		static inline ImVec4 red =				colToVec(255, 0, 0, 255);
		static inline ImVec4 white =			colToVec(255, 255, 255, 255);
		static inline ImVec4 classOrange =		colToVec(252, 140, 3, 255);
		static inline ImVec4 yellow =			colToVec(255, 213, 0, 255 );
		static inline ImVec4 functionYellow =	colToVec(220, 220, 170, 255 );
		static inline ImVec4 green =			colToVec(17, 255, 0, 255 );
		static inline ImVec4 numberGreen =		colToVec(181, 206, 168, 255);
		static inline ImVec4 classGreen =		colToVec(75, 201, 171, 255);
		static inline ImVec4 commentGreen =		colToVec(0, 145, 10, 255 );
		static inline ImVec4 lightblue =		colToVec(0, 179, 255, 255 );
		static inline ImVec4 varTypeBlue =		colToVec(86, 156, 214, 255);
		static inline ImVec4 enumBlue =			colToVec(0, 21, 255, 255 );
		static inline ImVec4 packagePurple =	colToVec(162, 0, 255, 255 );
		static inline ImVec4 varPink =			colToVec(221, 160, 221, 255);
		static inline ImVec4 varBlue =			colToVec(156, 220, 254, 255);
		static inline ImVec4 stringRed =		colToVec(214, 157, 133, 255);
		static inline ImVec4 grayedOut =		colToVec(255, 255, 255, 150);
		static inline ImVec4 paramGray =		colToVec(154,154,154, 255);
		static inline ImVec4 bracketGray =		colToVec(180,180,180, 255);
		
	};
};
