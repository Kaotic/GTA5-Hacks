#include "stdafx.h"

void Kaotic::Vehicle::Godmode(bool state)
{
	memory::set_value<bool>({ 0x08, 0xD28, 0x189 }, state);
}

void Kaotic::Vehicle::TankGodmode(bool toggle)
{

	if (natives::ped::is_ped_in_any_vehicle(natives::player::player_ped_id(), false))
	{
		int vehicle = natives::ped::get_vehicle_ped_is_in(natives::player::player_ped_id(), false);
		natives::entity::set_entity_invincible(vehicle, toggle);
		natives::entity::set_entity_proofs(vehicle, toggle, toggle, toggle, toggle, toggle, toggle, toggle, toggle);
		natives::vehicle::set_vehicle_damage(vehicle, 0.f, 0.f, 0.f, 0.f, 200.f, false);
		natives::vehicle::set_vehicle_enveff_scale(vehicle, 0.f);
		natives::vehicle::set_disable_vehicle_petrol_tank_damage(vehicle, toggle);
		natives::vehicle::set_disable_vehicle_petrol_tank_fires(vehicle, toggle);
		natives::vehicle::set_vehicle_body_health(vehicle, 1000.f);
		natives::vehicle::set_vehicle_can_be_visibly_damaged(vehicle, !toggle);
		natives::vehicle::set_vehicle_can_break(vehicle, !toggle);
		natives::vehicle::set_vehicle_engine_health(vehicle, 1000.f);
		natives::vehicle::set_vehicle_engine_can_degrade(vehicle, !toggle);
		natives::vehicle::set_vehicle_explodes_on_high_explosion_damage(vehicle, !toggle);
		natives::vehicle::set_vehicle_petrol_tank_health(vehicle, 1000.f);
		natives::vehicle::set_vehicle_tyres_can_burst(vehicle, !toggle);
		natives::vehicle::set_vehicle_wheels_can_break(vehicle, !toggle);
		natives::vehicle::set_vehicle_fixed(vehicle);
		natives::vehicle::set_vehicle_damage(vehicle, 0.f, 0.f, 0.f, 0.f, 200.f, true);
		natives::vehicle::set_vehicle_deformation_fixed(vehicle);
		natives::vehicle::set_vehicle_enveff_scale(vehicle, 0.f);
		natives::vehicle::set_vehicle_dirt_level(vehicle, 0.f);
		natives::vehicle::set_vehicle_body_health(vehicle, 1000.f);
		natives::vehicle::set_vehicle_engine_health(vehicle, 1000.f);
		natives::vehicle::set_vehicle_petrol_tank_health(vehicle, 1000.f);
		if (natives::vehicle::_is_vehicle_damaged(vehicle))
		{
			for (int i = 0; i < 10; i++)
			{
				try {
					natives::vehicle::set_vehicle_tyre_fixed(vehicle, i);
				}
				catch (...) {
					return;
				}
			}
		}
	}
}

void Kaotic::Vehicle::SetBoost(float boost)
{
	memory::set_value<float>({ 0x08, 0xD28, 0x320 }, boost);
}

void Kaotic::Vehicle::SetAcceleration(float acceleration)
{
	memory::set_value<float>({ 0x08, 0xD28, 0x8C8, 0x4C }, acceleration);
}
//Set Value

//Get Value
bool Kaotic::Vehicle::GetGodmode()
{
	return memory::get_value<bool>({ 0x08, 0xD28, 0x189 });
}

float Kaotic::Vehicle::GetBoost()
{
	return memory::get_value<float>({ 0x08, 0xD28, 0x320 });
}

float Kaotic::Vehicle::GetAcceleration()
{
	return memory::get_value<float>({ 0x08, 0xD28, 0x8C8, 0x4C });
}

void Kaotic::Vehicle::HornBoost() {
	if (natives::player::is_player_pressing_horn(natives::player::player_id()))
	{
		int Veh = natives::ped::get_vehicle_ped_is_in(natives::player::get_player_ped_script_index(natives::player::player_id()), false);
		natives::network::network_request_control_of_entity(Veh);
		if (natives::network::network_has_control_of_entity(Veh))
		{
			natives::vehicle::set_vehicle_forward_speed(Veh, 60);
		}
	}
}