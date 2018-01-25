#include "stdafx.h"

//copy /Y "$(TargetDir)$(TargetName).skd" "D:\Jeux\Rockstar Games\Grand Theft Auto V\$(TargetName).skd"
void script_main()
{
	static auto origin = std::make_unique<originbasev2>("main", "off", "KaoMenu");

	static bool player_god_mode = false;
	static bool player_no_ragdoll = false;
	static int player_wanted_level = 0;
	static bool player_never_wanted = false;
	static bool player_fastrun = false;
	static bool player_super_jump = false;

	static bool vehicle_godmode = false;
	static bool vehicle_tank_godmode = false;
	static bool vehicle_super_boost = false;
	static std::string vehicle_plate = "";

	static bool weapon_infinite_ammo = false;
	static bool weapon_max_ammo = false;
	static bool weapon_give_all = false;

	static int online_player_selected_id = 0;
	
	origin->notify("KaoMenu Loaded!"); //OriginBase V2

	origin->create_menu("main", "off", []
	{
		origin->set_title("KaoMenu"); //OriginBase V2

		origin->create_option(new menu_option("Online", "main_online", origin.get(), "Menu pour le multi."));
		origin->create_option(new menu_option("Self", "main_player", origin.get(), "Menu pour votre perso."));
		origin->create_option(new menu_option("Weapon", "main_weapon", origin.get(), "Menu pour vos armes."));
		origin->create_option(new menu_option("Vehicle", "main_vehicle", origin.get(), "Menu des voitures."));
		origin->create_option(new menu_option("Recovery", "main_recovery", origin.get(), "Recup monnaie/level/etc.."));
		origin->create_option(new menu_option("Teleportation", "main_teleportation", origin.get(), "Menu des teleportations."));
		
		
		//origin->create_option(new blank_option("Parametres", ">>", "Paramètres menu."));
		origin->create_option(new spacer_option("Others"));
		origin->create_option(new menu_option("Test", "main_test", origin.get(), "Testing functions; :)"));
		origin->create_option(new blank_option("Unload", "", "Unload menu!", [] { remove_script(g_handle); }));
	});

	origin->create_menu("main_online", "main", []
	{
		origin->set_title("Online Player's");
		for (int i = 0; i < 32; i++) {
			if (natives::player::is_player_playing(i)) {
				std::string player_name = natives::player::get_player_name(i);

				origin->create_option(new menu_option(player_name, "main_online_selected", origin.get(), player_name + " options !", [i] { online_player_selected_id = i; }));
			}
		}
	}, true);

	origin->create_menu("main_online_selected", "main", []
	{
		std::string player_name = natives::player::get_player_name(online_player_selected_id);

		origin->set_title(player_name + " Option's - " + std::to_string(online_player_selected_id));

		origin->create_option(new blank_option("Teleport To Player", ">>", "Teleport to player !", [player_name] { origin->notify("Teleported to " + player_name); }));
		origin->create_option(new spacer_option("~r~Possible BAN"));
		origin->create_option(new blank_option("~r~Give All Weapons", "~r~>>", "~r~Donne toutes les armes !", [] { Kaotic::Online::GiveAllWeapons(online_player_selected_id); }));
		origin->create_option(new blank_option("~r~Take All Weapons", "~r~>>", "~r~Enleve toutes les armes !", [] { Kaotic::Online::TakeAllWeapons(online_player_selected_id); }));
		origin->create_option(new blank_option("~r~Spawn Car", "~r~>>", "~r~Spawn une voiture !", [player_name] { Kaotic::Online::SpawnVehicle(online_player_selected_id, (char*)"TESTCAR"); origin->notify("Spawn Car for " + player_name); }));

	}, true);

	origin->create_menu("main_player", "main", []
	{
		origin->set_title("Self");
		 
		origin->create_option(new toggle_option("Godmode", &player_god_mode, "Godmode du personnage.", [] { Kaotic::Player::Godmode(player_god_mode); }));
		origin->create_option(new toggle_option("Fast Run", &player_fastrun, "Personnage rapide.", [] { Kaotic::Player::FastRun(player_fastrun); }));
		origin->create_option(new toggle_option("Super jump", &player_super_jump, "Personnage avec des super jump.", [] { Kaotic::Player::SuperJump(); }));
		origin->create_option(new toggle_option("No Ragdoll", &player_no_ragdoll, "Personnage qui tombe jamais.", [] { Kaotic::Player::NoRagdoll(player_no_ragdoll); }));
		origin->create_option(new blank_option("Clean Player", "~r~>>", "Vous nettoie des balles.", [] { Kaotic::Player::CleanPlayer(); }));
		origin->create_option(new slider_option<int>("Wanted Level", &player_wanted_level, 0, 5, 1, "Etoiles de recherche.", [] { Kaotic::Player::WantedLevel(player_wanted_level); }));
		origin->create_option(new toggle_option("Never Wanted", &player_never_wanted, "Jamais recherche.", [] { Kaotic::Player::WantedLevel(0); }));

	});

	origin->create_menu("main_weapon", "main", []
	{
		origin->set_title("Weapon");

		origin->create_option(new toggle_option("Infinite Ammo", &weapon_infinite_ammo, "Munitions illimitees.", [] { Kaotic::Weapon::NoReload(); }));
		origin->create_option(new toggle_option("Set Max Ammo", &weapon_max_ammo, "Munitions max pour l'arme.", [] { Kaotic::Weapon::MaxAmmo(); }));
	});

	origin->create_menu("main_vehicle", "main", []
	{
		origin->set_title("Vehicle");

		origin->create_option(new toggle_option("Godmode", &vehicle_godmode, "Godmode de la voiture.", [] { Kaotic::Vehicle::Godmode(vehicle_godmode); }));
		origin->create_option(new toggle_option("Tank - Godmode", &vehicle_tank_godmode, "Tank, Godmode de la voiture.", [] { Kaotic::Vehicle::TankGodmode(vehicle_tank_godmode); }));
		origin->create_option(new toggle_option("Super Boost", &vehicle_super_boost, "Appuyez sur le klaxon pour boost.", [] { Kaotic::Vehicle::HornBoost(); }));
		origin->create_option(new blank_option("Max Vehicle", ">>", "Max la voiture !", [] { Kaotic::Vehicle::MaxCar(); origin->notify("Max Vehicle !"); }));
		origin->create_option(new blank_option("Flip Car", ">>", "Remet la voiture droite !", [] { Kaotic::Vehicle::FlipCar(); origin->notify("Flip Car !"); }));
		origin->create_option(new input_option("Set Plate", &vehicle_plate, "Custom la plaque", [] { Kaotic::Vehicle::SetPlate((char*)vehicle_plate.c_str()); origin->notify("Plate [" + vehicle_plate + "] set !"); }));

	});

	origin->create_menu("main_recovery", "main", []
	{
		origin->set_title("Recovery");
		origin->create_option(new blank_option("Give All Weapons", ">>", "Se give toutes les armes.", [] { Kaotic::Recovery::GiveAllWeapons(); origin->notify("Give de toutes les armes.."); }));
		
		
	});

	origin->create_menu("main_teleportation", "main", []
	{
		origin->set_title("Teleportation");
		//origin->create_option(new blank_option("Mount Chiliad", ">>", "TP vers le Mount Chiliad !", [] { natives::Vector3 Coords; Coords.x = 496.75f; Coords.y = 5591.17f; Coords.z = 795.03f; Kaotic::Online::TeleportTo(natives::player::player_ped_id(), Coords); origin->notify("Teleported !"); }));
	});

	origin->create_menu("main_test", "main", []
	{
		origin->set_title("Testing functions");

	});

	while (true)
	{
		//Player
		player_wanted_level = Kaotic::Player::GetWantedLevel();

		if (player_god_mode) Kaotic::Player::Godmode(true);
		if (player_never_wanted) Kaotic::Player::WantedLevel(0);
		
		if (player_no_ragdoll) Kaotic::Player::NoRagdoll(true);
		if (player_super_jump) Kaotic::Player::SuperJump();

		//Vehicle
		if (vehicle_godmode) Kaotic::Vehicle::Godmode(true); //todo add if is vehicle
		if (vehicle_tank_godmode) Kaotic::Vehicle::TankGodmode(true); //todo add if is vehicle
		if (vehicle_super_boost) Kaotic::Vehicle::HornBoost(); //todo add if is vehicle

		//Weapon
		if (weapon_infinite_ammo) Kaotic::Weapon::NoReload();
		if (weapon_max_ammo) Kaotic::Weapon::MaxAmmo();

		origin->process();
		wait(0);
	}
}