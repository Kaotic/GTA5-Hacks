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
	};
}
