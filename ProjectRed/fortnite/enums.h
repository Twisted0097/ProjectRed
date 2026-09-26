#pragma once
#include "include/framework.h"
#include "include/enums.h"

typedef enum
{
	wall,
	floor,
	stair,
	cone
}FortniteBuilds;

typedef enum
{
	Slot1,
	Slot2,
	Slot3,
	Slot4,
	Slot5
}InventorySlots;

typedef enum
{
	English = true,
	Spanish = true,
	French = true,
	Portuguese = true,
	German = true,
	Dutch = true,
	Italian = true,
	Danish = true,
	Russian = true,
	Serbian = true,
	Bosnian = true,
	Finnish = true,
	Swedish = true,
	Norwaeaigan = true,
	Georgian = true,
	Tai = true,
	Taiwanese = true,
	Chinese = true,
	Japanese = true,
	English_UK = true,
	Polish = true,
	Latvian = true,
	Turkish = true,
	Arabic = true,
	Portuguese_BR = true,
	Singaporian = true,
	Vietnamese = true
}LangSettings;

typedef FortniteBuilds Build;
typedef InventorySlots Slot;
typedef LangSettings Language;