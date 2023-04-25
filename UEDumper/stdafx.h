#pragma once

#define _CRT_SECURE_NO_WARNINGS

/// Windows APIS
#include <Windows.h>
#include <filesystem>
#include <iostream>
#include <sstream>
#include <fstream>
#include <vector>
#include <future>
#include <unordered_map>
#include <unordered_set>
#include <functional>
#include <chrono>
#include <ctime>

/// ImGui related
#include <imgui.h>
#include <imgui_impl_win32.h>
#include <imgui_impl_dx11.h>
#include <d3d11.h>

//third party
#include <json.hpp>
#include <AES.h>

#include "Engine/Userdefined/Datatypes.h"

#include "Engine/Userdefined/UEdefinitions.h"

#include "Frontend/Windows/LogWindow.h"

#include "Frontend/Fonts/fontAwesomeHelper.h"
#include "Frontend/IGHelper.h"
#include "Frontend/Texture/TextureCreator.h"

#include "Memory/Memory.h"
#include "Settings/EngineSettings.h"

//dumps host
#include <dumpshost.h>

#include "Engine/Core/Core.h"

#include "Engine/Live/LiveMemory.h"