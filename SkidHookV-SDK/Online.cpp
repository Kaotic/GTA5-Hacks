#include "stdafx.h"

void Kaotic::Online::TeleportTo(natives::Player player, natives::Vector3 target)
{
	//Teleport to coords function :)
}

void Kaotic::Online::SpawnVehicle(natives::Player player, char* vehicle_name)
{
	//Spawn vehicle for others players function
}

void Kaotic::Online::GiveAllWeapons(natives::Player player) {
	unsigned int Weapons[] = { 0x99B507EA, 0x678B81B1, 0x4E875F73, 0x958A4A8F, 0x440E4788, 0x84BD7BFD, 0x1B06D571, 0x5EF9FEC4, 0x22D8FE39, 0x99AEEB3B, 0x13532244, 0x2BE6766B, 0xEFE7E2DF, 0xBFEFFF6D, 0x83BF0278, 0xAF113F99, 0x9D07F764, 0x7FD62962, 0x1D073A89, 0x7846A318, 0xE284C527, 0x9D61E50F, 0x3656C8C1, 0x05FC3C11, 0x0C472FE2, 0x33058E22, 0xA284510B, 0x4DD2DC56, 0xB1CA77B1, 0x687652CE, 0x42BF8A85, 0x93E220BD, 0x2C3731D9, 0xFDBC8A50, 0x24B17070, 0x060EC506, 0x34A67B97, 0xFDBADCED, 0x23C9F95C, 0x497FACC3, 0xF9E6AA4B, 0x61012683, 0xC0A3098D, 0xD205520E, 0xBFD21232, 0x7F229F94, 0x92A27487, 0x083839C4, 0x7F7497E5, 0xA89CB99E, 0x3AABBBAA, 0xC734385A, 0x787F0BB, 0x47757124, 0xD04C944D };
	for (int i = 0; i < (sizeof(Weapons) / 4); i++) {
		natives::weapon::give_delayed_weapon_to_ped(natives::player::get_player_ped_script_index(player), Weapons[i], 9999, 1);
		wait(10);
	}
}

void Kaotic::Online::TakeAllWeapons(natives::Player player) {
	natives::weapon::remove_all_ped_weapons(natives::player::get_player_ped_script_index(player), true);
}