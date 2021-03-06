// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once

#include "targetver.h"

#pragma comment(lib, "Winmm.lib")

#define WIN32_LEAN_AND_MEAN             // Exclude rarely-used stuff from Windows headers
// Windows Header Files:
#include <functional>
#include <filesystem>
#include <Windows.h>
#include <stdint.h>
#include <cstdlib>
#include <iomanip>
#include <sstream>
#include <fstream>
#include <string>
#include <map>
#include <timeapi.h>
#include <time.h>

extern HMODULE g_handle;

// TODO: reference additional headers your program requires here
#include "main.h"
#include "native_caller.h"
#include "natives.h"
#include "BaseOption.h"
#include "BlankOption.h"
#include "InputOption.h"
#include "MenuOption.h"
#include "SliderOption.h"
#include "ToggleOption.h"
#include "VectorOption.h"
#include "SpacerOption.h"
#include "OriginBaseV2.h"
#include "Online.h"
#include "Player.h"
#include "Weapon.h"
#include "Recovery.h"
#include "Vehicle.h"
#include "memory.h"
#include "script.h"
#include "types.h"