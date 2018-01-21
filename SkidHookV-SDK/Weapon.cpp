#include "stdafx.h"

void Kaotic::Weapon::MaxAmmo() {
	DWORD cur;
	if (natives::weapon::get_current_ped_weapon(natives::player::player_ped_id(), &cur, 1))
	{
		if (natives::weapon::is_weapon_valid(cur))
		{
			int maxAmmo;
			if (natives::weapon::get_max_ammo(natives::player::player_ped_id(), cur, &maxAmmo))
			{
				natives::weapon::set_ped_ammo(natives::player::player_ped_id(), cur, maxAmmo);
			}
		}
	}
};

int Kaotic::Weapon::GetMaxAmmo()
{
	return memory::get_value<int>({ 0x8, 0x10C8, 0x20, 0x60, 0x28 });
}

void Kaotic::Weapon::NoReload() {
	DWORD cur;
	if (natives::weapon::get_current_ped_weapon(natives::player::player_ped_id(), &cur, 1))
	{
		if (natives::weapon::is_weapon_valid(cur))
		{
			int maxAmmo;
			if (natives::weapon::get_max_ammo(natives::player::player_ped_id(), cur, &maxAmmo))
			{
				natives::weapon::set_ped_ammo(natives::player::player_ped_id(), cur, maxAmmo);

				maxAmmo = natives::weapon::get_max_ammo_in_clip(natives::player::player_ped_id(), cur, 1);
				if (maxAmmo > 0)
					natives::weapon::set_ammo_in_clip(natives::player::player_ped_id(), cur, maxAmmo);
			}
		}
	}
}