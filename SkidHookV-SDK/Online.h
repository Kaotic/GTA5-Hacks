#pragma once
#pragma once
#include "types.h"
namespace Kaotic {
	class Online {
	public:
		static void TeleportTo(natives::Player player, natives::Vector3 target);
		static void SpawnVehicle(natives::Player player, char* vehicle_name);
		static void GiveAllWeapons(natives::Player player);
		static void TakeAllWeapons(natives::Player player);
	};

}
