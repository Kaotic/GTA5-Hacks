#pragma once
#include "types.h"
namespace Kaotic {
	class Player {
	public:
		static void Godmode(bool state);
		static void NoRagdoll(bool state);
		static void WantedLevel(int lvl);
		static void FastRun(bool toggle);
		static void SuperJump();
		static void TeleportToCoords( natives::Vector3 Coords);
		static void PlayerToCoords(natives::Player player, natives::Vector3 target);
		static void CleanPlayer();
		static bool GetGodmode();
		static bool GetNoRagdoll();
		static int GetWantedLevel();
		static float GetSprintSpeed();
		static bool GetIsInVehicle();
		static bool cstrcmp(const char* s1, const char* s2);
	};

}
