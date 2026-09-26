#include "fortnite/gamemodes.h"

namespace ProjectRed
{
	DWORD GameModes::InitGameModes()
	{
		map<string, string> Solos
		{
			{"Solos", "https://projectred.net/gamemodes/solos"}
		};

		map<string, string> Duos
		{
			{"Duos", "https://projected.net/gamemodes/duos"}
		};

		map<string, string> Trios
		{
			{"Trios", "https://projectred.net/gamemodes/trios"}
		};

		map<string, string> Squads
		{
			{"Squads", "https://projectred.net/gamemodes/squads"}
		};

		map<string, string> Oneshot
		{
			{"One Shot", "https://projectred.net/gamemodes/one_shot"}
		};

		map<string, string> Lava
		{
			{"Floor Is Lava", "https://projectred.net/gamemodes/floorislava"}
		};

		map<string, string> Siphon
		{
			{"Siphon", "https://projectred.net/gamemodes/siphon"}
		};

		map<string, string> TeamRumble
		{
			{"Team Rumble", "https://projectred.net/gamemodes/team_rumble"}
		};

		map<string, string> SolidGold
		{
			{"Solid Gold", "https://projectred.net/gamemodes/solid_gold"}
		};

		map<string, string> Playground
		{
			{"Playground", "https://projectred.net/gamemodes/playground"}
		};

		map<string, string> Creative
		{
			{"Creative", "https://projectred.net/gamemodes/creative"}
		};
		return 0;
	}
}