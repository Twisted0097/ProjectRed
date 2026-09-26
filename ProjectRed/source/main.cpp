#include "include/framework.h"
#include "include/types.h"
#include "include/enums.h"
#include "fortnite/language.h"
#include "fortnite/gamemodes.h"
DWORD WINAPI Main(LPVOID lpParam)
{
	CONSOLE;
	ProjectRed::Languages::InitLanguages();
	ProjectRed::GameModes::InitGameModes();
	return 0;
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD dwReason, LPVOID lpReserved)
{
	switch (dwReason)
	{
	case DLL_PROCESS_ATTACH:
		CreateThread(0, 0, Main, hModule, 0, 0);
		break;

	case DLL_PROCESS_DETACH:
		break;
	}

	return TRUE;
}