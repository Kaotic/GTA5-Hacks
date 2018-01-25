#include "stdafx.h"

void Kaotic::Player::Godmode(bool state)
{
	memory::set_value<bool>({ 0x8, 0x189 }, state);
}


void Kaotic::Player::NoRagdoll(bool state)
{
	memory::set_value<bool>({ 0x8, 0x10A8 }, state);
}

void Kaotic::Player::WantedLevel(int lvl)
{
	memory::set_value<int>({ 0x8, 0x10B8, 0x7F8 }, lvl);
}

void Kaotic::Player::FastRun(bool toggle)
{
	if (toggle) {
		memory::set_value<float>({ 0x08, 0x10B8, 0x14C }, 2);
	}
	else {
		memory::set_value<float>({ 0x08, 0x10B8, 0x14C }, 1);
	}
}

void Kaotic::Player::SuperJump()
{
	int playerPed = natives::player::player_ped_id();
	natives::gameplay::set_super_jump_this_frame(natives::player::player_id());
	natives::gameplay::set_super_jump_this_frame(playerPed);
}

void Kaotic::Player::TeleportToCoords(natives::Vector3 Coords) {
	memory::set_value<float>({ 0x8, 0x30, 0x50 }, Coords.x);
	memory::set_value<float>({ 0x8, 0x30, 0x54 }, Coords.y);
	memory::set_value<float>({ 0x8, 0x30, 0x58 }, Coords.z);
}

void Kaotic::Player::CleanPlayer() {
	natives::Ped Ped = natives::player::player_ped_id();
	natives::ped::clear_ped_blood_damage(Ped);
	natives::ped::reset_ped_visible_damage(Ped);
}

void Kaotic::Player::PlayerToCoords(natives::Player player, natives::Vector3 target)
{
	//Teleport to Coords function
}

bool Kaotic::Player::GetGodmode()
{
	return memory::get_value<bool>({ 0x8, 0x189 });
}

bool Kaotic::Player::GetNoRagdoll()
{
	return memory::get_value<bool>({ 0x8, 0x10A8 });
}

int Kaotic::Player::GetWantedLevel()
{
	return memory::get_value<int>({ 0x8, 0x10B8, 0x7F8 });
}

float Kaotic::Player::GetSprintSpeed()
{
	return memory::get_value<float>({ 0x08, 0x10B8, 0x14C });
}

bool Kaotic::Player::GetIsInVehicle()
{
	return memory::get_value<bool>({ 0x08, 0x146B });
}

bool Kaotic::Player::cstrcmp(const char* s1, const char* s2)
{
	while (*s1 && (*s1 == *s2))
		s1++, s2++;
	if (*(const unsigned char*)s1 - *(const unsigned char*)s2 == 0)
		return true;
	else
		return false;
}