#pragma once
namespace Kaotic {
	class Vehicle {
	public:
		static void Godmode(bool state);
		static void TankGodmode(bool state);
		static void SetBoost(float boost);
		static void SetAcceleration(float acceleration);
		static bool GetGodmode();
		static float GetBoost();
		static float GetAcceleration();
		static void HornBoost();
		static void MaxCar();
		static void SetPlate(const char* plate);
		static void FlipCar();
		static natives::Vehicle SpawnVehicle(char* modelg, natives::Vector3 coords, float heading = 0.0f);
	};
}
