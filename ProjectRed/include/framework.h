#pragma once
#define _CRT_SECURE_NO_WARNINGS
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <iostream>
#include <fstream>
#include <ostream>
#include <sstream>
#include <string>
#include <vector>
#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <cstddef>
#include <cstdarg>
#include <cstdbool>
#include <psapi.h>
#include <map>
#include <set>
#include <winver.h>
#include <shellapi.h>
#include <cinttypes>
#include <filesystem>
#include <memory>
#include <tlhelp32.h>
#include <winscard.h>
#include <unordered_set>
#include <unordered_map>
using namespace std;
namespace fs = filesystem;
#define CONSOLE\
	SetConsoleTitleA("ProjectRed");\
	AllocConsole();\
	FILE* file;\
	freopen_s(&file, "CONOUT$", "w", stdout);\
	freopen_s(&file, "CONIN$", "r", stdin);\
	freopen_s(&file, "CONOUT$", "w", stderr);