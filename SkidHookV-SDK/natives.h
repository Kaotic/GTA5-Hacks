#pragma once 

// Generated 24 Dec 2017  

#include "types.h"

namespace natives
{
	namespace player
	{
		static Ped get_player_ped(Player player) { return invoke<Ped>(0x43A66C31C68491C0, player); }
		// 0x43A66C31C68491C0 0x6E31E993  
		static Ped get_player_ped_script_index(Player player) { return invoke<Ped>(0x50FAC3A3E030A6E1, player); }
		// 0x50FAC3A3E030A6E1 0x6AC64990  
		static void set_player_model(Player* Model, Player model) { invoke<Void>(0x00A1CADD00108836, Model, model); }
		// 0x00A1CADD00108836 0x774A4C54  
		static void change_player_ped(Player Player, Ped ped, bool b2, bool b3)
		{
			invoke<Void>(0x048189FAC643DEEE, Player, ped, b2, b3);
		} // 0x048189FAC643DEEE 0xBE515485  
		static void get_player_rgb_colour(Player Player, int* r, int* g, int* b)
		{
			invoke<Void>(0xE902EF951DCE178F, Player, r, g, b);
		} // 0xE902EF951DCE178F 0x6EF43BBB  
		static Vehicle get_number_of_players() { return invoke<Vehicle>(0x407C7F91DDB46C16); }
		// 0x407C7F91DDB46C16 0x4C1B8867  
		static int get_player_team(Player player) { return invoke<int>(0x37039302F4E0A008, player); }
		// 0x37039302F4E0A008 0x9873E404  
		static void set_player_team(Player player, int team) { invoke<Void>(0x0299FA38396A4940, player, team); }
		// 0x0299FA38396A4940 0x725ADCF2  
		static const char* get_player_name(Player player) { return invoke<const char*>(0x6D0DE6A7B5DA71F8, player); }
		// 0x6D0DE6A7B5DA71F8 0x406B4B20  
		static Any get_wanted_level_radius(Player player) { return invoke<Any>(0x085DEB493BE80812, player); }
		// 0x085DEB493BE80812 0x1CF7D7DA  
		static Vector3 get_player_wanted_centre_position(Player player)
		{
			return invoke<Vector3>(0x0C92BA89F1AF26F8, player);
		} // 0x0C92BA89F1AF26F8 0x821F2D2C  
		static void set_player_wanted_centre_position(Player player, Player position, Vehicle p2, Ped* p3)
		{
			invoke<Void>(0x520E541A97A13354, player, position, p2, p3);
		} // 0x520E541A97A13354 0xF261633A  
		static int get_wanted_level_threshold(int wantedLevel) { return invoke<int>(0xFDD179EAF45B556C, wantedLevel); }
		// 0xFDD179EAF45B556C 0xD9783F6B  
		static void set_player_wanted_level(Player player, int wantedLevel, bool disableNoMission)
		{
			invoke<Void>(0x39FF19C64EF7DA5B, player, wantedLevel, disableNoMission);
		} // 0x39FF19C64EF7DA5B 0xB7A0914B  
		static void set_player_wanted_level_no_drop(Player player, int wantedLevel, bool p2)
		{
			invoke<Void>(0x340E61DE7F471565, player, wantedLevel, p2);
		} // 0x340E61DE7F471565 0xED6F44F5  
		static void set_player_wanted_level_now(Player player, bool p1)
		{
			invoke<Void>(0xE0A7D1E497FFCD6F, player, p1);
		} // 0xE0A7D1E497FFCD6F 0xAF3AFD83  
		static bool are_player_flashing_stars_about_to_drop(Player player)
		{
			return invoke<bool>(0xAFAF86043E5874E9, player);
		} // 0xAFAF86043E5874E9 0xE13A71C7  
		static bool are_player_stars_greyed_out(Player player) { return invoke<bool>(0x0A6EB355EE14A2DB, player); }
		// 0x0A6EB355EE14A2DB 0x5E72AB72  
		static void set_dispatch_cops_for_player(Player player, bool toggle)
		{
			invoke<Void>(0xDB172424876553F4, player, toggle);
		} // 0xDB172424876553F4 0x48A18913  
		static bool is_player_wanted_level_greater(Player player, int wantedLevel)
		{
			return invoke<bool>(0x238DB2A2C23EE9EF, player, wantedLevel);
		} // 0x238DB2A2C23EE9EF 0x589A2661  
		static void clear_player_wanted_level(Player player) { invoke<Void>(0xB302540597885499, player); }
		// 0xB302540597885499 0x54EA5BCC  
		static bool is_player_dead(Player player) { return invoke<bool>(0x424D4687FA1E5652, player); }
		// 0x424D4687FA1E5652 0x140CA5A8  
		static bool is_player_pressing_horn(Player player) { return invoke<bool>(0xFA1E2BF8B10598F9, player); }
		// 0xFA1E2BF8B10598F9 0xED1D1662  
		static void set_player_control(Player player, bool toggle, int flags)
		{
			invoke<Void>(0x8D32347D6D4C40A2, player, toggle, flags);
		} // 0x8D32347D6D4C40A2 0xD17AFCD8  
		static int get_player_wanted_level(Player player) { return invoke<int>(0xE28E54788CE8F12D, player); }
		// 0xE28E54788CE8F12D 0xBDCDD163  
		static void set_max_wanted_level(int maxWantedLevel) { invoke<Void>(0xAA5F02DB48D704B9, maxWantedLevel); }
		// 0xAA5F02DB48D704B9 0x665A06F5  
		static void set_police_radar_blips(bool toggle) { invoke<Void>(0x43286D561B72B8BF, toggle); }
		// 0x43286D561B72B8BF 0x8E114B10  
		static void set_police_ignore_player(Player player, bool toggle)
		{
			invoke<Void>(0x32C62AA929C2DA6A, player, toggle);
		} // 0x32C62AA929C2DA6A 0xE6DE71B7  
		static bool is_player_playing(Player player) { return invoke<bool>(0x5E9564D8246B909A, player); }
		// 0x5E9564D8246B909A 0xE15D777F  
		static void set_everyone_ignore_player(Player player, bool toggle)
		{
			invoke<Void>(0x8EEDA153AD141BA4, player, toggle);
		} // 0x8EEDA153AD141BA4 0xC915285E  
		static void set_all_random_peds_flee(Player player, bool toggle)
		{
			invoke<Void>(0x056E0FE8534C2949, player, toggle);
		} // 0x056E0FE8534C2949 0x49EAE968  
		static void set_all_random_peds_flee_this_frame(Player player) { invoke<Void>(0x471D2FF42A94B4F2, player); }
		// 0x471D2FF42A94B4F2 0xBF974891  
		static void _0xde45d1a1ef45ee61(Player player, bool toggle)
		{
			invoke<Void>(0xDE45D1A1EF45EE61, player, toggle);
		} // 0xDE45D1A1EF45EE61 0x274631FE  
		static void _0xc3376f42b1faccc6(Player player) { invoke<Void>(0xC3376F42B1FACCC6, player); }
		// 0xC3376F42B1FACCC6 0x02DF7AF4  
		static void set_ignore_low_priority_shocking_events(Player player, bool toggle)
		{
			invoke<Void>(0x596976B02B6B5700, player, toggle);
		} // 0x596976B02B6B5700 0xA3D675ED  
		static void set_wanted_level_multiplier(float multiplier) { invoke<Void>(0x020E5F00CDA207BA, multiplier); }
		// 0x020E5F00CDA207BA 0x1359292F  
		static void set_wanted_level_difficulty(Player player, float difficulty)
		{
			invoke<Void>(0x9B0BB33B04405E7A, player, difficulty);
		} // 0x9B0BB33B04405E7A 0xB552626C  
		static void reset_wanted_level_difficulty(Player player) { invoke<Void>(0xB9D0DD990DC141DD, player); }
		// 0xB9D0DD990DC141DD 0xA64C378D  
		static void start_firing_amnesty(int duration) { invoke<Void>(0xBF9BD71691857E48, duration); }
		// 0xBF9BD71691857E48 0x5F8A22A6  
		static void report_crime(Player player, int crimeType, int wantedLvlThresh)
		{
			invoke<Void>(0xE9B09589827545E7, player, crimeType, wantedLvlThresh);
		} // 0xE9B09589827545E7 0xD8EB3A44  
		static void _switch_crime_type(Player player, int p1) { invoke<Void>(0x9A987297ED8BD838, player, p1); }
		// 0x9A987297ED8BD838 0x59B5C2A2  
		static void _0xbc9490ca15aea8fb(Player player) { invoke<Void>(0xBC9490CA15AEA8FB, player); }
		// 0xBC9490CA15AEA8FB 0x6B34A160  
		static void _0x4669b3ed80f24b4e(Player player) { invoke<Void>(0x4669B3ED80F24B4E, player); }
		// 0x4669B3ED80F24B4E 0xB9FB142F  
		static void _0xad73ce5a09e42d12(Player player) { invoke<Void>(0xAD73CE5A09E42D12, player); }
		// 0xAD73CE5A09E42D12 0x85725848  
		static void _0x36f1b38855f2a8df(Player player) { invoke<Void>(0x36F1B38855F2A8DF, player); }
		// 0x36F1B38855F2A8DF 0x3A7E5FB6  
		static void _0xdc64d2c53493ed12(Player player) { invoke<Void>(0xDC64D2C53493ED12, player); }
		// 0xDC64D2C53493ED12 0xD15C4B1C  
		static void _0xb45eff719d8427a6(float p0) { invoke<Void>(0xB45EFF719D8427A6, p0); }
		// 0xB45EFF719D8427A6 0xBF6993C7  
		static void _i_want_hentai() { invoke<Void>(0x0032A6DBA562C518); } // 0x0032A6DBA562C518 0x47CAB814  
		static bool can_player_start_mission(Player player) { return invoke<bool>(0xDE7465A27D403C06, player); }
		// 0xDE7465A27D403C06 0x39E3CB3F  
		static bool is_player_ready_for_cutscene(Player player) { return invoke<bool>(0x908CBECC2CAA3690, player); }
		// 0x908CBECC2CAA3690 0xBB77E9CD  
		static bool is_player_targetting_entity(Player player, Entity entity)
		{
			return invoke<bool>(0x7912F7FC4F6264B6, player, entity);
		} // 0x7912F7FC4F6264B6 0xF3240B77  
		static bool get_player_target_entity(Player player, Entity* entity)
		{
			return invoke<bool>(0x13EDE1A5DBF797C9, player, entity);
		} // 0x13EDE1A5DBF797C9 0xF6AAA2D7  
		static bool is_player_free_aiming(Player player) { return invoke<bool>(0x2E397FD2ECD37C87, player); }
		// 0x2E397FD2ECD37C87 0x1DEC67B7  
		static bool is_player_free_aiming_at_entity(Player player, Entity entity)
		{
			return invoke<bool>(0x3C06B5C839B38F7B, player, entity);
		} // 0x3C06B5C839B38F7B 0x7D80EEAA  
		static bool get_entity_player_is_free_aiming_at(Player player, Entity* entity)
		{
			return invoke<bool>(0x2975C866E6713290, player, entity);
		} // 0x2975C866E6713290 0x8866D9D0  
		static void set_player_lockon_range_override(Player player, float range)
		{
			invoke<Void>(0x29961D490E5814FD, player, range);
		} // 0x29961D490E5814FD 0x74D42C03  
		static void set_player_can_do_drive_by(Player player, bool toggle)
		{
			invoke<Void>(0x6E8834B52EC20C77, player, toggle);
		} // 0x6E8834B52EC20C77 0xF4D99685  
		static void set_player_can_be_hassled_by_gangs(Player player, bool toggle)
		{
			invoke<Void>(0xD5E460AD7020A246, player, toggle);
		} // 0xD5E460AD7020A246 0x71B305BB  
		static void set_player_can_use_cover(Player player, bool toggle)
		{
			invoke<Void>(0xD465A8599DFF6814, player, toggle);
		} // 0xD465A8599DFF6814 0x13CAFAFA  
		static int get_max_wanted_level() { return invoke<int>(0x462E0DB9B137DC5F); } // 0x462E0DB9B137DC5F 0x457F1E44  
		static bool is_player_targetting_anything(Player player) { return invoke<bool>(0x78CFE51896B6B8A4, player); }
		// 0x78CFE51896B6B8A4 0x456DB50D  
		static void set_player_sprint(Player player, bool toggle) { invoke<Void>(0xA01B8075D8B92DF4, player, toggle); }
		// 0xA01B8075D8B92DF4 0x7DD7900C  
		static void reset_player_stamina(Player player) { invoke<Void>(0xA6F312FCCE9C1DFE, player); }
		// 0xA6F312FCCE9C1DFE 0xC0445A9C  
		static void restore_player_stamina(Player player, float p1) { invoke<Void>(0xA352C1B864CAFD33, player, p1); }
		// 0xA352C1B864CAFD33 0x62A93608  
		static float get_player_sprint_stamina_remaining(Player player)
		{
			return invoke<float>(0x3F9F16F8E65A7ED7, player);
		} // 0x3F9F16F8E65A7ED7 0x47017C90  
		static float get_player_sprint_time_remaining(Player player)
		{
			return invoke<float>(0x1885BC9B108B4C99, player);
		} // 0x1885BC9B108B4C99 0x40E80543  
		static float get_player_underwater_time_remaining(Player player)
		{
			return invoke<float>(0xA1FCF8E6AF40B731, player);
		} // 0xA1FCF8E6AF40B731 0x1317125A  
		static int get_player_group(Player player) { return invoke<int>(0x0D127585F77030AF, player); }
		// 0x0D127585F77030AF 0xA5EDCDE8  
		static int get_player_max_armour(Player player) { return invoke<int>(0x92659B4CE1863CB3, player); }
		// 0x92659B4CE1863CB3 0x02A50657  
		static bool is_player_control_on(Player player) { return invoke<bool>(0x49C32D60007AFA47, player); }
		// 0x49C32D60007AFA47 0x618857F2  
		static bool _is_player_cam_control_disabled() { return invoke<bool>(0x7C814D2FB49F40C0); }
		// 0x7C814D2FB49F40C0  
		static bool is_player_script_control_on(Player player) { return invoke<bool>(0x8A876A65283DD7D7, player); }
		// 0x8A876A65283DD7D7 0x61B00A84  
		static bool is_player_climbing(Player player) { return invoke<bool>(0x95E8F73DC65EFB9C, player); }
		// 0x95E8F73DC65EFB9C 0x4A9E9AE0  
		static bool is_player_being_arrested(Player player, bool atArresting)
		{
			return invoke<bool>(0x388A47C51ABDAC8E, player, atArresting);
		} // 0x388A47C51ABDAC8E 0x7F6A60D3  
		static void reset_player_arrest_state(Player player) { invoke<Void>(0x2D03E13C460760D6, player); }
		// 0x2D03E13C460760D6 0x453C7CAB  
		static Vehicle get_players_last_vehicle() { return invoke<Vehicle>(0xB6997A7EB3F5C8C0); }
		// 0xB6997A7EB3F5C8C0 0xE2757AC1  
		static Player get_player_index() { return invoke<Player>(0xA5EDC40EF369B48D); }
		// 0xA5EDC40EF369B48D 0x309BBDC1  
		static Player int_to_playerindex(int value) { return invoke<Player>(0x41BD2A6B006AF756, value); }
		// 0x41BD2A6B006AF756 0x98DD98F1  
		static int int_to_participantindex(int value) { return invoke<int>(0x9EC6603812C24710, value); }
		// 0x9EC6603812C24710 0x98F3B274  
		static int get_time_since_player_hit_vehicle(Player player) { return invoke<int>(0x5D35ECF3A81A0EE0, player); }
		// 0x5D35ECF3A81A0EE0 0x6E9B8B9E  
		static int get_time_since_player_hit_ped(Player player) { return invoke<int>(0xE36A25322DC35F42, player); }
		// 0xE36A25322DC35F42 0xB6209195  
		static int get_time_since_player_drove_on_pavement(Player player)
		{
			return invoke<int>(0xD559D2BE9E37853B, player);
		} // 0xD559D2BE9E37853B 0x8836E732  
		static int get_time_since_player_drove_against_traffic(Player player)
		{
			return invoke<int>(0xDB89591E290D9182, player);
		} // 0xDB89591E290D9182 0x9F27D00E  
		static bool is_player_free_for_ambient_task(Player player) { return invoke<bool>(0xDCCFD3F106C36AB4, player); }
		// 0xDCCFD3F106C36AB4 0x85C7E232  
		static Player player_id() { return invoke<Player>(0x4F8644AF03D0E0D6); } // 0x4F8644AF03D0E0D6 0x8AEA886C  
		static Ped player_ped_id() { return invoke<Ped>(0xD80958FC74E988A6); } // 0xD80958FC74E988A6 0xFA92E226  
		static int network_player_id_to_int() { return invoke<int>(0xEE68096F9F37341E); }
		// 0xEE68096F9F37341E 0x8DD5B838  
		static bool has_force_cleanup_occurred(int cleanupFlags)
		{
			return invoke<bool>(0xC968670BFACE42D9, cleanupFlags);
		} // 0xC968670BFACE42D9 0x4B37333C  
		static void force_cleanup(int cleanupFlags) { invoke<Void>(0xBC8983F38F78ED51, cleanupFlags); }
		// 0xBC8983F38F78ED51 0xFDAAEA2B  
		static void force_cleanup_for_all_threads_with_this_name(const char* name, int cleanupFlags)
		{
			invoke<Void>(0x4C68DDDDF0097317, name, cleanupFlags);
		} // 0x4C68DDDDF0097317 0x04256C73  
		static void force_cleanup_for_thread_with_this_id(int id, int cleanupFlags)
		{
			invoke<Void>(0xF745B37630DF176B, id, cleanupFlags);
		} // 0xF745B37630DF176B 0x882D3EB3  
		static int get_cause_of_most_recent_force_cleanup() { return invoke<int>(0x9A41CF4674A12272); }
		// 0x9A41CF4674A12272 0x39AA9FC8  
		static void set_player_may_only_enter_this_vehicle(Player player, Vehicle vehicle)
		{
			invoke<Void>(0x8026FF78F208978A, player, vehicle);
		} // 0x8026FF78F208978A 0xA454DD29  
		static void set_player_may_not_enter_any_vehicle(Player player) { invoke<Void>(0x1DE37BBF9E9CC14A, player); }
		// 0x1DE37BBF9E9CC14A 0xAF7AFCC4  
		static Player* give_achievement_to_player(Player* achievement1)
		{
			return invoke<Player*>(0xBEC7076D64130195, achievement1);
		} // 0xBEC7076D64130195 0x822BC992  
		static bool _0xc2afffdabbdc2c5c(Any p0, Any p1) { return invoke<bool>(0xC2AFFFDABBDC2C5C, p0, p1); }
		// 0xC2AFFFDABBDC2C5C  
		static Cam _0x1c186837d0619335(Any p0) { return invoke<Cam>(0x1C186837D0619335, p0); } // 0x1C186837D0619335  
		static bool has_achievement_been_passed(int achievement)
		{
			return invoke<bool>(0x867365E111A3B6EB, achievement);
		} // 0x867365E111A3B6EB 0x136A5BE9  
		static bool is_player_online() { return invoke<bool>(0xF25D331DC2627BBC); } // 0xF25D331DC2627BBC 0x9FAB6729  
		static bool is_player_logging_in_np() { return invoke<bool>(0x74556E1420867ECA); }
		// 0x74556E1420867ECA 0x8F72FAD0  
		static void display_system_signin_ui(bool unk) { invoke<Void>(0x94DD7888C10A979E, unk); }
		// 0x94DD7888C10A979E 0x4264CED2  
		static bool is_system_ui_being_displayed() { return invoke<bool>(0x5D511E3867C87139); }
		// 0x5D511E3867C87139 0xE495B6DA  
		static void set_player_invincible(Player player, bool toggle)
		{
			invoke<Void>(0x239528EACDC3E7DE, player, toggle); //0x36643EAE6212D16F by 0x239528EACDC3E7DE
		} // 0x239528EACDC3E7DE 0xDFB9A2A2  
		static void set_player_invincible2(Player player, bool toggle)
		{
			invoke<Void>(0x36643EAE6212D16F, player, toggle); //0x36643EAE6212D16F by 0x239528EACDC3E7DE
		} // 0x239528EACDC3E7DE 0xDFB9A2A2  
		static bool get_player_invincible(Player player) { return invoke<bool>(0xB721981B2B939E07, player); }
		// 0xB721981B2B939E07 0x680C90EE  
		static void _0xcac57395b151135f(Player player, bool p1) { invoke<Void>(0xCAC57395B151135F, player, p1); }
		// 0xCAC57395B151135F 0x00563E0D  
		static void remove_player_helmet(Player player, bool p2) { invoke<Void>(0xF3AC26D3CC576528, player, p2); }
		// 0xF3AC26D3CC576528 0x6255F3B4  
		static void give_player_ragdoll_control(Player player, bool toggle)
		{
			invoke<Void>(0x3C49C870E66F0A28, player, toggle);
		} // 0x3C49C870E66F0A28 0xC7B4D7AC  
		static void set_player_lockon(Player player, bool toggle) { invoke<Void>(0x5C8B2F450EE4328E, player, toggle); }
		// 0x5C8B2F450EE4328E 0x0B270E0F  
		static void set_player_targeting_mode(int targetMode) { invoke<Void>(0xB1906895227793F3, targetMode); }
		// 0xB1906895227793F3 0x61CAE253  
		static void _0x5702b917b99db1cd(Any p0) { invoke<Void>(0x5702B917B99DB1CD, p0); } // 0x5702B917B99DB1CD  
		static Any _0xb9cf1f793a9f1bf1() { return invoke<Any>(0xB9CF1F793A9F1BF1); } // 0xB9CF1F793A9F1BF1  
		static void clear_player_has_damaged_at_least_one_ped(Player player)
		{
			invoke<Void>(0xF0B67A4DE6AB5F98, player);
		} // 0xF0B67A4DE6AB5F98 0x1D31CBBD  
		static bool has_player_damaged_at_least_one_ped(Player player)
		{
			return invoke<bool>(0x20CE80B0C2BF4ACC, player);
		} // 0x20CE80B0C2BF4ACC 0x14F52453  
		static void clear_player_has_damaged_at_least_one_non_animal_ped(Player player)
		{
			invoke<Void>(0x4AACB96203D11A31, player);
		} // 0x4AACB96203D11A31 0x7E3BFBC5  
		static bool has_player_damaged_at_least_one_non_animal_ped(Player player)
		{
			return invoke<bool>(0xE4B90F367BD81752, player);
		} // 0xE4B90F367BD81752 0xA3707DFC  
		static void set_air_drag_multiplier_for_players_vehicle(Player player, float multiplier)
		{
			invoke<Void>(0xCA7DC8329F0A1E9E, player, multiplier);
		} // 0xCA7DC8329F0A1E9E 0xF20F72E5  
		static void set_swim_multiplier_for_player(Player player, float multiplier)
		{
			invoke<Void>(0xA91C6F0FF7D16A13, player, multiplier);
		} // 0xA91C6F0FF7D16A13 0xB986FF47  
		static void set_run_sprint_multiplier_for_player(Player player, float multiplier)
		{
			invoke<Void>(0x6DB47AA77FD94E09, player, multiplier);
		} // 0x6DB47AA77FD94E09 0x825423C2  
		static int get_time_since_last_arrest() { return invoke<int>(0x5063F92F07C2A316); }
		// 0x5063F92F07C2A316 0x62824EF4  
		static int get_time_since_last_death() { return invoke<int>(0xC7034807558DDFCA); }
		// 0xC7034807558DDFCA 0x24BC5AC0  
		static void assisted_movement_close_route() { invoke<Void>(0xAEBF081FFC0A0E5E); }
		// 0xAEBF081FFC0A0E5E 0xF23277F3  
		static void assisted_movement_flush_route() { invoke<Void>(0x8621390F0CDCFE1F); }
		// 0x8621390F0CDCFE1F 0xD04568B9  
		static void set_player_forced_aim(Player player, bool toggle)
		{
			invoke<Void>(0x0FEE4F80AC44A726, player, toggle);
		} // 0x0FEE4F80AC44A726 0x94E42E2E  
		static void set_player_forced_zoom(Player player, bool toggle)
		{
			invoke<Void>(0x75E7D505F2B15902, player, toggle);
		} // 0x75E7D505F2B15902 0xB0C576CB  
		static void set_player_force_skip_aim_intro(Player player, bool toggle)
		{
			invoke<Void>(0x7651BC64AE59E128, player, toggle);
		} // 0x7651BC64AE59E128 0x374F42F0  
		static void disable_player_firing(Player player, bool toggle)
		{
			invoke<Void>(0x5E6CC07646BBEAB8, player, toggle);
		} // 0x5E6CC07646BBEAB8 0x30CB28CB  
		static void _0xb885852c39cc265d() { invoke<Void>(0xB885852C39CC265D); } // 0xB885852C39CC265D  
		static void set_disable_ambient_melee_move(Player player, bool toggle)
		{
			invoke<Void>(0x2E8AABFA40A84F8C, player, toggle);
		} // 0x2E8AABFA40A84F8C 0xCCD937E7  
		static void set_player_max_armour(Player player, int value) { invoke<Void>(0x77DFCCF5948B8C71, player, value); }
		// 0x77DFCCF5948B8C71 0xC6C3C53B  
		static void special_ability_deactivate(Player player) { invoke<Void>(0xD6A953C6D1492057, player); }
		// 0xD6A953C6D1492057 0x80C2AB09  
		static void special_ability_deactivate_fast(Player player) { invoke<Void>(0x9CB5CE07A3968D5A, player); }
		// 0x9CB5CE07A3968D5A 0x0751908A  
		static void special_ability_reset(Player player) { invoke<Void>(0x375F0E738F861A94, player); }
		// 0x375F0E738F861A94 0xA7D8BCD3  
		static void _0xc9a763d8fe87436a(Player player) { invoke<Void>(0xC9A763D8FE87436A, player); }
		// 0xC9A763D8FE87436A 0x4136829A  
		static void special_ability_charge_small(Player player, bool p1, bool p2)
		{
			invoke<Void>(0x2E7B9B683481687D, player, p1, p2);
		} // 0x2E7B9B683481687D 0x6F463F56  
		static void special_ability_charge_medium(Player player, bool p1, bool p2)
		{
			invoke<Void>(0xF113E3AA9BC54613, player, p1, p2);
		} // 0xF113E3AA9BC54613 0xAB55D8F3  
		static void special_ability_charge_large(Player player, bool p1, bool p2)
		{
			invoke<Void>(0xF733F45FA4497D93, player, p1, p2);
		} // 0xF733F45FA4497D93 0xF440C04D  
		static void special_ability_charge_continuous(Player player, Ped p2)
		{
			invoke<Void>(0xED481732DFF7E997, player, p2);
		} // 0xED481732DFF7E997 0x5FEE98A2  
		static void special_ability_charge_absolute(Player player, int p1, bool p2)
		{
			invoke<Void>(0xB7B0870EB531D08D, player, p1, p2);
		} // 0xB7B0870EB531D08D 0x72429998  
		static void special_ability_charge_normalized(Player player, float normalizedValue, bool p2)
		{
			invoke<Void>(0xA0696A65F009EE18, player, normalizedValue, p2);
		} // 0xA0696A65F009EE18 0x8C7E68C1  
		static void special_ability_fill_meter(Player player, bool p1) { invoke<Void>(0x3DACA8DDC6FD4980, player, p1); }
		// 0x3DACA8DDC6FD4980 0xB71589DA  
		static void special_ability_deplete_meter(Player player, bool p1)
		{
			invoke<Void>(0x1D506DBBBC51E64B, player, p1);
		} // 0x1D506DBBBC51E64B 0x9F80F6DF  
		static void special_ability_lock(Hash playerModel) { invoke<Void>(0x6A09D0D590A47D13, playerModel); }
		// 0x6A09D0D590A47D13 0x1B7BB388  
		static void special_ability_unlock(Hash playerModel) { invoke<Void>(0xF145F3BE2EFA9A3B, playerModel); }
		// 0xF145F3BE2EFA9A3B 0x1FDB2919  
		static bool is_special_ability_unlocked(Hash playerModel)
		{
			return invoke<bool>(0xC6017F6A6CDFA694, playerModel);
		} // 0xC6017F6A6CDFA694 0xC9C75E82  
		static bool is_special_ability_active(Player player) { return invoke<bool>(0x3E5F7FC85D854E15, player); }
		// 0x3E5F7FC85D854E15 0x1B17E334  
		static bool is_special_ability_meter_full(Player player) { return invoke<bool>(0x05A1FE504B7F2587, player); }
		// 0x05A1FE504B7F2587 0x2E19D7F6  
		static void enable_special_ability(Player player, bool toggle)
		{
			invoke<Void>(0x181EC197DAEFE121, player, toggle);
		} // 0x181EC197DAEFE121 0xC86C1B4E  
		static bool is_special_ability_enabled(Player player) { return invoke<bool>(0xB1D200FE26AEF3CB, player); }
		// 0xB1D200FE26AEF3CB 0xC01238CC  
		static void set_special_ability_multiplier(float multiplier) { invoke<Void>(0xA49C426ED0CA4AB7, multiplier); }
		// 0xA49C426ED0CA4AB7 0xFF1BC556  
		static void _0xffee8fa29ab9a18e(Player player) { invoke<Void>(0xFFEE8FA29AB9A18E, player); }
		// 0xFFEE8FA29AB9A18E 0x5D0FE25B  
		static bool _0x5fc472c501ccadb3(Player player) { return invoke<bool>(0x5FC472C501CCADB3, player); }
		// 0x5FC472C501CCADB3 0x46E7E31D  
		static bool _0xf10b44fd479d69f3(Player player, int p1) { return invoke<bool>(0xF10B44FD479D69F3, player, p1); }
		// 0xF10B44FD479D69F3 0x1E359CC8  
		static bool _0xdd2620b7b9d16ff1(Player player, float p1)
		{
			return invoke<bool>(0xDD2620B7B9D16FF1, player, p1);
		} // 0xDD2620B7B9D16FF1 0x8CB53C9F  
		static void start_player_teleport(Player player, float x, float y, float z, float heading, bool p5, bool p6,
			bool p7)
		{
			invoke<Void>(0xAD15F075A4DA0FDE, player, x, y, z, heading, p5, p6, p7);
		} // 0xAD15F075A4DA0FDE 0xC552E06C  
		static bool _has_player_teleport_finished(Player player) { return invoke<bool>(0xE23D5873C2394C61, player); }
		// 0xE23D5873C2394C61  
		static void stop_player_teleport() { invoke<Void>(0xC449EDED9D73009C); } // 0xC449EDED9D73009C 0x86AB8DBB  
		static bool is_player_teleport_active() { return invoke<bool>(0x02B15662D7F8886F); }
		// 0x02B15662D7F8886F 0x3A11D118  
		static float get_player_current_stealth_noise(Player player)
		{
			return invoke<float>(0x2F395D61F3A1F877, player);
		} // 0x2F395D61F3A1F877 0xC3B02362  
		static void set_player_health_recharge_multiplier(Player player, float regenRate)
		{
			invoke<Void>(0x5DB660B38DD98A31, player, regenRate);
		} // 0x5DB660B38DD98A31 0x45514731  
		static void set_player_weapon_damage_modifier(Player player, float damageAmount)
		{
			invoke<Void>(0xCE07B9F7817AADA3, player, damageAmount);
		} // 0xCE07B9F7817AADA3 0xB02C2F39  
		static void set_player_weapon_defense_modifier(Player player, ScrHandle modifier)
		{
			invoke<Void>(0x2D83BC011CA14A3C, player, modifier);
		} // 0x2D83BC011CA14A3C 0xAE446344  
		static void set_player_melee_weapon_damage_modifier(Player player, float modifier)
		{
			invoke<Void>(0x4A3DC7ECCC321032, player, modifier);
		} // 0x4A3DC7ECCC321032 0x362E69AD  
		static void set_player_melee_weapon_defense_modifier(Player player, float modifier)
		{
			invoke<Void>(0xAE540335B4ABC4E2, player, modifier);
		} // 0xAE540335B4ABC4E2 0x9F3D577F  
		static void set_player_vehicle_damage_modifier(Player player, float damageAmount)
		{
			invoke<Void>(0xA50E117CDDF82F0C, player, damageAmount);
		} // 0xA50E117CDDF82F0C 0x823ECA63  
		static void set_player_vehicle_defense_modifier(Player player, float modifier)
		{
			invoke<Void>(0x4C60E6EFDAFF2462, player, modifier);
		} // 0x4C60E6EFDAFF2462 0xA16626C7  
		static void set_player_parachute_tint_index(Player player, int tintIndex)
		{
			invoke<Void>(0xA3D0E54541D9A5E5, player, tintIndex);
		} // 0xA3D0E54541D9A5E5 0x8EA12EDB  
		static void get_player_parachute_tint_index(Player player, int* tintIndex)
		{
			invoke<Void>(0x75D3F7A1B0D9B145, player, tintIndex);
		} // 0x75D3F7A1B0D9B145 0x432B0509  
		static void set_player_reserve_parachute_tint_index(Player player, int index)
		{
			invoke<Void>(0xAF04C87F5DC1DF38, player, index);
		} // 0xAF04C87F5DC1DF38 0x70689638  
		static void get_player_reserve_parachute_tint_index(Player player, int* index)
		{
			invoke<Void>(0xD5A016BC3C09CF40, player, index);
		} // 0xD5A016BC3C09CF40 0x77B8EF01  
		static void set_player_parachute_pack_tint_index(Player player, int tintIndex)
		{
			invoke<Void>(0x93B0FB27C9A04060, player, tintIndex);
		} // 0x93B0FB27C9A04060 0xD79D5D1B  
		static void get_player_parachute_pack_tint_index(Player player, int* tintIndex)
		{
			invoke<Void>(0x6E9C742F340CE5A2, player, tintIndex);
		} // 0x6E9C742F340CE5A2 0x4E418E13  
		static void set_player_has_reserve_parachute(Player player) { invoke<Void>(0x7DDAB28D31FAC363, player); }
		// 0x7DDAB28D31FAC363 0xA3E4798E  
		static bool get_player_has_reserve_parachute(Player player) { return invoke<bool>(0x5DDFE2FF727F3CA3, player); }
		// 0x5DDFE2FF727F3CA3 0x30DA1DA1  
		static void set_player_can_leave_parachute_smoke_trail(Player player, bool enabled)
		{
			invoke<Void>(0xF401B182DBA8AF53, player, enabled);
		} // 0xF401B182DBA8AF53 0x832DEB7A  
		static void set_player_parachute_smoke_trail_color(Player player, int r, int g, int b)
		{
			invoke<Void>(0x8217FD371A4625CF, player, r, g, b);
		} // 0x8217FD371A4625CF 0x14FE9264  
		static void get_player_parachute_smoke_trail_color(Player player, int* r, int* g, int* b)
		{
			invoke<Void>(0xEF56DBABD3CD4887, player, r, g, b);
		} // 0xEF56DBABD3CD4887 0xF66E5CDD  
		static void set_player_reset_flag_prefer_rear_seats(Player player, int flags)
		{
			invoke<Void>(0x11D5F725F0E780E0, player, flags);
		} // 0x11D5F725F0E780E0 0x725C6174  
		static void set_player_noise_multiplier(Player player, float multiplier)
		{
			invoke<Void>(0xDB89EF50FF25FCE9, player, multiplier);
		} // 0xDB89EF50FF25FCE9 0x15786DD1  
		static void set_player_sneaking_noise_multiplier(Player player, float multiplier)
		{
			invoke<Void>(0xB2C1A29588A9F47C, player, multiplier);
		} // 0xB2C1A29588A9F47C 0x8D2D89C4  
		static bool can_ped_hear_player(Player player, Ped ped)
		{
			return invoke<bool>(0xF297383AA91DCA29, player, ped);
		} // 0xF297383AA91DCA29 0x1C70B2EB  
		static void simulate_player_input_gait(Player control, float amount, int gaitType, float speed, bool p4,
			bool p5)
		{
			invoke<Void>(0x477D5D63E63ECA5D, control, amount, gaitType, speed, p4, p5);
		} // 0x477D5D63E63ECA5D 0x0D77CC34  
		static void reset_player_input_gait(Player player) { invoke<Void>(0x19531C47A2ABD691, player); }
		// 0x19531C47A2ABD691 0x4A701EE1  
		static void set_auto_give_parachute_when_enter_plane(Player player, bool toggle)
		{
			invoke<Void>(0x9F343285A00B4BB6, player, toggle);
		} // 0x9F343285A00B4BB6 0xA97C2059  
		static void _0xd2b315b6689d537d(Player player, bool p1) { invoke<Void>(0xD2B315B6689D537D, player, p1); }
		// 0xD2B315B6689D537D 0xA25D767E  
		static void set_player_stealth_perception_modifier(Player player, float value)
		{
			invoke<Void>(0x4E9021C1FCDD507A, player, value);
		} // 0x4E9021C1FCDD507A 0x3D26105F  
		static bool _0x690a61a6d13583f6(Any p0) { return invoke<bool>(0x690A61A6D13583F6, p0); }
		// 0x690A61A6D13583F6 0x1D371529  
		static void _0x9edd76e87d5d51ba(Player player) { invoke<Void>(0x9EDD76E87D5D51BA, player); }
		// 0x9EDD76E87D5D51BA 0xE30A64DC  
		static void set_player_simulate_aiming(Player player, bool toggle)
		{
			invoke<Void>(0xC54C95DA968EC5B5, player, toggle);
		} // 0xC54C95DA968EC5B5 0xF1E0CAFC  
		static void set_player_cloth_pin_frames(Player player, bool toggle)
		{
			invoke<Void>(0x749FADDF97DFE930, player, toggle);
		} // 0x749FADDF97DFE930 0xF7A0F00F  
		static void set_player_cloth_package_index(int index) { invoke<Void>(0x9F7BBA2EA6372500, index); }
		// 0x9F7BBA2EA6372500 0xB8209F16  
		static void set_player_cloth_lock_counter(int value) { invoke<Void>(0x14D913B777DFF5DA, value); }
		// 0x14D913B777DFF5DA 0x8D9FD4D1  
		static void player_attach_virtual_bound(float p0, float p1, float p2, float p3, float p4, float p5, float p6,
			float p7)
		{
			invoke<Void>(0xED51733DC73AED51, p0, p1, p2, p3, p4, p5, p6, p7);
		} // 0xED51733DC73AED51 0xECD12E60  
		static void player_detach_virtual_bound() { invoke<Void>(0x1DD5897E2FA6E7C9); }
		// 0x1DD5897E2FA6E7C9 0x96100EA4  
		static bool has_player_been_spotted_in_stolen_vehicle(Player player)
		{
			return invoke<bool>(0xD705740BB0A1CF4C, player);
		} // 0xD705740BB0A1CF4C 0x4A01B76A  
		static bool _0x38d28da81e4e9bf9(Player player) { return invoke<bool>(0x38D28DA81E4E9BF9, player); }
		// 0x38D28DA81E4E9BF9 0x013B4F72  
		static bool _0xbc0753c9ca14b506(Player player, int p1, bool p2)
		{
			return invoke<bool>(0xBC0753C9CA14B506, player, p1, p2);
		} // 0xBC0753C9CA14B506 0x9DF75B2A  
		static void _expand_world_limits(float x, float y, float z) { invoke<Void>(0x5006D96C995A5827, x, y, z); }
		// 0x5006D96C995A5827  
		static bool is_player_riding_train(Player player) { return invoke<bool>(0x4EC12697209F2196, player); }
		// 0x4EC12697209F2196 0x9765E71D  
		static bool has_player_left_the_world(Player player) { return invoke<bool>(0xD55DDFB47991A294, player); }
		// 0xD55DDFB47991A294 0xFEA40B6C  
		static void _0xff300c7649724a0b(Player player, bool p1) { invoke<Void>(0xFF300C7649724A0B, player, p1); }
		// 0xFF300C7649724A0B 0xAD8383FA  
		static void set_player_parachute_variation_override(Player player, int p1, Any p2, Any p3, bool p4)
		{
			invoke<Void>(0xD9284A8C0D48352C, player, p1, p2, p3, p4);
		} // 0xD9284A8C0D48352C 0x9254249D  
		static void clear_player_parachute_variation_override(Player player)
		{
			invoke<Void>(0x0F4CC924CF8C7B21, player);
		} // 0x0F4CC924CF8C7B21 0xFD60F5AB  
		static void set_player_parachute_model_override(Player player, Hash model)
		{
			invoke<Void>(0x977DB4641F6FC3DB, player, model);
		} // 0x977DB4641F6FC3DB 0x5D382498  
		static void clear_player_parachute_model_override(Player player) { invoke<Void>(0x8753997EB5F6EE3F, player); }
		// 0x8753997EB5F6EE3F 0x6FF034BB  
		static void set_player_parachute_pack_model_override(Player player, Hash model)
		{
			invoke<Void>(0xDC80A4C2F18A2B64, player, model);
		} // 0xDC80A4C2F18A2B64 0xA877FF5E  
		static void clear_player_parachute_pack_model_override(Player player)
		{
			invoke<Void>(0x10C54E4389C12B42, player);
		} // 0x10C54E4389C12B42 0xBB62AAC5  
		static void disable_player_vehicle_rewards(Player player) { invoke<Void>(0xC142BE3BB9CE125F, player); }
		// 0xC142BE3BB9CE125F 0x8C6E611D  
		static void _0x2f7ceb6520288061(bool p0) { invoke<Void>(0x2F7CEB6520288061, p0); }
		// 0x2F7CEB6520288061 0x2849D4B2  
		static void _0x5dc40a8869c22141(bool p0, ScrHandle p1) { invoke<Void>(0x5DC40A8869C22141, p0, p1); }
		// 0x5DC40A8869C22141  
		static bool _0x65faee425de637b0(Player p0) { return invoke<bool>(0x65FAEE425DE637B0, p0); }
		// 0x65FAEE425DE637B0  
		static void _0x5501b7a5cdb79d37(Any p0) { invoke<Void>(0x5501B7A5CDB79D37, p0); } // 0x5501B7A5CDB79D37  
		static Player _0x56105e599cab0efa(int* p0) { return invoke<Player>(0x56105E599CAB0EFA, p0); }
		// 0x56105E599CAB0EFA  
	}

	namespace entity
	{
		static bool does_entity_exist(Object entity) { return invoke<bool>(0x7239B21A38F536BA, entity); }
		// 0x7239B21A38F536BA 0x3AC90869  
		static bool does_entity_belong_to_this_script(Entity entity, bool p1)
		{
			return invoke<bool>(0xDDE6DF5AE89981D2, entity, p1);
		} // 0xDDE6DF5AE89981D2 0xACFEB3F9  
		static bool does_entity_have_drawable(Entity entity) { return invoke<bool>(0x060D6E96F8B8E48D, entity); }
		// 0x060D6E96F8B8E48D 0xA5B33300  
		static bool does_entity_have_physics(Entity entity) { return invoke<bool>(0xDA95EA3317CC5064, entity); }
		// 0xDA95EA3317CC5064 0x9BCD2979  
		static bool has_entity_anim_finished(Entity entity, const char* animDict, const char* animName, int p3)
		{
			return invoke<bool>(0x20B711662962B472, entity, animDict, animName, p3);
		} // 0x20B711662962B472 0x1D9CAB92  
		static bool has_entity_been_damaged_by_any_object(Entity entity)
		{
			return invoke<bool>(0x95EB9964FF5C5C65, entity);
		} // 0x95EB9964FF5C5C65 0x6B74582E  
		static bool has_entity_been_damaged_by_any_ped(Entity entity)
		{
			return invoke<bool>(0x605F5A140F202491, entity);
		} // 0x605F5A140F202491 0x53FD4A25  
		static bool has_entity_been_damaged_by_any_vehicle(Entity entity)
		{
			return invoke<bool>(0xDFD5033FDBA0A9C8, entity);
		} // 0xDFD5033FDBA0A9C8 0x878C2CE0  
		static bool has_entity_been_damaged_by_entity(Entity entity1, Entity entity2, bool p2)
		{
			return invoke<bool>(0xC86D67D52A707CF8, entity1, entity2, p2);
		} // 0xC86D67D52A707CF8 0x07FC77E0  
		static bool has_entity_clear_los_to_entity(Entity entity1, Entity entity2, int traceType)
		{
			return invoke<bool>(0xFCDFF7B72D23A1AC, entity1, entity2, traceType);
		} // 0xFCDFF7B72D23A1AC 0x53576FA7  
		static bool has_entity_clear_los_to_entity_in_front(Entity entity1, Entity entity2)
		{
			return invoke<bool>(0x0267D00AF114F17A, entity1, entity2);
		} // 0x0267D00AF114F17A 0x210D87C8  
		static bool has_entity_collided_with_anything(Entity entity)
		{
			return invoke<bool>(0x8BAD02F0368D9E14, entity);
		} // 0x8BAD02F0368D9E14 0x662A2F41  
		static Hash get_last_material_hit_by_entity(Entity entity) { return invoke<Hash>(0x5C3D0A935F535C4C, entity); }
		// 0x5C3D0A935F535C4C 0xC0E3AA47  
		static Vector3 get_collision_normal_of_last_hit_for_entity(Entity entity)
		{
			return invoke<Vector3>(0xE465D4AB7CA6AE72, entity);
		} // 0xE465D4AB7CA6AE72 0xAB415C07  
		static void force_entity_ai_and_animation_update(Entity entity) { invoke<Void>(0x40FDEDB72F8293B2, entity); }
		// 0x40FDEDB72F8293B2 0x58D9775F  
		static float get_entity_anim_current_time(Entity entity, const char* animDict, const char* animName)
		{
			return invoke<float>(0x346D81500D088F42, entity, animDict, animName);
		} // 0x346D81500D088F42 0x83943F41  
		static float get_entity_anim_total_time(Entity entity, const char* animDict, const char* animName)
		{
			return invoke<float>(0x50BD2730B191E360, entity, animDict, animName);
		} // 0x50BD2730B191E360 0x433A9D18  
		static float _get_anim_duration(const char* animDict, const char* animName)
		{
			return invoke<float>(0xFEDDF04D62B8D790, animDict, animName);
		} // 0xFEDDF04D62B8D790  
		static Entity get_entity_attached_to(Entity entity) { return invoke<Entity>(0x48C2BED9180FE123, entity); }
		// 0x48C2BED9180FE123 0xFE1589F9  
		static Vector3 get_entity_coords(Entity entity, bool alive)
		{
			return invoke<Vector3>(0x3FEF770D40960D5A, entity, alive);
		} // 0x3FEF770D40960D5A 0x1647F1CB  
		static Vector3 get_entity_forward_vector(Entity entity) { return invoke<Vector3>(0x0A794A5A57F8DF91, entity); }
		// 0x0A794A5A57F8DF91 0x84DCECBF  
		static float get_entity_forward_x(Entity entity) { return invoke<float>(0x8BB4EF4214E0E6D5, entity); }
		// 0x8BB4EF4214E0E6D5 0x49FAE914  
		static float get_entity_forward_y(Entity entity) { return invoke<float>(0x866A4A5FAE349510, entity); }
		// 0x866A4A5FAE349510 0x9E2F917C  
		static float get_entity_heading(Entity entity) { return invoke<float>(0xE83D4F9BA2A38914, entity); }
		// 0xE83D4F9BA2A38914 0x972CC383  
		static float _get_entity_physics_heading(Entity entity) { return invoke<float>(0x846BF6291198A71E, entity); }
		// 0x846BF6291198A71E  
		static int get_entity_health(Entity entity) { return invoke<int>(0xEEF059FAD016D209, entity); }
		// 0xEEF059FAD016D209 0x8E3222B7  
		static int get_entity_max_health(Entity entity) { return invoke<int>(0x15D757606D170C3C, entity); }
		// 0x15D757606D170C3C 0xC7AE6AA1  
		static void set_entity_max_health(Entity entity, int value) { invoke<Void>(0x166E7CF68597D8B5, entity, value); }
		// 0x166E7CF68597D8B5 0x96F84DF8  
		static float get_entity_height(Entity entity, float X, float Y, float Z, bool atTop, bool inWorldCoords)
		{
			return invoke<float>(0x5A504562485944DD, entity, X, Y, Z, atTop, inWorldCoords);
		} // 0x5A504562485944DD 0xEE443481  
		static float get_entity_height_above_ground(Entity entity) { return invoke<float>(0x1DD55701034110E5, entity); }
		// 0x1DD55701034110E5 0x57F56A4D  
		static void get_entity_matrix(Entity entity, Vector3* rightVector, Vector3* forwardVector, Vector3* upVector,
			Vector3* position)
		{
			invoke<Void>(0xECB2FC7235A7D137, entity, rightVector, forwardVector, upVector, position);
		} // 0xECB2FC7235A7D137 0xEB9EB001  
		static Hash get_entity_model(Entity entity) { return invoke<Hash>(0x9F47B058362C84B5, entity); }
		// 0x9F47B058362C84B5 0xDAFCB3EC  
		static Vector3 get_offset_from_entity_given_world_coords(Entity entity, float posX, float posY, float posZ)
		{
			return invoke<Vector3>(0x2274BC1C4885E333, entity, posX, posY, posZ);
		} // 0x2274BC1C4885E333 0x6477EC9E  
		static Vector3
			get_offset_from_entity_in_world_coords(Entity entity, float offsetX, float offsetY, float offsetZ)
		{
			return invoke<Vector3>(0x1899F328B0E12848, entity, offsetX, offsetY, offsetZ);
		} // 0x1899F328B0E12848 0xABCF043A  
		static float get_entity_pitch(Entity entity) { return invoke<float>(0xD45DC2893621E1FE, entity); }
		// 0xD45DC2893621E1FE 0xFCE6ECE5  
		static void get_entity_quaternion(Entity entity, float* x, float* y, float* z, float* w)
		{
			invoke<Void>(0x7B3703D2D32DFA18, entity, x, y, z, w);
		} // 0x7B3703D2D32DFA18 0x5154EC90  
		static float get_entity_roll(Entity entity) { return invoke<float>(0x831E0242595560DF, entity); }
		// 0x831E0242595560DF 0x36610842  
		static Vector3 get_entity_rotation(Entity entity, int rotationOrder)
		{
			return invoke<Vector3>(0xAFBD61CC738D9EB9, entity, rotationOrder);
		} // 0xAFBD61CC738D9EB9 0x8FF45B04  
		static Vector3 get_entity_rotation_velocity(Entity entity)
		{
			return invoke<Vector3>(0x213B91045D09B983, entity);
		} // 0x213B91045D09B983 0x9BF8A73F  
		static const char* get_entity_script(Entity entity, ScrHandle* script)
		{
			return invoke<const char*>(0xA6E9C38DB51D7748, entity, script);
		} // 0xA6E9C38DB51D7748 0xB7F70784  
		static float get_entity_speed(Entity entity) { return invoke<float>(0xD5037BA82E12416F, entity); }
		// 0xD5037BA82E12416F 0x9E1E4798  
		static Vector3 get_entity_speed_vector(Entity entity, bool relative)
		{
			return invoke<Vector3>(0x9A8D700A51CB7B0D, entity, relative);
		} // 0x9A8D700A51CB7B0D 0x3ED2B997  
		static float get_entity_upright_value(Entity entity) { return invoke<float>(0x95EED5A694951F9F, entity); }
		// 0x95EED5A694951F9F 0xF4268190  
		static Vector3 get_entity_velocity(Entity entity) { return invoke<Vector3>(0x4805D2B1D8CF94A9, entity); }
		// 0x4805D2B1D8CF94A9 0xC14C9B6B  
		static Object get_object_index_from_entity_index(Entity entity)
		{
			return invoke<Object>(0xD7E3B9735C0F89D6, entity);
		} // 0xD7E3B9735C0F89D6 0xBC5A9C58  
		static Ped get_ped_index_from_entity_index(Entity entity) { return invoke<Ped>(0x04A2A40C73395041, entity); }
		// 0x04A2A40C73395041 0xC46F74AC  
		static Vehicle get_vehicle_index_from_entity_index(Entity entity)
		{
			return invoke<Vehicle>(0x4B53F92932ADFAC0, entity);
		} // 0x4B53F92932ADFAC0 0xC69CF43D  
		static Vector3 get_world_position_of_entity_bone(Entity entity, int boneIndex)
		{
			return invoke<Vector3>(0x44A8FCB8ED227738, entity, boneIndex);
		} // 0x44A8FCB8ED227738 0x7C6339DF  
		static Player get_nearest_player_to_entity(Entity entity) { return invoke<Player>(0x7196842CB375CDB3, entity); }
		// 0x7196842CB375CDB3 0xCE17FDEC  
		static Player get_nearest_player_to_entity_on_team(Entity entity, int team)
		{
			return invoke<Player>(0x4DC9A62F844D9337, entity, team);
		} // 0x4DC9A62F844D9337 0xB1808F56  
		static int get_entity_type(Entity entity) { return invoke<int>(0x8ACD366038D14505, entity); }
		// 0x8ACD366038D14505 0x0B1BD08D  
		static int _get_entity_population_type(Entity entity) { return invoke<int>(0xF6F5161F4534EDFF, entity); }
		// 0xF6F5161F4534EDFF  
		static bool is_an_entity(int handle) { return invoke<bool>(0x731EC8A916BD11A1, handle); }
		// 0x731EC8A916BD11A1 0xD4B9715A  
		static bool is_entity_a_ped(Entity entity) { return invoke<bool>(0x524AC5ECEA15343E, entity); }
		// 0x524AC5ECEA15343E 0x55D33EAB  
		static bool is_entity_a_mission_entity(Entity entity) { return invoke<bool>(0x0A7B270912999B3C, entity); }
		// 0x0A7B270912999B3C 0x2632E124  
		static bool is_entity_a_vehicle(Entity entity) { return invoke<bool>(0x6AC7003FA6E5575E, entity); }
		// 0x6AC7003FA6E5575E 0xBE800B01  
		static bool is_entity_an_object(Entity entity) { return invoke<bool>(0x8D68C8FD0FACA94E, entity); }
		// 0x8D68C8FD0FACA94E 0x3F52E561  
		static bool is_entity_at_coord(Entity entity, float xPos, float yPos, float zPos, float xSize, float ySize,
			float zSize, bool p7, bool p8, int p9)
		{
			return invoke<bool>(0x20B60995556D004F, entity, xPos, yPos, zPos, xSize, ySize, zSize, p7, p8, p9);
		} // 0x20B60995556D004F 0xD749B606  
		static bool is_entity_at_entity(Entity entity1, Entity entity2, float xSize, float ySize, float zSize, bool p5,
			bool p6, int p7)
		{
			return invoke<bool>(0x751B70C3D034E187, entity1, entity2, xSize, ySize, zSize, p5, p6, p7);
		} // 0x751B70C3D034E187 0xDABDCB52  
		static bool is_entity_attached(Entity entity) { return invoke<bool>(0xB346476EF1A64897, entity); }
		// 0xB346476EF1A64897 0xEC1479D5  
		static bool is_entity_attached_to_any_object(Entity entity) { return invoke<bool>(0xCF511840CEEDE0CC, entity); }
		// 0xCF511840CEEDE0CC 0x0B5DE340  
		static bool is_entity_attached_to_any_ped(Entity entity) { return invoke<bool>(0xB1632E9A5F988D11, entity); }
		// 0xB1632E9A5F988D11 0x9D7A609C  
		static bool is_entity_attached_to_any_vehicle(Entity entity)
		{
			return invoke<bool>(0x26AA915AD89BFB4B, entity);
		} // 0x26AA915AD89BFB4B 0xDE5C995E  
		static bool is_entity_attached_to_entity(Entity from, Entity to)
		{
			return invoke<bool>(0xEFBE71898A993728, from, to);
		} // 0xEFBE71898A993728 0xB0ABFEA8  
		static bool is_entity_dead(Entity entity) { return invoke<bool>(0x5F9532F3B5CC2551, entity); }
		// 0x5F9532F3B5CC2551 0xB6F7CBAC  
		static bool is_entity_in_air(Entity entity) { return invoke<bool>(0x886E37EC497200B6, entity); }
		// 0x886E37EC497200B6 0xA4157987  
		static bool is_entity_in_angled_area(Entity entity, float originX, float originY, float originZ, float edgeX,
			float edgeY, float edgeZ, float angle, bool p8, bool p9, Any p10)
		{
			return invoke<bool>(0x51210CED3DA1C78A, entity, originX, originY, originZ, edgeX, edgeY, edgeZ, angle, p8,
				p9, p10);
		} // 0x51210CED3DA1C78A 0x883622FA  
		static bool is_entity_in_area(Entity entity, float x1, float y1, float z1, float x2, float y2, float z2,
			bool p7, bool p8, Any p9)
		{
			return invoke<bool>(0x54736AA40E271165, entity, x1, y1, z1, x2, y2, z2, p7, p8, p9);
		} // 0x54736AA40E271165 0x8C2DFA9D  
		static bool is_entity_in_zone(Entity entity, const char* zone)
		{
			return invoke<bool>(0xB6463CF6AF527071, entity, zone);
		} // 0xB6463CF6AF527071 0x45C82B21  
		static bool is_entity_in_water(Entity entity) { return invoke<bool>(0xCFB0A0D8EDD145A3, entity); }
		// 0xCFB0A0D8EDD145A3 0x4C3C2508  
		static float get_entity_submerged_level(Entity entity) { return invoke<float>(0xE81AFC1BC4CC41CE, entity); }
		// 0xE81AFC1BC4CC41CE 0x0170F68C  
		static void _0x694e00132f2823ed(Entity entity, bool p1) { invoke<Void>(0x694E00132F2823ED, entity, p1); }
		// 0x694E00132F2823ED 0x40C84A74  
		static bool is_entity_on_screen(Entity entity) { return invoke<bool>(0xE659E47AF827484B, entity); }
		// 0xE659E47AF827484B 0xC1FEC5ED  
		static bool is_entity_playing_anim(Entity entity, const char* animDict, const char* animName, int taskFlag)
		{
			return invoke<bool>(0x1F0B79228E461EC9, entity, animDict, animName, taskFlag);
		} // 0x1F0B79228E461EC9 0x0D130D34  
		static bool is_entity_static(Entity entity) { return invoke<bool>(0x1218E6886D3D8327, entity); }
		// 0x1218E6886D3D8327 0x928E12E9  
		static bool is_entity_touching_entity(Entity entity, Entity targetEntity)
		{
			return invoke<bool>(0x17FFC1B2BA35A494, entity, targetEntity);
		} // 0x17FFC1B2BA35A494 0x6B931477  
		static bool is_entity_touching_model(Entity entity, Hash modelHash)
		{
			return invoke<bool>(0x0F42323798A58C8C, entity, modelHash);
		} // 0x0F42323798A58C8C 0x307E7611  
		static bool is_entity_upright(Entity entity, float angle)
		{
			return invoke<bool>(0x5333F526F6AB19AA, entity, angle);
		} // 0x5333F526F6AB19AA 0x3BCDF4E1  
		static bool is_entity_upsidedown(Entity entity) { return invoke<bool>(0x1DBD58820FA61D71, entity); }
		// 0x1DBD58820FA61D71 0x5ACAA48F  
		static bool is_entity_visible(Entity entity) { return invoke<bool>(0x47D6F43D77935C75, entity); }
		// 0x47D6F43D77935C75 0x120B4ED5  
		static bool is_entity_visible_to_script(Entity entity) { return invoke<bool>(0xD796CB5BA8F20E32, entity); }
		// 0xD796CB5BA8F20E32 0x5D240E9D  
		static bool is_entity_occluded(Entity entity) { return invoke<bool>(0xE31C2C72B8692B64, entity); }
		// 0xE31C2C72B8692B64 0x46BC5B40  
		static bool would_entity_be_occluded(Hash entityModelHash, float x, float y, float z, bool p4)
		{
			return invoke<bool>(0xEE5D2A122E09EC42, entityModelHash, x, y, z, p4);
		} // 0xEE5D2A122E09EC42 0xEA127CBC  
		static bool is_entity_waiting_for_world_collision(Entity entity)
		{
			return invoke<bool>(0xD05BFF0C0A12C68F, entity);
		} // 0xD05BFF0C0A12C68F 0x00AB7A4A  
		static void apply_force_to_entity_center_of_mass(Entity entity, int forceType, float x, float y, float z,
			bool p5, bool isDirectionRel, bool isForceRel, bool p8)
		{
			invoke<Void>(0x18FF00FC7EFF559E, entity, forceType, x, y, z, p5, isDirectionRel, isForceRel, p8);
		} // 0x18FF00FC7EFF559E 0x28924E98  
		static void apply_force_to_entity(Entity entity, int forceFlags, float x, float y, float z, float offX,
			float offY, float offZ, int boneIndex, bool isDirectionRel, bool ignoreUpVec,
			bool isForceRel, bool p12, bool p13)
		{
			invoke<Void>(0xC5F68BE9613E2D18, entity, forceFlags, x, y, z, offX, offY, offZ, boneIndex, isDirectionRel,
				ignoreUpVec, isForceRel, p12, p13);
		} // 0xC5F68BE9613E2D18 0xC1C0855A  
		static void attach_entity_to_entity(Entity entity1, Entity entity2, int boneIndex, float xPos, float yPos,
			float zPos, float xRot, float yRot, float zRot, bool p9,
			bool useSoftPinning, bool collision, bool isPed, int vertexIndex,
			bool fixedRot)
		{
			invoke<Void>(0x6B9BBD38AB0796DF, entity1, entity2, boneIndex, xPos, yPos, zPos, xRot, yRot, zRot, p9,
				useSoftPinning, collision, isPed, vertexIndex, fixedRot);
		} // 0x6B9BBD38AB0796DF 0xEC024237  
		static void attach_entity_to_entity_physically(Entity entity1, Entity entity2, int boneIndex1, int boneIndex2,
			float xPos1, float yPos1, float zPos1, float xPos2, float yPos2,
			float zPos2, float xRot, float yRot, float zRot,
			float breakForce, bool fixedRot, bool p15, bool collision,
			bool p17, int p18)
		{
			invoke<Void>(0xC3675780C92F90F9, entity1, entity2, boneIndex1, boneIndex2, xPos1, yPos1, zPos1, xPos2,
				yPos2, zPos2, xRot, yRot, zRot, breakForce, fixedRot, p15, collision, p17, p18);
		} // 0xC3675780C92F90F9 0x0547417F  
		static void process_entity_attachments(Entity entity) { invoke<Void>(0xF4080490ADC51C6F, entity); }
		// 0xF4080490ADC51C6F 0x6909BA59  
		static int get_entity_bone_index_by_name(Entity entity, const char* boneName)
		{
			return invoke<int>(0xFB71170B7E76ACBA, entity, boneName);
		} // 0xFB71170B7E76ACBA 0xE4ECAC22  
		static void clear_entity_last_damage_entity(Entity entity) { invoke<Void>(0xA72CD9CA74A5ECBA, entity); }
		// 0xA72CD9CA74A5ECBA 0x2B83F43B  
		static void delete_entity(Entity* entity) { invoke<Void>(0xAE3CBE5BF394C9C9, entity); }
		// 0xAE3CBE5BF394C9C9 0xFAA3D236  
		static void detach_entity(Entity entity, bool p1, bool collision)
		{
			invoke<Void>(0x961AC54BF0613F5D, entity, p1, collision);
		} // 0x961AC54BF0613F5D 0xC8EFCB41  
		static void freeze_entity_position(Entity entity, bool toggle)
		{
			invoke<Void>(0x428CA6DBD1094446, entity, toggle);
		} // 0x428CA6DBD1094446 0x65C16D57  
		static void _set_entity_something(Entity entity, bool toggle)
		{
			invoke<Void>(0x3910051CCECDB00C, entity, toggle);
		} // 0x3910051CCECDB00C 0xD3850671  
		static bool play_entity_anim(Entity entity, const char* animName, const char* animDict, float p3, bool loop,
			bool stayInAnim, bool p6, float delta, Any bitset)
		{
			return invoke<bool>(0x7FB218262B810701, entity, animName, animDict, p3, loop, stayInAnim, p6, delta,
				bitset);
		} // 0x7FB218262B810701 0x878753D5  
		static bool play_synchronized_entity_anim(Entity entity, int syncedScene, const char* animation,
			const char* propName, float p4, float p5, Any p6, float p7)
		{
			return invoke<bool>(0xC77720A12FE14A86, entity, syncedScene, animation, propName, p4, p5, p6, p7);
		} // 0xC77720A12FE14A86 0x012760AA  
		static bool play_synchronized_map_entity_anim(float p0, float p1, float p2, float p3, Any p4, Any p5, Any* p6,
			Any* p7, float p8, float p9, Any p10, float p11)
		{
			return invoke<bool>(0xB9C54555ED30FBC4, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11);
		} // 0xB9C54555ED30FBC4 0xEB4CBA74  
		static bool stop_synchronized_map_entity_anim(float p0, float p1, float p2, float p3, Any p4, float p5)
		{
			return invoke<bool>(0x11E79CAB7183B6F5, p0, p1, p2, p3, p4, p5);
		} // 0x11E79CAB7183B6F5 0x7253D5B2  
		static Any stop_entity_anim(Entity entity, const char* animation, const char* animGroup, float p3)
		{
			return invoke<Any>(0x28004F88151E03E0, entity, animation, animGroup, p3);
		} // 0x28004F88151E03E0 0xC4769830  
		static bool stop_synchronized_entity_anim(Entity entity, float p1, bool p2)
		{
			return invoke<bool>(0x43D3807C077261E3, entity, p1, p2);
		} // 0x43D3807C077261E3 0xE27D2FC1  
		static bool has_anim_event_fired(Entity entity, Hash actionHash)
		{
			return invoke<bool>(0xEAF4CD9EA3E7E922, entity, actionHash);
		} // 0xEAF4CD9EA3E7E922 0x66571CA0  
		static bool find_anim_event_phase(const char* animDictionary, const char* animName, const char* p2, Any* p3,
			Any* p4)
		{
			return invoke<bool>(0x07F1BE2BCCAA27A7, animDictionary, animName, p2, p3, p4);
		} // 0x07F1BE2BCCAA27A7 0xC41DDA62  
		static void set_entity_anim_current_time(Entity entity, const char* animDictionary, const char* animName,
			float time)
		{
			invoke<Void>(0x4487C259F0F70977, entity, animDictionary, animName, time);
		} // 0x4487C259F0F70977 0x99D90735  
		static void set_entity_anim_speed(Entity entity, const char* animDictionary, const char* animName,
			float speedMultiplier)
		{
			invoke<Void>(0x28D1A16553C51776, entity, animDictionary, animName, speedMultiplier);
		} // 0x28D1A16553C51776 0x3990C90A  
		static void set_entity_as_mission_entity(Entity entity, bool p1, bool p2)
		{
			invoke<Void>(0xAD738C3085FE7E11, entity, p1, p2);
		} // 0xAD738C3085FE7E11 0x5D1F9E0F  
		static void set_entity_as_no_longer_needed(Entity* entity) { invoke<Void>(0xB736A491E64A32CF, entity); }
		// 0xB736A491E64A32CF 0xADF2267C  
		static void set_ped_as_no_longer_needed(Ped* ped) { invoke<Void>(0x2595DD4236549CE3, ped); }
		// 0x2595DD4236549CE3 0x9A388380  
		static void set_vehicle_as_no_longer_needed(Vehicle* vehicle) { invoke<Void>(0x629BFA74418D6239, vehicle); }
		// 0x629BFA74418D6239 0x9B0E10BE  
		static void set_object_as_no_longer_needed(Object* object) { invoke<Void>(0x3AE22DEB5BA5A3E6, object); }
		// 0x3AE22DEB5BA5A3E6 0x3F6B949F  
		static void set_entity_can_be_damaged(Entity entity, bool toggle)
		{
			invoke<Void>(0x1760FFA8AB074D66, entity, toggle);
		} // 0x1760FFA8AB074D66 0x60B6E744  
		static void set_entity_can_be_damaged_by_relationship_group(Entity entity, bool bCanBeDamaged, int relGroup)
		{
			invoke<Void>(0xE22D8FDE858B8119, entity, bCanBeDamaged, relGroup);
		} // 0xE22D8FDE858B8119 0x34165B5D  
		static void set_entity_can_be_targeted_without_los(Entity entity, bool toggle)
		{
			invoke<Void>(0xD3997889736FD899, entity, toggle);
		} // 0xD3997889736FD899 0x3B13797C  
		static void set_entity_collision(Entity entity, bool toggle, bool keepPhysics)
		{
			invoke<Void>(0x1A9205C1B9EE827F, entity, toggle, keepPhysics);
		} // 0x1A9205C1B9EE827F 0x139FD37D  
		static bool _get_entity_collison_disabled(Entity entity) { return invoke<bool>(0xCCF1E97BEFDAE480, entity); }
		// 0xCCF1E97BEFDAE480  
		static void _set_entity_collision_2(Entity entity, bool p1, bool p2)
		{
			invoke<Void>(0x9EBC85ED0FFFE51C, entity, p1, p2);
		} // 0x9EBC85ED0FFFE51C  
		static void set_entity_coords(Entity entity, float xPos, float yPos, float zPos, bool xAxis, bool yAxis,
			bool zAxis, bool clearArea)
		{
			invoke<Void>(0x06843DA7060A026B, entity, xPos, yPos, zPos, xAxis, yAxis, zAxis, clearArea);
		} // 0x06843DA7060A026B 0xDF70B41B  
		static void _set_entity_coords_2(Entity entity, float xPos, float yPos, float zPos, bool xAxis, bool yAxis,
			bool zAxis, bool clearArea)
		{
			invoke<Void>(0x621873ECE1178967, entity, xPos, yPos, zPos, xAxis, yAxis, zAxis, clearArea);
		} // 0x621873ECE1178967  
		static void set_entity_coords_no_offset(Entity entity, float xPos, float yPos, float zPos, bool xAxis,
			bool yAxis, bool zAxis)
		{
			invoke<Void>(0x239A3351AC1DA385, entity, xPos, yPos, zPos, xAxis, yAxis, zAxis);
		} // 0x239A3351AC1DA385 0x4C83DE8D  
		static void set_entity_dynamic(Entity entity, bool toggle) { invoke<Void>(0x1718DE8E3F2823CA, entity, toggle); }
		// 0x1718DE8E3F2823CA 0x236F525B  
		static void set_entity_heading(Entity entity, float heading)
		{
			invoke<Void>(0x8E2530AA8ADA980E, entity, heading);
		} // 0x8E2530AA8ADA980E 0xE0FF064D  
		static void set_entity_health(Entity entity, int health) { invoke<Void>(0x6B76DC1F3AE6E6A3, entity, health); }
		// 0x6B76DC1F3AE6E6A3 0xFBCD1831  
		static void set_entity_invincible(Entity entity, bool toggle)
		{
			invoke<Void>(0x3882114BDE571AD4, entity, toggle);
		} // 0x3882114BDE571AD4 0xC1213A21  
		static void set_entity_is_target_priority(Entity entity, bool p1, float p2)
		{
			invoke<Void>(0xEA02E132F5C68722, entity, p1, p2);
		} // 0xEA02E132F5C68722 0x9729EE32  
		static void set_entity_lights(Entity entity, bool toggle) { invoke<Void>(0x7CFBA6A80BDF3874, entity, toggle); }
		// 0x7CFBA6A80BDF3874 0xE8FC85AF  
		static void set_entity_load_collision_flag(Entity entity, bool toggle)
		{
			invoke<Void>(0x0DC7CABAB1E9B67E, entity, toggle);
		} // 0x0DC7CABAB1E9B67E 0xC52F295B  
		static bool has_collision_loaded_around_entity(Entity entity)
		{
			return invoke<bool>(0xE9676F61BC0B3321, entity);
		} // 0xE9676F61BC0B3321 0x851687F9  
		static void set_entity_max_speed(Entity entity, float speed)
		{
			invoke<Void>(0x0E46A3FCBDE2A1B1, entity, speed);
		} // 0x0E46A3FCBDE2A1B1 0x46AFFED3  
		static void set_entity_only_damaged_by_player(Entity entity, bool toggle)
		{
			invoke<Void>(0x79F020FF9EDC0748, entity, toggle);
		} // 0x79F020FF9EDC0748 0x4B707F50  
		static void set_entity_only_damaged_by_relationship_group(Entity entity, bool p1, Any p2)
		{
			invoke<Void>(0x7022BD828FA0B082, entity, p1, p2);
		} // 0x7022BD828FA0B082 0x202237E2  
		static void set_entity_proofs(Entity entity, bool bulletProof, bool fireProof, bool explosionProof,
			bool collisionProof, bool meleeProof, bool p6, bool p7, bool drownProof)
		{
			invoke<Void>(0xFAEE099C6F890BB8, entity, bulletProof, fireProof, explosionProof, collisionProof, meleeProof,
				p6, p7, drownProof);
		} // 0xFAEE099C6F890BB8 0x7E9EAB66  
		static void set_entity_quaternion(Entity entity, float x, float y, float z, float w)
		{
			invoke<Void>(0x77B21BE7AC540F07, entity, x, y, z, w);
		} // 0x77B21BE7AC540F07 0x83B6046F  
		static void set_entity_records_collisions(Entity entity, bool toggle)
		{
			invoke<Void>(0x0A50A1EEDAD01E65, entity, toggle);
		} // 0x0A50A1EEDAD01E65 0x6B189A1A  
		static void set_entity_rotation(Entity entity, float pitch, float roll, float yaw, int rotationOrder, bool p5)
		{
			invoke<Void>(0x8524A8B0171D5E07, entity, pitch, roll, yaw, rotationOrder, p5);
		} // 0x8524A8B0171D5E07 0x0A345EFE  
		static void set_entity_visible(Entity entity, bool toggle, bool unk)
		{
			invoke<Void>(0xEA1C610A04DB6BBB, entity, toggle, unk);
		} // 0xEA1C610A04DB6BBB 0xD043E8E1  
		static void set_entity_velocity(Entity entity, float x, float y, float z)
		{
			invoke<Void>(0x1C99BB7B6E96D16F, entity, x, y, z);
		} // 0x1C99BB7B6E96D16F 0xFF5A1988  
		static void set_entity_has_gravity(Entity entity, bool toggle)
		{
			invoke<Void>(0x4A4722448F18EEF5, entity, toggle);
		} // 0x4A4722448F18EEF5 0xE2F262BF  
		static void set_entity_lod_dist(Entity entity, int value) { invoke<Void>(0x5927F96A78577363, entity, value); }
		// 0x5927F96A78577363 0xD7ACC7AD  
		static int get_entity_lod_dist(Entity entity) { return invoke<int>(0x4159C2762B5791D6, entity); }
		// 0x4159C2762B5791D6 0x4DA3D51F  
		static void set_entity_alpha(Entity entity, int alphaLevel, Any p0)
		{
			invoke<Void>(0x44A0870B7E92D7C0, entity, alphaLevel, p0);
		} // 0x44A0870B7E92D7C0 0xAE667CB0  
		static int get_entity_alpha(Entity entity) { return invoke<int>(0x5A47B3B5E63E94C6, entity); }
		// 0x5A47B3B5E63E94C6 0x1560B017  
		static void reset_entity_alpha(Entity entity) { invoke<Void>(0x9B1E824FFBB7027A, entity); }
		// 0x9B1E824FFBB7027A 0x8A30761C  
		static void _0x5c3b791d580e0bc2(Entity entity, float p1) { invoke<Void>(0x5C3B791D580E0BC2, entity, p1); }
		// 0x5C3B791D580E0BC2  
		static void set_entity_always_prerender(Entity entity, bool toggle)
		{
			invoke<Void>(0xACAD101E1FB66689, entity, toggle);
		} // 0xACAD101E1FB66689 0xD8FF798A  
		static void set_entity_render_scorched(Entity entity, bool toggle)
		{
			invoke<Void>(0x730F5F8D3F0F2050, entity, toggle);
		} // 0x730F5F8D3F0F2050 0xAAC9317B  
		static void set_entity_trafficlight_override(Entity entity, int state)
		{
			invoke<Void>(0x57C5DB656185EAC4, entity, state);
		} // 0x57C5DB656185EAC4 0xC47F5B91  
		static void _0x78e8e3a640178255(Entity entity) { invoke<Void>(0x78E8E3A640178255, entity); }
		// 0x78E8E3A640178255  
		static void create_model_swap(float x, float y, float z, float radius, Hash originalModel, Hash newModel,
			bool p6)
		{
			invoke<Void>(0x92C47782FDA8B2A3, x, y, z, radius, originalModel, newModel, p6);
		} // 0x92C47782FDA8B2A3 0x0BC12F9E  
		static void remove_model_swap(float x, float y, float z, float radius, Hash originalModel, Hash newModel,
			bool p6)
		{
			invoke<Void>(0x033C0F9A64E229AE, x, y, z, radius, originalModel, newModel, p6);
		} // 0x033C0F9A64E229AE 0xCE0AA8BC  
		static void create_model_hide(float x, float y, float z, float radius, Hash model, bool p5)
		{
			invoke<Void>(0x8A97BCA30A0CE478, x, y, z, radius, model, p5);
		} // 0x8A97BCA30A0CE478 0x7BD5CF2F  
		static void create_model_hide_excluding_script_objects(float x, float y, float z, float radius, Hash model,
			bool p5)
		{
			invoke<Void>(0x3A52AE588830BF7F, x, y, z, radius, model, p5);
		} // 0x3A52AE588830BF7F 0x07AAF22C  
		static void remove_model_hide(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5)
		{
			invoke<Void>(0xD9E3006FB3CBD765, p0, p1, p2, p3, p4, p5);
		} // 0xD9E3006FB3CBD765 0x993DBC10  
		static void create_forced_object(float x, float y, float z, Any p3, Hash modelHash, bool p5)
		{
			invoke<Void>(0x150E808B375A385A, x, y, z, p3, modelHash, p5);
		} // 0x150E808B375A385A 0x335190A2  
		static void remove_forced_object(Any p0, Any p1, Any p2, Any p3, Any p4)
		{
			invoke<Void>(0x61B6775E83C0DB6F, p0, p1, p2, p3, p4);
		} // 0x61B6775E83C0DB6F 0xAED73ADD  
		static void set_entity_no_collision_entity(Entity entity1, Entity entity2, bool unknown)
		{
			invoke<Void>(0xA53ED5520C07654A, entity1, entity2, unknown);
		} // 0xA53ED5520C07654A 0x1E11BFE9  
		static void set_entity_motion_blur(Entity entity, bool toggle)
		{
			invoke<Void>(0x295D82A8559F9150, entity, toggle);
		} // 0x295D82A8559F9150 0xE90005B8  
		static void _0xe12abe5e3a389a6c(Entity entity, bool p1) { invoke<Void>(0xE12ABE5E3A389A6C, entity, p1); }
		// 0xE12ABE5E3A389A6C 0x44767B31  
		static void _0xa80ae305e0a3044f(Entity entity, bool p1) { invoke<Void>(0xA80AE305E0A3044F, entity, p1); }
		// 0xA80AE305E0A3044F 0xE224A6A5  
		static void _0xdc6f8601faf2e893(Entity entity, bool p1) { invoke<Void>(0xDC6F8601FAF2E893, entity, p1); }
		// 0xDC6F8601FAF2E893  
		static void _0x2c2e3dc128f44309(Entity entity, bool p1) { invoke<Void>(0x2C2E3DC128F44309, entity, p1); }
		// 0x2C2E3DC128F44309  
		static void _0x1a092bb0c3808b96(Entity entity, bool p1) { invoke<Void>(0x1A092BB0C3808B96, entity, p1); }
		// 0x1A092BB0C3808B96  
	}

	namespace ped
	{
		static Ped create_ped(int pedType, Hash modelHash, float x, float y, float z, float heading, bool isNetwork,
			bool thisScriptCheck)
		{
			return invoke<Ped>(0xD49F9B0955C367DE, pedType, modelHash, x, y, z, heading, isNetwork, thisScriptCheck);
		} // 0xD49F9B0955C367DE 0x0389EF71  
		static void delete_ped(Ped* ped) { invoke<Void>(0x9614299DCB53E54B, ped); } // 0x9614299DCB53E54B 0x13EFB9A0  
		static Ped clone_ped(Ped ped, float heading, bool isNetwork, bool thisScriptCheck)
		{
			return invoke<Ped>(0xEF29A16337FACADB, ped, heading, isNetwork, thisScriptCheck);
		} // 0xEF29A16337FACADB 0x8C8A8D6E  
		static void clone_ped_to_target(Ped ped, Ped targetPed) { invoke<Void>(0xE952D6431689AD9A, ped, targetPed); }
		// 0xE952D6431689AD9A 0xFC70EEC7  
		static bool is_ped_in_vehicle(Ped ped, Vehicle vehicle, bool atGetIn)
		{
			return invoke<bool>(0xA3EE4A07279BB9DB, ped, vehicle, atGetIn);
		} // 0xA3EE4A07279BB9DB 0x7DA6BC83  
		static bool is_ped_in_model(Ped ped, Hash modelHash)
		{
			return invoke<bool>(0x796D90EFB19AA332, ped, modelHash);
		} // 0x796D90EFB19AA332 0xA6438D4B  
		static bool is_ped_in_any_vehicle(Ped ped, bool atGetIn)
		{
			return invoke<bool>(0x997ABD671D25CA0B, ped, atGetIn);
		} // 0x997ABD671D25CA0B 0x3B0171EE  
		static bool is_cop_ped_in_area_3d(float x1, float y1, float z1, float x2, float y2, float z2)
		{
			return invoke<bool>(0x16EC4839969F9F5E, x1, y1, z1, x2, y2, z2);
		} // 0x16EC4839969F9F5E 0xB98DB96B  
		static bool is_ped_injured(Ped ped) { return invoke<bool>(0x84A2DD9AC37C35C1, ped); }
		// 0x84A2DD9AC37C35C1 0x2530A087  
		static bool is_ped_hurt(Ped ped) { return invoke<bool>(0x5983BB449D7FDB12, ped); }
		// 0x5983BB449D7FDB12 0x69DFA0AF  
		static bool is_ped_fatally_injured(Ped ped) { return invoke<bool>(0xD839450756ED5A80, ped); }
		// 0xD839450756ED5A80 0xBADA0093  
		static bool is_ped_dead_or_dying(Ped ped, bool p1) { return invoke<bool>(0x3317DEDB88C95038, ped, p1); }
		// 0x3317DEDB88C95038 0xCBDB7739  
		static bool is_conversation_ped_dead(Ped ped) { return invoke<bool>(0xE0A0AEC214B1FABA, ped); }
		// 0xE0A0AEC214B1FABA 0x1FA39EFE  
		static bool is_ped_aiming_from_cover(Ped ped) { return invoke<bool>(0x3998B1276A3300E5, ped); }
		// 0x3998B1276A3300E5 0xDEBAB2AF  
		static bool is_ped_reloading(Ped ped) { return invoke<bool>(0x24B100C68C645951, ped); }
		// 0x24B100C68C645951 0x961E1745  
		static bool is_ped_a_player(Ped ped) { return invoke<bool>(0x12534C348C6CB68B, ped); }
		// 0x12534C348C6CB68B 0x404794CA  
		static Ped create_ped_inside_vehicle(Vehicle vehicle, int pedType, Hash modelHash, int seat, bool isNetwork,
			bool thisScriptCheck)
		{
			return invoke<Ped>(0x7DD959874C1FD534, vehicle, pedType, modelHash, seat, isNetwork, thisScriptCheck);
		} // 0x7DD959874C1FD534 0x3000F092  
		static void set_ped_desired_heading(Ped ped, float heading) { invoke<Void>(0xAA5A7ECE2AA8FE70, ped, heading); }
		// 0xAA5A7ECE2AA8FE70 0x961458F9  
		static void _freeze_ped_camera_rotation(Ped ped) { invoke<Void>(0xFF287323B0E2C69A, ped); }
		// 0xFF287323B0E2C69A 0x290421BE  
		static bool is_ped_facing_ped(Ped ped, Ped otherPed, float angle)
		{
			return invoke<bool>(0xD71649DB0A545AA3, ped, otherPed, angle);
		} // 0xD71649DB0A545AA3 0x0B775838  
		static bool is_ped_in_melee_combat(Ped ped) { return invoke<bool>(0x4E209B2C1EAD5159, ped); }
		// 0x4E209B2C1EAD5159 0xFD7814A5  
		static bool is_ped_stopped(Ped ped) { return invoke<bool>(0x530944F6F4B8A214, ped); }
		// 0x530944F6F4B8A214 0xA0DC0B87  
		static bool is_ped_shooting_in_area(Ped ped, float x1, float y1, float z1, float x2, float y2, float z2,
			bool p7, bool p8)
		{
			return invoke<bool>(0x7E9DFE24AC1E58EF, ped, x1, y1, z1, x2, y2, z2, p7, p8);
		} // 0x7E9DFE24AC1E58EF 0x741BF04F  
		static bool is_any_ped_shooting_in_area(float x1, float y1, float z1, float x2, float y2, float z2, bool p6,
			bool p7)
		{
			return invoke<bool>(0xA0D3D71EA1086C55, x1, y1, z1, x2, y2, z2, p6, p7);
		} // 0xA0D3D71EA1086C55 0x91833867  
		static bool is_ped_shooting(Ped ped) { return invoke<bool>(0x34616828CD07F1A1, ped); }
		// 0x34616828CD07F1A1 0xE7C3405E  
		static void set_ped_accuracy(Ped ped, int accuracy) { invoke<Void>(0x7AEFB85C1D49DEB6, ped, accuracy); }
		// 0x7AEFB85C1D49DEB6 0x6C17122E  
		static int get_ped_accuracy(Ped ped) { return invoke<int>(0x37F4AD56ECBC0CD6, ped); }
		// 0x37F4AD56ECBC0CD6 0x0A2A0AA0  
		static bool is_ped_model(Ped ped, Hash modelHash) { return invoke<bool>(0xC9D55B1A358A5BF7, ped, modelHash); }
		// 0xC9D55B1A358A5BF7 0x5F1DDFCB  
		static void explode_ped_head(Ped ped, Hash weaponHash) { invoke<Void>(0x2D05CED3A38D0F3A, ped, weaponHash); }
		// 0x2D05CED3A38D0F3A 0x05CC1380  
		static void remove_ped_elegantly(Ped* ped) { invoke<Void>(0xAC6D445B994DF95E, ped); }
		// 0xAC6D445B994DF95E 0x4FFB8C6C  
		static void add_armour_to_ped(Ped ped, int amount) { invoke<Void>(0x5BA652A0CD14DF2F, ped, amount); }
		// 0x5BA652A0CD14DF2F 0xF686B26E  
		static void set_ped_armour(Ped ped, int amount) { invoke<Void>(0xCEA04D83135264CC, ped, amount); }
		// 0xCEA04D83135264CC 0x4E3A0CC4  
		static void set_ped_into_vehicle(Ped ped, Vehicle vehicle, int seatIndex)
		{
			invoke<Void>(0xF75B0D629E1C063D, ped, vehicle, seatIndex);
		} // 0xF75B0D629E1C063D 0x07500C79  
		static void set_ped_allow_vehicles_override(Ped ped, bool toggle)
		{
			invoke<Void>(0x3C028C636A414ED9, ped, toggle);
		} // 0x3C028C636A414ED9 0x58A80BD5  
		static bool can_create_random_ped(bool unk) { return invoke<bool>(0x3E8349C08E4B82E4, unk); }
		// 0x3E8349C08E4B82E4 0xF9ABE88F  
		static Ped create_random_ped(float posX, float posY, float posZ)
		{
			return invoke<Ped>(0xB4AC7D0CF06BFE8F, posX, posY, posZ);
		} // 0xB4AC7D0CF06BFE8F 0x5A949543  
		static Ped create_random_ped_as_driver(Vehicle vehicle, bool returnHandle)
		{
			return invoke<Ped>(0x9B62392B474F44A0, vehicle, returnHandle);
		} // 0x9B62392B474F44A0 0xB927CE9A  
		static bool can_create_random_driver() { return invoke<bool>(0xB8EB95E5B4E56978); }
		// 0xB8EB95E5B4E56978 0x99861609  
		static bool can_create_random_bike_rider() { return invoke<bool>(0xEACEEDA81751915C); }
		// 0xEACEEDA81751915C 0x7018BE31  
		static void set_ped_move_anims_blend_out(Ped ped) { invoke<Void>(0x9E8C908F41584ECD, ped); }
		// 0x9E8C908F41584ECD 0x20E01957  
		static void set_ped_can_be_dragged_out(Ped ped, bool toggle) { invoke<Void>(0xC1670E958EEE24E5, ped, toggle); }
		// 0xC1670E958EEE24E5 0xAA7F1131  
		static void _0xf2bebcdfafdaa19e(bool toggle) { invoke<Void>(0xF2BEBCDFAFDAA19E, toggle); }
		// 0xF2BEBCDFAFDAA19E 0x6CD58238  
		static bool is_ped_male(Ped ped) { return invoke<bool>(0x6D9F5FAA7488BA46, ped); }
		// 0x6D9F5FAA7488BA46 0x90950455  
		static bool is_ped_human(Ped ped) { return invoke<bool>(0xB980061DA992779D, ped); }
		// 0xB980061DA992779D 0x194BB7B0  
		static Vehicle get_vehicle_ped_is_in(Ped ped, bool lastVehicle)
		{
			return invoke<Vehicle>(0x9A9112A0FE9A4713, ped, lastVehicle);
		} // 0x9A9112A0FE9A4713 0xAFE92319  
		static void reset_ped_last_vehicle(Ped ped) { invoke<Void>(0xBB8DE8CF6A8DD8BB, ped); }
		// 0xBB8DE8CF6A8DD8BB 0x5E3B5942  
		static void set_ped_density_multiplier_this_frame(float multiplier)
		{
			invoke<Void>(0x95E3D6257B166CF2, multiplier);
		} // 0x95E3D6257B166CF2 0x039C82BB  
		static void set_scenario_ped_density_multiplier_this_frame(float p0, float p1)
		{
			invoke<Void>(0x7A556143A1C03898, p0, p1);
		} // 0x7A556143A1C03898 0x2909ABF0  
		static void _0x5a7f62fda59759bd() { invoke<Void>(0x5A7F62FDA59759BD); } // 0x5A7F62FDA59759BD 0xB48C0C04  
		static void set_scripted_conversion_coord_this_frame(float x, float y, float z)
		{
			invoke<Void>(0x5086C7843552CF85, x, y, z);
		} // 0x5086C7843552CF85 0x25EA2AA5  
		static void set_ped_non_creation_area(float x1, float y1, float z1, float x2, float y2, float z2)
		{
			invoke<Void>(0xEE01041D559983EA, x1, y1, z1, x2, y2, z2);
		} // 0xEE01041D559983EA 0x7A97283F  
		static void clear_ped_non_creation_area() { invoke<Void>(0x2E05208086BA0651); }
		// 0x2E05208086BA0651 0x6F7043A3  
		static void _0x4759cc730f947c81() { invoke<Void>(0x4759CC730F947C81); } // 0x4759CC730F947C81 0x8C555ADD  
		static bool is_ped_on_mount(Ped ped) { return invoke<bool>(0x460BC76A0E10655E, ped); }
		// 0x460BC76A0E10655E 0x43103006  
		static Ped get_mount(Ped ped) { return invoke<Ped>(0xE7E11B8DCBED1058, ped); } // 0xE7E11B8DCBED1058 0xDD31EC4E  
		static bool is_ped_on_vehicle(Ped ped) { return invoke<bool>(0x67722AEB798E5FAB, ped); }
		// 0x67722AEB798E5FAB 0xA1AE7CC7  
		static bool is_ped_on_specific_vehicle(Ped ped, Vehicle vehicle)
		{
			return invoke<bool>(0xEC5F66E459AF3BB2, ped, vehicle);
		} // 0xEC5F66E459AF3BB2 0x63CB4603  
		static void set_ped_money(Ped ped, int amount) { invoke<Void>(0xA9C8960E8684C1B5, ped, amount); }
		// 0xA9C8960E8684C1B5 0x40D90BF2  
		static int get_ped_money(Ped ped) { return invoke<int>(0x3F69145BBA87BAE7, ped); }
		// 0x3F69145BBA87BAE7 0xEB3C4C7E  
		static void _0xff4803bc019852d9(float p0, Any p1) { invoke<Void>(0xFF4803BC019852D9, p0, p1); }
		// 0xFF4803BC019852D9 0xD41C9AED  
		static void _0x6b0e6172c9a4d902(bool p0) { invoke<Void>(0x6B0E6172C9A4D902, p0); }
		// 0x6B0E6172C9A4D902 0x30B98369  
		static void _0x9911f4a24485f653(bool p0) { invoke<Void>(0x9911F4A24485F653, p0); }
		// 0x9911F4A24485F653 0x02A080C8  
		static void set_ped_suffers_critical_hits(Ped ped, bool toggle)
		{
			invoke<Void>(0xEBD76F2359F190AC, ped, toggle);
		} // 0xEBD76F2359F190AC 0x6F6FC7E6  
		static void _0xafc976fd0580c7b3(Ped ped, bool toggle) { invoke<Void>(0xAFC976FD0580C7B3, ped, toggle); }
		// 0xAFC976FD0580C7B3 0x1572022A  
		static bool is_ped_sitting_in_vehicle(Ped ped, Vehicle vehicle)
		{
			return invoke<bool>(0xA808AA1D79230FC2, ped, vehicle);
		} // 0xA808AA1D79230FC2 0xDDDE26FA  
		static bool is_ped_sitting_in_any_vehicle(Ped ped) { return invoke<bool>(0x826AA586EDB9FEF8, ped); }
		// 0x826AA586EDB9FEF8 0x0EA9CA03  
		static bool is_ped_on_foot(Ped ped) { return invoke<bool>(0x01FEE67DB37F59B2, ped); }
		// 0x01FEE67DB37F59B2 0xC60D0785  
		static bool is_ped_on_any_bike(Ped ped) { return invoke<bool>(0x94495889E22C6479, ped); }
		// 0x94495889E22C6479 0x4D885B2E  
		static bool is_ped_planting_bomb(Ped ped) { return invoke<bool>(0xC70B5FAE151982D8, ped); }
		// 0xC70B5FAE151982D8 0x0EDAC574  
		static Vector3 get_dead_ped_pickup_coords(Ped ped, float p1, float p2)
		{
			return invoke<Vector3>(0xCD5003B097200F36, ped, p1, p2);
		} // 0xCD5003B097200F36 0x129F9DC1  
		static bool is_ped_in_any_boat(Ped ped) { return invoke<bool>(0x2E0E1C2B4F6CB339, ped); }
		// 0x2E0E1C2B4F6CB339 0x1118A947  
		static bool is_ped_in_any_sub(Ped ped) { return invoke<bool>(0xFBFC01CCFB35D99E, ped); }
		// 0xFBFC01CCFB35D99E 0xE65F8059  
		static bool is_ped_in_any_heli(Ped ped) { return invoke<bool>(0x298B91AE825E5705, ped); }
		// 0x298B91AE825E5705 0x7AB5523B  
		static bool is_ped_in_any_plane(Ped ped) { return invoke<bool>(0x5FFF4CFC74D8FB80, ped); }
		// 0x5FFF4CFC74D8FB80 0x51BBCE7E  
		static bool is_ped_in_flying_vehicle(Ped ped) { return invoke<bool>(0x9134873537FA419C, ped); }
		// 0x9134873537FA419C 0xCA072485  
		static void set_ped_dies_in_water(Ped ped, bool toggle) { invoke<Void>(0x56CEF0AC79073BDE, ped, toggle); }
		// 0x56CEF0AC79073BDE 0x604C872B  
		static void set_ped_dies_in_sinking_vehicle(Ped ped, bool toggle)
		{
			invoke<Void>(0xD718A22995E2B4BC, ped, toggle);
		} // 0xD718A22995E2B4BC 0x8D4D9ABB  
		static int get_ped_armour(Ped ped) { return invoke<int>(0x9483AF821605B1D8, ped); }
		// 0x9483AF821605B1D8 0x2CE311A7  
		static void set_ped_stay_in_vehicle_when_jacked(Ped ped, bool toggle)
		{
			invoke<Void>(0xEDF4079F9D54C9A1, ped, toggle);
		} // 0xEDF4079F9D54C9A1 0xB014A09C  
		static void set_ped_can_be_shot_in_vehicle(Ped ped, bool toggle)
		{
			invoke<Void>(0xC7EF1BA83230BA07, ped, toggle);
		} // 0xC7EF1BA83230BA07 0x5DB7B3A9  
		static bool get_ped_last_damage_bone(Ped ped, int* outBone)
		{
			return invoke<bool>(0xD75960F6BD9EA49C, ped, outBone);
		} // 0xD75960F6BD9EA49C 0xAB933841  
		static void clear_ped_last_damage_bone(Ped ped) { invoke<Void>(0x8EF6B7AC68E2F01B, ped); }
		// 0x8EF6B7AC68E2F01B 0x56CB715E  
		static void set_ai_weapon_damage_modifier(float value) { invoke<Void>(0x1B1E2A40A65B8521, value); }
		// 0x1B1E2A40A65B8521 0x516E30EE  
		static void reset_ai_weapon_damage_modifier() { invoke<Void>(0xEA16670E7BA4743C); }
		// 0xEA16670E7BA4743C 0x6E965420  
		static void set_ai_melee_weapon_damage_modifier(float modifier) { invoke<Void>(0x66460DEDDD417254, modifier); }
		// 0x66460DEDDD417254 0x0F9A401F  
		static void reset_ai_melee_weapon_damage_modifier() { invoke<Void>(0x46E56A7CD1D63C3F); }
		// 0x46E56A7CD1D63C3F 0x97886238  
		static void _0x2f3c3d9f50681de4(Any p0, bool p1) { invoke<Void>(0x2F3C3D9F50681DE4, p0, p1); }
		// 0x2F3C3D9F50681DE4 0xCC9D7F1A  
		static void set_ped_can_be_targetted(Ped ped, bool toggle) { invoke<Void>(0x63F58F7C80513AAD, ped, toggle); }
		// 0x63F58F7C80513AAD 0x75C49F74  
		static void set_ped_can_be_targetted_by_team(Ped ped, int team, bool toggle)
		{
			invoke<Void>(0xBF1CA77833E58F2C, ped, team, toggle);
		} // 0xBF1CA77833E58F2C 0xB103A8E1  
		static void set_ped_can_be_targetted_by_player(Ped ped, Player player, bool toggle)
		{
			invoke<Void>(0x66B57B72E0836A76, ped, player, toggle);
		} // 0x66B57B72E0836A76 0xD050F490  
		static void _0x061cb768363d6424(Any p0, bool p1) { invoke<Void>(0x061CB768363D6424, p0, p1); }
		// 0x061CB768363D6424 0x7DA12905  
		static void set_time_exclusive_display_texture(Any p0, bool p1) { invoke<Void>(0xFD325494792302D7, p0, p1); }
		// 0xFD325494792302D7 0x7F67671D  
		static bool is_ped_in_any_police_vehicle(Ped ped) { return invoke<bool>(0x0BD04E29640C9C12, ped); }
		// 0x0BD04E29640C9C12 0x84FA790D  
		static void force_ped_to_open_parachute(Ped ped) { invoke<Void>(0x16E42E800B472221, ped); }
		// 0x16E42E800B472221 0xA819680B  
		static bool is_ped_in_parachute_free_fall(Ped ped) { return invoke<bool>(0x7DCE8BDA0F1C1200, ped); }
		// 0x7DCE8BDA0F1C1200 0xCD71F11B  
		static bool is_ped_falling(Ped ped) { return invoke<bool>(0xFB92A102F1C4DFA3, ped); }
		// 0xFB92A102F1C4DFA3 0xABF77334  
		static bool is_ped_jumping(Ped ped) { return invoke<bool>(0xCEDABC5900A0BF97, ped); }
		// 0xCEDABC5900A0BF97 0x07E5BC0E  
		static bool is_ped_climbing(Ped ped) { return invoke<bool>(0x53E8CB4F48BFE623, ped); }
		// 0x53E8CB4F48BFE623 0xBCE03D35  
		static bool is_ped_vaulting(Ped ped) { return invoke<bool>(0x117C70D1F5730B5E, ped); }
		// 0x117C70D1F5730B5E 0xC3169BDA  
		static bool is_ped_diving(Ped ped) { return invoke<bool>(0x5527B8246FEF9B11, ped); }
		// 0x5527B8246FEF9B11 0x7BC5BF3C  
		static bool is_ped_jumping_out_of_vehicle(Ped ped) { return invoke<bool>(0x433DDFFE2044B636, ped); }
		// 0x433DDFFE2044B636 0xB19215F6  
		static bool _0x26af0e8e30bd2a2c(Ped ped) { return invoke<bool>(0x26AF0E8E30BD2A2C, ped); }
		// 0x26AF0E8E30BD2A2C  
		static int get_ped_parachute_state(Ped ped) { return invoke<int>(0x79CFD9827CC979B6, ped); }
		// 0x79CFD9827CC979B6 0x7D4BC475  
		static int get_ped_parachute_landing_type(Ped ped) { return invoke<int>(0x8B9F1FC6AE8166C0, ped); }
		// 0x8B9F1FC6AE8166C0 0x01F3B035  
		static void set_ped_parachute_tint_index(Ped ped, int tintIndex)
		{
			invoke<Void>(0x333FC8DB079B7186, ped, tintIndex);
		} // 0x333FC8DB079B7186 0x5AEFEC3A  
		static void get_ped_parachute_tint_index(Ped ped, int* outTintIndex)
		{
			invoke<Void>(0xEAF5F7E5AE7C6C9D, ped, outTintIndex);
		} // 0xEAF5F7E5AE7C6C9D 0xE9E7FAC5  
		static void set_ped_reserve_parachute_tint_index(Ped ped, Any p1) { invoke<Void>(0xE88DA0751C22A2AD, ped, p1); }
		// 0xE88DA0751C22A2AD 0x177EFC79  
		static Entity _0x8c4f3bf23b6237db(Ped ped, bool p1, bool p2)
		{
			return invoke<Entity>(0x8C4F3BF23B6237DB, ped, p1, p2);
		} // 0x8C4F3BF23B6237DB  
		static void set_ped_ducking(Ped ped, bool toggle) { invoke<Void>(0x030983CA930B692D, ped, toggle); }
		// 0x030983CA930B692D 0xB90353D7  
		static bool is_ped_ducking(Ped ped) { return invoke<bool>(0xD125AE748725C6BC, ped); }
		// 0xD125AE748725C6BC 0x9199C77D  
		static bool is_ped_in_any_taxi(Ped ped) { return invoke<bool>(0x6E575D6A898AB852, ped); }
		// 0x6E575D6A898AB852 0x16FD386C  
		static void set_ped_id_range(Ped ped, float value) { invoke<Void>(0xF107E836A70DCE05, ped, value); }
		// 0xF107E836A70DCE05 0xEF3B4ED9  
		static void _0x52d59ab61ddc05dd(Ped ped, bool p1) { invoke<Void>(0x52D59AB61DDC05DD, ped, p1); }
		// 0x52D59AB61DDC05DD 0x9A2180FF  
		static void _0xec4b4b3b9908052a(Ped ped, float unk) { invoke<Void>(0xEC4B4B3B9908052A, ped, unk); }
		// 0xEC4B4B3B9908052A 0xF30658D2  
		static void _0x733c87d4ce22bea2(Any p0) { invoke<Void>(0x733C87D4CE22BEA2, p0); }
		// 0x733C87D4CE22BEA2 0x43709044  
		static void set_ped_seeing_range(Ped ped, float value) { invoke<Void>(0xF29CF591C4BF6CEE, ped, value); }
		// 0xF29CF591C4BF6CEE 0x4BD72FE8  
		static void set_ped_hearing_range(Ped ped, float value) { invoke<Void>(0x33A8F7F7D5F7F33C, ped, value); }
		// 0x33A8F7F7D5F7F33C 0xB32087E0  
		static void set_ped_visual_field_min_angle(Ped ped, float value)
		{
			invoke<Void>(0x2DB492222FB21E26, ped, value);
		} // 0x2DB492222FB21E26 0x72E2E18B  
		static void set_ped_visual_field_max_angle(Ped ped, float value)
		{
			invoke<Void>(0x70793BDCA1E854D4, ped, value);
		} // 0x70793BDCA1E854D4 0x0CEA0F9A  
		static void set_ped_visual_field_min_elevation_angle(Ped ped, float angle)
		{
			invoke<Void>(0x7A276EB2C224D70F, ped, angle);
		} // 0x7A276EB2C224D70F 0x5CC2F1B8  
		static void set_ped_visual_field_max_elevation_angle(Ped ped, float angle)
		{
			invoke<Void>(0x78D0B67629D75856, ped, angle);
		} // 0x78D0B67629D75856 0x39D9102F  
		static void set_ped_visual_field_peripheral_range(Ped ped, float range)
		{
			invoke<Void>(0x9C74B0BC831B753A, ped, range);
		} // 0x9C74B0BC831B753A 0xFDF2F7C2  
		static void set_ped_visual_field_center_angle(Ped ped, float angle)
		{
			invoke<Void>(0x3B6405E8AB34A907, ped, angle);
		} // 0x3B6405E8AB34A907 0xE57202A1  
		static void set_ped_stealth_movement(Ped ped, bool p1, const char* action)
		{
			invoke<Void>(0x88CBB5CEB96B7BD2, ped, p1, action);
		} // 0x88CBB5CEB96B7BD2 0x67E28E1D  
		static bool get_ped_stealth_movement(Ped ped) { return invoke<bool>(0x7C2AC9CA66575FBF, ped); }
		// 0x7C2AC9CA66575FBF 0x40321B83  
		static int create_group(int unused) { return invoke<int>(0x90370EBE0FEE1A3D, unused); }
		// 0x90370EBE0FEE1A3D 0x8DC0368D  
		static void set_ped_as_group_leader(Ped ped, int groupId) { invoke<Void>(0x2A7819605465FBCE, ped, groupId); }
		// 0x2A7819605465FBCE 0x7265BEA2  
		static void set_ped_as_group_member(Ped ped, int groupId) { invoke<Void>(0x9F3480FE65DB31B5, ped, groupId); }
		// 0x9F3480FE65DB31B5 0x0EE13F92  
		static void set_ped_can_teleport_to_group_leader(Ped pedHandle, int groupHandle, bool toggle)
		{
			invoke<Void>(0x2E2F4240B3F24647, pedHandle, groupHandle, toggle);
		} // 0x2E2F4240B3F24647 0xD0D8BDBC  
		static void remove_group(int groupId) { invoke<Void>(0x8EB2F69076AF7053, groupId); }
		// 0x8EB2F69076AF7053 0x48D72B88  
		static void remove_ped_from_group(Ped ped) { invoke<Void>(0xED74007FFB146BC2, ped); }
		// 0xED74007FFB146BC2 0x82697713  
		static bool is_ped_group_member(Ped ped, int groupId) { return invoke<bool>(0x9BB01E3834671191, ped, groupId); }
		// 0x9BB01E3834671191 0x876D5363  
		static bool is_ped_hanging_on_to_vehicle(Ped ped) { return invoke<bool>(0x1C86D8AEF8254B78, ped); }
		// 0x1C86D8AEF8254B78 0x9678D4FF  
		static void set_group_separation_range(int groupHandle, float separationRange)
		{
			invoke<Void>(0x4102C7858CFEE4E4, groupHandle, separationRange);
		} // 0x4102C7858CFEE4E4 0x7B820CD5  
		static void set_ped_min_ground_time_for_stungun(Ped ped, int ms) { invoke<Void>(0xFA0675AB151073FA, ped, ms); }
		// 0xFA0675AB151073FA 0x2F0D0973  
		static bool is_ped_prone(Ped ped) { return invoke<bool>(0xD6A86331A537A7B9, ped); }
		// 0xD6A86331A537A7B9 0x02C2A6C3  
		static bool is_ped_in_combat(Ped ped, Ped target) { return invoke<bool>(0x4859F1FC66A6278E, ped, target); }
		// 0x4859F1FC66A6278E 0xFE027CB5  
		static bool can_ped_in_combat_see_target(Ped ped, Ped target)
		{
			return invoke<bool>(0xEAD42DE3610D0721, ped, target);
		} // 0xEAD42DE3610D0721 0xCCD525E1  
		static bool is_ped_doing_driveby(Ped ped) { return invoke<bool>(0xB2C086CC1BF8F2BF, ped); }
		// 0xB2C086CC1BF8F2BF 0xAC3CEB9C  
		static bool is_ped_jacking(Ped ped) { return invoke<bool>(0x4AE4FF911DFB61DA, ped); }
		// 0x4AE4FF911DFB61DA 0x3B321816  
		static bool is_ped_being_jacked(Ped ped) { return invoke<bool>(0x9A497FE2DF198913, ped); }
		// 0x9A497FE2DF198913 0xD45D605C  
		static bool is_ped_being_stunned(Ped ped, int p1) { return invoke<bool>(0x4FBACCE3B4138EE8, ped, p1); }
		// 0x4FBACCE3B4138EE8 0x0A66CE30  
		static Ped get_peds_jacker(Ped ped) { return invoke<Ped>(0x9B128DC36C1E04CF, ped); }
		// 0x9B128DC36C1E04CF 0xDE1DBB59  
		static Ped get_jack_target(Ped ped) { return invoke<Ped>(0x5486A79D9FBD342D, ped); }
		// 0x5486A79D9FBD342D 0x1D196361  
		static bool is_ped_fleeing(Ped ped) { return invoke<bool>(0xBBCCE00B381F8482, ped); }
		// 0xBBCCE00B381F8482 0x85D813C6  
		static bool is_ped_in_cover(Ped ped, bool exceptUseWeapon)
		{
			return invoke<bool>(0x60DFD0691A170B88, ped, exceptUseWeapon);
		} // 0x60DFD0691A170B88 0x972C5A8B  
		static bool is_ped_in_cover_facing_left(Ped ped) { return invoke<bool>(0x845333B3150583AB, ped); }
		// 0x845333B3150583AB 0xB89DBB80  
		static bool _is_ped_standing_in_cover(Ped ped) { return invoke<bool>(0x6A03BF943D767C93, ped); }
		// 0x6A03BF943D767C93  
		static bool is_ped_going_into_cover(Ped ped) { return invoke<bool>(0x9F65DBC537E59AD5, ped); }
		// 0x9F65DBC537E59AD5 0xA3589628  
		static Any set_ped_pinned_down(Ped ped, bool pinned, int i)
		{
			return invoke<Any>(0xAAD6D1ACF08F4612, ped, pinned, i);
		} // 0xAAD6D1ACF08F4612 0xCC78999D  
		static int get_seat_ped_is_trying_to_enter(Ped ped) { return invoke<int>(0x6F4C85ACD641BCD2, ped); }
		// 0x6F4C85ACD641BCD2 0xACF162E0  
		static Vehicle get_vehicle_ped_is_trying_to_enter(Ped ped) { return invoke<Vehicle>(0x814FA8BE5449445D, ped); }
		// 0x814FA8BE5449445D 0x99968B37  
		static Entity get_ped_source_of_death(Ped ped) { return invoke<Entity>(0x93C8B64DEB84728C, ped); }
		// 0x93C8B64DEB84728C 0x84ADF9EB  
		static Hash get_ped_cause_of_death(Ped ped) { return invoke<Hash>(0x16FFE42AB2D2DC59, ped); }
		// 0x16FFE42AB2D2DC59 0x63458C27  
		static int _get_ped_time_of_death(Ped ped) { return invoke<int>(0x1E98817B311AE98A, ped); }
		// 0x1E98817B311AE98A  
		static int _0x5407b7288d0478b7(Any p0) { return invoke<int>(0x5407B7288D0478B7, p0); }
		// 0x5407B7288D0478B7 0xEF0B78E6  
		static Any _0x336b3d200ab007cb(Any p0, float p1, float p2, float p3, float p4)
		{
			return invoke<Any>(0x336B3D200AB007CB, p0, p1, p2, p3, p4);
		} // 0x336B3D200AB007CB 0xFB18CB19  
		static void set_ped_relationship_group_default_hash(Ped ped, Hash hash)
		{
			invoke<Void>(0xADB3F206518799E8, ped, hash);
		} // 0xADB3F206518799E8 0x423B7BA2  
		static void set_ped_relationship_group_hash(Ped ped, Hash hash) { invoke<Void>(0xC80A74AC829DDD92, ped, hash); }
		// 0xC80A74AC829DDD92 0x79F8C18C  
		static void set_relationship_between_groups(int relationship, Hash group1, Hash group2)
		{
			invoke<Void>(0xBF25EB89375A37AD, relationship, group1, group2);
		} // 0xBF25EB89375A37AD 0xD4A215BA  
		static void clear_relationship_between_groups(int relationship, Hash group1, Hash group2)
		{
			invoke<Void>(0x5E29243FB56FC6D4, relationship, group1, group2);
		} // 0x5E29243FB56FC6D4 0x994B8C2D  
		static Any add_relationship_group(const char* name, Hash* groupHash)
		{
			return invoke<Any>(0xF372BC22FCB88606, name, groupHash);
		} // 0xF372BC22FCB88606 0x8B635546  
		static void remove_relationship_group(Hash groupHash) { invoke<Void>(0xB6BA2444AB393DA2, groupHash); }
		// 0xB6BA2444AB393DA2 0x4A1DC59A  
		static int get_relationship_between_peds(Ped ped1, Ped ped2)
		{
			return invoke<int>(0xEBA5AD3A0EAF7121, ped1, ped2);
		} // 0xEBA5AD3A0EAF7121 0xE254C39C  
		static Hash get_ped_relationship_group_default_hash(Ped ped) { return invoke<Hash>(0x42FDD0F017B1E38E, ped); }
		// 0x42FDD0F017B1E38E 0x714BD6E4  
		static Hash get_ped_relationship_group_hash(Ped ped) { return invoke<Hash>(0x7DBDD04862D95F04, ped); }
		// 0x7DBDD04862D95F04 0x354F283C  
		static int get_relationship_between_groups(Hash group1, Hash group2)
		{
			return invoke<int>(0x9E6B70061662AE5C, group1, group2);
		} // 0x9E6B70061662AE5C 0x4E372FE2  
		static void set_ped_can_be_targeted_without_los(Ped ped, bool toggle)
		{
			invoke<Void>(0x4328652AE5769C71, ped, toggle);
		} // 0x4328652AE5769C71 0x7FDDC0A6  
		static void set_ped_to_inform_respected_friends(Ped ped, float radius, int maxFriends)
		{
			invoke<Void>(0x112942C6E708F70B, ped, radius, maxFriends);
		} // 0x112942C6E708F70B 0xD78AC46C  
		static bool is_ped_responding_to_event(Ped ped, Any event)
		{
			return invoke<bool>(0x625B774D75C87068, ped, event);
		} // 0x625B774D75C87068 0x7A877554  
		static void set_ped_firing_pattern(Ped ped, Hash patternHash)
		{
			invoke<Void>(0x9AC577F5A12AD8A9, ped, patternHash);
		} // 0x9AC577F5A12AD8A9 0xB4629D66  
		static void set_ped_shoot_rate(Ped ped, int shootRate) { invoke<Void>(0x614DA022990752DC, ped, shootRate); }
		// 0x614DA022990752DC 0xFB301746  
		static void set_combat_float(Ped ped, int combatType, float p2)
		{
			invoke<Void>(0xFF41B4B141ED981C, ped, combatType, p2);
		} // 0xFF41B4B141ED981C 0xD8B7637C  
		static float get_combat_float(Ped ped, int p1) { return invoke<float>(0x52DFF8A10508090A, ped, p1); }
		// 0x52DFF8A10508090A 0x511D7EF8  
		static void get_group_size(int groupID, Any* unknown, int* sizeInMembers)
		{
			invoke<Void>(0x8DE69FE35CA09A45, groupID, unknown, sizeInMembers);
		} // 0x8DE69FE35CA09A45 0xF7E1A691  
		static bool does_group_exist(int groupId) { return invoke<bool>(0x7C6B0C22F9F40BBE, groupId); }
		// 0x7C6B0C22F9F40BBE 0x935C978D  
		static int get_ped_group_index(Ped ped) { return invoke<int>(0xF162E133B4E7A675, ped); }
		// 0xF162E133B4E7A675 0x134E0785  
		static bool is_ped_in_group(Ped ped) { return invoke<bool>(0x5891CAC5D4ACFF74, ped); }
		// 0x5891CAC5D4ACFF74 0x836D9795  
		static Player get_player_ped_is_following(Ped ped) { return invoke<Player>(0x6A3975DEA89F9A17, ped); }
		// 0x6A3975DEA89F9A17 0xDE7442EE  
		static void set_group_formation(int groupId, int formationType)
		{
			invoke<Void>(0xCE2F5FC3AF7E8C1E, groupId, formationType);
		} // 0xCE2F5FC3AF7E8C1E 0x08FAC739  
		static void set_group_formation_spacing(int groupId, float p1, float p2, float p3)
		{
			invoke<Void>(0x1D9D45004C28C916, groupId, p1, p2, p3);
		} // 0x1D9D45004C28C916 0xB1E086FF  
		static void reset_group_formation_default_spacing(int groupHandle)
		{
			invoke<Void>(0x63DAB4CCB3273205, groupHandle);
		} // 0x63DAB4CCB3273205 0x267FCEAD  
		static Vehicle get_vehicle_ped_is_using(Ped ped) { return invoke<Vehicle>(0x6094AD011A2EA87D, ped); }
		// 0x6094AD011A2EA87D 0x6DE3AADA  
		static Vehicle set_exclusive_phone_relationships(Ped ped) { return invoke<Vehicle>(0xF92691AED837A5FC, ped); }
		// 0xF92691AED837A5FC 0x56E0C163  
		static void set_ped_gravity(Ped ped, bool toggle) { invoke<Void>(0x9FF447B6B6AD960A, ped, toggle); }
		// 0x9FF447B6B6AD960A 0x3CA16652  
		static void apply_damage_to_ped(Ped ped, int damageAmount, bool p2)
		{
			invoke<Void>(0x697157CED63F18D4, ped, damageAmount, p2);
		} // 0x697157CED63F18D4 0x4DC27FCF  
		static Any _0x36b77bb84687c318(Ped ped, Any p1) { return invoke<Any>(0x36B77BB84687C318, ped, p1); }
		// 0x36B77BB84687C318  
		static void set_ped_allowed_to_duck(Ped ped, bool toggle) { invoke<Void>(0xDA1F1B7BE1A8766F, ped, toggle); }
		// 0xDA1F1B7BE1A8766F 0xC4D122F8  
		static void set_ped_never_leaves_group(Ped ped, bool toggle) { invoke<Void>(0x3DBFC55D5C9BB447, ped, toggle); }
		// 0x3DBFC55D5C9BB447 0x0E038813  
		static int get_ped_type(Ped ped) { return invoke<int>(0xFF059E1E4C01E63C, ped); }
		// 0xFF059E1E4C01E63C 0xB1460D43  
		static void set_ped_as_cop(Ped ped, bool toggle) { invoke<Void>(0xBB03C38DD3FB7FFD, ped, toggle); }
		// 0xBB03C38DD3FB7FFD 0x84E7DE9F  
		static void set_ped_max_health(Ped ped, int value) { invoke<Void>(0xF5F6378C4F3419D3, ped, value); }
		// 0xF5F6378C4F3419D3 0x5533F60B  
		static int get_ped_max_health(Ped ped) { return invoke<int>(0x4700A416E8324EF3, ped); }
		// 0x4700A416E8324EF3 0xA45B6C8D  
		static void set_ped_max_time_in_water(Ped ped, float value) { invoke<Void>(0x43C851690662113D, ped, value); }
		// 0x43C851690662113D 0xFE0A106B  
		static void set_ped_max_time_underwater(Ped ped, float value) { invoke<Void>(0x6BA428C528D9E522, ped, value); }
		// 0x6BA428C528D9E522 0x082EF240  
		static void _0x2735233a786b1bef(Ped ped, float p1) { invoke<Void>(0x2735233A786B1BEF, ped, p1); }
		// 0x2735233A786B1BEF 0x373CC405  
		static void _0x952f06beecd775cc(Any p0, Any p1, Any p2, Any p3)
		{
			invoke<Void>(0x952F06BEECD775CC, p0, p1, p2, p3);
		} // 0x952F06BEECD775CC  
		static void _0xe6ca85e7259ce16b(Any p0) { invoke<Void>(0xE6CA85E7259CE16B, p0); } // 0xE6CA85E7259CE16B  
		static void set_ped_can_be_knocked_off_vehicle(Ped ped, int state)
		{
			invoke<Void>(0x7A6535691B477C48, ped, state);
		} // 0x7A6535691B477C48 0x8A251612  
		static bool can_knock_ped_off_vehicle(Ped ped) { return invoke<bool>(0x51AC07A44D4F5B8A, ped); }
		// 0x51AC07A44D4F5B8A 0xC9D098B3  
		static void knock_ped_off_vehicle(Ped ped) { invoke<Void>(0x45BBCBA77C29A841, ped); }
		// 0x45BBCBA77C29A841 0xACDD0674  
		static void set_ped_coords_no_gang(Ped ped, float posX, float posY, float posZ)
		{
			invoke<Void>(0x87052FE446E07247, ped, posX, posY, posZ);
		} // 0x87052FE446E07247 0x9561AD98  
		static Ped get_ped_as_group_member(int groupID, int memberNumber)
		{
			return invoke<Ped>(0x51455483CF23ED97, groupID, memberNumber);
		} // 0x51455483CF23ED97 0x9AA3CC8C  
		static Ped _get_ped_as_group_leader(int groupID) { return invoke<Ped>(0x5CCE68DBD5FE93EC, groupID); }
		// 0x5CCE68DBD5FE93EC  
		static void set_ped_keep_task(Ped ped, bool toggle) { invoke<Void>(0x971D38760FBC02EF, ped, toggle); }
		// 0x971D38760FBC02EF 0xA7EC79CE  
		static void _0x49e50bdb8ba4dab2(Ped ped, bool p1) { invoke<Void>(0x49E50BDB8BA4DAB2, ped, p1); }
		// 0x49E50BDB8BA4DAB2 0x397F06E3  
		static bool is_ped_swimming(Ped ped) { return invoke<bool>(0x9DE327631295B4C2, ped); }
		// 0x9DE327631295B4C2 0x7AB43DB8  
		static bool is_ped_swimming_under_water(Ped ped) { return invoke<bool>(0xC024869A53992F34, ped); }
		// 0xC024869A53992F34 0x0E8D524F  
		static void set_ped_coords_keep_vehicle(Ped ped, float posX, float posY, float posZ)
		{
			invoke<Void>(0x9AFEFF481A85AB2E, ped, posX, posY, posZ);
		} // 0x9AFEFF481A85AB2E 0xD66AE1D3  
		static void set_ped_dies_in_vehicle(Ped ped, bool toggle) { invoke<Void>(0x2A30922C90C9B42C, ped, toggle); }
		// 0x2A30922C90C9B42C 0x6FE1E440  
		static void set_create_random_cops(bool toggle) { invoke<Void>(0x102E68B2024D536D, toggle); }
		// 0x102E68B2024D536D 0x23441648  
		static void set_create_random_cops_not_on_scenarios(bool toggle) { invoke<Void>(0x8A4986851C4EF6E7, toggle); }
		// 0x8A4986851C4EF6E7 0x82E548CC  
		static void set_create_random_cops_on_scenarios(bool toggle) { invoke<Void>(0x444CB7D7DBE6973D, toggle); }
		// 0x444CB7D7DBE6973D 0xEDC31475  
		static bool can_create_random_cops() { return invoke<bool>(0x5EE2CAFF7F17770D); }
		// 0x5EE2CAFF7F17770D 0xAA73DAD9  
		static void set_ped_as_enemy(Ped ped, bool toggle) { invoke<Void>(0x02A0C9720B854BFA, ped, toggle); }
		// 0x02A0C9720B854BFA 0xAE620A1B  
		static void set_ped_can_smash_glass(Ped ped, bool p1, bool p2)
		{
			invoke<Void>(0x1CCE141467FF42A2, ped, p1, p2);
		} // 0x1CCE141467FF42A2 0x149C60A8  
		static bool is_ped_in_any_train(Ped ped) { return invoke<bool>(0x6F972C1AB75A1ED0, ped); }
		// 0x6F972C1AB75A1ED0 0x759EF63A  
		static bool is_ped_getting_into_a_vehicle(Ped ped) { return invoke<bool>(0xBB062B2B5722478E, ped); }
		// 0xBB062B2B5722478E 0x90E805AC  
		static bool is_ped_trying_to_enter_a_locked_vehicle(Ped ped) { return invoke<bool>(0x44D28D5DDFE5F68C, ped); }
		// 0x44D28D5DDFE5F68C 0x46828B4E  
		static void set_enable_handcuffs(Ped ped, bool toggle) { invoke<Void>(0xDF1AF8B5D56542FA, ped, toggle); }
		// 0xDF1AF8B5D56542FA 0xAC9BBA23  
		static void set_enable_bound_ankles(Ped ped, bool toggle) { invoke<Void>(0xC52E0F855C58FC2E, ped, toggle); }
		// 0xC52E0F855C58FC2E 0x9208D689  
		static void set_enable_scuba(Ped ped, bool toggle) { invoke<Void>(0xF99F62004024D506, ped, toggle); }
		// 0xF99F62004024D506 0x7BF61471  
		static void set_can_attack_friendly(Ped ped, bool toggle, bool p2)
		{
			invoke<Void>(0xB3B1CB349FF9C75D, ped, toggle, p2);
		} // 0xB3B1CB349FF9C75D 0x47C60963  
		static int get_ped_alertness(Ped ped) { return invoke<int>(0xF6AA118530443FD2, ped); }
		// 0xF6AA118530443FD2 0xF83E4DAF  
		static void set_ped_alertness(Ped ped, int value) { invoke<Void>(0xDBA71115ED9941A6, ped, value); }
		// 0xDBA71115ED9941A6 0x2C32D9AE  
		static void set_ped_get_out_upside_down_vehicle(Ped ped, bool toggle)
		{
			invoke<Void>(0xBC0ED94165A48BC2, ped, toggle);
		} // 0xBC0ED94165A48BC2 0x89AD49FF  
		static void set_ped_movement_clipset(Ped ped, const char* clipSet, float p2)
		{
			invoke<Void>(0xAF8A94EDE7712BEF, ped, clipSet, p2);
		} // 0xAF8A94EDE7712BEF 0xA817CDEB  
		static void reset_ped_movement_clipset(Ped ped, float p1) { invoke<Void>(0xAA74EC0CB0AAEA2C, ped, p1); }
		// 0xAA74EC0CB0AAEA2C 0xB83CEE93  
		static void set_ped_strafe_clipset(Ped ped, const char* clipSet)
		{
			invoke<Void>(0x29A28F3F8CF6D854, ped, clipSet);
		} // 0x29A28F3F8CF6D854 0x0BACF010  
		static void reset_ped_strafe_clipset(Ped ped) { invoke<Void>(0x20510814175EA477, ped); }
		// 0x20510814175EA477 0xF1967A12  
		static void set_ped_weapon_movement_clipset(Ped ped, const char* clipSet)
		{
			invoke<Void>(0x2622E35B77D3ACA2, ped, clipSet);
		} // 0x2622E35B77D3ACA2 0xF8BE54DC  
		static void reset_ped_weapon_movement_clipset(Ped ped) { invoke<Void>(0x97B0DB5B4AA74E77, ped); }
		// 0x97B0DB5B4AA74E77 0xC60C9ACD  
		static void set_ped_drive_by_clipset_override(Ped ped, const char* clipset)
		{
			invoke<Void>(0xED34AB6C5CB36520, ped, clipset);
		} // 0xED34AB6C5CB36520 0xD4C73595  
		static void clear_ped_drive_by_clipset_override(Ped ped) { invoke<Void>(0x4AFE3690D7E0B5AC, ped); }
		// 0x4AFE3690D7E0B5AC 0xAEC9163B  
		static void _0x9dba107b4937f809(Any p0, const char* p1) { invoke<Void>(0x9DBA107B4937F809, p0, p1); }
		// 0x9DBA107B4937F809  
		static void _0xc79196dcb36f6121(Any p0) { invoke<Void>(0xC79196DCB36F6121, p0); } // 0xC79196DCB36F6121  
		static void _0x80054d7fcc70eec6(Any p0) { invoke<Void>(0x80054D7FCC70EEC6, p0); } // 0x80054D7FCC70EEC6  
		static void set_ped_in_vehicle_context(Ped ped, Hash context)
		{
			invoke<Void>(0x530071295899A8C6, ped, context);
		} // 0x530071295899A8C6 0x27F25C0E  
		static void reset_ped_in_vehicle_context(Ped ped) { invoke<Void>(0x22EF8FF8778030EB, ped); }
		// 0x22EF8FF8778030EB 0x3C94D88A  
		static bool is_scripted_scenario_ped_using_conditional_anim(Ped ped, const char* animDict, const char* anim)
		{
			return invoke<bool>(0x6EC47A344923E1ED, ped, animDict, anim);
		} // 0x6EC47A344923E1ED 0x3C30B447  
		static void set_ped_alternate_walk_anim(Ped ped, const char* animDict, const char* animName, float p3, bool p4)
		{
			invoke<Void>(0x6C60394CB4F75E9A, ped, animDict, animName, p3, p4);
		} // 0x6C60394CB4F75E9A 0x895E1D67  
		static void clear_ped_alternate_walk_anim(Ped ped, float p1) { invoke<Void>(0x8844BBFCE30AA9E9, ped, p1); }
		// 0x8844BBFCE30AA9E9 0x5736FB23  
		static void set_ped_alternate_movement_anim(Ped ped, int stance, const char* animDictionary,
			const char* animationName, float p4, bool p5)
		{
			invoke<Void>(0x90A43CC281FFAB46, ped, stance, animDictionary, animationName, p4, p5);
		} // 0x90A43CC281FFAB46 0xBA84FD8C  
		static void clear_ped_alternate_movement_anim(Ped ped, int stance, float p2)
		{
			invoke<Void>(0xD8D19675ED5FBDCE, ped, stance, p2);
		} // 0xD8D19675ED5FBDCE 0x7A7F5BC3  
		static void set_ped_gesture_group(Ped ped, const char* animGroupGesture)
		{
			invoke<Void>(0xDDF803377F94AAA8, ped, animGroupGesture);
		} // 0xDDF803377F94AAA8 0x170DA109  
		static Vector3 get_anim_initial_offset_position(const char* animDict, const char* animName, float x, float y,
			float z, float xRot, float yRot, float zRot, float p8, int p9)
		{
			return invoke<Vector3>(0xBE22B26DD764C040, animDict, animName, x, y, z, xRot, yRot, zRot, p8, p9);
		} // 0xBE22B26DD764C040 0xC59D4268  
		static Vector3 get_anim_initial_offset_rotation(const char* animDict, const char* animName, float x, float y,
			float z, float xRot, float yRot, float zRot, float p8, int p9)
		{
			return invoke<Vector3>(0x4B805E6046EE9E47, animDict, animName, x, y, z, xRot, yRot, zRot, p8, p9);
		} // 0x4B805E6046EE9E47 0x5F7789E6  
		static int get_ped_drawable_variation(Ped ped, int componentId)
		{
			return invoke<int>(0x67F3780DD425D4FC, ped, componentId);
		} // 0x67F3780DD425D4FC 0x29850FE2  
		static int get_number_of_ped_drawable_variations(Ped ped, int componentId)
		{
			return invoke<int>(0x27561561732A7842, ped, componentId);
		} // 0x27561561732A7842 0x9754C27D  
		static int get_ped_texture_variation(Ped ped, int componentId)
		{
			return invoke<int>(0x04A355E041E004E6, ped, componentId);
		} // 0x04A355E041E004E6 0xC0A8590A  
		static int get_number_of_ped_texture_variations(Ped ped, int componentId, int drawableId)
		{
			return invoke<int>(0x8F7156A3142A6BAD, ped, componentId, drawableId);
		} // 0x8F7156A3142A6BAD 0x83D9FBE7  
		static int get_number_of_ped_prop_drawable_variations(Ped ped, int propId)
		{
			return invoke<int>(0x5FAF9754E789FB47, ped, propId);
		} // 0x5FAF9754E789FB47 0xC9780B95  
		static int get_number_of_ped_prop_texture_variations(Ped ped, int propId, int drawableId)
		{
			return invoke<int>(0xA6E7F1CEB523E171, ped, propId, drawableId);
		} // 0xA6E7F1CEB523E171 0x4892B882  
		static int get_ped_palette_variation(Ped ped, int componentId)
		{
			return invoke<int>(0xE3DD5F2A84B42281, ped, componentId);
		} // 0xE3DD5F2A84B42281 0xEF1BC082  
		static bool _0x9e30e91fb03a2caf(Any* p0, Any* p1) { return invoke<bool>(0x9E30E91FB03A2CAF, p0, p1); }
		// 0x9E30E91FB03A2CAF  
		static Any _0x1e77fa7a62ee6c4c(Any p0) { return invoke<Any>(0x1E77FA7A62EE6C4C, p0); } // 0x1E77FA7A62EE6C4C  
		static Any _0xf033419d1b81fae8(Any p0) { return invoke<Any>(0xF033419D1B81FAE8, p0); } // 0xF033419D1B81FAE8  
		static bool is_ped_component_variation_valid(Ped ped, int componentId, int drawableId, int textureId)
		{
			return invoke<bool>(0xE825F6B6CEA7671D, ped, componentId, drawableId, textureId);
		} // 0xE825F6B6CEA7671D 0x952ABD9A  
		static void set_ped_component_variation(Ped ped, int componentId, int drawableId, int textureId, int paletteId)
		{
			invoke<Void>(0x262B14F48D29DE80, ped, componentId, drawableId, textureId, paletteId);
		} // 0x262B14F48D29DE80 0xD4F7B05C  
		static void set_ped_random_component_variation(Ped ped, bool p1) { invoke<Void>(0xC8A9481A01E63C28, ped, p1); }
		// 0xC8A9481A01E63C28 0x4111BA46  
		static void set_ped_random_props(Ped ped) { invoke<Void>(0xC44AA05345C992C6, ped); }
		// 0xC44AA05345C992C6 0xE3318E0E  
		static void set_ped_default_component_variation(Ped ped) { invoke<Void>(0x45EEE61580806D63, ped); }
		// 0x45EEE61580806D63 0xC866A984  
		static void set_ped_blend_from_parents(Ped ped, Any p1, Any p2, float p3, float p4)
		{
			invoke<Void>(0x137BBD05230DB22D, ped, p1, p2, p3, p4);
		} // 0x137BBD05230DB22D 0x837BD370  
		static void set_ped_head_blend_data(Ped ped, int shapeFirstID, int shapeSecondID, int shapeThirdID,
			int skinFirstID, int skinSecondID, int skinThirdID, float shapeMix,
			float skinMix, float thirdMix, bool isParent)
		{
			invoke<Void>(0x9414E18B9434C2FE, ped, shapeFirstID, shapeSecondID, shapeThirdID, skinFirstID, skinSecondID,
				skinThirdID, shapeMix, skinMix, thirdMix, isParent);
		} // 0x9414E18B9434C2FE 0x60746B88  
		static bool _get_ped_head_blend_data(Ped ped, Any* headBlendData)
		{
			return invoke<bool>(0x2746BD9D88C5C5D0, ped, headBlendData);
		} // 0x2746BD9D88C5C5D0  
		static void update_ped_head_blend_data(Ped ped, float shapeMix, float skinMix, float thirdMix)
		{
			invoke<Void>(0x723538F61C647C5A, ped, shapeMix, skinMix, thirdMix);
		} // 0x723538F61C647C5A 0x5CB76219  
		static void _set_ped_eye_color(Ped ped, int index) { invoke<Void>(0x50B56988B170AFDF, ped, index); }
		// 0x50B56988B170AFDF  
		static void set_ped_head_overlay(Ped ped, int overlayID, int index, float opacity)
		{
			invoke<Void>(0x48F44967FA05CC1E, ped, overlayID, index, opacity);
		} // 0x48F44967FA05CC1E 0xD28DBA90  
		static int _get_ped_head_overlay_value(Ped ped, int overlayID)
		{
			return invoke<int>(0xA60EF3B6461A4D43, ped, overlayID);
		} // 0xA60EF3B6461A4D43  
		static int _get_num_head_overlay_values(int overlayID) { return invoke<int>(0xCF1CE768BB43480E, overlayID); }
		// 0xCF1CE768BB43480E 0xFF43C18D  
		static void _set_ped_head_overlay_color(Ped ped, int overlayID, int colorType, int colorID, int secondColorID)
		{
			invoke<Void>(0x497BF74A7B9CB952, ped, overlayID, colorType, colorID, secondColorID);
		} // 0x497BF74A7B9CB952  
		static void _set_ped_hair_color(Ped ped, int colorID, int highlightColorID)
		{
			invoke<Void>(0x4CFFC65454C93A49, ped, colorID, highlightColorID);
		} // 0x4CFFC65454C93A49  
		static int _get_num_hair_colors() { return invoke<int>(0xE5C0CF872C2AD150); } // 0xE5C0CF872C2AD150  
		static int _get_num_makeup_colors() { return invoke<int>(0xD1F7CA1535D22818); } // 0xD1F7CA1535D22818  
		static void _0x4852fc386e2e1bb5(Any p0, Any* p1, Any* p2, Any* p3)
		{
			invoke<Void>(0x4852FC386E2E1BB5, p0, p1, p2, p3);
		} // 0x4852FC386E2E1BB5  
		static void _0x013e5cfc38cd5387(Any p0, Any* p1, Any* p2, Any* p3)
		{
			invoke<Void>(0x013E5CFC38CD5387, p0, p1, p2, p3);
		} // 0x013E5CFC38CD5387  
		static bool _0xed6d8e27a43b8cde(Any p0) { return invoke<bool>(0xED6D8E27A43B8CDE, p0); } // 0xED6D8E27A43B8CDE  
		static int _0xea9960d07dadcf10(Any p0) { return invoke<int>(0xEA9960D07DADCF10, p0); } // 0xEA9960D07DADCF10  
		static bool _0x3e802f11fbe27674(Any p0) { return invoke<bool>(0x3E802F11FBE27674, p0); } // 0x3E802F11FBE27674  
		static bool _0xf41b5d290c99a3d6(Any p0) { return invoke<bool>(0xF41B5D290C99A3D6, p0); } // 0xF41B5D290C99A3D6  
		static bool _is_ped_hair_color_valid(int colorID) { return invoke<bool>(0xE0D36E5D9E99CC21, colorID); }
		// 0xE0D36E5D9E99CC21  
		static Any _0xaaa6a3698a69e048(Any p0) { return invoke<Any>(0xAAA6A3698A69E048, p0); } // 0xAAA6A3698A69E048  
		static bool _is_ped_lipstick_color_valid(int colorID) { return invoke<bool>(0x0525A2C2562F3CD4, colorID); }
		// 0x0525A2C2562F3CD4  
		static bool _is_ped_blush_color_valid(int colorID) { return invoke<bool>(0x604E810189EE3A59, colorID); }
		// 0x604E810189EE3A59  
		static Any _0xc56fbf2f228e1dac(Hash modelHash, Any p1, Any p2)
		{
			return invoke<Any>(0xC56FBF2F228E1DAC, modelHash, p1, p2);
		} // 0xC56FBF2F228E1DAC  
		static void _set_ped_face_feature(Ped ped, int index, float scale)
		{
			invoke<Void>(0x71A5C1DBA060049E, ped, index, scale);
		} // 0x71A5C1DBA060049E  
		static bool has_ped_head_blend_finished(Ped ped) { return invoke<bool>(0x654CD0A825161131, ped); }
		// 0x654CD0A825161131 0x2B1BD9C5  
		static void _0x4668d80430d6c299(Ped ped) { invoke<Void>(0x4668D80430D6C299, ped); }
		// 0x4668D80430D6C299 0x894314A4  
		static void _0xcc9682b8951c5229(Ped ped, int r, int g, int b, int p4)
		{
			invoke<Void>(0xCC9682B8951C5229, ped, r, g, b, p4);
		} // 0xCC9682B8951C5229 0x57E5B3F9  
		static void _0xa21c118553bbdf02(Ped ped) { invoke<Void>(0xA21C118553BBDF02, ped); }
		// 0xA21C118553BBDF02 0xC6F36292  
		static int _get_first_parent_id_for_ped_type(int type) { return invoke<int>(0x68D353AB88B97E0C, type); }
		// 0x68D353AB88B97E0C 0x211DEFEC  
		static int _get_num_parent_peds_of_type(int type) { return invoke<int>(0x5EF37013A6539C9D, type); }
		// 0x5EF37013A6539C9D 0x095D3BD8  
		static Any _0x39d55a620fcb6a3a(Ped ped, int slot, int drawableId, int textureId)
		{
			return invoke<Any>(0x39D55A620FCB6A3A, ped, slot, drawableId, textureId);
		} // 0x39D55A620FCB6A3A 0x45F3BDFB  
		static bool _0x66680a92700f43df(Ped p0) { return invoke<bool>(0x66680A92700F43DF, p0); }
		// 0x66680A92700F43DF 0xC6517D52  
		static void _0x5aab586ffec0fd96(Any p0) { invoke<Void>(0x5AAB586FFEC0FD96, p0); }
		// 0x5AAB586FFEC0FD96 0x6435F67F  
		static bool _is_ped_prop_valid(Ped ped, int componentId, int drawableId, int TextureId)
		{
			return invoke<bool>(0x2B16A3BFF1FBCE49, ped, componentId, drawableId, TextureId);
		} // 0x2B16A3BFF1FBCE49 0xC0E23671  
		static bool _0x784002a632822099(Ped ped) { return invoke<bool>(0x784002A632822099, ped); }
		// 0x784002A632822099 0x3B0CA391  
		static void _0xf79f9def0aade61a(Ped ped) { invoke<Void>(0xF79F9DEF0AADE61A, ped); }
		// 0xF79F9DEF0AADE61A 0xFD103BA7  
		static int get_ped_prop_index(Ped ped, int componentId)
		{
			return invoke<int>(0x898CC20EA75BACD8, ped, componentId);
		} // 0x898CC20EA75BACD8 0x746DDAC0  
		static void set_ped_prop_index(Ped ped, int componentId, int drawableId, int TextureId, bool attach)
		{
			invoke<Void>(0x93376B65A266EB5F, ped, componentId, drawableId, TextureId, attach);
		} // 0x93376B65A266EB5F 0x0829F2E2  
		static void knock_off_ped_prop(Ped ped, bool p1, bool p2, bool p3, bool p4)
		{
			invoke<Void>(0x6FD7816A36615F48, ped, p1, p2, p3, p4);
		} // 0x6FD7816A36615F48 0x08D8B180  
		static void clear_ped_prop(Ped ped, int propId) { invoke<Void>(0x0943E5B8E078E76E, ped, propId); }
		// 0x0943E5B8E078E76E 0x2D23D743  
		static void clear_all_ped_props(Ped ped) { invoke<Void>(0xCD8A7537A9B52F06, ped); }
		// 0xCD8A7537A9B52F06 0x81DF8B43  
		static void _0xaff4710e2a0a6c12(Ped ped) { invoke<Void>(0xAFF4710E2A0A6C12, ped); } // 0xAFF4710E2A0A6C12  
		static int get_ped_prop_texture_index(Ped ped, int componentId)
		{
			return invoke<int>(0xE131A28626F81AB2, ped, componentId);
		} // 0xE131A28626F81AB2 0x922A6653  
		static void _0x1280804f7cfd2d6c(Any p0) { invoke<Void>(0x1280804F7CFD2D6C, p0); }
		// 0x1280804F7CFD2D6C 0x7BCD8991  
		static void _0x36c6984c3ed0c911(Any p0) { invoke<Void>(0x36C6984C3ED0C911, p0); } // 0x36C6984C3ED0C911  
		static void _0xb50eb4ccb29704ac(Any p0) { invoke<Void>(0xB50EB4CCB29704AC, p0); }
		// 0xB50EB4CCB29704AC 0x080275EE  
		static bool _0xfec9a3b1820f3331(Any p0) { return invoke<bool>(0xFEC9A3B1820F3331, p0); } // 0xFEC9A3B1820F3331  
		static void set_blocking_of_non_temporary_events(Ped ped, bool toggle)
		{
			invoke<Void>(0x9F8AA94D6D97DBF4, ped, toggle);
		} // 0x9F8AA94D6D97DBF4 0xDFE34E4A  
		static void set_ped_bounds_orientation(Ped ped, float p1, float p2, float p3, float p4, float p5)
		{
			invoke<Void>(0x4F5F651ACCC9C4CF, ped, p1, p2, p3, p4, p5);
		} // 0x4F5F651ACCC9C4CF 0xCFA20D68  
		static void register_target(Ped ped, Ped target) { invoke<Void>(0x2F25D9AEFA34FBA2, ped, target); }
		// 0x2F25D9AEFA34FBA2 0x50A95442  
		static void register_hated_targets_around_ped(Ped ped, float radius)
		{
			invoke<Void>(0x9222F300BF8354FE, ped, radius);
		} // 0x9222F300BF8354FE 0x7F87559E  
		static Ped get_random_ped_at_coord(float x, float y, float z, float xRadius, float yRadius, float zRadius,
			int pedType)
		{
			return invoke<Ped>(0x876046A8E3A4B71C, x, y, z, xRadius, yRadius, zRadius, pedType);
		} // 0x876046A8E3A4B71C 0xDC8239EB  
		static bool get_closest_ped(float x, float y, float z, float radius, bool p4, bool p5, Ped* outPed, bool p7,
			bool p8, int pedType)
		{
			return invoke<bool>(0xC33AB876A77F8164, x, y, z, radius, p4, p5, outPed, p7, p8, pedType);
		} // 0xC33AB876A77F8164 0x8F6C1F55  
		static void set_scenario_peds_to_be_returned_by_next_command(bool value)
		{
			invoke<Void>(0x14F19A8782C8071E, value);
		} // 0x14F19A8782C8071E 0x85615FD0  
		static bool _0x03ea03af85a85cb7(Ped ped, bool p1, bool p2, bool p3, bool p4, bool p5, bool p6, bool p7, Any p8)
		{
			return invoke<bool>(0x03EA03AF85A85CB7, ped, p1, p2, p3, p4, p5, p6, p7, p8);
		} // 0x03EA03AF85A85CB7 0x18DD76A1  
		static void _0xded5af5a0ea4b297(Ped driver, float p1) { invoke<Void>(0xDED5AF5A0EA4B297, driver, p1); }
		// 0xDED5AF5A0EA4B297 0x6D55B3B3  
		static void set_driver_ability(Ped driver, float ability) { invoke<Void>(0xB195FFA8042FC5C3, driver, ability); }
		// 0xB195FFA8042FC5C3 0xAAD4012C  
		static void set_driver_aggressiveness(Ped driver, float aggressiveness)
		{
			invoke<Void>(0xA731F608CA104E3C, driver, aggressiveness);
		} // 0xA731F608CA104E3C 0x8B02A8FB  
		static bool can_ped_ragdoll(Ped ped) { return invoke<bool>(0x128F79EDCECE4FD5, ped); }
		// 0x128F79EDCECE4FD5 0xC0EFB7A3  
		static bool set_ped_to_ragdoll(Ped ped, int time1, int time2, int ragdollType, bool p4, bool p5, bool p6)
		{
			return invoke<bool>(0xAE99FB955581844A, ped, time1, time2, ragdollType, p4, p5, p6);
		} // 0xAE99FB955581844A 0x83CB5052  
		static bool set_ped_to_ragdoll_with_fall(Ped ped, int time, int p2, int ragdollType, float x, float y, float z,
			float p7, float p8, float p9, float p10, float p11, float p12,
			float p13)
		{
			return invoke<bool>(0xD76632D99E4966C8, ped, time, p2, ragdollType, x, y, z, p7, p8, p9, p10, p11, p12,
				p13);
		} // 0xD76632D99E4966C8 0xFA12E286  
		static void set_ped_ragdoll_on_collision(Ped ped, bool toggle)
		{
			invoke<Void>(0xF0A4F1BBF4FA7497, ped, toggle);
		} // 0xF0A4F1BBF4FA7497 0x2654A0F4  
		static bool is_ped_ragdoll(Ped ped) { return invoke<bool>(0x47E4E977581C5B55, ped); }
		// 0x47E4E977581C5B55 0xC833BBE1  
		static bool is_ped_running_ragdoll_task(Ped ped) { return invoke<bool>(0xE3B6097CC25AA69E, ped); }
		// 0xE3B6097CC25AA69E 0x44A153F2  
		static void set_ped_ragdoll_force_fall(Ped ped) { invoke<Void>(0x01F6594B923B9251, ped); }
		// 0x01F6594B923B9251 0x20A5BDE0  
		static void reset_ped_ragdoll_timer(Ped ped) { invoke<Void>(0x9FA4664CF62E47E8, ped); }
		// 0x9FA4664CF62E47E8 0xF2865370  
		static void set_ped_can_ragdoll(Ped ped, bool toggle) { invoke<Void>(0xB128377056A54E2A, ped, toggle); }
		// 0xB128377056A54E2A 0xCF1384C4  
		static bool _0xd1871251f3b5acd7(Ped ped) { return invoke<bool>(0xD1871251F3B5ACD7, ped); }
		// 0xD1871251F3B5ACD7  
		static bool is_ped_running_mobile_phone_task(Ped ped) { return invoke<bool>(0x2AFE52F782F25775, ped); }
		// 0x2AFE52F782F25775 0xFB2AFED1  
		static bool _0xa3f3564a5b3646c0(Ped ped) { return invoke<bool>(0xA3F3564A5B3646C0, ped); }
		// 0xA3F3564A5B3646C0 0x97353375  
		static void _set_ped_ragdoll_blocking_flags(Ped ped, int flags)
		{
			invoke<Void>(0x26695EC767728D84, ped, flags);
		} // 0x26695EC767728D84 0x9C8F830D  
		static void _reset_ped_ragdoll_blocking_flags(Ped ped, int flags)
		{
			invoke<Void>(0xD86D101FCFD00A4B, ped, flags);
		} // 0xD86D101FCFD00A4B 0x77CBA290  
		static void set_ped_angled_defensive_area(Ped ped, float p1, float p2, float p3, float p4, float p5, float p6,
			float p7, bool p8, bool p9)
		{
			invoke<Void>(0xC7F76DF27A5045A1, ped, p1, p2, p3, p4, p5, p6, p7, p8, p9);
		} // 0xC7F76DF27A5045A1 0x3EFBDD9B  
		static void set_ped_sphere_defensive_area(Ped ped, float x, float y, float z, float radius, bool p5, bool p6)
		{
			invoke<Void>(0x9D3151A373974804, ped, x, y, z, radius, p5, p6);
		} // 0x9D3151A373974804 0xBD96D8E8  
		static void set_ped_defensive_sphere_attached_to_ped(Ped ped, Ped target, float xOffset, float yOffset,
			float zOffset, float radius, bool p6)
		{
			invoke<Void>(0xF9B8F91AAD3B953E, ped, target, xOffset, yOffset, zOffset, radius, p6);
		} // 0xF9B8F91AAD3B953E 0x40638BDC  
		static void _0xe4723db6e736ccff(Ped ped, Any p1, float p2, float p3, float p4, float p5, bool p6)
		{
			invoke<Void>(0xE4723DB6E736CCFF, ped, p1, p2, p3, p4, p5, p6);
		} // 0xE4723DB6E736CCFF 0x4763B2C6  
		static void set_ped_defensive_area_attached_to_ped(Ped ped, Ped attachPed, float p2, float p3, float p4,
			float p5, float p6, float p7, float p8, bool p9, bool p10)
		{
			invoke<Void>(0x4EF47FE21698A8B6, ped, attachPed, p2, p3, p4, p5, p6, p7, p8, p9, p10);
		} // 0x4EF47FE21698A8B6 0x74BDA7CE  
		static void set_ped_defensive_area_direction(Ped ped, float p1, float p2, float p3, bool p4)
		{
			invoke<Void>(0x413C6C763A4AFFAD, ped, p1, p2, p3, p4);
		} // 0x413C6C763A4AFFAD 0xB66B0C9A  
		static void remove_ped_defensive_area(Ped ped, bool toggle) { invoke<Void>(0x74D4E028107450A9, ped, toggle); }
		// 0x74D4E028107450A9 0x34AAAFA5  
		static Vector3 get_ped_defensive_area_position(Ped ped, bool p1)
		{
			return invoke<Vector3>(0x3C06B8786DD94CD1, ped, p1);
		} // 0x3C06B8786DD94CD1 0xCB65198D  
		static bool _0xba63d9fe45412247(Ped ped, bool p1) { return invoke<bool>(0xBA63D9FE45412247, ped, p1); }
		// 0xBA63D9FE45412247  
		static void set_ped_preferred_cover_set(Ped ped, Any itemSet)
		{
			invoke<Void>(0x8421EB4DA7E391B9, ped, itemSet);
		} // 0x8421EB4DA7E391B9 0xF3B7EFBF  
		static void remove_ped_preferred_cover_set(Ped ped) { invoke<Void>(0xFDDB234CF74073D9, ped); }
		// 0xFDDB234CF74073D9 0xA0134498  
		static void revive_injured_ped(Ped ped) { invoke<Void>(0x8D8ACD8388CD99CE, ped); }
		// 0x8D8ACD8388CD99CE 0x14D3E6E3  
		static void resurrect_ped(Ped ped) { invoke<Void>(0x71BC8E838B9C6035, ped); } // 0x71BC8E838B9C6035 0xA4B82097  
		static void set_ped_name_debug(Ped ped, const char* name) { invoke<Void>(0x98EFA132A4117BE1, ped, name); }
		// 0x98EFA132A4117BE1 0x20D6273E  
		static Vector3 get_ped_extracted_displacement(Ped ped, bool worldSpace)
		{
			return invoke<Vector3>(0xE0AF41401ADF87E3, ped, worldSpace);
		} // 0xE0AF41401ADF87E3 0x5231F901  
		static void set_ped_dies_when_injured(Ped ped, bool toggle) { invoke<Void>(0x5BA7919BED300023, ped, toggle); }
		// 0x5BA7919BED300023 0xE94E24D4  
		static void set_ped_enable_weapon_blocking(Ped ped, bool toggle)
		{
			invoke<Void>(0x97A790315D3831FD, ped, toggle);
		} // 0x97A790315D3831FD 0x4CAD1A4A  
		static void _0xf9acf4a08098ea25(Ped ped, bool p1) { invoke<Void>(0xF9ACF4A08098EA25, ped, p1); }
		// 0xF9ACF4A08098EA25 0x141CC936  
		static void reset_ped_visible_damage(Ped ped) { invoke<Void>(0x3AC1F7B898F30C05, ped); }
		// 0x3AC1F7B898F30C05 0xC4BC4841  
		static void apply_ped_blood_damage_by_zone(Ped ped, Any p1, float p2, float p3, Any p4)
		{
			invoke<Void>(0x816F6981C60BF53B, ped, p1, p2, p3, p4);
		} // 0x816F6981C60BF53B 0x1E54DB12  
		static void apply_ped_blood(Ped ped, int boneIndex, float xRot, float yRot, float zRot, const char* woundType)
		{
			invoke<Void>(0x83F7E01C7B769A26, ped, boneIndex, xRot, yRot, zRot, woundType);
		} // 0x83F7E01C7B769A26 0x376CE3C0  
		static void apply_ped_blood_by_zone(Ped ped, Any p1, float p2, float p3, Any* p4)
		{
			invoke<Void>(0x3311E47B91EDCBBC, ped, p1, p2, p3, p4);
		} // 0x3311E47B91EDCBBC 0x8F3F3A9C  
		static void apply_ped_blood_specific(Ped ped, Any p1, float p2, float p3, float p4, float p5, Any p6, float p7,
			Any* p8)
		{
			invoke<Void>(0xEF0D582CBF2D9B0F, ped, p1, p2, p3, p4, p5, p6, p7, p8);
		} // 0xEF0D582CBF2D9B0F 0xFC13CE80  
		static void apply_ped_damage_decal(Ped ped, int p1, float p2, float p3, float p4, float p5, float p6, int p7,
			bool p8, const char* p9)
		{
			invoke<Void>(0x397C38AA7B4A5F83, ped, p1, p2, p3, p4, p5, p6, p7, p8, p9);
		} // 0x397C38AA7B4A5F83 0x8A13A41F  
		static void apply_ped_damage_pack(Ped ped, const char* damagePack, float damage, float mult)
		{
			invoke<Void>(0x46DF918788CB093F, ped, damagePack, damage, mult);
		} // 0x46DF918788CB093F 0x208D0CB8  
		static void clear_ped_blood_damage(Ped ped) { invoke<Void>(0x8FE22675A5A45817, ped); }
		// 0x8FE22675A5A45817 0xF7ADC960  
		static void clear_ped_blood_damage_by_zone(Ped ped, int p1) { invoke<Void>(0x56E3B78C5408D9F4, ped, p1); }
		// 0x56E3B78C5408D9F4 0xF210BE69  
		static void hide_ped_blood_damage_by_zone(Ped ped, Any p1, bool p2)
		{
			invoke<Void>(0x62AB793144DE75DC, ped, p1, p2);
		} // 0x62AB793144DE75DC 0x0CB6C4ED  
		static void clear_ped_damage_decal_by_zone(Ped ped, int p1, const char* p2)
		{
			invoke<Void>(0x523C79AEEFCC4A2A, ped, p1, p2);
		} // 0x523C79AEEFCC4A2A 0x70AA5B7D  
		static Any get_ped_decorations_state(Ped ped) { return invoke<Any>(0x71EAB450D86954A1, ped); }
		// 0x71EAB450D86954A1 0x47187F7F  
		static void _0x2b694afcf64e6994(Ped ped, bool p1) { invoke<Void>(0x2B694AFCF64E6994, ped, p1); }
		// 0x2B694AFCF64E6994  
		static void clear_ped_wetness(Ped ped) { invoke<Void>(0x9C720776DAA43E7E, ped); }
		// 0x9C720776DAA43E7E 0x629F15BD  
		static void set_ped_wetness_height(Ped ped, float height) { invoke<Void>(0x44CB6447D2571AA0, ped, height); }
		// 0x44CB6447D2571AA0 0x7B33289A  
		static void set_ped_wetness_enabled_this_frame(Ped ped) { invoke<Void>(0xB5485E4907B53019, ped); }
		// 0xB5485E4907B53019 0xBDE749F7  
		static void _0x6585d955a68452a5(Ped ped) { invoke<Void>(0x6585D955A68452A5, ped); }
		// 0x6585D955A68452A5 0xA993915F  
		static void set_ped_sweat(Ped ped, float sweat) { invoke<Void>(0x27B0405F59637D1F, ped, sweat); }
		// 0x27B0405F59637D1F 0x76A1DB9F  
		static void _set_ped_decoration(Ped ped, Hash collection, Hash overlay)
		{
			invoke<Void>(0x5F5D1665E352A839, ped, collection, overlay);
		} // 0x5F5D1665E352A839 0x70559AC7  
		static void _set_ped_facial_decoration(Ped ped, Hash collection, Hash overlay)
		{
			invoke<Void>(0x5619BFA07CFD7833, ped, collection, overlay);
		} // 0x5619BFA07CFD7833  
		static int _get_tattoo_zone(Hash collection, Hash overlay)
		{
			return invoke<int>(0x9FD452BFBE7A7A8B, collection, overlay);
		} // 0x9FD452BFBE7A7A8B 0x3543019E  
		static void clear_ped_decorations(Ped ped) { invoke<Void>(0x0E5173C163976E38, ped); }
		// 0x0E5173C163976E38 0xD4496BF3  
		static void _clear_ped_facial_decorations(Ped ped) { invoke<Void>(0xE3B27E70CEAB9F0C, ped); }
		// 0xE3B27E70CEAB9F0C 0xEFD58EB9  
		static bool was_ped_skeleton_updated(Ped ped) { return invoke<bool>(0x11B499C1E0FF8559, ped); }
		// 0x11B499C1E0FF8559 0xF7E2FBAD  
		static Vector3 get_ped_bone_coords(Ped ped, int boneId, float offsetX, float offsetY, float offsetZ)
		{
			return invoke<Vector3>(0x17C07FC640E86B4E, ped, boneId, offsetX, offsetY, offsetZ);
		} // 0x17C07FC640E86B4E 0x4579CAB1  
		static void create_nm_message(bool startImmediately, int messageId)
		{
			invoke<Void>(0x418EF2A1BCE56685, startImmediately, messageId);
		} // 0x418EF2A1BCE56685 0x1CFBFD4B  
		static void give_ped_nm_message(Ped ped) { invoke<Void>(0xB158DFCCC56E5C5B, ped); }
		// 0xB158DFCCC56E5C5B 0x737C3689  
		static int add_scenario_blocking_area(float x1, float y1, float z1, float x2, float y2, float z2, bool p6,
			bool p7, bool p8, bool p9)
		{
			return invoke<int>(0x1B5C85C612E5256E, x1, y1, z1, x2, y2, z2, p6, p7, p8, p9);
		} // 0x1B5C85C612E5256E 0xA38C0234  
		static void remove_scenario_blocking_areas() { invoke<Void>(0xD37401D78A929A49); }
		// 0xD37401D78A929A49 0x4DDF845F  
		static void remove_scenario_blocking_area(Any p0, bool p1) { invoke<Void>(0x31D16B74C6E29D66, p0, p1); }
		// 0x31D16B74C6E29D66 0x4483EF06  
		static void set_scenario_peds_spawn_in_sphere_area(float x, float y, float z, float range, int p4)
		{
			invoke<Void>(0x28157D43CF600981, x, y, z, range, p4);
		} // 0x28157D43CF600981 0x80EAD297  
		static bool is_ped_using_scenario(Ped ped, const char* scenario)
		{
			return invoke<bool>(0x1BF094736DD62C2E, ped, scenario);
		} // 0x1BF094736DD62C2E 0x0F65B0D4  
		static bool is_ped_using_any_scenario(Ped ped) { return invoke<bool>(0x57AB4A3080F85143, ped); }
		// 0x57AB4A3080F85143 0x195EF5B7  
		static Any _0xfe07ff6495d52e2a(Any p0, Any p1, Any p2, Any p3)
		{
			return invoke<Any>(0xFE07FF6495D52E2A, p0, p1, p2, p3);
		} // 0xFE07FF6495D52E2A 0x59DE73AC  
		static void _0x9a77dfd295e29b09(Any p0, bool p1) { invoke<Void>(0x9A77DFD295E29B09, p0, p1); }
		// 0x9A77DFD295E29B09 0xC08FE5F6  
		static Any _0x25361a96e0f7e419(Any p0, Any p1, Any p2, Any p3)
		{
			return invoke<Any>(0x25361A96E0F7E419, p0, p1, p2, p3);
		} // 0x25361A96E0F7E419 0x58C0F6CF  
		static Any _0xec6935ebe0847b90(Any p0, Any p1, Any p2, Any p3)
		{
			return invoke<Any>(0xEC6935EBE0847B90, p0, p1, p2, p3);
		} // 0xEC6935EBE0847B90 0x761F8F48  
		static void _0xa3a9299c4f2adb98(Any p0) { invoke<Void>(0xA3A9299C4F2ADB98, p0); }
		// 0xA3A9299C4F2ADB98 0x033F43FA  
		static void _0xf1c03a5352243a30(Any p0) { invoke<Void>(0xF1C03A5352243A30, p0); }
		// 0xF1C03A5352243A30 0x4C684C81  
		static Any _0xeeed8fafec331a70(Any p0, Any p1, Any p2, Any p3)
		{
			return invoke<Any>(0xEEED8FAFEC331A70, p0, p1, p2, p3);
		} // 0xEEED8FAFEC331A70 0x7B4C3E6F  
		static void _0x425aecf167663f48(Ped ped, bool p1) { invoke<Void>(0x425AECF167663F48, ped, p1); }
		// 0x425AECF167663F48 0x5BC276AE  
		static void _0x5b6010b3cbc29095(Any p0, bool p1) { invoke<Void>(0x5B6010B3CBC29095, p0, p1); }
		// 0x5B6010B3CBC29095  
		static void _0xceda60a74219d064(Any p0, bool p1) { invoke<Void>(0xCEDA60A74219D064, p0, p1); }
		// 0xCEDA60A74219D064  
		static void play_facial_anim(Ped ped, const char* animName, const char* animDict)
		{
			invoke<Void>(0xE1E65CA8AC9C00ED, ped, animName, animDict);
		} // 0xE1E65CA8AC9C00ED 0x1F6CCDDE  
		static void set_facial_idle_anim_override(Ped ped, const char* animName, const char* animDict)
		{
			invoke<Void>(0xFFC24B988B938B38, ped, animName, animDict);
		} // 0xFFC24B988B938B38 0x9BA19C13  
		static void clear_facial_idle_anim_override(Ped ped) { invoke<Void>(0x726256CC1EEB182F, ped); }
		// 0x726256CC1EEB182F 0x5244F4E2  
		static void set_ped_can_play_gesture_anims(Ped ped, bool toggle)
		{
			invoke<Void>(0xBAF20C5432058024, ped, toggle);
		} // 0xBAF20C5432058024 0xE131E3B3  
		static void set_ped_can_play_viseme_anims(Ped ped, bool toggle, bool p2)
		{
			invoke<Void>(0xF833DDBA3B104D43, ped, toggle, p2);
		} // 0xF833DDBA3B104D43 0xA2FDAF27  
		static void _set_ped_can_play_injured_anims(Ped ped, bool p1) { invoke<Void>(0x33A60D8BDD6E508C, ped, p1); }
		// 0x33A60D8BDD6E508C 0xADB2511A  
		static void set_ped_can_play_ambient_anims(Ped ped, bool toggle)
		{
			invoke<Void>(0x6373D1349925A70E, ped, toggle);
		} // 0x6373D1349925A70E 0xF8053081  
		static void set_ped_can_play_ambient_base_anims(Ped ped, bool toggle)
		{
			invoke<Void>(0x0EB0585D15254740, ped, toggle);
		} // 0x0EB0585D15254740 0x5720A5DD  
		static void _0xc2ee020f5fb4db53(Ped ped) { invoke<Void>(0xC2EE020F5FB4DB53, ped); }
		// 0xC2EE020F5FB4DB53 0xB7CD0A49  
		static void set_ped_can_arm_ik(Ped ped, bool toggle) { invoke<Void>(0x6C3B4D6D13B4C841, ped, toggle); }
		// 0x6C3B4D6D13B4C841 0x343B4DE0  
		static void set_ped_can_head_ik(Ped ped, bool toggle) { invoke<Void>(0xC11C18092C5530DC, ped, toggle); }
		// 0xC11C18092C5530DC 0xD3B04476  
		static void set_ped_can_leg_ik(Ped ped, bool toggle) { invoke<Void>(0x73518ECE2485412B, ped, toggle); }
		// 0x73518ECE2485412B 0x9955BC6F  
		static void set_ped_can_torso_ik(Ped ped, bool toggle) { invoke<Void>(0xF2B7106D37947CE0, ped, toggle); }
		// 0xF2B7106D37947CE0 0x8E5D4EAB  
		static void _0xf5846edb26a98a24(Ped ped, bool p1) { invoke<Void>(0xF5846EDB26A98A24, ped, p1); }
		// 0xF5846EDB26A98A24 0x7B0040A8  
		static void _0x6647c5f6f5792496(Ped ped, bool p1) { invoke<Void>(0x6647C5F6F5792496, ped, p1); }
		// 0x6647C5F6F5792496 0x0FDA62DE  
		static void set_ped_can_use_auto_conversation_lookat(Ped ped, bool toggle)
		{
			invoke<Void>(0xEC4686EC06434678, ped, toggle);
		} // 0xEC4686EC06434678 0x584C5178  
		static bool is_ped_headtracking_ped(Ped ped1, Ped ped2) { return invoke<bool>(0x5CD3CB88A7F8850D, ped1, ped2); }
		// 0x5CD3CB88A7F8850D 0x2A5DF721  
		static bool is_ped_headtracking_entity(Ped ped, Entity entity)
		{
			return invoke<bool>(0x813A0A7C9D2E831F, ped, entity);
		} // 0x813A0A7C9D2E831F 0x233C9ACF  
		static void set_ped_primary_lookat(Ped ped, Ped lookAt) { invoke<Void>(0xCD17B554996A8D9E, ped, lookAt); }
		// 0xCD17B554996A8D9E 0x6DEF6F1C  
		static void _0x78c4e9961db3eb5b(Any p0, Any p1) { invoke<Void>(0x78C4E9961DB3EB5B, p0, p1); }
		// 0x78C4E9961DB3EB5B 0xFC942D7C  
		static void set_ped_cloth_prone(Any p0, Any p1) { invoke<Void>(0x82A3D6D9CC2CB8E3, p0, p1); }
		// 0x82A3D6D9CC2CB8E3 0x89EEE07B  
		static void _0xa660faf550eb37e5(Any p0, bool p1) { invoke<Void>(0xA660FAF550EB37E5, p0, p1); }
		// 0xA660FAF550EB37E5  
		static void set_ped_config_flag(Ped ped, int flagId, bool value)
		{
			invoke<Void>(0x1913FE4CBF41C463, ped, flagId, value);
		} // 0x1913FE4CBF41C463 0x9CFBE10D  
		static void set_ped_reset_flag(Ped ped, int flagId, bool doReset)
		{
			invoke<Void>(0xC1E8A365BF3B29F2, ped, flagId, doReset);
		} // 0xC1E8A365BF3B29F2 0xCFF6FF66  
		static bool get_ped_config_flag(Ped ped, int flagId, bool p2)
		{
			return invoke<bool>(0x7EE53118C892B513, ped, flagId, p2);
		} // 0x7EE53118C892B513 0xABE98267  
		static bool get_ped_reset_flag(Ped ped, int flagId) { return invoke<bool>(0xAF9E59B1B1FBF2A0, ped, flagId); }
		// 0xAF9E59B1B1FBF2A0 0x2FC10D11  
		static void set_ped_group_member_passenger_index(Ped ped, int index)
		{
			invoke<Void>(0x0BDDB8D9EC6BCF3C, ped, index);
		} // 0x0BDDB8D9EC6BCF3C 0x2AB3670B  
		static void set_ped_can_evasive_dive(Ped ped, bool toggle) { invoke<Void>(0x6B7A646C242A7059, ped, toggle); }
		// 0x6B7A646C242A7059 0x542FEB4D  
		static bool is_ped_evasive_diving(Ped ped, Entity* evadingEntity)
		{
			return invoke<bool>(0x414641C26E105898, ped, evadingEntity);
		} // 0x414641C26E105898 0xD82829DC  
		static void set_ped_shoots_at_coord(Ped ped, float x, float y, float z, bool toggle)
		{
			invoke<Void>(0x96A05E4FB321B1BA, ped, x, y, z, toggle);
		} // 0x96A05E4FB321B1BA 0xFD64EAE5  
		static void set_ped_model_is_suppressed(Ped ped, bool toggle) { invoke<Void>(0xE163A4BCE4DE6F11, ped, toggle); }
		// 0xE163A4BCE4DE6F11 0x7820CA43  
		static void stop_any_ped_model_being_suppressed() { invoke<Void>(0xB47BD05FA66B40CF); }
		// 0xB47BD05FA66B40CF 0x5AD7DC55  
		static void set_ped_can_be_targeted_when_injured(Ped ped, bool toggle)
		{
			invoke<Void>(0x638C03B0F9878F57, ped, toggle);
		} // 0x638C03B0F9878F57 0x6FD9A7CD  
		static void set_ped_generates_dead_body_events(Ped ped, bool toggle)
		{
			invoke<Void>(0x7FB17BA2E7DECA5B, ped, toggle);
		} // 0x7FB17BA2E7DECA5B 0xE9B97A2B  
		static void _0xe43a13c9e4cccbcf(Ped ped, bool p1) { invoke<Void>(0xE43A13C9E4CCCBCF, ped, p1); }
		// 0xE43A13C9E4CCCBCF 0xFF1F6AEB  
		static void set_ped_can_ragdoll_from_player_impact(Ped ped, bool toggle)
		{
			invoke<Void>(0xDF993EE5E90ABA25, ped, toggle);
		} // 0xDF993EE5E90ABA25 0xE9BD733A  
		static void give_ped_helmet(Ped ped, bool cannotRemove, int helmetFlag, int textureIndex)
		{
			invoke<Void>(0x54C7C4A94367717E, ped, cannotRemove, helmetFlag, textureIndex);
		} // 0x54C7C4A94367717E 0x1862A461  
		static void remove_ped_helmet(Ped ped, bool instantly) { invoke<Void>(0xA7B2458D0AD6DED8, ped, instantly); }
		// 0xA7B2458D0AD6DED8 0x2086B1F0  
		static bool _0x14590ddbedb1ec85(Ped ped) { return invoke<bool>(0x14590DDBEDB1EC85, ped); }
		// 0x14590DDBEDB1EC85  
		static void set_ped_helmet(Ped ped, bool canWearHelmet)
		{
			invoke<Void>(0x560A43136EB58105, ped, canWearHelmet);
		} // 0x560A43136EB58105 0xED366E53  
		static void set_ped_helmet_flag(Ped ped, int helmetFlag) { invoke<Void>(0xC0E78D5C2CE3EB25, ped, helmetFlag); }
		// 0xC0E78D5C2CE3EB25 0x12677780  
		static void set_ped_helmet_prop_index(Ped ped, int propIndex)
		{
			invoke<Void>(0x26D83693ED99291C, ped, propIndex);
		} // 0x26D83693ED99291C 0xA316D13F  
		static void set_ped_helmet_texture_index(Ped ped, int textureIndex)
		{
			invoke<Void>(0xF1550C4BD22582E2, ped, textureIndex);
		} // 0xF1550C4BD22582E2 0x5F6C3328  
		static bool is_ped_wearing_helmet(Ped ped) { return invoke<bool>(0xF33BDFE19B309B19, ped); }
		// 0xF33BDFE19B309B19 0x0D680D49  
		static void _0x687c0b594907d2e8(Ped ped) { invoke<Void>(0x687C0B594907D2E8, ped); }
		// 0x687C0B594907D2E8 0x24A1284E  
		static Any _0x451294e859ecc018(Any p0) { return invoke<Any>(0x451294E859ECC018, p0); }
		// 0x451294E859ECC018 0x8A3A3116  
		static Any _0x9d728c1e12bf5518(Any p0) { return invoke<Any>(0x9D728C1E12BF5518, p0); }
		// 0x9D728C1E12BF5518 0x74EB662D  
		static bool _0xf2385935bffd4d92(Any p0) { return invoke<bool>(0xF2385935BFFD4D92, p0); }
		// 0xF2385935BFFD4D92 0xFFF149FE  
		static void set_ped_to_load_cover(Ped ped, bool toggle) { invoke<Void>(0x332B562EEDA62399, ped, toggle); }
		// 0x332B562EEDA62399 0xCF94BA97  
		static void set_ped_can_cower_in_cover(Ped ped, bool toggle) { invoke<Void>(0xCB7553CDCEF4A735, ped, toggle); }
		// 0xCB7553CDCEF4A735 0x5194658B  
		static void set_ped_can_peek_in_cover(Ped ped, bool toggle) { invoke<Void>(0xC514825C507E3736, ped, toggle); }
		// 0xC514825C507E3736 0xC1DAE216  
		static void set_ped_plays_head_on_horn_anim_when_dies_in_vehicle(Ped ped, bool toggle)
		{
			invoke<Void>(0x94D94BF1A75AED3D, ped, toggle);
		} // 0x94D94BF1A75AED3D 0x7C563CD2  
		static void set_ped_leg_ik_mode(Ped ped, int mode) { invoke<Void>(0xC396F5B86FF9FEBD, ped, mode); }
		// 0xC396F5B86FF9FEBD 0xFDDB042E  
		static void set_ped_motion_blur(Ped ped, bool toggle) { invoke<Void>(0x0A986918B102B448, ped, toggle); }
		// 0x0A986918B102B448 0xA211A128  
		static void set_ped_can_switch_weapon(Ped ped, bool toggle) { invoke<Void>(0xED7F7EFE9FABF340, ped, toggle); }
		// 0xED7F7EFE9FABF340 0xB5F8BA28  
		static void set_ped_dies_instantly_in_water(Ped ped, bool toggle)
		{
			invoke<Void>(0xEEB64139BA29A7CF, ped, toggle);
		} // 0xEEB64139BA29A7CF 0xFE2554FC  
		static void _0x1a330d297aac6bc1(Ped ped, int p1) { invoke<Void>(0x1A330D297AAC6BC1, ped, p1); }
		// 0x1A330D297AAC6BC1 0x77BB7CB8  
		static void stop_ped_weapon_firing_when_dropped(Ped ped) { invoke<Void>(0xC158D28142A34608, ped); }
		// 0xC158D28142A34608 0x4AC3421E  
		static void set_scripted_anim_seat_offset(Ped ped, float p1) { invoke<Void>(0x5917BBA32D06C230, ped, p1); }
		// 0x5917BBA32D06C230 0x7CEFFA45  
		static void set_ped_combat_movement(Ped ped, int combatMovement)
		{
			invoke<Void>(0x4D9CA1009AFBD057, ped, combatMovement);
		} // 0x4D9CA1009AFBD057 0x12E62F9E  
		static int get_ped_combat_movement(Ped ped) { return invoke<int>(0xDEA92412FCAEB3F5, ped); }
		// 0xDEA92412FCAEB3F5 0xF3E7730E  
		static void set_ped_combat_ability(Ped ped, int p1) { invoke<Void>(0xC7622C0D36B2FDA8, ped, p1); }
		// 0xC7622C0D36B2FDA8 0x6C23D329  
		static void set_ped_combat_range(Ped ped, int p1) { invoke<Void>(0x3C606747B23E497B, ped, p1); }
		// 0x3C606747B23E497B 0x8818A959  
		static Any get_ped_combat_range(Ped ped) { return invoke<Any>(0xF9D9F7F2DB8E2FA0, ped); }
		// 0xF9D9F7F2DB8E2FA0 0x9B9B7163  
		static void set_ped_combat_attributes(Ped ped, int attributeIndex, bool enabled)
		{
			invoke<Void>(0x9F7794730795E019, ped, attributeIndex, enabled);
		} // 0x9F7794730795E019 0x81D64248  
		static void set_ped_target_loss_response(Ped ped, int responseType)
		{
			invoke<Void>(0x0703B9079823DA4A, ped, responseType);
		} // 0x0703B9079823DA4A 0xCFA613FF  
		static bool _0xdcca191df9980fd7(Ped ped) { return invoke<bool>(0xDCCA191DF9980FD7, ped); }
		// 0xDCCA191DF9980FD7 0x139C0875  
		static bool is_ped_performing_stealth_kill(Ped ped) { return invoke<bool>(0xFD4CCDBCC59941B7, ped); }
		// 0xFD4CCDBCC59941B7 0x9ADD7B21  
		static bool _0xebd0edba5be957cf(Ped ped) { return invoke<bool>(0xEBD0EDBA5BE957CF, ped); }
		// 0xEBD0EDBA5BE957CF 0x9BE7C860  
		static bool is_ped_being_stealth_killed(Ped ped) { return invoke<bool>(0x863B23EFDE9C5DF2, ped); }
		// 0x863B23EFDE9C5DF2 0xD044C8AF  
		static Ped get_melee_target_for_ped(Ped ped) { return invoke<Ped>(0x18A3E9EE1297FD39, ped); }
		// 0x18A3E9EE1297FD39 0xAFEC26A4  
		static bool was_ped_killed_by_stealth(Ped ped) { return invoke<bool>(0xF9800AA1A771B000, ped); }
		// 0xF9800AA1A771B000 0x2EA4B54E  
		static bool was_ped_killed_by_takedown(Ped ped) { return invoke<bool>(0x7F08E26039C7347C, ped); }
		// 0x7F08E26039C7347C 0xBDD3CE69  
		static bool _0x61767f73eaceed21(Ped ped) { return invoke<bool>(0x61767F73EACEED21, ped); }
		// 0x61767F73EACEED21 0x3993092B  
		static void set_ped_flee_attributes(Ped ped, int attributes, bool p2)
		{
			invoke<Void>(0x70A2D1137C8ED7C9, ped, attributes, p2);
		} // 0x70A2D1137C8ED7C9 0xA717A875  
		static void set_ped_cower_hash(Ped ped, const char* p1) { invoke<Void>(0xA549131166868ED3, ped, p1); }
		// 0xA549131166868ED3 0x16F30DF4  
		static void _0x2016c603d6b8987c(Any p0, bool p1) { invoke<Void>(0x2016C603D6B8987C, p0, p1); }
		// 0x2016C603D6B8987C 0xA6F2C057  
		static void set_ped_steers_around_peds(Ped ped, bool toggle) { invoke<Void>(0x46F2193B3AD1D891, ped, toggle); }
		// 0x46F2193B3AD1D891 0x797CAE4F  
		static void set_ped_steers_around_objects(Ped ped, bool toggle)
		{
			invoke<Void>(0x1509C089ADC208BF, ped, toggle);
		} // 0x1509C089ADC208BF 0x3BD9B0A6  
		static void set_ped_steers_around_vehicles(Ped ped, bool toggle)
		{
			invoke<Void>(0xEB6FB9D48DDE23EC, ped, toggle);
		} // 0xEB6FB9D48DDE23EC 0x533C0651  
		static void _0xa9b61a329bfdcbea(Any p0, bool p1) { invoke<Void>(0xA9B61A329BFDCBEA, p0, p1); }
		// 0xA9B61A329BFDCBEA 0x2276DE0D  
		static void _0x570389d1c3de3c6b(Any p0) { invoke<Void>(0x570389D1C3DE3C6B, p0); }
		// 0x570389D1C3DE3C6B 0x59C52BE6  
		static void _0x576594e8d64375e2(Any p0, bool p1) { invoke<Void>(0x576594E8D64375E2, p0, p1); }
		// 0x576594E8D64375E2 0x1D87DDC1  
		static void _0xa52d5247a4227e14(Any p0) { invoke<Void>(0xA52D5247A4227E14, p0); }
		// 0xA52D5247A4227E14 0xB52BA5F5  
		static bool is_any_ped_near_point(float x, float y, float z, float radius)
		{
			return invoke<bool>(0x083961498679DC9F, x, y, z, radius);
		} // 0x083961498679DC9F 0xFBD9B050  
		static void _0x2208438012482a1a(Ped ped, bool p1, bool p2) { invoke<Void>(0x2208438012482A1A, ped, p1, p2); }
		// 0x2208438012482A1A 0x187B9070  
		static bool _0xfcf37a457cb96dc0(Any p0, float p1, float p2, float p3, float p4)
		{
			return invoke<bool>(0xFCF37A457CB96DC0, p0, p1, p2, p3, p4);
		} // 0xFCF37A457CB96DC0 0x45037B9B  
		static void _0x7d7a2e43e74e2eb8(Any p0) { invoke<Void>(0x7D7A2E43E74E2EB8, p0); }
		// 0x7D7A2E43E74E2EB8 0x840D24D3  
		static void get_ped_flood_invincibility(Ped ped, bool p1) { invoke<Void>(0x2BC338A7B21F4608, ped, p1); }
		// 0x2BC338A7B21F4608 0x31C31DAA  
		static void _0xcd018c591f94cb43(Any p0, bool p1) { invoke<Void>(0xCD018C591F94CB43, p0, p1); }
		// 0xCD018C591F94CB43  
		static void _0x75ba1cb3b7d40caf(Ped ped, bool p1) { invoke<Void>(0x75BA1CB3B7D40CAF, ped, p1); }
		// 0x75BA1CB3B7D40CAF 0x9194DB71  
		static bool is_tracked_ped_visible(Ped ped) { return invoke<bool>(0x91C8E617F64188AC, ped); }
		// 0x91C8E617F64188AC 0x33248CC1  
		static Any _0x511f1a683387c7e2(Any p0) { return invoke<Any>(0x511F1A683387C7E2, p0); }
		// 0x511F1A683387C7E2 0x5B1B70AA  
		static bool is_ped_tracked(Ped ped) { return invoke<bool>(0x4C5E1F087CD10BB7, ped); }
		// 0x4C5E1F087CD10BB7 0x7EB613D9  
		static bool has_ped_received_event(Ped ped, Any p1) { return invoke<bool>(0x8507BCB710FA6DC0, ped, p1); }
		// 0x8507BCB710FA6DC0 0xECD73DB0  
		static bool _can_ped_see_ped(Ped ped1, Ped ped2) { return invoke<bool>(0x6CD5A433374D4CFB, ped1, ped2); }
		// 0x6CD5A433374D4CFB 0x74A0F291  
		static bool _0x9c6a6c19b6c0c496(Ped p0, Any* p1) { return invoke<bool>(0x9C6A6C19B6C0C496, p0, p1); }
		// 0x9C6A6C19B6C0C496  
		static int get_ped_bone_index(Ped ped, int boneId) { return invoke<int>(0x3F428D08BE5AAE31, ped, boneId); }
		// 0x3F428D08BE5AAE31 0x259C6BA2  
		static int get_ped_ragdoll_bone_index(Ped ped, int bone) { return invoke<int>(0x2057EF813397A772, ped, bone); }
		// 0x2057EF813397A772 0x849F0716  
		static void set_ped_enveff_scale(Ped ped, float value) { invoke<Void>(0xBF29516833893561, ped, value); }
		// 0xBF29516833893561 0xFC1CFC27  
		static float get_ped_enveff_scale(Ped ped) { return invoke<float>(0x9C14D30395A51A3C, ped); }
		// 0x9C14D30395A51A3C 0xA3421E39  
		static void set_enable_ped_enveff_scale(Ped ped, bool toggle) { invoke<Void>(0xD2C5AA0C0E8D0F1E, ped, toggle); }
		// 0xD2C5AA0C0E8D0F1E 0xC70F4A84  
		static void _0x110f526ab784111f(Ped ped, float p1) { invoke<Void>(0x110F526AB784111F, ped, p1); }
		// 0x110F526AB784111F 0x3B882533  
		static void _0xd69411aa0cebf9e9(Ped ped, int p1, int p2, int p3)
		{
			invoke<Void>(0xD69411AA0CEBF9E9, ped, p1, p2, p3);
		} // 0xD69411AA0CEBF9E9 0x87A0C174  
		static void _0x1216e0bfa72cc703(Any p0, Any p1) { invoke<Void>(0x1216E0BFA72CC703, p0, p1); }
		// 0x1216E0BFA72CC703 0x7BD26837  
		static void _0x2b5aa717a181fb4c(Any p0, bool p1) { invoke<Void>(0x2B5AA717A181FB4C, p0, p1); }
		// 0x2B5AA717A181FB4C 0x98E29ED0  
		static bool _0xb8b52e498014f5b0(Ped ped) { return invoke<bool>(0xB8B52E498014F5B0, ped); }
		// 0xB8B52E498014F5B0  
		static int create_synchronized_scene(float x, float y, float z, float roll, float pitch, float yaw, int p6)
		{
			return invoke<int>(0x8C18E0F9080ADD73, x, y, z, roll, pitch, yaw, p6);
		} // 0x8C18E0F9080ADD73 0xFFDDF8FA  
		static int _create_synchronized_scene_2(float x, float y, float z, float radius, Hash object)
		{
			return invoke<int>(0x62EC273D00187DCA, x, y, z, radius, object);
		} // 0x62EC273D00187DCA 0xF3876894  
		static bool is_synchronized_scene_running(int sceneId) { return invoke<bool>(0x25D39B935A038A26, sceneId); }
		// 0x25D39B935A038A26 0x57A282F1  
		static void set_synchronized_scene_origin(int sceneID, float x, float y, float z, float roll, float pitch,
			float yaw, bool p7)
		{
			invoke<Void>(0x6ACF6B7225801CD7, sceneID, x, y, z, roll, pitch, yaw, p7);
		} // 0x6ACF6B7225801CD7 0x2EC2A0B2  
		static void set_synchronized_scene_phase(int sceneID, float phase)
		{
			invoke<Void>(0x734292F4F0ABF6D0, sceneID, phase);
		} // 0x734292F4F0ABF6D0 0xF5AB0D98  
		static float get_synchronized_scene_phase(int sceneID) { return invoke<float>(0xE4A310B1D7FA73CC, sceneID); }
		// 0xE4A310B1D7FA73CC 0xB0B2C852  
		static void set_synchronized_scene_rate(int sceneID, float rate)
		{
			invoke<Void>(0xB6C49F8A5E295A5D, sceneID, rate);
		} // 0xB6C49F8A5E295A5D 0xF10112FD  
		static float get_synchronized_scene_rate(int sceneID) { return invoke<float>(0xD80932D577274D40, sceneID); }
		// 0xD80932D577274D40 0x89365F0D  
		static void set_synchronized_scene_looped(int sceneID, bool toggle)
		{
			invoke<Void>(0xD9A897A4C6C2974F, sceneID, toggle);
		} // 0xD9A897A4C6C2974F 0x32ED9F82  
		static bool is_synchronized_scene_looped(int sceneID) { return invoke<bool>(0x62522002E0C391BA, sceneID); }
		// 0x62522002E0C391BA 0x47D87A84  
		static void _set_synchronized_scene_occlusion_portal(Any sceneID, bool p1)
		{
			invoke<Void>(0x394B9CD12435C981, sceneID, p1);
		} // 0x394B9CD12435C981 0x2DE48DA1  
		static bool _0x7f2f4f13ac5257ef(Any p0) { return invoke<bool>(0x7F2F4F13AC5257EF, p0); }
		// 0x7F2F4F13AC5257EF 0x72CF2514  
		static void attach_synchronized_scene_to_entity(int sceneID, Entity entity, int boneIndex)
		{
			invoke<Void>(0x272E4723B56A3B96, sceneID, entity, boneIndex);
		} // 0x272E4723B56A3B96 0xE9BA6189  
		static void detach_synchronized_scene(int sceneID) { invoke<Void>(0x6D38F1F04CBB37EA, sceneID); }
		// 0x6D38F1F04CBB37EA 0x52A1CAB2  
		static void _dispose_synchronized_scene(int scene) { invoke<Void>(0xCD9CC7E200A52A6F, scene); }
		// 0xCD9CC7E200A52A6F 0xBF7F9035  
		static bool force_ped_motion_state(Ped ped, Hash motionStateHash, bool p2, bool p3, bool p4)
		{
			return invoke<bool>(0xF28965D04F570DCA, ped, motionStateHash, p2, p3, p4);
		} // 0xF28965D04F570DCA 0x164DDEFF  
		static bool _0xf60165e1d2c5370b(Ped ped, Any* p1, Any* p2)
		{
			return invoke<bool>(0xF60165E1D2C5370B, ped, p1, p2);
		} // 0xF60165E1D2C5370B  
		static void set_ped_max_move_blend_ratio(Ped ped, float value) { invoke<Void>(0x433083750C5E064A, ped, value); }
		// 0x433083750C5E064A 0xEAD0269A  
		static void set_ped_min_move_blend_ratio(Ped ped, float value) { invoke<Void>(0x01A898D26E2333DD, ped, value); }
		// 0x01A898D26E2333DD 0x383EC364  
		static void set_ped_move_rate_override(Ped ped, float value) { invoke<Void>(0x085BF80FA50A39D1, ped, value); }
		// 0x085BF80FA50A39D1 0x900008C6  
		static bool _0x46b05bcae43856b0(Ped ped, int flag) { return invoke<bool>(0x46B05BCAE43856B0, ped, flag); }
		// 0x46B05BCAE43856B0 0x79543043  
		static int get_ped_nearby_vehicles(Ped ped, int* sizeAndVehs)
		{
			return invoke<int>(0xCFF869CBFA210D82, ped, sizeAndVehs);
		} // 0xCFF869CBFA210D82 0xCB716F68  
		static int get_ped_nearby_peds(Ped ped, int* sizeAndPeds, int ignore)
		{
			return invoke<int>(0x23F8F5FC7E8C4A6B, ped, sizeAndPeds, ignore);
		} // 0x23F8F5FC7E8C4A6B 0x4D3325F4  
		static bool _0x7350823473013c02(Ped ped) { return invoke<bool>(0x7350823473013C02, ped); }
		// 0x7350823473013C02 0xF9FB4B71  
		static bool is_ped_using_action_mode(Ped ped) { return invoke<bool>(0x00E73468D085F745, ped); }
		// 0x00E73468D085F745 0x5AE7EDA2  
		static void set_ped_using_action_mode(Ped ped, bool p1, Any p2, const char* action)
		{
			invoke<Void>(0xD75ACCF5E0FB5367, ped, p1, p2, action);
		} // 0xD75ACCF5E0FB5367 0x8802F696  
		static void _0x781de8fa214e87d2(Ped ped, const char* p1) { invoke<Void>(0x781DE8FA214E87D2, ped, p1); }
		// 0x781DE8FA214E87D2  
		static void set_ped_capsule(Ped ped, float value) { invoke<Void>(0x364DF566EC833DE2, ped, value); }
		// 0x364DF566EC833DE2 0xB153E1B9  
		static int register_pedheadshot(Ped ped) { return invoke<int>(0x4462658788425076, ped); }
		// 0x4462658788425076 0xFFE2667B  
		static Any _0x953563ce563143af(Any p0) { return invoke<Any>(0x953563CE563143AF, p0); }
		// 0x953563CE563143AF 0x4DD03628  
		static void unregister_pedheadshot(int handle) { invoke<Void>(0x96B1361D9B24C2FF, handle); }
		// 0x96B1361D9B24C2FF 0x0879AE45  
		static bool is_pedheadshot_valid(int handle) { return invoke<bool>(0xA0A9668F158129A2, handle); }
		// 0xA0A9668F158129A2 0x0B1080C4  
		static bool is_pedheadshot_ready(int handle) { return invoke<bool>(0x7085228842B13A67, handle); }
		// 0x7085228842B13A67 0x761CD02E  
		static const char* get_pedheadshot_txd_string(int handle)
		{
			return invoke<const char*>(0xDB4EACD4AD0A5D6B, handle);
		} // 0xDB4EACD4AD0A5D6B 0x76D28E96  
		static bool _0xf0daef2f545bee25(Any p0) { return invoke<bool>(0xF0DAEF2F545BEE25, p0); }
		// 0xF0DAEF2F545BEE25 0x10F2C023  
		static void _0x5d517b27cf6ecd04(Any p0) { invoke<Void>(0x5D517B27CF6ECD04, p0); }
		// 0x5D517B27CF6ECD04 0x0DBB2FA7  
		static Any _0xebb376779a760aa8() { return invoke<Any>(0xEBB376779A760AA8); } // 0xEBB376779A760AA8 0x810158F8  
		static Any _0x876928dddfccc9cd() { return invoke<Any>(0x876928DDDFCCC9CD); } // 0x876928DDDFCCC9CD 0x05023F8F  
		static Any _0xe8a169e666cbc541() { return invoke<Any>(0xE8A169E666CBC541); } // 0xE8A169E666CBC541 0xAA39FD6C  
		static void _0xc1f6ebf9a3d55538(Any p0, Any p1) { invoke<Void>(0xC1F6EBF9A3D55538, p0, p1); }
		// 0xC1F6EBF9A3D55538 0xEF9142DB  
		static void _0x600048c60d5c2c51(Any p0) { invoke<Void>(0x600048C60D5C2C51, p0); }
		// 0x600048C60D5C2C51 0x0688DE64  
		static void _0x2df9038c90ad5264(float p0, float p1, float p2, float p3, float p4, int interiorFlags,
			float scale, int duration)
		{
			invoke<Void>(0x2DF9038C90AD5264, p0, p1, p2, p3, p4, interiorFlags, scale, duration);
		} // 0x2DF9038C90AD5264 0x909A1D76  
		static void _0xb2aff10216defa2f(float x, float y, float z, float p3, float p4, float p5, float p6,
			int interiorFlags, float scale, int duration)
		{
			invoke<Void>(0xB2AFF10216DEFA2F, x, y, z, p3, p4, p5, p6, interiorFlags, scale, duration);
		} // 0xB2AFF10216DEFA2F 0x4AAD0ECB  
		static void _0xfee4a5459472a9f8() { invoke<Void>(0xFEE4A5459472A9F8); } // 0xFEE4A5459472A9F8 0x492C9E46  
		static Any _0x3c67506996001f5e() { return invoke<Any>(0x3C67506996001F5E); } // 0x3C67506996001F5E 0x814A28F4  
		static Any _0xa586fbeb32a53dbb() { return invoke<Any>(0xA586FBEB32A53DBB); } // 0xA586FBEB32A53DBB 0x0B60D2BA  
		static Any _0xf445de8da80a1792() { return invoke<Any>(0xF445DE8DA80A1792); } // 0xF445DE8DA80A1792 0x6B83ABDF  
		static Any _0xa635c11b8c44afc2() { return invoke<Any>(0xA635C11B8C44AFC2); } // 0xA635C11B8C44AFC2 0xF46B4DC8  
		static void _0x280c7e3ac7f56e90(Any p0, Any* p1, Any* p2, Any* p3)
		{
			invoke<Void>(0x280C7E3AC7F56E90, p0, p1, p2, p3);
		} // 0x280C7E3AC7F56E90 0x36A4AC65  
		static void _0xb782f8238512bad5(Any p0, Any* p1) { invoke<Void>(0xB782F8238512BAD5, p0, p1); }
		// 0xB782F8238512BAD5 0xBA699DDF  
		static void set_ik_target(Ped ped, int ikIndex, Entity entityLookAt, int boneLookAt, float offsetX,
			float offsetY, float offsetZ, Any p7, int blendInDuration, int blendOutDuration)
		{
			invoke<Void>(0xC32779C16FCEECD9, ped, ikIndex, entityLookAt, boneLookAt, offsetX, offsetY, offsetZ, p7,
				blendInDuration, blendOutDuration);
		} // 0xC32779C16FCEECD9 0x6FE5218C  
		static void _0xed3c76adfa6d07c4(Ped ped) { invoke<Void>(0xED3C76ADFA6D07C4, ped); }
		// 0xED3C76ADFA6D07C4 0xFB4000DC  
		static void request_action_mode_asset(const char* asset) { invoke<Void>(0x290E2780BB7AA598, asset); }
		// 0x290E2780BB7AA598 0x572BA553  
		static bool has_action_mode_asset_loaded(const char* asset) { return invoke<bool>(0xE4B5F4BF2CB24E65, asset); }
		// 0xE4B5F4BF2CB24E65 0xF7EB2BF1  
		static void remove_action_mode_asset(const char* asset) { invoke<Void>(0x13E940F88470FA51, asset); }
		// 0x13E940F88470FA51 0x3F480F92  
		static void request_stealth_mode_asset(const char* asset) { invoke<Void>(0x2A0A62FCDEE16D4F, asset); }
		// 0x2A0A62FCDEE16D4F 0x280A004A  
		static bool has_stealth_mode_asset_loaded(const char* asset) { return invoke<bool>(0xE977FC5B08AF3441, asset); }
		// 0xE977FC5B08AF3441 0x39245667  
		static void remove_stealth_mode_asset(const char* asset) { invoke<Void>(0x9219857D21F0E842, asset); }
		// 0x9219857D21F0E842 0x8C0B243A  
		static void set_ped_lod_multiplier(Ped ped, float multiplier)
		{
			invoke<Void>(0xDC2C5C242AAC342B, ped, multiplier);
		} // 0xDC2C5C242AAC342B 0x1D2B5C70  
		static void _0xe861d0b05c7662b8(Pickup p0, Any p1, Blip* p2) { invoke<Void>(0xE861D0B05C7662B8, p0, p1, p2); }
		// 0xE861D0B05C7662B8 0x2F9550C2  
		static void _0x129466ed55140f8d(Ped ped, bool toggle) { invoke<Void>(0x129466ED55140F8D, ped, toggle); }
		// 0x129466ED55140F8D 0x37DBC2AD  
		static void _0xcb968b53fc7f916d(Any p0, bool p1, Any p2, Any p3)
		{
			invoke<Void>(0xCB968B53FC7F916D, p0, p1, p2, p3);
		} // 0xCB968B53FC7F916D 0xC0F1BC91  
		static bool _0x68772db2b2526f9f(Ped ped, float x, float y, float z, float range)
		{
			return invoke<bool>(0x68772DB2B2526F9F, ped, x, y, z, range);
		} // 0x68772DB2B2526F9F 0x1A464167  
		static bool _0x06087579e7aa85a9(Any p0, Any p1, float p2, float p3, float p4, float p5)
		{
			return invoke<bool>(0x06087579E7AA85A9, p0, p1, p2, p3, p4, p5);
		} // 0x06087579E7AA85A9 0xD0567D41  
		static void _0xd8c3be3ee94caf2d(Any p0, Any p1, Any p2, Any p3, Any p4)
		{
			invoke<Void>(0xD8C3BE3EE94CAF2D, p0, p1, p2, p3, p4);
		} // 0xD8C3BE3EE94CAF2D 0x4BBE5E2C  
		static void _0xd33daa36272177c4(Ped ped) { invoke<Void>(0xD33DAA36272177C4, ped); }
		// 0xD33DAA36272177C4 0xA89A53F2  
		static void _0x83a169eabcdb10a2(Any p0, Any p1) { invoke<Void>(0x83A169EABCDB10A2, p0, p1); }
		// 0x83A169EABCDB10A2  
		static void _0x288df530c92dad6f(Any p0, float p1) { invoke<Void>(0x288DF530C92DAD6F, p0, p1); }
		// 0x288DF530C92DAD6F  
	}

	namespace vehicle
	{
		static Vehicle create_vehicle(Hash modelHash, float x, float y, float z, float heading, bool isNetwork,
			bool thisScriptCheck)
		{
			return invoke<Vehicle>(0xAF35D0D2583051B0, modelHash, x, y, z, heading, isNetwork, thisScriptCheck);
		} // 0xAF35D0D2583051B0 0xDD75460A  
		static void delete_vehicle(Vehicle* vehicle) { invoke<Void>(0xEA386986E786A54F, vehicle); }
		// 0xEA386986E786A54F 0x9803AF60  
		static void _0x7d6f9a3ef26136a0(Vehicle vehicle, bool p1, bool p2)
		{
			invoke<Void>(0x7D6F9A3EF26136A0, vehicle, p1, p2);
		} // 0x7D6F9A3EF26136A0 0xBB54ECCA  
		static void set_vehicle_allow_no_passengers_lockon(Vehicle veh, bool toggle)
		{
			invoke<Void>(0x5D14D4154BFE7B2C, veh, toggle);
		} // 0x5D14D4154BFE7B2C 0x8BAAC437  
		static int _0xe6b0e8cfc3633bf0(Vehicle vehicle) { return invoke<int>(0xE6B0E8CFC3633BF0, vehicle); }
		// 0xE6B0E8CFC3633BF0 0xFBDE9FD8  
		static bool is_vehicle_model(Vehicle vehicle, Hash model)
		{
			return invoke<bool>(0x423E8DE37D934D89, vehicle, model);
		} // 0x423E8DE37D934D89 0x013B10B6  
		static bool does_script_vehicle_generator_exist(int v) { return invoke<bool>(0xF6086BC836400876, v); }
		// 0xF6086BC836400876 0xF6BDDA30  
		static int create_script_vehicle_generator(float x, float y, float z, float heading, float p4, float p5,
			Hash modelHash, int p7, int p8, int p9, int p10, bool p11, bool p12,
			bool p13, bool p14, bool p15, int p16)
		{
			return invoke<int>(0x9DEF883114668116, x, y, z, heading, p4, p5, modelHash, p7, p8, p9, p10, p11, p12, p13,
				p14, p15, p16);
		} // 0x9DEF883114668116 0x25A9A261  
		static void delete_script_vehicle_generator(int vehicleGenerator)
		{
			invoke<Void>(0x22102C9ABFCF125D, vehicleGenerator);
		} // 0x22102C9ABFCF125D 0xE4328E3F  
		static void set_script_vehicle_generator(int vehicleGenerator, bool enabled)
		{
			invoke<Void>(0xD9D620E0AC6DC4B0, vehicleGenerator, enabled);
		} // 0xD9D620E0AC6DC4B0 0x40D73747  
		static void set_all_vehicle_generators_active_in_area(float x1, float y1, float z1, float x2, float y2,
			float z2, bool p6, bool p7)
		{
			invoke<Void>(0xC12321827687FE4D, x1, y1, z1, x2, y2, z2, p6, p7);
		} // 0xC12321827687FE4D 0xB4E0E69A  
		static void set_all_vehicle_generators_active() { invoke<Void>(0x34AD89078831A4BC); }
		// 0x34AD89078831A4BC 0xAB1FDD76  
		static void set_all_low_priority_vehicle_generators_active(bool active)
		{
			invoke<Void>(0x608207E7A8FB787C, active);
		} // 0x608207E7A8FB787C 0x87F767F2  
		static void _0x9a75585fb2e54fad(float p0, float p1, float p2, float p3)
		{
			invoke<Void>(0x9A75585FB2E54FAD, p0, p1, p2, p3);
		} // 0x9A75585FB2E54FAD 0x935A95DA  
		static void _0x0a436b8643716d14() { invoke<Void>(0x0A436B8643716D14); } // 0x0A436B8643716D14 0x6C73E45A  
		static bool set_vehicle_on_ground_properly(Vehicle vehicle)
		{
			return invoke<bool>(0x49733E92263139D1, vehicle);
		} // 0x49733E92263139D1 0xE14FDBA6  
		static Any set_all_vehicles_spawn(Vehicle p0, bool p1, bool p2, bool p3)
		{
			return invoke<Any>(0xE023E8AC4EF7C117, p0, p1, p2, p3);
		} // 0xE023E8AC4EF7C117 0xA0909ADB  
		static bool is_vehicle_stuck_on_roof(Vehicle vehicle) { return invoke<bool>(0xB497F06B288DCFDF, vehicle); }
		// 0xB497F06B288DCFDF 0x18D07C6C  
		static void add_vehicle_upsidedown_check(Vehicle vehicle) { invoke<Void>(0xB72E26D81006005B, vehicle); }
		// 0xB72E26D81006005B 0x3A13D384  
		static void remove_vehicle_upsidedown_check(Vehicle vehicle) { invoke<Void>(0xC53EB42A499A7E90, vehicle); }
		// 0xC53EB42A499A7E90 0xF390BA1B  
		static bool is_vehicle_stopped(Vehicle vehicle) { return invoke<bool>(0x5721B434AD84D57A, vehicle); }
		// 0x5721B434AD84D57A 0x655F072C  
		static int get_vehicle_number_of_passengers(Vehicle vehicle)
		{
			return invoke<int>(0x24CB2137731FFE89, vehicle);
		} // 0x24CB2137731FFE89 0x1EF20849  
		static int get_vehicle_max_number_of_passengers(Vehicle vehicle)
		{
			return invoke<int>(0xA7C4F2C6E744A550, vehicle);
		} // 0xA7C4F2C6E744A550 0x0A2FC08C  
		static int get_vehicle_model_number_of_seats(Hash modelHash)
		{
			return invoke<int>(0x2AD93716F184EDA4, modelHash);
		} // 0x2AD93716F184EDA4 0x838F7BF7  
		static bool _0xf7f203e31f96f6a1(Vehicle vehicle, bool flag)
		{
			return invoke<bool>(0xF7F203E31F96F6A1, vehicle, flag);
		} // 0xF7F203E31F96F6A1 0x769E5CF2  
		static bool _0xe33ffa906ce74880(Vehicle vehicle, Any p1)
		{
			return invoke<bool>(0xE33FFA906CE74880, vehicle, p1);
		} // 0xE33FFA906CE74880  
		static void set_vehicle_density_multiplier_this_frame(float multiplier)
		{
			invoke<Void>(0x245A6883D966D537, multiplier);
		} // 0x245A6883D966D537 0xF4187E51  
		static void set_random_vehicle_density_multiplier_this_frame(float multiplier)
		{
			invoke<Void>(0xB3B3359379FE77D3, multiplier);
		} // 0xB3B3359379FE77D3 0x543F712B  
		static void set_parked_vehicle_density_multiplier_this_frame(float multiplier)
		{
			invoke<Void>(0xEAE6DCC7EEE3DB1D, multiplier);
		} // 0xEAE6DCC7EEE3DB1D 0xDD46CEBE  
		static void _set_something_multiplier_this_frame(bool toggle) { invoke<Void>(0xD4B8E3D1917BC86B, toggle); }
		// 0xD4B8E3D1917BC86B 0x09462665  
		static void _set_some_vehicle_density_multiplier_this_frame(float value)
		{
			invoke<Void>(0x90B6DA738A9A25DA, value);
		} // 0x90B6DA738A9A25DA 0xDAE2A2BE  
		static void set_far_draw_vehicles(bool toggle) { invoke<Void>(0x26324F33423F3CC3, toggle); }
		// 0x26324F33423F3CC3 0x9F019C49  
		static void set_number_of_parked_vehicles(int value) { invoke<Void>(0xCAA15F13EBD417FF, value); }
		// 0xCAA15F13EBD417FF 0x206A58E8  
		static void set_vehicle_doors_locked(Vehicle vehicle, int doorLockStatus)
		{
			invoke<Void>(0xB664292EAECF7FA6, vehicle, doorLockStatus);
		} // 0xB664292EAECF7FA6 0x4CDD35D0  
		static void set_ped_targettable_vehicle_destroy(Vehicle vehicle, int doorIndex, int destroyType)
		{
			invoke<Void>(0xBE70724027F85BCD, vehicle, doorIndex, destroyType);
		} // 0xBE70724027F85BCD 0xD61D182D  
		static void disable_vehicle_impact_explosion_activation(Vehicle vehicle, bool toggle)
		{
			invoke<Void>(0xD8050E0EB60CF274, vehicle, toggle);
		} // 0xD8050E0EB60CF274 0xC54156A9  
		static void set_vehicle_doors_locked_for_player(Vehicle vehicle, Player player, bool toggle)
		{
			invoke<Void>(0x517AAF684BB50CD1, vehicle, player, toggle);
		} // 0x517AAF684BB50CD1 0x49829236  
		static bool get_vehicle_doors_locked_for_player(Vehicle vehicle, Player player)
		{
			return invoke<bool>(0xF6AF6CB341349015, vehicle, player);
		} // 0xF6AF6CB341349015 0x1DC50247  
		static void set_vehicle_doors_locked_for_all_players(Vehicle vehicle, bool toggle)
		{
			invoke<Void>(0xA2F80B8D040727CC, vehicle, toggle);
		} // 0xA2F80B8D040727CC 0x891BA8A4  
		static void _0x9737a37136f07e75(Vehicle vehicle, bool toggle)
		{
			invoke<Void>(0x9737A37136F07E75, vehicle, toggle);
		} // 0x9737A37136F07E75 0xE4EF6514  
		static void set_vehicle_doors_locked_for_team(Vehicle vehicle, int team, bool toggle)
		{
			invoke<Void>(0xB81F6D4A8F5EEBA8, vehicle, team, toggle);
		} // 0xB81F6D4A8F5EEBA8 0x4F85E783  
		static void explode_vehicle(Vehicle vehicle, bool isAudible, bool isInvisible)
		{
			invoke<Void>(0xBA71116ADF5B514C, vehicle, isAudible, isInvisible);
		} // 0xBA71116ADF5B514C 0xBEDEACEB  
		static void set_vehicle_out_of_control(Vehicle vehicle, bool killDriver, bool explodeOnImpact)
		{
			invoke<Void>(0xF19D095E42D430CC, vehicle, killDriver, explodeOnImpact);
		} // 0xF19D095E42D430CC 0x3764D734  
		static void set_vehicle_timed_explosion(Vehicle vehicle, Ped ped, bool toggle)
		{
			invoke<Void>(0x2E0A74E1002380B1, vehicle, ped, toggle);
		} // 0x2E0A74E1002380B1 0xDB8CB8E2  
		static void _0x99ad4cccb128cbc9(Vehicle vehicle) { invoke<Void>(0x99AD4CCCB128CBC9, vehicle); }
		// 0x99AD4CCCB128CBC9 0x811373DE  
		static Any _0x6adaabd3068c5235() { return invoke<Any>(0x6ADAABD3068C5235); } // 0x6ADAABD3068C5235 0xA4E69134  
		static void _request_phone_explosion() { invoke<Void>(0xEF49CF0270307CBE); } // 0xEF49CF0270307CBE 0x65255524  
		static bool _0xae3fee8709b39dcb(Vehicle vehicle) { return invoke<bool>(0xAE3FEE8709B39DCB, vehicle); }
		// 0xAE3FEE8709B39DCB 0xE39DAF36  
		static void set_taxi_lights(Vehicle vehicle, bool state) { invoke<Void>(0x598803E85E8448D9, vehicle, state); }
		// 0x598803E85E8448D9 0x68639D85  
		static bool is_taxi_light_on(Vehicle vehicle) { return invoke<bool>(0x7504C0F113AB50FC, vehicle); }
		// 0x7504C0F113AB50FC 0x6FC4924A  
		static bool is_vehicle_in_garage_area(const char* garageName, Vehicle vehicle)
		{
			return invoke<bool>(0xCEE4490CD57BB3C2, garageName, vehicle);
		} // 0xCEE4490CD57BB3C2 0xA90EC257  
		static void set_vehicle_colours(Vehicle vehicle, int colorPrimary, int colorSecondary)
		{
			invoke<Void>(0x4F1D4BE3A7F24601, vehicle, colorPrimary, colorSecondary);
		} // 0x4F1D4BE3A7F24601 0x57F24253  
		static void set_vehicle_fullbeam(Vehicle vehicle, bool toggle)
		{
			invoke<Void>(0x8B7FD87F0DDB421E, vehicle, toggle);
		} // 0x8B7FD87F0DDB421E 0x9C49CC15  
		static void steer_unlock_bias(Vehicle vehicle, bool toggle)
		{
			invoke<Void>(0x07116E24E9D1929D, vehicle, toggle);
		} // 0x07116E24E9D1929D 0xA59E3DCD  
		static void set_vehicle_custom_primary_colour(Vehicle vehicle, int r, int g, int b)
		{
			invoke<Void>(0x7141766F91D15BEA, vehicle, r, g, b);
		} // 0x7141766F91D15BEA 0x8DF9F9BC  
		static void get_vehicle_custom_primary_colour(Vehicle vehicle, int* r, int* g, int* b)
		{
			invoke<Void>(0xB64CF2CCA9D95F52, vehicle, r, g, b);
		} // 0xB64CF2CCA9D95F52 0x1C2B9FEF  
		static void clear_vehicle_custom_primary_colour(Vehicle vehicle) { invoke<Void>(0x55E1D2758F34E437, vehicle); }
		// 0x55E1D2758F34E437 0x51E1E33D  
		static bool get_is_vehicle_primary_colour_custom(Vehicle vehicle)
		{
			return invoke<bool>(0xF095C0405307B21B, vehicle);
		} // 0xF095C0405307B21B 0xD7EC8760  
		static void set_vehicle_custom_secondary_colour(Vehicle vehicle, int r, int g, int b)
		{
			invoke<Void>(0x36CED73BFED89754, vehicle, r, g, b);
		} // 0x36CED73BFED89754 0x9D77259E  
		static void get_vehicle_custom_secondary_colour(Vehicle vehicle, int* r, int* g, int* b)
		{
			invoke<Void>(0x8389CD56CA8072DC, vehicle, r, g, b);
		} // 0x8389CD56CA8072DC 0x3FF247A2  
		static void clear_vehicle_custom_secondary_colour(Vehicle vehicle)
		{
			invoke<Void>(0x5FFBDEEC3E8E2009, vehicle);
		} // 0x5FFBDEEC3E8E2009 0x7CE00B29  
		static bool get_is_vehicle_secondary_colour_custom(Vehicle vehicle)
		{
			return invoke<bool>(0x910A32E7AAD2656C, vehicle);
		} // 0x910A32E7AAD2656C 0x288AD228  
		static void set_vehicle_enveff_scale(Vehicle vehicle, float fade)
		{
			invoke<Void>(0x3AFDC536C3D01674, vehicle, fade);
		} // 0x3AFDC536C3D01674 0x8332730C  
		static float get_vehicle_enveff_scale(Vehicle vehicle) { return invoke<float>(0xA82819CAC9C4C403, vehicle); }
		// 0xA82819CAC9C4C403 0xD5F1EEE1  
		static void set_can_respray_vehicle(Vehicle vehicle, bool state)
		{
			invoke<Void>(0x52BBA29D5EC69356, vehicle, state);
		} // 0x52BBA29D5EC69356 0x37677590  
		static void _0x33506883545ac0df(Vehicle vehicle, bool p1) { invoke<Void>(0x33506883545AC0DF, vehicle, p1); }
		// 0x33506883545AC0DF 0x54E9EE75  
		static void _jitter_vehicle(Vehicle vehicle, bool p1, float yaw, float pitch, float roll)
		{
			invoke<Void>(0xC59872A5134879C7, vehicle, p1, yaw, pitch, roll);
		} // 0xC59872A5134879C7 0x4A46E814  
		static void set_boat_anchor(Vehicle vehicle, bool toggle) { invoke<Void>(0x75DBEC174AEEAD10, vehicle, toggle); }
		// 0x75DBEC174AEEAD10 0xA3906284  
		static bool _get_boat_anchor(Vehicle vehicle) { return invoke<bool>(0x26C10ECBDA5D043B, vehicle); }
		// 0x26C10ECBDA5D043B  
		static void _0xe3ebaae484798530(Vehicle vehicle, bool p1) { invoke<Void>(0xE3EBAAE484798530, vehicle, p1); }
		// 0xE3EBAAE484798530 0x0ED84792  
		static void _0xb28b1fe5bfadd7f5(Vehicle vehicle, bool p1) { invoke<Void>(0xB28B1FE5BFADD7F5, vehicle, p1); }
		// 0xB28B1FE5BFADD7F5 0xA739012A  
		static void _0xe842a9398079bd82(Vehicle vehicle, float p1) { invoke<Void>(0xE842A9398079BD82, vehicle, p1); }
		// 0xE842A9398079BD82 0x66FA450C  
		static void _0x8f719973e1445ba2(Vehicle vehicle, Vehicle p1) { invoke<Void>(0x8F719973E1445BA2, vehicle, p1); }
		// 0x8F719973E1445BA2 0x35614622  
		static void set_vehicle_siren(Vehicle vehicle, bool toggle)
		{
			invoke<Void>(0xF4924635A19EB37D, vehicle, toggle);
		} // 0xF4924635A19EB37D 0x4AC1EFC7  
		static bool is_vehicle_siren_on(Vehicle vehicle) { return invoke<bool>(0x4C9BF537BE2634B2, vehicle); }
		// 0x4C9BF537BE2634B2 0x25EB5873  
		static bool _is_vehicle_siren_sound_on(Vehicle vehicle) { return invoke<bool>(0xB5CC40FBCB586380, vehicle); }
		// 0xB5CC40FBCB586380  
		static void set_vehicle_strong(Vehicle vehicle, bool toggle)
		{
			invoke<Void>(0x3E8C8727991A8A0B, vehicle, toggle);
		} // 0x3E8C8727991A8A0B 0xC758D19F  
		static void remove_vehicle_stuck_check(Vehicle vehicle) { invoke<Void>(0x8386BFB614D06749, vehicle); }
		// 0x8386BFB614D06749 0x81594917  
		static void get_vehicle_colours(Vehicle vehicle, int* colorPrimary, int* colorSecondary)
		{
			invoke<Void>(0xA19435F193E081AC, vehicle, colorPrimary, colorSecondary);
		} // 0xA19435F193E081AC 0x40D82D88  
		static bool is_vehicle_seat_free(Vehicle vehicle, int seatIndex)
		{
			return invoke<bool>(0x22AC59A870E6A669, vehicle, seatIndex);
		} // 0x22AC59A870E6A669 0xDAF42B02  
		static Ped get_ped_in_vehicle_seat(Vehicle vehicle, int index)
		{
			return invoke<Ped>(0xBB40DD2270B65366, vehicle, index);
		} // 0xBB40DD2270B65366 0x388FDE9A  
		static Ped get_last_ped_in_vehicle_seat(Vehicle vehicle, int seatIndex)
		{
			return invoke<Ped>(0x83F969AA1EE2A664, vehicle, seatIndex);
		} // 0x83F969AA1EE2A664 0xF7C6792D  
		static bool get_vehicle_lights_state(Vehicle vehicle, bool* lightsOn, bool* highbeamsOn)
		{
			return invoke<bool>(0xB91B4C20085BD12F, vehicle, lightsOn, highbeamsOn);
		} // 0xB91B4C20085BD12F 0x7C278621  
		static Vehicle is_vehicle_tyre_burst(Vehicle vehicle, Vehicle wheel_rf, bool completely)
		{
			return invoke<Vehicle>(0xBA291848A0815CA9, vehicle, wheel_rf, completely);
		} // 0xBA291848A0815CA9 0x48C80210  
		static void set_vehicle_forward_speed(Vehicle vehicle, float speed)
		{
			invoke<Void>(0xAB54A438726D25D5, vehicle, speed);
		} // 0xAB54A438726D25D5 0x69880D14  
		static void _set_vehicle_halt(Vehicle vehicle, float distance, int killEngine, bool unknown)
		{
			invoke<Void>(0x260BE8F09E326A20, vehicle, distance, killEngine, unknown);
		} // 0x260BE8F09E326A20 0xCBC7D3C8  
		static void _0x37ebbf3117bd6a25(Vehicle vehicle, float height)
		{
			invoke<Void>(0x37EBBF3117BD6A25, vehicle, height);
		} // 0x37EBBF3117BD6A25 0x943A6CFC  
		static bool set_ped_enabled_bike_ringtone(Vehicle vehicle, Entity entity)
		{
			return invoke<bool>(0x57715966069157AD, vehicle, entity);
		} // 0x57715966069157AD 0x7FB25568  
		static bool _0x62ca17b74c435651(Vehicle vehicle) { return invoke<bool>(0x62CA17B74C435651, vehicle); }
		// 0x62CA17B74C435651 0x593143B9  
		static Vehicle _get_vehicle_attached_to_entity(Vehicle object)
		{
			return invoke<Vehicle>(0x375E7FC44F21C8AB, object);
		} // 0x375E7FC44F21C8AB 0x70DD5E25  
		static bool _0x89d630cf5ea96d23(Vehicle vehicle, Entity entity)
		{
			return invoke<bool>(0x89D630CF5EA96D23, vehicle, entity);
		} // 0x89D630CF5EA96D23 0xFBF5536A  
		static void _0x6a98c2ecf57fa5d4(Vehicle vehicle, Entity entity)
		{
			invoke<Void>(0x6A98C2ECF57FA5D4, vehicle, entity);
		} // 0x6A98C2ECF57FA5D4 0x20AB5783  
		static void _0x7c0043fdff6436bc(Vehicle x) { invoke<Void>(0x7C0043FDFF6436BC, x); }
		// 0x7C0043FDFF6436BC 0x0F11D01F  
		static void _0x8aa9180de2fedd45(Vehicle vehicle, bool p1) { invoke<Void>(0x8AA9180DE2FEDD45, vehicle, p1); }
		// 0x8AA9180DE2FEDD45 0xAE040377  
		static void _0x0a6a279f3aa4fd70(Vehicle vehicle, bool p1) { invoke<Void>(0x0A6A279F3AA4FD70, vehicle, p1); }
		// 0x0A6A279F3AA4FD70 0x4C0E4031  
		static bool _0x634148744f385576(Vehicle vehicle) { return invoke<bool>(0x634148744F385576, vehicle); }
		// 0x634148744F385576 0x6346B7CC  
		static void _0xe6f13851780394da(Vehicle vehicle, float p1) { invoke<Void>(0xE6F13851780394DA, vehicle, p1); }
		// 0xE6F13851780394DA 0xCCB41A55  
		static void set_vehicle_tyre_burst(Vehicle vehicle, int index, bool onRim, float p3)
		{
			invoke<Void>(0xEC6A202EE4960385, vehicle, index, onRim, p3);
		} // 0xEC6A202EE4960385 0x89D28068  
		static void set_vehicle_doors_shut(Vehicle vehicle, bool closeInstantly)
		{
			invoke<Void>(0x781B3D62BB013EF5, vehicle, closeInstantly);
		} // 0x781B3D62BB013EF5 0xBB1FF6E7  
		static void set_vehicle_tyres_can_burst(Vehicle vehicle, bool toggle)
		{
			invoke<Void>(0xEB9DC3C7D8596C46, vehicle, toggle);
		} // 0xEB9DC3C7D8596C46 0xA198DB54  
		static bool get_vehicle_tyres_can_burst(Vehicle vehicle) { return invoke<bool>(0x678B9BB8C3F58FEB, vehicle); }
		// 0x678B9BB8C3F58FEB 0x4D76CD2F  
		static void set_vehicle_wheels_can_break(Vehicle vehicle, bool enabled)
		{
			invoke<Void>(0x29B18B4FD460CA8F, vehicle, enabled);
		} // 0x29B18B4FD460CA8F 0x829ED654  
		static void set_vehicle_door_open(Vehicle vehicle, int doorIndex, bool loose, bool openInstantly)
		{
			invoke<Void>(0x7C65DAC73C35C862, vehicle, doorIndex, loose, openInstantly);
		} // 0x7C65DAC73C35C862 0xBB75D38B  
		static void remove_vehicle_window(Vehicle vehicle, int windowIndex)
		{
			invoke<Void>(0xA711568EEDB43069, vehicle, windowIndex);
		} // 0xA711568EEDB43069 0xBB8104A3  
		static void roll_down_windows(Vehicle vehicle) { invoke<Void>(0x85796B0549DDE156, vehicle); }
		// 0x85796B0549DDE156 0x51A16DC6  
		static void roll_down_window(Vehicle vehicle, int windowIndex)
		{
			invoke<Void>(0x7AD9E6CE657D69E3, vehicle, windowIndex);
		} // 0x7AD9E6CE657D69E3 0xF840134C  
		static void roll_up_window(Vehicle vehicle, int windowIndex)
		{
			invoke<Void>(0x602E548F46E24D59, vehicle, windowIndex);
		} // 0x602E548F46E24D59 0x83B7E06A  
		static void smash_vehicle_window(Vehicle vehicle, int index)
		{
			invoke<Void>(0x9E5B5E4D2CCD2259, vehicle, index);
		} // 0x9E5B5E4D2CCD2259 0xDDD9A8C2  
		static void fix_vehicle_window(Vehicle vehicle, int index) { invoke<Void>(0x772282EBEB95E682, vehicle, index); }
		// 0x772282EBEB95E682 0x6B8E990D  
		static void _detach_vehicle_windscreen(Vehicle vehicle) { invoke<Void>(0x6D645D59FB5F5AD3, vehicle); }
		// 0x6D645D59FB5F5AD3 0xCC95C96B  
		static void _eject_jb700_roof(Vehicle vehicle, float x, float y, float z)
		{
			invoke<Void>(0xE38CB9D7D39FDBCC, vehicle, x, y, z);
		} // 0xE38CB9D7D39FDBCC 0xFDA7B6CA  
		static void set_vehicle_lights(Vehicle vehicle, int state) { invoke<Void>(0x34E710FF01247C5A, vehicle, state); }
		// 0x34E710FF01247C5A 0xE8930226  
		static void _0xc45c27ef50f36adc(Vehicle vehicle, bool p1) { invoke<Void>(0xC45C27EF50F36ADC, vehicle, p1); }
		// 0xC45C27EF50F36ADC 0x4221E435  
		static void _set_vehicle_lights_mode(Vehicle vehicle, int p1) { invoke<Void>(0x1FD09E7390A74D54, vehicle, p1); }
		// 0x1FD09E7390A74D54  
		static void set_vehicle_alarm(Vehicle vehicle, bool state) { invoke<Void>(0xCDE5E70C1DDB954C, vehicle, state); }
		// 0xCDE5E70C1DDB954C 0x24877D84  
		static void start_vehicle_alarm(Vehicle vehicle) { invoke<Void>(0xB8FF7AB45305C345, vehicle); }
		// 0xB8FF7AB45305C345 0x5B451FF7  
		static bool is_vehicle_alarm_activated(Vehicle vehicle) { return invoke<bool>(0x4319E335B71FFF34, vehicle); }
		// 0x4319E335B71FFF34 0xF2630A4C  
		static void set_vehicle_interiorlight(Vehicle vehicle, bool toggle)
		{
			invoke<Void>(0xBC2042F090AF6AD3, vehicle, toggle);
		} // 0xBC2042F090AF6AD3 0x9AD1FE1E  
		static void set_vehicle_light_multiplier(Vehicle vehicle, float multiplier)
		{
			invoke<Void>(0xB385454F8791F57C, vehicle, multiplier);
		} // 0xB385454F8791F57C 0x48039D6A  
		static void attach_vehicle_to_trailer(Vehicle vehicle, Vehicle trailer, float radius)
		{
			invoke<Void>(0x3C7D42D58F770B54, vehicle, trailer, radius);
		} // 0x3C7D42D58F770B54 0x2133977F  
		static void _0x16b5e274bde402f8(Vehicle vehicle, Vehicle trailer, float p2, float p3, float p4, float p5,
			float p6, float p7, float p8, float p9, float p10, float p11)
		{
			invoke<Void>(0x16B5E274BDE402F8, vehicle, trailer, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11);
		} // 0x16B5E274BDE402F8 0x12AC1A16  
		static void _0x374706271354cb18(Vehicle vehicle, Entity p1, float p2)
		{
			invoke<Void>(0x374706271354CB18, vehicle, p1, p2);
		} // 0x374706271354CB18 0x40C4763F  
		static void detach_vehicle_from_trailer(Vehicle vehicle) { invoke<Void>(0x90532EDF0D2BDD86, vehicle); }
		// 0x90532EDF0D2BDD86 0xB5DBF91D  
		static bool is_vehicle_attached_to_trailer(Vehicle vehicle)
		{
			return invoke<bool>(0xE7CF3C4F9F489F0C, vehicle);
		} // 0xE7CF3C4F9F489F0C 0xE142BBCC  
		static void _0x2a8f319b392e7b3f(Vehicle vehicle, float p1) { invoke<Void>(0x2A8F319B392E7B3F, vehicle, p1); }
		// 0x2A8F319B392E7B3F 0xE74E85CE  
		static void _0x95cf53b3d687f9fa(Vehicle vehicle) { invoke<Void>(0x95CF53B3D687F9FA, vehicle); }
		// 0x95CF53B3D687F9FA 0x06C47A6F  
		static void set_vehicle_tyre_fixed(Vehicle vehicle, int tyreIndex)
		{
			invoke<Void>(0x6E13FC662B882D1D, vehicle, tyreIndex);
		} // 0x6E13FC662B882D1D 0xA42EFA6B  
		static void set_vehicle_number_plate_text(Vehicle vehicle, const char* plateText)
		{
			invoke<Void>(0x95A88F0B409CDA47, vehicle, plateText);
		} // 0x95A88F0B409CDA47 0x400F9556  
		static const char* get_vehicle_number_plate_text(Vehicle vehicle)
		{
			return invoke<const char*>(0x7CE1CCB9B293020E, vehicle);
		} // 0x7CE1CCB9B293020E 0xE8522D58  
		static int get_number_of_vehicle_number_plates() { return invoke<int>(0x4C4D6B2644F458CB); }
		// 0x4C4D6B2644F458CB 0xD24BC1AE  
		static void set_vehicle_number_plate_text_index(Vehicle vehicle, int plateIndex)
		{
			invoke<Void>(0x9088EB5A43FFB0A1, vehicle, plateIndex);
		} // 0x9088EB5A43FFB0A1 0xA1A1890E  
		static int get_vehicle_number_plate_text_index(Vehicle elegy) { return invoke<int>(0xF11BC2DD9A3E7195, elegy); }
		// 0xF11BC2DD9A3E7195 0x499747B6  
		static void set_random_trains(bool toggle) { invoke<Void>(0x80D9F74197EA47D9, toggle); }
		// 0x80D9F74197EA47D9 0xD461CA7F  
		static Vehicle create_mission_train(int variation, float x, float y, float z, bool direction)
		{
			return invoke<Vehicle>(0x63C6CCA8E68AE8C8, variation, x, y, z, direction);
		} // 0x63C6CCA8E68AE8C8 0xD4C2EAFD  
		static void switch_train_track(int intersectionId, bool state)
		{
			invoke<Void>(0xFD813BB7DB977F20, intersectionId, state);
		} // 0xFD813BB7DB977F20 0x68BFDD61  
		static void _0x21973bbf8d17edfa(Any p0, Any p1) { invoke<Void>(0x21973BBF8D17EDFA, p0, p1); }
		// 0x21973BBF8D17EDFA 0xD5774FB7  
		static void delete_all_trains() { invoke<Void>(0x736A718577F39C7D); } // 0x736A718577F39C7D 0x83DE7ABF  
		static void set_train_speed(Vehicle train, float speed) { invoke<Void>(0xAA0BC91BE0B796E3, train, speed); }
		// 0xAA0BC91BE0B796E3 0xDFC35E4D  
		static void set_train_cruise_speed(Vehicle train, float speed)
		{
			invoke<Void>(0x16469284DB8C62B5, train, speed);
		} // 0x16469284DB8C62B5 0xB507F51D  
		static void set_random_boats(bool toggle) { invoke<Void>(0x84436EC293B1415F, toggle); }
		// 0x84436EC293B1415F 0xB505BD89  
		static void set_garbage_trucks(bool toggle) { invoke<Void>(0x2AFD795EEAC8D30D, toggle); }
		// 0x2AFD795EEAC8D30D 0xD9ABB0FF  
		static bool does_vehicle_have_stuck_vehicle_check(Vehicle vehicle)
		{
			return invoke<bool>(0x57E4C39DE5EE8470, vehicle);
		} // 0x57E4C39DE5EE8470 0x5D91D9AC  
		static int get_vehicle_recording_id(int p0, const char* p1) { return invoke<int>(0x21543C612379DB3C, p0, p1); }
		// 0x21543C612379DB3C 0x328D601D  
		static void request_vehicle_recording(int i, const char* name) { invoke<Void>(0xAF514CABE74CBF15, i, name); }
		// 0xAF514CABE74CBF15 0x91AFEFD9  
		static bool has_vehicle_recording_been_loaded(Any p0, Any* p1)
		{
			return invoke<bool>(0x300D614A4C785FC4, p0, p1);
		} // 0x300D614A4C785FC4 0xF52CD7F5  
		static void remove_vehicle_recording(Any p0, Any* p1) { invoke<Void>(0xF1160ACCF98A3FC8, p0, p1); }
		// 0xF1160ACCF98A3FC8 0xD3C05B00  
		static Vector3 _0x92523b76657a517d(Any p0, float p1) { return invoke<Vector3>(0x92523B76657A517D, p0, p1); }
		// 0x92523B76657A517D 0xF31973BB  
		static Vector3 get_position_of_vehicle_recording_at_time(int p0, float p1, const char* p2)
		{
			return invoke<Vector3>(0xD242728AA6F0FBA2, p0, p1, p2);
		} // 0xD242728AA6F0FBA2 0x7178558D  
		static Vector3 _0xf0f2103efaf8cba7(Any p0, float p1) { return invoke<Vector3>(0xF0F2103EFAF8CBA7, p0, p1); }
		// 0xF0F2103EFAF8CBA7 0x4D1C15C2  
		static Vector3 get_rotation_of_vehicle_recording_at_time(Any p0, float p1, Any* p2)
		{
			return invoke<Vector3>(0x2058206FBE79A8AD, p0, p1, p2);
		} // 0x2058206FBE79A8AD 0xD96DEC68  
		static float get_total_duration_of_vehicle_recording_id(Any p0)
		{
			return invoke<float>(0x102D125411A7B6E6, p0);
		} // 0x102D125411A7B6E6 0x7116785E  
		static Any get_total_duration_of_vehicle_recording(Any p0, Any p1)
		{
			return invoke<Any>(0x0E48D1C262390950, p0, p1);
		} // 0x0E48D1C262390950 0x5B35EEB7  
		static float get_position_in_recording(Any p0) { return invoke<float>(0x2DACD605FC681475, p0); }
		// 0x2DACD605FC681475 0x7DCD644C  
		static float get_time_position_in_recording(Any p0) { return invoke<float>(0x5746F3A7AB7FE544, p0); }
		// 0x5746F3A7AB7FE544 0xF8C3E4A2  
		static void start_playback_recorded_vehicle(Vehicle vehicle, int p1, const char* playback, bool p3)
		{
			invoke<Void>(0x3F878F92B3A7A071, vehicle, p1, playback, p3);
		} // 0x3F878F92B3A7A071 0xCF614CA8  
		static void start_playback_recorded_vehicle_with_flags(Vehicle vehicle, Any p1, const char* playback, Any p3,
			Any p4, Any p5)
		{
			invoke<Void>(0x7D80FD645D4DA346, vehicle, p1, playback, p3, p4, p5);
		} // 0x7D80FD645D4DA346 0x4E721AD2  
		static void _0x1f2e4e06dea8992b(Any p0, bool p1) { invoke<Void>(0x1F2E4E06DEA8992B, p0, p1); }
		// 0x1F2E4E06DEA8992B 0x01B91CD0  
		static void stop_playback_recorded_vehicle(Any p0) { invoke<Void>(0x54833611C17ABDEA, p0); }
		// 0x54833611C17ABDEA 0xAE99C57C  
		static void pause_playback_recorded_vehicle(Any p0) { invoke<Void>(0x632A689BF42301B1, p0); }
		// 0x632A689BF42301B1 0xCCF54912  
		static void unpause_playback_recorded_vehicle(Any p0) { invoke<Void>(0x8879EE09268305D5, p0); }
		// 0x8879EE09268305D5 0x59060F75  
		static bool is_playback_going_on_for_vehicle(Any p0) { return invoke<bool>(0x1C8A4C2C19E68EEC, p0); }
		// 0x1C8A4C2C19E68EEC 0x61F7650D  
		static bool is_playback_using_ai_going_on_for_vehicle(Any p0) { return invoke<bool>(0xAEA8FD591FAD4106, p0); }
		// 0xAEA8FD591FAD4106 0x63022C58  
		static Any get_current_playback_for_vehicle(Any p0) { return invoke<Any>(0x42BC05C27A946054, p0); }
		// 0x42BC05C27A946054 0xA3F44390  
		static void skip_to_end_and_stop_playback_recorded_vehicle(Any p0) { invoke<Void>(0xAB8E2EDA0C0A5883, p0); }
		// 0xAB8E2EDA0C0A5883 0x8DEA18C8  
		static void set_playback_speed(Vehicle vehicle, float speed)
		{
			invoke<Void>(0x6683AB880E427778, vehicle, speed);
		} // 0x6683AB880E427778 0x684E26E4  
		static void start_playback_recorded_vehicle_using_ai(Any p0, Any p1, Any* p2, float p3, Any p4)
		{
			invoke<Void>(0x29DE5FA52D00428C, p0, p1, p2, p3, p4);
		} // 0x29DE5FA52D00428C 0x8DE8E24E  
		static void skip_time_in_playback_recorded_vehicle(Any p0, float p1)
		{
			invoke<Void>(0x9438F7AD68771A20, p0, p1);
		} // 0x9438F7AD68771A20 0xCF3EFA4B  
		static void set_playback_to_use_ai(Vehicle vehicle, int flag)
		{
			invoke<Void>(0xA549C3B37EA28131, vehicle, flag);
		} // 0xA549C3B37EA28131 0xB536CCD7  
		static void set_playback_to_use_ai_try_to_revert_back_later(Any p0, Any p1, Any p2, bool p3)
		{
			invoke<Void>(0x6E63860BBB190730, p0, p1, p2, p3);
		} // 0x6E63860BBB190730 0x0C8ABAA4  
		static void _0x5845066d8a1ea7f7(Vehicle vehicle, float x, float y, float z, Any p4)
		{
			invoke<Void>(0x5845066D8A1EA7F7, vehicle, x, y, z, p4);
		} // 0x5845066D8A1EA7F7 0x943A58EB  
		static void _0x796a877e459b99ea(Any p0, float p1, float p2, float p3)
		{
			invoke<Void>(0x796A877E459B99EA, p0, p1, p2, p3);
		} // 0x796A877E459B99EA 0x5C9F477C  
		static void _0xfaf2a78061fd9ef4(Any p0, float p1, float p2, float p3)
		{
			invoke<Void>(0xFAF2A78061FD9EF4, p0, p1, p2, p3);
		} // 0xFAF2A78061FD9EF4 0xCD83C393  
		static void _0x063ae2b2cc273588(Any p0, bool p1) { invoke<Void>(0x063AE2B2CC273588, p0, p1); }
		// 0x063AE2B2CC273588 0x2EF8435C  
		static void explode_vehicle_in_cutscene(Vehicle vehicle, bool p1)
		{
			invoke<Void>(0x786A4EB67B01BF0B, vehicle, p1);
		} // 0x786A4EB67B01BF0B 0xA85207B5  
		static void add_vehicle_stuck_check_with_warp(Any p0, float p1, Any p2, bool p3, bool p4, bool p5, Any p6)
		{
			invoke<Void>(0x2FA9923062DD396C, p0, p1, p2, p3, p4, p5, p6);
		} // 0x2FA9923062DD396C 0xC8B789AD  
		static void set_vehicle_model_is_suppressed(Hash model, bool suppressed)
		{
			invoke<Void>(0x0FC2D89AC25A5814, model, suppressed);
		} // 0x0FC2D89AC25A5814 0x42A08C9B  
		static Vehicle get_random_vehicle_in_sphere(float x, float y, float z, float radius, Hash modelHash, int flags)
		{
			return invoke<Vehicle>(0x386F6CE5BAF6091C, x, y, z, radius, modelHash, flags);
		} // 0x386F6CE5BAF6091C 0x57216D03  
		static Vehicle
			get_random_vehicle_front_bumper_in_sphere(float p0, float p1, float p2, float p3, int p4, int p5, int p6)
		{
			return invoke<Vehicle>(0xC5574E0AEB86BA68, p0, p1, p2, p3, p4, p5, p6);
		} // 0xC5574E0AEB86BA68 0xDCADEB66  
		static Vehicle
			get_random_vehicle_back_bumper_in_sphere(float p0, float p1, float p2, float p3, int p4, int p5, int p6)
		{
			return invoke<Vehicle>(0xB50807EABE20A8DC, p0, p1, p2, p3, p4, p5, p6);
		} // 0xB50807EABE20A8DC 0xD6343F6B  
		static Vehicle get_closest_vehicle(float x, float y, float z, float radius, Hash modelHash, int flags)
		{
			return invoke<Vehicle>(0xF73EB622C4F1689B, x, y, z, radius, modelHash, flags);
		} // 0xF73EB622C4F1689B 0xD7E26B2C  
		static Entity get_train_carriage(Vehicle train, int trailerNumber)
		{
			return invoke<Entity>(0x08AAFD0814722BC3, train, trailerNumber);
		} // 0x08AAFD0814722BC3 0x2544E7A6  
		static void delete_mission_train(Vehicle* train) { invoke<Void>(0x5B76B14AE875C795, train); }
		// 0x5B76B14AE875C795 0x86C9497D  
		static void set_mission_train_as_no_longer_needed(Vehicle* train, bool p1)
		{
			invoke<Void>(0xBBE7648349B49BE8, train, p1);
		} // 0xBBE7648349B49BE8 0x19808560  
		static void set_mission_train_coords(Vehicle train, float x, float y, float z)
		{
			invoke<Void>(0x591CA673AA6AB736, train, x, y, z);
		} // 0x591CA673AA6AB736 0xD6D70803  
		static bool is_this_model_a_boat(Hash model) { return invoke<bool>(0x45A9187928F4B9E3, model); }
		// 0x45A9187928F4B9E3 0x10F6085C  
		static bool _is_this_model_a_jetski(Hash model) { return invoke<bool>(0x9537097412CF75FE, model); }
		// 0x9537097412CF75FE  
		static bool is_this_model_a_plane(Hash model) { return invoke<bool>(0xA0948AB42D7BA0DE, model); }
		// 0xA0948AB42D7BA0DE 0x3B3907BB  
		static bool is_this_model_a_heli(Hash model) { return invoke<bool>(0xDCE4334788AF94EA, model); }
		// 0xDCE4334788AF94EA 0x8AF7F568  
		static bool is_this_model_a_car(Hash model) { return invoke<bool>(0x7F6DB52EEFC96DF8, model); }
		// 0x7F6DB52EEFC96DF8 0x60E4C22F  
		static bool is_this_model_a_train(Hash model) { return invoke<bool>(0xAB935175B22E822B, model); }
		// 0xAB935175B22E822B 0xF87DCFFD  
		static bool is_this_model_a_bike(Hash model) { return invoke<bool>(0xB50C0B0CEDC6CE84, model); }
		// 0xB50C0B0CEDC6CE84 0x7E702CDD  
		static bool is_this_model_a_bicycle(Hash model) { return invoke<bool>(0xBF94DD42F63BDED2, model); }
		// 0xBF94DD42F63BDED2 0x328E6FF5  
		static bool is_this_model_a_quadbike(Hash model) { return invoke<bool>(0x39DAC362EE65FA28, model); }
		// 0x39DAC362EE65FA28 0xC1625277  
		static void set_heli_blades_full_speed(Vehicle vehicle) { invoke<Void>(0xA178472EBB8AE60D, vehicle); }
		// 0xA178472EBB8AE60D 0x033A9408  
		static void set_heli_blades_speed(Vehicle vehicle, float speed)
		{
			invoke<Void>(0xFD280B4D7F3ABC4D, vehicle, speed);
		} // 0xFD280B4D7F3ABC4D 0x5C7D4EA9  
		static void _0x99cad8e7afdb60fa(Vehicle vehicle, float p1, float p2)
		{
			invoke<Void>(0x99CAD8E7AFDB60FA, vehicle, p1, p2);
		} // 0x99CAD8E7AFDB60FA 0x1128A45B  
		static void set_vehicle_can_be_targetted(Vehicle vehicle, bool state)
		{
			invoke<Void>(0x3750146A28097A82, vehicle, state);
		} // 0x3750146A28097A82 0x64B70B1D  
		static void _0xdbc631f109350b8c(Vehicle vehicle, bool p1) { invoke<Void>(0xDBC631F109350B8C, vehicle, p1); }
		// 0xDBC631F109350B8C 0x486C1280  
		static void set_vehicle_can_be_visibly_damaged(Vehicle vehicle, bool state)
		{
			invoke<Void>(0x4C7028F78FFD3681, vehicle, state);
		} // 0x4C7028F78FFD3681 0xC5D94017  
		static void _0x1aa8a837d2169d94(Vehicle vehicle, bool p1) { invoke<Void>(0x1AA8A837D2169D94, vehicle, p1); }
		// 0x1AA8A837D2169D94 0x009AB49E  
		static void _0x2311dd7159f00582(Vehicle vehicle, bool p1) { invoke<Void>(0x2311DD7159F00582, vehicle, p1); }
		// 0x2311DD7159F00582 0x758C5E2E  
		static float get_vehicle_dirt_level(Vehicle vehicle) { return invoke<float>(0x8F17BC8BA08DA62B, vehicle); }
		// 0x8F17BC8BA08DA62B 0xFD15C065  
		static void set_vehicle_dirt_level(Vehicle vehicle, float dirtLevel)
		{
			invoke<Void>(0x79D3B596FE44EE8B, vehicle, dirtLevel);
		} // 0x79D3B596FE44EE8B 0x2B39128B  
		static bool _is_vehicle_damaged(Vehicle vehicle) { return invoke<bool>(0xBCDC5017D3CE1E9E, vehicle); }
		// 0xBCDC5017D3CE1E9E 0xDAC523BC  
		static bool is_vehicle_door_fully_open(Vehicle vehicle, int doorIndex)
		{
			return invoke<bool>(0x3E933CFF7B111C22, vehicle, doorIndex);
		} // 0x3E933CFF7B111C22 0xC2385B6F  
		static void set_vehicle_engine_on(Vehicle vehicle, bool value, bool instantly, bool otherwise)
		{
			invoke<Void>(0x2497C4717C8B881E, vehicle, value, instantly, otherwise);
		} // 0x2497C4717C8B881E 0x7FBC86F1  
		static void set_vehicle_undriveable(Vehicle vehicle, bool toggle)
		{
			invoke<Void>(0x8ABA6AF54B942B95, vehicle, toggle);
		} // 0x8ABA6AF54B942B95 0x48D02A4E  
		static void set_vehicle_provides_cover(Vehicle vehicle, bool toggle)
		{
			invoke<Void>(0x5AFEEDD9BB2899D7, vehicle, toggle);
		} // 0x5AFEEDD9BB2899D7 0xEFC01CA9  
		static void set_vehicle_door_control(Vehicle vehicle, int doorIndex, int speed, float angle)
		{
			invoke<Void>(0xF2BFA0430F0A0FCB, vehicle, doorIndex, speed, angle);
		} // 0xF2BFA0430F0A0FCB 0x572DD360  
		static void set_vehicle_door_latched(Vehicle vehicle, int doorIndex, bool p2, bool p3, bool p4)
		{
			invoke<Void>(0xA5A9653A8D2CAF48, vehicle, doorIndex, p2, p3, p4);
		} // 0xA5A9653A8D2CAF48 0x4EB7BBFC  
		static float get_vehicle_door_angle_ratio(Vehicle vehicle, int door)
		{
			return invoke<float>(0xFE3F9C29F7B32BD5, vehicle, door);
		} // 0xFE3F9C29F7B32BD5 0x0E399C26  
		static Ped _get_ped_using_vehicle_door(Vehicle vehicle, int doorIndex)
		{
			return invoke<Ped>(0x218297BF0CFD853B, vehicle, doorIndex);
		} // 0x218297BF0CFD853B  
		static void set_vehicle_door_shut(Vehicle vehicle, int doorIndex, bool closeInstantly)
		{
			invoke<Void>(0x93D9BD300D7789E5, vehicle, doorIndex, closeInstantly);
		} // 0x93D9BD300D7789E5 0x142606BD  
		static void set_vehicle_door_broken(Vehicle vehicle, int doorIndex, bool deleteDoor)
		{
			invoke<Void>(0xD4D4F6A4AB575A33, vehicle, doorIndex, deleteDoor);
		} // 0xD4D4F6A4AB575A33 0x8147FEA7  
		static void set_vehicle_can_break(Vehicle vehicle, bool toggle)
		{
			invoke<Void>(0x59BF8C3D52C92F66, vehicle, toggle);
		} // 0x59BF8C3D52C92F66 0x90A810D1  
		static bool does_vehicle_have_roof(Vehicle vehicle) { return invoke<bool>(0x8AC862B0B32C5B80, vehicle); }
		// 0x8AC862B0B32C5B80 0xDB817403  
		static bool is_big_vehicle(Vehicle vehicle) { return invoke<bool>(0x9F243D3919F442FE, vehicle); }
		// 0x9F243D3919F442FE 0x9CDBA8DE  
		static int get_number_of_vehicle_colours(Vehicle vehicle) { return invoke<int>(0x3B963160CD65D41E, vehicle); }
		// 0x3B963160CD65D41E 0xF2442EE2  
		static void set_vehicle_colour_combination(Vehicle vehicle, int colorCombination)
		{
			invoke<Void>(0x33E8CD3322E2FE31, vehicle, colorCombination);
		} // 0x33E8CD3322E2FE31 0xA557AEAD  
		static int get_vehicle_colour_combination(Vehicle vehicle) { return invoke<int>(0x6A842D197F845D56, vehicle); }
		// 0x6A842D197F845D56 0x77AC1B4C  
		static void set_vehicle_is_considered_by_player(Vehicle vehicle, bool toggle)
		{
			invoke<Void>(0x31B927BBC44156CD, vehicle, toggle);
		} // 0x31B927BBC44156CD 0x14413319  
		static void _0xbe5c1255a1830ff5(Vehicle vehicle, bool toggle)
		{
			invoke<Void>(0xBE5C1255A1830FF5, vehicle, toggle);
		} // 0xBE5C1255A1830FF5 0xA6D8D7A5  
		static void _0x9becd4b9fef3f8a6(Vehicle vehicle, bool p1) { invoke<Void>(0x9BECD4B9FEF3F8A6, vehicle, p1); }
		// 0x9BECD4B9FEF3F8A6 0xACAB8FF3  
		static void _0x88bc673ca9e0ae99(Vehicle vehicle, bool p1) { invoke<Void>(0x88BC673CA9E0AE99, vehicle, p1); }
		// 0x88BC673CA9E0AE99 0xF0E5C41D  
		static void _0xe851e480b814d4ba(Vehicle vehicle, bool p1) { invoke<Void>(0xE851E480B814D4BA, vehicle, p1); }
		// 0xE851E480B814D4BA 0x2F98B4B7  
		static void get_random_vehicle_model_in_memory(bool p0, Hash* modelHash, int* p2)
		{
			invoke<Void>(0x055BF0AC0C34F4FD, p0, modelHash, p2);
		} // 0x055BF0AC0C34F4FD 0xE2C45631  
		static int get_vehicle_door_lock_status(Vehicle vehicle) { return invoke<int>(0x25BC98A59C2EA962, vehicle); }
		// 0x25BC98A59C2EA962 0x0D72CEF2  
		static bool is_vehicle_door_damaged(Vehicle veh, int doorID)
		{
			return invoke<bool>(0xB8E181E559464527, veh, doorID);
		} // 0xB8E181E559464527 0x4999E3C3  
		static void _set_vehicle_door_can_break(Vehicle vehicle, int doorIndex, bool isBreakable)
		{
			invoke<Void>(0x2FA133A4A9D37ED8, vehicle, doorIndex, isBreakable);
		} // 0x2FA133A4A9D37ED8 0x065B92B3  
		static bool _0x27b926779deb502d(Vehicle vehicle, bool frontBumper)
		{
			return invoke<bool>(0x27B926779DEB502D, vehicle, frontBumper);
		} // 0x27B926779DEB502D 0xB3A2CC4F  
		static bool is_vehicle_bumper_broken_off(Vehicle vehicle, bool front)
		{
			return invoke<bool>(0x468056A6BB6F3846, vehicle, front);
		} // 0x468056A6BB6F3846 0xAF25C027  
		static bool is_cop_vehicle_in_area_3d(float x1, float x2, float y1, float y2, float z1, float z2)
		{
			return invoke<bool>(0x7EEF65D5F153E26A, x1, x2, y1, y2, z1, z2);
		} // 0x7EEF65D5F153E26A 0xFB16C6D1  
		static bool is_vehicle_on_all_wheels(Vehicle vehicle) { return invoke<bool>(0xB104CD1BABF302E2, vehicle); }
		// 0xB104CD1BABF302E2 0x10089F8E  
		static Hash get_vehicle_layout_hash(Vehicle vehicle) { return invoke<Hash>(0x28D37D4F71AC5C58, vehicle); }
		// 0x28D37D4F71AC5C58 0xE0B35187  
		static Any _0xa01bc64dd4bfbbac(Vehicle vehicle, int p1) { return invoke<Any>(0xA01BC64DD4BFBBAC, vehicle, p1); }
		// 0xA01BC64DD4BFBBAC  
		static void set_render_train_as_derailed(Vehicle train, bool toggle)
		{
			invoke<Void>(0x317B11A312DF5534, train, toggle);
		} // 0x317B11A312DF5534 0x899D9092  
		static void set_vehicle_extra_colours(Vehicle vehicle, int pearlescentColor, int wheelColor)
		{
			invoke<Void>(0x2036F561ADD12E33, vehicle, pearlescentColor, wheelColor);
		} // 0x2036F561ADD12E33 0x515DB2A0  
		static void get_vehicle_extra_colours(Vehicle vehicle, int* pearlescentColor, int* wheelColor)
		{
			invoke<Void>(0x3BC4245933A166F7, vehicle, pearlescentColor, wheelColor);
		} // 0x3BC4245933A166F7 0x80E4659B  
		static void stop_all_garage_activity() { invoke<Void>(0x0F87E938BDF29D66); } // 0x0F87E938BDF29D66 0x17A0BCE5  
		static void set_vehicle_fixed(Vehicle vehicle) { invoke<Void>(0x115722B1B9C14C1C, vehicle); }
		// 0x115722B1B9C14C1C 0x17469AA1  
		static void set_vehicle_deformation_fixed(Vehicle vehicle) { invoke<Void>(0x953DA1E1B12C0491, vehicle); }
		// 0x953DA1E1B12C0491 0xDD2920C8  
		static void _0x206bc5dc9d1ac70a(Vehicle vehicle, bool p1) { invoke<Void>(0x206BC5DC9D1AC70A, vehicle, p1); }
		// 0x206BC5DC9D1AC70A  
		static void _0x51bb2d88d31a914b(Vehicle vehicle, bool p1) { invoke<Void>(0x51BB2D88D31A914B, vehicle, p1); }
		// 0x51BB2D88D31A914B 0x88F0F7E7  
		static void _0x192547247864dfdd(Vehicle vehicle, bool p1) { invoke<Void>(0x192547247864DFDD, vehicle, p1); }
		// 0x192547247864DFDD 0x90D6EE57  
		static void set_disable_vehicle_petrol_tank_fires(Vehicle vehicle, bool toggle)
		{
			invoke<Void>(0x465BF26AB9684352, vehicle, toggle);
		} // 0x465BF26AB9684352 0xC40192B5  
		static void set_disable_vehicle_petrol_tank_damage(Vehicle vehicle, bool toggle)
		{
			invoke<Void>(0x37C8252A7C92D017, vehicle, toggle);
		} // 0x37C8252A7C92D017 0xAD3E05F2  
		static void _0x91a0bd635321f145(Vehicle vehicle, bool p1) { invoke<Void>(0x91A0BD635321F145, vehicle, p1); }
		// 0x91A0BD635321F145 0x1784BA1A  
		static void _0xc50ce861b55eab8b(Vehicle vehicle, bool p1) { invoke<Void>(0xC50CE861B55EAB8B, vehicle, p1); }
		// 0xC50CE861B55EAB8B 0x40C323AE  
		static void _0x6ebfb22d646ffc18(Vehicle vehicle, bool p1) { invoke<Void>(0x6EBFB22D646FFC18, vehicle, p1); }
		// 0x6EBFB22D646FFC18 0x847F1304  
		static void _0x25367de49d64cf16(Vehicle vehicle, bool p1) { invoke<Void>(0x25367DE49D64CF16, vehicle, p1); }
		// 0x25367DE49D64CF16 0xCBD98BA1  
		static void remove_vehicles_from_generators_in_area(float x1, float y1, float z1, float x2, float y2, float z2,
			Any unk)
		{
			invoke<Void>(0x46A1E1A299EC4BBA, x1, y1, z1, x2, y2, z2, unk);
		} // 0x46A1E1A299EC4BBA 0x42CC15E0  
		static void set_vehicle_steer_bias(Vehicle vehicle, float value)
		{
			invoke<Void>(0x42A8EC77D5150CBE, vehicle, value);
		} // 0x42A8EC77D5150CBE 0x7357C1EB  
		static bool is_vehicle_extra_turned_on(Vehicle vehicle, int extraId)
		{
			return invoke<bool>(0xD2E6822DBFD6C8BD, vehicle, extraId);
		} // 0xD2E6822DBFD6C8BD 0x042098B5  
		static void set_vehicle_extra(Vehicle vehicle, int extraId, bool disable)
		{
			invoke<Void>(0x7EE3A3C5E4A40CC9, vehicle, extraId, disable);
		} // 0x7EE3A3C5E4A40CC9 0x642D065C  
		static bool does_extra_exist(Vehicle vehicle, int extraId)
		{
			return invoke<bool>(0x1262D55792428154, vehicle, extraId);
		} // 0x1262D55792428154 0x409411CC  
		static void set_convertible_roof(Vehicle vehicle, bool p1) { invoke<Void>(0xF39C4F538B5124C2, vehicle, p1); }
		// 0xF39C4F538B5124C2 0xC87B6A51  
		static void lower_convertible_roof(Vehicle vehicle, bool instantlyLower)
		{
			invoke<Void>(0xDED51F703D0FA83D, vehicle, instantlyLower);
		} // 0xDED51F703D0FA83D 0xC5F72EAE  
		static void raise_convertible_roof(Vehicle vehicle, bool instantlyRaise)
		{
			invoke<Void>(0x8F5FB35D7E88FC70, vehicle, instantlyRaise);
		} // 0x8F5FB35D7E88FC70 0xA4E4CBA3  
		static int get_convertible_roof_state(Vehicle vehicle) { return invoke<int>(0xF8C397922FC03F41, vehicle); }
		// 0xF8C397922FC03F41 0x1B09714D  
		static bool is_vehicle_a_convertible(Vehicle vehicle, bool p1)
		{
			return invoke<bool>(0x52F357A30698BCCE, vehicle, p1);
		} // 0x52F357A30698BCCE 0x6EF54490  
		static bool is_vehicle_stopped_at_traffic_lights(Vehicle vehicle)
		{
			return invoke<bool>(0x2959F696AE390A99, vehicle);
		} // 0x2959F696AE390A99 0x69200FA4  
		static void set_vehicle_damage(Vehicle vehicle, float xOffset, float yOffset, float zOffset, float damage,
			float radius, bool p6)
		{
			invoke<Void>(0xA1DD317EA8FD4F29, vehicle, xOffset, yOffset, zOffset, damage, radius, p6);
		} // 0xA1DD317EA8FD4F29 0x21B458B2  
		static float get_vehicle_engine_health(Vehicle vehicle) { return invoke<float>(0xC45D23BAF168AAB8, vehicle); }
		// 0xC45D23BAF168AAB8 0x8880038A  
		static void set_vehicle_engine_health(Vehicle vehicle, float health)
		{
			invoke<Void>(0x45F6D8EEF34ABEF1, vehicle, health);
		} // 0x45F6D8EEF34ABEF1 0x1B760FB5  
		static float get_vehicle_petrol_tank_health(Vehicle vehicle)
		{
			return invoke<float>(0x7D5DABE888D2D074, vehicle);
		} // 0x7D5DABE888D2D074 0xE41595CE  
		static void set_vehicle_petrol_tank_health(Vehicle vehicle, float health)
		{
			invoke<Void>(0x70DB57649FA8D0D8, vehicle, health);
		} // 0x70DB57649FA8D0D8 0x660A3692  
		static bool is_vehicle_stuck_timer_up(Vehicle vehicle, int p1, int p2)
		{
			return invoke<bool>(0x679BE1DAF71DA874, vehicle, p1, p2);
		} // 0x679BE1DAF71DA874 0x2FCF58C1  
		static void reset_vehicle_stuck_timer(Vehicle vehicle, int nullAttributes)
		{
			invoke<Void>(0xD7591B0065AFAA7A, vehicle, nullAttributes);
		} // 0xD7591B0065AFAA7A 0xEF2A6016  
		static bool is_vehicle_driveable(Vehicle vehicle, bool isOnFireCheck)
		{
			return invoke<bool>(0x4C241E39B23DF959, vehicle, isOnFireCheck);
		} // 0x4C241E39B23DF959 0x41A7267A  
		static void set_vehicle_has_been_owned_by_player(Vehicle vehicle, bool owned)
		{
			invoke<Void>(0x2B5F9D2AF1F1722D, vehicle, owned);
		} // 0x2B5F9D2AF1F1722D 0xB4D3DBFB  
		static void set_vehicle_needs_to_be_hotwired(Vehicle vehicle, bool toggle)
		{
			invoke<Void>(0xFBA550EA44404EE6, vehicle, toggle);
		} // 0xFBA550EA44404EE6 0xD8260751  
		static void _0x9f3f689b814f2599(Vehicle vehicle, bool p1) { invoke<Void>(0x9F3F689B814F2599, vehicle, p1); }
		// 0x9F3F689B814F2599  
		static void _0x4e74e62e0a97e901(Vehicle vehicle, bool p1) { invoke<Void>(0x4E74E62E0A97E901, vehicle, p1); }
		// 0x4E74E62E0A97E901  
		static void start_vehicle_horn(Vehicle vehicle, int duration, Hash mode, bool forever)
		{
			invoke<Void>(0x9C8C6504B5B63D2C, vehicle, duration, mode, forever);
		} // 0x9C8C6504B5B63D2C 0x0DF5ADB3  
		static void _set_vehicle_silent(Vehicle vehicle, bool toggle)
		{
			invoke<Void>(0x9D44FCCE98450843, vehicle, toggle);
		} // 0x9D44FCCE98450843 0x968E5770  
		static void set_vehicle_has_strong_axles(Vehicle vehicle, bool toggle)
		{
			invoke<Void>(0x92F0CF722BC4202F, vehicle, toggle);
		} // 0x92F0CF722BC4202F 0x0D1CBC65  
		static const char* get_display_name_from_vehicle_model(Hash modelHash)
		{
			return invoke<const char*>(0xB215AAC32D25D019, modelHash);
		} // 0xB215AAC32D25D019 0xEC86DF39  
		static Vector3 get_vehicle_deformation_at_pos(Vehicle vehicle, float offsetX, float offsetY, float offsetZ)
		{
			return invoke<Vector3>(0x4EC6CFBC7B2E9536, vehicle, offsetX, offsetY, offsetZ);
		} // 0x4EC6CFBC7B2E9536 0xABF02075  
		static void set_vehicle_livery(Vehicle vehicle, int liveryIndex)
		{
			invoke<Void>(0x60BF608F1B8CD1B6, vehicle, liveryIndex);
		} // 0x60BF608F1B8CD1B6 0x7AD87059  
		static int get_vehicle_livery(Vehicle trailers2) { return invoke<int>(0x2BB9230590DA5E8A, trailers2); }
		// 0x2BB9230590DA5E8A 0xEC82A51D  
		static int get_vehicle_livery_count(Vehicle vehicle) { return invoke<int>(0x87B63E25A529D526, vehicle); }
		// 0x87B63E25A529D526 0xFB0CA947  
		static bool is_vehicle_window_intact(Vehicle vehicle, int windowIndex)
		{
			return invoke<bool>(0x46E571A0E20D01F1, vehicle, windowIndex);
		} // 0x46E571A0E20D01F1 0xAC4EF23D  
		static bool are_all_vehicle_windows_intact(Vehicle vehicle)
		{
			return invoke<bool>(0x11D862A3E977A9EF, vehicle);
		} // 0x11D862A3E977A9EF 0xBB619744  
		static bool are_any_vehicle_seats_free(Vehicle vehicle) { return invoke<bool>(0x2D34FC3BC4ADB780, vehicle); }
		// 0x2D34FC3BC4ADB780 0x648E685A  
		static void reset_vehicle_wheels(Vehicle vehicle, bool toggle)
		{
			invoke<Void>(0x21D2E5662C1F6FED, vehicle, toggle);
		} // 0x21D2E5662C1F6FED 0xD5FFE779  
		static bool is_heli_part_broken(Vehicle vehicle, bool p1, bool p2, bool p3)
		{
			return invoke<bool>(0xBC74B4BE25EB6C8A, vehicle, p1, p2, p3);
		} // 0xBC74B4BE25EB6C8A 0xF4E4C439  
		static float _get_heli_main_rotor_health(Vehicle vehicle) { return invoke<float>(0xE4CB7541F413D2C5, vehicle); }
		// 0xE4CB7541F413D2C5 0xF01E2AAB  
		static float _get_heli_tail_rotor_health(Vehicle vehicle) { return invoke<float>(0xAE8CE82A4219AC8C, vehicle); }
		// 0xAE8CE82A4219AC8C 0xA41BC13D  
		static float _get_heli_engine_health(Vehicle vehicle) { return invoke<float>(0xAC51915D27E4A5F7, vehicle); }
		// 0xAC51915D27E4A5F7 0x8A68388F  
		static bool was_counter_activated(Vehicle vehicle, Any p1)
		{
			return invoke<bool>(0x3EC8BF18AA453FE9, vehicle, p1);
		} // 0x3EC8BF18AA453FE9 0x2916D69B  
		static void set_vehicle_name_debug(Vehicle vehicle, const char* name)
		{
			invoke<Void>(0xBFDF984E2C22B94F, vehicle, name);
		} // 0xBFDF984E2C22B94F 0xA712FF5C  
		static void set_vehicle_explodes_on_high_explosion_damage(Vehicle vehicle, bool toggle)
		{
			invoke<Void>(0x71B0892EC081D60A, vehicle, toggle);
		} // 0x71B0892EC081D60A 0x38CC692B  
		static void _0x3441cad2f2231923(Vehicle vehicle, bool p1) { invoke<Void>(0x3441CAD2F2231923, vehicle, p1); }
		// 0x3441CAD2F2231923 0xC306A9A3  
		static void _0x2b6747faa9db9d6b(Vehicle vehicle, bool p1) { invoke<Void>(0x2B6747FAA9DB9D6B, vehicle, p1); }
		// 0x2B6747FAA9DB9D6B 0x95A9ACCB  
		static void control_landing_gear(Vehicle vehicle, int state)
		{
			invoke<Void>(0xCFC8BE9A5E1FE575, vehicle, state);
		} // 0xCFC8BE9A5E1FE575 0x24F873FB  
		static int get_landing_gear_state(Vehicle vehicle) { return invoke<int>(0x9B0F3DCA3DB0F4CD, vehicle); }
		// 0x9B0F3DCA3DB0F4CD 0xA6F02670  
		static bool is_any_vehicle_near_point(float x, float y, float z, float radius)
		{
			return invoke<bool>(0x61E1DD6125A3EEE6, x, y, z, radius);
		} // 0x61E1DD6125A3EEE6 0x2867A834  
		static void request_vehicle_high_detail_model(Vehicle vehicle) { invoke<Void>(0xA6E9FDCB2C76785E, vehicle); }
		// 0xA6E9FDCB2C76785E 0x9DA21956  
		static void remove_vehicle_high_detail_model(Vehicle vehicle) { invoke<Void>(0x00689CDE5F7C6787, vehicle); }
		// 0x00689CDE5F7C6787 0x382BE070  
		static bool is_vehicle_high_detail(Vehicle vehicle) { return invoke<bool>(0x1F25887F3C104278, vehicle); }
		// 0x1F25887F3C104278 0x55D41928  
		static void request_vehicle_asset(Hash vehicleHash, int vehicleAsset)
		{
			invoke<Void>(0x81A15811460FAB3A, vehicleHash, vehicleAsset);
		} // 0x81A15811460FAB3A 0x902B4F06  
		static bool has_vehicle_asset_loaded(int vehicleAsset)
		{
			return invoke<bool>(0x1BBE0523B8DB9A21, vehicleAsset);
		} // 0x1BBE0523B8DB9A21 0x8DAAC3CB  
		static void remove_vehicle_asset(int vehicleAsset) { invoke<Void>(0xACE699C71AB9DEB5, vehicleAsset); }
		// 0xACE699C71AB9DEB5 0x9620E9C6  
		static void _set_tow_truck_crane_height(Vehicle towTruck, float height)
		{
			invoke<Void>(0xFE54B92A344583CA, towTruck, height);
		} // 0xFE54B92A344583CA 0x88236E22  
		static void attach_vehicle_to_tow_truck(Vehicle towTruck, Vehicle vehicle, bool rear, float hookOffsetX,
			float hookOffsetY, float hookOffsetZ)
		{
			invoke<Void>(0x29A16F8D621C4508, towTruck, vehicle, rear, hookOffsetX, hookOffsetY, hookOffsetZ);
		} // 0x29A16F8D621C4508 0x8151571A  
		static void detach_vehicle_from_tow_truck(Vehicle towTruck, Vehicle vehicle)
		{
			invoke<Void>(0xC2DB6B6708350ED8, towTruck, vehicle);
		} // 0xC2DB6B6708350ED8 0xC666CF33  
		static bool detach_vehicle_from_any_tow_truck(Vehicle vehicle)
		{
			return invoke<bool>(0xD0E9CE05A1E68CD8, vehicle);
		} // 0xD0E9CE05A1E68CD8 0x3BF93651  
		static bool is_vehicle_attached_to_tow_truck(Vehicle towTruck, Vehicle vehicle)
		{
			return invoke<bool>(0x146DF9EC4C4B9FD4, towTruck, vehicle);
		} // 0x146DF9EC4C4B9FD4 0x9699CFDC  
		static Entity get_entity_attached_to_tow_truck(Vehicle towTruck)
		{
			return invoke<Entity>(0xEFEA18DCF10F8F75, towTruck);
		} // 0xEFEA18DCF10F8F75 0x11EC7844  
		static Any set_vehicle_automatically_attaches(Vehicle vehicle, bool p1, Any p2)
		{
			return invoke<Any>(0x8BA6F76BC53A1493, vehicle, p1, p2);
		} // 0x8BA6F76BC53A1493 0x4273A8D3  
		static void _0xf8ebccc96adb9fb7(Any p0, float p1, bool p2) { invoke<Void>(0xF8EBCCC96ADB9FB7, p0, p1, p2); }
		// 0xF8EBCCC96ADB9FB7 0xED23C8A3  
		static void _0x56b94c6d7127dfba(Any p0, float p1, bool p2) { invoke<Void>(0x56B94C6D7127DFBA, p0, p1, p2); }
		// 0x56B94C6D7127DFBA 0xB1A52EF7  
		static void _0x1093408b4b9d1146(Any p0, float p1) { invoke<Void>(0x1093408B4B9D1146, p0, p1); }
		// 0x1093408B4B9D1146 0xF30C566F  
		static void _set_desired_vertical_flight_phase(Vehicle vehicle, float angleRatio)
		{
			invoke<Void>(0x30D779DE7C4F6DD3, vehicle, angleRatio);
		} // 0x30D779DE7C4F6DD3 0xA7DF64D7  
		static void _set_vertical_flight_phase(Vehicle vehicle, float angle)
		{
			invoke<Void>(0x9AA47FFF660CB932, vehicle, angle);
		} // 0x9AA47FFF660CB932 0xDD7936F5  
		static bool _0xa4822f1cf23f4810(Vector3* outVec, Any p1, Vector3* outVec1, Any p3, Any p4, Any p5, Any p6,
			Any p7, Any p8)
		{
			return invoke<bool>(0xA4822F1CF23F4810, outVec, p1, outVec1, p3, p4, p5, p6, p7, p8);
		} // 0xA4822F1CF23F4810 0x34E02FCD  
		static void set_vehicle_burnout(Vehicle vehicle, bool toggle)
		{
			invoke<Void>(0xFB8794444A7D60FB, vehicle, toggle);
		} // 0xFB8794444A7D60FB 0x9B6EF0EA  
		static bool is_vehicle_in_burnout(Vehicle vehicle) { return invoke<bool>(0x1297A88E081430EB, vehicle); }
		// 0x1297A88E081430EB 0x6632BC12  
		static void set_vehicle_reduce_grip(Vehicle vehicle, bool toggle)
		{
			invoke<Void>(0x222FF6A823D122E2, vehicle, toggle);
		} // 0x222FF6A823D122E2 0x90D3A0D9  
		static void set_vehicle_indicator_lights(Vehicle vehicle, int turnSignal, bool toggle)
		{
			invoke<Void>(0xB5D45264751B7DF0, vehicle, turnSignal, toggle);
		} // 0xB5D45264751B7DF0 0xA6073B5D  
		static void set_vehicle_brake_lights(Vehicle vehicle, bool toggle)
		{
			invoke<Void>(0x92B35082E0B42F66, vehicle, toggle);
		} // 0x92B35082E0B42F66 0x6D9BA11E  
		static void set_vehicle_handbrake(Vehicle vehicle, bool toggle)
		{
			invoke<Void>(0x684785568EF26A22, vehicle, toggle);
		} // 0x684785568EF26A22 0xBA729A25  
		static void _0x48adc8a773564670() { invoke<Void>(0x48ADC8A773564670); } // 0x48ADC8A773564670 0x37BC6ACB  
		static bool _0x91d6dd290888cbab() { return invoke<bool>(0x91D6DD290888CBAB); } // 0x91D6DD290888CBAB 0x71D898EF  
		static void _0x51db102f4a3ba5e0(bool p0) { invoke<Void>(0x51DB102F4A3BA5E0, p0); }
		// 0x51DB102F4A3BA5E0 0x0B0523B0  
		static bool get_vehicle_trailer_vehicle(Vehicle vehicle, Vehicle* trailer)
		{
			return invoke<bool>(0x1CDD6BADC297830D, vehicle, trailer);
		} // 0x1CDD6BADC297830D 0xAE84D758  
		static void _0xcac66558b944da67(Vehicle vehicle, bool p1) { invoke<Void>(0xCAC66558B944DA67, vehicle, p1); }
		// 0xCAC66558B944DA67 0x0B200CE2  
		static void set_vehicle_rudder_broken(Vehicle vehicle, bool p1)
		{
			invoke<Void>(0x09606148B6C71DEF, vehicle, p1);
		} // 0x09606148B6C71DEF 0x3FAC3CD4  
		static void _0x1a78ad3d8240536f(Vehicle vehicle, bool p1) { invoke<Void>(0x1A78AD3D8240536F, vehicle, p1); }
		// 0x1A78AD3D8240536F 0x0858678C  
		static float _get_vehicle_max_speed(Vehicle vehicle) { return invoke<float>(0x53AF99BAA671CA47, vehicle); }
		// 0x53AF99BAA671CA47 0x7D1A0616  
		static float get_vehicle_max_braking(Vehicle vehicle) { return invoke<float>(0xAD7E85FC227197C4, vehicle); }
		// 0xAD7E85FC227197C4 0x03B926F6  
		static float get_vehicle_max_traction(Vehicle vehicle) { return invoke<float>(0xA132FB5370554DB0, vehicle); }
		// 0xA132FB5370554DB0 0x7E5A1587  
		static float get_vehicle_acceleration(Vehicle vehicle) { return invoke<float>(0x5DD35C8D074E57AE, vehicle); }
		// 0x5DD35C8D074E57AE 0x00478321  
		static float _get_vehicle_model_max_speed(Hash modelHash)
		{
			return invoke<float>(0xF417C2502FFFED43, modelHash);
		} // 0xF417C2502FFFED43 0x8F291C4A  
		static float get_vehicle_model_max_braking(Hash modelHash)
		{
			return invoke<float>(0xDC53FD41B4ED944C, modelHash);
		} // 0xDC53FD41B4ED944C 0x7EF02883  
		static float _get_vehicle_model_hand_brake(Hash modelHash)
		{
			return invoke<float>(0xBFBA3BA79CFF7EBF, modelHash);
		} // 0xBFBA3BA79CFF7EBF 0xF3A7293F  
		static float get_vehicle_model_max_traction(Hash modelHash)
		{
			return invoke<float>(0x539DE94D44FDFD0D, modelHash);
		} // 0x539DE94D44FDFD0D 0x7F985597  
		static float get_vehicle_model_acceleration(Hash modelHash)
		{
			return invoke<float>(0x8C044C5C84505B6A, modelHash);
		} // 0x8C044C5C84505B6A 0x29CB3537  
		static float _get_vehicle_model_down_force(Hash modelHash)
		{
			return invoke<float>(0x53409B5163D5B846, modelHash);
		} // 0x53409B5163D5B846 0x37FBA7BC  
		static float _0xc6ad107ddc9054cc(Hash modelHash) { return invoke<float>(0xC6AD107DDC9054CC, modelHash); }
		// 0xC6AD107DDC9054CC 0x95BB67EB  
		static float _get_vehicle_model_move_resistance(Hash modelHash)
		{
			return invoke<float>(0x5AA3F878A178C4FC, modelHash);
		} // 0x5AA3F878A178C4FC 0x87C5D271  
		static float _get_vehicle_class_max_speed(int vehicleClass)
		{
			return invoke<float>(0x00C09F246ABEDD82, vehicleClass);
		} // 0x00C09F246ABEDD82 0xCE67162C  
		static float get_vehicle_class_max_traction(int vehicleClass)
		{
			return invoke<float>(0xDBC86D85C5059461, vehicleClass);
		} // 0xDBC86D85C5059461 0x5B4FDC16  
		static float get_vehicle_class_max_agility(int vehicleClass)
		{
			return invoke<float>(0x4F930AD022D6DE3B, vehicleClass);
		} // 0x4F930AD022D6DE3B 0x45F2BD83  
		static float get_vehicle_class_max_acceleration(int vehicleClass)
		{
			return invoke<float>(0x2F83E7E45D9EA7AE, vehicleClass);
		} // 0x2F83E7E45D9EA7AE 0x3E220A9B  
		static float get_vehicle_class_max_braking(int vehicleClass)
		{
			return invoke<float>(0x4BF54C16EC8FEC03, vehicleClass);
		} // 0x4BF54C16EC8FEC03 0xD08CC1A5  
		static int _add_speed_zone_for_coord(float x, float y, float z, float radius, float speed, bool p5)
		{
			return invoke<int>(0x2CE544C68FB812A0, x, y, z, radius, speed, p5);
		} // 0x2CE544C68FB812A0 0xD6685803  
		static bool _remove_speed_zone(int speedzone) { return invoke<bool>(0x1033371FC8E842A7, speedzone); }
		// 0x1033371FC8E842A7 0x0C0332A6  
		static void open_bomb_bay_doors(Vehicle vehicle) { invoke<Void>(0x87E7F24270732CB1, vehicle); }
		// 0x87E7F24270732CB1 0x6574041D  
		static void close_bomb_bay_doors(Vehicle vehicle) { invoke<Void>(0x3556041742A0DC74, vehicle); }
		// 0x3556041742A0DC74 0xF8EC5751  
		static bool is_vehicle_searchlight_on(Vehicle vehicle) { return invoke<bool>(0xC0F97FCE55094987, vehicle); }
		// 0xC0F97FCE55094987 0xADAF3513  
		static void set_vehicle_searchlight(Vehicle heli, bool toggle, bool canBeUsedByAI)
		{
			invoke<Void>(0x14E85C5EE7A4D542, heli, toggle, canBeUsedByAI);
		} // 0x14E85C5EE7A4D542 0xE2C0DD8A  
		static bool _0x639431e895b9aa57(Ped ped, Vehicle vehicle, bool p2, bool p3, bool p4)
		{
			return invoke<bool>(0x639431E895B9AA57, ped, vehicle, p2, p3, p4);
		} // 0x639431E895B9AA57 0xAB0E79EB  
		static bool can_shuffle_seat(Vehicle vehicle, Any p1) { return invoke<bool>(0x30785D90C956BF35, vehicle, p1); }
		// 0x30785D90C956BF35 0xB3EB01ED  
		static int get_num_mod_kits(Vehicle vehicle) { return invoke<int>(0x33F2E3FE70EAAE1D, vehicle); }
		// 0x33F2E3FE70EAAE1D 0xE4903AA0  
		static void set_vehicle_mod_kit(Vehicle vehicle, int modKit)
		{
			invoke<Void>(0x1F2AA07F00B3217A, vehicle, modKit);
		} // 0x1F2AA07F00B3217A 0xB8132158  
		static int get_vehicle_mod_kit(Vehicle vehicle) { return invoke<int>(0x6325D1A044AE510D, vehicle); }
		// 0x6325D1A044AE510D 0x9FE60927  
		static int get_vehicle_mod_kit_type(Vehicle vehicle) { return invoke<int>(0xFC058F5121E54C32, vehicle); }
		// 0xFC058F5121E54C32 0xE5F76765  
		static int get_vehicle_wheel_type(Vehicle vehicle) { return invoke<int>(0xB3ED1BFB4BE636DC, vehicle); }
		// 0xB3ED1BFB4BE636DC 0xDA58D7AE  
		static void set_vehicle_wheel_type(Vehicle vehicle, int WheelType)
		{
			invoke<Void>(0x487EB21CC7295BA1, vehicle, WheelType);
		} // 0x487EB21CC7295BA1 0x64BDAAAD  
		static int get_num_mod_colors(int p0, bool p1) { return invoke<int>(0xA551BE18C11A476D, p0, p1); }
		// 0xA551BE18C11A476D 0x73722CD9  
		static void set_vehicle_mod_color_1(Vehicle vehicle, int paintType, int color, int p3)
		{
			invoke<Void>(0x43FEB945EE7F85B8, vehicle, paintType, color, p3);
		} // 0x43FEB945EE7F85B8 0xCBE9A54D  
		static void set_vehicle_mod_color_2(Vehicle vehicle, int paintType, int color)
		{
			invoke<Void>(0x816562BADFDEC83E, vehicle, paintType, color);
		} // 0x816562BADFDEC83E 0xC32613C2  
		static void get_vehicle_mod_color_1(Vehicle vehicle, int* paintType, int* color, int* p3)
		{
			invoke<Void>(0xE8D65CA700C9A693, vehicle, paintType, color, p3);
		} // 0xE8D65CA700C9A693 0xE625510A  
		static void get_vehicle_mod_color_2(Vehicle vehicle, int* paintType, int* color)
		{
			invoke<Void>(0x81592BE4E3878728, vehicle, paintType, color);
		} // 0x81592BE4E3878728 0x9B76BB8E  
		static const char* get_vehicle_mod_color_1_name(Vehicle vehicle, bool p1)
		{
			return invoke<const char*>(0xB45085B721EFD38C, vehicle, p1);
		} // 0xB45085B721EFD38C 0x9A0840FD  
		static const char* get_vehicle_mod_color_2_name(Vehicle vehicle)
		{
			return invoke<const char*>(0x4967A516ED23A5A1, vehicle);
		} // 0x4967A516ED23A5A1 0x9BDC0B49  
		static bool _is_vehicle_mod_load_done(Vehicle vehicle) { return invoke<bool>(0x9A83F5F9963775EF, vehicle); }
		// 0x9A83F5F9963775EF 0x112D637A  
		static void set_vehicle_mod(Vehicle vehicle, int modType, int modIndex, bool customTires)
		{
			invoke<Void>(0x6AF0636DDEDCB6DD, vehicle, modType, modIndex, customTires);
		} // 0x6AF0636DDEDCB6DD 0xB52E5ED5  
		static int get_vehicle_mod(Vehicle vehicle, int modType)
		{
			return invoke<int>(0x772960298DA26FDB, vehicle, modType);
		} // 0x772960298DA26FDB 0xDC520069  
		static bool get_vehicle_mod_variation(Vehicle vehicle, int modType)
		{
			return invoke<bool>(0xB3924ECD70E095DC, vehicle, modType);
		} // 0xB3924ECD70E095DC 0xC1B92003  
		static int get_num_vehicle_mods(Vehicle vehicle, int modType)
		{
			return invoke<int>(0xE38E9162A2500646, vehicle, modType);
		} // 0xE38E9162A2500646 0x8A814FF9  
		static void remove_vehicle_mod(Vehicle vehicle, int modType)
		{
			invoke<Void>(0x92D619E420858204, vehicle, modType);
		} // 0x92D619E420858204 0x9CC80A43  
		static void toggle_vehicle_mod(Vehicle vehicle, int modType, bool toggle)
		{
			invoke<Void>(0x2A1F4F37F95BAD08, vehicle, modType, toggle);
		} // 0x2A1F4F37F95BAD08 0xD095F811  
		static bool is_toggle_mod_on(Vehicle vehicle, int modType)
		{
			return invoke<bool>(0x84B233A8C8FC8AE7, vehicle, modType);
		} // 0x84B233A8C8FC8AE7 0xF0E1689F  
		static const char* get_mod_text_label(Vehicle vehicle, int modType, int modValue)
		{
			return invoke<const char*>(0x8935624F8C5592CC, vehicle, modType, modValue);
		} // 0x8935624F8C5592CC 0x0BA39CA7  
		static const char* get_mod_slot_name(Vehicle vehicle, int modType)
		{
			return invoke<const char*>(0x51F0FEB9F6AE98C0, vehicle, modType);
		} // 0x51F0FEB9F6AE98C0 0x5E113483  
		static const char* get_livery_name(Vehicle vehicle, int liveryIndex)
		{
			return invoke<const char*>(0xB4C7A93837C91A1F, vehicle, liveryIndex);
		} // 0xB4C7A93837C91A1F 0xED80B5BE  
		static float get_vehicle_mod_modifier_value(Vehicle vehicle, int modType, int modIndex)
		{
			return invoke<float>(0x90A38E9838E0A8C1, vehicle, modType, modIndex);
		} // 0x90A38E9838E0A8C1 0x73AE5505  
		static Any _get_vehicle_mod_data(Vehicle vehicle, int modType, int modIndex)
		{
			return invoke<Any>(0x4593CF82AA179706, vehicle, modType, modIndex);
		} // 0x4593CF82AA179706 0x94850968  
		static void preload_vehicle_mod(Any p0, int modType, Any p2)
		{
			invoke<Void>(0x758F49C24925568A, p0, modType, p2);
		} // 0x758F49C24925568A 0x6EA5F4A8  
		static bool has_preload_mods_finished(Any p0) { return invoke<bool>(0x06F43E5175EB6D96, p0); }
		// 0x06F43E5175EB6D96 0xA8A0D246  
		static void release_preload_mods(Vehicle vehicle) { invoke<Void>(0x445D79F995508307, vehicle); }
		// 0x445D79F995508307 0xD442521F  
		static void set_vehicle_tyre_smoke_color(Vehicle vehicle, int r, int g, int b)
		{
			invoke<Void>(0xB5BA80F839791C0F, vehicle, r, g, b);
		} // 0xB5BA80F839791C0F 0x3EDEC0DB  
		static void get_vehicle_tyre_smoke_color(Vehicle vehicle, int* r, int* g, int* b)
		{
			invoke<Void>(0xB635392A4938B3C3, vehicle, r, g, b);
		} // 0xB635392A4938B3C3 0x75280015  
		static void set_vehicle_window_tint(Vehicle vehicle, int tint)
		{
			invoke<Void>(0x57C51E6BAD752696, vehicle, tint);
		} // 0x57C51E6BAD752696 0x497C8787  
		static int get_vehicle_window_tint(Vehicle vehicle) { return invoke<int>(0x0EE21293DAD47C95, vehicle); }
		// 0x0EE21293DAD47C95 0x13D53892  
		static int get_num_vehicle_window_tints() { return invoke<int>(0x9D1224004B3A6707); }
		// 0x9D1224004B3A6707 0x625C7B66  
		static void get_vehicle_color(Vehicle vehicle, int* r, int* g, int* b)
		{
			invoke<Void>(0xF3CC740D36221548, vehicle, r, g, b);
		} // 0xF3CC740D36221548 0x03BC8F1B  
		static int _0xeebfc7a7efdc35b4(Vehicle vehicle) { return invoke<int>(0xEEBFC7A7EFDC35B4, vehicle); }
		// 0xEEBFC7A7EFDC35B4 0x749DEEA2  
		static Hash get_vehicle_cause_of_destruction(Vehicle vehicle)
		{
			return invoke<Hash>(0xE495D1EF4C91FD20, vehicle);
		} // 0xE495D1EF4C91FD20 0x7F8C20DD  
		static bool get_is_left_vehicle_headlight_damaged(Vehicle vehicle)
		{
			return invoke<bool>(0x5EF77C9ADD3B11A3, vehicle);
		} // 0x5EF77C9ADD3B11A3 0xA0777943  
		static bool get_is_right_vehicle_headlight_damaged(Vehicle vehicle)
		{
			return invoke<bool>(0xA7ECB73355EB2F20, vehicle);
		} // 0xA7ECB73355EB2F20 0xF178390B  
		static void _set_vehicle_engine_power_multiplier(Vehicle vehicle, float value)
		{
			invoke<Void>(0x93A3996368C94158, vehicle, value);
		} // 0x93A3996368C94158 0xE943B09C  
		static void _set_vehicle_st(Vehicle vehicle, bool toggle) { invoke<Void>(0x1CF38D529D7441D9, vehicle, toggle); }
		// 0x1CF38D529D7441D9 0xDF594D8D  
		static void _0x1f9fb66f3a3842d2(Vehicle vehicle, bool p1) { invoke<Void>(0x1F9FB66F3A3842D2, vehicle, p1); }
		// 0x1F9FB66F3A3842D2 0x4D840FC4  
		static Any _0x54b0f614960f4a5f(float p0, float p1, float p2, float p3, float p4, float p5, float p6)
		{
			return invoke<Any>(0x54B0F614960F4A5F, p0, p1, p2, p3, p4, p5, p6);
		} // 0x54B0F614960F4A5F 0x5AB26C2B  
		static void _0xe30524e1871f481d(Any p0) { invoke<Void>(0xE30524E1871F481D, p0); }
		// 0xE30524E1871F481D 0xEF05F807  
		static bool _any_passengers_rappeling(Vehicle vehicle) { return invoke<bool>(0x291E373D483E7EE7, vehicle); }
		// 0x291E373D483E7EE7 0xD656E7E5  
		static void _set_vehicle_engine_torque_multiplier(Vehicle vehicle, float value)
		{
			invoke<Void>(0xB59E4BD37AE292DB, vehicle, value);
		} // 0xB59E4BD37AE292DB 0x642DA5AA  
		static void _0x0ad9e8f87ff7c16f(Any p0, bool p1) { invoke<Void>(0x0AD9E8F87FF7C16F, p0, p1); }
		// 0x0AD9E8F87FF7C16F 0x04F5546C  
		static void set_vehicle_is_wanted(Vehicle vehicle, bool state)
		{
			invoke<Void>(0xF7EC25A3EBEEC726, vehicle, state);
		} // 0xF7EC25A3EBEEC726 0xDAA388E8  
		static void _0xf488c566413b4232(Any p0, float p1) { invoke<Void>(0xF488C566413B4232, p0, p1); }
		// 0xF488C566413B4232 0xA25CCB8C  
		static void _0xc1f981a6f74f0c23(Any p0, bool p1) { invoke<Void>(0xC1F981A6F74F0C23, p0, p1); }
		// 0xC1F981A6F74F0C23 0x00966934  
		static void _0x0f3b4d4e43177236(Any p0, bool p1) { invoke<Void>(0x0F3B4D4E43177236, p0, p1); }
		// 0x0F3B4D4E43177236 0x113DF5FD  
		static float _0x6636c535f6cc2725(Vehicle vehicle) { return invoke<float>(0x6636C535F6CC2725, vehicle); }
		// 0x6636C535F6CC2725 0x7C8D6464  
		static void disable_plane_aileron(Vehicle vehicle, bool p1, bool p2)
		{
			invoke<Void>(0x23428FC53C60919C, vehicle, p1, p2);
		} // 0x23428FC53C60919C 0x7E84C45C  
		static bool get_is_vehicle_engine_running(Vehicle vehicle) { return invoke<bool>(0xAE31E7DF9B5B132E, vehicle); }
		// 0xAE31E7DF9B5B132E 0x7DC6D022  
		static void _0x1d97d1e3a70a649f(Vehicle vehicle, bool p1) { invoke<Void>(0x1D97D1E3A70A649F, vehicle, p1); }
		// 0x1D97D1E3A70A649F 0xA03E42DF  
		static void _set_bike_lean_angle(Vehicle vehicle, float x, float y)
		{
			invoke<Void>(0x9CFA4896C3A53CBB, vehicle, x, y);
		} // 0x9CFA4896C3A53CBB 0x15D40761  
		static void _0xab04325045427aae(Vehicle vehicle, bool p1) { invoke<Void>(0xAB04325045427AAE, vehicle, p1); }
		// 0xAB04325045427AAE 0x1984F88D  
		static void _0xcfd778e7904c255e(Vehicle vehicle) { invoke<Void>(0xCFD778E7904C255E, vehicle); }
		// 0xCFD778E7904C255E 0x3FBE904F  
		static void set_last_driven_vehicle(Vehicle vehicle) { invoke<Void>(0xACFB2463CC22BED2, vehicle); }
		// 0xACFB2463CC22BED2 0xD1B71A25  
		static Vehicle get_last_driven_vehicle() { return invoke<Vehicle>(0xB2D06FAEDE65B577); }
		// 0xB2D06FAEDE65B577 0xFEB0C0C8  
		static void _0xe01903c47c7ac89e() { invoke<Void>(0xE01903C47C7AC89E); } // 0xE01903C47C7AC89E  
		static void _0x02398b627547189c(Vehicle p0, bool p1) { invoke<Void>(0x02398B627547189C, p0, p1); }
		// 0x02398B627547189C 0x08CD58F9  
		static void _set_plane_min_height_above_terrain(Vehicle plane, int height)
		{
			invoke<Void>(0xB893215D8D4C015B, plane, height);
		} // 0xB893215D8D4C015B 0x8C4B63E2  
		static void set_vehicle_lod_multiplier(Vehicle vehicle, float multiplier)
		{
			invoke<Void>(0x93AE6A61BE015BF1, vehicle, multiplier);
		} // 0x93AE6A61BE015BF1 0x569E5AE3  
		static void _0x428baccdf5e26ead(Vehicle vehicle, bool p1) { invoke<Void>(0x428BACCDF5E26EAD, vehicle, p1); }
		// 0x428BACCDF5E26EAD 0x1604C2F5  
		static Any _0x42a4beb35d372407(Any p0) { return invoke<Any>(0x42A4BEB35D372407, p0); }
		// 0x42A4BEB35D372407 0x8CDB0C09  
		static Any _0x2c8cbfe1ea5fc631(Any p0) { return invoke<Any>(0x2C8CBFE1EA5FC631, p0); }
		// 0x2C8CBFE1EA5FC631 0xABC99E21  
		static void _0x4d9d109f63fee1d4(Any p0, bool p1) { invoke<Void>(0x4D9D109F63FEE1D4, p0, p1); }
		// 0x4D9D109F63FEE1D4 0x900C878C  
		static void _0x279d50de5652d935(Any p0, bool p1) { invoke<Void>(0x279D50DE5652D935, p0, p1); }
		// 0x279D50DE5652D935 0xB3200F72  
		static void _0xe44a982368a4af23(Vehicle vehicle, Vehicle vehicle2)
		{
			invoke<Void>(0xE44A982368A4AF23, vehicle, vehicle2);
		} // 0xE44A982368A4AF23 0xBAE491C7  
		static void _0xf25e02cb9c5818f8() { invoke<Void>(0xF25E02CB9C5818F8); } // 0xF25E02CB9C5818F8 0xF0E59BC1  
		static void _0xbc3cca5844452b06(float p0) { invoke<Void>(0xBC3CCA5844452B06, p0); }
		// 0xBC3CCA5844452B06 0x929801C6  
		static void set_vehicle_shoot_at_target(Ped driver, Entity entity, float xTarget, float yTarget, float zTarget)
		{
			invoke<Void>(0x74CD9A9327A282EA, driver, entity, xTarget, yTarget, zTarget);
		} // 0x74CD9A9327A282EA 0x2343FFDF  
		static bool _get_vehicle_owner(Vehicle vehicle, Entity* entity)
		{
			return invoke<bool>(0x8F5EBAB1F260CFCE, vehicle, entity);
		} // 0x8F5EBAB1F260CFCE 0x4A557117  
		static void set_force_hd_vehicle(Vehicle vehicle, bool toggle)
		{
			invoke<Void>(0x97CE68CB032583F0, vehicle, toggle);
		} // 0x97CE68CB032583F0 0xE0FC6A32  
		static void _0x182f266c2d9e2beb(Vehicle vehicle, float p1) { invoke<Void>(0x182F266C2D9E2BEB, vehicle, p1); }
		// 0x182F266C2D9E2BEB 0x7D0DE7EA  
		static int get_vehicle_plate_type(Vehicle vehicle) { return invoke<int>(0x9CCC9525BF2408E0, vehicle); }
		// 0x9CCC9525BF2408E0 0x65CA9286  
		static void track_vehicle_visibility(Vehicle vehicle) { invoke<Void>(0x64473AEFDCF47DCA, vehicle); }
		// 0x64473AEFDCF47DCA 0x78122DC1  
		static bool is_vehicle_visible(Vehicle vehicle) { return invoke<bool>(0xAA0A52D24FB98293, vehicle); }
		// 0xAA0A52D24FB98293 0x7E0D6056  
		static void set_vehicle_gravity(Vehicle vehicle, bool toggle)
		{
			invoke<Void>(0x89F149B6131E57DA, vehicle, toggle);
		} // 0x89F149B6131E57DA 0x07B2A6DC  
		static void _0xe6c0c80b8c867537(bool p0) { invoke<Void>(0xE6C0C80B8C867537, p0); }
		// 0xE6C0C80B8C867537 0xD2B8ACBD  
		static Any _0x36492c2f0d134c56(Any p0) { return invoke<Any>(0x36492C2F0D134C56, p0); }
		// 0x36492C2F0D134C56 0xA4A75FCF  
		static void _0x06582aff74894c75(Vehicle vehicle, bool p1) { invoke<Void>(0x06582AFF74894C75, vehicle, p1); }
		// 0x06582AFF74894C75 0x50F89338  
		static void _0xdffcef48e511db48(Any p0, bool p1) { invoke<Void>(0xDFFCEF48E511DB48, p0, p1); }
		// 0xDFFCEF48E511DB48 0xEB7D7C27  
		static bool _is_vehicle_shop_respray_allowed(Vehicle vehicle)
		{
			return invoke<bool>(0x8D474C8FAEFF6CDE, vehicle);
		} // 0x8D474C8FAEFF6CDE 0x5EB00A6A  
		static void set_vehicle_engine_can_degrade(Vehicle vehicle, bool toggle)
		{
			invoke<Void>(0x983765856F2564F9, vehicle, toggle);
		} // 0x983765856F2564F9 0x081DAC12  
		static void _0xf0e4ba16d1db546c(Vehicle vehicle, int p1, int p2)
		{
			invoke<Void>(0xF0E4BA16D1DB546C, vehicle, p1, p2);
		} // 0xF0E4BA16D1DB546C 0x5BD8D82D  
		static void _0xf87d9f2301f7d206(Any p0) { invoke<Void>(0xF87D9F2301F7D206, p0); }
		// 0xF87D9F2301F7D206 0x450AD03A  
		static bool _vehicle_has_landing_gear(Vehicle vehicle) { return invoke<bool>(0x4198AB0022B15F87, vehicle); }
		// 0x4198AB0022B15F87 0xBD085DCA  
		static bool _are_propellers_undamaged(Vehicle vehicle) { return invoke<bool>(0x755D6D5267CBBD7E, vehicle); }
		// 0x755D6D5267CBBD7E 0xABBDD5C6  
		static void _0x0cdda42f9e360ca6(Vehicle vehicle, bool p1) { invoke<Void>(0x0CDDA42F9E360CA6, vehicle, p1); }
		// 0x0CDDA42F9E360CA6 0x9B581DE7  
		static bool is_vehicle_stolen(Vehicle vehicle) { return invoke<bool>(0x4AF9BD80EEBEB453, vehicle); }
		// 0x4AF9BD80EEBEB453 0x20B61DDE  
		static void set_vehicle_is_stolen(Vehicle vehicle, bool isStolen)
		{
			invoke<Void>(0x67B2C79AA7FF5738, vehicle, isStolen);
		} // 0x67B2C79AA7FF5738 0x70912E42  
		static void _0xad2d28a1afdff131(Vehicle vehicle, float value)
		{
			invoke<Void>(0xAD2D28A1AFDFF131, vehicle, value);
		} // 0xAD2D28A1AFDFF131 0xED159AE6  
		static bool _are_vehicle_wings_intact(Vehicle vehicle) { return invoke<bool>(0x5991A01434CE9677, vehicle); }
		// 0x5991A01434CE9677 0xAF8CB3DF  
		static void _0xb264c4d2f2b0a78b(Vehicle vehicle) { invoke<Void>(0xB264C4D2F2B0A78B, vehicle); }
		// 0xB264C4D2F2B0A78B 0x45F72495  
		static void detach_vehicle_from_cargobob(Vehicle vehicle, Vehicle cargobob)
		{
			invoke<Void>(0x0E21D3DF1051399D, vehicle, cargobob);
		} // 0x0E21D3DF1051399D 0x83D3D331  
		static bool detach_vehicle_from_any_cargobob(Vehicle vehicle)
		{
			return invoke<bool>(0xADF7BE450512C12F, vehicle);
		} // 0xADF7BE450512C12F 0x50E0EABE  
		static bool is_vehicle_attached_to_cargobob(Vehicle cargobob, Vehicle vehicleAttached)
		{
			return invoke<bool>(0xD40148F22E81A1D9, cargobob, vehicleAttached);
		} // 0xD40148F22E81A1D9 0x5DEEC76C  
		static Vehicle get_vehicle_attached_to_cargobob(Vehicle cargobob)
		{
			return invoke<Vehicle>(0x873B82D42AC2B9E5, cargobob);
		} // 0x873B82D42AC2B9E5 0x301A1D24  
		static void attach_vehicle_to_cargobob(Vehicle vehicle, Vehicle cargobob, int p2, float x, float y, float z)
		{
			invoke<Void>(0x4127F1D84E347769, vehicle, cargobob, p2, x, y, z);
		} // 0x4127F1D84E347769 0x607DC9D5  
		static void _0x571feb383f629926(Vehicle cargobob, bool p1) { invoke<Void>(0x571FEB383F629926, cargobob, p1); }
		// 0x571FEB383F629926  
		static Vector3 _get_cargobob_hook_position(Vehicle cargobob)
		{
			return invoke<Vector3>(0xCBDB9B923CACC92D, cargobob);
		} // 0xCBDB9B923CACC92D  
		static bool does_cargobob_have_pick_up_rope(Vehicle cargobob)
		{
			return invoke<bool>(0x1821D91AD4B56108, cargobob);
		} // 0x1821D91AD4B56108 0xAF769B81  
		static void create_pick_up_rope_for_cargobob(Vehicle cargobob, int state)
		{
			invoke<Void>(0x7BEB0C7A235F6F3B, cargobob, state);
		} // 0x7BEB0C7A235F6F3B 0x4D3C9A99  
		static void remove_pick_up_rope_for_cargobob(Vehicle cargobob) { invoke<Void>(0x9768CF648F54C804, cargobob); }
		// 0x9768CF648F54C804 0xA8211EE9  
		static void _set_cargobob_hook_position(Any p0, float p1, float p2, int state)
		{
			invoke<Void>(0x877C1EAEAC531023, p0, p1, p2, state);
		} // 0x877C1EAEAC531023 0x3A8AB081  
		static void _0xcf1182f682f65307(Any p0, Player p1) { invoke<Void>(0xCF1182F682F65307, p0, p1); }
		// 0xCF1182F682F65307  
		static bool _does_cargobob_have_pickup_magnet(Vehicle cargobob)
		{
			return invoke<bool>(0x6E08BF5B3722BAC9, cargobob);
		} // 0x6E08BF5B3722BAC9  
		static void _set_cargobob_pickup_magnet_active(Vehicle cargobob, bool isActive)
		{
			invoke<Void>(0x9A665550F8DA349B, cargobob, isActive);
		} // 0x9A665550F8DA349B  
		static void _set_cargobob_pickup_magnet_strength(Vehicle cargobob, float strength)
		{
			invoke<Void>(0xBCBFCD9D1DAC19E2, cargobob, strength);
		} // 0xBCBFCD9D1DAC19E2  
		static void _0xa17bad153b51547e(Vehicle cargobob, float p1) { invoke<Void>(0xA17BAD153B51547E, cargobob, p1); }
		// 0xA17BAD153B51547E  
		static void _0x66979acf5102fd2f(Vehicle cargobob, float p1) { invoke<Void>(0x66979ACF5102FD2F, cargobob, p1); }
		// 0x66979ACF5102FD2F  
		static void _0x6d8eac07506291fb(Vehicle cargobob, float p1) { invoke<Void>(0x6D8EAC07506291FB, cargobob, p1); }
		// 0x6D8EAC07506291FB  
		static void _0xed8286f71a819baa(Vehicle cargobob, float p1) { invoke<Void>(0xED8286F71A819BAA, cargobob, p1); }
		// 0xED8286F71A819BAA  
		static void _0x685d5561680d088b(Vehicle vehicle, float p1) { invoke<Void>(0x685D5561680D088B, vehicle, p1); }
		// 0x685D5561680D088B  
		static void _0xe301bd63e9e13cf0(Vehicle vehicle, Vehicle cargobob)
		{
			invoke<Void>(0xE301BD63E9E13CF0, vehicle, cargobob);
		} // 0xE301BD63E9E13CF0  
		static void _0x9bddc73cc6a115d4(Vehicle vehicle, bool p1, bool p2)
		{
			invoke<Void>(0x9BDDC73CC6A115D4, vehicle, p1, p2);
		} // 0x9BDDC73CC6A115D4  
		static void _0x56eb5e94318d3fb6(Vehicle vehicle, bool p1) { invoke<Void>(0x56EB5E94318D3FB6, vehicle, p1); }
		// 0x56EB5E94318D3FB6  
		static bool does_vehicle_have_weapons(Vehicle vehicle) { return invoke<bool>(0x25ECB9F8017D98E0, vehicle); }
		// 0x25ECB9F8017D98E0 0xB2E1E1FB  
		static void _0x2c4a1590abf43e8b(Vehicle vehicle, bool p1) { invoke<Void>(0x2C4A1590ABF43E8B, vehicle, p1); }
		// 0x2C4A1590ABF43E8B 0x2EC19A8B  
		static void disable_vehicle_weapon(bool disabled, Hash weaponHash, Vehicle vehicle, Ped owner)
		{
			invoke<Void>(0xF4FC6A6F67D8D856, disabled, weaponHash, vehicle, owner);
		} // 0xF4FC6A6F67D8D856 0xA688B7D1  
		static void _0xe05dd0e9707003a3(Any p0, bool p1) { invoke<Void>(0xE05DD0E9707003A3, p0, p1); }
		// 0xE05DD0E9707003A3 0x123E5B90  
		static void _0x21115bcd6e44656a(Any p0, bool p1) { invoke<Void>(0x21115BCD6E44656A, p0, p1); }
		// 0x21115BCD6E44656A 0xEBC225C1  
		static int get_vehicle_class(Vehicle vehicle) { return invoke<int>(0x29439776AAA00A62, vehicle); }
		// 0x29439776AAA00A62 0xC025338E  
		static int get_vehicle_class_from_name(Hash modelHash) { return invoke<int>(0xDEDF1C8BD47C2200, modelHash); }
		// 0xDEDF1C8BD47C2200 0xEA469980  
		static void set_players_last_vehicle(Vehicle vehicle) { invoke<Void>(0xBCDF8BAF56C87B6A, vehicle); }
		// 0xBCDF8BAF56C87B6A 0xDE86447D  
		static void set_vehicle_can_be_used_by_fleeing_peds(Vehicle vehicle, bool toggle)
		{
			invoke<Void>(0x300504B23BD3B711, vehicle, toggle);
		} // 0x300504B23BD3B711 0x5130DB1E  
		static void _0xe5810ac70602f2f5(Vehicle vehicle, float p1) { invoke<Void>(0xE5810AC70602F2F5, vehicle, p1); }
		// 0xE5810AC70602F2F5 0xB6BE07E0  
		static void _set_vehicle_creates_money_pickups_when_exploded(Vehicle vehicle, bool toggle)
		{
			invoke<Void>(0x068F64F2470F9656, vehicle, toggle);
		} // 0x068F64F2470F9656 0x4BB5605D  
		static void _set_vehicle_jet_engine_on(Vehicle vehicle, bool toggle)
		{
			invoke<Void>(0xB8FBC8B1330CA9B4, vehicle, toggle);
		} // 0xB8FBC8B1330CA9B4 0x51E0064F  
		static void _0x10655fab9915623d(Any p0, Any p1) { invoke<Void>(0x10655FAB9915623D, p0, p1); }
		// 0x10655FAB9915623D  
		static void _0x79df7e806202ce01(Any p0, Any p1) { invoke<Void>(0x79DF7E806202CE01, p0, p1); }
		// 0x79DF7E806202CE01 0xAEF9611C  
		static void _0x9007a2f21dc108d4(Any p0, float p1) { invoke<Void>(0x9007A2F21DC108D4, p0, p1); }
		// 0x9007A2F21DC108D4 0x585E49B6  
		static void _set_helicopter_roll_pitch_yaw_mult(Vehicle helicopter, float multiplier)
		{
			invoke<Void>(0x6E0859B530A365CC, helicopter, multiplier);
		} // 0x6E0859B530A365CC 0x6E67FD35  
		static void set_vehicle_friction_override(Vehicle vehicle, float friction)
		{
			invoke<Void>(0x1837AF7C627009BA, vehicle, friction);
		} // 0x1837AF7C627009BA 0x32AFD42E  
		static void set_vehicle_wheels_can_break_off_when_blow_up(Vehicle vehicle, bool toggle)
		{
			invoke<Void>(0xA37B9A517B133349, vehicle, toggle);
		} // 0xA37B9A517B133349 0x670913A4  
		static bool _0xf78f94d60248c737(Any p0, bool p1) { return invoke<bool>(0xF78F94D60248C737, p0, p1); }
		// 0xF78F94D60248C737  
		static void set_vehicle_ceiling_height(Vehicle vehicle, float p1)
		{
			invoke<Void>(0xA46413066687A328, vehicle, p1);
		} // 0xA46413066687A328 0x98A10A86  
		static void _0x5e569ec46ec21cae(Vehicle vehicle, bool toggle)
		{
			invoke<Void>(0x5E569EC46EC21CAE, vehicle, toggle);
		} // 0x5E569EC46EC21CAE 0xBC649C49  
		static void _0x6d6af961b72728ae(Vehicle vehicle) { invoke<Void>(0x6D6AF961B72728AE, vehicle); }
		// 0x6D6AF961B72728AE 0x8DD9AA0C  
		static bool does_vehicle_exist_with_decorator(const char* decorator)
		{
			return invoke<bool>(0x956B409B984D9BF7, decorator);
		} // 0x956B409B984D9BF7 0x39E68EDD  
		static void set_vehicle_exclusive_driver(Vehicle vehicle, Ped ped)
		{
			invoke<Void>(0x41062318F23ED854, vehicle, ped);
		} // 0x41062318F23ED854 0xAA8BD440  
		static void _set_vehicle_exclusive_driver_2(Vehicle vehicle, Ped ped, int p2)
		{
			invoke<Void>(0xB5C51B5502E85E83, vehicle, ped, p2);
		} // 0xB5C51B5502E85E83  
		static void _0x500873a45724c863(Vehicle vehicle, Any p1) { invoke<Void>(0x500873A45724C863, vehicle, p1); }
		// 0x500873A45724C863  
		static void _0xb055a34527cb8fd7(Vehicle vehicle, bool p1) { invoke<Void>(0xB055A34527CB8FD7, vehicle, p1); }
		// 0xB055A34527CB8FD7  
		static void _display_distant_vehicles(bool toggle) { invoke<Void>(0xF796359A959DF65D, toggle); }
		// 0xF796359A959DF65D 0xB5CC548B  
		static void _set_vehicle_neon_lights_colour(Vehicle vehicle, int r, int g, int b)
		{
			invoke<Void>(0x8E0A582209A62695, vehicle, r, g, b);
		} // 0x8E0A582209A62695  
		static void _get_vehicle_neon_lights_colour(Vehicle vehicle, int* r, int* g, int* b)
		{
			invoke<Void>(0x7619EEE8C886757F, vehicle, r, g, b);
		} // 0x7619EEE8C886757F  
		static void _set_vehicle_neon_light_enabled(Vehicle vehicle, int index, bool toggle)
		{
			invoke<Void>(0x2AA720E4287BF269, vehicle, index, toggle);
		} // 0x2AA720E4287BF269  
		static bool _is_vehicle_neon_light_enabled(Vehicle vehicle, int index)
		{
			return invoke<bool>(0x8C4B92553E4766A5, vehicle, index);
		} // 0x8C4B92553E4766A5  
		static void _0x35e0654f4bad7971(bool p0) { invoke<Void>(0x35E0654F4BAD7971, p0); } // 0x35E0654F4BAD7971  
		static void _0xb088e9a47ae6edd5(Vehicle vehicle, bool p1) { invoke<Void>(0xB088E9A47AE6EDD5, vehicle, p1); }
		// 0xB088E9A47AE6EDD5  
		static void _0xdba3c090e3d74690(Vehicle vehicle) { invoke<Void>(0xDBA3C090E3D74690, vehicle); }
		// 0xDBA3C090E3D74690  
		static float get_vehicle_body_health(Vehicle vehicle) { return invoke<float>(0xF271147EB7B40F12, vehicle); }
		// 0xF271147EB7B40F12 0x2B2FCC28  
		static void set_vehicle_body_health(Vehicle vehicle, float value)
		{
			invoke<Void>(0xB77D05AC8C78AADB, vehicle, value);
		} // 0xB77D05AC8C78AADB 0x920C2517  
		static void _0xdf7e3eeb29642c38(Vehicle vehicle, Vector3* out1, Vector3* out2)
		{
			invoke<Void>(0xDF7E3EEB29642C38, vehicle, out1, out2);
		} // 0xDF7E3EEB29642C38  
		static float _get_vehicle_suspension_height(Vehicle vehicle)
		{
			return invoke<float>(0x53952FD2BAA19F17, vehicle);
		} // 0x53952FD2BAA19F17 0xB73A1486  
		static void _set_car_high_speed_bump_severity_multiplier(float multiplier)
		{
			invoke<Void>(0x84FD40F56075E816, multiplier);
		} // 0x84FD40F56075E816  
		static void _0xa7dcdf4ded40a8f4(Vehicle vehicle, bool p1) { invoke<Void>(0xA7DCDF4DED40A8F4, vehicle, p1); }
		// 0xA7DCDF4DED40A8F4  
		static float _get_vehicle_body_health_2(Vehicle vehicle) { return invoke<float>(0xB8EF61207C2393A9, vehicle); }
		// 0xB8EF61207C2393A9  
		static bool _0xd4c4642cb7f50b5d(Vehicle vehicle) { return invoke<bool>(0xD4C4642CB7F50B5D, vehicle); }
		// 0xD4C4642CB7F50B5D  
		static void _0xc361aa040d6637a8(Vehicle vehicle, bool p1) { invoke<Void>(0xC361AA040D6637A8, vehicle, p1); }
		// 0xC361AA040D6637A8  
		static void _set_vehicle_hud_special_ability_bar_active(Vehicle vehicle, bool active)
		{
			invoke<Void>(0x99C82F8A139F3E4E, vehicle, active);
		} // 0x99C82F8A139F3E4E  
		static void _0xe16142b94664defd(Vehicle vehicle, bool p1) { invoke<Void>(0xE16142B94664DEFD, vehicle, p1); }
		// 0xE16142B94664DEFD  
	}

	namespace object
	{
		static Object create_object(Object modelHash, float x, float y, float z, bool isNetwork, bool thisScriptCheck,
			bool dynamic)
		{
			return invoke<Object>(0x509D5878EB39E842, modelHash, x, y, z, isNetwork, thisScriptCheck, dynamic);
		} // 0x509D5878EB39E842 0x2F7AA05C  
		static Object create_object_no_offset(Hash modelHash, float x, float y, float z, bool isNetwork,
			bool thisScriptCheck, bool dynamic)
		{
			return invoke<Object>(0x9A294B2138ABB884, modelHash, x, y, z, isNetwork, thisScriptCheck, dynamic);
		} // 0x9A294B2138ABB884 0x58040420  
		static void delete_object(Object* object) { invoke<Void>(0x539E0AE3E6634B9F, object); }
		// 0x539E0AE3E6634B9F 0xD6EF9DA7  
		static bool place_object_on_ground_properly(Object object) { return invoke<bool>(0x58A850EAEE20FAA3, object); }
		// 0x58A850EAEE20FAA3 0x8F95A20B  
		static bool slide_object(Object object, float toX, float toY, float toZ, float speedX, float speedY,
			float speedZ, bool collision)
		{
			return invoke<bool>(0x2FDFF4107B8C1147, object, toX, toY, toZ, speedX, speedY, speedZ, collision);
		} // 0x2FDFF4107B8C1147 0x63BFA7A0  
		static void set_object_targettable(Object object, bool targettable)
		{
			invoke<Void>(0x8A7391690F5AFD81, object, targettable);
		} // 0x8A7391690F5AFD81 0x3F88CD86  
		static void _set_object_something(Object object, bool p1) { invoke<Void>(0x77F33F2CCF64B3AA, object, p1); }
		// 0x77F33F2CCF64B3AA 0x483C5C88  
		static Object get_closest_object_of_type(float x, float y, float z, float radius, Hash modelHash,
			bool isMission, bool p6, bool p7)
		{
			return invoke<Object>(0xE143FA2249364369, x, y, z, radius, modelHash, isMission, p6, p7);
		} // 0xE143FA2249364369 0x45619B33  
		static bool has_object_been_broken(Object object) { return invoke<bool>(0x8ABFB70C49CC43E2, object); }
		// 0x8ABFB70C49CC43E2 0xFE21F891  
		static bool has_closest_object_of_type_been_broken(float p0, float p1, float p2, float p3, Hash modelHash,
			Any p5)
		{
			return invoke<bool>(0x761B0E69AC4D007E, p0, p1, p2, p3, modelHash, p5);
		} // 0x761B0E69AC4D007E 0x6FC0353D  
		static bool _0x46494a2475701343(float p0, float p1, float p2, float p3, Hash modelHash, bool p5)
		{
			return invoke<bool>(0x46494A2475701343, p0, p1, p2, p3, modelHash, p5);
		} // 0x46494A2475701343 0x7DB578DD  
		static Vector3 _get_object_offset_from_coords(float xPos, float yPos, float zPos, float heading, float xOffset,
			float yOffset, float zOffset)
		{
			return invoke<Vector3>(0x163E252DE035A133, xPos, yPos, zPos, heading, xOffset, yOffset, zOffset);
		} // 0x163E252DE035A133 0x87A42A12  
		static Any _0x163f8b586bc95f2a(Any coords, float radius, Hash modelHash, float x, float y, float z, Vector3* p6,
			int p7)
		{
			return invoke<Any>(0x163F8B586BC95F2A, coords, radius, modelHash, x, y, z, p6, p7);
		} // 0x163F8B586BC95F2A 0x65213FC3  
		static void set_state_of_closest_door_of_type(Hash type, float x, float y, float z, bool locked, float heading,
			bool p6)
		{
			invoke<Void>(0xF82D8F1926A02C3D, type, x, y, z, locked, heading, p6);
		} // 0xF82D8F1926A02C3D 0x38C951A4  
		static void get_state_of_closest_door_of_type(Hash type, float x, float y, float z, bool* locked,
			float* heading)
		{
			invoke<Void>(0xEDC1A5B84AEF33FF, type, x, y, z, locked, heading);
		} // 0xEDC1A5B84AEF33FF 0x4B44A83D  
		static void _door_control(Hash doorHash, float x, float y, float z, bool locked, float xRotMult, float yRotMult,
			float zRotMult)
		{
			invoke<Void>(0x9B12F9A24FABEDB0, doorHash, x, y, z, locked, xRotMult, yRotMult, zRotMult);
		} // 0x9B12F9A24FABEDB0 0x4E0A260B  
		static void add_door_to_system(Hash doorHash, Hash modelHash, float x, float y, float z, bool p5, bool p6,
			bool p7)
		{
			invoke<Void>(0x6F8838D03D1DC226, doorHash, modelHash, x, y, z, p5, p6, p7);
		} // 0x6F8838D03D1DC226 0x9D2D778D  
		static void remove_door_from_system(Hash doorHash) { invoke<Void>(0x464D8E1427156FE4, doorHash); }
		// 0x464D8E1427156FE4 0x00253286  
		static void _set_door_acceleration_limit(Hash doorHash, int limit, bool p2, bool p3)
		{
			invoke<Void>(0x6BAB9442830C7F53, doorHash, limit, p2, p3);
		} // 0x6BAB9442830C7F53 0xDF83DB47  
		static int _0x160aa1b32f6139b8(Hash doorHash) { return invoke<int>(0x160AA1B32F6139B8, doorHash); }
		// 0x160AA1B32F6139B8 0xD42A41C2  
		static int _0x4bc2854478f3a749(Hash doorHash) { return invoke<int>(0x4BC2854478F3A749, doorHash); }
		// 0x4BC2854478F3A749 0xD649B7E1  
		static void _0x03c27e13b42a0e82(Hash doorHash, float p1, bool p2, bool p3)
		{
			invoke<Void>(0x03C27E13B42A0E82, doorHash, p1, p2, p3);
		} // 0x03C27E13B42A0E82 0x4F44AF21  
		static void _0x9ba001cb45cbf627(Hash doorHash, float heading, bool p2, bool p3)
		{
			invoke<Void>(0x9BA001CB45CBF627, doorHash, heading, p2, p3);
		} // 0x9BA001CB45CBF627 0x47531446  
		static void _set_door_ajar_angle(Hash doorHash, float ajar, bool p2, bool p3)
		{
			invoke<Void>(0xB6E6FBA95C7324AC, doorHash, ajar, p2, p3);
		} // 0xB6E6FBA95C7324AC 0x34883DE3  
		static float _0x65499865fca6e5ec(Hash doorHash) { return invoke<float>(0x65499865FCA6E5EC, doorHash); }
		// 0x65499865FCA6E5EC 0xB74C3BD7  
		static void _0xc485e07e4f0b7958(Hash doorHash, bool p1, bool p2, bool p3)
		{
			invoke<Void>(0xC485E07E4F0B7958, doorHash, p1, p2, p3);
		} // 0xC485E07E4F0B7958 0xB4A9A558  
		static void _0xd9b71952f78a2640(Hash doorHash, bool p1) { invoke<Void>(0xD9B71952F78A2640, doorHash, p1); }
		// 0xD9B71952F78A2640 0xECE58AE0  
		static void _0xa85a21582451e951(Hash doorHash, bool p1) { invoke<Void>(0xA85A21582451E951, doorHash, p1); }
		// 0xA85A21582451E951 0xF736227C  
		static bool _does_door_exist(Hash doorHash) { return invoke<bool>(0xC153C43EA202C8C1, doorHash); }
		// 0xC153C43EA202C8C1 0x5AFCD8A1  
		static bool is_door_closed(Hash door) { return invoke<bool>(0xC531EE8A1145A149, door); }
		// 0xC531EE8A1145A149 0x48659CD7  
		static void _0xc7f29ca00f46350e(bool p0) { invoke<Void>(0xC7F29CA00F46350E, p0); }
		// 0xC7F29CA00F46350E 0x9BF33E41  
		static void _0x701fda1e82076ba4() { invoke<Void>(0x701FDA1E82076BA4); } // 0x701FDA1E82076BA4 0xF592AD10  
		static bool _0xdf97cdd4fc08fd34(Any p0) { return invoke<bool>(0xDF97CDD4FC08FD34, p0); }
		// 0xDF97CDD4FC08FD34 0x17FF9393  
		static bool _0x589f80b325cc82c5(float p0, float p1, float p2, Any p3, Any* p4)
		{
			return invoke<bool>(0x589F80B325CC82C5, p0, p1, p2, p3, p4);
		} // 0x589F80B325CC82C5 0xE9AE494F  
		static bool is_garage_empty(Any garage, bool p1, int p2)
		{
			return invoke<bool>(0x90E47239EA1980B8, garage, p1, p2);
		} // 0x90E47239EA1980B8 0xA8B37DEA  
		static bool _0x024a60deb0ea69f0(Any p0, Player player, float p2, int p3)
		{
			return invoke<bool>(0x024A60DEB0EA69F0, p0, player, p2, p3);
		} // 0x024A60DEB0EA69F0 0xC33ED360  
		static bool _0x1761dc5d8471cbaa(Any p0, Player player, int p2)
		{
			return invoke<bool>(0x1761DC5D8471CBAA, p0, player, p2);
		} // 0x1761DC5D8471CBAA 0x41924877  
		static bool _0x85b6c850546fdde2(Any p0, bool p1, bool p2, bool p3, Any p4)
		{
			return invoke<bool>(0x85B6C850546FDDE2, p0, p1, p2, p3, p4);
		} // 0x85B6C850546FDDE2 0x4BD59750  
		static bool _0x673ed815d6e323b7(Any p0, bool p1, bool p2, bool p3, Any p4)
		{
			return invoke<bool>(0x673ED815D6E323B7, p0, p1, p2, p3, p4);
		} // 0x673ED815D6E323B7 0x7B44D659  
		static bool _0x372ef6699146a1e4(Any p0, Entity entity, float p2, int p3)
		{
			return invoke<bool>(0x372EF6699146A1E4, p0, entity, p2, p3);
		} // 0x372EF6699146A1E4 0x142C8F76  
		static bool _0xf0eed5a6bc7b237a(Any p0, Entity entity, int p2)
		{
			return invoke<bool>(0xF0EED5A6BC7B237A, p0, entity, p2);
		} // 0xF0EED5A6BC7B237A 0x95A9AB2B  
		static void _0x190428512b240692(Any p0, bool p1, bool p2, bool p3, bool p4)
		{
			invoke<Void>(0x190428512B240692, p0, p1, p2, p3, p4);
		} // 0x190428512B240692 0xA565E27E  
		static void _0xf2e1a7133dd356a6(Hash hash, bool toggle) { invoke<Void>(0xF2E1A7133DD356A6, hash, toggle); }
		// 0xF2E1A7133DD356A6 0x43BB7E48  
		static void _0x66a49d021870fe88() { invoke<Void>(0x66A49D021870FE88); } // 0x66A49D021870FE88 0x6158959E  
		static bool does_object_of_type_exist_at_coords(float x, float y, float z, float radius, Hash hash, bool p5)
		{
			return invoke<bool>(0xBFA48E2FF417213F, x, y, z, radius, hash, p5);
		} // 0xBFA48E2FF417213F 0x23FF2BA4  
		static bool is_point_in_angled_area(float p0, float p1, float p2, float p3, float p4, float p5, float p6,
			float p7, float p8, float p9, bool p10, bool p11)
		{
			return invoke<bool>(0x2A70BAE8883E4C81, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11);
		} // 0x2A70BAE8883E4C81 0x73BCFFDC  
		static void _0x4d89d607cb3dd1d2(Object object, bool toggle)
		{
			invoke<Void>(0x4D89D607CB3DD1D2, object, toggle);
		} // 0x4D89D607CB3DD1D2 0x19B17769  
		static void set_object_physics_params(Object object, float weight, float p2, float p3, float p4, float p5,
			float gravity, float p7, float p8, float p9, float p10, float buoyancy)
		{
			invoke<Void>(0xF6DF6E90DE7DF90F, object, weight, p2, p3, p4, p5, gravity, p7, p8, p9, p10, buoyancy);
		} // 0xF6DF6E90DE7DF90F 0xE8D11C58  
		static float get_object_fragment_damage_health(Any p0, bool p1)
		{
			return invoke<float>(0xB6FBFD079B8D0596, p0, p1);
		} // 0xB6FBFD079B8D0596 0xF0B330AD  
		static void set_activate_object_physics_as_soon_as_it_is_unfrozen(Object object, bool toggle)
		{
			invoke<Void>(0x406137F8EF90EAF5, object, toggle);
		} // 0x406137F8EF90EAF5 0x3E263AE1  
		static bool is_any_object_near_point(float x, float y, float z, float range, bool p4)
		{
			return invoke<bool>(0x397DC58FF00298D1, x, y, z, range, p4);
		} // 0x397DC58FF00298D1 0xE9E46941  
		static bool is_object_near_point(Hash objectHash, float x, float y, float z, float range)
		{
			return invoke<bool>(0x8C90FE4B381BA60A, objectHash, x, y, z, range);
		} // 0x8C90FE4B381BA60A 0x50A62C43  
		static void _0x4a39db43e47cf3aa(Any p0) { invoke<Void>(0x4A39DB43E47CF3AA, p0); }
		// 0x4A39DB43E47CF3AA 0xE3261B35  
		static void _0xe7e4c198b0185900(Object p0, Any p1, bool p2) { invoke<Void>(0xE7E4C198B0185900, p0, p1, p2); }
		// 0xE7E4C198B0185900 0x1E82C2AE  
		static void _0xf9c1681347c8bd15(Object object) { invoke<Void>(0xF9C1681347C8BD15, object); }
		// 0xF9C1681347C8BD15  
		static void track_object_visibility(Any p0) { invoke<Void>(0xB252BC036B525623, p0); }
		// 0xB252BC036B525623 0x46D06B9A  
		static bool is_object_visible(Object object) { return invoke<bool>(0x8B32ACE6326A7546, object); }
		// 0x8B32ACE6326A7546 0xF4FD8AE4  
		static void _0xc6033d32241f6fb5(Any p0, bool p1) { invoke<Void>(0xC6033D32241F6FB5, p0, p1); }
		// 0xC6033D32241F6FB5 0xF4A1A14A  
		static void _0xeb6f1a9b5510a5d2(Any p0, bool p1) { invoke<Void>(0xEB6F1A9B5510A5D2, p0, p1); }
		// 0xEB6F1A9B5510A5D2 0xAF016CC1  
		static void _0xbce595371a5fbaaf(Any p0, bool p1) { invoke<Void>(0xBCE595371A5FBAAF, p0, p1); }
		// 0xBCE595371A5FBAAF 0x3A68AA46  
		static int _get_des_object(float x, float y, float z, float rotation, const char* name)
		{
			return invoke<int>(0xB48FCED898292E52, x, y, z, rotation, name);
		} // 0xB48FCED898292E52 0xA286DE96  
		static void _set_des_object_state(int handle, int state) { invoke<Void>(0x5C29F698D404C5E1, handle, state); }
		// 0x5C29F698D404C5E1 0x21F51560  
		static Any _get_des_object_state(int handle) { return invoke<Any>(0x899BA936634A322E, handle); }
		// 0x899BA936634A322E 0xF1B8817A  
		static bool _does_des_object_exist(int handle) { return invoke<bool>(0x52AF537A0C5B8AAD, handle); }
		// 0x52AF537A0C5B8AAD 0xE08C834D  
		static float _0x260ee4fdbdf4db01(Any p0) { return invoke<float>(0x260EE4FDBDF4DB01, p0); }
		// 0x260EE4FDBDF4DB01 0x020497DE  
		static Pickup create_pickup(Hash pickupHash, float posX, float posY, float posZ, int p4, int value, bool p6,
			Hash modelHash)
		{
			return invoke<Pickup>(0xFBA08C503DD5FA58, pickupHash, posX, posY, posZ, p4, value, p6, modelHash);
		} // 0xFBA08C503DD5FA58 0x5E14DF68  
		static Pickup create_pickup_rotate(Hash pickupHash, float posX, float posY, float posZ, float rotX, float rotY,
			float rotZ, int flag, int amount, Any p9, bool p10, Hash modelHash)
		{
			return invoke<Pickup>(0x891804727E0A98B7, pickupHash, posX, posY, posZ, rotX, rotY, rotZ, flag, amount, p9,
				p10, modelHash);
		} // 0x891804727E0A98B7 0xF015BFE2  
		static Pickup create_ambient_pickup(Hash pickupHash, float posX, float posY, float posZ, int p4, int value,
			Hash modelHash, bool returnHandle, bool p8)
		{
			return invoke<Pickup>(0x673966A0C0FD7171, pickupHash, posX, posY, posZ, p4, value, modelHash, returnHandle,
				p8);
		} // 0x673966A0C0FD7171 0x17B99CE7  
		static Pickup create_portable_pickup(Hash pickupHash, float x, float y, float z, bool placeOnGround,
			Hash modelHash)
		{
			return invoke<Pickup>(0x2EAF1FDB2FB55698, pickupHash, x, y, z, placeOnGround, modelHash);
		} // 0x2EAF1FDB2FB55698 0x8C886BE5  
		static Pickup _create_portable_pickup_2(Hash pickupHash, float x, float y, float z, bool placeOnGround,
			Hash modelHash)
		{
			return invoke<Pickup>(0x125494B98A21AAF7, pickupHash, x, y, z, placeOnGround, modelHash);
		} // 0x125494B98A21AAF7 0x56A02502  
		static void attach_portable_pickup_to_ped(Ped ped, Any p1) { invoke<Void>(0x8DC39368BDD57755, ped, p1); }
		// 0x8DC39368BDD57755 0x184F6AB3  
		static void detach_portable_pickup_from_ped(Ped ped) { invoke<Void>(0xCF463D1E9A0AECB1, ped); }
		// 0xCF463D1E9A0AECB1 0x1D094562  
		static void _0x0bf3b3bd47d79c08(Hash hash, int p1) { invoke<Void>(0x0BF3B3BD47D79C08, hash, p1); }
		// 0x0BF3B3BD47D79C08 0x7EFBA039  
		static void _0x78857fc65cadb909(bool p0) { invoke<Void>(0x78857FC65CADB909, p0); }
		// 0x78857FC65CADB909 0xA3CDF152  
		static Vector3 get_safe_pickup_coords(float x, float y, float z, Any p3, Any p4)
		{
			return invoke<Vector3>(0x6E16BC2503FF1FF0, x, y, z, p3, p4);
		} // 0x6E16BC2503FF1FF0 0x618B5F67  
		static Vector3 get_pickup_coords(Pickup pickup) { return invoke<Vector3>(0x225B8B35C88029B3, pickup); }
		// 0x225B8B35C88029B3 0xC2E1E2C5  
		static void remove_all_pickups_of_type(Hash pickupHash) { invoke<Void>(0x27F9D613092159CF, pickupHash); }
		// 0x27F9D613092159CF 0x40062C53  
		static bool has_pickup_been_collected(Pickup pickup) { return invoke<bool>(0x80EC48E6679313F9, pickup); }
		// 0x80EC48E6679313F9 0x0BE5CCED  
		static void remove_pickup(Pickup pickup) { invoke<Void>(0x3288D8ACAECD2AB2, pickup); }
		// 0x3288D8ACAECD2AB2 0x64A7A0E0  
		static void create_money_pickups(float x, float y, float z, int value, int amount, Hash model)
		{
			invoke<Void>(0x0589B5E791CE9B2B, x, y, z, value, amount, model);
		} // 0x0589B5E791CE9B2B 0x36C9A5EA  
		static bool does_pickup_exist(Pickup pickup) { return invoke<bool>(0xAFC1CA75AD4074D1, pickup); }
		// 0xAFC1CA75AD4074D1 0x9C6DA0B3  
		static bool does_pickup_object_exist(Object pickupObject)
		{
			return invoke<bool>(0xD9EFB6DBF7DAAEA3, pickupObject);
		} // 0xD9EFB6DBF7DAAEA3 0xE0B32108  
		static Object get_pickup_object(Pickup pickup) { return invoke<Object>(0x5099BC55630B25AE, pickup); }
		// 0x5099BC55630B25AE 0x6052E62E  
		static bool _0x0378c08504160d0d(Any p0) { return invoke<bool>(0x0378C08504160D0D, p0); } // 0x0378C08504160D0D  
		static bool _is_pickup_within_radius(Hash pickupHash, float x, float y, float z, float radius)
		{
			return invoke<bool>(0xF9C36251F6E48E33, pickupHash, x, y, z, radius);
		} // 0xF9C36251F6E48E33 0xF139681B  
		static void set_pickup_regeneration_time(Pickup pickup, int duration)
		{
			invoke<Void>(0x78015C9B4B3ECC9D, pickup, duration);
		} // 0x78015C9B4B3ECC9D 0xAB11267D  
		static void _0x616093ec6b139dd9(Player player, Hash pickupHash, bool p2)
		{
			invoke<Void>(0x616093EC6B139DD9, player, pickupHash, p2);
		} // 0x616093EC6B139DD9 0x7FADB4B9  
		static void _0x88eaec617cd26926(Hash p0, bool p1) { invoke<Void>(0x88EAEC617CD26926, p0, p1); }
		// 0x88EAEC617CD26926 0x3A8F1BF7  
		static void set_team_pickup_object(Object object, Any p1, bool p2)
		{
			invoke<Void>(0x53E0DF1A2A3CF0CA, object, p1, p2);
		} // 0x53E0DF1A2A3CF0CA 0x77687DC5  
		static void _0x92aefb5f6e294023(Object object, bool p1, bool p2)
		{
			invoke<Void>(0x92AEFB5F6E294023, object, p1, p2);
		} // 0x92AEFB5F6E294023 0xCBB5F9B6  
		static void _0xa08fe5e49bdc39dd(Any p0, float p1, bool p2) { invoke<Void>(0xA08FE5E49BDC39DD, p0, p1, p2); }
		// 0xA08FE5E49BDC39DD 0x276A7807  
		static Any _0xdb41d07a45a6d4b7(Any p0) { return invoke<Any>(0xDB41D07A45A6D4B7, p0); }
		// 0xDB41D07A45A6D4B7 0x000E92DC  
		static void _0x318516e02de3ece2(float p0) { invoke<Void>(0x318516E02DE3ECE2, p0); }
		// 0x318516E02DE3ECE2 0x9879AC51  
		static void _0x31f924b53eaddf65(bool p0) { invoke<Void>(0x31F924B53EADDF65, p0); }
		// 0x31F924B53EADDF65 0xDB18FA01  
		static void _0xf92099527db8e2a7(Any p0, Any p1) { invoke<Void>(0xF92099527DB8E2A7, p0, p1); }
		// 0xF92099527DB8E2A7 0xA7E936FD  
		static void _0xa2c1f5e92afe49ed() { invoke<Void>(0xA2C1F5E92AFE49ED); } // 0xA2C1F5E92AFE49ED 0xB241806C  
		static void _0x762db2d380b48d04(Any p0) { invoke<Void>(0x762DB2D380B48D04, p0); }
		// 0x762DB2D380B48D04 0xD1BAAFB7  
		static void _highlight_placement_coords(float x, float y, float z, int colorIndex)
		{
			invoke<Void>(0x3430676B11CDF21D, x, y, z, colorIndex);
		} // 0x3430676B11CDF21D 0x63B02FAD  
		static void _0xb2d0bde54f0e8e5a(Object object, bool toggle)
		{
			invoke<Void>(0xB2D0BDE54F0E8E5A, object, toggle);
		} // 0xB2D0BDE54F0E8E5A 0x132B6D92  
		static Hash _get_weapon_hash_from_pickup(Pickup pickupHash)
		{
			return invoke<Hash>(0x08F96CA6C551AD51, pickupHash);
		} // 0x08F96CA6C551AD51 0xEDD01937  
		static bool _0x11d1e53a726891fe(Object object) { return invoke<bool>(0x11D1E53A726891FE, object); }
		// 0x11D1E53A726891FE  
		static void _set_object_texture_variant(Object object, int paintIndex)
		{
			invoke<Void>(0x971DA0055324D033, object, paintIndex);
		} // 0x971DA0055324D033  
		static Hash _get_pickup_hash(Pickup pickupHash) { return invoke<Hash>(0x5EAAD83F8CFB4575, pickupHash); }
		// 0x5EAAD83F8CFB4575 0x6AE36192  
		static void set_force_object_this_frame(Any p0, Any p1, Any p2, Any p3)
		{
			invoke<Void>(0xF538081986E49E9D, p0, p1, p2, p3);
		} // 0xF538081986E49E9D 0x3DA41C1A  
		static void _mark_object_for_deletion(Object object) { invoke<Void>(0xADBE4809F19F927A, object); }
		// 0xADBE4809F19F927A 0x2048A7DD  
	}

	namespace ai
	{
		static void task_pause(Ped ped, int ms) { invoke<Void>(0xE73A266DB0CA9042, ped, ms); }
		// 0xE73A266DB0CA9042 0x17A64668  
		static void task_stand_still(Ped ped, int time) { invoke<Void>(0x919BE13EED931959, ped, time); }
		// 0x919BE13EED931959 0x6F80965D  
		static void task_jump(Ped ped, bool unused) { invoke<Void>(0x0AE4086104E067B1, ped, unused); }
		// 0x0AE4086104E067B1 0x0356E3CE  
		static void task_cower(Ped ped, int duration) { invoke<Void>(0x3EB1FE9E8E908E15, ped, duration); }
		// 0x3EB1FE9E8E908E15 0x9CF1C19B  
		static void task_hands_up(Ped ped, int duration, Ped facingPed, int p3, bool p4)
		{
			invoke<Void>(0xF2EAB31979A7F910, ped, duration, facingPed, p3, p4);
		} // 0xF2EAB31979A7F910 0x8DCC19C5  
		static void update_task_hands_up_duration(Ped ped, int duration)
		{
			invoke<Void>(0xA98FCAFD7893C834, ped, duration);
		} // 0xA98FCAFD7893C834 0x3AA39BE9  
		static void task_open_vehicle_door(Ped ped, Vehicle vehicle, int timeOut, int doorIndex, float speed)
		{
			invoke<Void>(0x965791A9A488A062, ped, vehicle, timeOut, doorIndex, speed);
		} // 0x965791A9A488A062 0x8EE06BF4  
		static void task_enter_vehicle(Ped ped, Vehicle vehicle, int timeout, int seat, float speed, int flag, Any p6)
		{
			invoke<Void>(0xC20E50AA46D09CA8, ped, vehicle, timeout, seat, speed, flag, p6);
		} // 0xC20E50AA46D09CA8 0xB8689B4E  
		static void task_leave_vehicle(Ped ped, Vehicle vehicle, int flags)
		{
			invoke<Void>(0xD3DBCE61A490BE02, ped, vehicle, flags);
		} // 0xD3DBCE61A490BE02 0x7B1141C6  
		static void _task_get_off_boat(Ped ped, Vehicle boat) { invoke<Void>(0x9C00E77AF14B2DFF, ped, boat); }
		// 0x9C00E77AF14B2DFF  
		static void task_sky_dive(Ped ped) { invoke<Void>(0x601736CFE536B0A0, ped); } // 0x601736CFE536B0A0 0xD3874AFA  
		static void task_parachute(Ped ped, bool p1) { invoke<Void>(0xD2F1C53C97EE81AB, ped, p1); }
		// 0xD2F1C53C97EE81AB 0xEC3060A2  
		static void task_parachute_to_target(Ped ped, float x, float y, float z)
		{
			invoke<Void>(0xB33E291AFA6BD03A, ped, x, y, z);
		} // 0xB33E291AFA6BD03A 0xE0104D6C  
		static void set_parachute_task_target(Ped ped, float x, float y, float z)
		{
			invoke<Void>(0xC313379AF0FCEDA7, ped, x, y, z);
		} // 0xC313379AF0FCEDA7 0x6ED3AD81  
		static void set_parachute_task_thrust(Ped ped, float thrust) { invoke<Void>(0x0729BAC1B8C64317, ped, thrust); }
		// 0x0729BAC1B8C64317 0xD07C8AAA  
		static void task_rappel_from_heli(Ped ped, int unused) { invoke<Void>(0x09693B0312F91649, ped, unused); }
		// 0x09693B0312F91649 0x2C7ADB93  
		static void task_vehicle_drive_to_coord(Ped ped, Vehicle vehicle, float x, float y, float z, float speed,
			Any p6, Hash vehicleModel, int drivingMode, float stopRange, float p10)
		{
			invoke<Void>(0xE2A2AA2F659D77A7, ped, vehicle, x, y, z, speed, p6, vehicleModel, drivingMode, stopRange,
				p10);
		} // 0xE2A2AA2F659D77A7 0xE4AC0387  
		static void task_vehicle_drive_to_coord_longrange(Ped ped, Vehicle vehicle, float x, float y, float z,
			float speed, int driveMode, float stopRange)
		{
			invoke<Void>(0x158BB33F920D360C, ped, vehicle, x, y, z, speed, driveMode, stopRange);
		} // 0x158BB33F920D360C 0x1490182A  
		static void task_vehicle_drive_wander(Ped ped, Vehicle vehicle, float speed, int drivingStyle)
		{
			invoke<Void>(0x480142959D337D00, ped, vehicle, speed, drivingStyle);
		} // 0x480142959D337D00 0x36EC0EB0  
		static void task_follow_to_offset_of_entity(Ped ped, Entity entity, float offsetX, float offsetY, float offsetZ,
			float movementSpeed, int timeout, float stoppingRange,
			bool persistFollowing)
		{
			invoke<Void>(0x304AE42E357B8C7E, ped, entity, offsetX, offsetY, offsetZ, movementSpeed, timeout,
				stoppingRange, persistFollowing);
		} // 0x304AE42E357B8C7E 0x2DF5A6AC  
		static void task_go_straight_to_coord(Ped ped, float x, float y, float z, float speed, int timeout,
			float targetHeading, float distanceToSlide)
		{
			invoke<Void>(0xD76B57B44F1E6F8B, ped, x, y, z, speed, timeout, targetHeading, distanceToSlide);
		} // 0xD76B57B44F1E6F8B 0x80A9E7A7  
		static void task_go_straight_to_coord_relative_to_entity(Entity entity1, Entity entity2, float p2, float p3,
			float p4, float p5, Any p6)
		{
			invoke<Void>(0x61E360B7E040D12E, entity1, entity2, p2, p3, p4, p5, p6);
		} // 0x61E360B7E040D12E 0xD26CAC68  
		static void task_achieve_heading(Ped ped, float heading, int timeout)
		{
			invoke<Void>(0x93B93A37987F1F3D, ped, heading, timeout);
		} // 0x93B93A37987F1F3D 0x0A0E9B42  
		static void task_flush_route() { invoke<Void>(0x841142A1376E9006); } // 0x841142A1376E9006 0x34219154  
		static void task_extend_route(float x, float y, float z) { invoke<Void>(0x1E7889778264843A, x, y, z); }
		// 0x1E7889778264843A 0x43271F69  
		static void task_follow_point_route(Ped ped, float speed, int unknown)
		{
			invoke<Void>(0x595583281858626E, ped, speed, unknown);
		} // 0x595583281858626E 0xB837C816  
		static void task_go_to_entity(Entity entity, Entity target, int duration, float distance, float speed, float p5,
			int p6)
		{
			invoke<Void>(0x6A071245EB0D1882, entity, target, duration, distance, speed, p5, p6);
		} // 0x6A071245EB0D1882 0x374827C2  
		static void task_smart_flee_coord(Ped ped, float x, float y, float z, float distance, int time, bool p6,
			bool p7)
		{
			invoke<Void>(0x94587F17E9C365D5, ped, x, y, z, distance, time, p6, p7);
		} // 0x94587F17E9C365D5 0xB2E686FC  
		static void task_smart_flee_ped(Ped ped, Ped fleeTarget, float distance, Any fleeTime, bool p4, bool p5)
		{
			invoke<Void>(0x22B0D0E37CCB840D, ped, fleeTarget, distance, fleeTime, p4, p5);
		} // 0x22B0D0E37CCB840D 0xE52EB560  
		static void task_react_and_flee_ped(Ped ped, Ped fleeTarget)
		{
			invoke<Void>(0x72C896464915D1B1, ped, fleeTarget);
		} // 0x72C896464915D1B1 0x8A632BD8  
		static void task_shocking_event_react(Ped ped, int eventHandle)
		{
			invoke<Void>(0x452419CBD838065B, ped, eventHandle);
		} // 0x452419CBD838065B 0x9BD00ACF  
		static void task_wander_in_area(Ped ped, float x, float y, float z, float radius, float minimalLength,
			float timeBetweenWalks)
		{
			invoke<Void>(0xE054346CA3A0F315, ped, x, y, z, radius, minimalLength, timeBetweenWalks);
		} // 0xE054346CA3A0F315 0xC6981FB9  
		static void task_wander_standard(Ped ped, float p1, int p2) { invoke<Void>(0xBB9CE077274F6A1B, ped, p1, p2); }
		// 0xBB9CE077274F6A1B 0xAF59151A  
		static void task_vehicle_park(Ped ped, Vehicle vehicle, float x, float y, float z, float heading, int mode,
			float radius, bool keepEngineOn)
		{
			invoke<Void>(0x0F3E34E968EA374E, ped, vehicle, x, y, z, heading, mode, radius, keepEngineOn);
		} // 0x0F3E34E968EA374E 0x5C85FF90  
		static void task_stealth_kill(Ped killer, Ped target, Hash actionType, float p3, Any p4)
		{
			invoke<Void>(0xAA5DC05579D60BD9, killer, target, actionType, p3, p4);
		} // 0xAA5DC05579D60BD9 0x0D64C2FA  
		static void task_plant_bomb(Ped ped, float x, float y, float z, float heading)
		{
			invoke<Void>(0x965FEC691D55E9BF, ped, x, y, z, heading);
		} // 0x965FEC691D55E9BF 0x33457535  
		static void task_follow_nav_mesh_to_coord(Ped ped, float x, float y, float z, float speed, int timeout,
			float stoppingRange, bool persistFollowing, float unk)
		{
			invoke<Void>(0x15D3A79D4E44B913, ped, x, y, z, speed, timeout, stoppingRange, persistFollowing, unk);
		} // 0x15D3A79D4E44B913 0xFE4A10D9  
		static void task_follow_nav_mesh_to_coord_advanced(Ped ped, float x, float y, float z, float speed, int timeout,
			float unkFloat, int unkInt, float unkX, float unkY,
			float unkZ, float unk_40000f)
		{
			invoke<Void>(0x17F58B88D085DBAC, ped, x, y, z, speed, timeout, unkFloat, unkInt, unkX, unkY, unkZ,
				unk_40000f);
		} // 0x17F58B88D085DBAC 0x6BF6E296  
		static void set_ped_path_can_use_climbovers(Ped ped, bool Toggle)
		{
			invoke<Void>(0x8E06A6FE76C9EFF4, ped, Toggle);
		} // 0x8E06A6FE76C9EFF4 0xB7B7D442  
		static void set_ped_path_can_use_ladders(Ped ped, bool Toggle)
		{
			invoke<Void>(0x77A5B103C87F476E, ped, Toggle);
		} // 0x77A5B103C87F476E 0x53A879EE  
		static void set_ped_path_can_drop_from_height(Ped ped, bool Toggle)
		{
			invoke<Void>(0xE361C5C71C431A4F, ped, Toggle);
		} // 0xE361C5C71C431A4F 0x394B7AC9  
		static void _0x88e32db8c1a4aa4b(Ped ped, float p1) { invoke<Void>(0x88E32DB8C1A4AA4B, ped, p1); }
		// 0x88E32DB8C1A4AA4B 0x55E06443  
		static void set_ped_paths_width_plant(Ped ped, bool mayEnterWater)
		{
			invoke<Void>(0xF35425A4204367EC, ped, mayEnterWater);
		} // 0xF35425A4204367EC 0x9C606EE3  
		static void set_ped_path_prefer_to_avoid_water(Ped ped, bool avoidWater)
		{
			invoke<Void>(0x38FE1EC73743793C, ped, avoidWater);
		} // 0x38FE1EC73743793C 0x0EA39A29  
		static void set_ped_path_avoid_fire(Ped ped, bool avoidFire)
		{
			invoke<Void>(0x4455517B28441E60, ped, avoidFire);
		} // 0x4455517B28441E60 0xDCC5B934  
		static void set_global_min_bird_flight_height(float height) { invoke<Void>(0x6C6B148586F934F7, height); }
		// 0x6C6B148586F934F7 0x2AFB14B8  
		static int get_navmesh_route_distance_remaining(Ped ped, float* distRemaining, bool* isPathReady)
		{
			return invoke<int>(0xC6F5C0BCDC74D62D, ped, distRemaining, isPathReady);
		} // 0xC6F5C0BCDC74D62D 0xD9281778  
		static int get_navmesh_route_result(Ped ped) { return invoke<int>(0x632E831F382A0FA8, ped); }
		// 0x632E831F382A0FA8 0x96491602  
		static bool _0x3e38e28a1d80ddf6(Ped ped) { return invoke<bool>(0x3E38E28A1D80DDF6, ped); }
		// 0x3E38E28A1D80DDF6  
		static void task_go_to_coord_any_means(Ped ped, float x, float y, float z, float speed, Any p5, bool p6,
			int walkingStyle, float p8)
		{
			invoke<Void>(0x5BC448CB78FA3E88, ped, x, y, z, speed, p5, p6, walkingStyle, p8);
		} // 0x5BC448CB78FA3E88 0xF91DF93B  
		static void task_go_to_coord_any_means_extra_params(Ped ped, float x, float y, float z, float speed, Any p5,
			bool p6, int walkingStyle, float p8, Any p9, Any p10,
			Any p11)
		{
			invoke<Void>(0x1DD45F9ECFDB1BC9, ped, x, y, z, speed, p5, p6, walkingStyle, p8, p9, p10, p11);
		} // 0x1DD45F9ECFDB1BC9 0x094B75EF  
		static void task_go_to_coord_any_means_extra_params_with_cruise_speed(
			Ped ped, float x, float y, float z, float speed, Any p5, bool p6, int walkingStyle, float p8, Any p9,
			Any p10, Any p11, Any p12)
		{
			invoke<Void>(0xB8ECD61F531A7B02, ped, x, y, z, speed, p5, p6, walkingStyle, p8, p9, p10, p11, p12);
		} // 0xB8ECD61F531A7B02 0x86DC03F9  
		static void task_play_anim(Ped ped, const char* animDictionary, const char* animationName, float speed,
			float speedMultiplier, int duration, int flag, float playbackRate, bool lockX,
			bool lockY, bool lockZ)
		{
			invoke<Void>(0xEA47FE3719165B94, ped, animDictionary, animationName, speed, speedMultiplier, duration, flag,
				playbackRate, lockX, lockY, lockZ);
		} // 0xEA47FE3719165B94 0x5AB552C6  
		static void task_play_anim_advanced(Ped ped, const char* animDict, const char* animName, float posX, float posY,
			float posZ, float rotX, float rotY, float rotZ, float speed,
			float speedMultiplier, int duration, Any flag, float animTime, Any p14,
			Any p15)
		{
			invoke<Void>(0x83CDB10EA29B370B, ped, animDict, animName, posX, posY, posZ, rotX, rotY, rotZ, speed,
				speedMultiplier, duration, flag, animTime, p14, p15);
		} // 0x83CDB10EA29B370B 0x3DDEB0E6  
		static void stop_anim_task(Ped ped, const char* animDictionary, const char* animationName, float p3)
		{
			invoke<Void>(0x97FF36A1D40EA00A, ped, animDictionary, animationName, p3);
		} // 0x97FF36A1D40EA00A 0x2B520A57  
		static void task_scripted_animation(Ped ped, Any* p1, Any* p2, Any* p3, float p4, float p5)
		{
			invoke<Void>(0x126EF75F1E17ABE5, ped, p1, p2, p3, p4, p5);
		} // 0x126EF75F1E17ABE5 0xFC2DCF47  
		static void play_entity_scripted_anim(Any p0, Any* p1, Any* p2, Any* p3, float p4, float p5)
		{
			invoke<Void>(0x77A1EEC547E7FCF1, p0, p1, p2, p3, p4, p5);
		} // 0x77A1EEC547E7FCF1 0x02F72AE5  
		static void stop_anim_playback(Ped ped, int p1, bool p2) { invoke<Void>(0xEE08C992D238C5D1, ped, p1, p2); }
		// 0xEE08C992D238C5D1 0xE5F16398  
		static void set_anim_weight(Any p0, float p1, Any p2, Any p3, bool p4)
		{
			invoke<Void>(0x207F1A47C0342F48, p0, p1, p2, p3, p4);
		} // 0x207F1A47C0342F48 0x17229D98  
		static void set_anim_rate(Any p0, float p1, Any p2, bool p3)
		{
			invoke<Void>(0x032D49C5E359C847, p0, p1, p2, p3);
		} // 0x032D49C5E359C847 0x6DB46584  
		static void set_anim_looped(Any p0, bool p1, Any p2, bool p3)
		{
			invoke<Void>(0x70033C3CC29A1FF4, p0, p1, p2, p3);
		} // 0x70033C3CC29A1FF4 0x095D61A4  
		static void task_play_phone_gesture_animation(Ped ped, const char* animDict, const char* animation,
			const char* boneMaskType, float p4, float p5, bool p6, bool p7)
		{
			invoke<Void>(0x8FBB6758B3B3E9EC, ped, animDict, animation, boneMaskType, p4, p5, p6, p7);
		} // 0x8FBB6758B3B3E9EC 0x1582162C  
		static void _task_stop_phone_gesture_animation(Ped ped) { invoke<Void>(0x3FA00D4F4641BFAE, ped); }
		// 0x3FA00D4F4641BFAE  
		static bool is_playing_phone_gesture_anim(Ped ped) { return invoke<bool>(0xB8EBB1E9D3588C10, ped); }
		// 0xB8EBB1E9D3588C10 0x500B6805  
		static float get_phone_gesture_anim_current_time(Ped ped) { return invoke<float>(0x47619ABE8B268C60, ped); }
		// 0x47619ABE8B268C60 0x7B72AFD1  
		static float get_phone_gesture_anim_total_time(Ped ped) { return invoke<float>(0x1EE0F68A7C25DEC6, ped); }
		// 0x1EE0F68A7C25DEC6 0xEF8C3959  
		static void task_vehicle_play_anim(Vehicle vehicle, const char* animation_set, const char* animation_name)
		{
			invoke<Void>(0x69F5C3BD0F3EBD89, vehicle, animation_set, animation_name);
		} // 0x69F5C3BD0F3EBD89 0x2B28F598  
		static void task_look_at_coord(Entity entity, float x, float y, float z, float duration, Any p5, Any p6)
		{
			invoke<Void>(0x6FA46612594F7973, entity, x, y, z, duration, p5, p6);
		} // 0x6FA46612594F7973 0x7B784DD8  
		static void task_look_at_entity(Ped ped, Entity lookAt, int duration, int unknown1, int unknown2)
		{
			invoke<Void>(0x69F4BE8C8CC4796C, ped, lookAt, duration, unknown1, unknown2);
		} // 0x69F4BE8C8CC4796C 0x991D6619  
		static void task_clear_look_at(Ped ped) { invoke<Void>(0x0F804F1DB19B9689, ped); }
		// 0x0F804F1DB19B9689 0x60EB4054  
		static void open_sequence_task(Object* taskSequence) { invoke<Void>(0xE8854A4326B9E12B, taskSequence); }
		// 0xE8854A4326B9E12B 0xABA6923E  
		static void close_sequence_task(Object taskSequence) { invoke<Void>(0x39E72BC99E6360CB, taskSequence); }
		// 0x39E72BC99E6360CB 0x1A7CEBD0  
		static void task_perform_sequence(Ped ped, Object taskSequence)
		{
			invoke<Void>(0x5ABA3986D90D8A3B, ped, taskSequence);
		} // 0x5ABA3986D90D8A3B 0x4D9FBD11  
		static void clear_sequence_task(Object* taskSequence) { invoke<Void>(0x3841422E9C488D8C, taskSequence); }
		// 0x3841422E9C488D8C 0x47ED03CE  
		static void set_sequence_to_repeat(Object taskSequence, bool repeat)
		{
			invoke<Void>(0x58C70CF3A41E4AE7, taskSequence, repeat);
		} // 0x58C70CF3A41E4AE7 0xCDDF1508  
		static int get_sequence_progress(Ped ped) { return invoke<int>(0x00A9010CFE1E3533, ped); }
		// 0x00A9010CFE1E3533 0xA3419909  
		static bool get_is_task_active(Ped ped, int taskNumber)
		{
			return invoke<bool>(0xB0760331C7AA4155, ped, taskNumber);
		} // 0xB0760331C7AA4155 0x86FDDF55  
		static int get_script_task_status(Ped targetPed, Hash taskHash)
		{
			return invoke<int>(0x77F1BEB8863288D5, targetPed, taskHash);
		} // 0x77F1BEB8863288D5 0xB2477B23  
		static int get_active_vehicle_mission_type(Vehicle veh) { return invoke<int>(0x534AEBA6E5ED4CAB, veh); }
		// 0x534AEBA6E5ED4CAB 0xAFA914EF  
		static void task_leave_any_vehicle(Ped ped, int p1, int p2) { invoke<Void>(0x504D54DF3F6F2247, ped, p1, p2); }
		// 0x504D54DF3F6F2247 0xDBDD79FA  
		static void task_aim_gun_scripted(Ped ped, Hash scriptTask, bool p2, bool p3)
		{
			invoke<Void>(0x7A192BE16D373D00, ped, scriptTask, p2, p3);
		} // 0x7A192BE16D373D00 0x9D296BCD  
		static void task_aim_gun_scripted_with_target(Any p0, Any p1, float p2, float p3, float p4, Any p5, bool p6,
			bool p7)
		{
			invoke<Void>(0x8605AF0DE8B3A5AC, p0, p1, p2, p3, p4, p5, p6, p7);
		} // 0x8605AF0DE8B3A5AC 0xFD517CE3  
		static void update_task_aim_gun_scripted_target(Ped p0, Ped p1, float p2, float p3, float p4, bool p5)
		{
			invoke<Void>(0x9724FB59A3E72AD0, p0, p1, p2, p3, p4, p5);
		} // 0x9724FB59A3E72AD0 0x67E73525  
		static const char* get_clip_set_for_scripted_gun_task(int p0)
		{
			return invoke<const char*>(0x3A8CADC7D37AACC5, p0);
		} // 0x3A8CADC7D37AACC5 0x249EB4EB  
		static void task_aim_gun_at_entity(Ped ped, Entity entity, int duration, bool p3)
		{
			invoke<Void>(0x9B53BB6E8943AF53, ped, entity, duration, p3);
		} // 0x9B53BB6E8943AF53 0xBE32B3B6  
		static void task_turn_ped_to_face_entity(Ped ped, Entity entity, int duration)
		{
			invoke<Void>(0x5AD23D40115353AC, ped, entity, duration);
		} // 0x5AD23D40115353AC 0x3C37C767  
		static void task_aim_gun_at_coord(Ped ped, float x, float y, float z, int time, bool p5, bool p6)
		{
			invoke<Void>(0x6671F3EEC681BDA1, ped, x, y, z, time, p5, p6);
		} // 0x6671F3EEC681BDA1 0xFBF44AD3  
		static void task_shoot_at_coord(Ped ped, float x, float y, float z, int duration, Hash firingPattern)
		{
			invoke<Void>(0x46A6CC01E0826106, ped, x, y, z, duration, firingPattern);
		} // 0x46A6CC01E0826106 0x601C22E3  
		static void task_shuffle_to_next_vehicle_seat(Ped ped, Vehicle vehicle)
		{
			invoke<Void>(0x7AA80209BDA643EB, ped, vehicle);
		} // 0x7AA80209BDA643EB 0xBEAF8F67  
		static void clear_ped_tasks(Ped ped) { invoke<Void>(0xE1EF3C1216AFF2CD, ped); }
		// 0xE1EF3C1216AFF2CD 0xDE3316AB  
		static void clear_ped_secondary_task(Ped ped) { invoke<Void>(0x176CECF6F920D707, ped); }
		// 0x176CECF6F920D707 0xA635F451  
		static void task_everyone_leave_vehicle(Vehicle vehicle) { invoke<Void>(0x7F93691AB4B92272, vehicle); }
		// 0x7F93691AB4B92272 0xC1971F30  
		static void task_goto_entity_offset(Ped ped, Any p1, Any p2, float x, float y, float z, int duration)
		{
			invoke<Void>(0xE39B4FF4FDEBDE27, ped, p1, p2, x, y, z, duration);
		} // 0xE39B4FF4FDEBDE27 0x1A17A85E  
		static void task_goto_entity_offset_xy(Ped ped, Entity entity, int duration, float xOffset, float yOffset,
			float zOffset, float moveBlendRatio, bool useNavmesh)
		{
			invoke<Void>(0x338E7EF52B6095A9, ped, entity, duration, xOffset, yOffset, zOffset, moveBlendRatio,
				useNavmesh);
		} // 0x338E7EF52B6095A9 0xBC1E3D0A  
		static void task_turn_ped_to_face_coord(Ped ped, float x, float y, float z, int duration)
		{
			invoke<Void>(0x1DDA930A0AC38571, ped, x, y, z, duration);
		} // 0x1DDA930A0AC38571 0x30463D73  
		static void task_vehicle_temp_action(Ped driver, Vehicle vehicle, int action, int time)
		{
			invoke<Void>(0xC429DCEEB339E129, driver, vehicle, action, time);
		} // 0xC429DCEEB339E129 0x0679DFB8  
		static void task_vehicle_mission(int p0, int p1, Vehicle veh, Any p3, float p4, Any p5, float p6, float p7,
			bool p8)
		{
			invoke<Void>(0x659427E0EF36BCDE, p0, p1, veh, p3, p4, p5, p6, p7, p8);
		} // 0x659427E0EF36BCDE 0x20609E56  
		static void task_vehicle_mission_ped_target(Ped ped, Vehicle vehicle, Ped pedTarget, int mode, float maxSpeed,
			int drivingStyle, float minDistance, float p7, bool p8)
		{
			invoke<Void>(0x9454528DF15D657A, ped, vehicle, pedTarget, mode, maxSpeed, drivingStyle, minDistance, p7,
				p8);
		} // 0x9454528DF15D657A 0xC81C4677  
		static void task_vehicle_mission_coors_target(Ped ped, Vehicle vehicle, float x, float y, float z, int p5,
			int p6, int p7, float p8, float p9, bool p10)
		{
			invoke<Void>(0xF0AF20AA7731F8C3, ped, vehicle, x, y, z, p5, p6, p7, p8, p9, p10);
		} // 0xF0AF20AA7731F8C3 0x6719C109  
		static void task_vehicle_escort(Ped ped, Vehicle vehicle, Vehicle targetVehicle, int mode, float speed,
			int drivingStyle, float minDistance, int p7, float noRoadsDistance)
		{
			invoke<Void>(0x0FA6E4B75F302400, ped, vehicle, targetVehicle, mode, speed, drivingStyle, minDistance, p7,
				noRoadsDistance);
		} // 0x0FA6E4B75F302400 0x9FDCB250  
		static void _task_vehicle_follow(Ped driver, Vehicle vehicle, Entity targetEntity, int drivingStyle,
			float speed, int minDistance)
		{
			invoke<Void>(0xFC545A9F0626E3B6, driver, vehicle, targetEntity, drivingStyle, speed, minDistance);
		} // 0xFC545A9F0626E3B6  
		static void task_vehicle_chase(Ped driver, Entity targetEnt)
		{
			invoke<Void>(0x3C08A8E30363B353, driver, targetEnt);
		} // 0x3C08A8E30363B353 0x55634798  
		static void task_vehicle_heli_protect(Ped pilot, Vehicle vehicle, Entity entityToFollow, float targetSpeed,
			int p4, float radius, int altitude, int p7)
		{
			invoke<Void>(0x1E09C32048FEFD1C, pilot, vehicle, entityToFollow, targetSpeed, p4, radius, altitude, p7);
		} // 0x1E09C32048FEFD1C 0x0CB415EE  
		static void set_task_vehicle_chase_behavior_flag(Ped ped, int flag, bool set)
		{
			invoke<Void>(0xCC665AAC360D31E7, ped, flag, set);
		} // 0xCC665AAC360D31E7 0x2A83083F  
		static void set_task_vehicle_chase_ideal_pursuit_distance(Ped ped, float distance)
		{
			invoke<Void>(0x639B642FACBE4EDD, ped, distance);
		} // 0x639B642FACBE4EDD 0x04FD3EE7  
		static void task_heli_chase(Ped pilot, Entity entityToFollow, float x, float y, float z)
		{
			invoke<Void>(0xAC83B1DB38D0ADA0, pilot, entityToFollow, x, y, z);
		} // 0xAC83B1DB38D0ADA0 0xAC290A21  
		static void task_plane_chase(Ped pilot, Entity entityToFollow, float x, float y, float z)
		{
			invoke<Void>(0x2D2386F273FF7A25, pilot, entityToFollow, x, y, z);
		} // 0x2D2386F273FF7A25 0x12FA1C28  
		static void task_plane_land(Ped pilot, Vehicle plane, float runwayStartX, float runwayStartY,
			float runwayStartZ, float runwayEndX, float runwayEndY, float runwayEndZ)
		{
			invoke<Void>(0xBF19721FA34D32C0, pilot, plane, runwayStartX, runwayStartY, runwayStartZ, runwayEndX,
				runwayEndY, runwayEndZ);
		} // 0xBF19721FA34D32C0 0x5F7E23EA  
		static void task_heli_mission(Ped pilot, Vehicle aircraft, Vehicle targetVehicle, Ped targetPed,
			float destinationX, float destinationY, float destinationZ, int missionFlag,
			float maxSpeed, float landingRadius, float targetHeading, int unk1, int unk2,
			Hash unk3, int landingFlags)
		{
			invoke<Void>(0xDAD029E187A2BEB4, pilot, aircraft, targetVehicle, targetPed, destinationX, destinationY,
				destinationZ, missionFlag, maxSpeed, landingRadius, targetHeading, unk1, unk2, unk3,
				landingFlags);
		} // 0xDAD029E187A2BEB4 0x0C143E97  
		static void task_plane_mission(Ped pilot, Vehicle aircraft, Vehicle targetVehicle, Ped targetPed,
			float destinationX, float destinationY, float destinationZ, int missionFlag,
			float angularDrag, float unk, float targetHeading, float maxZ, float minZ)
		{
			invoke<Void>(0x23703CD154E83B88, pilot, aircraft, targetVehicle, targetPed, destinationX, destinationY,
				destinationZ, missionFlag, angularDrag, unk, targetHeading, maxZ, minZ);
		} // 0x23703CD154E83B88 0x1D007E65  
		static void task_boat_mission(Ped pedDriver, Vehicle boat, Any p2, Any p3, float x, float y, float z, Any p7,
			float maxSpeed, int drivingStyle, float p10, Any p11)
		{
			invoke<Void>(0x15C86013127CE63F, pedDriver, boat, p2, p3, x, y, z, p7, maxSpeed, drivingStyle, p10, p11);
		} // 0x15C86013127CE63F 0x5865B031  
		static void task_drive_by(Ped driverPed, Ped targetPed, Vehicle targetVehicle, float targetX, float targetY,
			float targetZ, float distanceToShoot, int pedAccuracy, bool p8, Hash firingPattern)
		{
			invoke<Void>(0x2F8AF0E82773A171, driverPed, targetPed, targetVehicle, targetX, targetY, targetZ,
				distanceToShoot, pedAccuracy, p8, firingPattern);
		} // 0x2F8AF0E82773A171 0x2B84D1C4  
		static void set_driveby_task_target(Ped shootingPed, Ped targetPed, Vehicle targetVehicle, float x, float y,
			float z)
		{
			invoke<Void>(0xE5B302114D8162EE, shootingPed, targetPed, targetVehicle, x, y, z);
		} // 0xE5B302114D8162EE 0xDA6A6FC1  
		static void clear_driveby_task_underneath_driving_task(Ped ped) { invoke<Void>(0xC35B5CDB2824CF69, ped); }
		// 0xC35B5CDB2824CF69 0x9B76F7E6  
		static bool is_driveby_task_underneath_driving_task(Ped ped) { return invoke<bool>(0x8785E6E40C7A8818, ped); }
		// 0x8785E6E40C7A8818 0xB23F46E6  
		static bool control_mounted_weapon(Ped ped) { return invoke<bool>(0xDCFE42068FE0135A, ped); }
		// 0xDCFE42068FE0135A 0x500D9244  
		static void set_mounted_weapon_target(Ped shootingPed, Ped targetPed, Vehicle targetVehicle, float x, float y,
			float z)
		{
			invoke<Void>(0xCCD892192C6D2BB9, shootingPed, targetPed, targetVehicle, x, y, z);
		} // 0xCCD892192C6D2BB9 0x98713C68  
		static bool is_mounted_weapon_task_underneath_driving_task(Ped ped)
		{
			return invoke<bool>(0xA320EF046186FA3B, ped);
		} // 0xA320EF046186FA3B 0x291E938C  
		static void task_use_mobile_phone(Ped ped, int p1) { invoke<Void>(0xBD2A8EC3AF4DE7DB, ped, p1); }
		// 0xBD2A8EC3AF4DE7DB 0x225A38C8  
		static void task_use_mobile_phone_timed(Ped ped, int duration)
		{
			invoke<Void>(0x5EE02954A14C69DB, ped, duration);
		} // 0x5EE02954A14C69DB 0xC99C19F5  
		static void task_chat_to_ped(Ped ped, Ped target, Any p2, float p3, float p4, float p5, float p6, float p7)
		{
			invoke<Void>(0x8C338E0263E4FD19, ped, target, p2, p3, p4, p5, p6, p7);
		} // 0x8C338E0263E4FD19 0xA2BE1821  
		static void task_warp_ped_into_vehicle(Ped ped, Vehicle vehicle, int seat)
		{
			invoke<Void>(0x9A7D091411C5F684, ped, vehicle, seat);
		} // 0x9A7D091411C5F684 0x65D4A35D  
		static void task_shoot_at_entity(Entity entity, Entity target, int duration, Hash firingPattern)
		{
			invoke<Void>(0x08DA95E8298AE772, entity, target, duration, firingPattern);
		} // 0x08DA95E8298AE772 0xAC0631C9  
		static void task_climb(Ped ped, bool unused) { invoke<Void>(0x89D9FCC2435112F1, ped, unused); }
		// 0x89D9FCC2435112F1 0x90847790  
		static void task_climb_ladder(Ped ped, int p1) { invoke<Void>(0xB6C987F9285A3814, ped, p1); }
		// 0xB6C987F9285A3814 0x35BB4EE0  
		static void clear_ped_tasks_immediately(Ped ped) { invoke<Void>(0xAAA34F8A7CB32098, ped); }
		// 0xAAA34F8A7CB32098 0xBC045625  
		static void task_perform_sequence_from_progress(Any p0, Any p1, Any p2, Any p3)
		{
			invoke<Void>(0x89221B16730234F0, p0, p1, p2, p3);
		} // 0x89221B16730234F0 0xFA60601B  
		static void set_next_desired_move_state(float p0) { invoke<Void>(0xF1B9F16E89E2C93A, p0); }
		// 0xF1B9F16E89E2C93A 0x4E937D57  
		static void set_ped_desired_move_blend_ratio(Ped ped, float p1) { invoke<Void>(0x1E982AC8716912C5, ped, p1); }
		// 0x1E982AC8716912C5 0xC65FC712  
		static float get_ped_desired_move_blend_ratio(Ped ped) { return invoke<float>(0x8517D4A6CA8513ED, ped); }
		// 0x8517D4A6CA8513ED 0x5FEFAB72  
		static void task_goto_entity_aiming(Ped ped, Entity target, float distanceToStopAt, float StartAimingDist)
		{
			invoke<Void>(0xA9DA48FAB8A76C12, ped, target, distanceToStopAt, StartAimingDist);
		} // 0xA9DA48FAB8A76C12 0xF1C493CF  
		static void task_set_decision_maker(Ped p0, Hash p1) { invoke<Void>(0xEB8517DDA73720DA, p0, p1); }
		// 0xEB8517DDA73720DA 0x830AD50C  
		static void task_set_sphere_defensive_area(Any p0, float p1, float p2, float p3, float p4)
		{
			invoke<Void>(0x933C06518B52A9A4, p0, p1, p2, p3, p4);
		} // 0x933C06518B52A9A4 0x9F3C5D6A  
		static void task_clear_defensive_area(Any p0) { invoke<Void>(0x95A6C46A31D1917D, p0); }
		// 0x95A6C46A31D1917D 0x7A05BF0D  
		static void task_ped_slide_to_coord(Ped ped, float x, float y, float z, float heading, float duration)
		{
			invoke<Void>(0xD04FE6765D990A06, ped, x, y, z, heading, duration);
		} // 0xD04FE6765D990A06 0x225380EF  
		static void task_ped_slide_to_coord_hdg_rate(Ped ped, float x, float y, float z, float heading, float p5,
			float p6)
		{
			invoke<Void>(0x5A4A6A6D3DC64F52, ped, x, y, z, heading, p5, p6);
		} // 0x5A4A6A6D3DC64F52 0x38A995C1  
		static ScrHandle add_cover_point(float p0, float p1, float p2, float p3, Any p4, Any p5, Any p6, bool p7)
		{
			return invoke<ScrHandle>(0xD5C12A75C7B9497F, p0, p1, p2, p3, p4, p5, p6, p7);
		} // 0xD5C12A75C7B9497F 0xA0AF0B98  
		static void remove_cover_point(ScrHandle coverpoint) { invoke<Void>(0xAE287C923D891715, coverpoint); }
		// 0xAE287C923D891715 0x0776888B  
		static bool does_scripted_cover_point_exist_at_coords(float x, float y, float z)
		{
			return invoke<bool>(0xA98B8E3C088E5A31, x, y, z);
		} // 0xA98B8E3C088E5A31 0x29F97A71  
		static Vector3 get_scripted_cover_point_coords(ScrHandle coverpoint)
		{
			return invoke<Vector3>(0x594A1028FC2A3E85, coverpoint);
		} // 0x594A1028FC2A3E85 0xC6B6CCC1  
		static void task_combat_ped(Ped ped, Ped targetPed, int p2, int p3)
		{
			invoke<Void>(0xF166E48407BAC484, ped, targetPed, p2, p3);
		} // 0xF166E48407BAC484 0xCB0D8932  
		static void task_combat_ped_timed(Any p0, Ped ped, int p2, Any p3)
		{
			invoke<Void>(0x944F30DCB7096BDE, p0, ped, p2, p3);
		} // 0x944F30DCB7096BDE 0xF5CA2A45  
		static void task_seek_cover_from_pos(Ped ped, float x, float y, float z, int duration, bool p5)
		{
			invoke<Void>(0x75AC2B60386D89F2, ped, x, y, z, duration, p5);
		} // 0x75AC2B60386D89F2 0x83F18EE9  
		static void task_seek_cover_from_ped(Ped ped, Ped target, int duration, bool p3)
		{
			invoke<Void>(0x84D32B3BEC531324, ped, target, duration, p3);
		} // 0x84D32B3BEC531324 0xC1EC907E  
		static void task_seek_cover_to_cover_point(Any p0, Any p1, float p2, float p3, float p4, Any p5, bool p6)
		{
			invoke<Void>(0xD43D95C7A869447F, p0, p1, p2, p3, p4, p5, p6);
		} // 0xD43D95C7A869447F 0x3D026B29  
		static void task_seek_cover_to_coords(Ped ped, float x1, float y1, float z1, float x2, float y2, float z2,
			Any p7, bool p8)
		{
			invoke<Void>(0x39246A6958EF072C, ped, x1, y1, z1, x2, y2, z2, p7, p8);
		} // 0x39246A6958EF072C 0xFFFE754E  
		static void task_put_ped_directly_into_cover(Ped ped, float x, float y, float z, Any timeout, bool p5, float p6,
			bool p7, bool p8, Any p9, bool p10)
		{
			invoke<Void>(0x4172393E6BE1FECE, ped, x, y, z, timeout, p5, p6, p7, p8, p9, p10);
		} // 0x4172393E6BE1FECE 0xC9F00E68  
		static void task_exit_cover(Any p0, Any p1, float p2, float p3, float p4)
		{
			invoke<Void>(0x79B258E397854D29, p0, p1, p2, p3, p4);
		} // 0x79B258E397854D29 0xC829FAC9  
		static void task_put_ped_directly_into_melee(Ped ped, Ped meleeTarget, float p2, float p3, float p4, bool p5)
		{
			invoke<Void>(0x1C6CD14A876FFE39, ped, meleeTarget, p2, p3, p4, p5);
		} // 0x1C6CD14A876FFE39 0x79E1D27D  
		static void task_toggle_duck(bool p0, bool p1) { invoke<Void>(0xAC96609B9995EDF8, p0, p1); }
		// 0xAC96609B9995EDF8 0x61CFBCBF  
		static void task_guard_current_position(Ped p0, float p1, float p2, bool p3)
		{
			invoke<Void>(0x4A58A47A72E3FCB4, p0, p1, p2, p3);
		} // 0x4A58A47A72E3FCB4 0x2FB099E9  
		static void task_guard_assigned_defensive_area(Any p0, float p1, float p2, float p3, float p4, float p5, Any p6)
		{
			invoke<Void>(0xD2A207EEBDF9889B, p0, p1, p2, p3, p4, p5, p6);
		} // 0xD2A207EEBDF9889B 0x7AF0133D  
		static void task_guard_sphere_defensive_area(Ped p0, float p1, float p2, float p3, float p4, float p5, Any p6,
			float p7, float p8, float p9, float p10)
		{
			invoke<Void>(0xC946FE14BE0EB5E2, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10);
		} // 0xC946FE14BE0EB5E2 0x86B76CB7  
		static void task_stand_guard(Ped ped, float x, float y, float z, float heading, const char* scenarioName)
		{
			invoke<Void>(0xAE032F8BBA959E90, ped, x, y, z, heading, scenarioName);
		} // 0xAE032F8BBA959E90 0xD130F636  
		static void set_drive_task_cruise_speed(Ped driver, float cruiseSpeed)
		{
			invoke<Void>(0x5C9B84BD7D31D908, driver, cruiseSpeed);
		} // 0x5C9B84BD7D31D908 0x3CEC07B1  
		static void set_drive_task_max_cruise_speed(Any p0, float p1) { invoke<Void>(0x404A5AA9B9F0B746, p0, p1); }
		// 0x404A5AA9B9F0B746 0x7FDF6131  
		static void set_drive_task_driving_style(Ped ped, int drivingStyle)
		{
			invoke<Void>(0xDACE1BE37D88AF67, ped, drivingStyle);
		} // 0xDACE1BE37D88AF67 0x59C5FAD7  
		static void add_cover_blocking_area(float playerX, float playerY, float playerZ, float radiusX, float radiusY,
			float radiusZ, bool p6, bool p7, bool p8, bool p9)
		{
			invoke<Void>(0x45C597097DD7CB81, playerX, playerY, playerZ, radiusX, radiusY, radiusZ, p6, p7, p8, p9);
		} // 0x45C597097DD7CB81 0x3536946F  
		static void remove_all_cover_blocking_areas() { invoke<Void>(0xDB6708C0B46F56D8); }
		// 0xDB6708C0B46F56D8 0xCF9221A7  
		static void task_start_scenario_in_place(Ped ped, const char* scenarioName, int unkDelay, bool playEnterAnim)
		{
			invoke<Void>(0x142A02425FF02BD9, ped, scenarioName, unkDelay, playEnterAnim);
		} // 0x142A02425FF02BD9 0xE50D6DDE  
		static void task_start_scenario_at_position(Ped ped, const char* scenarioName, float x, float y, float z,
			float heading, int duration, bool sittingScenario, bool teleport)
		{
			invoke<Void>(0xFA4EFC79F69D4F07, ped, scenarioName, x, y, z, heading, duration, sittingScenario, teleport);
		} // 0xFA4EFC79F69D4F07 0xAA2C4AC2  
		static void task_use_nearest_scenario_to_coord(Ped ped, float x, float y, float z, float distance, int duration)
		{
			invoke<Void>(0x277F471BA9DB000B, ped, x, y, z, distance, duration);
		} // 0x277F471BA9DB000B 0x9C50FBF0  
		static void task_use_nearest_scenario_to_coord_warp(Ped ped, float x, float y, float z, float radius, Any p5)
		{
			invoke<Void>(0x58E2E0F23F6B76C3, ped, x, y, z, radius, p5);
		} // 0x58E2E0F23F6B76C3 0x1BE9D65C  
		static void task_use_nearest_scenario_chain_to_coord(Any p0, float p1, float p2, float p3, float p4, Any p5)
		{
			invoke<Void>(0x9FDA1B3D7E7028B3, p0, p1, p2, p3, p4, p5);
		} // 0x9FDA1B3D7E7028B3 0xE32FFB22  
		static void task_use_nearest_scenario_chain_to_coord_warp(Any p0, float p1, float p2, float p3, float p4,
			Any p5)
		{
			invoke<Void>(0x97A28E63F0BA5631, p0, p1, p2, p3, p4, p5);
		} // 0x97A28E63F0BA5631 0xBAB4C0AE  
		static bool does_scenario_exist_in_area(float x, float y, float z, float radius, bool b)
		{
			return invoke<bool>(0x5A59271FFADD33C1, x, y, z, radius, b);
		} // 0x5A59271FFADD33C1 0xFA7F5047  
		static bool does_scenario_of_type_exist_in_area(float p0, float p1, float p2, Any* p3, float p4, bool p5)
		{
			return invoke<bool>(0x0A9D0C2A3BBC86C1, p0, p1, p2, p3, p4, p5);
		} // 0x0A9D0C2A3BBC86C1 0x0FB138A5  
		static bool is_scenario_occupied(float p0, float p1, float p2, float p3, bool p4)
		{
			return invoke<bool>(0x788756D73AC2E07C, p0, p1, p2, p3, p4);
		} // 0x788756D73AC2E07C 0x697FC008  
		static bool ped_has_use_scenario_task(Ped ped) { return invoke<bool>(0x295E3CCEC879CCD7, ped); }
		// 0x295E3CCEC879CCD7 0x9BE9C691  
		static void play_anim_on_running_scenario(Ped ped, const char* animDict, const char* animName)
		{
			invoke<Void>(0x748040460F8DF5DC, ped, animDict, animName);
		} // 0x748040460F8DF5DC 0x1984A5D1  
		static bool does_scenario_group_exist(const char* scenarioGroup)
		{
			return invoke<bool>(0xF9034C136C9E00D3, scenarioGroup);
		} // 0xF9034C136C9E00D3 0x5F072EB9  
		static bool is_scenario_group_enabled(const char* scenarioGroup)
		{
			return invoke<bool>(0x367A09DED4E05B99, scenarioGroup);
		} // 0x367A09DED4E05B99 0x90991122  
		static void set_scenario_group_enabled(const char* scenarioGroup, bool p1)
		{
			invoke<Void>(0x02C8E5B49848664E, scenarioGroup, p1);
		} // 0x02C8E5B49848664E 0x116997B1  
		static void reset_scenario_groups_enabled() { invoke<Void>(0xDD902D0349AFAD3A); }
		// 0xDD902D0349AFAD3A 0xBF55025D  
		static void set_exclusive_scenario_group(const char* scenarioGroup)
		{
			invoke<Void>(0x535E97E1F7FC0C6A, scenarioGroup);
		} // 0x535E97E1F7FC0C6A 0x59DB8F26  
		static void reset_exclusive_scenario_group() { invoke<Void>(0x4202BBCB8684563D); }
		// 0x4202BBCB8684563D 0x17F9DFE8  
		static bool is_scenario_type_enabled(const char* scenarioType)
		{
			return invoke<bool>(0x3A815DB3EA088722, scenarioType);
		} // 0x3A815DB3EA088722 0xAE37E969  
		static void set_scenario_type_enabled(const char* scenarioType, bool toggle)
		{
			invoke<Void>(0xEB47EC4E34FB7EE1, scenarioType, toggle);
		} // 0xEB47EC4E34FB7EE1 0xDB18E5DE  
		static void reset_scenario_types_enabled() { invoke<Void>(0x0D40EE2A7F2B2D6D); }
		// 0x0D40EE2A7F2B2D6D 0xF58FDEB4  
		static bool is_ped_active_in_scenario(Ped ped) { return invoke<bool>(0xAA135F9482C82CC3, ped); }
		// 0xAA135F9482C82CC3 0x05038F1A  
		static bool _0x621c6e4729388e41(Ped ped) { return invoke<bool>(0x621C6E4729388E41, ped); }
		// 0x621C6E4729388E41  
		static void _0x8fd89a6240813fd0(Ped ped, bool p1, bool p2) { invoke<Void>(0x8FD89A6240813FD0, ped, p1, p2); }
		// 0x8FD89A6240813FD0  
		static void task_combat_hated_targets_in_area(Ped ped, float x, float y, float z, float radius, Any p5)
		{
			invoke<Void>(0x4CF5F55DAC3280A0, ped, x, y, z, radius, p5);
		} // 0x4CF5F55DAC3280A0 0xDF099E18  
		static void task_combat_hated_targets_around_ped(Ped ped, float radius, int p2)
		{
			invoke<Void>(0x7BF835BB9E2698C8, ped, radius, p2);
		} // 0x7BF835BB9E2698C8 0x2E7064E4  
		static void task_combat_hated_targets_around_ped_timed(Any p0, float p1, Any p2, Any p3)
		{
			invoke<Void>(0x2BBA30B854534A0C, p0, p1, p2, p3);
		} // 0x2BBA30B854534A0C 0xF127AD6A  
		static void task_throw_projectile(int ped, float x, float y, float z)
		{
			invoke<Void>(0x7285951DBF6B5A51, ped, x, y, z);
		} // 0x7285951DBF6B5A51 0xF65C20A7  
		static void task_swap_weapon(Ped ped, bool p1) { invoke<Void>(0xA21C51255B205245, ped, p1); }
		// 0xA21C51255B205245 0xDAF4F8FC  
		static void task_reload_weapon(Ped ped, bool unused) { invoke<Void>(0x62D2916F56B9CD2D, ped, unused); }
		// 0x62D2916F56B9CD2D 0xCA6E91FD  
		static bool is_ped_getting_up(Ped ped) { return invoke<bool>(0x2A74E1D5F2F00EEC, ped); }
		// 0x2A74E1D5F2F00EEC 0x320813E6  
		static void task_writhe(Ped ped, Ped target, int time, int p3)
		{
			invoke<Void>(0xCDDC2B77CE54AC6E, ped, target, time, p3);
		} // 0xCDDC2B77CE54AC6E 0x0FDC54FC  
		static bool is_ped_in_writhe(Ped ped) { return invoke<bool>(0xDEB6D52126E7D640, ped); }
		// 0xDEB6D52126E7D640 0x09E61921  
		static void open_patrol_route(const char* patrolRoute) { invoke<Void>(0xA36BFB5EE89F3D82, patrolRoute); }
		// 0xA36BFB5EE89F3D82 0xF33F83CA  
		static void close_patrol_route() { invoke<Void>(0xB043ECA801B8CBC1); } // 0xB043ECA801B8CBC1 0x67305E59  
		static void add_patrol_route_node(int p0, const char* p1, float x1, float y1, float z1, float x2, float y2,
			float z2, int p8)
		{
			invoke<Void>(0x8EDF950167586B7C, p0, p1, x1, y1, z1, x2, y2, z2, p8);
		} // 0x8EDF950167586B7C 0x21B48F10  
		static void add_patrol_route_link(Any p0, Any p1) { invoke<Void>(0x23083260DEC3A551, p0, p1); }
		// 0x23083260DEC3A551 0xD8761BB3  
		static void create_patrol_route() { invoke<Void>(0xAF8A443CCC8018DC); } // 0xAF8A443CCC8018DC 0x0A6C7864  
		static void delete_patrol_route(const char* patrolRoute) { invoke<Void>(0x7767DD9D65E91319, patrolRoute); }
		// 0x7767DD9D65E91319 0x2A4E6706  
		static void task_patrol(Ped ped, const char* p1, Any p2, bool p3, bool p4)
		{
			invoke<Void>(0xBDA5DF49D080FE4E, ped, p1, p2, p3, p4);
		} // 0xBDA5DF49D080FE4E 0xB92E5AF6  
		static void task_stay_in_cover(Ped ped) { invoke<Void>(0xE5DA8615A6180789, ped); }
		// 0xE5DA8615A6180789 0xA27A9413  
		static void add_vehicle_subtask_attack_coord(Ped ped, float x, float y, float z)
		{
			invoke<Void>(0x5CF0D8F9BBA0DD75, ped, x, y, z);
		} // 0x5CF0D8F9BBA0DD75 0x50779A2C  
		static void add_vehicle_subtask_attack_ped(Ped ped, Ped ped2) { invoke<Void>(0x85F462BADC7DA47F, ped, ped2); }
		// 0x85F462BADC7DA47F 0x80461113  
		static void task_vehicle_shoot_at_ped(Ped ped, Ped target, float p2)
		{
			invoke<Void>(0x10AB107B887214D8, ped, target, p2);
		} // 0x10AB107B887214D8 0x59677BA0  
		static void task_vehicle_aim_at_ped(Ped ped, Ped target) { invoke<Void>(0xE41885592B08B097, ped, target); }
		// 0xE41885592B08B097 0x920AE6DB  
		static void task_vehicle_shoot_at_coord(Ped ped, float x, float y, float z, float p4)
		{
			invoke<Void>(0x5190796ED39C9B6D, ped, x, y, z, p4);
		} // 0x5190796ED39C9B6D 0xA7AAA4D6  
		static void task_vehicle_aim_at_coord(Ped ped, float x, float y, float z)
		{
			invoke<Void>(0x447C1E9EF844BC0F, ped, x, y, z);
		} // 0x447C1E9EF844BC0F 0x010F47CE  
		static void task_vehicle_goto_navmesh(Ped ped, Vehicle vehicle, float x, float y, float z, float speed,
			int behaviorFlag, float stoppingRange)
		{
			invoke<Void>(0x195AEEB13CEFE2EE, ped, vehicle, x, y, z, speed, behaviorFlag, stoppingRange);
		} // 0x195AEEB13CEFE2EE 0x55CF3BCD  
		static void task_go_to_coord_while_aiming_at_coord(Ped ped, float x, float y, float z, float aimAtX,
			float aimAtY, float aimAtZ, float moveSpeed, bool p8,
			float p9, float p10, bool p11, Any flags, bool p13,
			Hash firingPattern)
		{
			invoke<Void>(0x11315AB3385B8AC0, ped, x, y, z, aimAtX, aimAtY, aimAtZ, moveSpeed, p8, p9, p10, p11, flags,
				p13, firingPattern);
		} // 0x11315AB3385B8AC0 0x1552DC91  
		static void task_go_to_coord_while_aiming_at_entity(Any p0, float p1, float p2, float p3, Any p4, float p5,
			bool p6, float p7, float p8, bool p9, Any p10, bool p11,
			Any p12, Any p13)
		{
			invoke<Void>(0xB2A16444EAD9AE47, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13);
		} // 0xB2A16444EAD9AE47 0x9BD52ABD  
		static void task_go_to_coord_and_aim_at_hated_entities_near_coord(
			Ped pedHandle, float goToLocationX, float goToLocationY, float goToLocationZ, float focusLocationX,
			float focusLocationY, float focusLocationZ, float speed, bool shootAtEnemies, float distanceToStopAt,
			float noRoadsDistance, bool unkTrue, int unkFlag, int aimingFlag, Hash firingPattern)
		{
			invoke<Void>(0xA55547801EB331FC, pedHandle, goToLocationX, goToLocationY, goToLocationZ, focusLocationX,
				focusLocationY, focusLocationZ, speed, shootAtEnemies, distanceToStopAt, noRoadsDistance,
				unkTrue, unkFlag, aimingFlag, firingPattern);
		} // 0xA55547801EB331FC 0x3F91358E  
		static void task_go_to_entity_while_aiming_at_coord(Any p0, Any p1, float p2, float p3, float p4, float p5,
			bool p6, float p7, float p8, bool p9, bool p10, Any p11)
		{
			invoke<Void>(0x04701832B739DCE5, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11);
		} // 0x04701832B739DCE5 0xD896CD82  
		static void task_go_to_entity_while_aiming_at_entity(Ped ped, Entity entityToWalkTo, Entity entityToAimAt,
			float speed, bool shootatEntity, float p5, float p6,
			bool p7, bool p8, Hash firingPattern)
		{
			invoke<Void>(0x97465886D35210E9, ped, entityToWalkTo, entityToAimAt, speed, shootatEntity, p5, p6, p7, p8,
				firingPattern);
		} // 0x97465886D35210E9 0x68E36B7A  
		static void set_high_fall_task(Ped ped, Any p1, Any p2, Any p3)
		{
			invoke<Void>(0x8C825BDC7741D37C, ped, p1, p2, p3);
		} // 0x8C825BDC7741D37C 0xBBB26172  
		static void request_waypoint_recording(const char* name) { invoke<Void>(0x9EEFB62EB27B5792, name); }
		// 0x9EEFB62EB27B5792 0xAFABFB5D  
		static bool get_is_waypoint_recording_loaded(const char* name)
		{
			return invoke<bool>(0xCB4E8BE8A0063C5D, name);
		} // 0xCB4E8BE8A0063C5D 0x87125F5D  
		static void remove_waypoint_recording(const char* name) { invoke<Void>(0xFF1B8B4AA1C25DC8, name); }
		// 0xFF1B8B4AA1C25DC8 0x624530B0  
		static bool waypoint_recording_get_num_points(const char* name, int* points)
		{
			return invoke<bool>(0x5343532C01A07234, name, points);
		} // 0x5343532C01A07234 0xF5F9B71E  
		static bool waypoint_recording_get_coord(const char* name, int point, Vector3* coord)
		{
			return invoke<bool>(0x2FB897405C90B361, name, point, coord);
		} // 0x2FB897405C90B361 0x19266913  
		static float waypoint_recording_get_speed_at_point(const char* name, int point)
		{
			return invoke<float>(0x005622AEBC33ACA9, name, point);
		} // 0x005622AEBC33ACA9 0xC765633A  
		static bool waypoint_recording_get_closest_waypoint(const char* name, float x, float y, float z, int* point)
		{
			return invoke<bool>(0xB629A298081F876F, name, x, y, z, point);
		} // 0xB629A298081F876F 0xC4CD35AF  
		static void task_follow_waypoint_recording(Any p0, Any p1, Any p2, Any p3, Any p4)
		{
			invoke<Void>(0x0759591819534F7B, p0, p1, p2, p3, p4);
		} // 0x0759591819534F7B 0xADF9904D  
		static bool is_waypoint_playback_going_on_for_ped(Any p0) { return invoke<bool>(0xE03B3F2D3DC59B64, p0); }
		// 0xE03B3F2D3DC59B64 0x85B7725F  
		static int get_ped_waypoint_progress(Ped ped) { return invoke<int>(0x2720AAA75001E094, ped); }
		// 0x2720AAA75001E094 0x3595B104  
		static float get_ped_waypoint_distance(Any p0) { return invoke<float>(0xE6A877C64CAF1BC5, p0); }
		// 0xE6A877C64CAF1BC5 0x084B35B0  
		static Any set_ped_waypoint_route_offset(Any p0, Any p1, Any p2, Any p3)
		{
			return invoke<Any>(0xED98E10B0AFCE4B4, p0, p1, p2, p3);
		} // 0xED98E10B0AFCE4B4 0xF867F747  
		static float get_waypoint_distance_along_route(const char* p0, int p1)
		{
			return invoke<float>(0xA5B769058763E497, p0, p1);
		} // 0xA5B769058763E497 0xE8422AC4  
		static bool waypoint_playback_get_is_paused(Any p0) { return invoke<bool>(0x701375A7D43F01CB, p0); }
		// 0x701375A7D43F01CB 0xA6BB5717  
		static void waypoint_playback_pause(Any p0, bool p1, bool p2) { invoke<Void>(0x0F342546AA06FED5, p0, p1, p2); }
		// 0x0F342546AA06FED5 0xFE39ECF8  
		static void waypoint_playback_resume(Any p0, bool p1, Any p2, Any p3)
		{
			invoke<Void>(0x244F70C84C547D2D, p0, p1, p2, p3);
		} // 0x244F70C84C547D2D 0x50F392EF  
		static void waypoint_playback_override_speed(Any p0, float p1, bool p2)
		{
			invoke<Void>(0x7D7D2B47FA788E85, p0, p1, p2);
		} // 0x7D7D2B47FA788E85 0x23E6BA96  
		static void waypoint_playback_use_default_speed(Any p0) { invoke<Void>(0x6599D834B12D0800, p0); }
		// 0x6599D834B12D0800 0x1BBB2CAC  
		static void use_waypoint_recording_as_assisted_movement_route(Any* p0, bool p1, float p2, float p3)
		{
			invoke<Void>(0x5A353B8E6B1095B5, p0, p1, p2, p3);
		} // 0x5A353B8E6B1095B5 0x4DFD5FEC  
		static void waypoint_playback_start_aiming_at_ped(Any p0, Any p1, bool p2)
		{
			invoke<Void>(0x20E330937C399D29, p0, p1, p2);
		} // 0x20E330937C399D29 0x75E60CF6  
		static void waypoint_playback_start_aiming_at_coord(Any p0, float p1, float p2, float p3, bool p4)
		{
			invoke<Void>(0x8968400D900ED8B3, p0, p1, p2, p3, p4);
		} // 0x8968400D900ED8B3 0xF120A34E  
		static void _0xe70ba7b90f8390dc(Any p0, Any p1, bool p2, Any p3)
		{
			invoke<Void>(0xE70BA7B90F8390DC, p0, p1, p2, p3);
		} // 0xE70BA7B90F8390DC  
		static void waypoint_playback_start_shooting_at_coord(Any p0, float p1, float p2, float p3, bool p4, Any p5)
		{
			invoke<Void>(0x057A25CFCC9DB671, p0, p1, p2, p3, p4, p5);
		} // 0x057A25CFCC9DB671 0xCDDB44D5  
		static void waypoint_playback_stop_aiming_or_shooting(Any p0) { invoke<Void>(0x47EFA040EBB8E2EA, p0); }
		// 0x47EFA040EBB8E2EA 0x6D7CF40C  
		static void assisted_movement_request_route(const char* route) { invoke<Void>(0x817268968605947A, route); }
		// 0x817268968605947A 0x48262EDA  
		static void assisted_movement_remove_route(const char* route) { invoke<Void>(0x3548536485DD792B, route); }
		// 0x3548536485DD792B 0xB3CEC06F  
		static bool assisted_movement_is_route_loaded(const char* route)
		{
			return invoke<bool>(0x60F9A4393A21F741, route);
		} // 0x60F9A4393A21F741 0x79B067AF  
		static void assisted_movement_set_route_properties(const char* route, int props)
		{
			invoke<Void>(0xD5002D78B7162E1B, route, props);
		} // 0xD5002D78B7162E1B 0x01CAAFCC  
		static void assisted_movement_override_load_distance_this_frame(float dist)
		{
			invoke<Void>(0x13945951E16EF912, dist);
		} // 0x13945951E16EF912 0x8FB923EC  
		static void task_vehicle_follow_waypoint_recording(Ped ped, Vehicle vehicle, const char* WPRecording, int p3,
			int p4, int p5, int p6, float p7, bool p8, float p9)
		{
			invoke<Void>(0x3123FAA6DB1CF7ED, ped, vehicle, WPRecording, p3, p4, p5, p6, p7, p8, p9);
		} // 0x3123FAA6DB1CF7ED 0x959818B6  
		static bool is_waypoint_playback_going_on_for_vehicle(Any p0) { return invoke<bool>(0xF5134943EA29868C, p0); }
		// 0xF5134943EA29868C 0x80DD15DB  
		static int get_vehicle_waypoint_progress(Vehicle vehicle) { return invoke<int>(0x9824CFF8FC66E159, vehicle); }
		// 0x9824CFF8FC66E159 0xD3CCF64E  
		static Any get_vehicle_waypoint_target_point(Any p0) { return invoke<Any>(0x416B62AC8B9E5BBD, p0); }
		// 0x416B62AC8B9E5BBD 0x81049608  
		static void vehicle_waypoint_playback_pause(Any p0) { invoke<Void>(0x8A4E6AC373666BC5, p0); }
		// 0x8A4E6AC373666BC5 0x7C00B415  
		static void vehicle_waypoint_playback_resume(Any p0) { invoke<Void>(0xDC04FCAA7839D492, p0); }
		// 0xDC04FCAA7839D492 0xBEB14C82  
		static void vehicle_waypoint_playback_use_default_speed(Any p0) { invoke<Void>(0x5CEB25A7D2848963, p0); }
		// 0x5CEB25A7D2848963 0x923C3AA4  
		static void vehicle_waypoint_playback_override_speed(Any p0, float p1)
		{
			invoke<Void>(0x121F0593E0A431D7, p0, p1);
		} // 0x121F0593E0A431D7 0xBE1E7BB4  
		static void task_set_blocking_of_non_temporary_events(Ped ped, bool toggle)
		{
			invoke<Void>(0x90D2156198831D69, ped, toggle);
		} // 0x90D2156198831D69 0x1B54FB6B  
		static void task_force_motion_state(Ped ped, Hash state, bool p2)
		{
			invoke<Void>(0x4F056E1AFFEF17AB, ped, state, p2);
		} // 0x4F056E1AFFEF17AB 0xCAD2EF77  
		static void _task_move_network(Ped ped, const char* task, float multiplier, bool p3, const char* animDict,
			int flags)
		{
			invoke<Void>(0x2D537BA194896636, ped, task, multiplier, p3, animDict, flags);
		} // 0x2D537BA194896636 0x6F5D215F  
		static void _task_move_network_advanced(Ped ped, const char* p1, float p2, float p3, float p4, float p5,
			float p6, float p7, Any p8, float p9, bool p10, const char* animDict,
			int flags)
		{
			invoke<Void>(0xD5B35BEA41919ACB, ped, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, animDict, flags);
		} // 0xD5B35BEA41919ACB 0x71A5C5DB  
		static bool _0x921ce12c489c4c41(int PlayerID) { return invoke<bool>(0x921CE12C489C4C41, PlayerID); }
		// 0x921CE12C489C4C41 0x902656EB  
		static bool _0x30ed88d5e0c56a37(Any p0) { return invoke<bool>(0x30ED88D5E0C56A37, p0); }
		// 0x30ED88D5E0C56A37 0x92FDBAE6  
		static Any _0xd01015c7316ae176(Ped ped, const char* p1) { return invoke<Any>(0xD01015C7316AE176, ped, p1); }
		// 0xD01015C7316AE176 0x885724DE  
		static Any _0xab13a5565480b6d9(Any p0, Any p1) { return invoke<Any>(0xAB13A5565480B6D9, p0, p1); }
		// 0xAB13A5565480B6D9  
		static const char* _0x717e4d1f2048376d(Ped ped) { return invoke<const char*>(0x717E4D1F2048376D, ped); }
		// 0x717E4D1F2048376D 0x96C0277B  
		static void _0xd5bb4025ae449a4e(Ped ped, const char* p1, float p2)
		{
			invoke<Void>(0xD5BB4025AE449A4E, ped, p1, p2);
		} // 0xD5BB4025AE449A4E 0xA79BE783  
		static void _0xb0a6cfd2c69c1088(Ped ped, const char* p1, bool p2)
		{
			invoke<Void>(0xB0A6CFD2C69C1088, ped, p1, p2);
		} // 0xB0A6CFD2C69C1088 0xF3538041  
		static bool _0xa7ffba498e4aaf67(Ped ped, const char* p1) { return invoke<bool>(0xA7FFBA498E4AAF67, ped, p1); }
		// 0xA7FFBA498E4AAF67 0x1EBB6F3D  
		static bool _0xb4f47213df45a64c(Ped ped, const char* p1) { return invoke<bool>(0xB4F47213DF45A64C, ped, p1); }
		// 0xB4F47213DF45A64C 0x72FA5EF2  
		static bool is_move_blend_ratio_still(Ped ped) { return invoke<bool>(0x349CE7B56DAFD95C, ped); }
		// 0x349CE7B56DAFD95C 0xE9DAF877  
		static bool is_move_blend_ratio_walking(Ped ped) { return invoke<bool>(0xF133BBBE91E1691F, ped); }
		// 0xF133BBBE91E1691F 0xD21639A8  
		static bool is_move_blend_ratio_running(Ped ped) { return invoke<bool>(0xD4D8636C0199A939, ped); }
		// 0xD4D8636C0199A939 0xE76A2353  
		static bool is_move_blend_ratio_sprinting(Ped ped) { return invoke<bool>(0x24A2AD74FA9814E2, ped); }
		// 0x24A2AD74FA9814E2 0xDD616893  
		static bool is_ped_still(Ped ped) { return invoke<bool>(0xAC29253EEF8F0180, ped); }
		// 0xAC29253EEF8F0180 0x09E3418D  
		static bool is_ped_walking(Ped ped) { return invoke<bool>(0xDE4C184B2B9B071A, ped); }
		// 0xDE4C184B2B9B071A 0x4B865C4A  
		static bool is_ped_running(Ped ped) { return invoke<bool>(0xC5286FFC176F28A2, ped); }
		// 0xC5286FFC176F28A2 0xE9A5578F  
		static bool is_ped_sprinting(Ped ped) { return invoke<bool>(0x57E457CD2C0FC168, ped); }
		// 0x57E457CD2C0FC168 0x4F3E0633  
		static bool is_ped_strafing(Ped ped) { return invoke<bool>(0xE45B7F222DE47E09, ped); }
		// 0xE45B7F222DE47E09 0xEFEED13C  
		static void task_synchronized_scene(Ped ped, int scene, const char* animDictionary, const char* animationName,
			float speed, float speedMultiplier, int duration, int flag,
			float playbackRate, Any p9)
		{
			invoke<Void>(0xEEA929141F699854, ped, scene, animDictionary, animationName, speed, speedMultiplier,
				duration, flag, playbackRate, p9);
		} // 0xEEA929141F699854 0x4F217E7B  
		static void task_sweep_aim_entity(Ped ped, const char* anim, const char* p2, const char* p3, const char* p4,
			int p5, Vehicle vehicle, float p7, float p8)
		{
			invoke<Void>(0x2047C02158D6405A, ped, anim, p2, p3, p4, p5, vehicle, p7, p8);
		} // 0x2047C02158D6405A 0x4D210467  
		static void update_task_sweep_aim_entity(Ped ped, Entity entity)
		{
			invoke<Void>(0xE4973DBDBE6E44B3, ped, entity);
		} // 0xE4973DBDBE6E44B3 0xF65F0F4F  
		static void task_sweep_aim_position(Any p0, Any* p1, Any* p2, Any* p3, Any* p4, Any p5, float p6, float p7,
			float p8, float p9, float p10)
		{
			invoke<Void>(0x7AFE8FDC10BC07D2, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10);
		} // 0x7AFE8FDC10BC07D2 0x1683FE66  
		static void update_task_sweep_aim_position(Any p0, float p1, float p2, float p3)
		{
			invoke<Void>(0xBB106883F5201FC4, p0, p1, p2, p3);
		} // 0xBB106883F5201FC4 0x6345EC80  
		static void task_arrest_ped(Ped ped, Ped target) { invoke<Void>(0xF3B9A78A178572B1, ped, target); }
		// 0xF3B9A78A178572B1 0xBC0F153D  
		static bool is_ped_running_arrest_task(Ped ped) { return invoke<bool>(0x3DC52677769B4AE0, ped); }
		// 0x3DC52677769B4AE0 0x6942DB7A  
		static bool is_ped_being_arrested(Ped ped) { return invoke<bool>(0x90A09F3A45FED688, ped); }
		// 0x90A09F3A45FED688 0x5FF6C2ED  
		static void uncuff_ped(Ped ped) { invoke<Void>(0x67406F2C8F87FC4F, ped); } // 0x67406F2C8F87FC4F 0xA23A1D61  
		static bool is_ped_cuffed(Ped ped) { return invoke<bool>(0x74E559B3BC910685, ped); }
		// 0x74E559B3BC910685 0x511CE741  
	}

	namespace gameplay
	{
		static int get_allocated_stack_size() { return invoke<int>(0x8B3CA62B1EF19B62); }
		// 0x8B3CA62B1EF19B62 0x4E9CA30A  
		static int _get_free_stack_slots_count(int stackSize) { return invoke<int>(0xFEAD16FC8F9DFC0F, stackSize); }
		// 0xFEAD16FC8F9DFC0F 0x11A178B8  
		static void set_random_seed(int time) { invoke<Void>(0x444D98F98C11F3EC, time); }
		// 0x444D98F98C11F3EC 0xDB3FEB5C  
		static void set_time_scale(float time) { invoke<Void>(0x1D408577D440E81E, time); }
		// 0x1D408577D440E81E 0xA7F84694  
		static void set_mission_flag(bool toggle) { invoke<Void>(0xC4301E5121A0ED73, toggle); }
		// 0xC4301E5121A0ED73 0x57592D52  
		static bool get_mission_flag() { return invoke<bool>(0xA33CDCCDA663159E); } // 0xA33CDCCDA663159E 0x95115F97  
		static void set_random_event_flag(Any p0) { invoke<Void>(0x971927086CFD2158, p0); }
		// 0x971927086CFD2158 0xA77F31E8  
		static Any get_random_event_flag() { return invoke<Any>(0xD2D57F1D764117B1); } // 0xD2D57F1D764117B1 0x794CC92C  
		static const char* _get_global_char_buffer() { return invoke<const char*>(0x24DA7D7667FD7B09); }
		// 0x24DA7D7667FD7B09  
		static void _0x4dcdf92bf64236cd(Any p0, Any p1) { invoke<Void>(0x4DCDF92BF64236CD, p0, p1); }
		// 0x4DCDF92BF64236CD  
		static void _0x31125fd509d9043f(Any p0) { invoke<Void>(0x31125FD509D9043F, p0); } // 0x31125FD509D9043F  
		static void _0xebd3205a207939ed(Any p0) { invoke<Void>(0xEBD3205A207939ED, p0); } // 0xEBD3205A207939ED  
		static void _0x97e7e2c04245115b(Any p0) { invoke<Void>(0x97E7E2C04245115B, p0); } // 0x97E7E2C04245115B  
		static void _0xeb078ca2b5e82add(Any p0, Any p1) { invoke<Void>(0xEB078CA2B5E82ADD, p0, p1); }
		// 0xEB078CA2B5E82ADD  
		static void _0x703cc7f60cbb2b57(Any p0) { invoke<Void>(0x703CC7F60CBB2B57, p0); } // 0x703CC7F60CBB2B57  
		static void _0x8951eb9c6906d3c8() { invoke<Void>(0x8951EB9C6906D3C8); } // 0x8951EB9C6906D3C8  
		static void _0xba4b8d83bdc75551(Any p0) { invoke<Void>(0xBA4B8D83BDC75551, p0); } // 0xBA4B8D83BDC75551  
		static bool _0xe8b9c0ec9e183f35() { return invoke<bool>(0xE8B9C0EC9E183F35); } // 0xE8B9C0EC9E183F35  
		static void _0x65d2ebb47e1cec21(bool p0) { invoke<Void>(0x65D2EBB47E1CEC21, p0); } // 0x65D2EBB47E1CEC21  
		static void _0x6f2135b6129620c1(bool p0) { invoke<Void>(0x6F2135B6129620C1, p0); }
		// 0x6F2135B6129620C1 0x8B2DE971  
		static void _0x8d74e26f54b4e5c3(const char* p0) { invoke<Void>(0x8D74E26F54B4E5C3, p0); }
		// 0x8D74E26F54B4E5C3 0xE77199F7  
		static bool _0xb335f761606db47c(Any* p0, Any* p1, Any p2, bool p3)
		{
			return invoke<bool>(0xB335F761606DB47C, p0, p1, p2, p3);
		} // 0xB335F761606DB47C  
		static Hash get_prev_weather_type_hash_name() { return invoke<Hash>(0x564B884A05EC45A3); }
		// 0x564B884A05EC45A3 0xA8171E9E  
		static Hash get_next_weather_type_hash_name() { return invoke<Hash>(0x711327CD09C8F162); }
		// 0x711327CD09C8F162 0x353E8056  
		static bool is_prev_weather_type(const char* weatherType)
		{
			return invoke<bool>(0x44F28F86433B10A9, weatherType);
		} // 0x44F28F86433B10A9 0x250ADA61  
		static bool is_next_weather_type(const char* weatherType)
		{
			return invoke<bool>(0x2FAA3A30BEC0F25D, weatherType);
		} // 0x2FAA3A30BEC0F25D 0x99CB167F  
		static void set_weather_type_persist(const char* weatherType) { invoke<Void>(0x704983DF373B198F, weatherType); }
		// 0x704983DF373B198F 0xC6C04C75  
		static void set_weather_type_now_persist(const char* weatherType)
		{
			invoke<Void>(0xED712CA327900C8A, weatherType);
		} // 0xED712CA327900C8A 0xC869FE97  
		static void set_weather_type_now(const char* weatherType) { invoke<Void>(0x29B487C359E19889, weatherType); }
		// 0x29B487C359E19889 0x361E9EAC  
		static void _set_weather_type_over_time(const char* weatherType, float time)
		{
			invoke<Void>(0xFB5045B7C42B75BF, weatherType, time);
		} // 0xFB5045B7C42B75BF 0x386F0D25  
		static void set_random_weather_type() { invoke<Void>(0x8B05F884CF7E8020); } // 0x8B05F884CF7E8020 0xE7AA1BC9  
		static void clear_weather_type_persist() { invoke<Void>(0xCCC39339BEF76CF5); } // 0xCCC39339BEF76CF5 0x6AB757D8  
		static void _get_weather_type_transition(Hash* weatherType1, Hash* weatherType2, float* percentWeather2)
		{
			invoke<Void>(0xF3BBE884A14BB413, weatherType1, weatherType2, percentWeather2);
		} // 0xF3BBE884A14BB413 0x9A5C1D56  
		static void _set_weather_type_transition(Hash weatherType1, Hash weatherType2, float percentWeather2)
		{
			invoke<Void>(0x578C752848ECFA0C, weatherType1, weatherType2, percentWeather2);
		} // 0x578C752848ECFA0C 0x5CA74040  
		static void set_override_weather(const char* weatherType) { invoke<Void>(0xA43D5C6FE51ADBEF, weatherType); }
		// 0xA43D5C6FE51ADBEF 0xD9082BB5  
		static void clear_override_weather() { invoke<Void>(0x338D2E3477711050); } // 0x338D2E3477711050 0x7740EA4E  
		static void _0xb8f87ead7533b176(float p0) { invoke<Void>(0xB8F87EAD7533B176, p0); }
		// 0xB8F87EAD7533B176 0x625181DC  
		static void _0xc3ead29ab273ece8(float p0) { invoke<Void>(0xC3EAD29AB273ECE8, p0); }
		// 0xC3EAD29AB273ECE8 0xBEBBFDC8  
		static void _0xa7a1127490312c36(float p0) { invoke<Void>(0xA7A1127490312C36, p0); }
		// 0xA7A1127490312C36 0x6926AB03  
		static void _0x31727907b2c43c55(float p0) { invoke<Void>(0x31727907B2C43C55, p0); }
		// 0x31727907B2C43C55 0xD447439D  
		static void _0x405591ec8fd9096d(float p0) { invoke<Void>(0x405591EC8FD9096D, p0); }
		// 0x405591EC8FD9096D 0x584E9C59  
		static void _0xf751b16fb32abc1d(float p0) { invoke<Void>(0xF751B16FB32ABC1D, p0); }
		// 0xF751B16FB32ABC1D 0x5656D578  
		static void _0xb3e6360dde733e82(float p0) { invoke<Void>(0xB3E6360DDE733E82, p0); }
		// 0xB3E6360DDE733E82 0x0DE40C28  
		static void _0x7c9c0b1eeb1f9072(float p0) { invoke<Void>(0x7C9C0B1EEB1F9072, p0); }
		// 0x7C9C0B1EEB1F9072 0x98C9138B  
		static void _0x6216b116083a7cb4(float p0) { invoke<Void>(0x6216B116083A7CB4, p0); }
		// 0x6216B116083A7CB4 0xFB1A9CDE  
		static void _0x9f5e6bb6b34540da(float p0) { invoke<Void>(0x9F5E6BB6B34540DA, p0); }
		// 0x9F5E6BB6B34540DA 0x1C0CAE89  
		static void _0xb9854dfde0d833d6(float p0) { invoke<Void>(0xB9854DFDE0D833D6, p0); }
		// 0xB9854DFDE0D833D6 0x4671AC2E  
		static void _0xc54a08c85ae4d410(float p0) { invoke<Void>(0xC54A08C85AE4D410, p0); }
		// 0xC54A08C85AE4D410 0xDA02F415  
		static void _0xa8434f1dff41d6e7(float p0) { invoke<Void>(0xA8434F1DFF41D6E7, p0); }
		// 0xA8434F1DFF41D6E7 0x5F3DDEC0  
		static void _0xc3c221addde31a11(float p0) { invoke<Void>(0xC3C221ADDDE31A11, p0); }
		// 0xC3C221ADDDE31A11 0x63A89684  
		static void set_wind(float speed) { invoke<Void>(0xAC3A74E8384A9919, speed); } // 0xAC3A74E8384A9919 0xC6294698  
		static void set_wind_speed(float speed) { invoke<Void>(0xEE09ECEDBABE47FC, speed); }
		// 0xEE09ECEDBABE47FC 0x45705F94  
		static float get_wind_speed() { return invoke<float>(0xA8CF1CC0AFCD3F12); } // 0xA8CF1CC0AFCD3F12 0x098F0F3C  
		static void set_wind_direction(float direction) { invoke<Void>(0xEB0F4468467B4528, direction); }
		// 0xEB0F4468467B4528 0x381AEEE9  
		static Vector3 get_wind_direction() { return invoke<Vector3>(0x1F400FEF721170DA); }
		// 0x1F400FEF721170DA 0x89499A0D  
		static void _set_rain_fx_intensity(float intensity) { invoke<Void>(0x643E26EA6E024D92, intensity); }
		// 0x643E26EA6E024D92  
		static Any* get_rain_level() { return invoke<Any*>(0x96695E368AD855F3); } // 0x96695E368AD855F3 0xC9F67F28  
		static Any get_snow_level() { return invoke<Any>(0xC5868A966E5BE3AE); } // 0xC5868A966E5BE3AE 0x1B09184F  
		static void _create_lightning_thunder() { invoke<Void>(0xF6062E089251C898); } // 0xF6062E089251C898 0xDF38165E  
		static void _0x02deaac8f8ea7fe7(const char* p0) { invoke<Void>(0x02DEAAC8F8EA7FE7, p0); } // 0x02DEAAC8F8EA7FE7  
		static void _0x11b56fbbf7224868(const char* p0) { invoke<Void>(0x11B56FBBF7224868, p0); }
		// 0x11B56FBBF7224868 0x8727A4C5  
		static void _set_cloud_hat_transition(const char* type, float transitionTime)
		{
			invoke<Void>(0xFC4842A34657BFCB, type, transitionTime);
		} // 0xFC4842A34657BFCB 0xED88FC61  
		static void _0xa74802fb8d0b7814(const char* p0, float p1) { invoke<Void>(0xA74802FB8D0B7814, p0, p1); }
		// 0xA74802FB8D0B7814 0xC9FA6E07  
		static void _clear_cloud_hat() { invoke<Void>(0x957E790EA1727B64); } // 0x957E790EA1727B64 0x2D7787BC  
		static void _set_cloud_hat_opacity(float opacity) { invoke<Void>(0xF36199225D6D8C86, opacity); }
		// 0xF36199225D6D8C86  
		static float _get_cloud_hat_opacity() { return invoke<float>(0x20AC25E781AE4A84); } // 0x20AC25E781AE4A84  
		static int get_game_timer() { return invoke<int>(0x9CD27B0045628463); } // 0x9CD27B0045628463 0xA4EA0691  
		static float get_frame_time() { return invoke<float>(0x15C40837039FFAF7); } // 0x15C40837039FFAF7 0x96374262  
		static float _get_benchmark_time() { return invoke<float>(0xE599A503B3837E1B); } // 0xE599A503B3837E1B  
		static int get_frame_count() { return invoke<int>(0xFC8202EFC642E6F2); } // 0xFC8202EFC642E6F2 0xB477A015  
		static float get_random_float_in_range(float startRange, float endRange)
		{
			return invoke<float>(0x313CE5879CEB6FCD, startRange, endRange);
		} // 0x313CE5879CEB6FCD 0x0562C4D0  
		static int get_random_int_in_range(int startRange, int endRange)
		{
			return invoke<int>(0xD53343AA4FB7DD28, startRange, endRange);
		} // 0xD53343AA4FB7DD28 0x4051115B  
		static bool get_ground_z_for_3d_coord(float x, float y, float z, float* groundZ, bool unk)
		{
			return invoke<bool>(0xC906A7DAB05C8D2B, x, y, z, groundZ, unk);
		} // 0xC906A7DAB05C8D2B 0xA1BFD5E0  
		static bool _get_ground_z_coord_with_offsets(float x, float y, float z, float* groundZ, Vector3* offsets)
		{
			return invoke<bool>(0x8BDC7BFC57A81E76, x, y, z, groundZ, offsets);
		} // 0x8BDC7BFC57A81E76 0x64D91CED  
		static float asin(float p0) { return invoke<float>(0xC843060B5765DCE7, p0); } // 0xC843060B5765DCE7 0x998E5CAD  
		static float acos(float p0) { return invoke<float>(0x1D08B970013C34B6, p0); } // 0x1D08B970013C34B6 0xF4038776  
		static float tan(float p0) { return invoke<float>(0x632106CC96E82E91, p0); } // 0x632106CC96E82E91 0xD320CE5E  
		static float atan(float p0) { return invoke<float>(0xA9D1795CD5043663, p0); } // 0xA9D1795CD5043663 0x7A03CC8E  
		static float atan2(float p0, float p1) { return invoke<float>(0x8927CBF9D22261A4, p0, p1); }
		// 0x8927CBF9D22261A4 0x2508AC81  
		static float get_distance_between_coords(float x1, float y1, float z1, float x2, float y2, float z2, bool useZ)
		{
			return invoke<float>(0xF1B760881820C952, x1, y1, z1, x2, y2, z2, useZ);
		} // 0xF1B760881820C952 0xF698765E  
		static float get_angle_between_2d_vectors(float x1, float y1, float x2, float y2)
		{
			return invoke<float>(0x186FC4BE848E1C92, x1, y1, x2, y2);
		} // 0x186FC4BE848E1C92 0xDBF75E58  
		static float get_heading_from_vector_2d(float dx, float dy)
		{
			return invoke<float>(0x2FFB6B224F4B2926, dx, dy);
		} // 0x2FFB6B224F4B2926 0xD209D52B  
		static float _0x7f8f6405f4777af6(float p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7,
			float p8, bool p9)
		{
			return invoke<float>(0x7F8F6405F4777AF6, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9);
		} // 0x7F8F6405F4777AF6 0x89459F0A  
		static Vector3 _0x21c235bc64831e5a(float p0, float p1, float p2, float p3, float p4, float p5, float p6,
			float p7, float p8, bool p9)
		{
			return invoke<Vector3>(0x21C235BC64831E5A, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9);
		} // 0x21C235BC64831E5A 0xCAECF37E  
		static bool _0xf56dfb7b61be7276(float p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7,
			float p8, float p9, float p10, float p11, Any* p12)
		{
			return invoke<bool>(0xF56DFB7B61BE7276, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12);
		} // 0xF56DFB7B61BE7276 0xC6CC812C  
		static void set_bit(int* address, int offset) { invoke<Void>(0x933D6A9EEC1BACD0, address, offset); }
		// 0x933D6A9EEC1BACD0 0x4EFE7E6B  
		static void clear_bit(int* address, int offset) { invoke<Void>(0xE80492A9AC099A93, address, offset); }
		// 0xE80492A9AC099A93 0x8BC9E618  
		static Hash get_hash_key(const char* string) { return invoke<Hash>(0xD24D37CC275948CC, string); }
		// 0xD24D37CC275948CC 0x98EFF6F1  
		static void _0xf2f6a2fa49278625(float p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7,
			float p8, Any* p9, Any* p10, Any* p11, Any* p12)
		{
			invoke<Void>(0xF2F6A2FA49278625, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12);
		} // 0xF2F6A2FA49278625 0x87B92190  
		static bool is_area_occupied(float p0, float p1, float p2, float p3, float p4, float p5, bool p6, bool p7,
			bool p8, bool p9, bool p10, Any p11, bool p12)
		{
			return invoke<bool>(0xA61B4DF533DCB56E, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12);
		} // 0xA61B4DF533DCB56E 0xC013972F  
		static bool is_position_occupied(float x, float y, float z, float range, bool p4, bool p5, bool p6, bool p7,
			bool p8, Any p9, bool p10)
		{
			return invoke<bool>(0xADCDE75E1C60F32D, x, y, z, range, p4, p5, p6, p7, p8, p9, p10);
		} // 0xADCDE75E1C60F32D 0x452E8D9E  
		static bool is_point_obscured_by_a_mission_entity(float p0, float p1, float p2, float p3, float p4, float p5,
			Any p6)
		{
			return invoke<bool>(0xE54E209C35FFA18D, p0, p1, p2, p3, p4, p5, p6);
		} // 0xE54E209C35FFA18D 0xC161558D  
		static void clear_area(float X, float Y, float Z, float radius, bool p4, bool ignoreCopCars, bool ignoreObjects,
			bool p7)
		{
			invoke<Void>(0xA56F01F3765B93A0, X, Y, Z, radius, p4, ignoreCopCars, ignoreObjects, p7);
		} // 0xA56F01F3765B93A0 0x854E9AB8  
		static void _clear_area_of_everything(float x, float y, float z, float radius, bool p4, bool p5, bool p6,
			bool p7)
		{
			invoke<Void>(0x957838AAF91BD12D, x, y, z, radius, p4, p5, p6, p7);
		} // 0x957838AAF91BD12D 0x20E4FFD9  
		static void clear_area_of_vehicles(float x, float y, float z, float radius, bool p4, bool p5, bool p6, bool p7,
			bool p8)
		{
			invoke<Void>(0x01C7B9B38428AEB6, x, y, z, radius, p4, p5, p6, p7, p8);
		} // 0x01C7B9B38428AEB6 0x63320F3C  
		static void clear_angled_area_of_vehicles(float p0, float p1, float p2, float p3, float p4, float p5, float p6,
			bool p7, bool p8, bool p9, bool p10, bool p11)
		{
			invoke<Void>(0x11DB3500F042A8AA, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11);
		} // 0x11DB3500F042A8AA 0xF11A3018  
		static void clear_area_of_objects(float x, float y, float z, float radius, int flags)
		{
			invoke<Void>(0xDD9B9B385AAC7F5B, x, y, z, radius, flags);
		} // 0xDD9B9B385AAC7F5B 0xBB720FE7  
		static void clear_area_of_peds(float x, float y, float z, float radius, int flags)
		{
			invoke<Void>(0xBE31FD6CE464AC59, x, y, z, radius, flags);
		} // 0xBE31FD6CE464AC59 0x25BE7FA8  
		static void clear_area_of_cops(float x, float y, float z, float radius, int flags)
		{
			invoke<Void>(0x04F8FC8FCF58F88D, x, y, z, radius, flags);
		} // 0x04F8FC8FCF58F88D 0x95C53824  
		static void clear_area_of_projectiles(float x, float y, float z, float radius, bool isNetworkGame)
		{
			invoke<Void>(0x0A1CB9094635D1A6, x, y, z, radius, isNetworkGame);
		} // 0x0A1CB9094635D1A6 0x18DB5434  
		static void _0x7ec6f9a478a6a512() { invoke<Void>(0x7EC6F9A478A6A512); } // 0x7EC6F9A478A6A512  
		static void set_save_menu_active(bool unk) { invoke<Void>(0xC9BF75D28165FF77, unk); }
		// 0xC9BF75D28165FF77 0xF5CCF164  
		static int _0x397baa01068baa96() { return invoke<int>(0x397BAA01068BAA96); } // 0x397BAA01068BAA96 0x39771F21  
		static void set_credits_active(bool toggle) { invoke<Void>(0xB938B7E6D3C0620C, toggle); }
		// 0xB938B7E6D3C0620C 0xEC2A0ECF  
		static void _0xb51b9ab9ef81868c(bool toggle) { invoke<Void>(0xB51B9AB9EF81868C, toggle); }
		// 0xB51B9AB9EF81868C 0x75B06B5A  
		static Any _0x075f1d57402c93ba() { return invoke<Any>(0x075F1D57402C93BA); } // 0x075F1D57402C93BA 0x2569C9A7  
		static void terminate_all_scripts_with_this_name(const char* scriptName)
		{
			invoke<Void>(0x9DC711BC69C548DF, scriptName);
		} // 0x9DC711BC69C548DF 0x9F861FD4  
		static void network_set_script_is_safe_for_network_game() { invoke<Void>(0x9243BAC96D64C050); }
		// 0x9243BAC96D64C050 0x878486CE  
		static int add_hospital_restart(float x, float y, float z, float p3, Any p4)
		{
			return invoke<int>(0x1F464EF988465A81, x, y, z, p3, p4);
		} // 0x1F464EF988465A81 0x4F3E3104  
		static void disable_hospital_restart(int hospitalIndex, bool toggle)
		{
			invoke<Void>(0xC8535819C450EBA8, hospitalIndex, toggle);
		} // 0xC8535819C450EBA8 0x09F49C72  
		static Any add_police_restart(float p0, float p1, float p2, float p3, Any p4)
		{
			return invoke<Any>(0x452736765B31FC4B, p0, p1, p2, p3, p4);
		} // 0x452736765B31FC4B 0xE96C29FE  
		static void disable_police_restart(int policeIndex, bool toggle)
		{
			invoke<Void>(0x23285DED6EBD7EA3, policeIndex, toggle);
		} // 0x23285DED6EBD7EA3 0x0A280324  
		static void _set_custom_respawn_position(float x, float y, float z, float heading)
		{
			invoke<Void>(0x706B5EDCAA7FA663, x, y, z, heading);
		} // 0x706B5EDCAA7FA663  
		static void _set_next_respawn_to_custom() { invoke<Void>(0xA2716D40842EAF79); } // 0xA2716D40842EAF79  
		static void _disable_automatic_respawn(bool disableRespawn)
		{
			invoke<Void>(0x2C2B3493FBF51C71, disableRespawn);
		} // 0x2C2B3493FBF51C71 0x296574AE  
		static void ignore_next_restart(bool toggle) { invoke<Void>(0x21FFB63D8C615361, toggle); }
		// 0x21FFB63D8C615361 0xDA13A4B6  
		static void set_fade_out_after_death(bool toggle) { invoke<Void>(0x4A18E01DF2C87B86, toggle); }
		// 0x4A18E01DF2C87B86 0xC9F6F0BC  
		static void set_fade_out_after_arrest(bool toggle) { invoke<Void>(0x1E0B4DC0D990A4E7, toggle); }
		// 0x1E0B4DC0D990A4E7 0xCB074B9D  
		static void set_fade_in_after_death_arrest(bool toggle) { invoke<Void>(0xDA66D2796BA33F12, toggle); }
		// 0xDA66D2796BA33F12 0xACDE6985  
		static void set_fade_in_after_load(bool toggle) { invoke<Void>(0xF3D78F59DFE18D79, toggle); }
		// 0xF3D78F59DFE18D79 0x6E00EB0B  
		static Any register_save_house(float p0, float p1, float p2, float p3, Any* p4, Any p5, Any p6)
		{
			return invoke<Any>(0xC0714D0A7EEECA54, p0, p1, p2, p3, p4, p5, p6);
		} // 0xC0714D0A7EEECA54 0x39C1849A  
		static void set_save_house(Any p0, bool p1, bool p2) { invoke<Void>(0x4F548CABEAE553BC, p0, p1, p2); }
		// 0x4F548CABEAE553BC 0xC3240BB4  
		static bool override_save_house(bool p0, float p1, float p2, float p3, float p4, bool p5, float p6, float p7)
		{
			return invoke<bool>(0x1162EA8AE9D24EEA, p0, p1, p2, p3, p4, p5, p6, p7);
		} // 0x1162EA8AE9D24EEA 0x47436C12  
		static Any _0xa4a0065e39c9f25c(Any p0, Any p1, Any p2, Any p3)
		{
			return invoke<Any>(0xA4A0065E39C9F25C, p0, p1, p2, p3);
		} // 0xA4A0065E39C9F25C 0xC4D71AB4  
		static void do_auto_save() { invoke<Void>(0x50EEAAD86232EE55); } // 0x50EEAAD86232EE55 0x54C44B1A  
		static Any _0x6e04f06094c87047() { return invoke<Any>(0x6E04F06094C87047); } // 0x6E04F06094C87047 0xA8546914  
		static bool is_auto_save_in_progress() { return invoke<bool>(0x69240733738C19A0); }
		// 0x69240733738C19A0 0x36F75399  
		static Any _0x2107a3773771186d() { return invoke<Any>(0x2107A3773771186D); } // 0x2107A3773771186D 0x78350773  
		static void _0x06462a961e94b67c() { invoke<Void>(0x06462A961E94B67C); } // 0x06462A961E94B67C 0x5A45B11A  
		static void begin_replay_stats(Any p0, Any p1) { invoke<Void>(0xE0E500246FF73D66, p0, p1); }
		// 0xE0E500246FF73D66 0x17F4F44D  
		static void _0x69fe6dc87bd2a5e9(Any p0) { invoke<Void>(0x69FE6DC87BD2A5E9, p0); }
		// 0x69FE6DC87BD2A5E9 0x81216EE0  
		static void end_replay_stats() { invoke<Void>(0xA23E821FBDF8A5F2); } // 0xA23E821FBDF8A5F2 0xCB570185  
		static Any _0xd642319c54aadeb6() { return invoke<Any>(0xD642319C54AADEB6); } // 0xD642319C54AADEB6 0xC58250F1  
		static Any _0x5b1f2e327b6b6fe1() { return invoke<Any>(0x5B1F2E327B6B6FE1); } // 0x5B1F2E327B6B6FE1 0x50C39926  
		static Any _0x2b626a0150e4d449() { return invoke<Any>(0x2B626A0150E4D449); } // 0x2B626A0150E4D449 0x710E5D1E  
		static Any _0xdc9274a7ef6b2867() { return invoke<Any>(0xDC9274A7EF6B2867); } // 0xDC9274A7EF6B2867 0xC7BD1AF0  
		static Any _0x8098c8d6597aae18(Any p0) { return invoke<Any>(0x8098C8D6597AAE18, p0); }
		// 0x8098C8D6597AAE18 0x22BE2423  
		static void clear_replay_stats() { invoke<Void>(0x1B1AB132A16FDA55); } // 0x1B1AB132A16FDA55 0xC47DFF02  
		static Any _0x72de52178c291cb5() { return invoke<Any>(0x72DE52178C291CB5); } // 0x72DE52178C291CB5 0xF62B3C48  
		static Any _0x44a0bdc559b35f6e() { return invoke<Any>(0x44A0BDC559B35F6E); } // 0x44A0BDC559B35F6E 0x3589452B  
		static Any _0xeb2104e905c6f2e9() { return invoke<Any>(0xEB2104E905C6F2E9); } // 0xEB2104E905C6F2E9  
		static Any _0x2b5e102e4a42f2bf() { return invoke<Any>(0x2B5E102E4A42F2BF); } // 0x2B5E102E4A42F2BF 0x144AAF22  
		static bool is_memory_card_in_use() { return invoke<bool>(0x8A75CE2956274ADD); }
		// 0x8A75CE2956274ADD 0x40CE4DFD  
		static void shoot_single_bullet_between_coords(float x1, float y1, float z1, float x2, float y2, float z2,
			int damage, bool p7, Hash weaponHash, Ped ownerPed,
			bool isAudible, bool isInvisible, float speed)
		{
			invoke<Void>(0x867654CBC7606F2C, x1, y1, z1, x2, y2, z2, damage, p7, weaponHash, ownerPed, isAudible,
				isInvisible, speed);
		} // 0x867654CBC7606F2C 0xCB7415AC  
		static void _shoot_single_bullet_between_coords_with_entity(float x1, float y1, float z1, float x2, float y2,
			float z2, int damage, bool p7, Hash weaponHash,
			Ped ownerPed, bool isAudible, bool isInvisible,
			float speed, Entity entity)
		{
			invoke<Void>(0xE3A7742E0B7A2F8B, x1, y1, z1, x2, y2, z2, damage, p7, weaponHash, ownerPed, isAudible,
				isInvisible, speed, entity);
		} // 0xE3A7742E0B7A2F8B 0x52ACCB7B  
		static void _shoot_single_bullet_between_coords_with_extra_params(
			float x1, float y1, float z1, float x2, float y2, float z2, int damage, bool p7, Hash weaponHash,
			Ped ownerPed, bool isAudible, bool isInvisible, float speed, Entity entity, bool p14, bool p15, bool p16,
			bool p17)
		{
			invoke<Void>(0xBFE5756E7407064A, x1, y1, z1, x2, y2, z2, damage, p7, weaponHash, ownerPed, isAudible,
				isInvisible, speed, entity, p14, p15, p16, p17);
		} // 0xBFE5756E7407064A  
		static void get_model_dimensions(Hash modelHash, Vector3* minimum, Vector3* maximum)
		{
			invoke<Void>(0x03E8D3D5F549087A, modelHash, minimum, maximum);
		} // 0x03E8D3D5F549087A 0x91ABB8E0  
		static void set_fake_wanted_level(int fakeWantedLevel) { invoke<Void>(0x1454F2448DE30163, fakeWantedLevel); }
		// 0x1454F2448DE30163 0x85B1C9FA  
		static int get_fake_wanted_level() { return invoke<int>(0x4C9296CBCD1B971E); } // 0x4C9296CBCD1B971E 0x0022A430  
		static bool is_bit_set(int address, int offset) { return invoke<bool>(0xA921AA820C25702F, address, offset); }
		// 0xA921AA820C25702F 0x902E26AC  
		static void using_mission_creator(bool toggle) { invoke<Void>(0xF14878FC50BEC6EE, toggle); }
		// 0xF14878FC50BEC6EE 0x20AB0B6B  
		static void _0xdea36202fc3382df(bool p0) { invoke<Void>(0xDEA36202FC3382DF, p0); }
		// 0xDEA36202FC3382DF 0x082BA6F2  
		static void set_minigame_in_progress(bool toggle) { invoke<Void>(0x19E00D7322C6F85B, toggle); }
		// 0x19E00D7322C6F85B 0x348B9046  
		static bool is_minigame_in_progress() { return invoke<bool>(0x2B4A15E44DE0F478); }
		// 0x2B4A15E44DE0F478 0x53A95E13  
		static bool is_this_a_minigame_script() { return invoke<bool>(0x7B30F65D7B710098); }
		// 0x7B30F65D7B710098 0x7605EF6F  
		static bool is_sniper_inverted() { return invoke<bool>(0x61A23B7EDA9BDA24); } // 0x61A23B7EDA9BDA24 0x5C3BF51B  
		static Any _0xd3d15555431ab793() { return invoke<Any>(0xD3D15555431AB793); } // 0xD3D15555431AB793 0xBAF17315  
		static int get_profile_setting(int profileSetting) { return invoke<int>(0xC488FF2356EA7791, profileSetting); }
		// 0xC488FF2356EA7791 0xD374BEBC  
		static bool are_strings_equal(const char* string1, const char* string2)
		{
			return invoke<bool>(0x0C515FAB3FF9EA92, string1, string2);
		} // 0x0C515FAB3FF9EA92 0x877C0BC5  
		static int compare_strings(const char* str1, const char* str2, bool matchCase, int maxLength)
		{
			return invoke<int>(0x1E34710ECD4AB0EB, str1, str2, matchCase, maxLength);
		} // 0x1E34710ECD4AB0EB 0xFE25A58F  
		static int absi(int value) { return invoke<int>(0xF0D31AD191A74F87, value); } // 0xF0D31AD191A74F87 0xB44677C5  
		static float absf(float value) { return invoke<float>(0x73D57CFFDD12C355, value); }
		// 0x73D57CFFDD12C355 0xAF6F6E0B  
		static bool is_sniper_bullet_in_area(float x1, float y1, float z1, float x2, float y2, float z2)
		{
			return invoke<bool>(0xFEFCF11B01287125, x1, y1, z1, x2, y2, z2);
		} // 0xFEFCF11B01287125 0x0483715C  
		static bool is_projectile_in_area(float x1, float y1, float z1, float x2, float y2, float z2,
			bool ownedByPlayer)
		{
			return invoke<bool>(0x5270A8FBC098C3F8, x1, y1, z1, x2, y2, z2, ownedByPlayer);
		} // 0x5270A8FBC098C3F8 0x78E1A557  
		static bool is_projectile_type_in_area(float x1, float y1, float z1, float x2, float y2, float z2, int type,
			bool p7)
		{
			return invoke<bool>(0x2E0DC353342C4A6D, x1, y1, z1, x2, y2, z2, type, p7);
		} // 0x2E0DC353342C4A6D 0x2B73BCF6  
		static bool is_projectile_type_in_angled_area(float p0, float p1, float p2, float p3, float p4, float p5,
			float p6, Any p7, bool p8)
		{
			return invoke<bool>(0xF0BC12401061DEA0, p0, p1, p2, p3, p4, p5, p6, p7, p8);
		} // 0xF0BC12401061DEA0 0xD1AE2681  
		static bool _0x34318593248c8fb2(float p0, float p1, float p2, Any p3, float p4, bool p5)
		{
			return invoke<bool>(0x34318593248C8FB2, p0, p1, p2, p3, p4, p5);
		} // 0x34318593248C8FB2 0xBE81F1E2  
		static Any _0x8d7a43ec6a5fea45(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8)
		{
			return invoke<Any>(0x8D7A43EC6A5FEA45, p0, p1, p2, p3, p4, p5, p6, p7, p8);
		} // 0x8D7A43EC6A5FEA45 0x1A40454B  
		static bool _0xdfb4138eefed7b81(Ped ped, Hash weaponHash, float radius, Entity* entity, bool p4)
		{
			return invoke<bool>(0xDFB4138EEFED7B81, ped, weaponHash, radius, entity, p4);
		} // 0xDFB4138EEFED7B81 0x6BDE5CE4  
		static Any _0x82fde6a57ee4ee44(Ped ped, Hash weaponhash, float p2, float p3, float p4, bool p5)
		{
			return invoke<Any>(0x82FDE6A57EE4EE44, ped, weaponhash, p2, p3, p4, p5);
		} // 0x82FDE6A57EE4EE44 0x507BC6F7  
		static bool is_bullet_in_angled_area(float p0, float p1, float p2, float p3, float p4, float p5, float p6,
			bool p7)
		{
			return invoke<bool>(0x1A8B5F3C01E2B477, p0, p1, p2, p3, p4, p5, p6, p7);
		} // 0x1A8B5F3C01E2B477 0xE2DB58F7  
		static bool is_bullet_in_area(float p0, float p1, float p2, float p3, bool p4)
		{
			return invoke<bool>(0x3F2023999AD51C1F, p0, p1, p2, p3, p4);
		} // 0x3F2023999AD51C1F 0xB54F46CA  
		static bool is_bullet_in_box(float p0, float p1, float p2, float p3, float p4, float p5, bool p6)
		{
			return invoke<bool>(0xDE0F6D7450D37351, p0, p1, p2, p3, p4, p5, p6);
		} // 0xDE0F6D7450D37351 0xAB73ED26  
		static bool has_bullet_impacted_in_area(float x, float y, float z, float p3, bool p4, bool p5)
		{
			return invoke<bool>(0x9870ACFB89A90995, x, y, z, p3, p4, p5);
		} // 0x9870ACFB89A90995 0x902BC7D9  
		static bool has_bullet_impacted_in_box(float p0, float p1, float p2, float p3, float p4, float p5, bool p6,
			bool p7)
		{
			return invoke<bool>(0xDC8C5D7CFEAB8394, p0, p1, p2, p3, p4, p5, p6, p7);
		} // 0xDC8C5D7CFEAB8394 0x2C2618CC  
		static bool is_orbis_version() { return invoke<bool>(0xA72BC0B675B1519E); } // 0xA72BC0B675B1519E 0x40282018  
		static bool is_durango_version() { return invoke<bool>(0x4D982ADB1978442D); } // 0x4D982ADB1978442D 0x46FB06A5  
		static bool is_xbox360_version() { return invoke<bool>(0xF6201B4DAF662A9D); } // 0xF6201B4DAF662A9D 0x24005CC8  
		static bool is_ps3_version() { return invoke<bool>(0xCCA1072C29D096C2); } // 0xCCA1072C29D096C2 0x4C0D5303  
		static bool is_pc_version() { return invoke<bool>(0x48AF36444B965238); } // 0x48AF36444B965238 0x4D5D9EE3  
		static bool is_aussie_version() { return invoke<bool>(0x9F1935CA1F724008); } // 0x9F1935CA1F724008 0x944BA1DC  
		static bool is_string_null(const char* string) { return invoke<bool>(0xF22B6C47C6EAB066, string); }
		// 0xF22B6C47C6EAB066 0x8E71E00F  
		static bool is_string_null_or_empty(const char* string) { return invoke<bool>(0xCA042B6957743895, string); }
		// 0xCA042B6957743895 0x42E9F2CA  
		static bool string_to_int(const char* string, int* outInteger)
		{
			return invoke<bool>(0x5A5F40FE637EB584, string, outInteger);
		} // 0x5A5F40FE637EB584 0x590A8160  
		static void set_bits_in_range(int* var, int rangeStart, int rangeEnd, int p3)
		{
			invoke<Void>(0x8EF07E15701D61ED, var, rangeStart, rangeEnd, p3);
		} // 0x8EF07E15701D61ED 0x32094719  
		static int get_bits_in_range(int var, int rangeStart, int rangeEnd)
		{
			return invoke<int>(0x53158863FCC0893A, var, rangeStart, rangeEnd);
		} // 0x53158863FCC0893A 0xCA03A1E5  
		static int add_stunt_jump(float p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7,
			float p8, float p9, float p10, float p11, float p12, float p13, float p14, Any p15,
			Any p16)
		{
			return invoke<int>(0x1A992DA297A4630C, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15,
				p16);
		} // 0x1A992DA297A4630C 0xB630E5FF  
		static int add_stunt_jump_angled(float p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7,
			float p8, float p9, float p10, float p11, float p12, float p13, float p14,
			float p15, float p16, Any p17, Any p18)
		{
			return invoke<int>(0xBBE5D803A5360CBF, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15,
				p16, p17, p18);
		} // 0xBBE5D803A5360CBF 0xB9B7E777  
		static void delete_stunt_jump(int p0) { invoke<Void>(0xDC518000E39DAE1F, p0); }
		// 0xDC518000E39DAE1F 0x840CB5DA  
		static void enable_stunt_jump_set(int p0) { invoke<Void>(0xE369A5783B866016, p0); }
		// 0xE369A5783B866016 0x9D1E7785  
		static void disable_stunt_jump_set(int p0) { invoke<Void>(0xA5272EBEDD4747F6, p0); }
		// 0xA5272EBEDD4747F6 0x644C9FA4  
		static void _0xd79185689f8fd5df(bool p0) { invoke<Void>(0xD79185689F8FD5DF, p0); }
		// 0xD79185689F8FD5DF 0x3C806A2D  
		static bool is_stunt_jump_in_progress() { return invoke<bool>(0x7A3F19700A4D0525); }
		// 0x7A3F19700A4D0525 0xF477D0B1  
		static bool is_stunt_jump_message_showing() { return invoke<bool>(0x2272B0A1343129F4); }
		// 0x2272B0A1343129F4 0x021636EE  
		static Any _0x996dd1e1e02f1008() { return invoke<Any>(0x996DD1E1E02F1008); } // 0x996DD1E1E02F1008 0x006F9BA2  
		static Any _0x6856ec3d35c81ea4() { return invoke<Any>(0x6856EC3D35C81EA4); } // 0x6856EC3D35C81EA4  
		static void cancel_stunt_jump() { invoke<Void>(0xE6B7B0ACD4E4B75E); } // 0xE6B7B0ACD4E4B75E 0xF43D9821  
		static void set_game_paused(bool toggle) { invoke<Void>(0x577D1284D6873711, toggle); }
		// 0x577D1284D6873711 0x8230FF6C  
		static void set_this_script_can_be_paused(bool toggle) { invoke<Void>(0xAA391C728106F7AF, toggle); }
		// 0xAA391C728106F7AF 0xA0C3CE29  
		static void set_this_script_can_remove_blips_created_by_any_script(bool toggle)
		{
			invoke<Void>(0xB98236CAAECEF897, toggle);
		} // 0xB98236CAAECEF897 0xD06F1720  
		static bool _has_button_combination_just_been_entered(Hash hash, int amount)
		{
			return invoke<bool>(0x071E2A839DE82D90, hash, amount);
		} // 0x071E2A839DE82D90 0xFF6191E1  
		static bool _has_cheat_string_just_been_entered(Hash hash) { return invoke<bool>(0x557E43C447E700A8, hash); }
		// 0x557E43C447E700A8  
		static void _use_freemode_map_behavior(bool toggle) { invoke<Void>(0x9BAE5AD2508DF078, toggle); }
		// 0x9BAE5AD2508DF078 0x721B2492  
		static void _set_unk_map_flag(int flag) { invoke<Void>(0xC5F0A8EBD3F361CE, flag); }
		// 0xC5F0A8EBD3F361CE 0xE202879D  
		static bool is_frontend_fading() { return invoke<bool>(0x7EA2B6AF97ECA6ED); } // 0x7EA2B6AF97ECA6ED 0x8FF6232C  
		static void populate_now() { invoke<Void>(0x7472BB270D7B4F3E); } // 0x7472BB270D7B4F3E 0x72C20700  
		static int get_index_of_current_level() { return invoke<int>(0xCBAD6729F7B1F4FC); }
		// 0xCBAD6729F7B1F4FC 0x6F203C6E  
		static void set_gravity_level(int level) { invoke<Void>(0x740E14FAD5842351, level); }
		// 0x740E14FAD5842351 0x2D833F4A  
		static void start_save_data(Any* p0, Any p1, bool p2) { invoke<Void>(0xA9575F812C6A7997, p0, p1, p2); }
		// 0xA9575F812C6A7997 0x881A694D  
		static void stop_save_data() { invoke<Void>(0x74E20C9145FB66FD); } // 0x74E20C9145FB66FD 0x3B1C07C8  
		static Any _0xa09f896ce912481f(bool p0) { return invoke<Any>(0xA09F896CE912481F, p0); }
		// 0xA09F896CE912481F 0x9EF0BC64  
		static void register_int_to_save(Any* p0, const char* name) { invoke<Void>(0x34C9EE5986258415, p0, name); }
		// 0x34C9EE5986258415 0xB930956F  
		static void _0xa735353c77334ea0(Any* p0, Any* p1) { invoke<Void>(0xA735353C77334EA0, p0, p1); }
		// 0xA735353C77334EA0  
		static void register_enum_to_save(Any* p0, const char* name) { invoke<Void>(0x10C2FA78D0E128A1, p0, name); }
		// 0x10C2FA78D0E128A1 0x9B38374A  
		static void register_float_to_save(Any* p0, const char* name) { invoke<Void>(0x7CAEC29ECB5DFEBB, p0, name); }
		// 0x7CAEC29ECB5DFEBB 0xDB06F7AD  
		static void register_bool_to_save(Any* p0, const char* name) { invoke<Void>(0xC8F4131414C835A1, p0, name); }
		// 0xC8F4131414C835A1 0x5417E0E0  
		static void register_text_label_to_save(Any* p0, const char* name)
		{
			invoke<Void>(0xEDB1232C5BEAE62F, p0, name);
		} // 0xEDB1232C5BEAE62F 0x284352C4  
		static void _0x6f7794f28c6b2535(Any* p0, const char* name) { invoke<Void>(0x6F7794F28C6B2535, p0, name); }
		// 0x6F7794F28C6B2535 0xE2089749  
		static void _0x48f069265a0e4bec(Any* p0, const char* name) { invoke<Void>(0x48F069265A0E4BEC, p0, name); }
		// 0x48F069265A0E4BEC 0xF91B8C33  
		static void _0x8269816f6cfd40f8(Any* p0, const char* name) { invoke<Void>(0x8269816F6CFD40F8, p0, name); }
		// 0x8269816F6CFD40F8 0x74E8FAD9  
		static void _0xfaa457ef263e8763(Any* p0, const char* name) { invoke<Void>(0xFAA457EF263E8763, p0, name); }
		// 0xFAA457EF263E8763 0x6B4335DD  
		static void _start_save_struct(Any* p0, int p1, const char* structName)
		{
			invoke<Void>(0xBF737600CDDBEADD, p0, p1, structName);
		} // 0xBF737600CDDBEADD 0xFB45728E  
		static void stop_save_struct() { invoke<Void>(0xEB1774DF12BB9F12); } // 0xEB1774DF12BB9F12 0xC2624A28  
		static void _start_save_array(Any* p0, int p1, const char* arrayName)
		{
			invoke<Void>(0x60FE567DF1B1AF9D, p0, p1, arrayName);
		} // 0x60FE567DF1B1AF9D 0x893A342C  
		static void stop_save_array() { invoke<Void>(0x04456F95153C6BE4); } // 0x04456F95153C6BE4 0x0CAD8217  
		static void enable_dispatch_service(int dispatchService, bool toggle)
		{
			invoke<Void>(0xDC0F817884CDD856, dispatchService, toggle);
		} // 0xDC0F817884CDD856 0x0B710A51  
		static void _0x9b2bd3773123ea2f(int type, bool toggle) { invoke<Void>(0x9B2BD3773123EA2F, type, toggle); }
		// 0x9B2BD3773123EA2F 0xE0F0684F  
		static int _get_number_of_dispatched_units_for_player(int dispatchService)
		{
			return invoke<int>(0xEB4A0C2D56441717, dispatchService);
		} // 0xEB4A0C2D56441717 0x3CE5BF6B  
		static bool create_incident(int incidentType, float x, float y, float z, int p5, float radius,
			int* outIncidentID)
		{
			return invoke<bool>(0x3F892CAF67444AE7, incidentType, x, y, z, p5, radius, outIncidentID);
		} // 0x3F892CAF67444AE7 0xFC5FF7B3  
		static bool create_incident_with_entity(int incidentType, Ped ped, int amountOfPeople, float radius,
			int* outIncidentID)
		{
			return invoke<bool>(0x05983472F0494E60, incidentType, ped, amountOfPeople, radius, outIncidentID);
		} // 0x05983472F0494E60 0xBBC35B03  
		static void delete_incident(int incidentId) { invoke<Void>(0x556C1AA270D5A207, incidentId); }
		// 0x556C1AA270D5A207 0x212BD0DC  
		static bool is_incident_valid(int incidentId) { return invoke<bool>(0xC8BC6461E629BEAA, incidentId); }
		// 0xC8BC6461E629BEAA 0x31FD0BA4  
		static void _0xb08b85d860e7ba3c(Any p0, Any p1, Any p2) { invoke<Void>(0xB08B85D860E7BA3C, p0, p1, p2); }
		// 0xB08B85D860E7BA3C 0x0242D88E  
		static void _0xd261ba3e7e998072(Any p0, float p1) { invoke<Void>(0xD261BA3E7E998072, p0, p1); }
		// 0xD261BA3E7E998072 0x1F38102E  
		static bool find_spawn_point_in_direction(float x1, float y1, float z1, float x2, float y2, float z2,
			float distance, Vector3* spawnPoint)
		{
			return invoke<bool>(0x6874E2190B0C1972, x1, y1, z1, x2, y2, z2, distance, spawnPoint);
		} // 0x6874E2190B0C1972 0x71AEFD77  
		static Any _0x67f6413d3220e18d(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8)
		{
			return invoke<Any>(0x67F6413D3220E18D, p0, p1, p2, p3, p4, p5, p6, p7, p8);
		} // 0x67F6413D3220E18D 0x42BF09B3  
		static bool _0x1327e2fe9746baee(Any p0) { return invoke<bool>(0x1327E2FE9746BAEE, p0); } // 0x1327E2FE9746BAEE  
		static void _0xb129e447a2eda4bf(Any p0, bool p1) { invoke<Void>(0xB129E447A2EDA4BF, p0, p1); }
		// 0xB129E447A2EDA4BF 0xFBDBE374  
		static Any _0x32c7a7e8c43a1f80(float p0, float p1, float p2, float p3, float p4, float p5, bool p6, bool p7)
		{
			return invoke<Any>(0x32C7A7E8C43A1F80, p0, p1, p2, p3, p4, p5, p6, p7);
		} // 0x32C7A7E8C43A1F80  
		static void _0xe6869becdd8f2403(Any p0, bool p1) { invoke<Void>(0xE6869BECDD8F2403, p0, p1); }
		// 0xE6869BECDD8F2403  
		static void enable_tennis_mode(Ped ped, bool toggle, bool p2)
		{
			invoke<Void>(0x28A04B411933F8A6, ped, toggle, p2);
		} // 0x28A04B411933F8A6 0x0BD3F9EC  
		static bool is_tennis_mode(Ped ped) { return invoke<bool>(0x5D5479D115290C3F, ped); }
		// 0x5D5479D115290C3F 0x04A947BA  
		static void _0xe266ed23311f24d4(Any p0, Any* p1, Any* p2, float p3, float p4, bool p5)
		{
			invoke<Void>(0xE266ED23311F24D4, p0, p1, p2, p3, p4, p5);
		} // 0xE266ED23311F24D4 0xC20A7D2B  
		static bool _0x17df68d720aa77f8(Any p0) { return invoke<bool>(0x17DF68D720AA77F8, p0); }
		// 0x17DF68D720AA77F8 0x8501E727  
		static bool _0x19bfed045c647c49(Any p0) { return invoke<bool>(0x19BFED045C647C49, p0); }
		// 0x19BFED045C647C49 0x1A332D2D  
		static bool _0xe95b0c7d5ba3b96b(Any p0) { return invoke<bool>(0xE95B0C7D5BA3B96B, p0); } // 0xE95B0C7D5BA3B96B  
		static void _0x8fa9c42fc5d7c64b(Any p0, Any p1, float p2, float p3, float p4, bool p5)
		{
			invoke<Void>(0x8FA9C42FC5D7C64B, p0, p1, p2, p3, p4, p5);
		} // 0x8FA9C42FC5D7C64B 0x0C8865DF  
		static void _0x54f157e0336a3822(Any p0, const char* p1, float p2)
		{
			invoke<Void>(0x54F157E0336A3822, p0, p1, p2);
		} // 0x54F157E0336A3822 0x49F977A9  
		static void _0xd10f442036302d50(Any p0, Any p1, Any p2) { invoke<Void>(0xD10F442036302D50, p0, p1, p2); }
		// 0xD10F442036302D50 0x6F009E33  
		static void reset_dispatch_ideal_spawn_distance() { invoke<Void>(0x77A84429DD9F0A15); }
		// 0x77A84429DD9F0A15 0xDA65ECAA  
		static void set_dispatch_ideal_spawn_distance(float p0) { invoke<Void>(0x6FE601A64180D423, p0); }
		// 0x6FE601A64180D423 0x6283BE32  
		static void set_dispatch_time_between_spawn_attempts(Any p0, float p1)
		{
			invoke<Void>(0x44F7CBC1BEB3327D, p0, p1);
		} // 0x44F7CBC1BEB3327D 0xABADB709  
		static void set_dispatch_time_between_spawn_attempts_multiplier(Any p0, float p1)
		{
			invoke<Void>(0x48838ED9937A15D1, p0, p1);
		} // 0x48838ED9937A15D1 0x1C996BCD  
		static Any _0x918c7b2d2ff3928b(float p0, float p1, float p2, float p3, float p4, float p5, float p6)
		{
			return invoke<Any>(0x918C7B2D2FF3928B, p0, p1, p2, p3, p4, p5, p6);
		} // 0x918C7B2D2FF3928B 0xF557BAF9  
		static Any _0x2d4259f1feb81da9(float p0, float p1, float p2, float p3)
		{
			return invoke<Any>(0x2D4259F1FEB81DA9, p0, p1, p2, p3);
		} // 0x2D4259F1FEB81DA9  
		static void remove_dispatch_spawn_blocking_area(Any p0) { invoke<Void>(0x264AC28B01B353A5, p0); }
		// 0x264AC28B01B353A5 0xA8D2FB92  
		static void reset_dispatch_spawn_blocking_areas() { invoke<Void>(0xAC7BFD5C1D83EA75); }
		// 0xAC7BFD5C1D83EA75 0x9A17F835  
		static void _0xd9f692d349249528() { invoke<Void>(0xD9F692D349249528); } // 0xD9F692D349249528 0xE0C9307E  
		static void _0xe532ec1a63231b4f(Any p0, Any p1) { invoke<Void>(0xE532EC1A63231B4F, p0, p1); }
		// 0xE532EC1A63231B4F 0xA0D8C749  
		static void _0xb8721407ee9c3ff6(Any p0, Any p1, Any p2) { invoke<Void>(0xB8721407EE9C3FF6, p0, p1, p2); }
		// 0xB8721407EE9C3FF6 0x24A4E0B2  
		static void _0xb3cd58cca6cda852() { invoke<Void>(0xB3CD58CCA6CDA852); } // 0xB3CD58CCA6CDA852 0x66C3C59C  
		static void _0x2587a48bc88dfadf(bool p0) { invoke<Void>(0x2587A48BC88DFADF, p0); }
		// 0x2587A48BC88DFADF 0xD9660339  
		static void _display_onscreen_keyboard_2(int p0, const char* windowTitle, Any* p2, const char* defaultText,
			const char* defaultConcat1, const char* defaultConcat2,
			const char* defaultConcat3, const char* defaultConcat4,
			const char* defaultConcat5, const char* defaultConcat6,
			const char* defaultConcat7, int maxInputLength)
		{
			invoke<Void>(0xCA78CFA0366592FE, p0, windowTitle, p2, defaultText, defaultConcat1, defaultConcat2,
				defaultConcat3, defaultConcat4, defaultConcat5, defaultConcat6, defaultConcat7,
				maxInputLength);
		} // 0xCA78CFA0366592FE 0xD2688412  
		static void display_onscreen_keyboard(int p0, const char* windowTitle, const char* p2, const char* defaultText,
			const char* defaultConcat1, const char* defaultConcat2,
			const char* defaultConcat3, int maxInputLength)
		{
			invoke<Void>(0x00DC833F2568DBF6, p0, windowTitle, p2, defaultText, defaultConcat1, defaultConcat2,
				defaultConcat3, maxInputLength);
		} // 0x00DC833F2568DBF6 0xAD99F2CE  
		static int update_onscreen_keyboard() { return invoke<int>(0x0CF2B696BBF945AE); }
		// 0x0CF2B696BBF945AE 0x23D0A1CE  
		static const char* get_onscreen_keyboard_result() { return invoke<const char*>(0x8362B09B91893647); }
		// 0x8362B09B91893647 0x44828FB3  
		static void _0x3ed1438c1f5c6612(int p0) { invoke<Void>(0x3ED1438C1F5C6612, p0); }
		// 0x3ED1438C1F5C6612 0x3301EA47  
		static void _remove_stealth_kill(Hash hash, bool p1) { invoke<Void>(0xA6A12939F16D85BE, hash, p1); }
		// 0xA6A12939F16D85BE 0x42B484ED  
		static void _0x1eae0a6e978894a2(int p0, bool p1) { invoke<Void>(0x1EAE0A6E978894A2, p0, p1); }
		// 0x1EAE0A6E978894A2 0x8F60366E  
		static void set_explosive_ammo_this_frame(Player player) { invoke<Void>(0xA66C71C98D5F2CFB, player); }
		// 0xA66C71C98D5F2CFB 0x2EAFA1D1  
		static void set_fire_ammo_this_frame(Player player) { invoke<Void>(0x11879CDD803D30F4, player); }
		// 0x11879CDD803D30F4 0x7C18FC8A  
		static void set_explosive_melee_this_frame(Player player) { invoke<Void>(0xFF1BED81BFDC0FE0, player); }
		// 0xFF1BED81BFDC0FE0 0x96663D56  
		static void set_super_jump_this_frame(Player player) { invoke<Void>(0x57FFF03E423A4C0B, player); }
		// 0x57FFF03E423A4C0B 0x86745EF3  
		static bool _0x6fddf453c0c756ec() { return invoke<bool>(0x6FDDF453C0C756EC); } // 0x6FDDF453C0C756EC 0xC3C10FCC  
		static void _0xfb00ca71da386228() { invoke<Void>(0xFB00CA71DA386228); } // 0xFB00CA71DA386228 0x054EC103  
		static Any _0x5aa3befa29f03ad4() { return invoke<Any>(0x5AA3BEFA29F03AD4); } // 0x5AA3BEFA29F03AD4 0x46B5A15C  
		static void _0xe3d969d2785ffb5e() { invoke<Void>(0xE3D969D2785FFB5E); } // 0xE3D969D2785FFB5E  
		static void _reset_localplayer_state() { invoke<Void>(0xC0AA53F866B3134D); } // 0xC0AA53F866B3134D 0x5D209F25  
		static void _0x0a60017f841a54f2(Any p0, Any p1, Any p2, Any p3)
		{
			invoke<Void>(0x0A60017F841A54F2, p0, p1, p2, p3);
		} // 0x0A60017F841A54F2 0x2D33F15A  
		static void _0x1ff6bf9a63e5757f() { invoke<Void>(0x1FF6BF9A63E5757F); } // 0x1FF6BF9A63E5757F 0xDF99925C  
		static void _0x1bb299305c3e8c13(Any p0, Any p1, Any p2, Any p3)
		{
			invoke<Void>(0x1BB299305C3E8C13, p0, p1, p2, p3);
		} // 0x1BB299305C3E8C13 0xA27F4472  
		static bool _0x8ef5573a1f801a5c(Any p0, Any* p1, Any* p2)
		{
			return invoke<bool>(0x8EF5573A1F801A5C, p0, p1, p2);
		} // 0x8EF5573A1F801A5C 0x07FF553F  
		static void _0x92790862e36c2ada() { invoke<Void>(0x92790862E36C2ADA); } // 0x92790862E36C2ADA  
		static void _0xc7db36c24634f52b() { invoke<Void>(0xC7DB36C24634F52B); } // 0xC7DB36C24634F52B  
		static void _0x437138b6a830166a() { invoke<Void>(0x437138B6A830166A); } // 0x437138B6A830166A  
		static void _0x37deb0aa183fb6d8() { invoke<Void>(0x37DEB0AA183FB6D8); } // 0x37DEB0AA183FB6D8  
		static Any _0xea2f2061875eed90() { return invoke<Any>(0xEA2F2061875EED90); } // 0xEA2F2061875EED90  
		static Any _0x3bbbd13e5041a79e() { return invoke<Any>(0x3BBBD13E5041A79E); } // 0x3BBBD13E5041A79E  
		static bool _0xa049a5be0f04f2f8() { return invoke<bool>(0xA049A5BE0F04F2F8); } // 0xA049A5BE0F04F2F8  
		static Any _0x4750fc27570311ec() { return invoke<Any>(0x4750FC27570311EC); } // 0x4750FC27570311EC  
		static Any _0x1b2366c3f2a5c8df() { return invoke<Any>(0x1B2366C3F2A5C8DF); } // 0x1B2366C3F2A5C8DF  
		static void _force_social_club_update() { invoke<Void>(0xEB6891F03362FB12); } // 0xEB6891F03362FB12  
		static Any _0x14832bf2aba53fc5() { return invoke<Any>(0x14832BF2ABA53FC5); } // 0x14832BF2ABA53FC5  
		static void _0xc79ae21974b01fb2() { invoke<Void>(0xC79AE21974B01FB2); } // 0xC79AE21974B01FB2  
		static bool _0x684a41975f077262() { return invoke<bool>(0x684A41975F077262); } // 0x684A41975F077262  
		static Any _0xabb2fa71c83a1b72() { return invoke<Any>(0xABB2FA71C83A1B72); } // 0xABB2FA71C83A1B72  
		static void _show_ped_in_pause_menu(bool toggle) { invoke<Void>(0x4EBB7E87AA0DBED4, toggle); }
		// 0x4EBB7E87AA0DBED4  
		static bool _0x9689123e3f213aa5() { return invoke<bool>(0x9689123E3F213AA5); } // 0x9689123E3F213AA5  
		static void _0x9d8d44adbba61ef2(bool p0) { invoke<Void>(0x9D8D44ADBBA61EF2, p0); } // 0x9D8D44ADBBA61EF2  
		static void _0x23227df0b2115469() { invoke<Void>(0x23227DF0B2115469); } // 0x23227DF0B2115469  
		static Any _0xd10282b6e3751ba0() { return invoke<Any>(0xD10282B6E3751BA0); } // 0xD10282B6E3751BA0  
	}

	namespace audio
	{
		static void play_ped_ringtone(const char* ringtoneName, Ped ped, bool p2)
		{
			invoke<Void>(0xF9E56683CA8E11A5, ringtoneName, ped, p2);
		} // 0xF9E56683CA8E11A5 0x1D530E47  
		static bool is_ped_ringtone_playing(Ped ped) { return invoke<bool>(0x1E8E5E20937E3137, ped); }
		// 0x1E8E5E20937E3137 0xFE576EE4  
		static void stop_ped_ringtone(Ped ped) { invoke<Void>(0x6C5AE23EFA885092, ped); }
		// 0x6C5AE23EFA885092 0xFEEA107C  
		static bool is_mobile_phone_call_ongoing() { return invoke<bool>(0x7497D2CE2C30D24C); }
		// 0x7497D2CE2C30D24C 0x4ED1400A  
		static Any _0xc8b1b2425604cdd0() { return invoke<Any>(0xC8B1B2425604CDD0); } // 0xC8B1B2425604CDD0 0x16FB88B5  
		static void create_new_scripted_conversation() { invoke<Void>(0xD2C91A0B572AAE56); }
		// 0xD2C91A0B572AAE56 0xB2BC25F8  
		static void add_line_to_conversation(int p0, const char* p1, const char* p2, int p3, int p4, bool p5, bool p6,
			bool p7, bool p8, int p9, bool p10, bool p11, bool p12)
		{
			invoke<Void>(0xC5EF963405593646, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12);
		} // 0xC5EF963405593646 0x96CD0513  
		static void add_ped_to_conversation(Any p0, Any ped, const char* p2)
		{
			invoke<Void>(0x95D9F4BC443956E7, p0, ped, p2);
		} // 0x95D9F4BC443956E7 0xF8D5EB86  
		static void _0x33e3c6c6f2f0b506(Any p0, float p1, float p2, float p3)
		{
			invoke<Void>(0x33E3C6C6F2F0B506, p0, p1, p2, p3);
		} // 0x33E3C6C6F2F0B506 0x73C6F979  
		static void _0x892b6ab8f33606f5(Any p0, Any p1) { invoke<Void>(0x892B6AB8F33606F5, p0, p1); }
		// 0x892B6AB8F33606F5 0x88203DDA  
		static void set_microphone_position(bool p0, float x1, float y1, float z1, float x2, float y2, float z2,
			float x3, float y3, float z3)
		{
			invoke<Void>(0xB6AE90EDDE95C762, p0, x1, y1, z1, x2, y2, z2, x3, y3, z3);
		} // 0xB6AE90EDDE95C762 0xAD7BB191  
		static void _0x0b568201dd99f0eb(bool p0) { invoke<Void>(0x0B568201DD99F0EB, p0); }
		// 0x0B568201DD99F0EB 0x1193ED6E  
		static void _0x61631f5df50d1c34(bool p0) { invoke<Void>(0x61631F5DF50D1C34, p0); } // 0x61631F5DF50D1C34  
		static void start_script_phone_conversation(bool p0, bool p1) { invoke<Void>(0x252E5F915EABB675, p0, p1); }
		// 0x252E5F915EABB675 0x38E42D07  
		static void preload_script_phone_conversation(bool p0, bool p1) { invoke<Void>(0x6004BCB0E226AAEA, p0, p1); }
		// 0x6004BCB0E226AAEA 0x9ACB213A  
		static void start_script_conversation(bool p0, bool p1, bool p2, bool p3)
		{
			invoke<Void>(0x6B17C62C9635D2DC, p0, p1, p2, p3);
		} // 0x6B17C62C9635D2DC 0xE5DE7D9D  
		static void preload_script_conversation(bool p0, bool p1, bool p2, bool p3)
		{
			invoke<Void>(0x3B3CAD6166916D87, p0, p1, p2, p3);
		} // 0x3B3CAD6166916D87 0xDDF5C579  
		static void start_preloaded_conversation() { invoke<Void>(0x23641AFE870AF385); }
		// 0x23641AFE870AF385 0xA170261B  
		static Any _0xe73364db90778ffa() { return invoke<Any>(0xE73364DB90778FFA); } // 0xE73364DB90778FFA 0x336F3D35  
		static bool is_scripted_conversation_ongoing() { return invoke<bool>(0x16754C556D2EDE3D); }
		// 0x16754C556D2EDE3D 0xCB8FD96F  
		static bool is_scripted_conversation_loaded() { return invoke<bool>(0xDF0D54BE7A776737); }
		// 0xDF0D54BE7A776737 0xE1870EA9  
		static Any get_current_scripted_conversation_line() { return invoke<Any>(0x480357EE890C295A); }
		// 0x480357EE890C295A 0x9620E41F  
		static void pause_scripted_conversation(bool p0) { invoke<Void>(0x8530AD776CD72B12, p0); }
		// 0x8530AD776CD72B12 0xE2C9C6F8  
		static void restart_scripted_conversation() { invoke<Void>(0x9AEB285D1818C9AC); }
		// 0x9AEB285D1818C9AC 0x6CB24B56  
		static Any stop_scripted_conversation(bool p0) { return invoke<Any>(0xD79DEEFB53455EBA, p0); }
		// 0xD79DEEFB53455EBA 0xAB77DA7D  
		static void skip_to_next_scripted_conversation_line() { invoke<Void>(0x9663FE6B7A61EB00); }
		// 0x9663FE6B7A61EB00 0x85C98304  
		static void interrupt_conversation(Any p0, Any* p1, Any* p2) { invoke<Void>(0xA018A12E5C5C2FA6, p0, p1, p2); }
		// 0xA018A12E5C5C2FA6 0xF3A67AF3  
		static void _0x8a694d7a68f8dc38(Ped p0, const char* p1, const char* p2)
		{
			invoke<Void>(0x8A694D7A68F8DC38, p0, p1, p2);
		} // 0x8A694D7A68F8DC38  
		static Any _0xaa19f5572c38b564(Any* p0) { return invoke<Any>(0xAA19F5572C38B564, p0); }
		// 0xAA19F5572C38B564 0xB58B8FF3  
		static void _0xb542de8c3d1cb210(bool p0) { invoke<Void>(0xB542DE8C3D1CB210, p0); }
		// 0xB542DE8C3D1CB210 0x789D8C6C  
		static void register_script_with_audio(int p0) { invoke<Void>(0xC6ED9D5092438D91, p0); }
		// 0xC6ED9D5092438D91 0xA6203643  
		static void unregister_script_with_audio() { invoke<Void>(0xA8638BE228D4751A); }
		// 0xA8638BE228D4751A 0x66728EFE  
		static bool request_mission_audio_bank(const char* p0, bool p1)
		{
			return invoke<bool>(0x7345BDD95E62E0F2, p0, p1);
		} // 0x7345BDD95E62E0F2 0x916E37CA  
		static bool request_ambient_audio_bank(const char* p0, bool p1)
		{
			return invoke<bool>(0xFE02FFBED8CA9D99, p0, p1);
		} // 0xFE02FFBED8CA9D99 0x23C88BC7  
		static bool request_script_audio_bank(const char* p0, bool p1)
		{
			return invoke<bool>(0x2F844A8B08D76685, p0, p1);
		} // 0x2F844A8B08D76685 0x21322887  
		static Any hint_ambient_audio_bank(Any p0, Any p1) { return invoke<Any>(0x8F8C0E370AE62F5C, p0, p1); }
		// 0x8F8C0E370AE62F5C 0xF1850DDC  
		static Any hint_script_audio_bank(Any p0, Any p1) { return invoke<Any>(0xFB380A29641EC31A, p0, p1); }
		// 0xFB380A29641EC31A 0x41FA0E51  
		static void release_mission_audio_bank() { invoke<Void>(0x0EC92A1BF0857187); } // 0x0EC92A1BF0857187 0x8E8824C7  
		static void release_ambient_audio_bank() { invoke<Void>(0x65475A218FFAA93D); } // 0x65475A218FFAA93D 0x8C938784  
		static void release_named_script_audio_bank(const char* audioBank)
		{
			invoke<Void>(0x77ED170667F50170, audioBank);
		} // 0x77ED170667F50170 0x16707ABC  
		static void release_script_audio_bank() { invoke<Void>(0x7A2D8AD0A9EB9C3F); } // 0x7A2D8AD0A9EB9C3F 0x22F865E5  
		static void _0x19af7ed9b9d23058() { invoke<Void>(0x19AF7ED9B9D23058); } // 0x19AF7ED9B9D23058 0xA58BBF4F  
		static void _0x9ac92eed5e4793ab() { invoke<Void>(0x9AC92EED5E4793AB); } // 0x9AC92EED5E4793AB  
		static int get_sound_id() { return invoke<int>(0x430386FE9BF80B45); } // 0x430386FE9BF80B45 0x6AE0AD56  
		static void release_sound_id(int soundId) { invoke<Void>(0x353FC880830B88FA, soundId); }
		// 0x353FC880830B88FA 0x9C080899  
		static void play_sound(Player soundId, const char* audioName, const char* audioRef, bool p3, Any p4, bool p5)
		{
			invoke<Void>(0x7FF4944CC209192D, soundId, audioName, audioRef, p3, p4, p5);
		} // 0x7FF4944CC209192D 0xB6E1917F  
		static void play_sound_frontend(int soundId, const char* audioName, const char* audioRef, bool p3)
		{
			invoke<Void>(0x67C540AA08E4A6F5, soundId, audioName, audioRef, p3);
		} // 0x67C540AA08E4A6F5 0x2E458F74  
		static void _0xcada5a0d0702381e(const char* p0, const char* soundset)
		{
			invoke<Void>(0xCADA5A0D0702381E, p0, soundset);
		} // 0xCADA5A0D0702381E 0xC70E6CFA  
		static void play_sound_from_entity(int soundId, const char* audioName, Entity entity, const char* audioRef,
			bool p4, Any p5)
		{
			invoke<Void>(0xE65F427EB70AB1ED, soundId, audioName, entity, audioRef, p4, p5);
		} // 0xE65F427EB70AB1ED 0x95AE00F8  
		static void play_sound_from_coord(int soundId, const char* audioName, float x, float y, float z,
			const char* audioRef, bool p6, int range, bool p8)
		{
			invoke<Void>(0x8D8686B622B88120, soundId, audioName, x, y, z, audioRef, p6, range, p8);
		} // 0x8D8686B622B88120 0xCAD3E2D5  
		static void stop_sound(int soundId) { invoke<Void>(0xA3B0C41BA5CC0BB5, soundId); }
		// 0xA3B0C41BA5CC0BB5 0xCD7F4030  
		static int get_network_id_from_sound_id(int soundId) { return invoke<int>(0x2DE3F0A134FFBC0D, soundId); }
		// 0x2DE3F0A134FFBC0D 0x2576F610  
		static int get_sound_id_from_network_id(int netId) { return invoke<int>(0x75262FD12D0A1C84, netId); }
		// 0x75262FD12D0A1C84 0xD064D4DC  
		static void set_variable_on_sound(int soundId, Any* p1, float p2)
		{
			invoke<Void>(0xAD6B3148A78AE9B6, soundId, p1, p2);
		} // 0xAD6B3148A78AE9B6 0x606EE5FA  
		static void set_variable_on_stream(const char* p0, float p1) { invoke<Void>(0x2F9D3834AEB9EF79, p0, p1); }
		// 0x2F9D3834AEB9EF79 0xF67BB44C  
		static void override_underwater_stream(Any* p0, bool p1) { invoke<Void>(0xF2A9CDABCEA04BD6, p0, p1); }
		// 0xF2A9CDABCEA04BD6 0x9A083B7E  
		static void _0x733adf241531e5c2(const char* name, float p1) { invoke<Void>(0x733ADF241531E5C2, name, p1); }
		// 0x733ADF241531E5C2 0x62D026BE  
		static bool has_sound_finished(int soundId) { return invoke<bool>(0xFCBDCE714A7C88E5, soundId); }
		// 0xFCBDCE714A7C88E5 0xE85AEC2E  
		static void _play_ambient_speech1(Ped ped, const char* speechName, const char* speechParam)
		{
			invoke<Void>(0x8E04FEDD28D42462, ped, speechName, speechParam);
		} // 0x8E04FEDD28D42462 0x5C57B85D  
		static void _play_ambient_speech2(Ped ped, const char* speechName, const char* speechParam)
		{
			invoke<Void>(0xC6941B4A3A8FBBB9, ped, speechName, speechParam);
		} // 0xC6941B4A3A8FBBB9 0x444180DB  
		static void _play_ambient_speech_with_voice(Ped p0, const char* speechName, const char* voiceName,
			const char* speechParam, bool p4)
		{
			invoke<Void>(0x3523634255FC3318, p0, speechName, voiceName, speechParam, p4);
		} // 0x3523634255FC3318 0x8386AE28  
		static void _play_ambient_speech_at_coords(const char* p0, const char* p1, float p2, float p3, float p4,
			const char* p5)
		{
			invoke<Void>(0xED640017ED337E45, p0, p1, p2, p3, p4, p5);
		} // 0xED640017ED337E45 0xA1A1402E  
		static void override_trevor_rage(Any* p0) { invoke<Void>(0x13AD665062541A7E, p0); }
		// 0x13AD665062541A7E 0x05B9B5CF  
		static void reset_trevor_rage() { invoke<Void>(0xE78503B10C4314E0); } // 0xE78503B10C4314E0 0xE80CF0D4  
		static void set_player_angry(Ped playerPed, bool disabled)
		{
			invoke<Void>(0xEA241BB04110F091, playerPed, disabled);
		} // 0xEA241BB04110F091 0x782CA58D  
		static void play_pain(Ped ped, int painID, int p1) { invoke<Void>(0xBC9AE166038A5CEC, ped, painID, p1); }
		// 0xBC9AE166038A5CEC 0x874BD6CB  
		static void _0xd01005d2ba2eb778(const char* p0) { invoke<Void>(0xD01005D2BA2EB778, p0); }
		// 0xD01005D2BA2EB778 0x59A3A17D  
		static void _0xddc635d5b3262c56(const char* p0) { invoke<Void>(0xDDC635D5B3262C56, p0); }
		// 0xDDC635D5B3262C56 0x0E387BFE  
		static void set_ambient_voice_name(Ped ped, const char* name) { invoke<Void>(0x6C8065A3B780185B, ped, name); }
		// 0x6C8065A3B780185B 0xBD2EA1A1  
		static void _set_ped_scream(Ped ped) { invoke<Void>(0x40CF0D12D142A9E8, ped); } // 0x40CF0D12D142A9E8  
		static void _0x7cdc8c3b89f661b3(Ped playerPed, Hash p1) { invoke<Void>(0x7CDC8C3B89F661B3, playerPed, p1); }
		// 0x7CDC8C3B89F661B3  
		static void _0xa5342d390cda41d6(Any p0, bool p1) { invoke<Void>(0xA5342D390CDA41D6, p0, p1); }
		// 0xA5342D390CDA41D6  
		static void _set_ped_mute(Ped ped) { invoke<Void>(0x7A73D05A607734C7, ped); } // 0x7A73D05A607734C7  
		static void stop_current_playing_ambient_speech(Ped ped) { invoke<Void>(0xB8BEC0CA6F0EDB0F, ped); }
		// 0xB8BEC0CA6F0EDB0F 0xBB8E64BF  
		static bool is_ambient_speech_playing(Ped p0) { return invoke<bool>(0x9072C8B49907BFAD, p0); }
		// 0x9072C8B49907BFAD 0x1972E8AA  
		static bool is_scripted_speech_playing(Any p0) { return invoke<bool>(0xCC9AA18DCC7084F4, p0); }
		// 0xCC9AA18DCC7084F4 0x2C653904  
		static bool is_any_speech_playing(Ped ped) { return invoke<bool>(0x729072355FA39EC9, ped); }
		// 0x729072355FA39EC9 0x2B74A6D6  
		static bool _can_ped_speak(Ped ped, const char* speechName, bool unk)
		{
			return invoke<bool>(0x49B99BF3FDA89A7A, ped, speechName, unk);
		} // 0x49B99BF3FDA89A7A 0x8BD5F11E  
		static bool is_ped_in_current_conversation(Ped ped) { return invoke<bool>(0x049E937F18F4020C, ped); }
		// 0x049E937F18F4020C 0x7B2F0743  
		static void set_ped_is_drunk(Ped ped, bool toggle) { invoke<Void>(0x95D2D383D5396B8A, ped, toggle); }
		// 0x95D2D383D5396B8A 0xD2EA77A3  
		static void _0xee066c7006c49c0a(Any p0, Any p1, Any* p2) { invoke<Void>(0xEE066C7006C49C0A, p0, p1, p2); }
		// 0xEE066C7006C49C0A 0x498849F3  
		static bool _0xc265df9fb44a9fbd(Any p0) { return invoke<bool>(0xC265DF9FB44A9FBD, p0); }
		// 0xC265DF9FB44A9FBD 0x0CBAF2EF  
		static void set_animal_mood(Ped animal, int mood) { invoke<Void>(0xCC97B29285B1DC3B, animal, mood); }
		// 0xCC97B29285B1DC3B 0x3EA7C6CB  
		static bool is_mobile_phone_radio_active() { return invoke<bool>(0xB35CE999E8EF317E); }
		// 0xB35CE999E8EF317E 0x6E502A5B  
		static void set_mobile_phone_radio_state(bool state) { invoke<Void>(0xBF286C554784F3DF, state); }
		// 0xBF286C554784F3DF 0xE1E0ED34  
		static int get_player_radio_station_index() { return invoke<int>(0xE8AF77C4C06ADC93); }
		// 0xE8AF77C4C06ADC93 0x1C4946AC  
		static const char* get_player_radio_station_name() { return invoke<const char*>(0xF6D733C32076AD03); }
		// 0xF6D733C32076AD03 0xD909C107  
		static const char* get_radio_station_name(int radioStation)
		{
			return invoke<const char*>(0xB28ECA15046CA8B9, radioStation);
		} // 0xB28ECA15046CA8B9 0x3DF493BC  
		static Any get_player_radio_station_genre() { return invoke<Any>(0xA571991A7FE6CCEB); }
		// 0xA571991A7FE6CCEB 0x872CF0EA  
		static bool is_radio_retuning() { return invoke<bool>(0xA151A7394A214E65); } // 0xA151A7394A214E65 0xCF29097B  
		static Any _0x0626a247d2405330() { return invoke<Any>(0x0626A247D2405330); } // 0x0626A247D2405330  
		static void _0xff266d1d0eb1195d() { invoke<Void>(0xFF266D1D0EB1195D); } // 0xFF266D1D0EB1195D 0x53DB6994  
		static void _0xdd6bcf9e94425df9() { invoke<Void>(0xDD6BCF9E94425DF9); } // 0xDD6BCF9E94425DF9 0xD70ECC80  
		static void set_radio_to_station_name(const char* stationName)
		{
			invoke<Void>(0xC69EDA28699D5107, stationName);
		} // 0xC69EDA28699D5107 0x7B36E35E  
		static void set_veh_radio_station(Vehicle vehicle, const char* radioStation)
		{
			invoke<Void>(0x1B9C0099CB942AC6, vehicle, radioStation);
		} // 0x1B9C0099CB942AC6 0xE391F55F  
		static void _0xc1805d05e6d4fe10(Vehicle vehicle) { invoke<Void>(0xC1805D05E6D4FE10, vehicle); }
		// 0xC1805D05E6D4FE10 0x7ABB89D2  
		static void set_emitter_radio_station(const char* emitterName, const char* radioStation)
		{
			invoke<Void>(0xACF57305B12AF907, emitterName, radioStation);
		} // 0xACF57305B12AF907 0x87431585  
		static void set_static_emitter_enabled(const char* emitterName, bool toggle)
		{
			invoke<Void>(0x399D2D3B33F1B8EB, emitterName, toggle);
		} // 0x399D2D3B33F1B8EB 0x91F72E92  
		static void set_radio_to_station_index(int radioStation) { invoke<Void>(0xA619B168B8A8570F, radioStation); }
		// 0xA619B168B8A8570F 0x1D82766D  
		static void set_frontend_radio_active(bool active) { invoke<Void>(0xF7F26C6E9CC9EBB8, active); }
		// 0xF7F26C6E9CC9EBB8 0xB1172075  
		static void unlock_mission_news_story(int newsStory) { invoke<Void>(0xB165AB7C248B2DC1, newsStory); }
		// 0xB165AB7C248B2DC1 0xCCD9ABE4  
		static int get_number_of_passenger_voice_variations(Any p0) { return invoke<int>(0x66E49BF55B4B1874, p0); }
		// 0x66E49BF55B4B1874 0x27305D37  
		static int get_audible_music_track_text_id() { return invoke<int>(0x50B196FC9ED6545B); }
		// 0x50B196FC9ED6545B 0xA2B88CA7  
		static void play_end_credits_music(bool play) { invoke<Void>(0xCD536C4D33DCC900, play); }
		// 0xCD536C4D33DCC900 0x8E88B3CC  
		static void skip_radio_forward() { invoke<Void>(0x6DDBBDD98E2E9C25); } // 0x6DDBBDD98E2E9C25 0x10D36630  
		static void freeze_radio_station(const char* radioStation) { invoke<Void>(0x344F393B027E38C3, radioStation); }
		// 0x344F393B027E38C3 0x286BF543  
		static void unfreeze_radio_station(const char* radioStation) { invoke<Void>(0xFC00454CF60B91DD, radioStation); }
		// 0xFC00454CF60B91DD 0x4D46202C  
		static void set_radio_auto_unfreeze(bool toggle) { invoke<Void>(0xC1AA9F53CE982990, toggle); }
		// 0xC1AA9F53CE982990 0xA40196BF  
		static void set_initial_player_station(const char* radioStation)
		{
			invoke<Void>(0x88795F13FACDA88D, radioStation);
		} // 0x88795F13FACDA88D 0x9B069233  
		static void set_user_radio_control_enabled(bool toggle) { invoke<Void>(0x19F21E63AE6EAE4E, toggle); }
		// 0x19F21E63AE6EAE4E 0x52E054CE  
		static void set_radio_track(const char* radioStation, const char* radioTrack)
		{
			invoke<Void>(0xB39786F201FEE30B, radioStation, radioTrack);
		} // 0xB39786F201FEE30B 0x76E96212  
		static void set_vehicle_radio_loud(Vehicle vehicle, bool toggle)
		{
			invoke<Void>(0xBB6F1CAEC68B0BCE, vehicle, toggle);
		} // 0xBB6F1CAEC68B0BCE 0x8D9EDD99  
		static bool _is_vehicle_radio_loud(Vehicle vehicle) { return invoke<bool>(0x032A116663A4D5AC, vehicle); }
		// 0x032A116663A4D5AC 0xCBA99F4A  
		static void set_mobile_radio_enabled_during_gameplay(bool Toggle) { invoke<Void>(0x1098355A16064BB3, Toggle); }
		// 0x1098355A16064BB3 0x990085F0  
		static bool _0x109697e2ffbac8a1() { return invoke<bool>(0x109697E2FFBAC8A1); } // 0x109697E2FFBAC8A1 0x46B0C696  
		static bool _is_player_vehicle_radio_enabled() { return invoke<bool>(0x5F43D83FD6738741); }
		// 0x5F43D83FD6738741 0x2A3E5E8B  
		static void set_vehicle_radio_enabled(Vehicle vehicle, bool toggle)
		{
			invoke<Void>(0x3B988190C0AA6C0B, vehicle, toggle);
		} // 0x3B988190C0AA6C0B 0x6F812CAB  
		static void _0x4e404a9361f75bb2(const char* radioStation, const char* p1, bool p2)
		{
			invoke<Void>(0x4E404A9361F75BB2, radioStation, p1, p2);
		} // 0x4E404A9361F75BB2 0x128C3873  
		static void _0x1654f24a88a8e3fe(const char* radioStation) { invoke<Void>(0x1654F24A88A8E3FE, radioStation); }
		// 0x1654F24A88A8E3FE 0x1D766976  
		static int _max_radio_station_index() { return invoke<int>(0xF1620ECB50E01DE7); }
		// 0xF1620ECB50E01DE7 0xCC91FCF5  
		static int find_radio_station_index(int station) { return invoke<int>(0x8D67489793FF428B, station); }
		// 0x8D67489793FF428B 0xECA1512F  
		static void _0x774bd811f656a122(const char* radioStation, bool p1)
		{
			invoke<Void>(0x774BD811F656A122, radioStation, p1);
		} // 0x774BD811F656A122 0xB1FF7137  
		static void _0x2c96cdb04fca358e(float p0) { invoke<Void>(0x2C96CDB04FCA358E, p0); }
		// 0x2C96CDB04FCA358E 0xC8B514E2  
		static void _0x031acb6aba18c729(const char* radioStation, const char* p1)
		{
			invoke<Void>(0x031ACB6ABA18C729, radioStation, p1);
		} // 0x031ACB6ABA18C729 0xBE998184  
		static void _0xf3365489e0dd50f9(Any p0, bool p1) { invoke<Void>(0xF3365489E0DD50F9, p0, p1); }
		// 0xF3365489E0DD50F9 0x8AFC488D  
		static void set_ambient_zone_state(Any* p0, bool p1, bool p2) { invoke<Void>(0xBDA07E5950085E46, p0, p1, p2); }
		// 0xBDA07E5950085E46 0x2849CAC9  
		static void clear_ambient_zone_state(const char* zoneName, bool p1)
		{
			invoke<Void>(0x218DD44AAAC964FF, zoneName, p1);
		} // 0x218DD44AAAC964FF 0xCDFF3C82  
		static void set_ambient_zone_list_state(Any* p0, bool p1, bool p2)
		{
			invoke<Void>(0x9748FA4DE50CCE3E, p0, p1, p2);
		} // 0x9748FA4DE50CCE3E 0xBF80B412  
		static void clear_ambient_zone_list_state(Any* p0, bool p1) { invoke<Void>(0x120C48C614909FA4, p0, p1); }
		// 0x120C48C614909FA4 0x38B9B8D4  
		static void set_ambient_zone_state_persistent(const char* ambientZone, bool p1, bool p2)
		{
			invoke<Void>(0x1D6650420CEC9D3B, ambientZone, p1, p2);
		} // 0x1D6650420CEC9D3B 0xC1FFB672  
		static void set_ambient_zone_list_state_persistent(const char* ambientZone, bool p1, bool p2)
		{
			invoke<Void>(0xF3638DAE8C4045E1, ambientZone, p1, p2);
		} // 0xF3638DAE8C4045E1 0x5F5A2605  
		static bool is_ambient_zone_enabled(const char* ambientZone)
		{
			return invoke<bool>(0x01E2817A479A7F9B, ambientZone);
		} // 0x01E2817A479A7F9B 0xBFABD872  
		static void set_cutscene_audio_override(const char* p0) { invoke<Void>(0x3B4BF5F0859204D9, p0); }
		// 0x3B4BF5F0859204D9 0xCE1332B7  
		static void get_player_headset_sound_alternate(const char* p0, float p1)
		{
			invoke<Void>(0xBCC29F935ED07688, p0, p1);
		} // 0xBCC29F935ED07688 0xD63CF33A  
		static Any play_police_report(const char* name, float p1) { return invoke<Any>(0xDFEBD56D9BD1EB16, name, p1); }
		// 0xDFEBD56D9BD1EB16 0x3F277B62  
		static void _disable_police_reports() { invoke<Void>(0xB4F90FAF7670B16F); } // 0xB4F90FAF7670B16F  
		static void blip_siren(Vehicle vehicle) { invoke<Void>(0x1B9025BDA76822B6, vehicle); }
		// 0x1B9025BDA76822B6 0xC0EB6924  
		static void override_veh_horn(Vehicle vehicle, bool mute, int p2)
		{
			invoke<Void>(0x3CDC1E622CCE0356, vehicle, mute, p2);
		} // 0x3CDC1E622CCE0356 0x2ACAB783  
		static bool is_horn_active(Vehicle vehicle) { return invoke<bool>(0x9D6BFC12B05C6121, vehicle); }
		// 0x9D6BFC12B05C6121 0x20E2BDD0  
		static void set_aggressive_horns(bool toggle) { invoke<Void>(0x395BF71085D1B1D9, toggle); }
		// 0x395BF71085D1B1D9 0x01D6EABE  
		static void _0x02e93c796abd3a97(bool p0) { invoke<Void>(0x02E93C796ABD3A97, p0); }
		// 0x02E93C796ABD3A97 0x3C395AEE  
		static void _0x58bb377bec7cd5f4(bool p0, bool p1) { invoke<Void>(0x58BB377BEC7CD5F4, p0, p1); }
		// 0x58BB377BEC7CD5F4 0x8CE63FA1  
		static bool is_stream_playing() { return invoke<bool>(0xD11FA52EB849D978); } // 0xD11FA52EB849D978 0xF1F51A14  
		static int get_stream_play_time() { return invoke<int>(0x4E72BBDBCA58A3DB); } // 0x4E72BBDBCA58A3DB 0xB4F0AD56  
		static bool load_stream(const char* streamName, const char* soundSet)
		{
			return invoke<bool>(0x1F1F957154EC51DF, streamName, soundSet);
		} // 0x1F1F957154EC51DF 0x0D89599D  
		static bool load_stream_with_start_offset(const char* streamName, int startOffset, const char* soundSet)
		{
			return invoke<bool>(0x59C16B79F53B3712, streamName, startOffset, soundSet);
		} // 0x59C16B79F53B3712 0xE5B5745C  
		static void play_stream_from_ped(Ped ped) { invoke<Void>(0x89049DD63C08B5D1, ped); }
		// 0x89049DD63C08B5D1 0xA1D7FABE  
		static void play_stream_from_vehicle(Vehicle vehicle) { invoke<Void>(0xB70374A758007DFA, vehicle); }
		// 0xB70374A758007DFA 0xF8E4BDA2  
		static void play_stream_from_object(Object object) { invoke<Void>(0xEBAA9B64D76356FD, object); }
		// 0xEBAA9B64D76356FD 0xC5266BF7  
		static void play_stream_frontend() { invoke<Void>(0x58FCE43488F9F5F4); } // 0x58FCE43488F9F5F4 0x2C2A16BC  
		static void special_frontend_equal(float x, float y, float z) { invoke<Void>(0x21442F412E8DE56B, x, y, z); }
		// 0x21442F412E8DE56B 0x6FE5D865  
		static void stop_stream() { invoke<Void>(0xA4718A1419D18151); } // 0xA4718A1419D18151 0xD1E364DE  
		static void stop_ped_speaking(Ped ped, bool shaking) { invoke<Void>(0x9D64D7405520E3D3, ped, shaking); }
		// 0x9D64D7405520E3D3 0xFF92B49D  
		static void disable_ped_pain_audio(Ped ped, bool toggle) { invoke<Void>(0xA9A41C1E940FB0E8, ped, toggle); }
		// 0xA9A41C1E940FB0E8 0x3B8E2D5F  
		static bool is_ambient_speech_disabled(Ped ped) { return invoke<bool>(0x932C2D096A2C3FFF, ped); }
		// 0x932C2D096A2C3FFF 0x109D1F89  
		static void set_siren_with_no_driver(Vehicle vehicle, bool toggle)
		{
			invoke<Void>(0x1FEF0683B96EBCF2, vehicle, toggle);
		} // 0x1FEF0683B96EBCF2 0x77182D58  
		static void _sound_vehicle_horn_this_frame(Vehicle vehicle) { invoke<Void>(0x9C11908013EA4715, vehicle); }
		// 0x9C11908013EA4715 0xDE8BA3CD  
		static void set_horn_enabled(Vehicle vehicle, bool toggle)
		{
			invoke<Void>(0x76D683C108594D0E, vehicle, toggle);
		} // 0x76D683C108594D0E 0x6EB92D05  
		static void set_audio_vehicle_priority(Vehicle vehicle, Any p1)
		{
			invoke<Void>(0xE5564483E407F914, vehicle, p1);
		} // 0xE5564483E407F914 0x271A9766  
		static void _0x9d3af56e94c9ae98(Any p0, float p1) { invoke<Void>(0x9D3AF56E94C9AE98, p0, p1); }
		// 0x9D3AF56E94C9AE98 0x2F0A16D1  
		static void use_siren_as_horn(Vehicle vehicle, bool toggle)
		{
			invoke<Void>(0xFA932DE350266EF8, vehicle, toggle);
		} // 0xFA932DE350266EF8 0xC6BC16F3  
		static void _force_vehicle_engine_audio(Vehicle vehicle, const char* audioName)
		{
			invoke<Void>(0x4F0C413926060B38, vehicle, audioName);
		} // 0x4F0C413926060B38 0x33B0B007  
		static void _0xf1f8157b8c3f171c(Any p0, const char* p1, const char* p2)
		{
			invoke<Void>(0xF1F8157B8C3F171C, p0, p1, p2);
		} // 0xF1F8157B8C3F171C 0x1C0C5E4C  
		static void _0xd2dccd8e16e20997(Any p0) { invoke<Void>(0xD2DCCD8E16E20997, p0); } // 0xD2DCCD8E16E20997  
		static bool _0x5db8010ee71fdef2(Vehicle vehicle) { return invoke<bool>(0x5DB8010EE71FDEF2, vehicle); }
		// 0x5DB8010EE71FDEF2 0x6E660D3F  
		static void _0x59e7b488451f4d3a(Any p0, float p1) { invoke<Void>(0x59E7B488451F4D3A, p0, p1); }
		// 0x59E7B488451F4D3A 0x23BE6432  
		static void _0x01bb4d577d38bd9e(Any p0, float p1) { invoke<Void>(0x01BB4D577D38BD9E, p0, p1); }
		// 0x01BB4D577D38BD9E 0xE81FAC68  
		static void _0x1c073274e065c6d2(Any p0, bool p1) { invoke<Void>(0x1C073274E065C6D2, p0, p1); }
		// 0x1C073274E065C6D2 0x9365E042  
		static void _0x2be4bc731d039d5a(Any p0, bool p1) { invoke<Void>(0x2BE4BC731D039D5A, p0, p1); }
		// 0x2BE4BC731D039D5A 0x2A60A90E  
		static void set_vehicle_boost_active(Vehicle vehicle, bool Toggle)
		{
			invoke<Void>(0x4A04DE7CAB2739A1, vehicle, Toggle);
		} // 0x4A04DE7CAB2739A1 0x072F15F2  
		static void _0x6fddad856e36988a(Any p0, bool p1) { invoke<Void>(0x6FDDAD856E36988A, p0, p1); }
		// 0x6FDDAD856E36988A 0x934BE749  
		static void _0x06c0023bed16dd6b(Any p0, bool p1) { invoke<Void>(0x06C0023BED16DD6B, p0, p1); }
		// 0x06C0023BED16DD6B 0xE61110A2  
		static void play_vehicle_door_open_sound(Vehicle vehicle, int p1)
		{
			invoke<Void>(0x3A539D52857EA82D, vehicle, p1);
		} // 0x3A539D52857EA82D 0x84930330  
		static void play_vehicle_door_close_sound(Vehicle vehicle, int p1)
		{
			invoke<Void>(0x62A456AA4769EF34, vehicle, p1);
		} // 0x62A456AA4769EF34 0xBA2CF407  
		static void _0xc15907d667f7cfb2(Vehicle vehicle, bool toggle)
		{
			invoke<Void>(0xC15907D667F7CFB2, vehicle, toggle);
		} // 0xC15907D667F7CFB2 0x563B635D  
		static bool is_game_in_control_of_music() { return invoke<bool>(0x6D28DC1671E334FD); }
		// 0x6D28DC1671E334FD 0x7643170D  
		static void set_gps_active(bool active) { invoke<Void>(0x3BD3F52BA9B1E4E8, active); }
		// 0x3BD3F52BA9B1E4E8 0x0FC3379A  
		static void play_mission_complete_audio(const char* audioName) { invoke<Void>(0xB138AAB8A70D3C69, audioName); }
		// 0xB138AAB8A70D3C69 0x3033EA1D  
		static bool is_mission_complete_playing() { return invoke<bool>(0x19A30C23F5827F8A); }
		// 0x19A30C23F5827F8A 0x939982A1  
		static Any _0x6f259f82d873b8b8() { return invoke<Any>(0x6F259F82D873B8B8); } // 0x6F259F82D873B8B8 0xCBE09AEC  
		static void _0xf154b8d1775b2dec(bool p0) { invoke<Void>(0xF154B8D1775B2DEC, p0); }
		// 0xF154B8D1775B2DEC 0xD2858D8A  
		static bool start_audio_scene(const char* scene) { return invoke<bool>(0x013A80FC08F6E4F2, scene); }
		// 0x013A80FC08F6E4F2 0xE48D757B  
		static void stop_audio_scene(const char* scene) { invoke<Void>(0xDFE8422B3B94E688, scene); }
		// 0xDFE8422B3B94E688 0xA08D8C58  
		static void stop_audio_scenes() { invoke<Void>(0xBAC7FC81A75EC1A1); } // 0xBAC7FC81A75EC1A1 0xF6C7342A  
		static bool is_audio_scene_active(const char* scene) { return invoke<bool>(0xB65B60556E2A9225, scene); }
		// 0xB65B60556E2A9225 0xACBED05C  
		static void set_audio_scene_variable(const char* scene, const char* variable, float value)
		{
			invoke<Void>(0xEF21A9EF089A2668, scene, variable, value);
		} // 0xEF21A9EF089A2668 0x19BB3CE8  
		static void _0xa5f377b175a699c5(Any p0) { invoke<Void>(0xA5F377B175A699C5, p0); }
		// 0xA5F377B175A699C5 0xE812925D  
		static void _dynamic_mixer_related_fn(Entity p0, const char* p1, float p2)
		{
			invoke<Void>(0x153973AB99FE8980, p0, p1, p2);
		} // 0x153973AB99FE8980 0x2BC93264  
		static void _0x18eb48cfc41f2ea0(Any p0, float p1) { invoke<Void>(0x18EB48CFC41F2EA0, p0, p1); }
		// 0x18EB48CFC41F2EA0 0x308ED0EC  
		static Any audio_is_scripted_music_playing() { return invoke<Any>(0x845FFC3A4FEEFA3E); }
		// 0x845FFC3A4FEEFA3E 0x86E995D1  
		static bool prepare_music_event(const char* eventName) { return invoke<bool>(0x1E5185B72EF5158A, eventName); }
		// 0x1E5185B72EF5158A 0x534A5C1C  
		static bool cancel_music_event(const char* eventName) { return invoke<bool>(0x5B17A90291133DA5, eventName); }
		// 0x5B17A90291133DA5 0x89FF942D  
		static bool trigger_music_event(const char* eventName) { return invoke<bool>(0x706D57B0F50DA710, eventName); }
		// 0x706D57B0F50DA710 0xB6094948  
		static Any _0xa097ab275061fb21() { return invoke<Any>(0xA097AB275061FB21); } // 0xA097AB275061FB21 0x2705C4D5  
		static Any get_music_playtime() { return invoke<Any>(0xE7A0D23DC414507B); } // 0xE7A0D23DC414507B 0xD633C809  
		static void _0xfbe20329593dec9d(Any p0, Any p1, Any p2, Any p3)
		{
			invoke<Void>(0xFBE20329593DEC9D, p0, p1, p2, p3);
		} // 0xFBE20329593DEC9D 0x53FC3FEC  
		static void clear_all_broken_glass() { invoke<Void>(0xB32209EFFDC04913); } // 0xB32209EFFDC04913 0xE6B033BF  
		static void _0x70b8ec8fc108a634(bool p0, Any p1) { invoke<Void>(0x70B8EC8FC108A634, p0, p1); }
		// 0x70B8EC8FC108A634 0x95050CAD  
		static void _0x149aee66f0cb3a99(float p0, float p1) { invoke<Void>(0x149AEE66F0CB3A99, p0, p1); }
		// 0x149AEE66F0CB3A99 0xE64F97A0  
		static void _0x8bf907833be275de(float p0, float p1) { invoke<Void>(0x8BF907833BE275DE, p0, p1); }
		// 0x8BF907833BE275DE  
		static void _0x062d5ead4da2fa6a() { invoke<Void>(0x062D5EAD4DA2FA6A); } // 0x062D5EAD4DA2FA6A 0xD87AF337  
		static bool prepare_alarm(const char* alarmName) { return invoke<bool>(0x9D74AE343DB65533, alarmName); }
		// 0x9D74AE343DB65533 0x084932E8  
		static void start_alarm(const char* alarmName, bool p2) { invoke<Void>(0x0355EF116C4C97B2, alarmName, p2); }
		// 0x0355EF116C4C97B2 0x703F524B  
		static void stop_alarm(const char* alarmName, bool toggle)
		{
			invoke<Void>(0xA1CADDCD98415A41, alarmName, toggle);
		} // 0xA1CADDCD98415A41 0xF987BE8C  
		static void stop_all_alarms(bool stop) { invoke<Void>(0x2F794A877ADD4C92, stop); }
		// 0x2F794A877ADD4C92 0xC3CB9DC6  
		static bool is_alarm_playing(const char* alarmName) { return invoke<bool>(0x226435CB96CCFC8C, alarmName); }
		// 0x226435CB96CCFC8C 0x9D8E1D23  
		static Hash get_vehicle_default_horn(Vehicle vehicle) { return invoke<Hash>(0x02165D55000219AC, vehicle); }
		// 0x02165D55000219AC 0xE84ABC19  
		static Hash _get_vehicle_horn_hash(Vehicle vehicle) { return invoke<Hash>(0xACB5DCCA1EC76840, vehicle); }
		// 0xACB5DCCA1EC76840 0xFD4B5B3B  
		static void reset_ped_audio_flags(Ped ped) { invoke<Void>(0xF54BB7B61036F335, ped); }
		// 0xF54BB7B61036F335 0xDF720C86  
		static void _0xd2cc78cd3d0b50f9(Any p0, bool p1) { invoke<Void>(0xD2CC78CD3D0B50F9, p0, p1); }
		// 0xD2CC78CD3D0B50F9 0xC307D531  
		static void _0xbf4dc1784be94dfa(Any p0, bool p1, Any p2) { invoke<Void>(0xBF4DC1784BE94DFA, p0, p1, p2); }
		// 0xBF4DC1784BE94DFA  
		static void _0x75773e11ba459e90(Any p0, bool p1) { invoke<Void>(0x75773E11BA459E90, p0, p1); }
		// 0x75773E11BA459E90  
		static void _0xd57aaae0e2214d11() { invoke<Void>(0xD57AAAE0E2214D11); } // 0xD57AAAE0E2214D11  
		static void _force_ambient_siren(bool value) { invoke<Void>(0x552369F549563AD5, value); }
		// 0x552369F549563AD5 0x13EB5861  
		static void _0x43fa0dfc5df87815(Vehicle vehicle, bool p1) { invoke<Void>(0x43FA0DFC5DF87815, vehicle, p1); }
		// 0x43FA0DFC5DF87815 0x7BED1872  
		static void set_audio_flag(const char* flagName, bool toggle)
		{
			invoke<Void>(0xB9EFD5C25018725A, flagName, toggle);
		} // 0xB9EFD5C25018725A 0x1C09C9E0  
		static Any prepare_synchronized_audio_event(const char* p0, Any p1)
		{
			return invoke<Any>(0xC7ABCACA4985A766, p0, p1);
		} // 0xC7ABCACA4985A766 0xE1D91FD0  
		static bool prepare_synchronized_audio_event_for_scene(Any p0, Any* p1)
		{
			return invoke<bool>(0x029FE7CD1B7E2E75, p0, p1);
		} // 0x029FE7CD1B7E2E75 0x7652DD49  
		static bool play_synchronized_audio_event(Any p0) { return invoke<bool>(0x8B2FD4560E55DD2D, p0); }
		// 0x8B2FD4560E55DD2D 0x507F3241  
		static bool stop_synchronized_audio_event(Any p0) { return invoke<bool>(0x92D6A88E64A94430, p0); }
		// 0x92D6A88E64A94430 0xADEED2B4  
		static void _0xc8ede9bdbccba6d4(Any* p0, float p1, float p2, float p3)
		{
			invoke<Void>(0xC8EDE9BDBCCBA6D4, p0, p1, p2, p3);
		} // 0xC8EDE9BDBCCBA6D4 0x55A21772  
		static void _set_synchronized_audio_event_position_this_frame(const char* p0, Entity p1)
		{
			invoke<Void>(0x950A154B8DAB6185, p0, p1);
		} // 0x950A154B8DAB6185 0xA17F9AB0  
		static void _0x12561fcbb62d5b9c(int p0) { invoke<Void>(0x12561FCBB62D5B9C, p0); }
		// 0x12561FCBB62D5B9C 0x62B43677  
		static void _0x044dbad7a7fa2be5(const char* p0, const char* p1) { invoke<Void>(0x044DBAD7A7FA2BE5, p0, p1); }
		// 0x044DBAD7A7FA2BE5 0x8AD670EC  
		static void _0xb4bbfd9cd8b3922b(const char* p0) { invoke<Void>(0xB4BBFD9CD8B3922B, p0); }
		// 0xB4BBFD9CD8B3922B 0xD24B4D0C  
		static void _0xe4e6dd5566d28c82() { invoke<Void>(0xE4E6DD5566D28C82); } // 0xE4E6DD5566D28C82 0x7262B5BA  
		static Any _0x3a48ab4445d499be() { return invoke<Any>(0x3A48AB4445D499BE); } // 0x3A48AB4445D499BE 0x93A44A1F  
		static void _set_ped_talk(Ped ped) { invoke<Void>(0x4ADA3F19BE4A6047, ped); } // 0x4ADA3F19BE4A6047 0x13777A0B  
		static void _0x0150b6ff25a9e2e5() { invoke<Void>(0x0150B6FF25A9E2E5); } // 0x0150B6FF25A9E2E5 0x1134F68B  
		static void _0xbef34b1d9624d5dd(bool p0) { invoke<Void>(0xBEF34B1D9624D5DD, p0); }
		// 0xBEF34B1D9624D5DD 0xE0047BFD  
		static void _0x806058bbdc136e06() { invoke<Void>(0x806058BBDC136E06); } // 0x806058BBDC136E06  
		static Any _0x544810ed9db6bbe6() { return invoke<Any>(0x544810ED9DB6BBE6); } // 0x544810ED9DB6BBE6  
		static Any _0x5b50abb1fe3746f4() { return invoke<Any>(0x5B50ABB1FE3746F4); } // 0x5B50ABB1FE3746F4  
	}

	namespace cutscene
	{
		static void request_cutscene(const char* cutsceneName, int p1)
		{
			invoke<Void>(0x7A86743F475D9E09, cutsceneName, p1);
		} // 0x7A86743F475D9E09 0xB5977853  
		static void _request_cutscene_ex(const char* cutsceneName, int p1, int p2)
		{
			invoke<Void>(0xC23DE0E91C30B58C, cutsceneName, p1, p2);
		} // 0xC23DE0E91C30B58C 0xD98F656A  
		static void remove_cutscene() { invoke<Void>(0x440AF51A3462B86F); } // 0x440AF51A3462B86F 0x8052F533  
		static bool has_cutscene_loaded() { return invoke<bool>(0xC59F528E9AB9F339); } // 0xC59F528E9AB9F339 0xF9998582  
		static bool has_this_cutscene_loaded(const char* cutsceneName)
		{
			return invoke<bool>(0x228D3D94F8A11C3C, cutsceneName);
		} // 0x228D3D94F8A11C3C 0x3C5619F2  
		static void _0x8d9df6eca8768583(int p0) { invoke<Void>(0x8D9DF6ECA8768583, p0); }
		// 0x8D9DF6ECA8768583 0x25A2CABC  
		static bool _0xb56bbbcc2955d9cb() { return invoke<bool>(0xB56BBBCC2955D9CB); } // 0xB56BBBCC2955D9CB 0xDD8878E9  
		static bool _0x71b74d2ae19338d0(int p0) { return invoke<bool>(0x71B74D2AE19338D0, p0); }
		// 0x71B74D2AE19338D0 0x7B93CDAA  
		static void _0x4c61c75bee8184c2(const char* p0, Any p1, Any p2)
		{
			invoke<Void>(0x4C61C75BEE8184C2, p0, p1, p2);
		} // 0x4C61C75BEE8184C2 0x47DB08A9  
		static void _0x06a3524161c502ba(Any* p0) { invoke<Void>(0x06A3524161C502BA, p0); } // 0x06A3524161C502BA  
		static bool _0xa1c996c2a744262e(Any* p0) { return invoke<bool>(0xA1C996C2A744262E, p0); } // 0xA1C996C2A744262E  
		static void _0xd00d76a7dfc9d852(Any* p0) { invoke<Void>(0xD00D76A7DFC9D852, p0); } // 0xD00D76A7DFC9D852  
		static Any _0x0abc54de641dc0fc(Any* p0) { return invoke<Any>(0x0ABC54DE641DC0FC, p0); } // 0x0ABC54DE641DC0FC  
		static void start_cutscene(int p0) { invoke<Void>(0x186D5CB5E7B0FF7B, p0); } // 0x186D5CB5E7B0FF7B 0x210106F6  
		static void start_cutscene_at_coords(float x, float y, float z, int p3)
		{
			invoke<Void>(0x1C9ADDA3244A1FBF, x, y, z, p3);
		} // 0x1C9ADDA3244A1FBF 0x58BEA436  
		static void stop_cutscene(bool p0) { invoke<Void>(0xC7272775B4DC786E, p0); } // 0xC7272775B4DC786E 0x5EE84DC7  
		static void stop_cutscene_immediately() { invoke<Void>(0xD220BDD222AC4A1E); } // 0xD220BDD222AC4A1E 0xF528A2AD  
		static void set_cutscene_origin(float x, float y, float z, float p3, int p4)
		{
			invoke<Void>(0xB812B3FD1C01CF27, x, y, z, p3, p4);
		} // 0xB812B3FD1C01CF27 0xB0AD7792  
		static void _0x011883f41211432a(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6)
		{
			invoke<Void>(0x011883F41211432A, p0, p1, p2, p3, p4, p5, p6);
		} // 0x011883F41211432A  
		static int get_cutscene_time() { return invoke<int>(0xE625BEABBAFFDAB9); } // 0xE625BEABBAFFDAB9 0x53F5B5AB  
		static int get_cutscene_total_duration() { return invoke<int>(0xEE53B14A19E480D4); }
		// 0xEE53B14A19E480D4 0x0824EBE8  
		static bool was_cutscene_skipped() { return invoke<bool>(0x40C8656EDAEDD569); }
		// 0x40C8656EDAEDD569 0xC9B6949D  
		static bool has_cutscene_finished() { return invoke<bool>(0x7C0A893088881D57); }
		// 0x7C0A893088881D57 0x5DED14B4  
		static bool is_cutscene_active() { return invoke<bool>(0x991251AFC3981F84); } // 0x991251AFC3981F84 0xCCE2FE9D  
		static bool is_cutscene_playing() { return invoke<bool>(0xD3C2E180A40F031E); } // 0xD3C2E180A40F031E 0xA3A78392  
		static int get_cutscene_section_playing() { return invoke<int>(0x49010A6A396553D8); }
		// 0x49010A6A396553D8 0x1026F0D6  
		static Entity get_entity_index_of_cutscene_entity(const char* cutsceneEntName, Hash modelHash)
		{
			return invoke<Entity>(0x0A2E9FDB9A8C62F6, cutsceneEntName, modelHash);
		} // 0x0A2E9FDB9A8C62F6 0x1D09ABC7  
		static int _0x583df8e3d4afbd98() { return invoke<int>(0x583DF8E3D4AFBD98); } // 0x583DF8E3D4AFBD98 0x5AE68AE6  
		static bool _0x4cebc1ed31e8925e(const char* cutsceneName)
		{
			return invoke<bool>(0x4CEBC1ED31E8925E, cutsceneName);
		} // 0x4CEBC1ED31E8925E  
		static void register_entity_for_cutscene(Ped cutscenePed, const char* cutsceneEntName, int p2, Hash modelHash,
			int p4)
		{
			invoke<Void>(0xE40C1C56DF95C2E8, cutscenePed, cutsceneEntName, p2, modelHash, p4);
		} // 0xE40C1C56DF95C2E8 0x7CBC3EC7  
		static Entity get_entity_index_of_registered_entity(const char* cutsceneEntName, Hash modelHash)
		{
			return invoke<Entity>(0xC0741A26499654CD, cutsceneEntName, modelHash);
		} // 0xC0741A26499654CD 0x46D18755  
		static void _0x7f96f23fa9b73327(Hash modelHash) { invoke<Void>(0x7F96F23FA9B73327, modelHash); }
		// 0x7F96F23FA9B73327  
		static void set_cutscene_trigger_area(float p0, float p1, float p2, float p3, float p4, float p5)
		{
			invoke<Void>(0x9896CE4721BE84BA, p0, p1, p2, p3, p4, p5);
		} // 0x9896CE4721BE84BA 0x9D76D9DE  
		static bool can_set_enter_state_for_registered_entity(const char* cutsceneEntName, Hash modelHash)
		{
			return invoke<bool>(0x645D0B458D8E17B5, cutsceneEntName, modelHash);
		} // 0x645D0B458D8E17B5 0x55C30B26  
		static bool can_set_exit_state_for_registered_entity(const char* cutsceneEntName, Hash modelHash)
		{
			return invoke<bool>(0x4C6A6451C79E4662, cutsceneEntName, modelHash);
		} // 0x4C6A6451C79E4662 0x8FF5D3C4  
		static bool can_set_exit_state_for_camera(bool p0) { return invoke<bool>(0xB2CBCD0930DFB420, p0); }
		// 0xB2CBCD0930DFB420 0xEDAE6C02  
		static void _0xc61b86c9f61eb404(bool toggle) { invoke<Void>(0xC61B86C9F61EB404, toggle); }
		// 0xC61B86C9F61EB404 0x35721A08  
		static void set_cutscene_fade_values(bool p0, bool p1, bool p2, bool p3)
		{
			invoke<Void>(0x8093F23ABACCC7D4, p0, p1, p2, p3);
		} // 0x8093F23ABACCC7D4 0xD19EF0DD  
		static void _0x20746f7b1032a3c7(bool p0, bool p1, bool p2, bool p3)
		{
			invoke<Void>(0x20746F7B1032A3C7, p0, p1, p2, p3);
		} // 0x20746F7B1032A3C7  
		static void _0x06ee9048fd080382(bool p0) { invoke<Void>(0x06EE9048FD080382, p0); } // 0x06EE9048FD080382  
		static int _0xa0fe76168a189ddb() { return invoke<int>(0xA0FE76168A189DDB); } // 0xA0FE76168A189DDB  
		static void _0x2f137b508de238f2(bool p0) { invoke<Void>(0x2F137B508DE238F2, p0); }
		// 0x2F137B508DE238F2 0x8338DA1D  
		static void _0xe36a98d8ab3d3c66(bool p0) { invoke<Void>(0xE36A98D8AB3D3C66, p0); }
		// 0xE36A98D8AB3D3C66 0x04377C10  
		static bool _0x5edef0cf8c1dab3c() { return invoke<bool>(0x5EDEF0CF8C1DAB3C); } // 0x5EDEF0CF8C1DAB3C 0xDBD88708  
		static void _0x41faa8fb2ece8720(bool p0) { invoke<Void>(0x41FAA8FB2ECE8720, p0); }
		// 0x41FAA8FB2ECE8720 0x28D54A7F  
		static void register_synchronised_script_speech() { invoke<Void>(0x2131046957F31B04); }
		// 0x2131046957F31B04 0xB60CFBB9  
		static void set_cutscene_ped_component_variation(const char* cutsceneEntName, int p1, int p2, int p3,
			Hash modelHash)
		{
			invoke<Void>(0xBA01E7B6DEEFBBC9, cutsceneEntName, p1, p2, p3, modelHash);
		} // 0xBA01E7B6DEEFBBC9 0x6AF994A1  
		static void _0x2a56c06ebef2b0d9(const char* cutsceneEntName, Ped ped, Hash modelHash)
		{
			invoke<Void>(0x2A56C06EBEF2B0D9, cutsceneEntName, ped, modelHash);
		} // 0x2A56C06EBEF2B0D9 0x1E7DA95E  
		static bool does_cutscene_entity_exist(const char* cutsceneEntName, Hash modelHash)
		{
			return invoke<bool>(0x499EF20C5DB25C59, cutsceneEntName, modelHash);
		} // 0x499EF20C5DB25C59 0x58E67409  
		static void set_cutscene_ped_prop_variation(const char* cutsceneEntName, int p1, int p2, int p3, Hash modelHash)
		{
			invoke<Void>(0x0546524ADE2E9723, cutsceneEntName, p1, p2, p3, modelHash);
		} // 0x0546524ADE2E9723 0x22E9A9DE  
		static Hash* _0x708bdd8cd795b043() { return invoke<Hash*>(0x708BDD8CD795B043); }
		// 0x708BDD8CD795B043 0x4315A7C5  
	}

	namespace interior
	{
		static int get_interior_group_id(int interiorID) { return invoke<int>(0xE4A84ABF135EF91A, interiorID); }
		// 0xE4A84ABF135EF91A 0x09D6376F  
		static Vector3 get_offset_from_interior_in_world_coords(int interiorID, float x, float y, float z)
		{
			return invoke<Vector3>(0x9E3B3E6D66F6E22F, interiorID, x, y, z);
		} // 0x9E3B3E6D66F6E22F 0x7D8F26A1  
		static bool is_interior_scene() { return invoke<bool>(0xBC72B5D7A1CBD54D); } // 0xBC72B5D7A1CBD54D 0x55226C13  
		static bool is_valid_interior(int interiorID) { return invoke<bool>(0x26B0E73D7EAAF4D3, interiorID); }
		// 0x26B0E73D7EAAF4D3 0x39C0B635  
		static void clear_room_for_entity(Entity entity) { invoke<Void>(0xB365FC0C4E27FFA7, entity); }
		// 0xB365FC0C4E27FFA7 0x7DDADB92  
		static void force_room_for_entity(Entity entity, int interiorID, Hash roomHashKey)
		{
			invoke<Void>(0x52923C4710DD9907, entity, interiorID, roomHashKey);
		} // 0x52923C4710DD9907 0x10BD4435  
		static Hash get_room_key_from_entity(Entity entity) { return invoke<Hash>(0x47C2A06D4F5F424B, entity); }
		// 0x47C2A06D4F5F424B 0xE4ACF8C3  
		static Hash get_key_for_entity_in_room(Entity entity) { return invoke<Hash>(0x399685DB942336BC, entity); }
		// 0x399685DB942336BC 0x91EA80EF  
		static int get_interior_from_entity(Entity entity) { return invoke<int>(0x2107BA504071A6BB, entity); }
		// 0x2107BA504071A6BB 0x5C644614  
		static void _0x82ebb79e258fa2b7(Entity entity, int interiorID)
		{
			invoke<Void>(0x82EBB79E258FA2B7, entity, interiorID);
		} // 0x82EBB79E258FA2B7 0xE645E162  
		static void _0x920d853f3e17f1da(int interiorID, Hash roomHashKey)
		{
			invoke<Void>(0x920D853F3E17F1DA, interiorID, roomHashKey);
		} // 0x920D853F3E17F1DA 0xD79803B5  
		static void _0xaf348afcb575a441(const char* roomName) { invoke<Void>(0xAF348AFCB575A441, roomName); }
		// 0xAF348AFCB575A441 0x1F6B4B13  
		static void _0x405dc2aef6af95b9(Hash roomHashKey) { invoke<Void>(0x405DC2AEF6AF95B9, roomHashKey); }
		// 0x405DC2AEF6AF95B9 0x0E9529CC  
		static Hash _get_room_key_from_gameplay_cam() { return invoke<Hash>(0xA6575914D2A0B450); }
		// 0xA6575914D2A0B450 0x4FF3D3F5  
		static void _0x23b59d8912f94246() { invoke<Void>(0x23B59D8912F94246); } // 0x23B59D8912F94246 0x617DC75D  
		static int get_interior_at_coords(float x, float y, float z)
		{
			return invoke<int>(0xB0F7F8663821D9C3, x, y, z);
		} // 0xB0F7F8663821D9C3 0xA17FBF37  
		static void add_pickup_to_interior_room_by_name(Pickup pickup, const char* roomName)
		{
			invoke<Void>(0x3F6167F351168730, pickup, roomName);
		} // 0x3F6167F351168730 0xA2A73564  
		static void _load_interior(int interiorID) { invoke<Void>(0x2CA429C029CCF247, interiorID); }
		// 0x2CA429C029CCF247 0x3ADA414E  
		static void unpin_interior(int interiorID) { invoke<Void>(0x261CCE7EED010641, interiorID); }
		// 0x261CCE7EED010641 0xFCFF792A  
		static bool is_interior_ready(int interiorID) { return invoke<bool>(0x6726BDCCC1932F0E, interiorID); }
		// 0x6726BDCCC1932F0E 0xE1EF6450  
		static Any _0x4c2330e61d3deb56(int interiorID) { return invoke<Any>(0x4C2330E61D3DEB56, interiorID); }
		// 0x4C2330E61D3DEB56  
		static int get_interior_at_coords_with_type(float x, float y, float z, const char* interiorType)
		{
			return invoke<int>(0x05B7A89BD78797FC, x, y, z, interiorType);
		} // 0x05B7A89BD78797FC 0x96525B06  
		static int _unk_get_interior_at_coords(float x, float y, float z, int unk)
		{
			return invoke<int>(0xF0F77ADB9F67E79D, x, y, z, unk);
		} // 0xF0F77ADB9F67E79D  
		static bool _are_coords_colliding_with_exterior(float x, float y, float z)
		{
			return invoke<bool>(0xEEA5AC2EDA7C33E8, x, y, z);
		} // 0xEEA5AC2EDA7C33E8 0x7762249C  
		static int get_interior_from_collision(float x, float y, float z)
		{
			return invoke<int>(0xEC4CF9FCB29A4424, x, y, z);
		} // 0xEC4CF9FCB29A4424 0x7ED33DC1  
		static void _enable_interior_prop(int interiorID, const char* propName)
		{
			invoke<Void>(0x55E86AF2712B36A1, interiorID, propName);
		} // 0x55E86AF2712B36A1 0xC80A5DDF  
		static void _disable_interior_prop(int interiorID, const char* propName)
		{
			invoke<Void>(0x420BD37289EEE162, interiorID, propName);
		} // 0x420BD37289EEE162 0xDBA768A1  
		static bool _is_interior_prop_enabled(int interiorID, const char* propName)
		{
			return invoke<bool>(0x35F7DD45E8C0A16D, interiorID, propName);
		} // 0x35F7DD45E8C0A16D 0x39A3CC6F  
		static void refresh_interior(int interiorID) { invoke<Void>(0x41F37C3427C75AE0, interiorID); }
		// 0x41F37C3427C75AE0 0x9A29ACE6  
		static void _hide_map_object_this_frame(Hash mapObjectHash) { invoke<Void>(0xA97F257D0151A6AB, mapObjectHash); }
		// 0xA97F257D0151A6AB 0x1F375B4C  
		static void disable_interior(int interiorID, bool toggle)
		{
			invoke<Void>(0x6170941419D7D8EC, interiorID, toggle);
		} // 0x6170941419D7D8EC 0x093ADEA5  
		static bool is_interior_disabled(int interiorID) { return invoke<bool>(0xBC5115A5A939DD15, interiorID); }
		// 0xBC5115A5A939DD15 0x81F34C71  
		static void cap_interior(int interiorID, bool toggle) { invoke<Void>(0xD9175F941610DB54, interiorID, toggle); }
		// 0xD9175F941610DB54 0x34E735A6  
		static bool is_interior_capped(int interiorID) { return invoke<bool>(0x92BAC8ACF88CEC26, interiorID); }
		// 0x92BAC8ACF88CEC26 0x18B17C80  
		static void _0x9e6542f0ce8e70a3(bool toggle) { invoke<Void>(0x9E6542F0CE8E70A3, toggle); }
		// 0x9E6542F0CE8E70A3 0x5EF9C5C2  
	}

	namespace cam
	{
		static void render_script_cams(bool render, bool ease, int easeTime, bool p3, bool p4)
		{
			invoke<Void>(0x07E5B515DB0636FC, render, ease, easeTime, p3, p4);
		} // 0x07E5B515DB0636FC 0x74337969  
		static void _render_first_person_cam(bool render, float p1, int p2)
		{
			invoke<Void>(0xC819F3CBB62BF692, render, p1, p2);
		} // 0xC819F3CBB62BF692 0xD3C08183  
		static Cam create_cam(const char* camName, bool p1) { return invoke<Cam>(0xC3981DCE61D9E13F, camName, p1); }
		// 0xC3981DCE61D9E13F 0xE9BF2A7D  
		static Cam create_cam_with_params(const char* camName, float posX, float posY, float posZ, float rotX,
			float rotY, float rotZ, float fov, bool p8, int p9)
		{
			return invoke<Cam>(0xB51194800B257161, camName, posX, posY, posZ, rotX, rotY, rotZ, fov, p8, p9);
		} // 0xB51194800B257161 0x23B02F15  
		static Cam create_camera(Hash camHash, bool p1) { return invoke<Cam>(0x5E3CF89C6BCCA67D, camHash, p1); }
		// 0x5E3CF89C6BCCA67D 0x5D6739AE  
		static Cam create_camera_with_params(Hash camHash, float posX, float posY, float posZ, float rotX, float rotY,
			float rotZ, float fov, bool p8, Any p9)
		{
			return invoke<Cam>(0x6ABFA3E16460F22D, camHash, posX, posY, posZ, rotX, rotY, rotZ, fov, p8, p9);
		} // 0x6ABFA3E16460F22D 0x0688BE9A  
		static void destroy_cam(Cam cam, bool thisScriptCheck)
		{
			invoke<Void>(0x865908C81A2C22E9, cam, thisScriptCheck);
		} // 0x865908C81A2C22E9 0xC39302BD  
		static void destroy_all_cams(bool thisScriptCheck) { invoke<Void>(0x8E5FB15663F79120, thisScriptCheck); }
		// 0x8E5FB15663F79120 0x10C151CE  
		static bool does_cam_exist(Cam cam) { return invoke<bool>(0xA7A932170592B50E, cam); }
		// 0xA7A932170592B50E 0x1EF89DC0  
		static void set_cam_active(Cam cam, bool active) { invoke<Void>(0x026FB97D0A425F84, cam, active); }
		// 0x026FB97D0A425F84 0x064659C2  
		static bool is_cam_active(Cam cam) { return invoke<bool>(0xDFB2B516207D3534, cam); }
		// 0xDFB2B516207D3534 0x4B58F177  
		static bool is_cam_rendering(Cam cam) { return invoke<bool>(0x02EC0AF5C5A49B7A, cam); }
		// 0x02EC0AF5C5A49B7A 0x6EC6B5B2  
		static Cam get_rendering_cam() { return invoke<Cam>(0x5234F9F10919EABA); } // 0x5234F9F10919EABA 0x0FCF4DF1  
		static Vector3 get_cam_coord(Cam cam) { return invoke<Vector3>(0xBAC038F7459AE5AE, cam); }
		// 0xBAC038F7459AE5AE 0x7C40F09C  
		static Vector3 get_cam_rot(Cam cam, int rotationOrder)
		{
			return invoke<Vector3>(0x7D304C1C955E3E12, cam, rotationOrder);
		} // 0x7D304C1C955E3E12 0xDAC84C9F  
		static float get_cam_fov(Cam cam) { return invoke<float>(0xC3330A45CCCDB26A, cam); }
		// 0xC3330A45CCCDB26A 0xD6E9FCF5  
		static float get_cam_near_clip(Cam cam) { return invoke<float>(0xC520A34DAFBF24B1, cam); }
		// 0xC520A34DAFBF24B1 0xCFCD35EE  
		static float get_cam_far_clip(Cam cam) { return invoke<float>(0xB60A9CFEB21CA6AA, cam); }
		// 0xB60A9CFEB21CA6AA 0x09F119B8  
		static float get_cam_far_dof(Cam cam) { return invoke<float>(0x255F8DAFD540D397, cam); }
		// 0x255F8DAFD540D397 0x98C5CCE9  
		static void set_cam_params(Cam cam, float posX, float posY, float posZ, float rotX, float rotY, float rotZ,
			float fieldOfView, Any p8, int p9, int p10, int p11)
		{
			invoke<Void>(0xBFD8727AEA3CCEBA, cam, posX, posY, posZ, rotX, rotY, rotZ, fieldOfView, p8, p9, p10, p11);
		} // 0xBFD8727AEA3CCEBA 0x2167CEBF  
		static void set_cam_coord(Cam cam, float posX, float posY, float posZ)
		{
			invoke<Void>(0x4D41783FB745E42E, cam, posX, posY, posZ);
		} // 0x4D41783FB745E42E 0x7A8053AF  
		static void set_cam_rot(Cam cam, float rotX, float rotY, float rotZ, int rotationOrder)
		{
			invoke<Void>(0x85973643155D0B07, cam, rotX, rotY, rotZ, rotationOrder);
		} // 0x85973643155D0B07 0xEE38B3C1  
		static void set_cam_fov(Cam cam, float fieldOfView) { invoke<Void>(0xB13C14F66A00D047, cam, fieldOfView); }
		// 0xB13C14F66A00D047 0xD3D5D74F  
		static void set_cam_near_clip(Cam cam, float nearClip) { invoke<Void>(0xC7848EFCCC545182, cam, nearClip); }
		// 0xC7848EFCCC545182 0x46DB13B1  
		static void set_cam_far_clip(Cam cam, float farClip) { invoke<Void>(0xAE306F2A904BF86E, cam, farClip); }
		// 0xAE306F2A904BF86E 0x0D23E381  
		static void set_cam_motion_blur_strength(Cam cam, float strength)
		{
			invoke<Void>(0x6F0F77FBA9A8F2E6, cam, strength);
		} // 0x6F0F77FBA9A8F2E6 0xFD6E0D67  
		static void set_cam_near_dof(Cam cam, float nearDOF) { invoke<Void>(0x3FA4BF0A7AB7DE2C, cam, nearDOF); }
		// 0x3FA4BF0A7AB7DE2C 0xF28254DF  
		static void set_cam_far_dof(Cam cam, float farDOF) { invoke<Void>(0xEDD91296CD01AEE0, cam, farDOF); }
		// 0xEDD91296CD01AEE0 0x58515E8E  
		static void set_cam_dof_strength(Cam cam, float dofStrength)
		{
			invoke<Void>(0x5EE29B4D7D5DF897, cam, dofStrength);
		} // 0x5EE29B4D7D5DF897 0x3CC4EB3F  
		static void set_cam_dof_planes(Cam cam, float p1, float p2, float p3, float p4)
		{
			invoke<Void>(0x3CF48F6F96E749DC, cam, p1, p2, p3, p4);
		} // 0x3CF48F6F96E749DC 0xAD6C2B8F  
		static void set_cam_use_shallow_dof_mode(Cam cam, bool toggle)
		{
			invoke<Void>(0x16A96863A17552BB, cam, toggle);
		} // 0x16A96863A17552BB 0x8306C256  
		static void set_use_hi_dof() { invoke<Void>(0xA13B0222F3D94A94); } // 0xA13B0222F3D94A94 0x8BBF2950  
		static void _0xf55e4046f6f831dc(Any p0, float p1) { invoke<Void>(0xF55E4046F6F831DC, p0, p1); }
		// 0xF55E4046F6F831DC  
		static void _0xe111a7c0d200cbc5(Any p0, float p1) { invoke<Void>(0xE111A7C0D200CBC5, p0, p1); }
		// 0xE111A7C0D200CBC5  
		static void _set_cam_dof_fnumber_of_lens(Cam camera, float p1) { invoke<Void>(0x7DD234D6F3914C5B, camera, p1); }
		// 0x7DD234D6F3914C5B  
		static void _set_cam_dof_focus_distance_bias(Cam camera, float p1)
		{
			invoke<Void>(0xC669EEA5D031B7DE, camera, p1);
		} // 0xC669EEA5D031B7DE  
		static void _set_cam_dof_max_near_in_focus_distance(Cam camera, float p1)
		{
			invoke<Void>(0xC3654A441402562D, camera, p1);
		} // 0xC3654A441402562D  
		static void _set_cam_dof_max_near_in_focus_distance_blend_level(Cam camera, float p1)
		{
			invoke<Void>(0x2C654B4943BDDF7C, camera, p1);
		} // 0x2C654B4943BDDF7C  
		static void attach_cam_to_entity(Cam cam, Entity entity, float xOffset, float yOffset, float zOffset,
			bool isRelative)
		{
			invoke<Void>(0xFEDB7D269E8C60E3, cam, entity, xOffset, yOffset, zOffset, isRelative);
		} // 0xFEDB7D269E8C60E3 0xAD7C45F6  
		static void attach_cam_to_ped_bone(Cam cam, Ped ped, int boneIndex, float x, float y, float z, bool heading)
		{
			invoke<Void>(0x61A3DBA14AB7F411, cam, ped, boneIndex, x, y, z, heading);
		} // 0x61A3DBA14AB7F411 0x506BB35C  
		static void detach_cam(Cam cam) { invoke<Void>(0xA2FABBE87F4BAD82, cam); } // 0xA2FABBE87F4BAD82 0xF4FBF14A  
		static void set_cam_inherit_roll_vehicle(Cam cam, bool p1) { invoke<Void>(0x45F1DE9C34B93AE6, cam, p1); }
		// 0x45F1DE9C34B93AE6 0xE4BD5342  
		static void point_cam_at_coord(Cam cam, float x, float y, float z)
		{
			invoke<Void>(0xF75497BB865F0803, cam, x, y, z);
		} // 0xF75497BB865F0803 0x914BC21A  
		static void point_cam_at_entity(Cam cam, Entity entity, float p2, float p3, float p4, bool p5)
		{
			invoke<Void>(0x5640BFF86B16E8DC, cam, entity, p2, p3, p4, p5);
		} // 0x5640BFF86B16E8DC 0x7597A0F7  
		static void point_cam_at_ped_bone(Cam cam, int ped, int boneIndex, float x, float y, float z, bool p6)
		{
			invoke<Void>(0x68B2B5F33BA63C41, cam, ped, boneIndex, x, y, z, p6);
		} // 0x68B2B5F33BA63C41 0x09F47049  
		static void stop_cam_pointing(Cam cam) { invoke<Void>(0xF33AB75780BA57DE, cam); }
		// 0xF33AB75780BA57DE 0x5435F6A5  
		static void set_cam_affects_aiming(Cam cam, bool toggle) { invoke<Void>(0x8C1DC7770C51DC8D, cam, toggle); }
		// 0x8C1DC7770C51DC8D 0x0C74F9AF  
		static void _0x661b5c8654add825(Any p0, bool p1) { invoke<Void>(0x661B5C8654ADD825, p0, p1); }
		// 0x661B5C8654ADD825 0xE1A0B2F1  
		static void _0xa2767257a320fc82(Any p0, bool p1) { invoke<Void>(0xA2767257A320FC82, p0, p1); }
		// 0xA2767257A320FC82  
		static void _0x271017b9ba825366(Any p0, bool p1) { invoke<Void>(0x271017B9BA825366, p0, p1); }
		// 0x271017B9BA825366 0x43220969  
		static void set_cam_debug_name(Cam camera, const char* name) { invoke<Void>(0x1B93E0107865DD40, camera, name); }
		// 0x1B93E0107865DD40 0x9B00DF3F  
		static void add_cam_spline_node(Cam camera, float x, float y, float z, float xRot, float yRot, float zRot,
			int length, int p8, int p9)
		{
			invoke<Void>(0x8609C75EC438FB3B, camera, x, y, z, xRot, yRot, zRot, length, p8, p9);
		} // 0x8609C75EC438FB3B 0xAD3C7EAA  
		static void _0x0a9f2a468b328e74(Any p0, Any p1, Any p2, Any p3)
		{
			invoke<Void>(0x0A9F2A468B328E74, p0, p1, p2, p3);
		} // 0x0A9F2A468B328E74 0x30510511  
		static void _0x0fb82563989cf4fb(Any p0, Any p1, Any p2, Any p3)
		{
			invoke<Void>(0x0FB82563989CF4FB, p0, p1, p2, p3);
		} // 0x0FB82563989CF4FB 0xBA6C085B  
		static void _0x609278246a29ca34(Any p0, Any p1, Any p2) { invoke<Void>(0x609278246A29CA34, p0, p1, p2); }
		// 0x609278246A29CA34 0xB4737F03  
		static void set_cam_spline_phase(Cam cam, float p1) { invoke<Void>(0x242B5874F0A4E052, cam, p1); }
		// 0x242B5874F0A4E052 0xF0AED233  
		static float get_cam_spline_phase(Cam cam) { return invoke<float>(0xB5349E36C546509A, cam); }
		// 0xB5349E36C546509A 0x39784DD9  
		static float get_cam_spline_node_phase(Cam cam) { return invoke<float>(0xD9D0E694C8282C96, cam); }
		// 0xD9D0E694C8282C96 0x7B9522F6  
		static void set_cam_spline_duration(int cam, int timeDuration)
		{
			invoke<Void>(0x1381539FEE034CDA, cam, timeDuration);
		} // 0x1381539FEE034CDA 0x3E91FC8A  
		static void _0xd1b0f412f109ea5d(Any p0, Any p1) { invoke<Void>(0xD1B0F412F109EA5D, p0, p1); }
		// 0xD1B0F412F109EA5D 0x15E141CE  
		static bool get_cam_spline_node_index(Cam cam) { return invoke<bool>(0xB22B17DF858716A6, cam); }
		// 0xB22B17DF858716A6 0xF8AEB6BD  
		static void _0x83b8201ed82a9a2d(Any p0, Any p1, Any p2, float p3)
		{
			invoke<Void>(0x83B8201ED82A9A2D, p0, p1, p2, p3);
		} // 0x83B8201ED82A9A2D 0x21D275DA  
		static void _0xa6385deb180f319f(Any p0, Any p1, float p2) { invoke<Void>(0xA6385DEB180F319F, p0, p1, p2); }
		// 0xA6385DEB180F319F 0xA3BD9E94  
		static void override_cam_spline_velocity(Cam cam, int p1, float p2, float p3)
		{
			invoke<Void>(0x40B62FA033EB0346, cam, p1, p2, p3);
		} // 0x40B62FA033EB0346 0x326A17E2  
		static void override_cam_spline_motion_blur(Cam cam, int p1, float p2, float p3)
		{
			invoke<Void>(0x7DCF7C708D292D55, cam, p1, p2, p3);
		} // 0x7DCF7C708D292D55 0x633179E6  
		static void _0x7bf1a54ae67ac070(Any p0, Any p1, Any p2) { invoke<Void>(0x7BF1A54AE67AC070, p0, p1, p2); }
		// 0x7BF1A54AE67AC070 0xC90B2DDC  
		static bool is_cam_spline_paused(Any p0) { return invoke<bool>(0x0290F35C0AD97864, p0); }
		// 0x0290F35C0AD97864 0x60B34FF5  
		static void set_cam_active_with_interp(Cam camTo, Cam camFrom, int duration, int easeLocation, int easeRotation)
		{
			invoke<Void>(0x9FBDA379383A52A4, camTo, camFrom, duration, easeLocation, easeRotation);
		} // 0x9FBDA379383A52A4 0x7983E7F0  
		static bool is_cam_interpolating(Cam cam) { return invoke<bool>(0x036F97C908C2B52C, cam); }
		// 0x036F97C908C2B52C 0x7159CB5D  
		static void shake_cam(Cam cam, const char* type, float amplitude)
		{
			invoke<Void>(0x6A25241C340D3822, cam, type, amplitude);
		} // 0x6A25241C340D3822 0x1D4211B0  
		static void animated_shake_cam(Cam cam, const char* p1, const char* p2, const char* p3, float amplitude)
		{
			invoke<Void>(0xA2746EEAE3E577CD, cam, p1, p2, p3, amplitude);
		} // 0xA2746EEAE3E577CD 0xE1168767  
		static bool is_cam_shaking(Cam cam) { return invoke<bool>(0x6B24BFE83A2BE47B, cam); }
		// 0x6B24BFE83A2BE47B 0x0961FD9B  
		static void set_cam_shake_amplitude(Cam cam, float amplitude)
		{
			invoke<Void>(0xD93DB43B82BC0D00, cam, amplitude);
		} // 0xD93DB43B82BC0D00 0x60FF6382  
		static void stop_cam_shaking(Cam cam, bool p1) { invoke<Void>(0xBDECF64367884AC3, cam, p1); }
		// 0xBDECF64367884AC3 0x40D0EB87  
		static void _0xf4c8cf9e353afeca(const char* p0, float p1) { invoke<Void>(0xF4C8CF9E353AFECA, p0, p1); }
		// 0xF4C8CF9E353AFECA 0x2B0F05CD  
		static void _0xc2eae3fb8cdbed31(const char* p0, const char* p1, const char* p2, float p3)
		{
			invoke<Void>(0xC2EAE3FB8CDBED31, p0, p1, p2, p3);
		} // 0xC2EAE3FB8CDBED31 0xCB75BD9C  
		static bool is_script_global_shaking() { return invoke<bool>(0xC912AF078AF19212); }
		// 0xC912AF078AF19212 0x6AEFE6A5  
		static void stop_script_global_shaking(bool p0) { invoke<Void>(0x1C9D7949FA533490, p0); }
		// 0x1C9D7949FA533490 0x26FCFB96  
		static bool play_cam_anim(Cam cam, const char* animName, const char* animDictionary, float x, float y, float z,
			float xRot, float yRot, float zRot, bool p9, int p10)
		{
			return invoke<bool>(0x9A2D0FB2E7852392, cam, animName, animDictionary, x, y, z, xRot, yRot, zRot, p9, p10);
		} // 0x9A2D0FB2E7852392 0xBCEFB87E  
		static bool is_cam_playing_anim(Cam cam, const char* animName, const char* animDictionary)
		{
			return invoke<bool>(0xC90621D8A0CEECF2, cam, animName, animDictionary);
		} // 0xC90621D8A0CEECF2 0xB998CB49  
		static void set_cam_anim_current_phase(Cam cam, float phase) { invoke<Void>(0x4145A4C44FF3B5A6, cam, phase); }
		// 0x4145A4C44FF3B5A6 0x3CB1D17F  
		static float get_cam_anim_current_phase(Cam cam) { return invoke<float>(0xA10B2DB49E92A6B0, cam); }
		// 0xA10B2DB49E92A6B0 0x345F72D0  
		static bool play_synchronized_cam_anim(Any p0, Any p1, const char* animName, const char* animDictionary)
		{
			return invoke<bool>(0xE32EFE9AB4A9AA0C, p0, p1, animName, animDictionary);
		} // 0xE32EFE9AB4A9AA0C 0x9458459E  
		static void _0x503f5920162365b2(Any p0, float p1, float p2, float p3)
		{
			invoke<Void>(0x503F5920162365B2, p0, p1, p2, p3);
		} // 0x503F5920162365B2 0x56F9ED27  
		static void _set_camera_range(Cam cam, float range) { invoke<Void>(0xF9D02130ECDD1D77, cam, range); }
		// 0xF9D02130ECDD1D77 0x71570DBA  
		static void _0xc91c6c55199308ca(Any p0, float p1, float p2, float p3)
		{
			invoke<Void>(0xC91C6C55199308CA, p0, p1, p2, p3);
		} // 0xC91C6C55199308CA 0x60B345DE  
		static void _0xc8b5c4a79cc18b94(Cam p0) { invoke<Void>(0xC8B5C4A79CC18B94, p0); }
		// 0xC8B5C4A79CC18B94 0x44473EFC  
		static bool _0x5c48a1d6e3b33179(Any p0) { return invoke<bool>(0x5C48A1D6E3B33179, p0); }
		// 0x5C48A1D6E3B33179 0xDA931D65  
		static bool is_screen_faded_out() { return invoke<bool>(0xB16FCE9DDC7BA182); } // 0xB16FCE9DDC7BA182 0x9CAA05FA  
		static bool is_screen_faded_in() { return invoke<bool>(0x5A859503B0C08678); } // 0x5A859503B0C08678 0x4F37276D  
		static bool is_screen_fading_out() { return invoke<bool>(0x797AC7CB535BA28F); }
		// 0x797AC7CB535BA28F 0x79275A57  
		static bool is_screen_fading_in() { return invoke<bool>(0x5C544BC6C57AC575); } // 0x5C544BC6C57AC575 0xC7C82800  
		static void do_screen_fade_in(int duration) { invoke<Void>(0xD4E8E24955024033, duration); }
		// 0xD4E8E24955024033 0x66C1BDEE  
		static void do_screen_fade_out(int duration) { invoke<Void>(0x891B5B39AC6302AF, duration); }
		// 0x891B5B39AC6302AF 0x89D01805  
		static void set_widescreen_borders(bool p0, int p1) { invoke<Void>(0xDCD4EA924F42D01A, p0, p1); }
		// 0xDCD4EA924F42D01A 0x1A75DC9A  
		static Vector3 get_gameplay_cam_coord() { return invoke<Vector3>(0x14D6F5678D8F1B37); }
		// 0x14D6F5678D8F1B37 0x9388CF79  
		static Vector3 get_gameplay_cam_rot(int rotationOrder)
		{
			return invoke<Vector3>(0x837765A25378F0BB, rotationOrder);
		} // 0x837765A25378F0BB 0x13A010B5  
		static float get_gameplay_cam_fov() { return invoke<float>(0x65019750A0324133); }
		// 0x65019750A0324133 0x4D6B3BFA  
		static void custom_menu_coordinates(float p0) { invoke<Void>(0x487A82C650EB7799, p0); }
		// 0x487A82C650EB7799 0xA6E73135  
		static void _0x0225778816fdc28c(float p0) { invoke<Void>(0x0225778816FDC28C, p0); }
		// 0x0225778816FDC28C 0x1126E37C  
		static float get_gameplay_cam_relative_heading() { return invoke<float>(0x743607648ADD4587); }
		// 0x743607648ADD4587 0xCAF839C2  
		static void set_gameplay_cam_relative_heading(float heading) { invoke<Void>(0xB4EC2312F4E5B1F1, heading); }
		// 0xB4EC2312F4E5B1F1 0x20C6217C  
		static float get_gameplay_cam_relative_pitch() { return invoke<float>(0x3A6867B4845BEDA2); }
		// 0x3A6867B4845BEDA2 0xFC5A4946  
		static void set_gameplay_cam_relative_pitch(float x, float Value2)
		{
			invoke<Void>(0x6D0858B8EDFD2B7D, x, Value2);
		} // 0x6D0858B8EDFD2B7D 0x6381B963  
		static void _set_gameplay_cam_raw_yaw(float yaw) { invoke<Void>(0x103991D4A307D472, yaw); }
		// 0x103991D4A307D472  
		static void _set_gameplay_cam_raw_pitch(float pitch) { invoke<Void>(0x759E13EBC1C15C5A, pitch); }
		// 0x759E13EBC1C15C5A  
		static void _0x469f2ecdec046337(bool p0) { invoke<Void>(0x469F2ECDEC046337, p0); } // 0x469F2ECDEC046337  
		static void shake_gameplay_cam(const char* shakeName, float intensity)
		{
			invoke<Void>(0xFD55E49555E017CF, shakeName, intensity);
		} // 0xFD55E49555E017CF 0xF2EFE660  
		static bool is_gameplay_cam_shaking() { return invoke<bool>(0x016C090630DF1F89); }
		// 0x016C090630DF1F89 0x3457D681  
		static void set_gameplay_cam_shake_amplitude(float amplitude) { invoke<Void>(0xA87E00932DB4D85D, amplitude); }
		// 0xA87E00932DB4D85D 0x9219D44A  
		static void stop_gameplay_cam_shaking(bool p0) { invoke<Void>(0x0EF93E9F3D08C178, p0); }
		// 0x0EF93E9F3D08C178 0xFD569E4E  
		static void _0x8bbacbf51da047a8(Any p0) { invoke<Void>(0x8BBACBF51DA047A8, p0); }
		// 0x8BBACBF51DA047A8 0x7D3007A2  
		static bool is_gameplay_cam_rendering() { return invoke<bool>(0x39B5D1B10383F0C8); }
		// 0x39B5D1B10383F0C8 0x0EF276DA  
		static bool _0x3044240d2e0fa842() { return invoke<bool>(0x3044240D2E0FA842); } // 0x3044240D2E0FA842 0xC0B00C20  
		static bool _0x705a276ebff3133d() { return invoke<bool>(0x705A276EBFF3133D); } // 0x705A276EBFF3133D 0x60C23785  
		static void _0xdb90c6cca48940f1(bool p0) { invoke<Void>(0xDB90C6CCA48940F1, p0); }
		// 0xDB90C6CCA48940F1 0x20BFF6E5  
		static void _enable_crosshair_this_frame() { invoke<Void>(0xEA7F0AD7E9BA676F); }
		// 0xEA7F0AD7E9BA676F 0xA61FF9AC  
		static bool is_gameplay_cam_looking_behind() { return invoke<bool>(0x70FDA869F3317EA9); }
		// 0x70FDA869F3317EA9 0x33C83F17  
		static void _0x2aed6301f67007d5(Entity entity) { invoke<Void>(0x2AED6301F67007D5, entity); }
		// 0x2AED6301F67007D5 0x2701A9AD  
		static void _0x49482f9fcd825aaa(Entity entity) { invoke<Void>(0x49482F9FCD825AAA, entity); }
		// 0x49482F9FCD825AAA 0xC4736ED3  
		static void _0xfd3151cd37ea2245(Any p0) { invoke<Void>(0xFD3151CD37EA2245, p0); } // 0xFD3151CD37EA2245  
		static void _0xdd79df9f4d26e1c9() { invoke<Void>(0xDD79DF9F4D26E1C9); } // 0xDD79DF9F4D26E1C9 0x6B0E9D57  
		static bool is_sphere_visible(float x, float y, float z, float radius)
		{
			return invoke<bool>(0xE33D59DA70B58FDF, x, y, z, radius);
		} // 0xE33D59DA70B58FDF 0xDD1329E2  
		static bool is_follow_ped_cam_active() { return invoke<bool>(0xC6D3D26810C8E0F9); }
		// 0xC6D3D26810C8E0F9 0x9F9E856C  
		static bool set_follow_ped_cam_cutscene_chat(const char* p0, int p1)
		{
			return invoke<bool>(0x44A113DD6FFC48D1, p0, p1);
		} // 0x44A113DD6FFC48D1 0x1425F6AC  
		static void _0x271401846bd26e92(bool p0, bool p1) { invoke<Void>(0x271401846BD26E92, p0, p1); }
		// 0x271401846BD26E92 0x8DC53629  
		static void _0xc8391c309684595a() { invoke<Void>(0xC8391C309684595A); } // 0xC8391C309684595A 0x1F9DE6E4  
		static void _clamp_gameplay_cam_yaw(float minimum, float maximum)
		{
			invoke<Void>(0x8F993D26E0CA5E8E, minimum, maximum);
		} // 0x8F993D26E0CA5E8E 0x749909AC  
		static void _clamp_gameplay_cam_pitch(float minimum, float maximum)
		{
			invoke<Void>(0xA516C198B7DCA1E1, minimum, maximum);
		} // 0xA516C198B7DCA1E1 0xFA3A16E7  
		static void _animate_gameplay_cam_zoom(float p0, float distance)
		{
			invoke<Void>(0xDF2E1F7742402E81, p0, distance);
		} // 0xDF2E1F7742402E81 0x77340650  
		static void _0xe9ea16d6e54cdca4(Vehicle p0, int p1) { invoke<Void>(0xE9EA16D6E54CDCA4, p0, p1); }
		// 0xE9EA16D6E54CDCA4 0x4B22C5CB  
		static void _disable_first_person_cam_this_frame() { invoke<Void>(0xDE2EF5DA284CC8DF); } // 0xDE2EF5DA284CC8DF  
		static void _0x59424bd75174c9b1() { invoke<Void>(0x59424BD75174C9B1); } // 0x59424BD75174C9B1  
		static int get_follow_ped_cam_zoom_level() { return invoke<int>(0x33E6C8EFD0CD93E9); }
		// 0x33E6C8EFD0CD93E9 0x57583DF1  
		static int get_follow_ped_cam_view_mode() { return invoke<int>(0x8D4D46230B2C353A); }
		// 0x8D4D46230B2C353A 0xA65FF946  
		static void set_follow_ped_cam_view_mode(int viewMode) { invoke<Void>(0x5A4F9EDF1673F704, viewMode); }
		// 0x5A4F9EDF1673F704 0x495DBE8D  
		static bool is_follow_vehicle_cam_active() { return invoke<bool>(0xCBBDE6D335D6D496); }
		// 0xCBBDE6D335D6D496 0x8DD49B77  
		static void _0x91ef6ee6419e5b97(bool p0) { invoke<Void>(0x91EF6EE6419E5B97, p0); }
		// 0x91EF6EE6419E5B97 0x9DB5D391  
		static void set_time_idle_drop(bool p0, bool p1) { invoke<Void>(0x9DFE13ECDC1EC196, p0, p1); }
		// 0x9DFE13ECDC1EC196 0x92302899  
		static int get_follow_vehicle_cam_zoom_level() { return invoke<int>(0xEE82280AB767B690); }
		// 0xEE82280AB767B690 0x8CD67DE3  
		static void set_follow_vehicle_cam_zoom_level(int zoomLevel) { invoke<Void>(0x19464CB6E4078C8A, zoomLevel); }
		// 0x19464CB6E4078C8A 0x8F55EBBE  
		static int get_follow_vehicle_cam_view_mode() { return invoke<int>(0xA4FF579AC0E3AAAE); }
		// 0xA4FF579AC0E3AAAE 0xA4B4DB03  
		static void set_follow_vehicle_cam_view_mode(int viewMode) { invoke<Void>(0xAC253D7842768F48, viewMode); }
		// 0xAC253D7842768F48 0xC4FBBBD3  
		static Any _0xee778f8c7e1142e2(Any p0) { return invoke<Any>(0xEE778F8C7E1142E2, p0); }
		// 0xEE778F8C7E1142E2 0xF3B148A6  
		static void _0x2a2173e46daecd12(Any p0, Any p1) { invoke<Void>(0x2A2173E46DAECD12, p0, p1); }
		// 0x2A2173E46DAECD12 0x1DEBCB45  
		static Any _0x19cafa3c87f7c2ff() { return invoke<Any>(0x19CAFA3C87F7C2FF); } // 0x19CAFA3C87F7C2FF  
		static bool is_aim_cam_active() { return invoke<bool>(0x68EDDA28A5976D07); } // 0x68EDDA28A5976D07 0xC24B4F6F  
		static bool _0x74bd83ea840f6bc9() { return invoke<bool>(0x74BD83EA840F6BC9); } // 0x74BD83EA840F6BC9 0x8F320DE4  
		static bool is_first_person_aim_cam_active() { return invoke<bool>(0x5E346D934122613F); }
		// 0x5E346D934122613F 0xD6280468  
		static void disable_aim_cam_this_update() { invoke<Void>(0x1A31FE0049E542F6); }
		// 0x1A31FE0049E542F6 0x1BAA7182  
		static float _get_gameplay_cam_zoom() { return invoke<float>(0x7EC52CC40597D170); }
		// 0x7EC52CC40597D170 0x33951005  
		static void _0x70894bd0915c5bca(float p0) { invoke<Void>(0x70894BD0915C5BCA, p0); }
		// 0x70894BD0915C5BCA 0x9F4AF763  
		static void _0xced08cbe8ebb97c7(float p0, float p1) { invoke<Void>(0xCED08CBE8EBB97C7, p0, p1); }
		// 0xCED08CBE8EBB97C7 0x68BA0730  
		static void _0x2f7f2b26dd3f18ee(float p0, float p1) { invoke<Void>(0x2F7F2B26DD3F18EE, p0, p1); }
		// 0x2F7F2B26DD3F18EE 0x2F29F0D5  
		static void _set_fp_cam_pitch_range(float minAngle, float maxAngle)
		{
			invoke<Void>(0xBCFC632DB7673BF0, minAngle, maxAngle);
		} // 0xBCFC632DB7673BF0 0x76DAC96C  
		static void _set_fp_cam_near_clip(float distance) { invoke<Void>(0x0AF7B437918103B3, distance); }
		// 0x0AF7B437918103B3 0x0E21069D  
		static void _set_aim_cam_near_clip(float distance) { invoke<Void>(0x42156508606DE65E, distance); }
		// 0x42156508606DE65E 0x71E9C63E  
		static void _0x4008edf7d6e48175(bool p0) { invoke<Void>(0x4008EDF7D6E48175, p0); }
		// 0x4008EDF7D6E48175 0xD1EEBC45  
		static Vector3 _get_gameplay_cam_coords() { return invoke<Vector3>(0xA200EB1EE790F448); }
		// 0xA200EB1EE790F448 0x9C84BDA0  
		static Vector3 _get_gameplay_cam_rot(int rotationOrder)
		{
			return invoke<Vector3>(0x5B4E4C817FCC2DFB, rotationOrder);
		} // 0x5B4E4C817FCC2DFB 0x1FFBEFC5  
		static Vector3 _0x26903d9cd1175f2c(Any p0, Any p1) { return invoke<Vector3>(0x26903D9CD1175F2C, p0, p1); }
		// 0x26903D9CD1175F2C 0xACADF916  
		static float _0x80ec114669daeff4() { return invoke<float>(0x80EC114669DAEFF4); }
		// 0x80EC114669DAEFF4 0x721B763B  
		static float _0x5f35f6732c3fbba0(Any p0) { return invoke<float>(0x5F35F6732C3FBBA0, p0); }
		// 0x5F35F6732C3FBBA0 0x23E3F106  
		static float _0xd0082607100d7193() { return invoke<float>(0xD0082607100D7193); }
		// 0xD0082607100D7193 0x457AE195  
		static float _0xdfc8cbc606fdb0fc() { return invoke<float>(0xDFC8CBC606FDB0FC); }
		// 0xDFC8CBC606FDB0FC 0x46CB3A49  
		static float _0xa03502fc581f7d9b() { return invoke<float>(0xA03502FC581F7D9B); }
		// 0xA03502FC581F7D9B 0x19297A7A  
		static float _0x9780f32bcaf72431() { return invoke<float>(0x9780F32BCAF72431); }
		// 0x9780F32BCAF72431 0xF24777CA  
		static float _0x162f9d995753dc19() { return invoke<float>(0x162F9D995753DC19); }
		// 0x162F9D995753DC19 0x38992E83  
		static void set_gameplay_coord_hint(float x, float y, float z, int duration, int blendOutDuration,
			int blendInDuration, int unk)
		{
			invoke<Void>(0xD51ADCD2D8BC0FB3, x, y, z, duration, blendOutDuration, blendInDuration, unk);
		} // 0xD51ADCD2D8BC0FB3 0xF27483C9  
		static void set_gameplay_ped_hint(Ped p0, float x1, float y1, float z1, bool p4, Any p5, Any p6, Any p7)
		{
			invoke<Void>(0x2B486269ACD548D3, p0, x1, y1, z1, p4, p5, p6, p7);
		} // 0x2B486269ACD548D3 0x7C27343E  
		static void set_gameplay_vehicle_hint(Any p0, float p1, float p2, float p3, bool p4, Any p5, Any p6, Any p7)
		{
			invoke<Void>(0xA2297E18F3E71C2E, p0, p1, p2, p3, p4, p5, p6, p7);
		} // 0xA2297E18F3E71C2E 0x2C9A11D8  
		static void set_gameplay_object_hint(Any p0, float p1, float p2, float p3, bool p4, Any p5, Any p6, Any p7)
		{
			invoke<Void>(0x83E87508A2CA2AC6, p0, p1, p2, p3, p4, p5, p6, p7);
		} // 0x83E87508A2CA2AC6 0x2ED5E2F8  
		static void set_gameplay_entity_hint(Entity entity, float xOffset, float yOffset, float zOffset, bool p4,
			int p5, int p6, int p7, Any p8)
		{
			invoke<Void>(0x189E955A8313E298, entity, xOffset, yOffset, zOffset, p4, p5, p6, p7, p8);
		} // 0x189E955A8313E298 0x66C32306  
		static bool is_gameplay_hint_active() { return invoke<bool>(0xE520FF1AD2785B40); }
		// 0xE520FF1AD2785B40 0xAD8DA205  
		static void stop_gameplay_hint(bool p0) { invoke<Void>(0xF46C581C61718916, p0); }
		// 0xF46C581C61718916 0x1BC28B7B  
		static void _0xccd078c2665d2973(bool p0) { invoke<Void>(0xCCD078C2665D2973, p0); }
		// 0xCCD078C2665D2973 0xCAFEE798  
		static void _0x247acbc4abbc9d1c(bool p0) { invoke<Void>(0x247ACBC4ABBC9D1C, p0); } // 0x247ACBC4ABBC9D1C  
		static Any _0xbf72910d0f26f025() { return invoke<Any>(0xBF72910D0F26F025); } // 0xBF72910D0F26F025  
		static void set_gameplay_hint_fov(float FOV) { invoke<Void>(0x513403FB9C56211F, FOV); }
		// 0x513403FB9C56211F 0x96FD173B  
		static void _0xf8bdbf3d573049a1(float p0) { invoke<Void>(0xF8BDBF3D573049A1, p0); }
		// 0xF8BDBF3D573049A1 0x72E8CD3A  
		static void _0xd1f8363dfad03848(float p0) { invoke<Void>(0xD1F8363DFAD03848, p0); }
		// 0xD1F8363DFAD03848 0x79472AE3  
		static void _0x5d7b620dae436138(float p0) { invoke<Void>(0x5D7B620DAE436138, p0); }
		// 0x5D7B620DAE436138 0xFC7464A0  
		static void _0xc92717ef615b6704(float p0) { invoke<Void>(0xC92717EF615B6704, p0); }
		// 0xC92717EF615B6704 0x3554AA0E  
		static void get_is_multiplayer_brief(bool p0) { invoke<Void>(0xE3433EADAAF7EE40, p0); }
		// 0xE3433EADAAF7EE40 0x2F0CE859  
		static void set_cinematic_button_active(bool p0) { invoke<Void>(0x51669F7D1FB53D9F, p0); }
		// 0x51669F7D1FB53D9F 0x3FBC5D00  
		static bool is_cinematic_cam_rendering() { return invoke<bool>(0xB15162CB5826E9E8); }
		// 0xB15162CB5826E9E8 0x80471AD9  
		static void shake_cinematic_cam(const char* p0, float p1) { invoke<Void>(0xDCE214D9ED58F3CF, p0, p1); }
		// 0xDCE214D9ED58F3CF 0x61815F31  
		static bool is_cinematic_cam_shaking() { return invoke<bool>(0xBBC08F6B4CB8FF0A); }
		// 0xBBC08F6B4CB8FF0A 0x8376D939  
		static void set_cinematic_cam_shake_amplitude(float p0) { invoke<Void>(0xC724C701C30B2FE7, p0); }
		// 0xC724C701C30B2FE7 0x67510C4B  
		static void stop_cinematic_cam_shaking(bool p0) { invoke<Void>(0x2238E588E588A6D7, p0); }
		// 0x2238E588E588A6D7 0x71C12904  
		static void _disable_vehicle_first_person_cam_this_frame() { invoke<Void>(0xADFF1B2A555F5FBA); }
		// 0xADFF1B2A555F5FBA 0x5AC6DAC9  
		static void _0x62ecfcfdee7885d6() { invoke<Void>(0x62ECFCFDEE7885D6); } // 0x62ECFCFDEE7885D6 0x837F8581  
		static void _0x9e4cfff989258472() { invoke<Void>(0x9E4CFFF989258472); } // 0x9E4CFFF989258472 0x65DDE8AF  
		static void _0xf4f2c0d4ee209e20() { invoke<Void>(0xF4F2C0D4EE209E20); } // 0xF4F2C0D4EE209E20 0xD75CDD75  
		static bool _0xca9d2aa3e326d720() { return invoke<bool>(0xCA9D2AA3E326D720); } // 0xCA9D2AA3E326D720 0x96A07066  
		static bool _is_in_vehicle_cam_disabled() { return invoke<bool>(0x4F32C0D5A90A9B40); } // 0x4F32C0D5A90A9B40  
		static void create_cinematic_shot(Any p0, int p1, Any p2, Entity entity)
		{
			invoke<Void>(0x741B0129D4560F31, p0, p1, p2, entity);
		} // 0x741B0129D4560F31 0xAC494E35  
		static bool is_cinematic_shot_active(Any p0) { return invoke<bool>(0xCC9F3371A7C28BC9, p0); }
		// 0xCC9F3371A7C28BC9 0xA4049042  
		static void stop_cinematic_shot(Any p0) { invoke<Void>(0x7660C6E75D3A078E, p0); }
		// 0x7660C6E75D3A078E 0xD78358C5  
		static void _0xa41bcd7213805aac(bool p0) { invoke<Void>(0xA41BCD7213805AAC, p0); }
		// 0xA41BCD7213805AAC 0xFBB85E02  
		static void _0xdc9da9e8789f5246() { invoke<Void>(0xDC9DA9E8789F5246); } // 0xDC9DA9E8789F5246 0x4938C82F  
		static void set_cinematic_mode_active(bool p0) { invoke<Void>(0xDCF0754AC3D6FD4E, p0); }
		// 0xDCF0754AC3D6FD4E 0x2009E747  
		static Any _0x1f2300cb7fa7b7f6() { return invoke<Any>(0x1F2300CB7FA7B7F6); } // 0x1F2300CB7FA7B7F6 0x6739AD55  
		static Any _0x17fca7199a530203() { return invoke<Any>(0x17FCA7199A530203); } // 0x17FCA7199A530203  
		static void stop_cutscene_cam_shaking() { invoke<Void>(0xDB629FFD9285FA06); } // 0xDB629FFD9285FA06 0xF07D603D  
		static void _0x12ded8ca53d47ea5(float p0) { invoke<Void>(0x12DED8CA53D47EA5, p0); }
		// 0x12DED8CA53D47EA5 0x067BA6F5  
		static Entity _0x89215ec747df244a(float p0, int p1, float p2, float p3, float p4, float p5, float p6, int p7,
			int p8)
		{
			return invoke<Entity>(0x89215EC747DF244A, p0, p1, p2, p3, p4, p5, p6, p7, p8);
		} // 0x89215EC747DF244A 0xFD99BE2B  
		static void _0x5a43c76f7fc7ba5f() { invoke<Void>(0x5A43C76F7FC7BA5F); } // 0x5A43C76F7FC7BA5F 0xE206C450  
		static void _set_cam_effect(int p0) { invoke<Void>(0x80C8B1846639BB19, p0); } // 0x80C8B1846639BB19 0xB06CCD38  
		static void _0x5c41e6babc9e2112(Any p0) { invoke<Void>(0x5C41E6BABC9E2112, p0); } // 0x5C41E6BABC9E2112  
		static void _0x21e253a7f8da5dfb(const char* vehicleName) { invoke<Void>(0x21E253A7F8DA5DFB, vehicleName); }
		// 0x21E253A7F8DA5DFB  
		static void _0x11fa5d3479c7dd47(Any p0) { invoke<Void>(0x11FA5D3479C7DD47, p0); } // 0x11FA5D3479C7DD47  
		static Any _0xeaf0fa793d05c592() { return invoke<Any>(0xEAF0FA793D05C592); } // 0xEAF0FA793D05C592  
		static Any _0x8bfceb5ea1b161b6() { return invoke<Any>(0x8BFCEB5EA1B161B6); } // 0x8BFCEB5EA1B161B6  
	}

	namespace weapon
	{
		static void enable_laser_sight_rendering(bool toggle) { invoke<Void>(0xC8B46D7727D864AA, toggle); }
		// 0xC8B46D7727D864AA 0xE3438955  
		static Hash get_weapon_component_type_model(Hash componentHash)
		{
			return invoke<Hash>(0x0DB57B41EC1DB083, componentHash);
		} // 0x0DB57B41EC1DB083 0x324FA47A  
		static Hash get_weapontype_model(Hash weaponHash) { return invoke<Hash>(0xF46CDC33180FDA94, weaponHash); }
		// 0xF46CDC33180FDA94 0x44E1C269  
		static Hash get_weapontype_slot(Hash weaponHash) { return invoke<Hash>(0x4215460B9B8B7FA0, weaponHash); }
		// 0x4215460B9B8B7FA0 0x2E3759AF  
		static Hash get_weapontype_group(Hash weaponHash) { return invoke<Hash>(0xC3287EE3050FB74C, weaponHash); }
		// 0xC3287EE3050FB74C 0x5F2DE833  
		static void set_current_ped_weapon(Ped ped, Hash weaponHash, bool equipNow)
		{
			invoke<Void>(0xADF692B254977C0C, ped, weaponHash, equipNow);
		} // 0xADF692B254977C0C 0xB8278882  
		static bool get_current_ped_weapon(Ped ped, Hash* weaponHash, bool p2)
		{
			return invoke<bool>(0x3A87E44BB9A01D54, ped, weaponHash, p2);
		} // 0x3A87E44BB9A01D54 0xB0237302  
		static Entity get_current_ped_weapon_entity_index(Ped ped) { return invoke<Entity>(0x3B390A939AF0B5FC, ped); }
		// 0x3B390A939AF0B5FC 0x5D73CD20  
		static Hash get_best_ped_weapon(Ped ped, bool p1) { return invoke<Hash>(0x8483E98E8B888AE2, ped, p1); }
		// 0x8483E98E8B888AE2 0xB998D444  
		static bool set_current_ped_vehicle_weapon(Ped ped, Hash weaponHash)
		{
			return invoke<bool>(0x75C55983C2C39DAA, ped, weaponHash);
		} // 0x75C55983C2C39DAA 0x8E6F2AF1  
		static bool get_current_ped_vehicle_weapon(Ped ped, Hash* weaponHash)
		{
			return invoke<bool>(0x1017582BCD3832DC, ped, weaponHash);
		} // 0x1017582BCD3832DC 0xF26C5D65  
		static bool is_ped_armed(Ped ped, int p1) { return invoke<bool>(0x475768A975D5AD17, ped, p1); }
		// 0x475768A975D5AD17 0x0BFC892C  
		static bool is_weapon_valid(Hash weaponHash) { return invoke<bool>(0x937C71165CF334B3, weaponHash); }
		// 0x937C71165CF334B3 0x38CA2954  
		static bool has_ped_got_weapon(Ped ped, Hash weaponHash, bool p2)
		{
			return invoke<bool>(0x8DECB02F88F428BC, ped, weaponHash, p2);
		} // 0x8DECB02F88F428BC 0x43D2FA82  
		static bool is_ped_weapon_ready_to_shoot(Ped ped) { return invoke<bool>(0xB80CA294F2F26749, ped); }
		// 0xB80CA294F2F26749 0x02A32CB0  
		static Hash get_ped_weapontype_in_slot(Ped ped, Hash weaponSlot)
		{
			return invoke<Hash>(0xEFFED78E9011134D, ped, weaponSlot);
		} // 0xEFFED78E9011134D 0x9BC64E16  
		static int get_ammo_in_ped_weapon(Ped ped, Hash weaponhash)
		{
			return invoke<int>(0x015A522136D7F951, ped, weaponhash);
		} // 0x015A522136D7F951 0x0C755733  
		static void add_ammo_to_ped(Ped ped, Hash weaponHash, int ammo)
		{
			invoke<Void>(0x78F0424C34306220, ped, weaponHash, ammo);
		} // 0x78F0424C34306220 0x7F0580C7  
		static void set_ped_ammo(Ped ped, Hash weaponHash, int ammo)
		{
			invoke<Void>(0x14E56BC5B5DB6A19, ped, weaponHash, ammo);
		} // 0x14E56BC5B5DB6A19 0xBF90DF1A  
		static void set_ped_infinite_ammo(Ped ped, bool toggle, Hash weaponHash)
		{
			invoke<Void>(0x3EDCB0505123623B, ped, toggle, weaponHash);
		} // 0x3EDCB0505123623B 0x9CB8D278  
		static void set_ped_infinite_ammo_clip(Ped ped, bool toggle) { invoke<Void>(0x183DADC6AA953186, ped, toggle); }
		// 0x183DADC6AA953186 0x5A5E3B67  
		static void give_weapon_to_ped(Ped ped, Hash weaponHash, int ammoCount, bool isHidden, bool equipNow)
		{
			invoke<Void>(0xBF0FD6E56C964FCB, ped, weaponHash, ammoCount, isHidden, equipNow);
		} // 0xBF0FD6E56C964FCB 0xC4D88A85  
		static void give_delayed_weapon_to_ped(Ped ped, Hash weaponHash, int ammoCount, bool equipNow)
		{
			invoke<Void>(0xB282DC6EBD803C75, ped, weaponHash, ammoCount, equipNow);
		} // 0xB282DC6EBD803C75 0x5868D20D  
		static void remove_all_ped_weapons(Ped ped, bool p1) { invoke<Void>(0xF25DF915FA38C5F3, ped, p1); }
		// 0xF25DF915FA38C5F3 0xA44CE817  
		static void remove_weapon_from_ped(Ped ped, Hash weaponHash)
		{
			invoke<Void>(0x4899CB088EDF59B8, ped, weaponHash);
		} // 0x4899CB088EDF59B8 0x9C37F220  
		static void hide_ped_weapon_for_scripted_cutscene(Ped ped, bool toggle)
		{
			invoke<Void>(0x6F6981D2253C208F, ped, toggle);
		} // 0x6F6981D2253C208F 0x00CFD6E9  
		static void set_ped_current_weapon_visible(Ped ped, bool visible, bool deselectWeapon, bool p3, bool p4)
		{
			invoke<Void>(0x0725A4CCFDED9A70, ped, visible, deselectWeapon, p3, p4);
		} // 0x0725A4CCFDED9A70 0x00BECD77  
		static void set_ped_drops_weapons_when_dead(Ped ped, bool toggle)
		{
			invoke<Void>(0x476AE72C1D19D1A8, ped, toggle);
		} // 0x476AE72C1D19D1A8 0x8A444056  
		static bool has_ped_been_damaged_by_weapon(Ped ped, Hash weaponHash, int weaponType)
		{
			return invoke<bool>(0x2D343D2219CD027A, ped, weaponHash, weaponType);
		} // 0x2D343D2219CD027A 0xCDFBBCC6  
		static void clear_ped_last_weapon_damage(Ped ped) { invoke<Void>(0x0E98F88A24C5F4B8, ped); }
		// 0x0E98F88A24C5F4B8 0x52C68832  
		static bool has_entity_been_damaged_by_weapon(Entity entity, Hash weaponHash, int weaponType)
		{
			return invoke<bool>(0x131D401334815E94, entity, weaponHash, weaponType);
		} // 0x131D401334815E94 0x6DAABB39  
		static void clear_entity_last_weapon_damage(Entity entity) { invoke<Void>(0xAC678E40BE7C74D2, entity); }
		// 0xAC678E40BE7C74D2 0xCEC2732B  
		static void set_ped_drops_weapon(Ped ped) { invoke<Void>(0x6B7513D9966FBEC0, ped); }
		// 0x6B7513D9966FBEC0 0x3D3329FA  
		static void set_ped_drops_inventory_weapon(Ped ped, Hash weaponHash, float xOffset, float yOffset,
			float zOffset, int ammoCount)
		{
			invoke<Void>(0x208A1888007FC0E6, ped, weaponHash, xOffset, yOffset, zOffset, ammoCount);
		} // 0x208A1888007FC0E6 0x81FFB874  
		static int get_max_ammo_in_clip(Ped ped, Hash weaponHash, bool p2)
		{
			return invoke<int>(0xA38DCFFCEA8962FA, ped, weaponHash, p2);
		} // 0xA38DCFFCEA8962FA 0x6961E2A4  
		static bool get_ammo_in_clip(Ped ped, Hash weaponHash, int* ammo)
		{
			return invoke<bool>(0x2E1202248937775C, ped, weaponHash, ammo);
		} // 0x2E1202248937775C 0x73C100C3  
		static bool set_ammo_in_clip(Ped ped, Hash weaponHash, int ammo)
		{
			return invoke<bool>(0xDCD2A934D65CB497, ped, weaponHash, ammo);
		} // 0xDCD2A934D65CB497 0xA54B0B10  
		static bool get_max_ammo(Ped ped, Hash weaponHash, int* ammo)
		{
			return invoke<bool>(0xDC16122C7A20C933, ped, weaponHash, ammo);
		} // 0xDC16122C7A20C933 0x0B294796  
		static void set_ped_ammo_by_type(Ped ped, Any ammoType, int ammo)
		{
			invoke<Void>(0x5FD1E1F011E76D7E, ped, ammoType, ammo);
		} // 0x5FD1E1F011E76D7E 0x311C52BB  
		static int get_ped_ammo_by_type(Ped ped, Any ammoType)
		{
			return invoke<int>(0x39D22031557946C1, ped, ammoType);
		} // 0x39D22031557946C1 0x54077C4D  
		static void set_ped_ammo_to_drop(Any p0, Any p1) { invoke<Void>(0xA4EFEF9440A5B0EF, p0, p1); }
		// 0xA4EFEF9440A5B0EF 0x2386A307  
		static void _0xe620fd3512a04f18(float p0) { invoke<Void>(0xE620FD3512A04F18, p0); }
		// 0xE620FD3512A04F18 0xD6460EA2  
		static Hash get_ped_ammo_type_from_weapon(Ped ped, Hash weaponHash)
		{
			return invoke<Hash>(0x7FEAD38B326B9F74, ped, weaponHash);
		} // 0x7FEAD38B326B9F74 0x09337863  
		static bool get_ped_last_weapon_impact_coord(Ped ped, Vector3* coords)
		{
			return invoke<bool>(0x6C4D0409BA1A2BC2, ped, coords);
		} // 0x6C4D0409BA1A2BC2 0x9B266079  
		static void set_ped_gadget(Ped ped, Hash gadgetHash, bool p2)
		{
			invoke<Void>(0xD0D7B1E680ED4A1A, ped, gadgetHash, p2);
		} // 0xD0D7B1E680ED4A1A 0x8A256D0A  
		static bool get_is_ped_gadget_equipped(Ped ped, Hash gadgetHash)
		{
			return invoke<bool>(0xF731332072F5156C, ped, gadgetHash);
		} // 0xF731332072F5156C 0x8DDD0B5B  
		static Hash get_selected_ped_weapon(Ped ped) { return invoke<Hash>(0x0A6DB4965674D243, ped); }
		// 0x0A6DB4965674D243 0xD240123E  
		static void explode_projectiles(Ped ped, Hash weaponHash, bool p2)
		{
			invoke<Void>(0xFC4BD125DE7611E4, ped, weaponHash, p2);
		} // 0xFC4BD125DE7611E4 0x35A0B955  
		static void remove_all_projectiles_of_type(Hash weaponHash, bool p1)
		{
			invoke<Void>(0xFC52E0F37E446528, weaponHash, p1);
		} // 0xFC52E0F37E446528 0xA5F89919  
		static float _get_lockon_range_of_current_ped_weapon(Ped ped) { return invoke<float>(0x840F03E9041E2C9C, ped); }
		// 0x840F03E9041E2C9C 0x3612110D  
		static float get_max_range_of_current_ped_weapon(Ped ped) { return invoke<float>(0x814C9D19DFD69679, ped); }
		// 0x814C9D19DFD69679 0xB2B2BBAA  
		static bool has_vehicle_got_projectile_attached(Ped driver, Vehicle vehicle, Hash weaponHash, Any p3)
		{
			return invoke<bool>(0x717C8481234E3B88, driver, vehicle, weaponHash, p3);
		} // 0x717C8481234E3B88 0xA57E2E80  
		static void give_weapon_component_to_ped(Ped ped, Hash weaponHash, Hash componentHash)
		{
			invoke<Void>(0xD966D51AA5B28BB9, ped, weaponHash, componentHash);
		} // 0xD966D51AA5B28BB9 0x3E1E286D  
		static void remove_weapon_component_from_ped(Ped ped, Hash weaponHash, Hash componentHash)
		{
			invoke<Void>(0x1E8BE90C74FB4C09, ped, weaponHash, componentHash);
		} // 0x1E8BE90C74FB4C09 0x412AA00D  
		static bool has_ped_got_weapon_component(Ped ped, Hash weaponHash, Hash componentHash)
		{
			return invoke<bool>(0xC593212475FAE340, ped, weaponHash, componentHash);
		} // 0xC593212475FAE340 0xDC0FC145  
		static bool is_ped_weapon_component_active(Ped ped, Hash weaponHash, Hash componentHash)
		{
			return invoke<bool>(0x0D78DE0572D3969E, ped, weaponHash, componentHash);
		} // 0x0D78DE0572D3969E 0x7565FB19  
		static bool _ped_skip_next_reloading(Ped ped) { return invoke<bool>(0x8C0D57EA686FAD87, ped); }
		// 0x8C0D57EA686FAD87 0x82EEAF0F  
		static bool make_ped_reload(Ped ped) { return invoke<bool>(0x20AE33F3AC9C0033, ped); }
		// 0x20AE33F3AC9C0033 0x515292C2  
		static void request_weapon_asset(Hash weaponHash, int p1, int p2)
		{
			invoke<Void>(0x5443438F033E29C3, weaponHash, p1, p2);
		} // 0x5443438F033E29C3 0x65D139A5  
		static bool has_weapon_asset_loaded(Hash weaponHash) { return invoke<bool>(0x36E353271F0E90EE, weaponHash); }
		// 0x36E353271F0E90EE 0x1891D5BB  
		static void remove_weapon_asset(Hash weaponHash) { invoke<Void>(0xAA08EF13F341C8FC, weaponHash); }
		// 0xAA08EF13F341C8FC 0x2C0DFE3C  
		static Object create_weapon_object(Hash weaponHash, int ammoCount, float x, float y, float z,
			bool showWorldModel, float heading, Any p7)
		{
			return invoke<Object>(0x9541D3CF0D398F36, weaponHash, ammoCount, x, y, z, showWorldModel, heading, p7);
		} // 0x9541D3CF0D398F36 0x62F5987F  
		static void give_weapon_component_to_weapon_object(Object weaponObject, Hash addonHash)
		{
			invoke<Void>(0x33E179436C0B31DB, weaponObject, addonHash);
		} // 0x33E179436C0B31DB 0xF7612A37  
		static void remove_weapon_component_from_weapon_object(Any p0, Any p1)
		{
			invoke<Void>(0xF7D82B0D66777611, p0, p1);
		} // 0xF7D82B0D66777611 0xA6E7ED3C  
		static bool has_weapon_got_weapon_component(Object weapon, Hash addonHash)
		{
			return invoke<bool>(0x76A18844E743BF91, weapon, addonHash);
		} // 0x76A18844E743BF91 0x1D368510  
		static void give_weapon_object_to_ped(Object weaponObject, Ped ped)
		{
			invoke<Void>(0xB1FA61371AF7C4B7, weaponObject, ped);
		} // 0xB1FA61371AF7C4B7 0x639AF3EF  
		static bool does_weapon_take_weapon_component(Hash weaponHash, Hash componentHash)
		{
			return invoke<bool>(0x5CEE3DF569CECAB0, weaponHash, componentHash);
		} // 0x5CEE3DF569CECAB0 0xB1817BAA  
		static Object get_weapon_object_from_ped(Ped ped, bool p1)
		{
			return invoke<Object>(0xCAE1DC9A0E22A16D, ped, p1);
		} // 0xCAE1DC9A0E22A16D 0xDF939A38  
		static void set_ped_weapon_tint_index(Ped ped, Hash weaponHash, int tintIndex)
		{
			invoke<Void>(0x50969B9B89ED5738, ped, weaponHash, tintIndex);
		} // 0x50969B9B89ED5738 0xEB2A7B23  
		static int get_ped_weapon_tint_index(Ped ped, Hash weaponHash)
		{
			return invoke<int>(0x2B9EEDC07BD06B9F, ped, weaponHash);
		} // 0x2B9EEDC07BD06B9F 0x3F9C90A7  
		static void set_weapon_object_tint_index(Object weapon, int tintIndex)
		{
			invoke<Void>(0xF827589017D4E4A9, weapon, tintIndex);
		} // 0xF827589017D4E4A9 0x44ACC1DA  
		static int get_weapon_object_tint_index(Object weapon) { return invoke<int>(0xCD183314F7CD2E57, weapon); }
		// 0xCD183314F7CD2E57 0xD91D9576  
		static int get_weapon_tint_count(Hash weaponHash) { return invoke<int>(0x5DCF6C5CAB2E9BF7, weaponHash); }
		// 0x5DCF6C5CAB2E9BF7 0x99E4EAAB  
		static bool get_weapon_hud_stats(Hash weaponHash, Any* outData)
		{
			return invoke<bool>(0xD92C739EE34C9EBA, weaponHash, outData);
		} // 0xD92C739EE34C9EBA 0xA9AD3D98  
		static bool get_weapon_component_hud_stats(Hash componentHash, int* outData)
		{
			return invoke<bool>(0xB3CAF387AE12E9F8, componentHash, outData);
		} // 0xB3CAF387AE12E9F8 0xBB5498F4  
		static float _0x3133b907d8b32053(Any p0, Any p1) { return invoke<float>(0x3133B907D8B32053, p0, p1); }
		// 0x3133B907D8B32053  
		static int get_weapon_clip_size(Hash weaponHash) { return invoke<int>(0x583BE370B1EC6EB4, weaponHash); }
		// 0x583BE370B1EC6EB4 0x8D515E66  
		static void set_ped_chance_of_firing_blanks(Ped ped, float xBias, float yBias)
		{
			invoke<Void>(0x8378627201D5497D, ped, xBias, yBias);
		} // 0x8378627201D5497D 0xB4F44C6E  
		static Entity _0xb4c8d77c80c0421e(Ped ped, float p1) { return invoke<Entity>(0xB4C8D77C80C0421E, ped, p1); }
		// 0xB4C8D77C80C0421E 0xEC2E5304  
		static void request_weapon_high_detail_model(Entity weaponObject)
		{
			invoke<Void>(0x48164DBB970AC3F0, weaponObject);
		} // 0x48164DBB970AC3F0 0xE3BD00F9  
		static bool is_ped_current_weapon_silenced(Ped ped) { return invoke<bool>(0x65F0C5AE05943EC7, ped); }
		// 0x65F0C5AE05943EC7 0xBAF7BFBE  
		static bool set_weapon_smokegrenade_assigned(Ped ped) { return invoke<bool>(0x4B7620C47217126C, ped); }
		// 0x4B7620C47217126C 0x76876154  
		static Any set_flash_light_fade_distance(float distance) { return invoke<Any>(0xCEA66DAD478CD39B, distance); }
		// 0xCEA66DAD478CD39B 0xB0127EA7  
		static void set_weapon_animation_override(Ped ped, Hash animStyle)
		{
			invoke<Void>(0x1055AC3A667F09D9, ped, animStyle);
		} // 0x1055AC3A667F09D9 0xA5DF7484  
		static int get_weapon_damage_type(Hash weaponHash) { return invoke<int>(0x3BE0BB12D25FB305, weaponHash); }
		// 0x3BE0BB12D25FB305 0x013AFC13  
		static void _0xe4dcec7fd5b739a5(Ped ped) { invoke<Void>(0xE4DCEC7FD5B739A5, ped); }
		// 0xE4DCEC7FD5B739A5 0x64646F1D  
		static bool can_use_weapon_on_parachute(Hash weaponHash)
		{
			return invoke<bool>(0xBC7BE5ABC0879F74, weaponHash);
		} // 0xBC7BE5ABC0879F74 0x135E7AD4  
	}

	namespace itemset
	{
		static Vehicle create_itemset(Vehicle distri) { return invoke<Vehicle>(0x35AD299F50D91B24, distri); }
		// 0x35AD299F50D91B24 0x0A113B2C  
		static void destroy_itemset(Any p0) { invoke<Void>(0xDE18220B1C183EDA, p0); } // 0xDE18220B1C183EDA 0x83CE1A4C  
		static bool is_itemset_valid(Any p0) { return invoke<bool>(0xB1B1EA596344DFAB, p0); }
		// 0xB1B1EA596344DFAB 0xD201FC29  
		static bool add_to_itemset(Any p0, Any p1) { return invoke<bool>(0xE3945201F14637DD, p0, p1); }
		// 0xE3945201F14637DD 0x6B0FE61B  
		static void remove_from_itemset(Any p0, Any p1) { invoke<Void>(0x25E68244B0177686, p0, p1); }
		// 0x25E68244B0177686 0xA9565228  
		static Any get_itemset_size(ScrHandle x) { return invoke<Any>(0xD9127E83ABF7C631, x); }
		// 0xD9127E83ABF7C631 0x2B31F41A  
		static Any get_indexed_item_in_itemset(Any p0, Any p1) { return invoke<Any>(0x7A197E2521EE2BAB, p0, p1); }
		// 0x7A197E2521EE2BAB 0x3F712874  
		static bool is_in_itemset(Any p0, Any p1) { return invoke<bool>(0x2D0FC594D1E9C107, p0, p1); }
		// 0x2D0FC594D1E9C107 0x0D4B9730  
		static void clean_itemset(Any p0) { invoke<Void>(0x41BC0D722FC04221, p0); } // 0x41BC0D722FC04221 0x919A4858  
	}

	namespace streaming
	{
		static void load_all_objects_now() { invoke<Void>(0xBD6E84632DD4CB3F); } // 0xBD6E84632DD4CB3F 0xC9DBDA90  
		static void load_scene(Any* x, float X, float x2) { invoke<Void>(0x4448EB75B4904BDB, x, X, x2); }
		// 0x4448EB75B4904BDB 0xB72403F5  
		static Vector3* network_update_load_scene() { return invoke<Vector3*>(0xC4582015556D1C46); }
		// 0xC4582015556D1C46 0xC76E023C  
		static void network_stop_load_scene() { invoke<Void>(0x64E630FAF5F60F44); } // 0x64E630FAF5F60F44 0x24857907  
		static bool is_network_loading_scene() { return invoke<bool>(0x41CA5A33160EA4AB); }
		// 0x41CA5A33160EA4AB 0x6DCFC021  
		static void set_interior_active(int interiorID, bool toggle)
		{
			invoke<Void>(0xE37B76C387BE28ED, interiorID, toggle);
		} // 0xE37B76C387BE28ED 0xE1013910  
		static void request_model(Hash model) { invoke<Void>(0x963D27A58DF860AC, model); }
		// 0x963D27A58DF860AC 0xFFF1B500  
		static void request_menu_ped_model(Hash model) { invoke<Void>(0xA0261AEF7ACFC51E, model); }
		// 0xA0261AEF7ACFC51E 0x48CEB6B4  
		static bool has_model_loaded(Hash model) { return invoke<bool>(0x98A4EB5D89A0C952, model); }
		// 0x98A4EB5D89A0C952 0x62BFDB37  
		static void _request_interior_room_by_name(int interiorID, const char* roomName)
		{
			invoke<Void>(0x8A7A40100EDFEC58, interiorID, roomName);
		} // 0x8A7A40100EDFEC58 0x939243FB  
		static void set_model_as_no_longer_needed(Hash model) { invoke<Void>(0xE532F5D78798DAAB, model); }
		// 0xE532F5D78798DAAB 0xAE0F069E  
		static bool is_model_in_cdimage(Hash model) { return invoke<bool>(0x35B9E0803292B641, model); }
		// 0x35B9E0803292B641 0x1094782F  
		static bool is_model_valid(Hash model) { return invoke<bool>(0xC0296A2EDF545E92, model); }
		// 0xC0296A2EDF545E92 0xAF8F8E9D  
		static bool is_model_a_vehicle(Hash model) { return invoke<bool>(0x19AAC8F07BFEC53E, model); }
		// 0x19AAC8F07BFEC53E 0xFFFC85D4  
		static void request_collision_at_coord(float x, float y, float z) { invoke<Void>(0x07503F7948F491A7, x, y, z); }
		// 0x07503F7948F491A7 0xCD9805E7  
		static void request_collision_for_model(Hash model) { invoke<Void>(0x923CB32A3B874FCB, model); }
		// 0x923CB32A3B874FCB 0x3930C042  
		static bool has_collision_for_model_loaded(Hash model) { return invoke<bool>(0x22CCA434E368F03A, model); }
		// 0x22CCA434E368F03A 0x41A094F8  
		static void request_additional_collision_at_coord(float x, float y, float z)
		{
			invoke<Void>(0xC9156DC11411A9EA, x, y, z);
		} // 0xC9156DC11411A9EA 0xC2CC1DF2  
		static bool does_anim_dict_exist(const char* animDict) { return invoke<bool>(0x2DA49C3B79856961, animDict); }
		// 0x2DA49C3B79856961 0xCD31C872  
		static void request_anim_dict(const char* animDict) { invoke<Void>(0xD3BD40951412FEF6, animDict); }
		// 0xD3BD40951412FEF6 0xDCA96950  
		static bool has_anim_dict_loaded(const char* animDict) { return invoke<bool>(0xD031A9162D01088C, animDict); }
		// 0xD031A9162D01088C 0x05E6763C  
		static void remove_anim_dict(const char* animDict) { invoke<Void>(0xF66A602F829E2A06, animDict); }
		// 0xF66A602F829E2A06 0x0AE050B5  
		static void request_anim_set(const char* animSet) { invoke<Void>(0x6EA47DAE7FAD0EED, animSet); }
		// 0x6EA47DAE7FAD0EED 0x2988B3FC  
		static bool has_anim_set_loaded(const char* animSet) { return invoke<bool>(0xC4EA073D86FB29B0, animSet); }
		// 0xC4EA073D86FB29B0 0x4FFF397D  
		static void remove_anim_set(const char* animSet) { invoke<Void>(0x16350528F93024B3, animSet); }
		// 0x16350528F93024B3 0xD04A817A  
		static void request_clip_set(const char* clipSet) { invoke<Void>(0xD2A71E1A77418A49, clipSet); }
		// 0xD2A71E1A77418A49 0x546C627A  
		static bool has_clip_set_loaded(const char* clipSet) { return invoke<bool>(0x318234F4F3738AF3, clipSet); }
		// 0x318234F4F3738AF3 0x230D5455  
		static void remove_clip_set(const char* clipSet) { invoke<Void>(0x01F73A131C18CD94, clipSet); }
		// 0x01F73A131C18CD94 0x1E21F7AA  
		static void request_ipl(const char* iplName) { invoke<Void>(0x41B4893843BBDB74, iplName); }
		// 0x41B4893843BBDB74 0x3B70D1DB  
		static void remove_ipl(const char* iplName) { invoke<Void>(0xEE6C5AD3ECE0A82D, iplName); }
		// 0xEE6C5AD3ECE0A82D 0xDF7CBD36  
		static bool is_ipl_active(const char* iplName) { return invoke<bool>(0x88A741E44A2B3495, iplName); }
		// 0x88A741E44A2B3495 0xB2C33714  
		static void set_streaming(bool toggle) { invoke<Void>(0x6E0C692677008888, toggle); }
		// 0x6E0C692677008888 0x27EF6CB2  
		static void set_game_pauses_for_streaming(bool toggle) { invoke<Void>(0x717CD6E6FAEBBEDC, toggle); }
		// 0x717CD6E6FAEBBEDC 0x9211A28A  
		static void set_reduce_ped_model_budget(bool toggle) { invoke<Void>(0x77B5F9A36BF96710, toggle); }
		// 0x77B5F9A36BF96710 0xAFCB2B86  
		static void set_reduce_vehicle_model_budget(bool toggle) { invoke<Void>(0x80C527893080CCF3, toggle); }
		// 0x80C527893080CCF3 0xCDB4FB7E  
		static void set_ditch_police_models(bool toggle) { invoke<Void>(0x42CBE54462D92634, toggle); }
		// 0x42CBE54462D92634 0x3EA7FCE4  
		static int get_number_of_streaming_requests() { return invoke<int>(0x4060057271CEBC89); }
		// 0x4060057271CEBC89 0xC2EE9A02  
		static void request_ptfx_asset() { invoke<Void>(0x944955FB2A3935C8); } // 0x944955FB2A3935C8 0x2C649263  
		static bool has_ptfx_asset_loaded() { return invoke<bool>(0xCA7D9B86ECA7481B); }
		// 0xCA7D9B86ECA7481B 0x3EFF96BE  
		static void remove_ptfx_asset() { invoke<Void>(0x88C6814073DD4A73); } // 0x88C6814073DD4A73 0xC10F178C  
		static void request_named_ptfx_asset(const char* assetName) { invoke<Void>(0xB80D8756B4668AB6, assetName); }
		// 0xB80D8756B4668AB6 0xCFEA19A9  
		static bool has_named_ptfx_asset_loaded(const char* assetName)
		{
			return invoke<bool>(0x8702416E512EC454, assetName);
		} // 0x8702416E512EC454 0x9ACC6446  
		static void _remove_named_ptfx_asset(const char* assetName) { invoke<Void>(0x5F61EBBE1A00F96D, assetName); }
		// 0x5F61EBBE1A00F96D  
		static void set_vehicle_population_budget(int p0) { invoke<Void>(0xCB9E1EB3BE2AF4E9, p0); }
		// 0xCB9E1EB3BE2AF4E9 0x1D56993C  
		static void set_ped_population_budget(int p0) { invoke<Void>(0x8C95333CFC3340F3, p0); }
		// 0x8C95333CFC3340F3 0xD2D026CD  
		static void clear_focus() { invoke<Void>(0x31B73D1EA9F01DA2); } // 0x31B73D1EA9F01DA2 0x34D91E7A  
		static void _set_focus_area(float x, float y, float z, float offsetX, float offsetY, float offsetZ)
		{
			invoke<Void>(0xBB7454BAFF08FE25, x, y, z, offsetX, offsetY, offsetZ);
		} // 0xBB7454BAFF08FE25 0x14680A60  
		static void set_focus_entity(Entity entity) { invoke<Void>(0x198F77705FA0931D, entity); }
		// 0x198F77705FA0931D 0x18DB04AC  
		static bool is_entity_focus(Entity entity) { return invoke<bool>(0x2DDFF3FB9075D747, entity); }
		// 0x2DDFF3FB9075D747 0xB456D707  
		static void _0x0811381ef5062fec(Entity p0) { invoke<Void>(0x0811381EF5062FEC, p0); } // 0x0811381EF5062FEC  
		static void _0xaf12610c644a35c9(const char* p0, bool p1) { invoke<Void>(0xAF12610C644A35C9, p0, p1); }
		// 0xAF12610C644A35C9 0x403CD434  
		static void _0x4e52e752c76e7e7a(Any p0) { invoke<Void>(0x4E52E752C76E7E7A, p0); }
		// 0x4E52E752C76E7E7A 0xA07BAEB9  
		static Any format_focus_heading(float x, float y, float z, float rad, Any p4, Any p5)
		{
			return invoke<Any>(0x219C7B8D53E429FD, x, y, z, rad, p4, p5);
		} // 0x219C7B8D53E429FD 0x10B6AB36  
		static Any _0x1f3f018bc3afa77c(float p0, float p1, float p2, float p3, float p4, float p5, float p6, Any p7,
			Any p8)
		{
			return invoke<Any>(0x1F3F018BC3AFA77C, p0, p1, p2, p3, p4, p5, p6, p7, p8);
		} // 0x1F3F018BC3AFA77C 0x72344191  
		static Any _0x0ad9710cee2f590f(float p0, float p1, float p2, float p3, float p4, float p5, Any p6)
		{
			return invoke<Any>(0x0AD9710CEE2F590F, p0, p1, p2, p3, p4, p5, p6);
		} // 0x0AD9710CEE2F590F 0xC0157255  
		static void _0x1ee7d8df4425f053(Any p0) { invoke<Void>(0x1EE7D8DF4425F053, p0); }
		// 0x1EE7D8DF4425F053 0xE80F8ABE  
		static Any _0x7d41e9d2d17c5b2d(Any p0) { return invoke<Any>(0x7D41E9D2D17C5B2D, p0); }
		// 0x7D41E9D2D17C5B2D 0x1B3521F4  
		static Any _0x07c313f94746702c(Any p0) { return invoke<Any>(0x07C313F94746702C, p0); }
		// 0x07C313F94746702C 0x42CFE9C0  
		static Any _0xbc9823ab80a3dcac() { return invoke<Any>(0xBC9823AB80A3DCAC); } // 0xBC9823AB80A3DCAC 0x56253356  
		static bool new_load_scene_start(float p0, float p1, float p2, float p3, float p4, float p5, float p6, Any p7)
		{
			return invoke<bool>(0x212A8D0D2BABFAC2, p0, p1, p2, p3, p4, p5, p6, p7);
		} // 0x212A8D0D2BABFAC2 0xDF9C38B6  
		static bool new_load_scene_start_sphere(float x, float y, float z, float radius, Any p4)
		{
			return invoke<bool>(0xACCFB4ACF53551B0, x, y, z, radius, p4);
		} // 0xACCFB4ACF53551B0 0xFA037FEB  
		static void new_load_scene_stop() { invoke<Void>(0xC197616D221FF4A4); } // 0xC197616D221FF4A4 0x7C05B1F6  
		static bool is_new_load_scene_active() { return invoke<bool>(0xA41A05B6CB741B85); }
		// 0xA41A05B6CB741B85 0xAD234B7F  
		static bool is_new_load_scene_loaded() { return invoke<bool>(0x01B8247A7A8B9AD1); }
		// 0x01B8247A7A8B9AD1 0x3ECD839F  
		static Any _0x71e7b2e657449aad() { return invoke<Any>(0x71E7B2E657449AAD); } // 0x71E7B2E657449AAD 0xEAA51103  
		static void start_player_switch(Ped from, Ped to, int flags, int switchType)
		{
			invoke<Void>(0xFAA23F2CBA159D67, from, to, flags, switchType);
		} // 0xFAA23F2CBA159D67 0x0829E975  
		static void stop_player_switch() { invoke<Void>(0x95C0A5BBDC189AA1); } // 0x95C0A5BBDC189AA1 0x2832C010  
		static bool is_player_switch_in_progress() { return invoke<bool>(0xD9D2CFFF49FAB35F); }
		// 0xD9D2CFFF49FAB35F 0x56135ACC  
		static int get_player_switch_type() { return invoke<int>(0xB3C94A90D9FC9E62); }
		// 0xB3C94A90D9FC9E62 0x280DC015  
		static int get_ideal_player_switch_type(float x1, float y1, float z1, float x2, float y2, float z2)
		{
			return invoke<int>(0xB5D7B26B45720E05, x1, y1, z1, x2, y2, z2);
		} // 0xB5D7B26B45720E05 0xD5A450F1  
		static int get_player_switch_state() { return invoke<int>(0x470555300D10B2A5); }
		// 0x470555300D10B2A5 0x39A0E1F2  
		static int get_player_short_switch_state() { return invoke<int>(0x20F898A5D9782800); }
		// 0x20F898A5D9782800 0x9B7BA38F  
		static void _0x5f2013f8bc24ee69(int p0) { invoke<Void>(0x5F2013F8BC24EE69, p0); }
		// 0x5F2013F8BC24EE69 0xF0BD420D  
		static Any _0x78c0d93253149435() { return invoke<Any>(0x78C0D93253149435); } // 0x78C0D93253149435 0x02BA7AC2  
		static void set_player_switch_outro(float p0, float p1, float p2, float p3, float p4, float p5, float p6,
			float p7, Any p8)
		{
			invoke<Void>(0xC208B673CE446B61, p0, p1, p2, p3, p4, p5, p6, p7, p8);
		} // 0xC208B673CE446B61 0x47352E14  
		static void _0x0fde9dbfc0a6bc65(Any* p0) { invoke<Void>(0x0FDE9DBFC0A6BC65, p0); }
		// 0x0FDE9DBFC0A6BC65 0x279077B0  
		static void _0x43d1680c6d19a8e9() { invoke<Void>(0x43D1680C6D19A8E9); } // 0x43D1680C6D19A8E9 0x55CB21F9  
		static void _0x74de2e8739086740() { invoke<Void>(0x74DE2E8739086740); } // 0x74DE2E8739086740 0x1084F2F4  
		static void _0x8e2a065abdae6994() { invoke<Void>(0x8E2A065ABDAE6994); } // 0x8E2A065ABDAE6994 0x5B1E995D  
		static void _0xad5fdf34b81bfe79() { invoke<Void>(0xAD5FDF34B81BFE79); } // 0xAD5FDF34B81BFE79 0x4B4B9A13  
		static Any _0xdfa80cb25d0a19b3() { return invoke<Any>(0xDFA80CB25D0A19B3); } // 0xDFA80CB25D0A19B3 0x408F7148  
		static void _0xd4793dff3af2abcd() { invoke<Void>(0xD4793DFF3AF2ABCD); } // 0xD4793DFF3AF2ABCD  
		static void _0xbd605b8e0e18b3bb() { invoke<Void>(0xBD605B8E0E18B3BB); } // 0xBD605B8E0E18B3BB  
		static void _switch_out_player(Ped ped, int flags, int unknown)
		{
			invoke<Void>(0xAAB3200ED59016BC, ped, flags, unknown);
		} // 0xAAB3200ED59016BC 0xFB4D062D  
		static void _0xd8295af639fd9cb8(Any p0) { invoke<Void>(0xD8295AF639FD9CB8, p0); }
		// 0xD8295AF639FD9CB8 0x2349373B  
		static Any _0x933bbeeb8c61b5f4() { return invoke<Any>(0x933BBEEB8C61B5F4); } // 0x933BBEEB8C61B5F4 0x74C16879  
		static int set_player_inverted_up() { return invoke<int>(0x08C2D6C52A3104BB); }
		// 0x08C2D6C52A3104BB 0x569847E3  
		static Any _0x5b48a06dd0e792a5() { return invoke<Any>(0x5B48A06DD0E792A5); } // 0x5B48A06DD0E792A5 0xC7A3D279  
		static Any destroy_player_in_pause_menu() { return invoke<Any>(0x5B74EA8CFD5E3E7E); }
		// 0x5B74EA8CFD5E3E7E 0x90F64284  
		static void _0x1e9057a74fd73e23() { invoke<Void>(0x1E9057A74FD73E23); } // 0x1E9057A74FD73E23  
		static Any _0x0c15b0e443b2349d() { return invoke<Any>(0x0C15B0E443B2349D); } // 0x0C15B0E443B2349D 0x7154B6FD  
		static void _0xa76359fc80b2438e(float p0) { invoke<Void>(0xA76359FC80B2438E, p0); }
		// 0xA76359FC80B2438E 0xE5612C1A  
		static void _0xbed8ca5ff5e04113(float p0, float p1, float p2, float p3)
		{
			invoke<Void>(0xBED8CA5FF5E04113, p0, p1, p2, p3);
		} // 0xBED8CA5FF5E04113 0x9CD6A451  
		static void _0x472397322e92a856() { invoke<Void>(0x472397322E92A856); } // 0x472397322E92A856 0x4267DA87  
		static void _0x40aefd1a244741f2(bool p0) { invoke<Void>(0x40AEFD1A244741F2, p0); }
		// 0x40AEFD1A244741F2 0x9FA4AF99  
		static void _0x03f1a106bda7dd3e() { invoke<Void>(0x03F1A106BDA7DD3E); } // 0x03F1A106BDA7DD3E  
		static void _0x95a7dabddbb78ae7(Any* p0, Any* p1) { invoke<Void>(0x95A7DABDDBB78AE7, p0, p1); }
		// 0x95A7DABDDBB78AE7 0x9EF0A9CF  
		static void _0x63eb2b972a218cac() { invoke<Void>(0x63EB2B972A218CAC); } // 0x63EB2B972A218CAC 0xF2CDD6A8  
		static Any _0xfb199266061f820a() { return invoke<Any>(0xFB199266061F820A); } // 0xFB199266061F820A 0x17B0A1CD  
		static void _0xf4a0dadb70f57fa6() { invoke<Void>(0xF4A0DADB70F57FA6); } // 0xF4A0DADB70F57FA6 0x3DA7AA5D  
		static Any _0x5068f488ddb54dd8() { return invoke<Any>(0x5068F488DDB54DD8); } // 0x5068F488DDB54DD8 0xDAB4BAC0  
		static void prefetch_srl(const char* srl) { invoke<Void>(0x3D245789CE12982C, srl); }
		// 0x3D245789CE12982C 0x37BE2FBB  
		static bool is_srl_loaded() { return invoke<bool>(0xD0263801A4C5B0BB); } // 0xD0263801A4C5B0BB 0x670FA2A6  
		static void begin_srl() { invoke<Void>(0x9BADDC94EF83B823); } // 0x9BADDC94EF83B823 0x24F49427  
		static void end_srl() { invoke<Void>(0x0A41540E63C9EE17); } // 0x0A41540E63C9EE17 0x1977C56A  
		static void set_srl_time(float p0) { invoke<Void>(0xA74A541C6884E7B8, p0); } // 0xA74A541C6884E7B8 0x30F8A487  
		static void _0xef39ee20c537e98c(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5)
		{
			invoke<Void>(0xEF39EE20C537E98C, p0, p1, p2, p3, p4, p5);
		} // 0xEF39EE20C537E98C 0x814D0752  
		static void _0xbeb2d9a1d9a8f55a(Any p0, Any p1, Any p2, Any p3)
		{
			invoke<Void>(0xBEB2D9A1D9A8F55A, p0, p1, p2, p3);
		} // 0xBEB2D9A1D9A8F55A 0x62F02485  
		static void _0x20c6c7e4eb082a7f(bool p0) { invoke<Void>(0x20C6C7E4EB082A7F, p0); }
		// 0x20C6C7E4EB082A7F 0xA6459CAA  
		static void _0xf8155a7f03ddfc8e(Any p0) { invoke<Void>(0xF8155A7F03DDFC8E, p0); }
		// 0xF8155A7F03DDFC8E 0xF8F515E4  
		static void set_hd_area(float x, float y, float z, float radius)
		{
			invoke<Void>(0xB85F26619073E775, x, y, z, radius);
		} // 0xB85F26619073E775 0x80BAA035  
		static void clear_hd_area() { invoke<Void>(0xCE58B1CFB9290813); } // 0xCE58B1CFB9290813 0x7CAC6FA0  
		static void _load_mission_creator_data() { invoke<Void>(0xB5A4DB34FE89B88A); } // 0xB5A4DB34FE89B88A 0xE243B2AF  
		static void shutdown_creator_budget() { invoke<Void>(0xCCE26000E9A6FAD7); } // 0xCCE26000E9A6FAD7 0x897A510F  
		static bool _0x0bc3144deb678666(Hash modelHash) { return invoke<bool>(0x0BC3144DEB678666, modelHash); }
		// 0x0BC3144DEB678666 0xC0E83320  
		static void _0xf086ad9354fac3a3(Any p0) { invoke<Void>(0xF086AD9354FAC3A3, p0); }
		// 0xF086AD9354FAC3A3 0x1C576388  
		static Any _0x3d3d8b3be5a83d35() { return invoke<Any>(0x3D3D8B3BE5A83D35); } // 0x3D3D8B3BE5A83D35 0x3E9C4CBE  
	}

	namespace script
	{
		static void request_script(const char* scriptName) { invoke<Void>(0x6EB5F71AA68F2E8E, scriptName); }
		// 0x6EB5F71AA68F2E8E 0xE26B2666  
		static void set_script_as_no_longer_needed(const char* scriptName)
		{
			invoke<Void>(0xC90D2DCACD56184C, scriptName);
		} // 0xC90D2DCACD56184C 0x6FCB7795  
		static bool has_script_loaded(const char* scriptName) { return invoke<bool>(0xE6CC9F3BA0FB9EF1, scriptName); }
		// 0xE6CC9F3BA0FB9EF1 0x5D67F751  
		static bool does_script_exist(const char* scriptName) { return invoke<bool>(0xFC04745FBE67C19A, scriptName); }
		// 0xFC04745FBE67C19A 0xDEAB87AB  
		static void request_script_with_name_hash(Hash scriptHash) { invoke<Void>(0xD62A67D26D9653E6, scriptHash); }
		// 0xD62A67D26D9653E6 0x1C68D9DC  
		static void set_script_with_name_hash_as_no_longer_needed(Hash scriptHash)
		{
			invoke<Void>(0xC5BC038960E9DB27, scriptHash);
		} // 0xC5BC038960E9DB27 0x96C26F66  
		static bool has_script_with_name_hash_loaded(Hash scriptHash)
		{
			return invoke<bool>(0x5F0F0C783EB16C04, scriptHash);
		} // 0x5F0F0C783EB16C04 0x06674818  
		static bool _does_script_with_name_hash_exist(Hash scriptHash)
		{
			return invoke<bool>(0xF86AA3C56BA31381, scriptHash);
		} // 0xF86AA3C56BA31381  
		static void terminate_thread(int threadId) { invoke<Void>(0xC8B189ED9138BCD4, threadId); }
		// 0xC8B189ED9138BCD4 0x253FD520  
		static bool is_thread_active(int threadId) { return invoke<bool>(0x46E9AE36D8FA6417, threadId); }
		// 0x46E9AE36D8FA6417 0x78D7A5A0  
		static const char* _get_name_of_thread(int threadId)
		{
			return invoke<const char*>(0x05A42BA9FC8DA96B, threadId);
		} // 0x05A42BA9FC8DA96B 0xBE7ACD89  
		static void _begin_enumerating_threads() { invoke<Void>(0xDADFADA5A20143A8); } // 0xDADFADA5A20143A8 0xBB4E2F66  
		static int _get_id_of_next_thread_in_enumeration() { return invoke<int>(0x30B4FA1C82DD4B9F); }
		// 0x30B4FA1C82DD4B9F 0x1E28B28F  
		static int get_id_of_this_thread() { return invoke<int>(0xC30338E8088E2E21); } // 0xC30338E8088E2E21 0xDE524830  
		static void terminate_this_thread() { invoke<Void>(0x1090044AD1DA76FA); } // 0x1090044AD1DA76FA 0x3CD9CBB7  
		static int _get_number_of_instances_of_script_with_name_hash(Hash scriptHash)
		{
			return invoke<int>(0x2C83A9DA6BFFC4F9, scriptHash);
		} // 0x2C83A9DA6BFFC4F9 0x029D3841  
		static const char* get_this_script_name() { return invoke<const char*>(0x442E0A7EDE4A738A); }
		// 0x442E0A7EDE4A738A 0xA40FD5D9  
		static Hash get_hash_of_this_script_name() { return invoke<Hash>(0x8A1C8B1738FFE87E); }
		// 0x8A1C8B1738FFE87E 0x2BEE1F45  
		static int get_number_of_events(int eventGroup) { return invoke<int>(0x5F92A689A06620AA, eventGroup); }
		// 0x5F92A689A06620AA 0xA3525D60  
		static bool get_event_exists(int eventGroup, int eventIndex)
		{
			return invoke<bool>(0x936E6168A9BCEDB5, eventGroup, eventIndex);
		} // 0x936E6168A9BCEDB5 0xA1B447B5  
		static int get_event_at_index(int eventGroup, int eventIndex)
		{
			return invoke<int>(0xD8F66A3A60C62153, eventGroup, eventIndex);
		} // 0xD8F66A3A60C62153 0xB49C1442  
		static bool get_event_data(int eventGroup, int eventIndex, int* argStruct, int argStructSize)
		{
			return invoke<bool>(0x2902843FCD2B2D79, eventGroup, eventIndex, argStruct, argStructSize);
		} // 0x2902843FCD2B2D79 0x4280F92F  
		static void trigger_script_event(int eventGroup, int* args, int argCount, int bit)
		{
			invoke<Void>(0x5AE99C571D5BBE5D, eventGroup, args, argCount, bit);
		} // 0x5AE99C571D5BBE5D 0x54763B35  
		static void shutdown_loading_screen() { invoke<Void>(0x078EBE9809CCD637); } // 0x078EBE9809CCD637 0xA2826D17  
		static void set_no_loading_screen(bool toggle) { invoke<Void>(0x5262CC1995D07E09, toggle); }
		// 0x5262CC1995D07E09 0xC8055034  
		static bool _get_no_loading_screen() { return invoke<bool>(0x18C1270EA7F199BC); } // 0x18C1270EA7F199BC  
		static void _0xb1577667c3708f9b() { invoke<Void>(0xB1577667C3708F9B); } // 0xB1577667C3708F9B 0xB03BCCDF  
	}

	namespace ui
	{
		static void _begin_text_command_busy_string(const char* string) { invoke<Void>(0xABA17D7CE615ADBF, string); }
		// 0xABA17D7CE615ADBF 0xCB7C8994  
		static void _end_text_command_busy_string(int busySpinnerType)
		{
			invoke<Void>(0xBD12F8228410D9B4, busySpinnerType);
		} // 0xBD12F8228410D9B4 0x903F5EE4  
		static void _remove_loading_prompt() { invoke<Void>(0x10D373323E5B9C0D); } // 0x10D373323E5B9C0D 0x94119534  
		static void _0xc65ab383cd91df98() { invoke<Void>(0xC65AB383CD91DF98); } // 0xC65AB383CD91DF98 0x71077FBD  
		static const char* _is_loading_prompt_being_displayed() { return invoke<const char*>(0xD422FCC5F239A915); }
		// 0xD422FCC5F239A915 0xB8B3A5D0  
		static Pickup _0xb2a592b04648a9cb() { return invoke<Pickup>(0xB2A592B04648A9CB); } // 0xB2A592B04648A9CB  
		static void _0x9245e81072704b8a(bool p0) { invoke<Void>(0x9245E81072704B8A, p0); } // 0x9245E81072704B8A  
		static void _show_cursor_this_frame() { invoke<Void>(0xAAE7CE1D63167423); } // 0xAAE7CE1D63167423  
		static void _set_cursor_sprite(int spriteId) { invoke<Void>(0x8DB8CFFD58B62552, spriteId); }
		// 0x8DB8CFFD58B62552  
		static void _0x98215325a695e78a(bool p0) { invoke<Void>(0x98215325A695E78A, p0); } // 0x98215325A695E78A  
		static Any _0x3d9acb1eb139e702() { return invoke<Any>(0x3D9ACB1EB139E702); } // 0x3D9ACB1EB139E702  
		static bool _0x632b2940c67f4ea9(int scaleformHandle, Any* p1, Any* p2, Any* p3)
		{
			return invoke<bool>(0x632B2940C67F4EA9, scaleformHandle, p1, p2, p3);
		} // 0x632B2940C67F4EA9  
		static void _0x6f1554b0cc2089fa(bool p0) { invoke<Void>(0x6F1554B0CC2089FA, p0); }
		// 0x6F1554B0CC2089FA 0xA7C8594B  
		static void _clear_notifications_pos(float pos) { invoke<Void>(0x55598D21339CB998, pos); }
		// 0x55598D21339CB998 0x1DA7E41A  
		static void _0x25f87b30c382fca7() { invoke<Void>(0x25F87B30C382FCA7); } // 0x25F87B30C382FCA7 0x1E63088A  
		static void _0xa8fdb297a8d25fba() { invoke<Void>(0xA8FDB297A8D25FBA); } // 0xA8FDB297A8D25FBA 0x5205C6F5  
		static void _remove_notification(int notificationId) { invoke<Void>(0xBE4390CB40B3E627, notificationId); }
		// 0xBE4390CB40B3E627 0xECA8ACB9  
		static void _0xa13c11e1b5c06bfc() { invoke<Void>(0xA13C11E1B5C06BFC); } // 0xA13C11E1B5C06BFC 0x520FCB6D  
		static void _0x583049884a2eee3c() { invoke<Void>(0x583049884A2EEE3C); } // 0x583049884A2EEE3C 0xC8BAB2F2  
		static void _0xfdb423997fa30340() { invoke<Void>(0xFDB423997FA30340); } // 0xFDB423997FA30340 0x4D0449C6  
		static void _0xe1cd1e48e025e661() { invoke<Void>(0xE1CD1E48E025E661); } // 0xE1CD1E48E025E661 0xD3F40140  
		static Any _0xa9cbfd40b3fa3010() { return invoke<Any>(0xA9CBFD40B3FA3010); } // 0xA9CBFD40B3FA3010 0xC5223796  
		static void _0xd4438c0564490e63() { invoke<Void>(0xD4438C0564490E63); } // 0xD4438C0564490E63 0x709B4BCB  
		static void _0xb695e2cd0a2da9ee() { invoke<Void>(0xB695E2CD0A2DA9EE); } // 0xB695E2CD0A2DA9EE 0x4A4A40A4  
		static int _get_current_notification() { return invoke<int>(0x82352748437638CA); }
		// 0x82352748437638CA 0x294405D4  
		static void _0x56c8b608cfd49854() { invoke<Void>(0x56C8B608CFD49854); } // 0x56C8B608CFD49854 0xF881AB87  
		static void _0xaded7f5748acafe6() { invoke<Void>(0xADED7F5748ACAFE6); } // 0xADED7F5748ACAFE6 0x1D6859CA  
		static void _set_notification_background_color(int hudIndex) { invoke<Void>(0x92F0DA1E27DB96DC, hudIndex); }
		// 0x92F0DA1E27DB96DC  
		static void _set_notification_flash_color(int red, int green, int blue, int alpha)
		{
			invoke<Void>(0x17430B918701C342, red, green, blue, alpha);
		} // 0x17430B918701C342 0xCF14D7F2  
		static void _0x17ad8c9706bdd88a(Any p0) { invoke<Void>(0x17AD8C9706BDD88A, p0); }
		// 0x17AD8C9706BDD88A 0x24A97AF8  
		static void _0x4a0c7c9bb10abb36(bool p0) { invoke<Void>(0x4A0C7C9BB10ABB36, p0); }
		// 0x4A0C7C9BB10ABB36 0x44018EDB  
		static void _0xfdd85225b2dea55e() { invoke<Void>(0xFDD85225B2DEA55E); } // 0xFDD85225B2DEA55E 0xA4524B23  
		static void _0xfdec055ab549e328() { invoke<Void>(0xFDEC055AB549E328); } // 0xFDEC055AB549E328 0xAFA1148B  
		static void _0x80fe4f3ab4e1b62a() { invoke<Void>(0x80FE4F3AB4E1B62A); } // 0x80FE4F3AB4E1B62A 0x3CD4307C  
		static void _0xbae4f9b97cd43b30(bool p0) { invoke<Void>(0xBAE4F9B97CD43B30, p0); } // 0xBAE4F9B97CD43B30  
		static void _0x317eba71d7543f52(Any* p0, Any* p1, Any* p2, Any* p3)
		{
			invoke<Void>(0x317EBA71D7543F52, p0, p1, p2, p3);
		} // 0x317EBA71D7543F52  
		static void _set_notification_text_entry(const char* text) { invoke<Void>(0x202709F4C58A0424, text); }
		// 0x202709F4C58A0424 0x574EE85C  
		static int _set_notification_message(const char* picName1, int picName2, bool flash, int iconType, bool p4,
			const char* sender, const char* subject)
		{
			return invoke<int>(0x2B7E9A4EAAA93C89, picName1, picName2, flash, iconType, p4, sender, subject);
		} // 0x2B7E9A4EAAA93C89 0xED130FA1  
		static int _set_notification_message_2(const char* picName1, const char* picName2, bool flash, int iconType,
			const char* sender, const char* subject)
		{
			return invoke<int>(0x1CCD9A37359072CF, picName1, picName2, flash, iconType, sender, subject);
		} // 0x1CCD9A37359072CF 0xE7E3C98B  
		static int _set_notification_message_3(const char* picName1, const char* picName2, bool p2, Any p3,
			const char* p4, const char* p5)
		{
			return invoke<int>(0xC6F580E4C94926AC, picName1, picName2, p2, p3, p4, p5);
		} // 0xC6F580E4C94926AC  
		static int _set_notification_message_4(const char* picName1, const char* picName2, bool flash, int iconType,
			const char* sender, const char* subject, float duration)
		{
			return invoke<int>(0x1E6611149DB3DB6B, picName1, picName2, flash, iconType, sender, subject, duration);
		} // 0x1E6611149DB3DB6B 0x0EB382B7  
		static int _set_notification_message_clan_tag(const char* picName1, const char* picName2, bool flash,
			int iconType, const char* sender, const char* subject,
			float duration, const char* clanTag)
		{
			return invoke<int>(0x5CBF7BADE20DB93E, picName1, picName2, flash, iconType, sender, subject, duration,
				clanTag);
		} // 0x5CBF7BADE20DB93E 0x3E807FE3  
		static int _set_notification_message_clan_tag_2(const char* picName1, const char* picName2, bool flash,
			int iconType1, const char* sender, const char* subject,
			float duration, const char* clanTag, int iconType2, int p9)
		{
			return invoke<int>(0x531B84E7DA981FB6, picName1, picName2, flash, iconType1, sender, subject, duration,
				clanTag, iconType2, p9);
		} // 0x531B84E7DA981FB6 0xDEB491C8  
		static int _draw_notification(bool blink, bool p1) { return invoke<int>(0x2ED7843F8F801023, blink, p1); }
		// 0x2ED7843F8F801023 0x08F7AF78  
		static int _draw_notification_2(bool blink, bool p1) { return invoke<int>(0x44FA03975424A0EE, blink, p1); }
		// 0x44FA03975424A0EE 0x57B8D0D4  
		static int _draw_notification_3(bool blink, bool p1) { return invoke<int>(0x378E809BF61EC840, blink, p1); }
		// 0x378E809BF61EC840 0x02BCAF9B  
		static int _draw_notification_award(const char* p0, const char* p1, int p2, int p3, const char* p4)
		{
			return invoke<int>(0xAA295B6F28BD587D, p0, p1, p2, p3, p4);
		} // 0xAA295B6F28BD587D 0x02DED2B8  
		static int _draw_notification_apartment_invite(bool p0, bool p1, int* p2, int p3, bool isLeader, bool unk0,
			int clanDesc, int R, int G, int B)
		{
			return invoke<int>(0x97C9E4E7024A8F2C, p0, p1, p2, p3, isLeader, unk0, clanDesc, R, G, B);
		} // 0x97C9E4E7024A8F2C 0xA9CCEF66  
		static int _draw_notification_clan_invite(bool p0, bool p1, int* p2, int p3, bool isLeader, bool unk0,
			int clanDesc, const char* playerName, int R, int G, int B)
		{
			return invoke<int>(0x137BC35589E34E1E, p0, p1, p2, p3, isLeader, unk0, clanDesc, playerName, R, G, B);
		} // 0x137BC35589E34E1E 0x88B9B909  
		static Any _0x33ee12743ccd6343(Any p0, Any p1, Any p2) { return invoke<Any>(0x33EE12743CCD6343, p0, p1, p2); }
		// 0x33EE12743CCD6343 0xE05E7052  
		static Any _0xc8f3aaf93d0600bf(Any p0, Any p1, Any p2, Any p3)
		{
			return invoke<Any>(0xC8F3AAF93D0600BF, p0, p1, p2, p3);
		} // 0xC8F3AAF93D0600BF 0x4FA43BA4  
		static Any _0x7ae0589093a2e088(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5)
		{
			return invoke<Any>(0x7AE0589093A2E088, p0, p1, p2, p3, p4, p5);
		} // 0x7AE0589093A2E088 0x8C90D22F  
		static int _draw_notification_4(bool blink, bool p1) { return invoke<int>(0xF020C96915705B3A, blink, p1); }
		// 0xF020C96915705B3A 0x8E319AB8  
		static Any _0x8efccf6ec66d85e4(Any* p0, Any* p1, Any* p2, bool p3, bool p4)
		{
			return invoke<Any>(0x8EFCCF6EC66D85E4, p0, p1, p2, p3, p4);
		} // 0x8EFCCF6EC66D85E4  
		static Any _0xb6871b0555b02996(Any* p0, Any* p1, Any p2, Any* p3, Any* p4, Any p5)
		{
			return invoke<Any>(0xB6871B0555B02996, p0, p1, p2, p3, p4, p5);
		} // 0xB6871B0555B02996 0x5E93FBFA  
		static int _draw_notification_with_icon(int type, int image, const char* text)
		{
			return invoke<int>(0xD202B92CBF1D816F, type, image, text);
		} // 0xD202B92CBF1D816F  
		static int _draw_notification_with_button(int type, const char* button, const char* text)
		{
			return invoke<int>(0xDD6CB2CCE7C2735C, type, button, text);
		} // 0xDD6CB2CCE7C2735C  
		static void begin_text_command_print(const char* GxtEntry) { invoke<Void>(0xB87A37EEB7FAA67D, GxtEntry); }
		// 0xB87A37EEB7FAA67D 0xF42C43C7  
		static void end_text_command_print(int duration, bool drawImmediately)
		{
			invoke<Void>(0x9D77056A530643F6, duration, drawImmediately);
		} // 0x9D77056A530643F6 0x38F82261  
		static void begin_text_command_is_message_displayed(const char* text)
		{
			invoke<Void>(0x853648FD1063A213, text);
		} // 0x853648FD1063A213 0xDD524A11  
		static bool end_text_command_is_message_displayed() { return invoke<bool>(0x8A9BA1AB3E237613); }
		// 0x8A9BA1AB3E237613 0x672EFB45  
		static void begin_text_command_display_text(const char* text) { invoke<Void>(0x25FBB336DF1804CB, text); }
		// 0x25FBB336DF1804CB 0x3E35563E  
		static void end_text_command_display_text(float x, float y) { invoke<Void>(0xCD015E5BB0D96A57, x, y); }
		// 0xCD015E5BB0D96A57 0x6F8350CE  
		static void _begin_text_command_width(const char* text) { invoke<Void>(0x54CE8AC98E120CAB, text); }
		// 0x54CE8AC98E120CAB 0x51E7A037  
		static float _end_text_command_get_width(bool p0) { return invoke<float>(0x85F061DA64ED2F67, p0); }
		// 0x85F061DA64ED2F67 0xD12A643A  
		static void _begin_text_command_line_count(const char* entry) { invoke<Void>(0x521FB041D93DD0E4, entry); }
		// 0x521FB041D93DD0E4 0x94B82066  
		static int _get_text_screen_line_count(float x, float y) { return invoke<int>(0x9040DFB09BE75706, x, y); }
		// 0x9040DFB09BE75706 0xAA318785  
		static void begin_text_command_display_help(const char* inputType)
		{
			invoke<Void>(0x8509B634FBE7DA11, inputType);
		} // 0x8509B634FBE7DA11 0xB245FC10  
		static void end_text_command_display_help(Any p0, bool loop, bool beep, int shape)
		{
			invoke<Void>(0x238FFE5C7B0498A6, p0, loop, beep, shape);
		} // 0x238FFE5C7B0498A6 0xB59B530D  
		static void begin_text_command_is_this_help_message_being_displayed(const char* labelName)
		{
			invoke<Void>(0x0A24DA3A41B718F5, labelName);
		} // 0x0A24DA3A41B718F5 0x00E20F2D  
		static bool end_text_command_is_this_help_message_being_displayed(int p0)
		{
			return invoke<bool>(0x10BDDBFC529428DD, p0);
		} // 0x10BDDBFC529428DD 0xF63A13EC  
		static void begin_text_command_set_blip_name(const char* gxtentry)
		{
			invoke<Void>(0xF9113A30DE5C6670, gxtentry);
		} // 0xF9113A30DE5C6670 0xF4C211F6  
		static void end_text_command_set_blip_name(Blip blip) { invoke<Void>(0xBC38B49BCB83BC9B, blip); }
		// 0xBC38B49BCB83BC9B 0xE8E59820  
		static void _begin_text_command_objective(const char* p0) { invoke<Void>(0x23D69E0465570028, p0); }
		// 0x23D69E0465570028 0x0E103475  
		static void _end_text_command_objective(bool p0) { invoke<Void>(0xCFDBDF5AE59BA0F4, p0); }
		// 0xCFDBDF5AE59BA0F4 0x2944A6C5  
		static void begin_text_command_clear_print(const char* text) { invoke<Void>(0xE124FA80A759019C, text); }
		// 0xE124FA80A759019C 0x550665AE  
		static void end_text_command_clear_print() { invoke<Void>(0xFCC75460ABA29378); }
		// 0xFCC75460ABA29378 0x67785AF2  
		static void _begin_text_command_timer(const char* p0) { invoke<Void>(0x8F9EE5687F8EECCD, p0); }
		// 0x8F9EE5687F8EECCD 0xBF855650  
		static void _end_text_command_timer(bool p0) { invoke<Void>(0xA86911979638106F, p0); }
		// 0xA86911979638106F 0x6E7FDA1C  
		static void add_text_component_integer(int value) { invoke<Void>(0x03B504CF259931BC, value); }
		// 0x03B504CF259931BC 0xFE272A57  
		static void add_text_component_float(float value, int decimalPlaces)
		{
			invoke<Void>(0xE7DCB5B874BCD96E, value, decimalPlaces);
		} // 0xE7DCB5B874BCD96E 0x24D78013  
		static void add_text_component_substring_text_label(const char* labelName)
		{
			invoke<Void>(0xC63CD5D2920ACBE7, labelName);
		} // 0xC63CD5D2920ACBE7 0xDCE05406  
		static void add_text_component_substring_text_label_hash_key(Hash gxtEntryHash)
		{
			invoke<Void>(0x17299B63C7683A2B, gxtEntryHash);
		} // 0x17299B63C7683A2B 0x150E03B6  
		static void add_text_component_substring_blip_name(Blip blip) { invoke<Void>(0x80EAD8E2E1D5D52E, blip); }
		// 0x80EAD8E2E1D5D52E 0x5DE98F0A  
		static void add_text_component_substring_player_name(const char* text)
		{
			invoke<Void>(0x6C188BE134E074AA, text);
		} // 0x6C188BE134E074AA 0x27A244D8  
		static void add_text_component_substring_time(int timestamp, int flags)
		{
			invoke<Void>(0x1115F16B8AB9E8BF, timestamp, flags);
		} // 0x1115F16B8AB9E8BF 0x135B3CD0  
		static void add_text_component_formatted_integer(int value, bool commaSeparated)
		{
			invoke<Void>(0x0E4C749FF9DE9CC4, value, commaSeparated);
		} // 0x0E4C749FF9DE9CC4 0x12929BDF  
		static void _add_text_component_app_title(const char* p0, int p1) { invoke<Void>(0x761B77454205A61D, p0, p1); }
		// 0x761B77454205A61D 0x65E1D404  
		static void add_text_component_substring_website(const char* website)
		{
			invoke<Void>(0x94CF4AC034C9C986, website);
		} // 0x94CF4AC034C9C986 0xC736999E  
		static void _add_text_component_scaleform(const char* p0) { invoke<Void>(0x5F68520888E69014, p0); }
		// 0x5F68520888E69014 0x0829A799  
		static void _set_notification_color_next(int hudIndex) { invoke<Void>(0x39BBF623FC803EAC, hudIndex); }
		// 0x39BBF623FC803EAC 0x6F1A1901  
		static const char* _get_text_substring(const char* text, int position, int length)
		{
			return invoke<const char*>(0x169BD9382084C8C0, text, position, length);
		} // 0x169BD9382084C8C0 0x34A396EE  
		static const char* _get_text_substring_safe(const char* text, int position, int length, int maxLength)
		{
			return invoke<const char*>(0xB2798643312205C5, text, position, length, maxLength);
		} // 0xB2798643312205C5 0x0183A66C  
		static const char* _get_text_substring_slice(const char* text, int startPosition, int endPosition)
		{
			return invoke<const char*>(0xCE94AEBA5D82908A, text, startPosition, endPosition);
		} // 0xCE94AEBA5D82908A 0xFA6373BB  
		static const char* _get_label_text(const char* labelName)
		{
			return invoke<const char*>(0x7B5280EBA9840C72, labelName);
		} // 0x7B5280EBA9840C72 0x95C4B5AD  
		static void clear_prints() { invoke<Void>(0xCC33FA791322B9D9); } // 0xCC33FA791322B9D9 0x216CB1C5  
		static void clear_brief() { invoke<Void>(0x9D292F73ADBD9313); } // 0x9D292F73ADBD9313 0x9F75A929  
		static void clear_all_help_messages() { invoke<Void>(0x6178F68A87A4D3A0); } // 0x6178F68A87A4D3A0 0x9E5D9198  
		static void clear_this_print(const char* p0) { invoke<Void>(0xCF708001E1E536DD, p0); }
		// 0xCF708001E1E536DD 0x06878327  
		static void clear_small_prints() { invoke<Void>(0x2CEA2839313C09AC); } // 0x2CEA2839313C09AC 0xA869A238  
		static bool does_text_block_exist(const char* gxt) { return invoke<bool>(0x1C7302E725259789, gxt); }
		// 0x1C7302E725259789 0x96F74838  
		static void request_additional_text(const char* gxt, int slot) { invoke<Void>(0x71A78003C8E71424, gxt, slot); }
		// 0x71A78003C8E71424 0x9FA9175B  
		static void _request_additional_text_2(const char* gxt, int slot)
		{
			invoke<Void>(0x6009F9F1AE90D8A6, gxt, slot);
		} // 0x6009F9F1AE90D8A6 0xF4D27EBE  
		static bool has_additional_text_loaded(int slot) { return invoke<bool>(0x02245FE4BED318B8, slot); }
		// 0x02245FE4BED318B8 0xB0E56045  
		static void clear_additional_text(int p0, bool p1) { invoke<Void>(0x2A179DF17CCF04CD, p0, p1); }
		// 0x2A179DF17CCF04CD 0x518141E0  
		static bool is_streaming_additional_text(int p0) { return invoke<bool>(0x8B6817B71B85EBF0, p0); }
		// 0x8B6817B71B85EBF0 0xF079E4EB  
		static bool has_this_additional_text_loaded(const char* gxt, int slot)
		{
			return invoke<bool>(0xADBF060E2B30C5BC, gxt, slot);
		} // 0xADBF060E2B30C5BC 0x80A52040  
		static bool is_message_being_displayed() { return invoke<bool>(0x7984C03AA5CC2F41); }
		// 0x7984C03AA5CC2F41 0x6A77FE8D  
		static bool does_text_label_exist(const char* gxt) { return invoke<bool>(0xAC09CA973C564252, gxt); }
		// 0xAC09CA973C564252 0x6ECAE560  
		static int get_length_of_string_with_this_text_label(const char* gxt)
		{
			return invoke<int>(0x801BD273D3A23F74, gxt);
		} // 0x801BD273D3A23F74 0xA4CA7BE5  
		static int get_length_of_literal_string(const char* string) { return invoke<int>(0xF030907CCBB8A9FD, string); }
		// 0xF030907CCBB8A9FD 0x99379D55  
		static int _get_length_of_string(const char* STRING) { return invoke<int>(0x43E4111189E54F0E, STRING); }
		// 0x43E4111189E54F0E 0x7DBC0764  
		static const char* get_street_name_from_hash_key(Hash hash)
		{
			return invoke<const char*>(0xD0EF8A959B8A4CB9, hash);
		} // 0xD0EF8A959B8A4CB9 0x1E8E310C  
		static bool is_hud_preference_switched_on() { return invoke<bool>(0x1930DFA731813EC4); }
		// 0x1930DFA731813EC4 0xC3BC1B4F  
		static bool is_radar_preference_switched_on() { return invoke<bool>(0x9EB6522EA68F22FE); }
		// 0x9EB6522EA68F22FE 0x14AEAA28  
		static bool is_subtitle_preference_switched_on() { return invoke<bool>(0xAD6DACA4BA53E0A4); }
		// 0xAD6DACA4BA53E0A4 0x63BA19F5  
		static void display_hud(bool toggle) { invoke<Void>(0xA6294919E56FF02A, toggle); }
		// 0xA6294919E56FF02A 0xD10E4E31  
		static void _0x7669f9e39dc17063() { invoke<Void>(0x7669F9E39DC17063); } // 0x7669F9E39DC17063 0xC380AC85  
		static void _0x402f9ed62087e898() { invoke<Void>(0x402F9ED62087E898); } // 0x402F9ED62087E898 0xC47AB1B0  
		static void display_radar(bool Toggle) { invoke<Void>(0xA0EBB943C300E693, Toggle); }
		// 0xA0EBB943C300E693 0x52816BD4  
		static bool is_hud_hidden() { return invoke<bool>(0xA86478C6958735C5); } // 0xA86478C6958735C5 0x40BADA1D  
		static bool is_radar_hidden() { return invoke<bool>(0x157F93B036700462); } // 0x157F93B036700462 0x1AB3B954  
		static bool _is_radar_enabled() { return invoke<bool>(0xAF754F20EB5CD51A); } // 0xAF754F20EB5CD51A  
		static void set_blip_route(Blip blip, bool enabled) { invoke<Void>(0x4F7D8A9BFB0B43E9, blip, enabled); }
		// 0x4F7D8A9BFB0B43E9 0x3E160C90  
		static void set_blip_route_colour(Blip blip, int colour) { invoke<Void>(0x837155CD2F63DA09, blip, colour); }
		// 0x837155CD2F63DA09 0xDDE7C65C  
		static void add_next_message_to_previous_briefs(bool p0) { invoke<Void>(0x60296AF4BA14ABC5, p0); }
		// 0x60296AF4BA14ABC5 0xB58B25BD  
		static void _0x57d760d55f54e071(bool p0) { invoke<Void>(0x57D760D55F54E071, p0); }
		// 0x57D760D55F54E071 0x9854485F  
		static void responding_as_temp(float p0) { invoke<Void>(0xBD12C5EEE184C337, p0); }
		// 0xBD12C5EEE184C337 0xDCA3F423  
		static void set_radar_zoom(int zoomLevel) { invoke<Void>(0x096EF57A0C999BBA, zoomLevel); }
		// 0x096EF57A0C999BBA 0x2A50D1A6  
		static void _0xf98e4b3e56afc7b1(Any p0, float p1) { invoke<Void>(0xF98E4B3E56AFC7B1, p0, p1); }
		// 0xF98E4B3E56AFC7B1 0x25EC28C0  
		static void _set_radar_zoom_level_this_frame(float zoomLevel) { invoke<Void>(0xCB7CC0D58405AD41, zoomLevel); }
		// 0xCB7CC0D58405AD41 0x09CF1CE5  
		static void _0xd2049635deb9c375() { invoke<Void>(0xD2049635DEB9C375); } // 0xD2049635DEB9C375 0xE8D3A910  
		static void get_hud_colour(int hudColorIndex, int* r, int* g, int* b, int* a)
		{
			invoke<Void>(0x7C9C91AB74A0360F, hudColorIndex, r, g, b, a);
		} // 0x7C9C91AB74A0360F 0x63F66A0B  
		static void _0xd68a5ff8a3a89874(int r, int g, int b, int a) { invoke<Void>(0xD68A5FF8A3A89874, r, g, b, a); }
		// 0xD68A5FF8A3A89874 0x0E41E45C  
		static void _0x16a304e6cb2bfab9(int r, int g, int b, int a) { invoke<Void>(0x16A304E6CB2BFAB9, r, g, b, a); }
		// 0x16A304E6CB2BFAB9 0x6BE3ACA8  
		static void _set_hud_colours_switch(int hudColorIndex, int hudColorIndex2)
		{
			invoke<Void>(0x1CCC708F0F850613, hudColorIndex, hudColorIndex2);
		} // 0x1CCC708F0F850613 0x3B216749  
		static void _set_hud_colour(int hudColorIndex, int r, int g, int b, int a)
		{
			invoke<Void>(0xF314CF4F0211894E, hudColorIndex, r, g, b, a);
		} // 0xF314CF4F0211894E 0xF6E7E92B  
		static void flash_ability_bar(bool toggle) { invoke<Void>(0x02CFBA0C9E9275CE, toggle); }
		// 0x02CFBA0C9E9275CE 0x3648960D  
		static void set_ability_bar_value(float value, float maxValue)
		{
			invoke<Void>(0x9969599CCFF5D85E, value, maxValue);
		} // 0x9969599CCFF5D85E 0x24E53FD8  
		static void flash_wanted_display(bool p0) { invoke<Void>(0xA18AFB39081B6A1F, p0); }
		// 0xA18AFB39081B6A1F 0x629F866B  
		static void _0xba8d65c1c65702e5(bool p0) { invoke<Void>(0xBA8D65C1C65702E5, p0); } // 0xBA8D65C1C65702E5  
		static float _get_text_scale_height(float size, int font)
		{
			return invoke<float>(0xDB88A37483346780, size, font);
		} // 0xDB88A37483346780 0x3330175B  
		static void set_text_scale(float scale, float size) { invoke<Void>(0x07C837F9A01C34C9, scale, size); }
		// 0x07C837F9A01C34C9 0xB6E15B23  
		static void set_text_colour(int red, int green, int blue, int alpha)
		{
			invoke<Void>(0xBE6B23FFA53FB442, red, green, blue, alpha);
		} // 0xBE6B23FFA53FB442 0xE54DD2C8  
		static void set_text_centre(bool align) { invoke<Void>(0xC02F4DBFB51D988B, align); }
		// 0xC02F4DBFB51D988B 0xE26D39A1  
		static void set_text_right_justify(bool toggle) { invoke<Void>(0x6B3C4650BC8BEE47, toggle); }
		// 0x6B3C4650BC8BEE47 0x45B60520  
		static void set_text_justification(int justifyType) { invoke<Void>(0x4E096588B13FFECA, justifyType); }
		// 0x4E096588B13FFECA 0x68CDFA60  
		static void set_text_wrap(float start, float end) { invoke<Void>(0x63145D9C883A1A70, start, end); }
		// 0x63145D9C883A1A70 0x6F60AB54  
		static void set_text_leading(bool p0) { invoke<Void>(0xA50ABC31E3CDFAFF, p0); }
		// 0xA50ABC31E3CDFAFF 0x98CE21D4  
		static void set_text_proportional(bool p0) { invoke<Void>(0x038C1F517D7FDCF8, p0); }
		// 0x038C1F517D7FDCF8 0xF49D8A08  
		static void set_text_font(int fontType) { invoke<Void>(0x66E0276CC5F6B9DA, fontType); }
		// 0x66E0276CC5F6B9DA 0x80BC530D  
		static void set_text_drop_shadow() { invoke<Void>(0x1CA3E9EAC9D93E5E); } // 0x1CA3E9EAC9D93E5E 0xE2A11511  
		static void set_text_dropshadow(int distance, int r, int g, int b, int a)
		{
			invoke<Void>(0x465C84BC39F1C351, distance, r, g, b, a);
		} // 0x465C84BC39F1C351 0xE6587517  
		static void set_text_outline() { invoke<Void>(0x2513DFB0FB8400FE); } // 0x2513DFB0FB8400FE 0xC753412F  
		static void set_text_edge(int p0, int r, int g, int b, int a)
		{
			invoke<Void>(0x441603240D202FA6, p0, r, g, b, a);
		} // 0x441603240D202FA6 0x3F1A5DAB  
		static void set_text_render_id(int renderId) { invoke<Void>(0x5F15302936E07111, renderId); }
		// 0x5F15302936E07111 0xC5C3B7F3  
		static int get_default_script_rendertarget_render_id() { return invoke<int>(0x52F0982D7FD156B6); }
		// 0x52F0982D7FD156B6 0x8188935F  
		static bool register_named_rendertarget(const char* p0, bool p1)
		{
			return invoke<bool>(0x57D9C12635E25CE3, p0, p1);
		} // 0x57D9C12635E25CE3 0xFAE5D6F0  
		static bool is_named_rendertarget_registered(const char* p0) { return invoke<bool>(0x78DCDC15C9F116B4, p0); }
		// 0x78DCDC15C9F116B4 0x284057F5  
		static bool release_named_rendertarget(Any* p0) { return invoke<bool>(0xE9F6FFE837354DD4, p0); }
		// 0xE9F6FFE837354DD4 0xD3F6C892  
		static void link_named_rendertarget(Hash hash) { invoke<Void>(0xF6C09E276AEB3F2D, hash); }
		// 0xF6C09E276AEB3F2D 0x6844C4B9  
		static Any get_named_rendertarget_render_id(const char* p0) { return invoke<Any>(0x1A6478B61C6BDC3B, p0); }
		// 0x1A6478B61C6BDC3B 0xF9D7A401  
		static bool is_named_rendertarget_linked(Hash hash) { return invoke<bool>(0x113750538FA31298, hash); }
		// 0x113750538FA31298 0x8B52601F  
		static void clear_help(bool toggle) { invoke<Void>(0x8DFCED7A656F8802, toggle); }
		// 0x8DFCED7A656F8802 0xE6D85741  
		static bool is_help_message_on_screen() { return invoke<bool>(0xDAD37F45428801AE); }
		// 0xDAD37F45428801AE 0x4B3C9CA9  
		static bool _0x214cd562a939246a() { return invoke<bool>(0x214CD562A939246A); } // 0x214CD562A939246A 0x812CBE0E  
		static bool is_help_message_being_displayed() { return invoke<bool>(0x4D79439A6B55AC67); }
		// 0x4D79439A6B55AC67 0xA65F262A  
		static bool is_help_message_fading_out() { return invoke<bool>(0x327EDEEEAC55C369); }
		// 0x327EDEEEAC55C369 0x3E50AE92  
		static bool _0x4a9923385bdb9dad() { return invoke<bool>(0x4A9923385BDB9DAD); } // 0x4A9923385BDB9DAD 0x87871CE0  
		static int _get_blip_info_id_iterator() { return invoke<int>(0x186E5D252FA50E7D); }
		// 0x186E5D252FA50E7D 0xB9827942  
		static int get_number_of_active_blips() { return invoke<int>(0x9A3FF3DE163034E8); }
		// 0x9A3FF3DE163034E8 0x144020FA  
		static Blip get_next_blip_info_id(int blipSprite) { return invoke<Blip>(0x14F96AA50D6FBEA7, blipSprite); }
		// 0x14F96AA50D6FBEA7 0x9356E92F  
		static Blip get_first_blip_info_id(int blipSprite) { return invoke<Blip>(0x1BEDE233E6CD2A1F, blipSprite); }
		// 0x1BEDE233E6CD2A1F 0x64C0273D  
		static Vector3 get_blip_info_id_coord(Blip blip) { return invoke<Vector3>(0xFA7C7F0AADF25D09, blip); }
		// 0xFA7C7F0AADF25D09 0xB7374A66  
		static int get_blip_info_id_display(Blip blip) { return invoke<int>(0x1E314167F701DC3B, blip); }
		// 0x1E314167F701DC3B 0xD0FC19F4  
		static int get_blip_info_id_type(Blip blip) { return invoke<int>(0xBE9B0959FFD0779B, blip); }
		// 0xBE9B0959FFD0779B 0x501D7B4E  
		static Entity get_blip_info_id_entity_index(Blip blip) { return invoke<Entity>(0x4BA4E2553AFEDC2C, blip); }
		// 0x4BA4E2553AFEDC2C 0xA068C40B  
		static Pickup get_blip_info_id_pickup_index(Blip blip) { return invoke<Pickup>(0x9B6786E4C03DD382, blip); }
		// 0x9B6786E4C03DD382 0x86913D37  
		static Blip get_blip_from_entity(Entity entity) { return invoke<Blip>(0xBC8DBDCA2436F7E8, entity); }
		// 0xBC8DBDCA2436F7E8 0x005A2A47  
		static Blip add_blip_for_radius(float posX, float posY, float posZ, float radius)
		{
			return invoke<Blip>(0x46818D79B1F7499A, posX, posY, posZ, radius);
		} // 0x46818D79B1F7499A 0x4626756C  
		static Blip add_blip_for_entity(Entity entity) { return invoke<Blip>(0x5CDE92C702A8FCE7, entity); }
		// 0x5CDE92C702A8FCE7 0x30822554  
		static Blip add_blip_for_pickup(Pickup pickup) { return invoke<Blip>(0xBE339365C863BD36, pickup); }
		// 0xBE339365C863BD36 0x16693C3A  
		static Blip add_blip_for_coord(float x, float y, float z) { return invoke<Blip>(0x5A039BB0BCA604B6, x, y, z); }
		// 0x5A039BB0BCA604B6 0xC6F43D0E  
		static void _0x72dd432f3cdfc0ee(float posX, float posY, float posZ, float radius, int p4)
		{
			invoke<Void>(0x72DD432F3CDFC0EE, posX, posY, posZ, radius, p4);
		} // 0x72DD432F3CDFC0EE 0xBF25E7B2  
		static void _0x60734cc207c9833c(bool p0) { invoke<Void>(0x60734CC207C9833C, p0); }
		// 0x60734CC207C9833C 0xE7E1E32B  
		static void set_blip_coords(Blip blip, float posX, float posY, float posZ)
		{
			invoke<Void>(0xAE2AF67E9D9AF65D, blip, posX, posY, posZ);
		} // 0xAE2AF67E9D9AF65D 0x680A34D4  
		static Vector3 get_blip_coords(Blip blip) { return invoke<Vector3>(0x586AFE3FF72D996E, blip); }
		// 0x586AFE3FF72D996E 0xEF6FF47B  
		static void set_blip_sprite(Blip blip, int spriteId) { invoke<Void>(0xDF735600A4696DAF, blip, spriteId); }
		// 0xDF735600A4696DAF 0x8DBBB0B9  
		static int get_blip_sprite(Blip blip) { return invoke<int>(0x1FC877464A04FC4F, blip); }
		// 0x1FC877464A04FC4F 0x72FF2E73  
		static void set_blip_name_from_text_file(Blip blip, const char* gxtEntry)
		{
			invoke<Void>(0xEAA0FFE120D92784, blip, gxtEntry);
		} // 0xEAA0FFE120D92784 0xAC8A5461  
		static void set_blip_name_to_player_name(Blip blip, Player player)
		{
			invoke<Void>(0x127DE7B20C60A6A3, blip, player);
		} // 0x127DE7B20C60A6A3 0x03A0B8F9  
		static void set_blip_alpha(Blip blip, int alpha) { invoke<Void>(0x45FF974EEE1C8734, blip, alpha); }
		// 0x45FF974EEE1C8734 0xA791FCCD  
		static int get_blip_alpha(Blip blip) { return invoke<int>(0x970F608F0EE6C885, blip); }
		// 0x970F608F0EE6C885 0x297AF6C8  
		static void set_blip_fade(Blip blip, int opacity, int duration)
		{
			invoke<Void>(0x2AEE8F8390D2298C, blip, opacity, duration);
		} // 0x2AEE8F8390D2298C 0xA5999031  
		static void set_blip_rotation(Blip blip, int rotation) { invoke<Void>(0xF87683CDF73C3F6E, blip, rotation); }
		// 0xF87683CDF73C3F6E 0x6B8F44FE  
		static void set_blip_flash_timer(Blip blip, int duration) { invoke<Void>(0xD3CD6FD297AE87CC, blip, duration); }
		// 0xD3CD6FD297AE87CC 0x8D5DF611  
		static void set_blip_flash_interval(Blip blip, Any p1) { invoke<Void>(0xAA51DB313C010A7E, blip, p1); }
		// 0xAA51DB313C010A7E 0xEAF67377  
		static void set_blip_colour(Blip blip, int color) { invoke<Void>(0x03D7FB09E75D6B7E, blip, color); }
		// 0x03D7FB09E75D6B7E 0xBB3C5A41  
		static void set_blip_secondary_colour(Blip blip, float r, float g, float b)
		{
			invoke<Void>(0x14892474891E09EB, blip, r, g, b);
		} // 0x14892474891E09EB 0xC6384D32  
		static int get_blip_colour(Blip blip) { return invoke<int>(0xDF729E8D20CF7327, blip); }
		// 0xDF729E8D20CF7327 0xDD6A1E54  
		static int get_blip_hud_colour(Blip blip) { return invoke<int>(0x729B5F1EFBC0AAEE, blip); }
		// 0x729B5F1EFBC0AAEE 0xE88B4BC2  
		static bool is_blip_short_range(Blip blip) { return invoke<bool>(0xDA5F8727EB75B926, blip); }
		// 0xDA5F8727EB75B926 0x1226765A  
		static bool is_blip_on_minimap(Blip blip) { return invoke<bool>(0xE41CA53051197A27, blip); }
		// 0xE41CA53051197A27 0x258CBA3A  
		static bool _0xdd2238f57b977751(Any p0) { return invoke<bool>(0xDD2238F57B977751, p0); }
		// 0xDD2238F57B977751 0x3E47F357  
		static void _0x54318c915d27e4ce(Any p0, bool p1) { invoke<Void>(0x54318C915D27E4CE, p0, p1); }
		// 0x54318C915D27E4CE 0x43996428  
		static void set_blip_high_detail(Blip blip, bool toggle) { invoke<Void>(0xE2590BC29220CEBB, blip, toggle); }
		// 0xE2590BC29220CEBB 0xD5842BFF  
		static void set_blip_as_mission_creator_blip(Blip blip, bool toggle)
		{
			invoke<Void>(0x24AC0137444F9FD5, blip, toggle);
		} // 0x24AC0137444F9FD5 0x802FB686  
		static bool is_mission_creator_blip(Blip blip) { return invoke<bool>(0x26F49BF3381D933D, blip); }
		// 0x26F49BF3381D933D 0x24ACC4E9  
		static Blip disable_blip_name_for_var() { return invoke<Blip>(0x5C90988E7C8E1AF4); }
		// 0x5C90988E7C8E1AF4 0xFFD7476C  
		static bool _0x4167efe0527d706e() { return invoke<bool>(0x4167EFE0527D706E); } // 0x4167EFE0527D706E 0xC5EB849A  
		static void _0xf1a6c18b35bcade6(bool p0) { invoke<Void>(0xF1A6C18B35BCADE6, p0); }
		// 0xF1A6C18B35BCADE6 0xA2CAAB4F  
		static void set_blip_flashes(Blip blip, bool toggle) { invoke<Void>(0xB14552383D39CE3E, blip, toggle); }
		// 0xB14552383D39CE3E 0xC0047F15  
		static void set_blip_flashes_alternate(Blip blip, bool toggle)
		{
			invoke<Void>(0x2E8D9498C56DD0D1, blip, toggle);
		} // 0x2E8D9498C56DD0D1 0x1A81202B  
		static bool is_blip_flashing(Blip blip) { return invoke<bool>(0xA5E41FD83AD6CEF0, blip); }
		// 0xA5E41FD83AD6CEF0 0x52E111D7  
		static void set_blip_as_short_range(Blip blip, bool toggle) { invoke<Void>(0xBE8BE4FE60E27B72, blip, toggle); }
		// 0xBE8BE4FE60E27B72 0x5C67725E  
		static void set_blip_scale(Blip blip, float scale) { invoke<Void>(0xD38744167B2FA257, blip, scale); }
		// 0xD38744167B2FA257 0x1E6EC434  
		static void set_blip_priority(Blip blip, int priority) { invoke<Void>(0xAE9FC9EF6A9FAC79, blip, priority); }
		// 0xAE9FC9EF6A9FAC79 0xCE87DA6F  
		static void set_blip_display(Blip blip, int displayId) { invoke<Void>(0x9029B2F3DA924928, blip, displayId); }
		// 0x9029B2F3DA924928 0x2B521F91  
		static void set_blip_category(Blip blip, int index) { invoke<Void>(0x234CDD44D996FD9A, blip, index); }
		// 0x234CDD44D996FD9A 0xEF72F533  
		static void remove_blip(Blip* blip) { invoke<Void>(0x86A652570E5F25DD, blip); }
		// 0x86A652570E5F25DD 0xD8C3C1CD  
		static void set_blip_as_friendly(Blip blip, bool toggle) { invoke<Void>(0x6F6F290102C02AB4, blip, toggle); }
		// 0x6F6F290102C02AB4 0xF290CFD8  
		static void pulse_blip(Blip blip) { invoke<Void>(0x742D6FD43115AF73, blip); } // 0x742D6FD43115AF73 0x44253855  
		static void show_number_on_blip(Blip blip, int number) { invoke<Void>(0xA3C0B359DCB848B6, blip, number); }
		// 0xA3C0B359DCB848B6 0x7BFC66C6  
		static void hide_number_on_blip(Blip blip) { invoke<Void>(0x532CFF637EF80148, blip); }
		// 0x532CFF637EF80148 0x0B6D610D  
		static void _0x75a16c3da34f1245(Any p0, bool p1) { invoke<Void>(0x75A16C3DA34F1245, p0, p1); }
		// 0x75A16C3DA34F1245 0x1D99F676  
		static void _set_blip_checked(Blip blip, bool toggle) { invoke<Void>(0x74513EA3E505181E, blip, toggle); }
		// 0x74513EA3E505181E 0x3DCF0092  
		static void show_heading_indicator_on_blip(Blip blip, bool toggle)
		{
			invoke<Void>(0x5FBCA48327B914DF, blip, toggle);
		} // 0x5FBCA48327B914DF 0xD1C3D71B  
		static void _set_blip_friendly(Blip blip, bool toggle) { invoke<Void>(0xB81656BC81FE24D1, blip, toggle); }
		// 0xB81656BC81FE24D1 0x8DE82C15  
		static void _set_blip_friend(Blip blip, bool toggle) { invoke<Void>(0x23C3EB807312F01A, blip, toggle); }
		// 0x23C3EB807312F01A 0x4C8F02B4  
		static void _0xdcfb5d4db8bf367e(Any p0, bool p1) { invoke<Void>(0xDCFB5D4DB8BF367E, p0, p1); }
		// 0xDCFB5D4DB8BF367E 0xABBE1E45  
		static void _0xc4278f70131baa6d(Any p0, bool p1) { invoke<Void>(0xC4278F70131BAA6D, p0, p1); }
		// 0xC4278F70131BAA6D 0x6AA6A1CC  
		static void _set_blip_shrink(Blip blip, bool toggle) { invoke<Void>(0x2B6D467DAB714E8D, blip, toggle); }
		// 0x2B6D467DAB714E8D 0xC575F0BC  
		static void _0x25615540d894b814(Any p0, bool p1) { invoke<Void>(0x25615540D894B814, p0, p1); }
		// 0x25615540D894B814 0x40E25DB8  
		static bool does_blip_exist(Blip blip) { return invoke<bool>(0xA6DB27D19ECBB7DA, blip); }
		// 0xA6DB27D19ECBB7DA 0xAE92DD96  
		static void set_waypoint_off() { invoke<Void>(0xA7E4E2D361C2627F); } // 0xA7E4E2D361C2627F 0xB3496E1B  
		static void _0xd8e694757bcea8e9() { invoke<Void>(0xD8E694757BCEA8E9); } // 0xD8E694757BCEA8E9 0x62BABF2C  
		static void refresh_waypoint() { invoke<Void>(0x81FA173F170560D1); } // 0x81FA173F170560D1 0xB395D753  
		static bool is_waypoint_active() { return invoke<bool>(0x1DD1F58F493F1DA5); } // 0x1DD1F58F493F1DA5 0x5E4DF47B  
		static void set_new_waypoint(float x, float y) { invoke<Void>(0xFE43368D2AA4F2FC, x, y); }
		// 0xFE43368D2AA4F2FC 0x8444E1F0  
		static void set_blip_bright(Blip blip, bool toggle) { invoke<Void>(0xB203913733F27884, blip, toggle); }
		// 0xB203913733F27884 0x72BEE6DF  
		static void set_blip_show_cone(Blip blip, bool toggle) { invoke<Void>(0x13127EC3665E8EE1, blip, toggle); }
		// 0x13127EC3665E8EE1 0xFF545AD8  
		static void _0xc594b315edf2d4af(Ped ped) { invoke<Void>(0xC594B315EDF2D4AF, ped); }
		// 0xC594B315EDF2D4AF 0x41B0D022  
		static Any set_minimap_component(int p0, bool p1, int p2)
		{
			return invoke<Any>(0x75A9A10948D1DEA6, p0, p1, p2);
		} // 0x75A9A10948D1DEA6 0x419DCDC4  
		static void _0x60e892ba4f5bdca4() { invoke<Void>(0x60E892BA4F5BDCA4); } // 0x60E892BA4F5BDCA4  
		static Blip get_main_player_blip_id() { return invoke<Blip>(0xDCD4EC3F419D02FA); }
		// 0xDCD4EC3F419D02FA 0xAB93F020  
		static void _0x41350b4fc28e3941(bool p0) { invoke<Void>(0x41350B4FC28E3941, p0); } // 0x41350B4FC28E3941  
		static void hide_loading_on_fade_this_frame() { invoke<Void>(0x4B0311D3CDC4648F); }
		// 0x4B0311D3CDC4648F 0x35087963  
		static void set_radar_as_interior_this_frame(Hash interior, float x, float y, int z, int zoom)
		{
			invoke<Void>(0x59E727A1C9D3E31A, interior, x, y, z, zoom);
		} // 0x59E727A1C9D3E31A 0x6F2626E1  
		static void set_radar_as_exterior_this_frame() { invoke<Void>(0xE81B7D2A3DAB2D81); }
		// 0xE81B7D2A3DAB2D81 0x39ABB10E  
		static void _set_player_blip_position_this_frame(float x, float y) { invoke<Void>(0x77E2DD177910E1CF, x, y); }
		// 0x77E2DD177910E1CF 0x54E75C7D  
		static Any _0x9049fe339d5f6f6f() { return invoke<Any>(0x9049FE339D5F6F6F); } // 0x9049FE339D5F6F6F 0x199DED14  
		static void _disable_radar_this_frame() { invoke<Void>(0x5FBAE526203990C9); } // 0x5FBAE526203990C9 0x1A4318F7  
		static void _0x20fe7fdfeead38c0() { invoke<Void>(0x20FE7FDFEEAD38C0); } // 0x20FE7FDFEEAD38C0 0xCE36E3FE  
		static void _center_player_on_radar_this_frame() { invoke<Void>(0x6D14BFDC33B34F55); }
		// 0x6D14BFDC33B34F55 0x334EFD46  
		static void set_widescreen_format(Any p0) { invoke<Void>(0xC3B07BA00A83B0F1, p0); }
		// 0xC3B07BA00A83B0F1 0xF016E08F  
		static void display_area_name(bool toggle) { invoke<Void>(0x276B6CE369C33678, toggle); }
		// 0x276B6CE369C33678 0x489FDD41  
		static void display_cash(bool toggle) { invoke<Void>(0x96DEC8D5430208B7, toggle); }
		// 0x96DEC8D5430208B7 0x0049DF83  
		static void _0x170f541e1cadd1de(bool p0) { invoke<Void>(0x170F541E1CADD1DE, p0); } // 0x170F541E1CADD1DE  
		static void _set_player_cash_change(int cash, int bank) { invoke<Void>(0x0772DF77852C2E30, cash, bank); }
		// 0x0772DF77852C2E30  
		static void display_ammo_this_frame(bool display) { invoke<Void>(0xA5E78BA2B1331C55, display); }
		// 0xA5E78BA2B1331C55 0x60693CEE  
		static void display_sniper_scope_this_frame() { invoke<Void>(0x73115226F4814E62); }
		// 0x73115226F4814E62 0xBC6C73CB  
		static void hide_hud_and_radar_this_frame() { invoke<Void>(0x719FF505F097FD20); }
		// 0x719FF505F097FD20 0xB75D4AD2  
		static void _0xe67c6dfd386ea5e7(bool p0) { invoke<Void>(0xE67C6DFD386EA5E7, p0); }
		// 0xE67C6DFD386EA5E7 0x5476B9FD  
		static void _0xc2d15bef167e27bc() { invoke<Void>(0xC2D15BEF167E27BC); } // 0xC2D15BEF167E27BC 0xF4F3C796  
		static void _0x95cf81bd06ee1887() { invoke<Void>(0x95CF81BD06EE1887); } // 0x95CF81BD06EE1887 0x7BFFE82F  
		static void set_multiplayer_bank_cash() { invoke<Void>(0xDD21B55DF695CD0A); } // 0xDD21B55DF695CD0A 0x2C842D03  
		static void remove_multiplayer_bank_cash() { invoke<Void>(0xC7C6789AA1CFEDD0); }
		// 0xC7C6789AA1CFEDD0 0x728B4EF4  
		static void set_multiplayer_hud_cash(int p0, int p1) { invoke<Void>(0xFD1D220394BCB824, p0, p1); }
		// 0xFD1D220394BCB824 0xA8DB435E  
		static void remove_multiplayer_hud_cash() { invoke<Void>(0x968F270E39141ECA); }
		// 0x968F270E39141ECA 0x07BF4A7D  
		static void hide_help_text_this_frame() { invoke<Void>(0xD46923FC481CA285); } // 0xD46923FC481CA285 0xF3807BED  
		static void display_help_text_this_frame(const char* message, bool p1)
		{
			invoke<Void>(0x960C9FF8F616E41C, message, p1);
		} // 0x960C9FF8F616E41C 0x18E3360A  
		static void _show_weapon_wheel(bool forcedShow) { invoke<Void>(0xEB354E5376BC81A7, forcedShow); }
		// 0xEB354E5376BC81A7 0x1EFFB02A  
		static void _block_weapon_wheel_this_frame() { invoke<Void>(0x0AFC4AF510774B47); }
		// 0x0AFC4AF510774B47 0xB26FED2B  
		static Hash _0xa48931185f0536fe() { return invoke<Hash>(0xA48931185F0536FE); } // 0xA48931185F0536FE 0x22E9F555  
		static void _0x72c1056d678bb7d8(Hash weaponHash) { invoke<Void>(0x72C1056D678BB7D8, weaponHash); }
		// 0x72C1056D678BB7D8 0x83B608A0  
		static Any _0xa13e93403f26c812(Any p0) { return invoke<Any>(0xA13E93403F26C812, p0); } // 0xA13E93403F26C812  
		static void _0x14c9fdcc41f81f63(bool p0) { invoke<Void>(0x14C9FDCC41F81F63, p0); }
		// 0x14C9FDCC41F81F63 0xE70D1F43  
		static void set_gps_flags(int p0, float p1) { invoke<Void>(0x5B440763A4C8D15B, p0, p1); }
		// 0x5B440763A4C8D15B 0x60539BAB  
		static void clear_gps_flags() { invoke<Void>(0x21986729D6A3A830); } // 0x21986729D6A3A830 0x056AFCE6  
		static void _0x1eac5f91bcbc5073(bool p0) { invoke<Void>(0x1EAC5F91BCBC5073, p0); }
		// 0x1EAC5F91BCBC5073 0xFB9BABF5  
		static void clear_gps_race_track() { invoke<Void>(0x7AA5B4CE533C858B); } // 0x7AA5B4CE533C858B 0x40C59829  
		static void _0xdb34e8d56fc13b08(Any p0, bool p1, bool p2) { invoke<Void>(0xDB34E8D56FC13B08, p0, p1, p2); }
		// 0xDB34E8D56FC13B08 0x7F93799B  
		static void _0x311438a071dd9b1a(Any p0, Any p1, Any p2) { invoke<Void>(0x311438A071DD9B1A, p0, p1, p2); }
		// 0x311438A071DD9B1A 0xEEBDFE55  
		static void _0x900086f371220b6f(bool p0, Any p1, Any p2) { invoke<Void>(0x900086F371220B6F, p0, p1, p2); }
		// 0x900086F371220B6F 0xDA0AF00E  
		static void _0xe6de0561d9232a64() { invoke<Void>(0xE6DE0561D9232A64); } // 0xE6DE0561D9232A64 0xCF2E3E24  
		static void _0x3d3d15af7bcaaf83(Any p0, bool p1, bool p2) { invoke<Void>(0x3D3D15AF7BCAAF83, p0, p1, p2); }
		// 0x3D3D15AF7BCAAF83 0xC3DCBEDB  
		static void _0xa905192a6781c41b(float x, float y, float z) { invoke<Void>(0xA905192A6781C41B, x, y, z); }
		// 0xA905192A6781C41B 0xFE485135  
		static void _0x3dda37128dd1aca8(bool p0) { invoke<Void>(0x3DDA37128DD1ACA8, p0); }
		// 0x3DDA37128DD1ACA8 0xE87CBE4C  
		static void _0x67eedea1b9bafd94() { invoke<Void>(0x67EEDEA1B9BAFD94); } // 0x67EEDEA1B9BAFD94 0x0D9969E4  
		static void clear_gps_player_waypoint() { invoke<Void>(0xFF4FB7C8CDFA3DA7); } // 0xFF4FB7C8CDFA3DA7 0x0B9C7FC2  
		static void set_gps_flashes(bool toggle) { invoke<Void>(0x320D0E0D936A0E9B, toggle); }
		// 0x320D0E0D936A0E9B 0xE991F733  
		static void _0x7b21e0bb01e8224a(Any p0) { invoke<Void>(0x7B21E0BB01E8224A, p0); } // 0x7B21E0BB01E8224A  
		static void flash_minimap_display() { invoke<Void>(0xF2DD778C22B15BDA); } // 0xF2DD778C22B15BDA 0xB8359952  
		static void _0x6b1de27ee78e6a19(Any p0) { invoke<Void>(0x6B1DE27EE78E6A19, p0); }
		// 0x6B1DE27EE78E6A19 0x79A6CAF6  
		static void toggle_stealth_radar(bool toggle) { invoke<Void>(0x6AFDFB93754950C7, toggle); }
		// 0x6AFDFB93754950C7 0xC68D47C4  
		static void key_hud_colour(bool p0, Any p1) { invoke<Void>(0x1A5CD7752DD28CD3, p0, p1); }
		// 0x1A5CD7752DD28CD3 0xD5BFCADB  
		static void set_mission_name(bool p0, const char* name) { invoke<Void>(0x5F28ECF5FC84772F, p0, name); }
		// 0x5F28ECF5FC84772F 0x68DCAE10  
		static void _set_mission_name_2(bool p0, const char* name) { invoke<Void>(0xE45087D85F468BC2, p0, name); }
		// 0xE45087D85F468BC2 0x8D9A1734  
		static void _0x817b86108eb94e51(bool p0, Any* p1, Any* p2, Any* p3, Any* p4, Any* p5, Any* p6, Any* p7, Any* p8)
		{
			invoke<Void>(0x817B86108EB94E51, p0, p1, p2, p3, p4, p5, p6, p7, p8);
		} // 0x817B86108EB94E51 0xD2161E77  
		static void set_minimap_block_waypoint(bool toggle) { invoke<Void>(0x58FADDED207897DC, toggle); }
		// 0x58FADDED207897DC 0xA41C3B62  
		static void _set_north_yankton_map(bool toggle) { invoke<Void>(0x9133955F1A2DA957, toggle); }
		// 0x9133955F1A2DA957 0x02F5F1D1  
		static void _set_minimap_revealed(bool toggle) { invoke<Void>(0xF8DEE0A5600CBB93, toggle); }
		// 0xF8DEE0A5600CBB93 0xD8D77733  
		static float _0xe0130b41d3cf4574() { return invoke<float>(0xE0130B41D3CF4574); }
		// 0xE0130B41D3CF4574 0xA4098ACC  
		static bool _is_minimap_area_revealed(float x, float y, float radius)
		{
			return invoke<bool>(0x6E31B91145873922, x, y, radius);
		} // 0x6E31B91145873922 0x65B705F6  
		static void _0x62e849b7eb28e770(bool p0) { invoke<Void>(0x62E849B7EB28E770, p0); } // 0x62E849B7EB28E770  
		static void _0x0923dbf87dff735e(float x, float y, float z) { invoke<Void>(0x0923DBF87DFF735E, x, y, z); }
		// 0x0923DBF87DFF735E 0xE010F081  
		static void _0x71bdb63dbaf8da59(Any p0) { invoke<Void>(0x71BDB63DBAF8DA59, p0); }
		// 0x71BDB63DBAF8DA59 0x5133A750  
		static void _0x35edd5b2e3ff01c0() { invoke<Void>(0x35EDD5B2E3FF01C0); } // 0x35EDD5B2E3FF01C0 0x20FD3E87  
		static void lock_minimap_angle(int angle) { invoke<Void>(0x299FAEBB108AE05B, angle); }
		// 0x299FAEBB108AE05B 0xDEC733E4  
		static void unlock_minimap_angle() { invoke<Void>(0x8183455E16C42E3A); } // 0x8183455E16C42E3A 0x742043F9  
		static void lock_minimap_position(float x, float y) { invoke<Void>(0x1279E861A329E73F, x, y); }
		// 0x1279E861A329E73F 0xB9632A91  
		static void unlock_minimap_position() { invoke<Void>(0x3E93E06DB8EF1F30); } // 0x3E93E06DB8EF1F30 0x5E8E6F54  
		static void _set_minimap_attitude_indicator_level(float altitude, bool p1)
		{
			invoke<Void>(0xD201F3FF917A506D, altitude, p1);
		} // 0xD201F3FF917A506D 0x0308EDF6  
		static void _0x3f5cc444dcaaa8f2(Any p0, Any p1, bool p2) { invoke<Void>(0x3F5CC444DCAAA8F2, p0, p1, p2); }
		// 0x3F5CC444DCAAA8F2 0x7FB6FB2A  
		static void _0x975d66a0bc17064c(Any p0) { invoke<Void>(0x975D66A0BC17064C, p0); }
		// 0x975D66A0BC17064C 0xF07D8CEF  
		static void _0x06a320535f5f0248(Any p0) { invoke<Void>(0x06A320535F5F0248, p0); }
		// 0x06A320535F5F0248 0x827F14DE  
		static void _set_radar_bigmap_enabled(bool toggleBigMap, bool showFullMap)
		{
			invoke<Void>(0x231C8F89D0539D8F, toggleBigMap, showFullMap);
		} // 0x231C8F89D0539D8F 0x08EB83D2  
		static bool is_hud_component_active(int id) { return invoke<bool>(0xBC4C9EA5391ECC0D, id); }
		// 0xBC4C9EA5391ECC0D 0x6214631F  
		static bool is_scripted_hud_component_active(int id) { return invoke<bool>(0xDD100EB17A94FF65, id); }
		// 0xDD100EB17A94FF65 0x2B86F382  
		static void hide_scripted_hud_component_this_frame(int id) { invoke<Void>(0xE374C498D8BADC14, id); }
		// 0xE374C498D8BADC14 0x31ABA127  
		static bool _0x09c0403ed9a751c2(Any p0) { return invoke<bool>(0x09C0403ED9A751C2, p0); }
		// 0x09C0403ED9A751C2 0xE8C8E535  
		static void hide_hud_component_this_frame(int id) { invoke<Void>(0x6806C51AD12B83B8, id); }
		// 0x6806C51AD12B83B8 0xDB2D0762  
		static void show_hud_component_this_frame(int id) { invoke<Void>(0x0B4DF1FA60C0E664, id); }
		// 0x0B4DF1FA60C0E664 0x95E1546E  
		static void _0xa4dede28b1814289() { invoke<Void>(0xA4DEDE28B1814289); } // 0xA4DEDE28B1814289 0x52746FE1  
		static void reset_reticule_values() { invoke<Void>(0x12782CE0A636E9F0); } // 0x12782CE0A636E9F0 0xBE27AA3F  
		static void reset_hud_component_values(int id) { invoke<Void>(0x450930E616475D0D, id); }
		// 0x450930E616475D0D 0xD15B46DA  
		static void set_hud_component_position(int id, float x, float y) { invoke<Void>(0xAABB1F56E2A17CED, id, x, y); }
		// 0xAABB1F56E2A17CED 0x2F3A0D15  
		static Vector3 get_hud_component_position(int id) { return invoke<Vector3>(0x223CA69A8C4417FD, id); }
		// 0x223CA69A8C4417FD 0x080DCED6  
		static void clear_reminder_message() { invoke<Void>(0xB57D8DD645CFA2CF); } // 0xB57D8DD645CFA2CF 0x5BBCC934  
		static bool _get_screen_coord_from_world_coord(float worldX, float worldY, float worldZ, float* screenX,
			float* screenY)
		{
			return invoke<bool>(0xF9904D11F1ACBEC3, worldX, worldY, worldZ, screenX, screenY);
		} // 0xF9904D11F1ACBEC3 0xFE9A39F8  
		static void _display_job_report() { invoke<Void>(0x523A590C1A3CC0D3); } // 0x523A590C1A3CC0D3 0x10DE5150  
		static void _0xee4c0e6dbc6f2c6f() { invoke<Void>(0xEE4C0E6DBC6F2C6F); } // 0xEE4C0E6DBC6F2C6F 0x67649EE0  
		static Any _0x9135584d09a3437e() { return invoke<Any>(0x9135584D09A3437E); } // 0x9135584D09A3437E 0x9D2C94FA  
		static bool _0x2432784aca090da4(Any p0) { return invoke<bool>(0x2432784ACA090DA4, p0); }
		// 0x2432784ACA090DA4 0x45472FD5  
		static void _0x7679cc1bcebe3d4c(Any p0, float p1, float p2) { invoke<Void>(0x7679CC1BCEBE3D4C, p0, p1, p2); }
		// 0x7679CC1BCEBE3D4C 0x198F32D7  
		static void _0x784ba7e0eceb4178(Any p0, float x, float y, float z)
		{
			invoke<Void>(0x784BA7E0ECEB4178, p0, x, y, z);
		} // 0x784BA7E0ECEB4178 0x93045157  
		static void _0xb094bc1db4018240(Any p0, Any p1, float p2, float p3)
		{
			invoke<Void>(0xB094BC1DB4018240, p0, p1, p2, p3);
		} // 0xB094BC1DB4018240 0x18B012B7  
		static void _0x788e7fd431bd67f1(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5)
		{
			invoke<Void>(0x788E7FD431BD67F1, p0, p1, p2, p3, p4, p5);
		} // 0x788E7FD431BD67F1 0x97852A82  
		static void clear_floating_help(Any p0, bool p1) { invoke<Void>(0x50085246ABD3FEFA, p0, p1); }
		// 0x50085246ABD3FEFA 0xB181F88F  
		static void _set_mp_gamer_tag_color(int headDisplayId, const char* username, bool pointedClanTag,
			bool isRockstarClan, const char* clanTag, Any p5, int r, int g, int b)
		{
			invoke<Void>(0x6DD05E9D83EFA4C9, headDisplayId, username, pointedClanTag, isRockstarClan, clanTag, p5, r, g,
				b);
		} // 0x6DD05E9D83EFA4C9 0xC969F2D0  
		static bool _has_mp_gamer_tag() { return invoke<bool>(0x6E0EB3EB47C8D7AA); } // 0x6E0EB3EB47C8D7AA 0xEFD2564A  
		static int _create_mp_gamer_tag(Ped ped, const char* username, bool pointedClanTag, bool isRockstarClan,
			const char* clanTag, Any p5)
		{
			return invoke<int>(0xBFEFE3321A3F5015, ped, username, pointedClanTag, isRockstarClan, clanTag, p5);
		} // 0xBFEFE3321A3F5015 0xF5CD2AA4  
		static void remove_mp_gamer_tag(int gamerTagId) { invoke<Void>(0x31698AA80E0223F8, gamerTagId); }
		// 0x31698AA80E0223F8 0x3D081FE4  
		static bool is_mp_gamer_tag_active(int gamerTagId) { return invoke<bool>(0x4E929E7A5796FD26, gamerTagId); }
		// 0x4E929E7A5796FD26 0x60118951  
		static bool add_trevor_random_modifier(int gamerTagId) { return invoke<bool>(0x595B5178E412E199, gamerTagId); }
		// 0x595B5178E412E199 0x63959059  
		static void set_mp_gamer_tag_visibility(int gamerTagId, int component, bool toggle)
		{
			invoke<Void>(0x63BB75ABEDC1F6A0, gamerTagId, component, toggle);
		} // 0x63BB75ABEDC1F6A0 0xD41DF479  
		static void _set_mp_gamer_tag_(int headDisplayId, bool p1)
		{
			invoke<Void>(0xEE76FF7E6A0166B0, headDisplayId, p1);
		} // 0xEE76FF7E6A0166B0 0x767DED29  
		static void _set_mp_gamer_tag_icons(int headDisplayId, bool p1)
		{
			invoke<Void>(0xA67F9C46D612B6F1, headDisplayId, p1);
		} // 0xA67F9C46D612B6F1 0xB01A5434  
		static void set_mp_gamer_tag_colour(int gamerTagId, int flag, int color)
		{
			invoke<Void>(0x613ED644950626AE, gamerTagId, flag, color);
		} // 0x613ED644950626AE 0x7E3AA40A  
		static void set_mp_gamer_tag_health_bar_colour(int headDisplayId, int color)
		{
			invoke<Void>(0x3158C77A7E888AB4, headDisplayId, color);
		} // 0x3158C77A7E888AB4 0x5777EC77  
		static void set_mp_gamer_tag_alpha(int gamerTagId, int component, int alpha)
		{
			invoke<Void>(0xD48FE545CD46F857, gamerTagId, component, alpha);
		} // 0xD48FE545CD46F857 0xF4418611  
		static void set_mp_gamer_tag_wanted_level(int gamerTagId, int wantedlvl)
		{
			invoke<Void>(0xCF228E2AA03099C3, gamerTagId, wantedlvl);
		} // 0xCF228E2AA03099C3 0x0EBB003F  
		static void set_mp_gamer_tag_name(int gamerTagId, const char* string)
		{
			invoke<Void>(0xDEA2B8283BAA3944, gamerTagId, string);
		} // 0xDEA2B8283BAA3944 0x627A559B  
		static bool _has_mp_gamer_tag_2(int gamerTagId) { return invoke<bool>(0xEB709A36958ABE0D, gamerTagId); }
		// 0xEB709A36958ABE0D 0xF11414C4  
		static void _set_mp_gamer_tag_chatting(int gamerTagId, const char* string)
		{
			invoke<Void>(0x7B7723747CCB55B6, gamerTagId, string);
		} // 0x7B7723747CCB55B6 0x939218AB  
		static int _get_active_website_id() { return invoke<int>(0x01A358D9128B7A86); }
		// 0x01A358D9128B7A86 0xAB5B7C18  
		static int get_current_website_id() { return invoke<int>(0x97D47996FC48CBAD); }
		// 0x97D47996FC48CBAD 0x42A55B14  
		static Any _0xe3b05614dce1d014(Any p0) { return invoke<Any>(0xE3B05614DCE1D014, p0); }
		// 0xE3B05614DCE1D014 0xD217EE7E  
		static void _0xb99c4e4d9499df29(bool p0) { invoke<Void>(0xB99C4E4D9499DF29, p0); } // 0xB99C4E4D9499DF29  
		static Any _0xaf42195a42c63bba() { return invoke<Any>(0xAF42195A42C63BBA); } // 0xAF42195A42C63BBA  
		static void set_warning_message(const char* entryLine1, int instructionalKey, const char* entryLine2, bool p3,
			Any p4, Any* p5, Any* p6, bool background)
		{
			invoke<Void>(0x7B1776B3B53F8D74, entryLine1, instructionalKey, entryLine2, p3, p4, p5, p6, background);
		} // 0x7B1776B3B53F8D74 0xBE699BDE  
		static void set_warning_message_with_header(const char* entryHeader, const char* entryLine1,
			int instructionalKey, const char* entryLine2, bool p4, Any p5,
			Any* p6, Any* p7, bool background)
		{
			invoke<Void>(0xDC38CC1E35B6A5D7, entryHeader, entryLine1, instructionalKey, entryLine2, p4, p5, p6, p7,
				background);
		} // 0xDC38CC1E35B6A5D7 0x2DB9EAB5  
		static void _set_warning_message_3(const char* entryHeader, const char* entryLine1, Any instructionalKey,
			const char* entryLine2, bool p4, Any p5, Any p6, Any* p7, Any* p8, bool p9)
		{
			invoke<Void>(0x701919482C74B5AB, entryHeader, entryLine1, instructionalKey, entryLine2, p4, p5, p6, p7, p8,
				p9);
		} // 0x701919482C74B5AB 0x749929D3  
		static bool _0x0c5a80a9e096d529(Any p0, Any* p1, Any p2, Any p3, Any p4, Any p5)
		{
			return invoke<bool>(0x0C5A80A9E096D529, p0, p1, p2, p3, p4, p5);
		} // 0x0C5A80A9E096D529  
		static bool _0xdaf87174be7454ff(Any p0) { return invoke<bool>(0xDAF87174BE7454FF, p0); } // 0xDAF87174BE7454FF  
		static void _0x6ef54ab721dc6242() { invoke<Void>(0x6EF54AB721DC6242); } // 0x6EF54AB721DC6242  
		static bool is_warning_message_active() { return invoke<bool>(0xE18B138FABC53103); }
		// 0xE18B138FABC53103 0x94C834AD  
		static void _0x7792424aa0eac32e() { invoke<Void>(0x7792424AA0EAC32E); } // 0x7792424AA0EAC32E 0x2F9A309C  
		static void _set_map_full_screen(bool toggle) { invoke<Void>(0x5354C5BA2EA868A4, toggle); }
		// 0x5354C5BA2EA868A4 0xE4FD20D8  
		static void _0x1eae6dd17b7a5efa(Any p0) { invoke<Void>(0x1EAE6DD17B7A5EFA, p0); }
		// 0x1EAE6DD17B7A5EFA 0x13E7A5A9  
		static Any _0x551df99658db6ee8(float p0, float p1, float p2)
		{
			return invoke<Any>(0x551DF99658DB6EE8, p0, p1, p2);
		} // 0x551DF99658DB6EE8 0x786CA0A2  
		static void _0x2708fc083123f9ff() { invoke<Void>(0x2708FC083123F9FF); } // 0x2708FC083123F9FF 0xCBEC9369  
		static Any _0x1121bfa1a1a522a8() { return invoke<Any>(0x1121BFA1A1A522A8); } // 0x1121BFA1A1A522A8 0x3F4AFB13  
		static void _0x82cedc33687e1f50(bool p0) { invoke<Void>(0x82CEDC33687E1F50, p0); }
		// 0x82CEDC33687E1F50 0x2F28F0A6  
		static void _0x211c4ef450086857() { invoke<Void>(0x211C4EF450086857); } // 0x211C4EF450086857 0x801D0D86  
		static void _0xbf4f34a85ca2970c() { invoke<Void>(0xBF4F34A85CA2970C); } // 0xBF4F34A85CA2970C 0x317775DF  
		static void activate_frontend_menu(Hash menuhash, bool Toggle_Pause, int component)
		{
			invoke<Void>(0xEF01D36B9C9D0C7B, menuhash, Toggle_Pause, component);
		} // 0xEF01D36B9C9D0C7B 0x01D83872  
		static void restart_frontend_menu(Hash menuHash, int p1) { invoke<Void>(0x10706DC6AD2D49C0, menuHash, p1); }
		// 0x10706DC6AD2D49C0 0xB07DAF98  
		static Hash _get_current_frontend_menu() { return invoke<Hash>(0x2309595AD6145265); }
		// 0x2309595AD6145265 0x33D6868F  
		static void set_pause_menu_active(bool toggle) { invoke<Void>(0xDF47FC56C71569CF, toggle); }
		// 0xDF47FC56C71569CF 0x1DCD878E  
		static void disable_frontend_this_frame() { invoke<Void>(0x6D3465A73092F0E6); }
		// 0x6D3465A73092F0E6 0xD86A029E  
		static void _0xba751764f0821256() { invoke<Void>(0xBA751764F0821256); } // 0xBA751764F0821256 0x7F349900  
		static void _0xcc3fdded67bcfc63() { invoke<Void>(0xCC3FDDED67BCFC63); } // 0xCC3FDDED67BCFC63 0x630CD8EE  
		static void set_frontend_active(bool active) { invoke<Void>(0x745711A75AB09277, active); }
		// 0x745711A75AB09277 0x81E1AD32  
		static bool is_pause_menu_active() { return invoke<bool>(0xB0034A223497FFCB); }
		// 0xB0034A223497FFCB 0xD3600591  
		static Any _0x2f057596f2bd0061() { return invoke<Any>(0x2F057596F2BD0061); } // 0x2F057596F2BD0061 0xC85C4487  
		static int get_pause_menu_state() { return invoke<int>(0x272ACD84970869C5); } // 0x272ACD84970869C5 0x92F50134  
		static Vector3 _0x5bff36d6ed83e0ae() { return invoke<Vector3>(0x5BFF36D6ED83E0AE); } // 0x5BFF36D6ED83E0AE  
		static bool is_pause_menu_restarting() { return invoke<bool>(0x1C491717107431C7); }
		// 0x1C491717107431C7 0x3C4CF4D9  
		static void _log_debug_info(const char* p0) { invoke<Void>(0x2162C446DFDF38FD, p0); }
		// 0x2162C446DFDF38FD 0x2DFD35C7  
		static void _0x77f16b447824da6c(Any p0) { invoke<Void>(0x77F16B447824DA6C, p0); }
		// 0x77F16B447824DA6C 0x0A89336C  
		static void _0xcdca26e80faecb8f() { invoke<Void>(0xCDCA26E80FAECB8F); } // 0xCDCA26E80FAECB8F 0xC84BE309  
		static void _add_frontend_menu_context(Hash hash) { invoke<Void>(0xDD564BDD0472C936, hash); }
		// 0xDD564BDD0472C936 0x9FE8FD5E  
		static void object_decal_toggle(Hash hash) { invoke<Void>(0x444D8CF241EC25C5, hash); }
		// 0x444D8CF241EC25C5 0x0029046E  
		static bool _0x84698ab38d0c6636(Hash hash) { return invoke<bool>(0x84698AB38D0C6636, hash); }
		// 0x84698AB38D0C6636 0xC51BC42F  
		static Any _0x2a25adc48f87841f() { return invoke<Any>(0x2A25ADC48F87841F); } // 0x2A25ADC48F87841F 0x016D7AF9  
		static Any _0xde03620f8703a9df() { return invoke<Any>(0xDE03620F8703A9DF); } // 0xDE03620F8703A9DF  
		static Any _0x359af31a4b52f5ed() { return invoke<Any>(0x359AF31A4B52F5ED); } // 0x359AF31A4B52F5ED  
		static Any _0x13c4b962653a5280() { return invoke<Any>(0x13C4B962653A5280); } // 0x13C4B962653A5280  
		static bool _0xc8e1071177a23be5(Any* p0, Any* p1, Any* p2)
		{
			return invoke<bool>(0xC8E1071177A23BE5, p0, p1, p2);
		} // 0xC8E1071177A23BE5  
		static void enable_deathblood_seethrough(bool p0) { invoke<Void>(0x4895BDEA16E7C080, p0); }
		// 0x4895BDEA16E7C080 0x15B24768  
		static void _0xc78e239ac5b2ddb9(bool p0, Any p1, Any p2) { invoke<Void>(0xC78E239AC5B2DDB9, p0, p1, p2); }
		// 0xC78E239AC5B2DDB9 0x6C67131A  
		static void _0xf06ebb91a81e09e3(bool p0) { invoke<Void>(0xF06EBB91A81E09E3, p0); }
		// 0xF06EBB91A81E09E3 0x11D09737  
		static Any _0x3bab9a4e4f2ff5c7() { return invoke<Any>(0x3BAB9A4E4F2FF5C7); } // 0x3BAB9A4E4F2FF5C7 0xD3BF3ABD  
		static void _0xec9264727eec0f28() { invoke<Void>(0xEC9264727EEC0F28); } // 0xEC9264727EEC0F28 0xC06B763D  
		static void _0x14621bb1df14e2b2() { invoke<Void>(0x14621BB1DF14E2B2); } // 0x14621BB1DF14E2B2 0xB9392CE7  
		static Any _0x66e7cb63c97b7d20() { return invoke<Any>(0x66E7CB63C97B7D20); } // 0x66E7CB63C97B7D20 0x92DAFA78  
		static Any _0x593feae1f73392d4() { return invoke<Any>(0x593FEAE1F73392D4); } // 0x593FEAE1F73392D4 0x22CA9F2A  
		static Any _0x4e3cd0ef8a489541() { return invoke<Any>(0x4E3CD0EF8A489541); } // 0x4E3CD0EF8A489541 0xDA7951A2  
		static Any _0xf284ac67940c6812() { return invoke<Any>(0xF284AC67940C6812); } // 0xF284AC67940C6812 0x7D95AFFF  
		static Any _0x2e22fefa0100275e() { return invoke<Any>(0x2E22FEFA0100275E); } // 0x2E22FEFA0100275E 0x96863460  
		static void _0x0cf54f20de43879c(Any p0) { invoke<Void>(0x0CF54F20DE43879C, p0); } // 0x0CF54F20DE43879C  
		static void _0x36c1451a88a09630(Any* p0, Any* p1) { invoke<Void>(0x36C1451A88A09630, p0, p1); }
		// 0x36C1451A88A09630 0x8543AAC8  
		static void _0x7e17be53e1aaabaf(int* p0, int* p1, int* p2) { invoke<Void>(0x7E17BE53E1AAABAF, p0, p1, p2); }
		// 0x7E17BE53E1AAABAF 0x6025AA2F  
		static bool _0xa238192f33110615(int* p0, int* p1, int* p2)
		{
			return invoke<bool>(0xA238192F33110615, p0, p1, p2);
		} // 0xA238192F33110615 0x46794EB2  
		static bool set_userids_uihidden(Any p0, Any* p1) { return invoke<bool>(0xEF4CED81CEBEDC6D, p0, p1); }
		// 0xEF4CED81CEBEDC6D 0x4370999E  
		static bool _0xca6b2f7ce32ab653(Any p0, Any* p1, Any p2)
		{
			return invoke<bool>(0xCA6B2F7CE32AB653, p0, p1, p2);
		} // 0xCA6B2F7CE32AB653  
		static bool _0x90a6526cf0381030(Any p0, Any* p1, Any p2, Any p3)
		{
			return invoke<bool>(0x90A6526CF0381030, p0, p1, p2, p3);
		} // 0x90A6526CF0381030 0xD6CC4766  
		static bool _0x24a49beaf468dc90(Any p0, Any* p1, Any p2, Any p3, Any p4)
		{
			return invoke<bool>(0x24A49BEAF468DC90, p0, p1, p2, p3, p4);
		} // 0x24A49BEAF468DC90  
		static bool _0x5fbd7095fe7ae57f(Any p0, float* p1) { return invoke<bool>(0x5FBD7095FE7AE57F, p0, p1); }
		// 0x5FBD7095FE7AE57F 0x51972B04  
		static bool _0x8f08017f9d7c47bd(Any p0, Any* p1, Any p2)
		{
			return invoke<bool>(0x8F08017F9D7C47BD, p0, p1, p2);
		} // 0x8F08017F9D7C47BD  
		static bool _0x052991e59076e4e4(Hash p0, Any* p1) { return invoke<bool>(0x052991E59076E4E4, p0, p1); }
		// 0x052991E59076E4E4 0xD43BB56D  
		static void clear_ped_in_pause_menu() { invoke<Void>(0x5E62BE5DC58E9E06); } // 0x5E62BE5DC58E9E06 0x28058ACF  
		static void give_ped_to_pause_menu(Ped ped, int p1) { invoke<Void>(0xAC0BFBDC3BE00E14, ped, p1); }
		// 0xAC0BFBDC3BE00E14 0x2AD2C9CE  
		static void _0x3ca6050692bc61b0(bool p0) { invoke<Void>(0x3CA6050692BC61B0, p0); }
		// 0x3CA6050692BC61B0 0x127310EB  
		static void _0xecf128344e9ff9f1(bool p0) { invoke<Void>(0xECF128344E9FF9F1, p0); }
		// 0xECF128344E9FF9F1 0x8F45D327  
		static void _show_social_club_legal_screen() { invoke<Void>(0x805D7CBB36FD6C4C); }
		// 0x805D7CBB36FD6C4C 0x19FCBBB2  
		static Any _0xf13fe2a80c05c561() { return invoke<Any>(0xF13FE2A80C05C561); } // 0xF13FE2A80C05C561 0x850690FF  
		static int _0x6f72cd94f7b5b68c() { return invoke<int>(0x6F72CD94F7B5B68C); } // 0x6F72CD94F7B5B68C 0x9D4934F4  
		static void _0x75d3691713c3b05a() { invoke<Void>(0x75D3691713C3B05A); } // 0x75D3691713C3B05A 0x57218529  
		static void _0xd2b32be3fc1626c6() { invoke<Void>(0xD2B32BE3FC1626C6); } // 0xD2B32BE3FC1626C6 0x5F86AA39  
		static void _0x9e778248d6685fe0(const char* p0) { invoke<Void>(0x9E778248D6685FE0, p0); }
		// 0x9E778248D6685FE0 0x7AD67C95  
		static bool is_social_club_active() { return invoke<bool>(0xC406BE343FC4B9AF); }
		// 0xC406BE343FC4B9AF 0xD4DA14EF  
		static void _0x1185a8087587322c(bool p0) { invoke<Void>(0x1185A8087587322C, p0); } // 0x1185A8087587322C  
		static void _0x8817605c2ba76200() { invoke<Void>(0x8817605C2BA76200); } // 0x8817605C2BA76200  
		static bool _is_text_chat_active() { return invoke<bool>(0xB118AF58B5F332A1); } // 0xB118AF58B5F332A1  
		static void _abort_text_chat() { invoke<Void>(0x1AC8F4AD40E22127); } // 0x1AC8F4AD40E22127  
		static void _set_text_chat_unk(bool p0) { invoke<Void>(0x1DB21A44B09E8BA3, p0); } // 0x1DB21A44B09E8BA3  
		static void _0xcef214315d276fd1(bool p0) { invoke<Void>(0xCEF214315D276FD1, p0); }
		// 0xCEF214315D276FD1 0xFF06772A  
		static void _set_ped_ai_blip(int pedHandle, bool showViewCones)
		{
			invoke<Void>(0xD30C50DF888D58B5, pedHandle, showViewCones);
		} // 0xD30C50DF888D58B5 0x96C4C4DD  
		static bool does_ped_have_ai_blip(Ped ped) { return invoke<bool>(0x15B8ECF844EE67ED, ped); }
		// 0x15B8ECF844EE67ED 0x3BE1257F  
		static void _set_ai_blip_type(Ped ped, int type) { invoke<Void>(0xE52B8E7F85D39A08, ped, type); }
		// 0xE52B8E7F85D39A08 0xD8E31B1A  
		static void hide_special_ability_lockon_operation(Any p0, bool p1) { invoke<Void>(0x3EED80DFF7325CAA, p0, p1); }
		// 0x3EED80DFF7325CAA 0x872C2CFB  
		static void _is_ai_blip_always_shown(Ped ped, bool flag) { invoke<Void>(0x0C4BBF625CA98C4E, ped, flag); }
		// 0x0C4BBF625CA98C4E 0xFFDF46F0  
		static void _set_ai_blip_max_distance(Ped ped, float distance)
		{
			invoke<Void>(0x97C65887D4B37FA9, ped, distance);
		} // 0x97C65887D4B37FA9 0xF9DC2AF7  
		static Blip* _0x7cd934010e115c2c(Ped ped) { return invoke<Blip*>(0x7CD934010E115C2C, ped); }
		// 0x7CD934010E115C2C 0x06349065  
		static Blip _get_ai_blip(Ped ped) { return invoke<Blip>(0x56176892826A4FE8, ped); }
		// 0x56176892826A4FE8 0xCA52CF43  
		static Any _0xa277800a9eae340e() { return invoke<Any>(0xA277800A9EAE340E); } // 0xA277800A9EAE340E  
		static void _0x2632482fd6b9ab87() { invoke<Void>(0x2632482FD6B9AB87); } // 0x2632482FD6B9AB87  
		static void _set_director_mode(bool toggle) { invoke<Void>(0x808519373FD336A3, toggle); } // 0x808519373FD336A3  
		static void _0x04655f9d075d0ae5(bool p0) { invoke<Void>(0x04655F9D075D0AE5, p0); } // 0x04655F9D075D0AE5  
	}

	namespace graphics
	{
		static void set_debug_lines_and_spheres_drawing_active(bool enabled)
		{
			invoke<Void>(0x175B6BFC15CDD0C5, enabled);
		} // 0x175B6BFC15CDD0C5 0x1418CA37  
		static void draw_debug_line(float x1, float y1, float z1, float x2, float y2, float z2, int red, int green,
			int blue, int alpha)
		{
			invoke<Void>(0x7FDFADE676AA3CB0, x1, y1, z1, x2, y2, z2, red, green, blue, alpha);
		} // 0x7FDFADE676AA3CB0 0xABF783AB  
		static void draw_debug_line_with_two_colours(float x1, float y1, float z1, float x2, float y2, float z2, int r1,
			int g1, int b1, int r2, int g2, int b2, int alpha1, int alpha2)
		{
			invoke<Void>(0xD8B9A8AC5608FF94, x1, y1, z1, x2, y2, z2, r1, g1, b1, r2, g2, b2, alpha1, alpha2);
		} // 0xD8B9A8AC5608FF94 0xE8BFF632  
		static void draw_debug_sphere(float x, float y, float z, float radius, int red, int green, int blue, int alpha)
		{
			invoke<Void>(0xAAD68E1AB39DA632, x, y, z, radius, red, green, blue, alpha);
		} // 0xAAD68E1AB39DA632 0x304D0EEF  
		static void draw_debug_box(float x1, float y1, float z1, float x2, float y2, float z2, int red, int green,
			int blue, int alpha)
		{
			invoke<Void>(0x083A2CA4F2E573BD, x1, y1, z1, x2, y2, z2, red, green, blue, alpha);
		} // 0x083A2CA4F2E573BD 0x8524A848  
		static void draw_debug_cross(float x, float y, float z, float size, int red, int green, int blue, int alpha)
		{
			invoke<Void>(0x73B1189623049839, x, y, z, size, red, green, blue, alpha);
		} // 0x73B1189623049839 0xB6DF3709  
		static void draw_debug_text(const char* text, float x, float y, float z, int red, int green, int blue,
			int alpha)
		{
			invoke<Void>(0x3903E216620488E8, text, x, y, z, red, green, blue, alpha);
		} // 0x3903E216620488E8 0x269B006F  
		static void draw_debug_text_2d(const char* text, float x, float y, float z, int red, int green, int blue,
			int alpha)
		{
			invoke<Void>(0xA3BB2E9555C05A8F, text, x, y, z, red, green, blue, alpha);
		} // 0xA3BB2E9555C05A8F 0x528B973B  
		static void draw_line(float x1, float y1, float z1, float x2, float y2, float z2, int red, int green, int blue,
			int alpha)
		{
			invoke<Void>(0x6B7256074AE34680, x1, y1, z1, x2, y2, z2, red, green, blue, alpha);
		} // 0x6B7256074AE34680 0xB3426BCC  
		static void draw_poly(float x1, float y1, float z1, float x2, float y2, float z2, float x3, float y3, float z3,
			int red, int green, int blue, int alpha)
		{
			invoke<Void>(0xAC26716048436851, x1, y1, z1, x2, y2, z2, x3, y3, z3, red, green, blue, alpha);
		} // 0xAC26716048436851 0xABD19253  
		static void draw_box(float x1, float y1, float z1, float x2, float y2, float z2, int red, int green, int blue,
			int alpha)
		{
			invoke<Void>(0xD3A9971CADAC7252, x1, y1, z1, x2, y2, z2, red, green, blue, alpha);
		} // 0xD3A9971CADAC7252 0xCD4D9DD5  
		static void _0x23ba6b0c2ad7b0d3(bool p0) { invoke<Void>(0x23BA6B0C2AD7B0D3, p0); }
		// 0x23BA6B0C2AD7B0D3 0xC44C2F44  
		static Any _0x1dd2139a9a20dce8() { return invoke<Any>(0x1DD2139A9A20DCE8); } // 0x1DD2139A9A20DCE8 0xBA9AD458  
		static Any _0x90a78ecaa4e78453() { return invoke<Any>(0x90A78ECAA4E78453); } // 0x90A78ECAA4E78453 0xADBBA287  
		static void _0x0a46af8a78dc5e0a() { invoke<Void>(0x0A46AF8A78DC5E0A); } // 0x0A46AF8A78DC5E0A 0x9E553002  
		static bool _0x4862437a486f91b0(Any* p0, Any p1, Any p2, Any p3)
		{
			return invoke<bool>(0x4862437A486F91B0, p0, p1, p2, p3);
		} // 0x4862437A486F91B0 0x56C1E488  
		static int _0x1670f8d05056f257(Any* p0) { return invoke<int>(0x1670F8D05056F257, p0); }
		// 0x1670F8D05056F257 0x226B08EA  
		static Any _0x7fa5d82b8f58ec06() { return invoke<Any>(0x7FA5D82B8F58EC06); } // 0x7FA5D82B8F58EC06 0x1F3CADB0  
		static Any _0x5b0316762afd4a64() { return invoke<Any>(0x5B0316762AFD4A64); } // 0x5B0316762AFD4A64 0xA9DC8558  
		static void _0x346ef3ecaaab149e() { invoke<Void>(0x346EF3ECAAAB149E); } // 0x346EF3ECAAAB149E 0x88EAF398  
		static Any _0xa67c35c56eb1bd9d() { return invoke<Any>(0xA67C35C56EB1BD9D); } // 0xA67C35C56EB1BD9D 0x47B0C137  
		static Any _0x0d6ca79eeebd8ca3() { return invoke<Any>(0x0D6CA79EEEBD8CA3); } // 0x0D6CA79EEEBD8CA3 0x65376C9B  
		static void _0xd801cc02177fa3f1() { invoke<Void>(0xD801CC02177FA3F1); } // 0xD801CC02177FA3F1 0x9CBA682A  
		static void _0x1bbc135a4d25edde(bool p0) { invoke<Void>(0x1BBC135A4D25EDDE, p0); } // 0x1BBC135A4D25EDDE  
		static Any _0x3dec726c25a11bac(int p0) { return invoke<Any>(0x3DEC726C25A11BAC, p0); }
		// 0x3DEC726C25A11BAC 0x3B15D33C  
		static Any _0x0c0c4e81e1ac60a0() { return invoke<Any>(0x0C0C4E81E1AC60A0); } // 0x0C0C4E81E1AC60A0 0xEC5D0317  
		static bool _0x759650634f07b6b4(Any p0) { return invoke<bool>(0x759650634F07B6B4, p0); }
		// 0x759650634F07B6B4 0x25D569EB  
		static Any _0xcb82a0bf0e3e3265(Any p0) { return invoke<Any>(0xCB82A0BF0E3E3265, p0); }
		// 0xCB82A0BF0E3E3265 0xCFCDC518  
		static void _0x6a12d88881435dca() { invoke<Void>(0x6A12D88881435DCA); } // 0x6A12D88881435DCA 0x108F36CC  
		static void _0x1072f115dab0717e(bool p0, bool p1) { invoke<Void>(0x1072F115DAB0717E, p0, p1); }
		// 0x1072F115DAB0717E 0xE9F2B68F  
		static int get_maximum_number_of_photos() { return invoke<int>(0x34D23450F028B0BF); }
		// 0x34D23450F028B0BF 0x727AA63F  
		static int _get_maximum_number_of_photos_2() { return invoke<int>(0xDC54A7AF8B3A14EF); }
		// 0xDC54A7AF8B3A14EF 0x239272BD  
		static int _get_number_of_photos() { return invoke<int>(0x473151EBC762C6DA); } // 0x473151EBC762C6DA 0x21DBF0C9  
		static Any _0x2a893980e96b659a(Any p0) { return invoke<Any>(0x2A893980E96B659A, p0); }
		// 0x2A893980E96B659A 0x199FABF0  
		static Any _0xf5bed327cea362b1(Any p0) { return invoke<Any>(0xF5BED327CEA362B1, p0); }
		// 0xF5BED327CEA362B1 0x596B900D  
		static void _0x4af92acd3141d96c() { invoke<Void>(0x4AF92ACD3141D96C); } // 0x4AF92ACD3141D96C 0xC9EF81ED  
		static Any _0xe791df1f73ed2c8b(Any p0) { return invoke<Any>(0xE791DF1F73ED2C8B, p0); }
		// 0xE791DF1F73ED2C8B 0x9D84554C  
		static Any _0xec72c258667be5ea(Any p0) { return invoke<Any>(0xEC72C258667BE5EA, p0); }
		// 0xEC72C258667BE5EA 0x9C106AD9  
		static int _return_two(Any p0) { return invoke<int>(0x40AFB081F8ADD4EE, p0); } // 0x40AFB081F8ADD4EE 0x762E5C5F  
		static void _draw_light_with_range_and_shadow(float x, float y, float z, int r, int g, int b, float range,
			float intensity, float shadow)
		{
			invoke<Void>(0xF49E9A9716A04595, x, y, z, r, g, b, range, intensity, shadow);
		} // 0xF49E9A9716A04595  
		static void draw_light_with_range(float posX, float posY, float posZ, int colorR, int colorG, int colorB,
			float range, float intensity)
		{
			invoke<Void>(0xF2A1B2771A01DBD4, posX, posY, posZ, colorR, colorG, colorB, range, intensity);
		} // 0xF2A1B2771A01DBD4 0x6A396E9A  
		static void draw_spot_light(float posX, float posY, float posZ, float dirX, float dirY, float dirZ, int colorR,
			int colorG, int colorB, float distance, float brightness, float hardness,
			float radius, float falloff)
		{
			invoke<Void>(0xD0F64B265C8C8B33, posX, posY, posZ, dirX, dirY, dirZ, colorR, colorG, colorB, distance,
				brightness, hardness, radius, falloff);
		} // 0xD0F64B265C8C8B33 0xBDBC410C  
		static void _draw_spot_light_with_shadow(float posX, float posY, float posZ, float dirX, float dirY, float dirZ,
			int colorR, int colorG, int colorB, float distance, float brightness,
			float roundness, float radius, float falloff, int shadowId)
		{
			invoke<Void>(0x5BCA583A583194DB, posX, posY, posZ, dirX, dirY, dirZ, colorR, colorG, colorB, distance,
				brightness, roundness, radius, falloff, shadowId);
		} // 0x5BCA583A583194DB 0x32BF9598  
		static void _0xc9b18b4619f48f7b(float p0) { invoke<Void>(0xC9B18B4619F48F7B, p0); }
		// 0xC9B18B4619F48F7B 0x93628786  
		static void _entity_description_text(Entity entity) { invoke<Void>(0xDEADC0DEDEADC0DE, entity); }
		// 0xDEADC0DEDEADC0DE  
		static void draw_marker(int type, float posX, float posY, float posZ, float dirX, float dirY, float dirZ,
			float rotX, float rotY, float rotZ, float scaleX, float scaleY, float scaleZ, int red,
			int green, int blue, int alpha, bool bobUpAndDown, bool faceCamera, int p19,
			bool rotate, const char* textureDict, const char* textureName, bool drawOnEnts)
		{
			invoke<Void>(0x28477EC23D892089, type, posX, posY, posZ, dirX, dirY, dirZ, rotX, rotY, rotZ, scaleX, scaleY,
				scaleZ, red, green, blue, alpha, bobUpAndDown, faceCamera, p19, rotate, textureDict,
				textureName, drawOnEnts);
		} // 0x28477EC23D892089 0x48D84A02  
		static int create_checkpoint(int type, float posX1, float posY1, float posZ1, float posX2, float posY2,
			float posZ2, float radius, int red, int green, int blue, int alpha, int reserved)
		{
			return invoke<int>(0x0134F0835AB6BFCB, type, posX1, posY1, posZ1, posX2, posY2, posZ2, radius, red, green,
				blue, alpha, reserved);
		} // 0x0134F0835AB6BFCB 0xF541B690  
		static void _set_checkpoint_scale(int checkpoint, float p0)
		{
			invoke<Void>(0x4B5B4DA5D79F1943, checkpoint, p0);
		} // 0x4B5B4DA5D79F1943 0x80151CCF  
		static void set_checkpoint_cylinder_height(int checkpoint, float nearHeight, float farHeight, float radius)
		{
			invoke<Void>(0x2707AAE9D9297D89, checkpoint, nearHeight, farHeight, radius);
		} // 0x2707AAE9D9297D89 0xFF0F9B22  
		static void set_checkpoint_rgba(int checkpoint, int red, int green, int blue, int alpha)
		{
			invoke<Void>(0x7167371E8AD747F7, checkpoint, red, green, blue, alpha);
		} // 0x7167371E8AD747F7 0xEF9C8CB3  
		static void _set_checkpoint_icon_rgba(int checkpoint, int red, int green, int blue, int alpha)
		{
			invoke<Void>(0xB9EA40907C680580, checkpoint, red, green, blue, alpha);
		} // 0xB9EA40907C680580 0xA5456DBB  
		static void _0xf51d36185993515d(int checkpoint, float posX, float posY, float posZ, float unkX, float unkY,
			float unkZ)
		{
			invoke<Void>(0xF51D36185993515D, checkpoint, posX, posY, posZ, unkX, unkY, unkZ);
		} // 0xF51D36185993515D 0x20EABD0F  
		static void _0x615d3925e87a3b26(int checkpoint) { invoke<Void>(0x615D3925E87A3B26, checkpoint); }
		// 0x615D3925E87A3B26 0x1E3A3126  
		static void delete_checkpoint(int checkpoint) { invoke<Void>(0xF5ED37F54CD4D52E, checkpoint); }
		// 0xF5ED37F54CD4D52E 0xB66CF3CA  
		static void _0x22a249a53034450a(bool p0) { invoke<Void>(0x22A249A53034450A, p0); }
		// 0x22A249A53034450A 0x932FDB81  
		static void _0xdc459cfa0cce245b(bool p0) { invoke<Void>(0xDC459CFA0CCE245B, p0); }
		// 0xDC459CFA0CCE245B 0x7E946E87  
		static void request_streamed_texture_dict(const char* textureDict, bool p1)
		{
			invoke<Void>(0xDFA2EF8E04127DD5, textureDict, p1);
		} // 0xDFA2EF8E04127DD5 0x4C9B035F  
		static bool has_streamed_texture_dict_loaded(const char* textureDict)
		{
			return invoke<bool>(0x0145F696AAAAD2E4, textureDict);
		} // 0x0145F696AAAAD2E4 0x3F436EEF  
		static void set_streamed_texture_dict_as_no_longer_needed(const char* textureDict)
		{
			invoke<Void>(0xBE2CACCF5A8AA805, textureDict);
		} // 0xBE2CACCF5A8AA805 0xF07DDA38  
		static void draw_rect(float x, float y, float width, float height, int r, int g, int b, int a)
		{
			invoke<Void>(0x3A618A217E5154F0, x, y, width, height, r, g, b, a);
		} // 0x3A618A217E5154F0 0xDD2BFC77  
		static void _0xc6372ecd45d73bcd(bool p0) { invoke<Void>(0xC6372ECD45D73BCD, p0); }
		// 0xC6372ECD45D73BCD 0xF8FBCC25  
		static void _set_2d_layer(int layer) { invoke<Void>(0x61BB1D9B3A95D802, layer); }
		// 0x61BB1D9B3A95D802 0xADF81D24  
		static void _screen_draw_position_begin(int x, int y) { invoke<Void>(0xB8A850F20A067EB6, x, y); }
		// 0xB8A850F20A067EB6 0x228A2598  
		static void _screen_draw_position_end() { invoke<Void>(0xE3A3DB414A373DAB); } // 0xE3A3DB414A373DAB 0x3FE33BD6  
		static void _screen_draw_position_ratio(float x, float y, float p2, float p3)
		{
			invoke<Void>(0xF5A2C681787E579D, x, y, p2, p3);
		} // 0xF5A2C681787E579D 0x76C641E4  
		static void _0x6dd8f5aa635eb4b2(float p0, float p1, float* p2, float* p3)
		{
			invoke<Void>(0x6DD8F5AA635EB4B2, p0, p1, p2, p3);
		} // 0x6DD8F5AA635EB4B2  
		static float get_safe_zone_size() { return invoke<float>(0xBAF107B6BB2C97F0); }
		// 0xBAF107B6BB2C97F0 0x3F0D1A6F  
		static void draw_sprite(const char* textureDict, const char* textureName, float screenX, float screenY,
			float width, float height, float heading, int red, int green, int blue, int alpha)
		{
			invoke<Void>(0xE7FFAE5EBF23D890, textureDict, textureName, screenX, screenY, width, height, heading, red,
				green, blue, alpha);
		} // 0xE7FFAE5EBF23D890 0x1FEC16B0  
		static Any add_entity_icon(Entity entity, const char* icon)
		{
			return invoke<Any>(0x9CD43EEE12BF4DD0, entity, icon);
		} // 0x9CD43EEE12BF4DD0 0xF3027D21  
		static void set_entity_icon_visibility(Entity entity, bool toggle)
		{
			invoke<Void>(0xE0E8BEECCA96BA31, entity, toggle);
		} // 0xE0E8BEECCA96BA31 0xD1D2FD52  
		static void set_entity_icon_color(Entity entity, int red, int green, int blue, int alpha)
		{
			invoke<Void>(0x1D5F595CCAE2E238, entity, red, green, blue, alpha);
		} // 0x1D5F595CCAE2E238 0x6EE1E946  
		static void set_draw_origin(float x, float y, float z, Any p3)
		{
			invoke<Void>(0xAA0008F3BBB8F416, x, y, z, p3);
		} // 0xAA0008F3BBB8F416 0xE10198D5  
		static void clear_draw_origin() { invoke<Void>(0xFF0B610F6BE0D7AF); } // 0xFF0B610F6BE0D7AF 0xDD76B263  
		static void attach_tv_audio_to_entity(Entity entity) { invoke<Void>(0x845BAD77CC770633, entity); }
		// 0x845BAD77CC770633 0x784944DB  
		static void set_tv_audio_frontend(bool toggle) { invoke<Void>(0x113D2C5DC57E1774, toggle); }
		// 0x113D2C5DC57E1774 0x2E0DFA35  
		static int load_movie_mesh_set(const char* movieMeshSetName)
		{
			return invoke<int>(0xB66064452270E8F1, movieMeshSetName);
		} // 0xB66064452270E8F1 0x9627905C  
		static void release_movie_mesh_set(int movieMeshSet) { invoke<Void>(0xEB119AA014E89183, movieMeshSet); }
		// 0xEB119AA014E89183 0x4FA5501D  
		static Any _0x9b6e70c5ceef4eeb(Any p0) { return invoke<Any>(0x9B6E70C5CEEF4EEB, p0); }
		// 0x9B6E70C5CEEF4EEB 0x9D5D9B38  
		static void get_screen_resolution(int* x, int* y) { invoke<Void>(0x888D57E407E63624, x, y); }
		// 0x888D57E407E63624 0x29F3572F  
		static void _get_active_screen_resolution(int* x, int* y) { invoke<Void>(0x873C9F3104101DD3, x, y); }
		// 0x873C9F3104101DD3  
		static float _get_aspect_ratio(bool b) { return invoke<float>(0xF1307EF624A80D87, b); } // 0xF1307EF624A80D87  
		static Any _0xb2ebe8cbc58b90e9() { return invoke<Any>(0xB2EBE8CBC58B90E9); } // 0xB2EBE8CBC58B90E9  
		static bool get_is_widescreen() { return invoke<bool>(0x30CF4BDA4FCB1905); } // 0x30CF4BDA4FCB1905 0xEC717AEF  
		static bool get_is_hidef() { return invoke<bool>(0x84ED31191CC5D2C9); } // 0x84ED31191CC5D2C9 0x1C340359  
		static void _0xefabc7722293da7c() { invoke<Void>(0xEFABC7722293DA7C); } // 0xEFABC7722293DA7C  
		static void set_nightvision(bool toggle) { invoke<Void>(0x18F621F7A5B1F85D, toggle); }
		// 0x18F621F7A5B1F85D 0xD1E5565F  
		static Any _0x35fb78dc42b7bd21() { return invoke<Any>(0x35FB78DC42B7BD21); } // 0x35FB78DC42B7BD21  
		static bool _is_nightvision_active() { return invoke<bool>(0x2202A3F42C8E5F79); }
		// 0x2202A3F42C8E5F79 0x62619061  
		static void _0xef398beee4ef45f9(bool p0) { invoke<Void>(0xEF398BEEE4EF45F9, p0); } // 0xEF398BEEE4EF45F9  
		static void set_noiseoveride(bool toggle) { invoke<Void>(0xE787BF1C5CF823C9, toggle); }
		// 0xE787BF1C5CF823C9 0xD576F5DD  
		static void set_noisinessoveride(float value) { invoke<Void>(0xCB6A7C3BB17A0C67, value); }
		// 0xCB6A7C3BB17A0C67 0x046B62D9  
		static bool get_screen_coord_from_world_coord(float worldX, float worldY, float worldZ, float* screenX,
			float* screenY)
		{
			return invoke<bool>(0x34E82F05DF2974F5, worldX, worldY, worldZ, screenX, screenY);
		} // 0x34E82F05DF2974F5 0x1F950E4B  
		static Vector3 get_texture_resolution(const char* textureDict, const char* textureName)
		{
			return invoke<Vector3>(0x35736EE65BD00C11, textureDict, textureName);
		} // 0x35736EE65BD00C11 0x096DAA4D  
		static void _0xe2892e7e55d7073a(float p0) { invoke<Void>(0xE2892E7E55D7073A, p0); }
		// 0xE2892E7E55D7073A 0x455F1084  
		static void set_flash(float p0, float p1, float fadeIn, float duration, float fadeOut)
		{
			invoke<Void>(0x0AB84296FED9CFC6, p0, p1, fadeIn, duration, fadeOut);
		} // 0x0AB84296FED9CFC6 0x7E55A1EE  
		static void _0x3669f1b198dcaa4f() { invoke<Void>(0x3669F1B198DCAA4F); } // 0x3669F1B198DCAA4F 0x0DCC0B8B  
		static void _set_blackout(bool enable) { invoke<Void>(0x1268615ACE24D504, enable); }
		// 0x1268615ACE24D504 0xAA2A0EAF  
		static void _0xc35a6d07c93802b2() { invoke<Void>(0xC35A6D07C93802B2); } // 0xC35A6D07C93802B2  
		static Object create_tracked_point() { return invoke<Object>(0xE2C9439ED45DEA60); }
		// 0xE2C9439ED45DEA60 0x3129C31A  
		static void set_tracked_point_info(Object point, float x, float y, float z, float radius)
		{
			invoke<Void>(0x164ECBB3CF750CB0, point, x, y, z, radius);
		} // 0x164ECBB3CF750CB0 0x28689AA4  
		static bool is_tracked_point_visible(Object point) { return invoke<bool>(0xC45CCDAAC9221CA8, point); }
		// 0xC45CCDAAC9221CA8 0x0BFC4F64  
		static void destroy_tracked_point(Object point) { invoke<Void>(0xB25DC90BAD56CA42, point); }
		// 0xB25DC90BAD56CA42 0x14AC675F  
		static Any _0xbe197eaa669238f4(Any p0, Any p1, Any p2, Any p3)
		{
			return invoke<Any>(0xBE197EAA669238F4, p0, p1, p2, p3);
		} // 0xBE197EAA669238F4  
		static void _0x61f95e5bb3e0a8c6(Any p0) { invoke<Void>(0x61F95E5BB3E0A8C6, p0); } // 0x61F95E5BB3E0A8C6  
		static void _0xae51bc858f32ba66(Any p0, float p1, float p2, float p3, float p4)
		{
			invoke<Void>(0xAE51BC858F32BA66, p0, p1, p2, p3, p4);
		} // 0xAE51BC858F32BA66  
		static void _0x649c97d52332341a(Any p0) { invoke<Void>(0x649C97D52332341A, p0); } // 0x649C97D52332341A  
		static Any _0x2c42340f916c5930(Any p0) { return invoke<Any>(0x2C42340F916C5930, p0); } // 0x2C42340F916C5930  
		static void _0x14fc5833464340a8() { invoke<Void>(0x14FC5833464340A8); } // 0x14FC5833464340A8  
		static void _0x0218ba067d249dea() { invoke<Void>(0x0218BA067D249DEA); } // 0x0218BA067D249DEA  
		static void _0x1612c45f9e3e0d44() { invoke<Void>(0x1612C45F9E3E0D44); } // 0x1612C45F9E3E0D44  
		static void _0x5debd9c4dc995692() { invoke<Void>(0x5DEBD9C4DC995692); } // 0x5DEBD9C4DC995692  
		static void _0x6d955f6a9e0295b1(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6)
		{
			invoke<Void>(0x6D955F6A9E0295B1, p0, p1, p2, p3, p4, p5, p6);
		} // 0x6D955F6A9E0295B1  
		static void _0x302c91ab2d477f7e() { invoke<Void>(0x302C91AB2D477F7E); } // 0x302C91AB2D477F7E  
		static void _0x03fc694ae06c5a20() { invoke<Void>(0x03FC694AE06C5A20); } // 0x03FC694AE06C5A20 0x48F16186  
		static void _0xd2936cab8b58fcbd(Any p0, bool p1, float p2, float p3, float p4, float p5, bool p6, float p7)
		{
			invoke<Void>(0xD2936CAB8B58FCBD, p0, p1, p2, p3, p4, p5, p6, p7);
		} // 0xD2936CAB8B58FCBD  
		static void _0x5f0f3f56635809ef(float p0) { invoke<Void>(0x5F0F3F56635809EF, p0); }
		// 0x5F0F3F56635809EF 0x13D4ABC0  
		static void _0x5e9daf5a20f15908(float p0) { invoke<Void>(0x5E9DAF5A20F15908, p0); }
		// 0x5E9DAF5A20F15908 0xD2157428  
		static void _0x36f6626459d91457(float p0) { invoke<Void>(0x36F6626459D91457, p0); }
		// 0x36F6626459D91457 0xC07C64C9  
		static void _set_far_shadows_suppressed(bool toggle) { invoke<Void>(0x80ECBC0C856D3B0B, toggle); }
		// 0x80ECBC0C856D3B0B 0xFE903D0F  
		static void _0x25fc3e33a31ad0c9(bool p0) { invoke<Void>(0x25FC3E33A31AD0C9, p0); } // 0x25FC3E33A31AD0C9  
		static void _0xb11d94bc55f41932(const char* p0) { invoke<Void>(0xB11D94BC55F41932, p0); }
		// 0xB11D94BC55F41932 0xDE10BA1F  
		static void _0x27cb772218215325() { invoke<Void>(0x27CB772218215325); } // 0x27CB772218215325  
		static void _0x6ddbf9dffc4ac080(bool p0) { invoke<Void>(0x6DDBF9DFFC4AC080, p0); }
		// 0x6DDBF9DFFC4AC080 0x9F470BE3  
		static void _0xd39d13c9febf0511(bool p0) { invoke<Void>(0xD39D13C9FEBF0511, p0); }
		// 0xD39D13C9FEBF0511 0x4A124267  
		static void _0x02ac28f3a01fa04a(float p0) { invoke<Void>(0x02AC28F3A01FA04A, p0); }
		// 0x02AC28F3A01FA04A 0xB19B2764  
		static void _0x0ae73d8df3a762b2(bool p0) { invoke<Void>(0x0AE73D8DF3A762B2, p0); }
		// 0x0AE73D8DF3A762B2 0x342FA2B4  
		static void _0xa51c4b86b71652ae(bool p0) { invoke<Void>(0xA51C4B86B71652AE, p0); }
		// 0xA51C4B86B71652AE 0x5D3BFFC9  
		static void _0x312342e1a4874f3f(float p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7,
			bool p8)
		{
			invoke<Void>(0x312342E1A4874F3F, p0, p1, p2, p3, p4, p5, p6, p7, p8);
		} // 0x312342E1A4874F3F 0xD9653728  
		static void _0x2485d34e50a22e84(float p0, float p1, float p2) { invoke<Void>(0x2485D34E50A22E84, p0, p1, p2); }
		// 0x2485D34E50A22E84 0x72BA8A14  
		static void _0x12995f2e53ffa601(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8, int p9,
			int p10, int p11)
		{
			invoke<Void>(0x12995F2E53FFA601, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11);
		} // 0x12995F2E53FFA601 0x804F444C  
		static void _0xdbaa5ec848ba2d46(Any p0, Any p1) { invoke<Void>(0xDBAA5EC848BA2D46, p0, p1); }
		// 0xDBAA5EC848BA2D46 0xBB1A1294  
		static void _0xc0416b061f2b7e5e(bool p0) { invoke<Void>(0xC0416B061F2B7E5E, p0); }
		// 0xC0416B061F2B7E5E 0x1A1A72EF  
		static void _0xb1bb03742917a5d6(int type, float xPos, float yPos, float zPos, float p4, int red, int green,
			int blue, int alpha)
		{
			invoke<Void>(0xB1BB03742917A5D6, type, xPos, yPos, zPos, p4, red, green, blue, alpha);
		} // 0xB1BB03742917A5D6 0x3BB12B75  
		static void _0x9cfdd90b2b844bf7(float p0, float p1, float p2, float p3, float p4)
		{
			invoke<Void>(0x9CFDD90B2B844BF7, p0, p1, p2, p3, p4);
		} // 0x9CFDD90B2B844BF7 0x4EA70FB4  
		static void _0x06f761ea47c1d3ed(bool p0) { invoke<Void>(0x06F761EA47C1D3ED, p0); }
		// 0x06F761EA47C1D3ED 0x0D830DC7  
		static Any _0xa4819f5e23e2ffad() { return invoke<Any>(0xA4819F5E23E2FFAD); } // 0xA4819F5E23E2FFAD 0xA08B46AD  
		static Vector3 _0xa4664972a9b8f8ba(Any p0) { return invoke<Vector3>(0xA4664972A9B8F8BA, p0); }
		// 0xA4664972A9B8F8BA 0xECD470F0  
		static void set_seethrough(bool toggle) { invoke<Void>(0x7E08924259E08CE0, toggle); }
		// 0x7E08924259E08CE0 0x74D4995C  
		static bool _is_seethrough_active() { return invoke<bool>(0x44B80ABAB9D80BD3); }
		// 0x44B80ABAB9D80BD3 0x1FE547F2  
		static void _0xd7d0b00177485411(Any p0, float p1) { invoke<Void>(0xD7D0B00177485411, p0, p1); }
		// 0xD7D0B00177485411 0x654F0287  
		static void _0xb3c641f3630bf6da(float p0) { invoke<Void>(0xB3C641F3630BF6DA, p0); }
		// 0xB3C641F3630BF6DA 0xF6B837F0  
		static Any _0xe59343e9e96529e7() { return invoke<Any>(0xE59343E9E96529E7); } // 0xE59343E9E96529E7 0xD906A3A9  
		static void _0xe63d7c6eececb66b(bool p0) { invoke<Void>(0xE63D7C6EECECB66B, p0); }
		// 0xE63D7C6EECECB66B 0xD34A6CBA  
		static void _0xe3e2c1b4c59dbc77(int unk) { invoke<Void>(0xE3E2C1B4C59DBC77, unk); }
		// 0xE3E2C1B4C59DBC77 0xD8CC7221  
		static bool _transition_to_blurred(float transitionTime)
		{
			return invoke<bool>(0xA328A24AAA6B7FDC, transitionTime);
		} // 0xA328A24AAA6B7FDC 0x5604B890  
		static bool _transition_from_blurred(float transitionTime)
		{
			return invoke<bool>(0xEFACC8AEF94430D5, transitionTime);
		} // 0xEFACC8AEF94430D5 0x46617502  
		static void _0xde81239437e8c5a8() { invoke<Void>(0xDE81239437E8C5A8); } // 0xDE81239437E8C5A8 0xDB7AECDA  
		static float is_particle_fx_delayed_blink() { return invoke<float>(0x5CCABFFCA31DDE33); }
		// 0x5CCABFFCA31DDE33 0xEA432A94  
		static Any _0x7b226c785a52a0a9() { return invoke<Any>(0x7B226C785A52A0A9); } // 0x7B226C785A52A0A9 0x926B8734  
		static void _set_frozen_rendering_disabled(bool enabled) { invoke<Void>(0xDFC252D8A3E15AB7, enabled); }
		// 0xDFC252D8A3E15AB7 0x30ADE541  
		static bool _0xeb3dac2c86001e5e() { return invoke<bool>(0xEB3DAC2C86001E5E); } // 0xEB3DAC2C86001E5E  
		static void _0xe1c8709406f2c41c() { invoke<Void>(0xE1C8709406F2C41C); } // 0xE1C8709406F2C41C 0x0113EAE4  
		static void _0x851cd923176eba7c() { invoke<Void>(0x851CD923176EBA7C); } // 0x851CD923176EBA7C 0xDCBA251B  
		static void _0xba3d65906822bed5(bool p0, bool p1, float p2, float p3, float p4, float p5)
		{
			invoke<Void>(0xBA3D65906822BED5, p0, p1, p2, p3, p4, p5);
		} // 0xBA3D65906822BED5 0x513D444B  
		static bool _0x7ac24eab6d74118d(bool p0) { return invoke<bool>(0x7AC24EAB6D74118D, p0); }
		// 0x7AC24EAB6D74118D 0xB2410EAB  
		static Any _0xbcedb009461da156() { return invoke<Any>(0xBCEDB009461DA156); } // 0xBCEDB009461DA156 0x5AB94128  
		static bool _0x27feb5254759cde3(const char* textureDict, bool p1)
		{
			return invoke<bool>(0x27FEB5254759CDE3, textureDict, p1);
		} // 0x27FEB5254759CDE3 0xD63FCB3E  
		static int start_particle_fx_non_looped_at_coord(const char* effectName, float xPos, float yPos, float zPos,
			float xRot, float yRot, float zRot, float scale, bool xAxis,
			bool yAxis, bool zAxis)
		{
			return invoke<int>(0x25129531F77B9ED3, effectName, xPos, yPos, zPos, xRot, yRot, zRot, scale, xAxis, yAxis,
				zAxis);
		} // 0x25129531F77B9ED3 0xDD79D679  
		static bool _start_particle_fx_non_looped_at_coord_2(const char* effectName, float xPos, float yPos, float zPos,
			float xRot, float yRot, float zRot, float scale,
			bool xAxis, bool yAxis, bool zAxis)
		{
			return invoke<bool>(0xF56B8137DF10135D, effectName, xPos, yPos, zPos, xRot, yRot, zRot, scale, xAxis, yAxis,
				zAxis);
		} // 0xF56B8137DF10135D 0x633F8C48  
		static bool start_particle_fx_non_looped_on_ped_bone(const char* effectName, Ped ped, float offsetX,
			float offsetY, float offsetZ, float rotX, float rotY,
			float rotZ, int boneIndex, float scale, bool axisX,
			bool axisY, bool axisZ)
		{
			return invoke<bool>(0x0E7E72961BA18619, effectName, ped, offsetX, offsetY, offsetZ, rotX, rotY, rotZ,
				boneIndex, scale, axisX, axisY, axisZ);
		} // 0x0E7E72961BA18619 0x53DAEF4E  
		static bool _start_particle_fx_non_looped_on_ped_bone_2(const char* effectName, Ped ped, float offsetX,
			float offsetY, float offsetZ, float rotX, float rotY,
			float rotZ, int boneIndex, float scale, bool axisX,
			bool axisY, bool axisZ)
		{
			return invoke<bool>(0xA41B6A43642AC2CF, effectName, ped, offsetX, offsetY, offsetZ, rotX, rotY, rotZ,
				boneIndex, scale, axisX, axisY, axisZ);
		} // 0xA41B6A43642AC2CF 0x161780C1  
		static bool start_particle_fx_non_looped_on_entity(const char* effectName, Entity entity, float offsetX,
			float offsetY, float offsetZ, float rotX, float rotY,
			float rotZ, float scale, bool axisX, bool axisY, bool axisZ)
		{
			return invoke<bool>(0x0D53A3B8DA0809D2, effectName, entity, offsetX, offsetY, offsetZ, rotX, rotY, rotZ,
				scale, axisX, axisY, axisZ);
		} // 0x0D53A3B8DA0809D2 0x9604DAD4  
		static bool _start_particle_fx_non_looped_on_entity_2(const char* effectName, Entity entity, float offsetX,
			float offsetY, float offsetZ, float rotX, float rotY,
			float rotZ, float scale, bool axisX, bool axisY,
			bool axisZ)
		{
			return invoke<bool>(0xC95EB1DB6E92113D, effectName, entity, offsetX, offsetY, offsetZ, rotX, rotY, rotZ,
				scale, axisX, axisY, axisZ);
		} // 0xC95EB1DB6E92113D  
		static void set_particle_fx_non_looped_colour(float r, float g, float b)
		{
			invoke<Void>(0x26143A59EF48B262, r, g, b);
		} // 0x26143A59EF48B262 0x7B689E20  
		static void set_particle_fx_non_looped_alpha(float alpha) { invoke<Void>(0x77168D722C58B2FC, alpha); }
		// 0x77168D722C58B2FC 0x497EAFF2  
		static void _0x8cde909a0370bb3a(bool p0) { invoke<Void>(0x8CDE909A0370BB3A, p0); } // 0x8CDE909A0370BB3A  
		static int start_particle_fx_looped_at_coord(const char* effectName, float x, float y, float z, float xRot,
			float yRot, float zRot, float scale, bool xAxis, bool yAxis,
			bool zAxis, bool p11)
		{
			return invoke<int>(0xE184F4F0DC5910E7, effectName, x, y, z, xRot, yRot, zRot, scale, xAxis, yAxis, zAxis,
				p11);
		} // 0xE184F4F0DC5910E7 0xD348E3E6  
		static int start_particle_fx_looped_on_ped_bone(const char* effectName, Ped ped, float xOffset, float yOffset,
			float zOffset, float xRot, float yRot, float zRot,
			int boneIndex, float scale, bool xAxis, bool yAxis, bool zAxis)
		{
			return invoke<int>(0xF28DA9F38CD1787C, effectName, ped, xOffset, yOffset, zOffset, xRot, yRot, zRot,
				boneIndex, scale, xAxis, yAxis, zAxis);
		} // 0xF28DA9F38CD1787C 0xF8FC196F  
		static int start_particle_fx_looped_on_entity(const char* effectName, Entity entity, float xOffset,
			float yOffset, float zOffset, float xRot, float yRot, float zRot,
			float scale, bool xAxis, bool yAxis, bool zAxis)
		{
			return invoke<int>(0x1AE42C1660FD6517, effectName, entity, xOffset, yOffset, zOffset, xRot, yRot, zRot,
				scale, xAxis, yAxis, zAxis);
		} // 0x1AE42C1660FD6517 0x0D06FF62  
		static int _start_particle_fx_looped_on_entity_bone(const char* effectName, Entity entity, float xOffset,
			float yOffset, float zOffset, float xRot, float yRot,
			float zRot, int boneIndex, float scale, bool xAxis,
			bool yAxis, bool zAxis)
		{
			return invoke<int>(0xC6EB449E33977F0B, effectName, entity, xOffset, yOffset, zOffset, xRot, yRot, zRot,
				boneIndex, scale, xAxis, yAxis, zAxis);
		} // 0xC6EB449E33977F0B  
		static int _start_particle_fx_looped_on_entity_2(const char* effectName, Entity entity, float xOffset,
			float yOffset, float zOffset, float xRot, float yRot,
			float zRot, float scale, bool xAxis, bool yAxis, bool zAxis)
		{
			return invoke<int>(0x6F60E89A7B64EE1D, effectName, entity, xOffset, yOffset, zOffset, xRot, yRot, zRot,
				scale, xAxis, yAxis, zAxis);
		} // 0x6F60E89A7B64EE1D 0x110752B2  
		static int _start_particle_fx_looped_on_entity_bone_2(const char* effectName, Entity entity, float xOffset,
			float yOffset, float zOffset, float xRot, float yRot,
			float zRot, int boneIndex, float scale, bool xAxis,
			bool yAxis, bool zAxis)
		{
			return invoke<int>(0xDDE23F30CC5A0F03, effectName, entity, xOffset, yOffset, zOffset, xRot, yRot, zRot,
				boneIndex, scale, xAxis, yAxis, zAxis);
		} // 0xDDE23F30CC5A0F03  
		static void stop_particle_fx_looped(int ptfxHandle, bool p1)
		{
			invoke<Void>(0x8F75998877616996, ptfxHandle, p1);
		} // 0x8F75998877616996 0xD245455B  
		static void remove_particle_fx(int ptfxHandle, bool p1) { invoke<Void>(0xC401503DFE8D53CF, ptfxHandle, p1); }
		// 0xC401503DFE8D53CF 0x6BA48C7E  
		static void remove_particle_fx_from_entity(Entity entity) { invoke<Void>(0xB8FEAEEBCC127425, entity); }
		// 0xB8FEAEEBCC127425 0xCEDE52E9  
		static void remove_particle_fx_in_range(float X, float Y, float Z, float radius)
		{
			invoke<Void>(0xDD19FA1C6D657305, X, Y, Z, radius);
		} // 0xDD19FA1C6D657305 0x7EB8F275  
		static bool does_particle_fx_looped_exist(int ptfxHandle)
		{
			return invoke<bool>(0x74AFEF0D2E1E409B, ptfxHandle);
		} // 0x74AFEF0D2E1E409B 0xCBF91D2A  
		static void set_particle_fx_looped_offsets(int ptfxHandle, float x, float y, float z, float rotX, float rotY,
			float rotZ)
		{
			invoke<Void>(0xF7DDEBEC43483C43, ptfxHandle, x, y, z, rotX, rotY, rotZ);
		} // 0xF7DDEBEC43483C43 0x641F7790  
		static void set_particle_fx_looped_evolution(int ptfxHandle, const char* propertyName, float amount, bool Id)
		{
			invoke<Void>(0x5F0C4B5B1C393BE2, ptfxHandle, propertyName, amount, Id);
		} // 0x5F0C4B5B1C393BE2 0x1CBC1373  
		static void set_particle_fx_looped_colour(int ptfxHandle, float r, float g, float b, bool p4)
		{
			invoke<Void>(0x7F8F65877F88783B, ptfxHandle, r, g, b, p4);
		} // 0x7F8F65877F88783B 0x5219D530  
		static void set_particle_fx_looped_alpha(int ptfxHandle, float alpha)
		{
			invoke<Void>(0x726845132380142E, ptfxHandle, alpha);
		} // 0x726845132380142E 0x5ED49BE1  
		static void set_particle_fx_looped_scale(int ptfxHandle, float scale)
		{
			invoke<Void>(0xB44250AAA456492D, ptfxHandle, scale);
		} // 0xB44250AAA456492D 0x099B8B49  
		static void _set_particle_fx_looped_range(int ptfxHandle, float range)
		{
			invoke<Void>(0xDCB194B85EF7B541, ptfxHandle, range);
		} // 0xDCB194B85EF7B541 0x233DE879  
		static void set_particle_fx_cam_inside_vehicle(bool p0) { invoke<Void>(0xEEC4047028426510, p0); }
		// 0xEEC4047028426510 0x19EC0001  
		static void set_particle_fx_cam_inside_nonplayer_vehicle(Any p0, bool p1)
		{
			invoke<Void>(0xACEE6F360FC1F6B6, p0, p1);
		} // 0xACEE6F360FC1F6B6 0x6B125A02  
		static void set_particle_fx_shootout_boat(Any p0) { invoke<Void>(0x96EF97DAEB89BEF5, p0); }
		// 0x96EF97DAEB89BEF5 0xD938DEE0  
		static void set_particle_fx_blood_scale(bool p0) { invoke<Void>(0x5F6DF3D92271E8A1, p0); }
		// 0x5F6DF3D92271E8A1 0x18136DE0  
		static void enable_clown_blood_vfx(bool toggle) { invoke<Void>(0xD821490579791273, toggle); }
		// 0xD821490579791273 0xC61C75E9  
		static void enable_alien_blood_vfx(bool Toggle) { invoke<Void>(0x9DCE1F0F78260875, Toggle); }
		// 0x9DCE1F0F78260875 0xCE8B8748  
		static void _0x27e32866e9a5c416(float p0) { invoke<Void>(0x27E32866E9A5C416, p0); } // 0x27E32866E9A5C416  
		static void _0xbb90e12cac1dab25(float p0) { invoke<Void>(0xBB90E12CAC1DAB25, p0); } // 0xBB90E12CAC1DAB25  
		static void _0xca4ae345a153d573(bool p0) { invoke<Void>(0xCA4AE345A153D573, p0); } // 0xCA4AE345A153D573  
		static void _0x54e22ea2c1956a8d(float p0) { invoke<Void>(0x54E22EA2C1956A8D, p0); } // 0x54E22EA2C1956A8D  
		static void _0x949f397a288b28b3(float p0) { invoke<Void>(0x949F397A288B28B3, p0); } // 0x949F397A288B28B3  
		static void _0x9b079e5221d984d3(bool p0) { invoke<Void>(0x9B079E5221D984D3, p0); } // 0x9B079E5221D984D3  
		static void _use_particle_fx_asset_next_call(const char* name) { invoke<Void>(0x6C38AF3693A69A91, name); }
		// 0x6C38AF3693A69A91 0x9C720B61  
		static void _set_particle_fx_asset_old_to_new(const char* oldAsset, const char* newAsset)
		{
			invoke<Void>(0xEA1E2D93F6F75ED9, oldAsset, newAsset);
		} // 0xEA1E2D93F6F75ED9  
		static void _reset_particle_fx_asset_old_to_new(const char* name) { invoke<Void>(0x89C8553DD3274AAE, name); }
		// 0x89C8553DD3274AAE  
		static void _0xa46b73faa3460ae1(bool p0) { invoke<Void>(0xA46B73FAA3460AE1, p0); } // 0xA46B73FAA3460AE1  
		static void _0xf78b803082d4386f(float p0) { invoke<Void>(0xF78B803082D4386F, p0); } // 0xF78B803082D4386F  
		static void wash_decals_in_range(Any p0, Any p1, Any p2, Any p3, Any p4)
		{
			invoke<Void>(0x9C30613D50A6ADEF, p0, p1, p2, p3, p4);
		} // 0x9C30613D50A6ADEF 0xDEECBC57  
		static void wash_decals_from_vehicle(Vehicle vehicle, float p1)
		{
			invoke<Void>(0x5B712761429DBC14, vehicle, p1);
		} // 0x5B712761429DBC14 0x2929F11A  
		static void fade_decals_in_range(Any p0, Any p1, Any p2, Any p3, Any p4)
		{
			invoke<Void>(0xD77EDADB0420E6E0, p0, p1, p2, p3, p4);
		} // 0xD77EDADB0420E6E0 0xF81E884A  
		static void remove_decals_in_range(float x, float y, float z, float range)
		{
			invoke<Void>(0x5D6B2D4830A67C62, x, y, z, range);
		} // 0x5D6B2D4830A67C62 0x06A619A0  
		static void remove_decals_from_object(Object obj) { invoke<Void>(0xCCF71CBDDF5B6CB9, obj); }
		// 0xCCF71CBDDF5B6CB9 0x8B67DCA7  
		static void remove_decals_from_object_facing(Object obj, float x, float y, float z)
		{
			invoke<Void>(0xA6F6F70FDC6D144C, obj, x, y, z);
		} // 0xA6F6F70FDC6D144C 0xF4999A55  
		static void remove_decals_from_vehicle(Vehicle vehicle) { invoke<Void>(0xE91F1B65F2B48D57, vehicle); }
		// 0xE91F1B65F2B48D57 0x831D06CA  
		static Object add_decal(int decalType, float posX, float posY, float posZ, float p4, float p5, float p6,
			float p7, float p8, float p9, float width, float height, float rCoef, float gCoef,
			float bCoef, float opacity, float timeout, bool p17, bool p18, bool p19)
		{
			return invoke<Object>(0xB302244A1839BDAD, decalType, posX, posY, posZ, p4, p5, p6, p7, p8, p9, width,
				height, rCoef, gCoef, bCoef, opacity, timeout, p17, p18, p19);
		} // 0xB302244A1839BDAD 0xEAD0C412  
		static Any add_petrol_decal(float x, float y, float z, float groundLvl, float width, float transparency)
		{
			return invoke<Any>(0x4F5212C7AD880DF8, x, y, z, groundLvl, width, transparency);
		} // 0x4F5212C7AD880DF8 0x1259DF42  
		static void _0x99ac7f0d8b9c893d(float p0) { invoke<Void>(0x99AC7F0D8B9C893D, p0); }
		// 0x99AC7F0D8B9C893D 0xE3938B0B  
		static void _0x967278682cb6967a(Any p0, Any p1, Any p2, Any p3)
		{
			invoke<Void>(0x967278682CB6967A, p0, p1, p2, p3);
		} // 0x967278682CB6967A 0xBAEC6ADD  
		static void _0x0a123435a26c36cd() { invoke<Void>(0x0A123435A26C36CD); } // 0x0A123435A26C36CD 0xCCCA6855  
		static void remove_decal(Object decal) { invoke<Void>(0xED3F346429CCD659, decal); }
		// 0xED3F346429CCD659 0xA4363188  
		static bool is_decal_alive(Object decal) { return invoke<bool>(0xC694D74949CAFD0C, decal); }
		// 0xC694D74949CAFD0C 0xCDD4A61A  
		static float get_decal_wash_level(int decal) { return invoke<float>(0x323F647679A09103, decal); }
		// 0x323F647679A09103 0x054448EF  
		static void _0xd9454b5752c857dc() { invoke<Void>(0xD9454B5752C857DC); } // 0xD9454B5752C857DC 0xEAB6417C  
		static void _0x27cfb1b1e078cb2d() { invoke<Void>(0x27CFB1B1E078CB2D); } // 0x27CFB1B1E078CB2D 0xC2703B88  
		static void _0x4b5cfc83122df602() { invoke<Void>(0x4B5CFC83122DF602); } // 0x4B5CFC83122DF602 0xA706E84D  
		static bool _0x2f09f7976c512404(float xCoord, float yCoord, float zCoord, float p3)
		{
			return invoke<bool>(0x2F09F7976C512404, xCoord, yCoord, zCoord, p3);
		} // 0x2F09F7976C512404 0x242C6A04  
		static void _add_decal_to_marker(int decalType, const char* textureDict, const char* textureName)
		{
			invoke<Void>(0x8A35C742130C6080, decalType, textureDict, textureName);
		} // 0x8A35C742130C6080 0x335695CF  
		static void _0xb7ed70c49521a61d(Any p0) { invoke<Void>(0xB7ED70C49521A61D, p0); }
		// 0xB7ED70C49521A61D 0x7B786555  
		static void move_vehicle_decals(Any p0, Any p1) { invoke<Void>(0x84C8D7C2D30D3280, p0, p1); }
		// 0x84C8D7C2D30D3280 0xCE9E6CF2  
		static bool _add_clan_decal_to_vehicle(Vehicle vehicle, Ped ped, int boneIndex, float x1, float x2, float x3,
			float y1, float y2, float y3, float z1, float z2, float z3, float scale,
			Any p13, int alpha)
		{
			return invoke<bool>(0x428BDCB9DA58DA53, vehicle, ped, boneIndex, x1, x2, x3, y1, y2, y3, z1, z2, z3, scale,
				p13, alpha);
		} // 0x428BDCB9DA58DA53 0x12077738  
		static void _0xd2300034310557e4(Vehicle vehicle, Any p1) { invoke<Void>(0xD2300034310557E4, vehicle, p1); }
		// 0xD2300034310557E4 0x667046A8  
		static int _0xfe26117a5841b2ff(Vehicle vehicle, Any p1) { return invoke<int>(0xFE26117A5841B2FF, vehicle, p1); }
		// 0xFE26117A5841B2FF 0x4F4D76E8  
		static bool _does_vehicle_have_decal(Vehicle vehicle, Any p1)
		{
			return invoke<bool>(0x060D935D3981A275, vehicle, p1);
		} // 0x060D935D3981A275 0x6D58F73B  
		static void _0x0e4299c549f0d1f1(bool p0) { invoke<Void>(0x0E4299C549F0D1F1, p0); }
		// 0x0E4299C549F0D1F1 0x9BABCBA4  
		static void _0x02369d5c8a51fdcf(bool p0) { invoke<Void>(0x02369D5C8A51FDCF, p0); }
		// 0x02369D5C8A51FDCF 0xFDF6D8DA  
		static void _0x46d1a61a21f566fc(float p0) { invoke<Void>(0x46D1A61A21F566FC, p0); }
		// 0x46D1A61A21F566FC 0x2056A015  
		static void _0x2a2a52824db96700(Any* p0) { invoke<Void>(0x2A2A52824DB96700, p0); }
		// 0x2A2A52824DB96700 0x0F486429  
		static void _0x1600fd8cf72ebc12(float p0) { invoke<Void>(0x1600FD8CF72EBC12, p0); }
		// 0x1600FD8CF72EBC12 0xD87CC710  
		static void _0xefb55e7c25d3b3be() { invoke<Void>(0xEFB55E7C25D3B3BE); } // 0xEFB55E7C25D3B3BE 0xE29EE145  
		static void _0xa44ff770dfbc5dae() { invoke<Void>(0xA44FF770DFBC5DAE); } // 0xA44FF770DFBC5DAE  
		static void disable_vehicle_distantlights(bool toggle) { invoke<Void>(0xC9F98AC1884E73A2, toggle); }
		// 0xC9F98AC1884E73A2 0x7CFAE36F  
		static void _0x03300b57fcac6ddb(bool p0) { invoke<Void>(0x03300B57FCAC6DDB, p0); }
		// 0x03300B57FCAC6DDB 0x60F72371  
		static void _0x98edf76a7271e4f2() { invoke<Void>(0x98EDF76A7271E4F2); } // 0x98EDF76A7271E4F2  
		static void _set_force_ped_footsteps_tracks(bool toggle) { invoke<Void>(0xAEEDAD1420C65CC0, toggle); }
		// 0xAEEDAD1420C65CC0  
		static void _set_force_vehicle_trails(bool toggle) { invoke<Void>(0x4CC7F0FEA5283FE0, toggle); }
		// 0x4CC7F0FEA5283FE0  
		static void _0xd7021272eb0a451e(const char* p0) { invoke<Void>(0xD7021272EB0A451E, p0); } // 0xD7021272EB0A451E  
		static void set_timecycle_modifier(const char* modifierName) { invoke<Void>(0x2C933ABF17A1DF41, modifierName); }
		// 0x2C933ABF17A1DF41 0xA81F3638  
		static void set_timecycle_modifier_strength(float strength) { invoke<Void>(0x82E7FFCD5B2326B3, strength); }
		// 0x82E7FFCD5B2326B3 0x458F4F45  
		static void set_transition_timecycle_modifier(const char* modifierName, float transition)
		{
			invoke<Void>(0x3BCF567485E1971C, modifierName, transition);
		} // 0x3BCF567485E1971C 0xBB2BA72A  
		static void _0x1cba05ae7bd7ee05(float p0) { invoke<Void>(0x1CBA05AE7BD7EE05, p0); }
		// 0x1CBA05AE7BD7EE05 0x56345F6B  
		static void clear_timecycle_modifier() { invoke<Void>(0x0F07E7745A236711); } // 0x0F07E7745A236711 0x8D8DF8EE  
		static int get_timecycle_modifier_index() { return invoke<int>(0xFDF3D97C674AFB66); }
		// 0xFDF3D97C674AFB66 0x594FEEC4  
		static Any _0x459fd2c8d0ab78bc() { return invoke<Any>(0x459FD2C8D0AB78BC); } // 0x459FD2C8D0AB78BC 0x03C44E4B  
		static void push_timecycle_modifier() { invoke<Void>(0x58F735290861E6B4); } // 0x58F735290861E6B4 0x7E082045  
		static void pop_timecycle_modifier() { invoke<Void>(0x3C8938D7D872211E); } // 0x3C8938D7D872211E 0x79D7D235  
		static void _0xbbf327ded94e4deb(const char* p0) { invoke<Void>(0xBBF327DED94E4DEB, p0); }
		// 0xBBF327DED94E4DEB 0x85BA15A4  
		static void _0xbdeb86f4d5809204(float p0) { invoke<Void>(0xBDEB86F4D5809204, p0); }
		// 0xBDEB86F4D5809204 0x9559BB38  
		static void _0xbf59707b3e5ed531(const char* p0) { invoke<Void>(0xBF59707B3E5ED531, p0); }
		// 0xBF59707B3E5ED531 0x554BA16E  
		static void _0x1a8e2c8b9cf4549c(Any* p0, Any* p1) { invoke<Void>(0x1A8E2C8B9CF4549C, p0, p1); }
		// 0x1A8E2C8B9CF4549C 0xE8F538B5  
		static void _0x15e33297c3e8dc60(Any p0) { invoke<Void>(0x15E33297C3E8DC60, p0); }
		// 0x15E33297C3E8DC60 0x805BAB08  
		static void _0x5096fd9ccb49056d(Any* p0) { invoke<Void>(0x5096FD9CCB49056D, p0); }
		// 0x5096FD9CCB49056D 0x908A335E  
		static void _0x92ccc17a7a2285da() { invoke<Void>(0x92CCC17A7A2285DA); } // 0x92CCC17A7A2285DA 0x6776720A  
		static Any _0xbb0527ec6341496d() { return invoke<Any>(0xBB0527EC6341496D); } // 0xBB0527EC6341496D  
		static void _0x2c328af17210f009(float p0) { invoke<Void>(0x2C328AF17210F009, p0); } // 0x2C328AF17210F009  
		static void _0x2bf72ad5b41aa739() { invoke<Void>(0x2BF72AD5B41AA739); } // 0x2BF72AD5B41AA739  
		static int request_scaleform_movie(const char* scaleformName)
		{
			return invoke<int>(0x11FE353CF9733E6F, scaleformName);
		} // 0x11FE353CF9733E6F 0xC67E3DCB  
		static int request_scaleform_movie_instance(const char* scaleformName)
		{
			return invoke<int>(0xC514489CFB8AF806, scaleformName);
		} // 0xC514489CFB8AF806 0x7CC8057D  
		static int _request_scaleform_movie_interactive(const char* scaleformName)
		{
			return invoke<int>(0xBD06C611BB9048C2, scaleformName);
		} // 0xBD06C611BB9048C2  
		static bool has_scaleform_movie_loaded(int scaleformHandle)
		{
			return invoke<bool>(0x85F01B8D5B90570E, scaleformHandle);
		} // 0x85F01B8D5B90570E 0xDDFB6448  
		static bool _has_named_scaleform_movie_loaded(const char* scaleformName)
		{
			return invoke<bool>(0x0C1C5D756FB5F337, scaleformName);
		} // 0x0C1C5D756FB5F337  
		static bool has_scaleform_container_movie_loaded_into_parent(int scaleformHandle)
		{
			return invoke<bool>(0x8217150E1217EBFD, scaleformHandle);
		} // 0x8217150E1217EBFD 0x1DFE8D8A  
		static void set_scaleform_movie_as_no_longer_needed(int* scaleformHandle)
		{
			invoke<Void>(0x1D132D614DD86811, scaleformHandle);
		} // 0x1D132D614DD86811 0x5FED3BA1  
		static void set_scaleform_movie_to_use_system_time(int scaleform, bool toggle)
		{
			invoke<Void>(0x6D8EB211944DCE08, scaleform, toggle);
		} // 0x6D8EB211944DCE08 0x18C9DE8D  
		static void draw_scaleform_movie(int scaleformHandle, float x, float y, float width, float height, int red,
			int green, int blue, int alpha, int unk)
		{
			invoke<Void>(0x54972ADAF0294A93, scaleformHandle, x, y, width, height, red, green, blue, alpha, unk);
		} // 0x54972ADAF0294A93 0x48DA6A58  
		static void draw_scaleform_movie_fullscreen(int scaleform, int red, int green, int blue, int alpha, int unk)
		{
			invoke<Void>(0x0DF606929C105BE1, scaleform, red, green, blue, alpha, unk);
		} // 0x0DF606929C105BE1 0x7B48E696  
		static void draw_scaleform_movie_fullscreen_masked(int scaleform1, int scaleform2, int red, int green, int blue,
			int alpha)
		{
			invoke<Void>(0xCF537FDE4FBD4CE5, scaleform1, scaleform2, red, green, blue, alpha);
		} // 0xCF537FDE4FBD4CE5 0x9C59FC06  
		static void draw_scaleform_movie_3d(int scaleform, float posX, float posY, float posZ, float rotX, float rotY,
			float rotZ, float p7, float sharpness, float p9, float scaleX, float scaleY,
			float scaleZ, Any p13)
		{
			invoke<Void>(0x87D51D72255D4E78, scaleform, posX, posY, posZ, rotX, rotY, rotZ, p7, sharpness, p9, scaleX,
				scaleY, scaleZ, p13);
		} // 0x87D51D72255D4E78 0xC4F63A89  
		static void _draw_scaleform_movie_3d_non_additive(int scaleform, float posX, float posY, float posZ, float rotX,
			float rotY, float rotZ, float p7, float p8, float p9,
			float scaleX, float scaleY, float scaleZ, Any p13)
		{
			invoke<Void>(0x1CE592FDC749D6F5, scaleform, posX, posY, posZ, rotX, rotY, rotZ, p7, p8, p9, scaleX, scaleY,
				scaleZ, p13);
		} // 0x1CE592FDC749D6F5 0x899933C8  
		static void call_scaleform_movie_method(int scaleform, const char* method)
		{
			invoke<Void>(0xFBD96D87AC96D533, scaleform, method);
		} // 0xFBD96D87AC96D533 0x7AB77B57  
		static void _call_scaleform_movie_function_float_params(int scaleform, const char* functionName, float param1,
			float param2, float param3, float param4, float param5)
		{
			invoke<Void>(0xD0837058AE2E4BEE, scaleform, functionName, param1, param2, param3, param4, param5);
		} // 0xD0837058AE2E4BEE 0x557EDA1D  
		static void _call_scaleform_movie_function_string_params(int scaleform, const char* functionName,
			const char* param1, const char* param2,
			const char* param3, const char* param4,
			const char* param5)
		{
			invoke<Void>(0x51BC1ED3CC44E8F7, scaleform, functionName, param1, param2, param3, param4, param5);
		} // 0x51BC1ED3CC44E8F7 0x91A7FCEB  
		static void _call_scaleform_movie_function_mixed_params(int scaleform, const char* functionName,
			float floatParam1, float floatParam2, float floatParam3,
			float floatParam4, float floatParam5,
			const char* stringParam1, const char* stringParam2,
			const char* stringParam3, const char* stringParam4,
			const char* stringParam5)
		{
			invoke<Void>(0xEF662D8D57E290B1, scaleform, functionName, floatParam1, floatParam2, floatParam3,
				floatParam4, floatParam5, stringParam1, stringParam2, stringParam3, stringParam4,
				stringParam5);
		} // 0xEF662D8D57E290B1 0x6EAF56DE  
		static bool _begin_scaleform_movie_method_hud_component(int hudComponent, const char* functionName)
		{
			return invoke<bool>(0x98C494FD5BDFBFD5, hudComponent, functionName);
		} // 0x98C494FD5BDFBFD5 0x5D66CE1E  
		static bool begin_scaleform_movie_method(int scaleform, const char* functionName)
		{
			return invoke<bool>(0xF6E48914C7A8694E, scaleform, functionName);
		} // 0xF6E48914C7A8694E 0x215ABBE8  
		static bool _begin_scaleform_movie_method_n(const char* functionName)
		{
			return invoke<bool>(0xAB58C27C2E6123C6, functionName);
		} // 0xAB58C27C2E6123C6 0xF6015178  
		static bool _begin_scaleform_movie_method_v(const char* functionName)
		{
			return invoke<bool>(0xB9449845F73F5E9C, functionName);
		} // 0xB9449845F73F5E9C 0x5E219B67  
		static void end_scaleform_movie_method() { invoke<Void>(0xC6796A8FFA375E53); } // 0xC6796A8FFA375E53 0x02DBF2D7  
		static int _end_scaleform_movie_method_return() { return invoke<int>(0xC50AA39A577AF886); }
		// 0xC50AA39A577AF886 0x2F38B526  
		static bool _get_scaleform_movie_function_return_bool(int method_return)
		{
			return invoke<bool>(0x768FF8961BA904D6, method_return);
		} // 0x768FF8961BA904D6 0x5CD7C3C0  
		static int _get_scaleform_movie_function_return_int(int method_return)
		{
			return invoke<int>(0x2DE7EFA66B906036, method_return);
		} // 0x2DE7EFA66B906036 0x2CFB0E6D  
		static const char* sitting_tv(int method_return)
		{
			return invoke<const char*>(0xE1E258829A885245, method_return);
		} // 0xE1E258829A885245 0x516862EB  
		static void _add_scaleform_movie_method_parameter_int(int value) { invoke<Void>(0xC3D0841A0CC546A6, value); }
		// 0xC3D0841A0CC546A6 0x716777CB  
		static void _add_scaleform_movie_method_parameter_float(float value)
		{
			invoke<Void>(0xD69736AAE04DB51A, value);
		} // 0xD69736AAE04DB51A 0x9A01FFDA  
		static void _add_scaleform_movie_method_parameter_bool(bool value) { invoke<Void>(0xC58424BA936EB458, value); }
		// 0xC58424BA936EB458 0x0D4AE8CB  
		static void begin_text_command_scaleform_string(const char* componentType)
		{
			invoke<Void>(0x80338406F3475E55, componentType);
		} // 0x80338406F3475E55 0x3AC9CB55  
		static void end_text_command_scaleform_string() { invoke<Void>(0x362E2D3FE93A9959); }
		// 0x362E2D3FE93A9959 0x386CE0B8  
		static void _end_text_command_scaleform_string_2() { invoke<Void>(0xAE4E8157D9ECF087); }
		// 0xAE4E8157D9ECF087 0x2E80DB52  
		static void _add_scaleform_movie_method_parameter_string(const char* value)
		{
			invoke<Void>(0xBA7148484BD90365, value);
		} // 0xBA7148484BD90365 0x4DAAD55B  
		static void _add_scaleform_movie_method_parameter_button_name(const char* button)
		{
			invoke<Void>(0xE83A3E3557A56640, button);
		} // 0xE83A3E3557A56640 0xCCBF0334  
		static bool _0x5e657ef1099edd65(int p0) { return invoke<bool>(0x5E657EF1099EDD65, p0); }
		// 0x5E657EF1099EDD65 0x91A081A1  
		static void _0xec52c631a1831c03(int p0) { invoke<Void>(0xEC52C631A1831C03, p0); }
		// 0xEC52C631A1831C03 0x83A9811D  
		static void _request_hud_scaleform(int hudComponent) { invoke<Void>(0x9304881D6F6537EA, hudComponent); }
		// 0x9304881D6F6537EA 0x7AF85862  
		static bool _has_hud_scaleform_loaded(int hudComponent)
		{
			return invoke<bool>(0xDF6E5987D2B4D140, hudComponent);
		} // 0xDF6E5987D2B4D140 0x79B43255  
		static void _0xf44a5456ac3f4f97(Any p0) { invoke<Void>(0xF44A5456AC3F4F97, p0); }
		// 0xF44A5456AC3F4F97 0x03D87600  
		static bool _0xd1c7cb175e012964(int scaleformHandle)
		{
			return invoke<bool>(0xD1C7CB175E012964, scaleformHandle);
		} // 0xD1C7CB175E012964 0xE9183D3A  
		static void set_tv_channel(int channel) { invoke<Void>(0xBAABBB23EB6E484E, channel); }
		// 0xBAABBB23EB6E484E 0x41A8A627  
		static int get_tv_channel() { return invoke<int>(0xFC1E275A90D39995); } // 0xFC1E275A90D39995 0x6B96145A  
		static void set_tv_volume(float volume) { invoke<Void>(0x2982BF73F66E9DDC, volume); }
		// 0x2982BF73F66E9DDC 0xF3504F4D  
		static float get_tv_volume() { return invoke<float>(0x2170813D3DD8661B); } // 0x2170813D3DD8661B 0x39555CF0  
		static void draw_tv_channel(float xPos, float yPos, float xScale, float yScale, float rotation, int red,
			int green, int blue, int alpha)
		{
			invoke<Void>(0xFDDC2B4ED3C69DF0, xPos, yPos, xScale, yScale, rotation, red, green, blue, alpha);
		} // 0xFDDC2B4ED3C69DF0 0x8129EF89  
		static void _load_tv_channel_sequence(int TV_Channel, const char* VideoSequence, bool Restart)
		{
			invoke<Void>(0xF7B38B8305F1FE8B, TV_Channel, VideoSequence, Restart);
		} // 0xF7B38B8305F1FE8B 0xB262DE67  
		static void _0x2201c576facaebe8(Any p0, const char* p1, Any p2)
		{
			invoke<Void>(0x2201C576FACAEBE8, p0, p1, p2);
		} // 0x2201C576FACAEBE8 0x78C4DCBE  
		static void _0xbeb3d46bb7f043c0(Any p0) { invoke<Void>(0xBEB3D46BB7F043C0, p0); }
		// 0xBEB3D46BB7F043C0 0xCBE7068F  
		static bool _load_tv_channel(Hash tvChannel) { return invoke<bool>(0x0AD973CA1E077B60, tvChannel); }
		// 0x0AD973CA1E077B60 0x4D1EB0FB  
		static void _0x74c180030fde4b69(bool p0) { invoke<Void>(0x74C180030FDE4B69, p0); }
		// 0x74C180030FDE4B69 0x796DE696  
		static void _0xd1c55b110e4df534(Any p0) { invoke<Void>(0xD1C55B110E4DF534, p0); }
		// 0xD1C55B110E4DF534 0xD99EC000  
		static void enable_movie_subtitles(bool toggle) { invoke<Void>(0x873FA65C778AD970, toggle); }
		// 0x873FA65C778AD970 0xC2DEBA3D  
		static bool _0xd3a10fc7fd8d98cd() { return invoke<bool>(0xD3A10FC7FD8D98CD); } // 0xD3A10FC7FD8D98CD 0xE40A0F1A  
		static bool _0xf1cea8a4198d8e9a(const char* p0) { return invoke<bool>(0xF1CEA8A4198D8E9A, p0); }
		// 0xF1CEA8A4198D8E9A 0x2E7D9B98  
		static bool _draw_showroom(const char* p0, Ped ped, int p2, float posX, float posY, float posZ)
		{
			return invoke<bool>(0x98C4FE6EC34154CA, p0, ped, p2, posX, posY, posZ);
		} // 0x98C4FE6EC34154CA 0x9A0E3BFE  
		static void _0x7a42b2e236e71415() { invoke<Void>(0x7A42B2E236E71415); } // 0x7A42B2E236E71415 0x431AA036  
		static void _0x108be26959a9d9bb(bool p0) { invoke<Void>(0x108BE26959A9D9BB, p0); }
		// 0x108BE26959A9D9BB 0x24A7A7F6  
		static void _0xa356990e161c9e65(bool p0) { invoke<Void>(0xA356990E161C9E65, p0); }
		// 0xA356990E161C9E65 0xA1CB6C94  
		static void _0x1c4fc5752bcd8e48(float p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7,
			float p8, float p9, float p10, float p11, float p12)
		{
			invoke<Void>(0x1C4FC5752BCD8E48, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12);
		} // 0x1C4FC5752BCD8E48 0x3B637AA7  
		static void _0x5ce62918f8d703c7(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8, int p9,
			int p10, int p11)
		{
			invoke<Void>(0x5CE62918F8D703C7, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11);
		} // 0x5CE62918F8D703C7 0xDF552973  
		static void _start_screen_effect(const char* effectName, int duration, bool looped)
		{
			invoke<Void>(0x2206BF9A37B7F724, effectName, duration, looped);
		} // 0x2206BF9A37B7F724 0x1D980479  
		static void _stop_screen_effect(const char* effectName) { invoke<Void>(0x068E835A1D0DC0E3, effectName); }
		// 0x068E835A1D0DC0E3 0x06BB5CDA  
		static bool _get_screen_effect_is_active(bool effectName)
		{
			return invoke<bool>(0x36AD3E690DA5ACEB, effectName);
		} // 0x36AD3E690DA5ACEB 0x089D5921  
		static void _stop_all_screen_effects() { invoke<Void>(0xB4EDDC19532BFB85); } // 0xB4EDDC19532BFB85 0x4E6D875B  
		static void _0xd2209be128b5418c(const char* graphicsName) { invoke<Void>(0xD2209BE128B5418C, graphicsName); }
		// 0xD2209BE128B5418C  
	}

	namespace stats
	{
		static Any stat_clear_slot_for_reload(int statSlot) { return invoke<Any>(0xEB0A72181D4AA4AD, statSlot); }
		// 0xEB0A72181D4AA4AD 0x84BDD475  
		static bool stat_load(int p0) { return invoke<bool>(0xA651443F437B1CE6, p0); } // 0xA651443F437B1CE6 0x9E5629F4  
		static bool stat_save(int p0, bool p1, int p2) { return invoke<bool>(0xE07BCA305B82D2FD, p0, p1, p2); }
		// 0xE07BCA305B82D2FD 0xE10A7CA4  
		static void _0x5688585e6d563cd8(Any p0) { invoke<Void>(0x5688585E6D563CD8, p0); }
		// 0x5688585E6D563CD8 0xC62406A6  
		static bool stat_load_pending(Any p0) { return invoke<bool>(0xA1750FFAFA181661, p0); }
		// 0xA1750FFAFA181661 0x4E9AC983  
		static Any stat_save_pending() { return invoke<Any>(0x7D3A583856F2C5AC); } // 0x7D3A583856F2C5AC 0xC3FD3822  
		static Any stat_save_pending_or_requested() { return invoke<Any>(0xBBB6AD006F1BBEA3); }
		// 0xBBB6AD006F1BBEA3 0xA3407CA3  
		static Any stat_delete_slot(Any p0) { return invoke<Any>(0x49A49BED12794D70, p0); }
		// 0x49A49BED12794D70 0x2F171B94  
		static bool stat_slot_is_loaded(Any p0) { return invoke<bool>(0x0D0A9F0E7BD91E3C, p0); }
		// 0x0D0A9F0E7BD91E3C 0x7A299C13  
		static bool _0x7f2c4cdf2e82df4c(Any p0) { return invoke<bool>(0x7F2C4CDF2E82DF4C, p0); }
		// 0x7F2C4CDF2E82DF4C 0x0BF0F4B2  
		static Any _0xe496a53ba5f50a56(Any p0) { return invoke<Any>(0xE496A53BA5F50A56, p0); }
		// 0xE496A53BA5F50A56 0xCE6B62B5  
		static void _0xf434a10ba01c37d0(bool p0) { invoke<Void>(0xF434A10BA01C37D0, p0); }
		// 0xF434A10BA01C37D0 0xCE7A2411  
		static bool _0x7e6946f68a38b74f(Any p0) { return invoke<bool>(0x7E6946F68A38B74F, p0); }
		// 0x7E6946F68A38B74F 0x22804C20  
		static void _0xa8733668d1047b51(Any p0) { invoke<Void>(0xA8733668D1047B51, p0); }
		// 0xA8733668D1047B51 0x395D18B1  
		static bool _0xecb41ac6ab754401() { return invoke<bool>(0xECB41AC6AB754401); } // 0xECB41AC6AB754401 0xED7000C8  
		static void _0x9b4bd21d69b1e609() { invoke<Void>(0x9B4BD21D69B1E609); } // 0x9B4BD21D69B1E609  
		static Any _0xc0e0d686ddfc6eae() { return invoke<Any>(0xC0E0D686DDFC6EAE); } // 0xC0E0D686DDFC6EAE 0x099FCC86  
		static bool stat_set_int(Hash statName, int value, bool save)
		{
			return invoke<bool>(0xB3271D7AB655B441, statName, value, save);
		} // 0xB3271D7AB655B441 0xC9CC1C5C  
		static bool stat_set_float(Hash statName, float value, bool save)
		{
			return invoke<bool>(0x4851997F37FE9B3C, statName, value, save);
		} // 0x4851997F37FE9B3C 0x6CEA96F2  
		static bool stat_set_bool(Hash statName, bool value, bool save)
		{
			return invoke<bool>(0x4B33C4243DE0C432, statName, value, save);
		} // 0x4B33C4243DE0C432 0x55D79DFB  
		static bool stat_set_gxt_label(Hash statName, const char* value, bool save)
		{
			return invoke<bool>(0x17695002FD8B2AE0, statName, value, save);
		} // 0x17695002FD8B2AE0 0xC1224AA7  
		static bool stat_set_date(Hash statName, Any* value, int numFields, bool save)
		{
			return invoke<bool>(0x2C29BFB64F4FCBE4, statName, value, numFields, save);
		} // 0x2C29BFB64F4FCBE4 0x36BE807B  
		static bool stat_set_string(Hash statName, const char* value, bool save)
		{
			return invoke<bool>(0xA87B2335D12531D7, statName, value, save);
		} // 0xA87B2335D12531D7 0xB1EF2E21  
		static bool stat_set_pos(Hash statName, float x, float y, float z, bool save)
		{
			return invoke<bool>(0xDB283FDE680FE72E, statName, x, y, z, save);
		} // 0xDB283FDE680FE72E 0x1192C9A3  
		static bool stat_set_masked_int(Hash statName, Any p1, Any p2, int p3, bool save)
		{
			return invoke<bool>(0x7BBB1B54583ED410, statName, p1, p2, p3, save);
		} // 0x7BBB1B54583ED410 0x2CBAA739  
		static bool stat_set_user_id(Hash statName, const char* value, bool save)
		{
			return invoke<bool>(0x8CDDF1E452BABE11, statName, value, save);
		} // 0x8CDDF1E452BABE11 0xDBE78ED7  
		static bool stat_set_current_posix_time(Hash statName, bool p1)
		{
			return invoke<bool>(0xC2F84B7F9C4D0C61, statName, p1);
		} // 0xC2F84B7F9C4D0C61 0xA286F015  
		static bool stat_get_int(Hash statHash, int* outValue, int p2)
		{
			return invoke<bool>(0x767FBC2AC802EF3D, statHash, outValue, p2);
		} // 0x767FBC2AC802EF3D 0x1C6FE43E  
		static bool stat_get_float(Hash statHash, float* outValue, Any p2)
		{
			return invoke<bool>(0xD7AE6C9C9C6AC54C, statHash, outValue, p2);
		} // 0xD7AE6C9C9C6AC54C 0xFCBDA612  
		static bool stat_get_bool(Hash statHash, bool* outValue, Any p2)
		{
			return invoke<bool>(0x11B5E6D2AE73F48E, statHash, outValue, p2);
		} // 0x11B5E6D2AE73F48E 0x28A3DD2B  
		static bool stat_get_date(Hash statHash, Any* p1, Any p2, Any p3)
		{
			return invoke<bool>(0x8B0FACEFC36C824B, statHash, p1, p2, p3);
		} // 0x8B0FACEFC36C824B 0xD762D16C  
		static const char* stat_get_string(Hash statHash, int p1)
		{
			return invoke<const char*>(0xE50384ACC2C3DB74, statHash, p1);
		} // 0xE50384ACC2C3DB74 0x10CE4BDE  
		static bool stat_get_pos(Any p0, Any* p1, Any* p2, Any* p3, Any p4)
		{
			return invoke<bool>(0x350F82CCB186AA1B, p0, p1, p2, p3, p4);
		} // 0x350F82CCB186AA1B 0xC846ECCE  
		static bool stat_get_masked_int(Any p0, Any* p1, Any p2, Any p3, Any p4)
		{
			return invoke<bool>(0x655185A06D9EEAAB, p0, p1, p2, p3, p4);
		} // 0x655185A06D9EEAAB 0xE9D9B70F  
		static const char* stat_get_user_id(Any p0) { return invoke<const char*>(0x2365C388E393BBE2, p0); }
		// 0x2365C388E393BBE2 0xE2E8B6BA  
		static const char* stat_get_license_plate(Hash statName)
		{
			return invoke<const char*>(0x5473D4195058B2E4, statName);
		} // 0x5473D4195058B2E4 0x1544B29F  
		static bool stat_set_license_plate(Hash statName, const char* str)
		{
			return invoke<bool>(0x69FF13266D7296DA, statName, str);
		} // 0x69FF13266D7296DA 0x3507D253  
		static void stat_increment(Hash statName, float value) { invoke<Void>(0x9B5A68C6489E9909, statName, value); }
		// 0x9B5A68C6489E9909 0xDFC5F71E  
		static bool _0x5a556b229a169402() { return invoke<bool>(0x5A556B229A169402); } // 0x5A556B229A169402 0x46F21343  
		static bool _0xb1d2bb1e1631f5b1() { return invoke<bool>(0xB1D2BB1E1631F5B1); } // 0xB1D2BB1E1631F5B1 0x02F283CE  
		static bool _0xbed9f5693f34ed17(Hash statName, int p1, float* outValue)
		{
			return invoke<bool>(0xBED9F5693F34ED17, statName, p1, outValue);
		} // 0xBED9F5693F34ED17 0xC4110917  
		static void _0x26d7399b9587fe89(int p0) { invoke<Void>(0x26D7399B9587FE89, p0); }
		// 0x26D7399B9587FE89 0x343B27E2  
		static void _0xa78b8fa58200da56(int p0) { invoke<Void>(0xA78B8FA58200DA56, p0); }
		// 0xA78B8FA58200DA56 0xE3247582  
		static int stat_get_number_of_days(Hash statName) { return invoke<int>(0xE0E854F5280FB769, statName); }
		// 0xE0E854F5280FB769 0xFD66A429  
		static int stat_get_number_of_hours(Hash statName) { return invoke<int>(0xF2D4B2FE415AAFC3, statName); }
		// 0xF2D4B2FE415AAFC3 0x9B431236  
		static int stat_get_number_of_minutes(Hash statName) { return invoke<int>(0x7583B4BE4C5A41B5, statName); }
		// 0x7583B4BE4C5A41B5 0x347B4436  
		static int stat_get_number_of_seconds(Hash statName) { return invoke<int>(0x2CE056FF3723F00B, statName); }
		// 0x2CE056FF3723F00B 0x2C1D6C31  
		static void _stat_set_profile_setting(int profileSetting, int value)
		{
			invoke<Void>(0x68F01422BE1D838F, profileSetting, value);
		} // 0x68F01422BE1D838F 0x24DD4929  
		static int _0xf4d8e7ac2a27758c(int p0) { return invoke<int>(0xF4D8E7AC2A27758C, p0); }
		// 0xF4D8E7AC2A27758C 0xDFC25D66  
		static int _0x94f12abf9c79e339(int p0) { return invoke<int>(0x94F12ABF9C79E339, p0); }
		// 0x94F12ABF9C79E339 0xCA160BCC  
		static Hash _get_pstat_bool_hash(int index, bool spStat, bool charStat, int character)
		{
			return invoke<Hash>(0x80C75307B1C42837, index, spStat, charStat, character);
		} // 0x80C75307B1C42837 0xB5BF87B2  
		static Hash _get_pstat_int_hash(int index, bool spStat, bool charStat, int character)
		{
			return invoke<Hash>(0x61E111E323419E07, index, spStat, charStat, character);
		} // 0x61E111E323419E07 0x1F938864  
		static Hash _get_tupstat_bool_hash(int index, bool spStat, bool charStat, int character)
		{
			return invoke<Hash>(0xC4BB08EE7907471E, index, spStat, charStat, character);
		} // 0xC4BB08EE7907471E 0x3F8E893B  
		static Hash _get_tupstat_int_hash(int index, bool spStat, bool charStat, int character)
		{
			return invoke<Hash>(0xD16C2AD6B8E32854, index, spStat, charStat, character);
		} // 0xD16C2AD6B8E32854 0xFB93C5A2  
		static Hash _get_ngstat_bool_hash(int index, bool spStat, bool charStat, int character, const char* section)
		{
			return invoke<Hash>(0xBA52FF538ED2BC71, index, spStat, charStat, character, section);
		} // 0xBA52FF538ED2BC71  
		static Hash _get_ngstat_int_hash(int index, bool spStat, bool charStat, int character, const char* section)
		{
			return invoke<Hash>(0x2B4CDCA6F07FF3DA, index, spStat, charStat, character, section);
		} // 0x2B4CDCA6F07FF3DA  
		static bool stat_get_bool_masked(Hash statName, int mask, int p2)
		{
			return invoke<bool>(0x10FE3F1B79F9B071, statName, mask, p2);
		} // 0x10FE3F1B79F9B071 0x6ACE1B7D  
		static bool stat_set_bool_masked(Hash statName, bool value, int mask, bool save)
		{
			return invoke<bool>(0x5BC62EC1937B9E5B, statName, value, mask, save);
		} // 0x5BC62EC1937B9E5B 0x7842C4D6  
		static void _0x5009dfd741329729(const char* p0, Any p1) { invoke<Void>(0x5009DFD741329729, p0, p1); }
		// 0x5009DFD741329729 0x61ECC465  
		static void playstats_npc_invite(Any* p0) { invoke<Void>(0x93054C88E6AA7C44, p0); }
		// 0x93054C88E6AA7C44 0x598C06F3  
		static void playstats_award_xp(Any p0, Any p1, Any p2) { invoke<Void>(0x46F917F6B4128FE4, p0, p1, p2); }
		// 0x46F917F6B4128FE4 0x8770017B  
		static void playstats_rank_up(Any p0) { invoke<Void>(0xC7F2DE41D102BFB4, p0); }
		// 0xC7F2DE41D102BFB4 0x56AFB9F5  
		static void _0x098760c7461724cd() { invoke<Void>(0x098760C7461724CD); } // 0x098760C7461724CD 0x896CDF8D  
		static void _0xa071e0ed98f91286(Any p0, Any p1) { invoke<Void>(0xA071E0ED98F91286, p0, p1); }
		// 0xA071E0ED98F91286 0x1A66945F  
		static void _0xc5be134ec7ba96a0(Any p0, Any p1, Any p2, Any p3, Any p4)
		{
			invoke<Void>(0xC5BE134EC7BA96A0, p0, p1, p2, p3, p4);
		} // 0xC5BE134EC7BA96A0 0xC960E161  
		static void playstats_mission_started(Any* p0, Any p1, Any p2, bool p3)
		{
			invoke<Void>(0xC19A2925C34D2231, p0, p1, p2, p3);
		} // 0xC19A2925C34D2231 0x3AAB699C  
		static void playstats_mission_over(Any* p0, Any p1, Any p2, bool p3, bool p4, bool p5)
		{
			invoke<Void>(0x7C4BB33A8CED7324, p0, p1, p2, p3, p4, p5);
		} // 0x7C4BB33A8CED7324 0x5B90B5FF  
		static void playstats_mission_checkpoint(Any* p0, Any p1, Any p2, Any p3)
		{
			invoke<Void>(0xC900596A63978C1D, p0, p1, p2, p3);
		} // 0xC900596A63978C1D 0xCDC52280  
		static void _0x71862b1d855f32e1(Any* p0, Any p1, Any p2, Any p3)
		{
			invoke<Void>(0x71862B1D855F32E1, p0, p1, p2, p3);
		} // 0x71862B1D855F32E1 0xAC2C7C63  
		static void _0x121fb4dddc2d5291(Any p0, Any p1, Any p2, float p3)
		{
			invoke<Void>(0x121FB4DDDC2D5291, p0, p1, p2, p3);
		} // 0x121FB4DDDC2D5291 0x413539BC  
		static void playstats_race_checkpoint(Any p0, Any p1, Any p2, Any p3, Any p4)
		{
			invoke<Void>(0x9C375C315099DDE4, p0, p1, p2, p3, p4);
		} // 0x9C375C315099DDE4 0x580D5508  
		static bool _0x6dee77aff8c21bd1(Any* p0, Any* p1) { return invoke<bool>(0x6DEE77AFF8C21BD1, p0, p1); }
		// 0x6DEE77AFF8C21BD1 0x489E27E7  
		static void playstats_match_started(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6)
		{
			invoke<Void>(0xBC80E22DED931E3D, p0, p1, p2, p3, p4, p5, p6);
		} // 0xBC80E22DED931E3D 0x2BDE85C1  
		static void playstats_shop_item(Any p0, Any p1, Any p2, Any p3, Any p4)
		{
			invoke<Void>(0x176852ACAAC173D1, p0, p1, p2, p3, p4);
		} // 0x176852ACAAC173D1 0xA4746384  
		static void _0x1cae5d2e3f9a07f0(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5)
		{
			invoke<Void>(0x1CAE5D2E3F9A07F0, p0, p1, p2, p3, p4, p5);
		} // 0x1CAE5D2E3F9A07F0 0x6602CED6  
		static void _playstats_ambient_mission_crate_created(float p0, float p1, float p2)
		{
			invoke<Void>(0xAFC7E5E075A96F46, p0, p1, p2);
		} // 0xAFC7E5E075A96F46  
		static void _0xcb00196b31c39eb1(Any p0, Any p1, Any p2, Any p3)
		{
			invoke<Void>(0xCB00196B31C39EB1, p0, p1, p2, p3);
		} // 0xCB00196B31C39EB1 0x759E0EC9  
		static void _0x2b69f5074c894811(Any p0, Any p1, Any p2, Any p3)
		{
			invoke<Void>(0x2B69F5074C894811, p0, p1, p2, p3);
		} // 0x2B69F5074C894811 0x62073DF7  
		static void _0x7eec2a316c250073(Any p0, Any p1, Any p2) { invoke<Void>(0x7EEC2A316C250073, p0, p1, p2); }
		// 0x7EEC2A316C250073 0x30558CFD  
		static void _0xaddd1c754e2e2914(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9)
		{
			invoke<Void>(0xADDD1C754E2E2914, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9);
		} // 0xADDD1C754E2E2914 0x06CE3692  
		static void _0x79ab33f0fbfac40c(Any p0) { invoke<Void>(0x79AB33F0FBFAC40C, p0); }
		// 0x79AB33F0FBFAC40C 0x8D5C7B37  
		static void playstats_website_visited(Hash scaleformHash, int p1)
		{
			invoke<Void>(0xDDF24D535060F811, scaleformHash, p1);
		} // 0xDDF24D535060F811 0x37D152BB  
		static void playstats_friend_activity(Any p0, Any p1) { invoke<Void>(0x0F71DE29AB2258F1, p0, p1); }
		// 0x0F71DE29AB2258F1 0xD1FA1BDB  
		static void playstats_oddjob_done(Any p0, Any p1, Any p2) { invoke<Void>(0x69DEA3E9DB727B4C, p0, p1, p2); }
		// 0x69DEA3E9DB727B4C 0xFE14A8EA  
		static void playstats_prop_change(Any p0, Any p1, Any p2, Any p3)
		{
			invoke<Void>(0xBA739D6D5A05D6E7, p0, p1, p2, p3);
		} // 0xBA739D6D5A05D6E7 0x25740A1D  
		static void playstats_cloth_change(Any p0, Any p1, Any p2, Any p3, Any p4)
		{
			invoke<Void>(0x34B973047A2268B9, p0, p1, p2, p3, p4);
		} // 0x34B973047A2268B9 0x3AFF9E58  
		static void _0xe95c8a1875a02ca4(Any p0, Any p1, Any p2) { invoke<Void>(0xE95C8A1875A02CA4, p0, p1, p2); }
		// 0xE95C8A1875A02CA4 0x79716890  
		static void playstats_cheat_applied(const char* cheat) { invoke<Void>(0x6058665D72302D3F, cheat); }
		// 0x6058665D72302D3F 0x345166F3  
		static void _0xf8c54a461c3e11dc(Any* p0, Any* p1, Any* p2, Any* p3)
		{
			invoke<Void>(0xF8C54A461C3E11DC, p0, p1, p2, p3);
		} // 0xF8C54A461C3E11DC 0x04181752  
		static void _0xf5bb8dac426a52c0(Any* p0, Any* p1, Any* p2, Any* p3)
		{
			invoke<Void>(0xF5BB8DAC426A52C0, p0, p1, p2, p3);
		} // 0xF5BB8DAC426A52C0  
		static void _0xa736cf7fb7c5bff4(Any* p0, Any* p1, Any* p2, Any* p3)
		{
			invoke<Void>(0xA736CF7FB7C5BFF4, p0, p1, p2, p3);
		} // 0xA736CF7FB7C5BFF4 0x31002201  
		static void _0x14e0b2d1ad1044e0(Any* p0, Any* p1, Any* p2, Any* p3)
		{
			invoke<Void>(0x14E0B2D1AD1044E0, p0, p1, p2, p3);
		} // 0x14E0B2D1AD1044E0 0xDDD1F1F3  
		static void _0x90d0622866e80445(int p0, const char* p1) { invoke<Void>(0x90D0622866E80445, p0, p1); }
		// 0x90D0622866E80445 0x66FEB701  
		static void _0x5da3a8de8cb6226f(int time) { invoke<Void>(0x5DA3A8DE8CB6226F, time); }
		// 0x5DA3A8DE8CB6226F 0x9E2B9522  
		static void _0xd1032e482629049e(bool p0) { invoke<Void>(0xD1032E482629049E, p0); } // 0xD1032E482629049E  
		static void _0xf4ff020a08bc8863(Any p0, Any p1) { invoke<Void>(0xF4FF020A08BC8863, p0, p1); }
		// 0xF4FF020A08BC8863  
		static void _0x46326e13da4e0546(Any* p0) { invoke<Void>(0x46326E13DA4E0546, p0); } // 0x46326E13DA4E0546  
		static Any leaderboards_get_number_of_columns(Any p0, Any p1)
		{
			return invoke<Any>(0x117B45156D7EFF2E, p0, p1);
		} // 0x117B45156D7EFF2E 0x0A56EE34  
		static Any leaderboards_get_column_id(Any p0, Any p1, Any p2)
		{
			return invoke<Any>(0xC4B5467A1886EA7E, p0, p1, p2);
		} // 0xC4B5467A1886EA7E 0x3821A334  
		static Any leaderboards_get_column_type(Any p0, Any p1, Any p2)
		{
			return invoke<Any>(0xBF4FEF46DB7894D3, p0, p1, p2);
		} // 0xBF4FEF46DB7894D3 0x6F2820F4  
		static Any leaderboards_read_clear_all() { return invoke<Any>(0xA34CB6E6F0DF4A0B); }
		// 0xA34CB6E6F0DF4A0B 0x233E058A  
		static Any leaderboards_read_clear(Any p0, Any p1, Any p2)
		{
			return invoke<Any>(0x7CCE5C737A665701, p0, p1, p2);
		} // 0x7CCE5C737A665701 0x7090012F  
		static bool leaderboards_read_pending(Any p0, Any p1, Any p2)
		{
			return invoke<bool>(0xAC392C8483342AC2, p0, p1, p2);
		} // 0xAC392C8483342AC2 0xEEB8BF5C  
		static Any _0xa31fd15197b192bd() { return invoke<Any>(0xA31FD15197B192BD); } // 0xA31FD15197B192BD 0x1789437B  
		static bool leaderboards_read_successful(Any p0, Any p1, Any p2)
		{
			return invoke<bool>(0x2FB19228983E832C, p0, p1, p2);
		} // 0x2FB19228983E832C 0x3AC5B2F1  
		static bool leaderboards2_read_friends_by_row(Any* p0, Any* p1, Any p2, bool p3, Any p4, Any p5)
		{
			return invoke<bool>(0x918B101666F9CB83, p0, p1, p2, p3, p4, p5);
		} // 0x918B101666F9CB83 0xBD91B136  
		static bool leaderboards2_read_by_handle(Any* p0, Any* p1) { return invoke<bool>(0xC30713A383BFBF0E, p0, p1); }
		// 0xC30713A383BFBF0E 0x6B553408  
		static bool leaderboards2_read_by_row(Any* p0, Any* p1, Any p2, Any* p3, Any p4, Any* p5, Any p6)
		{
			return invoke<bool>(0xA9CDB1E3F0A49883, p0, p1, p2, p3, p4, p5, p6);
		} // 0xA9CDB1E3F0A49883 0xCA931F34  
		static bool leaderboards2_read_by_rank(Any* p0, Any p1, Any p2)
		{
			return invoke<bool>(0xBA2C7DB0C129449A, p0, p1, p2);
		} // 0xBA2C7DB0C129449A 0x1B03F59F  
		static bool leaderboards2_read_by_radius(Any* p0, Any p1, Any* p2)
		{
			return invoke<bool>(0x5CE587FB5A42C8C4, p0, p1, p2);
		} // 0x5CE587FB5A42C8C4 0xC5B7E685  
		static bool leaderboards2_read_by_score_int(Any* p0, Any p1, Any p2)
		{
			return invoke<bool>(0x7EEC7E4F6984A16A, p0, p1, p2);
		} // 0x7EEC7E4F6984A16A 0xAC020C18  
		static bool leaderboards2_read_by_score_float(Any* p0, float p1, Any p2)
		{
			return invoke<bool>(0xE662C8B759D08F3C, p0, p1, p2);
		} // 0xE662C8B759D08F3C 0xC678B29F  
		static bool _0xc38dc1e90d22547c(Any* p0, Any* p1, Any* p2)
		{
			return invoke<bool>(0xC38DC1E90D22547C, p0, p1, p2);
		} // 0xC38DC1E90D22547C 0x9BEC3401  
		static bool _0xf1ae5dcdbfca2721(Any* p0, Any* p1, Any* p2)
		{
			return invoke<bool>(0xF1AE5DCDBFCA2721, p0, p1, p2);
		} // 0xF1AE5DCDBFCA2721  
		static bool _0xa0f93d5465b3094d(Any* p0) { return invoke<bool>(0xA0F93D5465B3094D, p0); }
		// 0xA0F93D5465B3094D 0xC977D6E2  
		static void _0x71b008056e5692d6() { invoke<Void>(0x71B008056E5692D6); } // 0x71B008056E5692D6 0xF2DB6A82  
		static bool _0x34770b9ce0e03b91(Any p0, Any* p1) { return invoke<bool>(0x34770B9CE0E03B91, p0, p1); }
		// 0x34770B9CE0E03B91 0x766A74FE  
		static Any _0x88578f6ec36b4a3a(Any p0, Any p1) { return invoke<Any>(0x88578F6EC36B4A3A, p0, p1); }
		// 0x88578F6EC36B4A3A 0x6B90E730  
		static float _0x38491439b6ba7f7d(Any p0, Any p1) { return invoke<float>(0x38491439B6BA7F7D, p0, p1); }
		// 0x38491439B6BA7F7D 0x509A286F  
		static bool leaderboards2_write_data(Any* p0) { return invoke<bool>(0xAE2206545888AE49, p0); }
		// 0xAE2206545888AE49 0x5F9DF634  
		static void _0x0bca1d2c47b0d269(Any p0, Any p1, float p2) { invoke<Void>(0x0BCA1D2C47B0D269, p0, p1, p2); }
		// 0x0BCA1D2C47B0D269 0x7524E27B  
		static void _0x2e65248609523599(Any p0, Any p1, Any p2) { invoke<Void>(0x2E65248609523599, p0, p1, p2); }
		// 0x2E65248609523599 0x1C5CCC3A  
		static bool leaderboards_cache_data_row(Any* p0) { return invoke<bool>(0xB9BB18E2C40142ED, p0); }
		// 0xB9BB18E2C40142ED 0x44F7D82B  
		static void leaderboards_clear_cache_data() { invoke<Void>(0xD4B02A6B476E1FDC); }
		// 0xD4B02A6B476E1FDC 0x87F498C1  
		static void _0x8ec74ceb042e7cff(Any p0) { invoke<Void>(0x8EC74CEB042E7CFF, p0); }
		// 0x8EC74CEB042E7CFF 0x88AE9667  
		static bool leaderboards_get_cache_exists(Any p0) { return invoke<bool>(0x9C51349BE6CDFE2C, p0); }
		// 0x9C51349BE6CDFE2C 0xFC8A71F3  
		static Any leaderboards_get_cache_time(Any p0) { return invoke<Any>(0xF04C1C27DA35F6C8, p0); }
		// 0xF04C1C27DA35F6C8 0xEDF02302  
		static Any _0x58a651cd201d89ad(Any p0) { return invoke<Any>(0x58A651CD201D89AD, p0); }
		// 0x58A651CD201D89AD 0xCE7CB520  
		static bool leaderboards_get_cache_data_row(Any p0, Any p1, Any* p2)
		{
			return invoke<bool>(0x9120E8DBA3D69273, p0, p1, p2);
		} // 0x9120E8DBA3D69273 0xA11289EC  
		static void _0x11ff1c80276097ed(const char* p0, Any p1, Any p2)
		{
			invoke<Void>(0x11FF1C80276097ED, p0, p1, p2);
		} // 0x11FF1C80276097ED 0x4AC39C6C  
		static void _0x30a6614c1f7799b8(Any p0, float p1, Any p2) { invoke<Void>(0x30A6614C1F7799B8, p0, p1, p2); }
		// 0x30A6614C1F7799B8 0x3E69E7C3  
		static void _0x6483c25849031c4f(Any p0, Any p1, Any p2, Any* p3)
		{
			invoke<Void>(0x6483C25849031C4F, p0, p1, p2, p3);
		} // 0x6483C25849031C4F 0x2FFD2FA5  
		static bool _0x5ead2bf6484852e4() { return invoke<bool>(0x5EAD2BF6484852E4); } // 0x5EAD2BF6484852E4 0x23D70C39  
		static void _0xc141b8917e0017ec() { invoke<Void>(0xC141B8917E0017EC); } // 0xC141B8917E0017EC 0x0AD43306  
		static void _0xb475f27c6a994d65() { invoke<Void>(0xB475F27C6A994D65); } // 0xB475F27C6A994D65 0xC7DE5C30  
		static void _0xf1a1803d3476f215(int value) { invoke<Void>(0xF1A1803D3476F215, value); }
		// 0xF1A1803D3476F215 0xA3DAC790  
		static void _0x38baaa5dd4c9d19f(int value) { invoke<Void>(0x38BAAA5DD4C9D19F, value); }
		// 0x38BAAA5DD4C9D19F 0x726FAE66  
		static void _0x55384438fc55ad8e(int value) { invoke<Void>(0x55384438FC55AD8E, value); }
		// 0x55384438FC55AD8E 0xF03895A4  
		static void _0x723c1ce13fbfdb67(Any p0, Any p1) { invoke<Void>(0x723C1CE13FBFDB67, p0, p1); }
		// 0x723C1CE13FBFDB67 0x4C39CF10  
		static void _0x0d01d20616fc73fb(Any p0, Any p1) { invoke<Void>(0x0D01D20616FC73FB, p0, p1); }
		// 0x0D01D20616FC73FB 0x2180AE13  
		static void _leaderboards_deaths(Hash statName, float value)
		{
			invoke<Void>(0x428EAF89E24F6C36, statName, value);
		} // 0x428EAF89E24F6C36 0xEE292B91  
		static void _0x047cbed6f6f8b63c() { invoke<Void>(0x047CBED6F6F8B63C); } // 0x047CBED6F6F8B63C 0xA063CABD  
		static bool _0xc980e62e33df1d5c(Any* p0, Any* p1) { return invoke<bool>(0xC980E62E33DF1D5C, p0, p1); }
		// 0xC980E62E33DF1D5C 0x62C19A3D  
		static void _0x6f361b8889a792a3() { invoke<Void>(0x6F361B8889A792A3); } // 0x6F361B8889A792A3 0x3B4EF322  
		static void _0xc847b43f369ac0b5() { invoke<Void>(0xC847B43F369AC0B5); } // 0xC847B43F369AC0B5  
		static bool _0xa5c80d8e768a9e66(Any* p0) { return invoke<bool>(0xA5C80D8E768A9E66, p0); } // 0xA5C80D8E768A9E66  
		static Any _0x9a62ec95ae10e011() { return invoke<Any>(0x9A62EC95AE10E011); } // 0x9A62EC95AE10E011  
		static Any _0x4c89fe2bdeb3f169() { return invoke<Any>(0x4C89FE2BDEB3F169); } // 0x4C89FE2BDEB3F169  
		static Any _0xc6e0e2616a7576bb() { return invoke<Any>(0xC6E0E2616A7576BB); } // 0xC6E0E2616A7576BB  
		static Any _0x5bd5f255321c4aaf(Any p0) { return invoke<Any>(0x5BD5F255321C4AAF, p0); } // 0x5BD5F255321C4AAF  
		static Any _0xdeaaf77eb3687e97(Any p0, Any* p1) { return invoke<Any>(0xDEAAF77EB3687E97, p0, p1); }
		// 0xDEAAF77EB3687E97  
		static Any _0xc70ddce56d0d3a99() { return invoke<Any>(0xC70DDCE56D0D3A99); } // 0xC70DDCE56D0D3A99 0x54E775E0  
		static Any _0x886913bbeaca68c1(Any* p0) { return invoke<Any>(0x886913BBEACA68C1, p0); }
		// 0x886913BBEACA68C1 0xE3F0D62D  
		static Any _0x4fef53183c3c6414() { return invoke<Any>(0x4FEF53183C3C6414); } // 0x4FEF53183C3C6414  
		static Any _0x567384dfa67029e6() { return invoke<Any>(0x567384DFA67029E6); } // 0x567384DFA67029E6  
		static bool _0x3270f67eed31fbc1(Any p0, Any* p1, Any* p2)
		{
			return invoke<bool>(0x3270F67EED31FBC1, p0, p1, p2);
		} // 0x3270F67EED31FBC1  
		static Any _0xce5aa445aba8dee0(Any* p0) { return invoke<Any>(0xCE5AA445ABA8DEE0, p0); } // 0xCE5AA445ABA8DEE0  
		static void _0x98e2bc1ca26287c3() { invoke<Void>(0x98E2BC1CA26287C3); } // 0x98E2BC1CA26287C3  
		static void _0x629526aba383bcaa() { invoke<Void>(0x629526ABA383BCAA); } // 0x629526ABA383BCAA  
		static Any _0xb3da2606774a8e2d() { return invoke<Any>(0xB3DA2606774A8E2D); } // 0xB3DA2606774A8E2D  
		static void _0xdac073c7901f9e15(Any p0) { invoke<Void>(0xDAC073C7901F9E15, p0); } // 0xDAC073C7901F9E15  
		static void _0xf6792800ac95350d(Any p0) { invoke<Void>(0xF6792800AC95350D, p0); } // 0xF6792800AC95350D  
	}

	namespace brain
	{
		static void add_script_to_random_ped(const char* name, Hash model, float p2, float p3)
		{
			invoke<Void>(0x4EE5367468A65CCC, name, model, p2, p3);
		} // 0x4EE5367468A65CCC 0xECC76C3D  
		static void register_object_script_brain(const char* scriptName, Hash objectName, int p2, float p3, int p4,
			int p5)
		{
			invoke<Void>(0x0BE84C318BA6EC22, scriptName, objectName, p2, p3, p4, p5);
		} // 0x0BE84C318BA6EC22 0xB6BCC608  
		static bool is_object_within_brain_activation_range(Object object)
		{
			return invoke<bool>(0xCCBA154209823057, object);
		} // 0xCCBA154209823057 0xBA4CAA56  
		static void register_world_point_script_brain(Any* p0, float p1, Any p2)
		{
			invoke<Void>(0x3CDC7136613284BD, p0, p1, p2);
		} // 0x3CDC7136613284BD 0x725D91F7  
		static bool is_world_point_within_brain_activation_range() { return invoke<bool>(0xC5042CC6F5E3D450); }
		// 0xC5042CC6F5E3D450 0x2CF305A0  
		static void enable_script_brain_set(int brainSet) { invoke<Void>(0x67AA4D73F0CFA86B, brainSet); }
		// 0x67AA4D73F0CFA86B 0x2765919F  
		static void disable_script_brain_set(int brainSet) { invoke<Void>(0x14D8518E9760F08F, brainSet); }
		// 0x14D8518E9760F08F 0xFBD13FAD  
		static void _0x0b40ed49d7d6ff84() { invoke<Void>(0x0B40ED49D7D6FF84); } // 0x0B40ED49D7D6FF84 0x19B27825  
		static void _0x4d953df78ebf8158() { invoke<Void>(0x4D953DF78EBF8158); } // 0x4D953DF78EBF8158 0xF3A3AB08  
		static void _0x6d6840cee8845831(const char* action) { invoke<Void>(0x6D6840CEE8845831, action); }
		// 0x6D6840CEE8845831 0x949FE53E  
		static void _0x6e91b04e08773030(const char* action) { invoke<Void>(0x6E91B04E08773030, action); }
		// 0x6E91B04E08773030 0x29CE8BAA  
	}

	namespace mobile
	{
		static void create_mobile_phone(Ped* p3) { invoke<Void>(0xA4E8E696C532FBC7, p3); }
		// 0xA4E8E696C532FBC7 0x5BBC5E23  
		static void destroy_mobile_phone() { invoke<Void>(0x3BC861DF703E5097); } // 0x3BC861DF703E5097 0x1A65037B  
		static void set_mobile_phone_scale(float scale) { invoke<Void>(0xCBDD322A73D6D932, scale); }
		// 0xCBDD322A73D6D932 0x09BCF1BE  
		static void set_mobile_phone_rotation(float rotX, float rotY, float rotZ, Any p3)
		{
			invoke<Void>(0xBB779C0CA917E865, rotX, rotY, rotZ, p3);
		} // 0xBB779C0CA917E865 0x209C28CF  
		static void get_mobile_phone_rotation(Vector3* rotation, Vehicle p1)
		{
			invoke<Void>(0x1CEFB61F193070AE, rotation, p1);
		} // 0x1CEFB61F193070AE 0x17A29F23  
		static void set_mobile_phone_position(float posX, float posY, float posZ)
		{
			invoke<Void>(0x693A5C6D6734085B, posX, posY, posZ);
		} // 0x693A5C6D6734085B 0x841800B3  
		static void get_mobile_phone_position(Vector3* position) { invoke<Void>(0x584FDFDA48805B86, position); }
		// 0x584FDFDA48805B86 0xB2E1E1A0  
		static void script_is_moving_mobile_phone_offscreen(bool toggle) { invoke<Void>(0xF511F759238A5122, toggle); }
		// 0xF511F759238A5122 0x29828690  
		static bool can_phone_be_seen_on_screen() { return invoke<bool>(0xC4E2813898C97A4B); }
		// 0xC4E2813898C97A4B 0x5F978584  
		static void _move_finger(int direction) { invoke<Void>(0x95C9E72F3D7DEC9B, direction); } // 0x95C9E72F3D7DEC9B  
		static void _set_phone_lean(bool Toggle) { invoke<Void>(0x44E44169EF70138E, Toggle); } // 0x44E44169EF70138E  
		static void cell_cam_activate(bool p0, bool p1) { invoke<Void>(0xFDE8F069C542D126, p0, p1); }
		// 0xFDE8F069C542D126 0x234C1AE9  
		static void _disable_phone_this_frame(bool toggle) { invoke<Void>(0x015C49A93E3E086E, toggle); }
		// 0x015C49A93E3E086E 0x4479B304  
		static void _0xa2ccbe62cd4c91a4(int* toggle) { invoke<Void>(0xA2CCBE62CD4C91A4, toggle); }
		// 0xA2CCBE62CD4C91A4 0xC273BB4D  
		static void _0x1b0b4aeed5b9b41c(float p0) { invoke<Void>(0x1B0B4AEED5B9B41C, p0); } // 0x1B0B4AEED5B9B41C  
		static void _0x53f4892d18ec90a4(float p0) { invoke<Void>(0x53F4892D18EC90A4, p0); } // 0x53F4892D18EC90A4  
		static void _0x3117d84efa60f77b(float p0) { invoke<Void>(0x3117D84EFA60F77B, p0); } // 0x3117D84EFA60F77B  
		static void _0x15e69e2802c24b8d(float p0) { invoke<Void>(0x15E69E2802C24B8D, p0); } // 0x15E69E2802C24B8D  
		static void _0xac2890471901861c(float p0) { invoke<Void>(0xAC2890471901861C, p0); } // 0xAC2890471901861C  
		static void _0xd6ade981781fca09(float p0) { invoke<Void>(0xD6ADE981781FCA09, p0); } // 0xD6ADE981781FCA09  
		static void _0xf1e22dc13f5eebad(float p0) { invoke<Void>(0xF1E22DC13F5EEBAD, p0); } // 0xF1E22DC13F5EEBAD  
		static void _0x466da42c89865553(float p0) { invoke<Void>(0x466DA42C89865553, p0); }
		// 0x466DA42C89865553 0x66DCD9D2  
		static bool cell_cam_is_char_visible_no_face_check(Entity entity)
		{
			return invoke<bool>(0x439E9BC95B7E7FBE, entity);
		} // 0x439E9BC95B7E7FBE 0xBEA88097  
		static void get_mobile_phone_render_id(int* renderId) { invoke<Void>(0xB4A53E05F68B6FA1, renderId); }
		// 0xB4A53E05F68B6FA1 0x88E4FECE  
		static bool _network_shop_does_item_exist(const char* name) { return invoke<bool>(0xBD4D7EAF8A30F637, name); }
		// 0xBD4D7EAF8A30F637  
		static bool _network_shop_does_item_exist_hash(Hash hash) { return invoke<bool>(0x247F0F73A182EA0B, hash); }
		// 0x247F0F73A182EA0B  
	}

	namespace app
	{
		static int app_data_valid() { return invoke<int>(0x846AA8E7D55EE5B6); } // 0x846AA8E7D55EE5B6 0x72BDE002  
		static int* app_get_int(ScrHandle property) { return invoke<int*>(0xD3A58A12C77D9D4B, property); }
		// 0xD3A58A12C77D9D4B 0x2942AAD2  
		static float app_get_float(const char* property) { return invoke<float>(0x1514FB24C02C2322, property); }
		// 0x1514FB24C02C2322 0xD87F3A1C  
		static const char* app_get_string(const char* property)
		{
			return invoke<const char*>(0x749B023950D2311C, property);
		} // 0x749B023950D2311C 0x849CEB80  
		static void app_set_int(const char* property, int value) { invoke<Void>(0x607E8E3D3E4F9611, property, value); }
		// 0x607E8E3D3E4F9611 0x1B509C32  
		static void app_set_float(const char* property, float value)
		{
			invoke<Void>(0x25D7687C68E0DAA4, property, value);
		} // 0x25D7687C68E0DAA4 0xF3076135  
		static void app_set_string(const char* property, const char* value)
		{
			invoke<Void>(0x3FF2FCEC4B7721B4, property, value);
		} // 0x3FF2FCEC4B7721B4 0x23DF19A8  
		static void app_set_app(const char* appName) { invoke<Void>(0xCFD0406ADAF90D2B, appName); }
		// 0xCFD0406ADAF90D2B 0x8BAC4146  
		static void app_set_block(const char* blockName) { invoke<Void>(0x262AB456A3D21F93, blockName); }
		// 0x262AB456A3D21F93 0xC2D54DD9  
		static void app_clear_block() { invoke<Void>(0x5FE1DF3342DB7DBA); } // 0x5FE1DF3342DB7DBA 0xDAB86A18  
		static void app_close_app() { invoke<Void>(0xE41C65E07A5F05FC); } // 0xE41C65E07A5F05FC 0x03767C7A  
		static void app_close_block() { invoke<Void>(0xE8E3FCF72EAC0EF8); } // 0xE8E3FCF72EAC0EF8 0xED97B202  
		static bool app_has_linked_social_club_account() { return invoke<bool>(0x71EEE69745088DA0); }
		// 0x71EEE69745088DA0 0xD368BA15  
		static bool app_has_synced_data(const char* appName) { return invoke<bool>(0xCA52279A7271517F, appName); }
		// 0xCA52279A7271517F 0x1DE2A63D  
		static void app_save_data() { invoke<Void>(0x95C5D356CDA6E85F); } // 0x95C5D356CDA6E85F 0x84A3918D  
		static Any app_get_deleted_file_status() { return invoke<Any>(0xC9853A2BE3DED1A6); }
		// 0xC9853A2BE3DED1A6 0x784D550B  
		static bool app_delete_app_data(const char* appName) { return invoke<bool>(0x44151AEA95C8A003, appName); }
		// 0x44151AEA95C8A003 0x2A2FBD1C  
	}

	namespace time
	{
		static void set_clock_time(int hour, int minute, int second)
		{
			invoke<Void>(0x47C3B5848C3E45D8, hour, minute, second);
		} // 0x47C3B5848C3E45D8 0x26F6AF14  
		static void pause_clock(bool toggle) { invoke<Void>(0x4055E40BD2DBEC1D, toggle); }
		// 0x4055E40BD2DBEC1D 0xB02D6124  
		static void advance_clock_time_to(int hour, int minute, int second)
		{
			invoke<Void>(0xC8CA9670B9D83B3B, hour, minute, second);
		} // 0xC8CA9670B9D83B3B 0x57B8DA7C  
		static void add_to_clock_time(int hours, int minutes, int seconds)
		{
			invoke<Void>(0xD716F30D8C8980E2, hours, minutes, seconds);
		} // 0xD716F30D8C8980E2 0xCC40D20D  
		static int get_clock_hours() { return invoke<int>(0x25223CA6B4D20B7F); } // 0x25223CA6B4D20B7F 0x7EF8316F  
		static int get_clock_minutes() { return invoke<int>(0x13D2B8ADD79640F2); } // 0x13D2B8ADD79640F2 0x94AAC486  
		static int get_clock_seconds() { return invoke<int>(0x494E97C2EF27C470); } // 0x494E97C2EF27C470 0x099C927E  
		static void set_clock_date(int day, int month, int year) { invoke<Void>(0xB096419DF0D06CE7, day, month, year); }
		// 0xB096419DF0D06CE7 0x96891C94  
		static int get_clock_day_of_week() { return invoke<int>(0xD972E4BD7AEB235F); } // 0xD972E4BD7AEB235F 0x84E4A289  
		static int get_clock_day_of_month() { return invoke<int>(0x3D10BC92A4DB1D35); }
		// 0x3D10BC92A4DB1D35 0xC7A5ACB7  
		static int get_clock_month() { return invoke<int>(0xBBC72712E80257A1); } // 0xBBC72712E80257A1 0x3C48A3D5  
		static int get_clock_year() { return invoke<int>(0x961777E64BDAF717); } // 0x961777E64BDAF717 0xB8BECF15  
		static int get_milliseconds_per_game_minute() { return invoke<int>(0x2F8B4D1C595B11DB); }
		// 0x2F8B4D1C595B11DB 0x3B74095C  
		static void get_posix_time(int* year, int* month, int* day, int* hour, int* minute, int* second)
		{
			invoke<Void>(0xDA488F299A5B164E, year, month, day, hour, minute, second);
		} // 0xDA488F299A5B164E 0xE15A5281  
		static void _get_utc_time(int* year, int* month, int* day, int* hour, int* minute, int* second)
		{
			invoke<Void>(0x8117E09A19EEF4D3, year, month, day, hour, minute, second);
		} // 0x8117E09A19EEF4D3  
		static void get_local_time(int* year, int* month, int* day, int* hour, int* minute, int* second)
		{
			invoke<Void>(0x50C7A99057A69748, year, month, day, hour, minute, second);
		} // 0x50C7A99057A69748 0x124BCFA2  
	}

	namespace pathfind
	{
		static void set_roads_in_area(float x1, float y1, float z1, float x2, float y2, float z2, bool unknown1,
			bool unknown2)
		{
			invoke<Void>(0xBF1A602B5BA52FEE, x1, y1, z1, x2, y2, z2, unknown1, unknown2);
		} // 0xBF1A602B5BA52FEE 0xEBC7B918  
		static void set_roads_in_angled_area(float x1, float y1, float z1, float x2, float y2, float z2, float angle,
			bool unknown1, bool unknown2, bool unknown3)
		{
			invoke<Void>(0x1A5AA1208AF5DB59, x1, y1, z1, x2, y2, z2, angle, unknown1, unknown2, unknown3);
		} // 0x1A5AA1208AF5DB59 0xBD088F4B  
		static void set_ped_paths_in_area(float x1, float y1, float z1, float x2, float y2, float z2, bool unknown)
		{
			invoke<Void>(0x34F060F4BF92E018, x1, y1, z1, x2, y2, z2, unknown);
		} // 0x34F060F4BF92E018 0x2148EA84  
		static bool get_safe_coord_for_ped(float x, float y, float z, bool onGround, Vector3* outPosition, int flags)
		{
			return invoke<bool>(0xB61C8E878A4199CA, x, y, z, onGround, outPosition, flags);
		} // 0xB61C8E878A4199CA 0xB370270A  
		static bool get_closest_vehicle_node(float x, float y, float z, Vector3* outPosition, int nodeType, float p5,
			float p6)
		{
			return invoke<bool>(0x240A18690AE96513, x, y, z, outPosition, nodeType, p5, p6);
		} // 0x240A18690AE96513 0x6F5F1E6C  
		static bool get_closest_major_vehicle_node(float x, float y, float z, Vector3* outPosition, float unknown1,
			int unknown2)
		{
			return invoke<bool>(0x2EABE3B06F58C1BE, x, y, z, outPosition, unknown1, unknown2);
		} // 0x2EABE3B06F58C1BE 0x04B5F15B  
		static bool get_closest_vehicle_node_with_heading(float x, float y, float z, Vector3* outPosition,
			float* outHeading, int nodeType, float p6, int p7)
		{
			return invoke<bool>(0xFF071FB798B803B0, x, y, z, outPosition, outHeading, nodeType, p6, p7);
		} // 0xFF071FB798B803B0 0x8BD5759B  
		static bool get_nth_closest_vehicle_node(float x, float y, float z, int nthClosest, Vector3* outPosition,
			Any unknown1, Any unknown2, Any unknown3)
		{
			return invoke<bool>(0xE50E52416CCF948B, x, y, z, nthClosest, outPosition, unknown1, unknown2, unknown3);
		} // 0xE50E52416CCF948B 0xF125BFCC  
		static int get_nth_closest_vehicle_node_id(float x, float y, float z, int nth, int nodetype, float p5, float p6)
		{
			return invoke<int>(0x22D7275A79FE8215, x, y, z, nth, nodetype, p5, p6);
		} // 0x22D7275A79FE8215 0x3F358BEA  
		static bool get_nth_closest_vehicle_node_with_heading(float x, float y, float z, int nthClosest,
			Vector3* outPosition, float* heading, Any* unknown1,
			int unknown2, float unknown3, float unknown4)
		{
			return invoke<bool>(0x80CA6A8B6C094CC4, x, y, z, nthClosest, outPosition, heading, unknown1, unknown2,
				unknown3, unknown4);
		} // 0x80CA6A8B6C094CC4 0x7349C856  
		static Any get_nth_closest_vehicle_node_id_with_heading(float x, float y, float z, int nthClosest,
			Vector3* outPosition, float outHeading, Any p6,
			float p7, float p8)
		{
			return invoke<Any>(0x6448050E9C2A7207, x, y, z, nthClosest, outPosition, outHeading, p6, p7, p8);
		} // 0x6448050E9C2A7207 0xC1AEB88D  
		static bool get_nth_closest_vehicle_node_favour_direction(float x, float y, float z, float desiredX,
			float desiredY, float desiredZ, int nthClosest,
			Vector3* outPosition, float* outHeading, int nodetype,
			Any p10, Any p11)
		{
			return invoke<bool>(0x45905BE8654AE067, x, y, z, desiredX, desiredY, desiredZ, nthClosest, outPosition,
				outHeading, nodetype, p10, p11);
		} // 0x45905BE8654AE067 0x928A4DEC  
		static bool get_vehicle_node_properties(float x, float y, float z, int* density, int* flags)
		{
			return invoke<bool>(0x0568566ACBB5DEDC, x, y, z, density, flags);
		} // 0x0568566ACBB5DEDC 0xCC90110B  
		static bool is_vehicle_node_id_valid(int vehicleNodeId)
		{
			return invoke<bool>(0x1EAF30FCFBF5AF74, vehicleNodeId);
		} // 0x1EAF30FCFBF5AF74 0x57DFB1EF  
		static void get_vehicle_node_position(int nodeId, Vector3* outPosition)
		{
			invoke<Void>(0x703123E5E7D429C2, nodeId, outPosition);
		} // 0x703123E5E7D429C2 0xE38E252D  
		static bool _get_supports_gps_route_flag(int nodeID) { return invoke<bool>(0xA2AE5C478B96E3B6, nodeID); }
		// 0xA2AE5C478B96E3B6 0xEE4B1219  
		static bool _get_is_slow_road_flag(int nodeID) { return invoke<bool>(0x4F5070AA58F69279, nodeID); }
		// 0x4F5070AA58F69279 0x56737A3C  
		static Any get_closest_road(float x, float y, float z, float p3, int p4, Vector3* p5, Vector3* p6, Any* p7,
			Any* p8, float* p9, bool p10)
		{
			return invoke<Any>(0x132F52BBA570FE92, x, y, z, p3, p4, p5, p6, p7, p8, p9, p10);
		} // 0x132F52BBA570FE92 0x567B0E11  
		static bool load_all_path_nodes(bool keepInMemory) { return invoke<bool>(0x80E4A6EDDB0BE8D9, keepInMemory); }
		// 0x80E4A6EDDB0BE8D9 0xC66E28C3  
		static void _0x228e5c6ad4d74bfd(bool p0) { invoke<Void>(0x228E5C6AD4D74BFD, p0); }
		// 0x228E5C6AD4D74BFD 0xD6A3B458  
		static bool _0xf7b79a50b905a30d(float p0, float p1, float p2, float p3)
		{
			return invoke<bool>(0xF7B79A50B905A30D, p0, p1, p2, p3);
		} // 0xF7B79A50B905A30D 0x86E80A17  
		static bool _0x07fb139b592fa687(float p0, float p1, float p2, float p3)
		{
			return invoke<bool>(0x07FB139B592FA687, p0, p1, p2, p3);
		} // 0x07FB139B592FA687 0x2CDA5012  
		static void set_roads_back_to_original(float p0, float p1, float p2, float p3, float p4, float p5)
		{
			invoke<Void>(0x1EE7063B80FFC77C, p0, p1, p2, p3, p4, p5);
		} // 0x1EE7063B80FFC77C 0x86AC4A85  
		static void set_roads_back_to_original_in_angled_area(float x1, float y1, float z1, float x2, float y2,
			float z2, float p6)
		{
			invoke<Void>(0x0027501B9F3B407E, x1, y1, z1, x2, y2, z2, p6);
		} // 0x0027501B9F3B407E 0x9DB5D209  
		static void _0x0b919e1fb47cc4e0(float p0) { invoke<Void>(0x0B919E1FB47CC4E0, p0); }
		// 0x0B919E1FB47CC4E0 0x3C5085E4  
		static void _0xaa76052dda9bfc3e(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6)
		{
			invoke<Void>(0xAA76052DDA9BFC3E, p0, p1, p2, p3, p4, p5, p6);
		} // 0xAA76052DDA9BFC3E 0xD0F51299  
		static void set_ped_paths_back_to_original(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5)
		{
			invoke<Void>(0xE04B48F2CC926253, p0, p1, p2, p3, p4, p5);
		} // 0xE04B48F2CC926253 0x3F1ABDA4  
		static bool get_random_vehicle_node(float x, float y, float z, float radius, bool p4, bool p5, bool p6,
			Vector3* outPosition, int* nodeId)
		{
			return invoke<bool>(0x93E0DB8440B73A7D, x, y, z, radius, p4, p5, p6, outPosition, nodeId);
		} // 0x93E0DB8440B73A7D 0xAD1476EA  
		static void get_street_name_at_coord(float x, float y, float z, Hash* streetName, Hash* crossingRoad)
		{
			invoke<Void>(0x2EB41072B4C1E4C0, x, y, z, streetName, crossingRoad);
		} // 0x2EB41072B4C1E4C0 0xDEBEEFCF  
		static int generate_directions_to_coord(float x, float y, float z, bool p3, float* direction, float* vehicle,
			float* distToNxJunction)
		{
			return invoke<int>(0xF90125F1F79ECDF8, x, y, z, p3, direction, vehicle, distToNxJunction);
		} // 0xF90125F1F79ECDF8 0xED35C094  
		static void set_ignore_no_gps_flag(bool ignore) { invoke<Void>(0x72751156E7678833, ignore); }
		// 0x72751156E7678833 0xB72CF194  
		static void _0x1fc289a0c3ff470f(bool p0) { invoke<Void>(0x1FC289A0C3FF470F, p0); }
		// 0x1FC289A0C3FF470F 0x90DF7A4C  
		static void set_gps_disabled_zone(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5)
		{
			invoke<Void>(0xDC20483CD3DD5201, p0, p1, p2, p3, p4, p5);
		} // 0xDC20483CD3DD5201 0x720B8073  
		static Any _0xbbb45c3cf5c8aa85() { return invoke<Any>(0xBBB45C3CF5C8AA85); } // 0xBBB45C3CF5C8AA85 0x4B770634  
		static Any _0x869daacbbe9fa006() { return invoke<Any>(0x869DAACBBE9FA006); } // 0x869DAACBBE9FA006 0x286F82CC  
		static Any _0x16f46fb18c8009e4(Any p0, Any p1, Any p2, Any p3, Any p4)
		{
			return invoke<Any>(0x16F46FB18C8009E4, p0, p1, p2, p3, p4);
		} // 0x16F46FB18C8009E4 0xF6422F9A  
		static bool is_point_on_road(float x, float y, float z, Vehicle vehicle)
		{
			return invoke<bool>(0x125BF4ABFC536B09, x, y, z, vehicle);
		} // 0x125BF4ABFC536B09 0xCF198055  
		static Any _0xd3a6a0ef48823a8c() { return invoke<Any>(0xD3A6A0EF48823A8C); } // 0xD3A6A0EF48823A8C  
		static void _0xd0bc1c6fb18ee154(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6)
		{
			invoke<Void>(0xD0BC1C6FB18EE154, p0, p1, p2, p3, p4, p5, p6);
		} // 0xD0BC1C6FB18EE154  
		static void _0x2801d0012266df07(Any p0) { invoke<Void>(0x2801D0012266DF07, p0); } // 0x2801D0012266DF07  
		static void add_navmesh_required_region(float x, float y, float radius)
		{
			invoke<Void>(0x387EAD7EE42F6685, x, y, radius);
		} // 0x387EAD7EE42F6685 0x12B086EA  
		static void remove_navmesh_required_regions() { invoke<Void>(0x916F0A3CDEC3445E); }
		// 0x916F0A3CDEC3445E 0x637BB680  
		static void disable_navmesh_in_area(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6)
		{
			invoke<Void>(0x4C8872D8CDBE1B8B, p0, p1, p2, p3, p4, p5, p6);
		} // 0x4C8872D8CDBE1B8B 0x6E37F132  
		static bool are_all_navmesh_regions_loaded() { return invoke<bool>(0x8415D95B194A3AEA); }
		// 0x8415D95B194A3AEA 0x34C4E789  
		static bool is_navmesh_loaded_in_area(float x1, float y1, float z1, float x2, float y2, float z2)
		{
			return invoke<bool>(0xF813C7E63F9062A5, x1, y1, z1, x2, y2, z2);
		} // 0xF813C7E63F9062A5 0x4C2BA99E  
		static Any _0x01708e8dd3ff8c65(float p0, float p1, float p2, float p3, float p4, float p5)
		{
			return invoke<Any>(0x01708E8DD3FF8C65, p0, p1, p2, p3, p4, p5);
		} // 0x01708E8DD3FF8C65  
		static Any add_navmesh_blocking_object(float p0, float p1, float p2, float p3, float p4, float p5, float p6,
			bool p7, Any p8)
		{
			return invoke<Any>(0xFCD5C8E06E502F5A, p0, p1, p2, p3, p4, p5, p6, p7, p8);
		} // 0xFCD5C8E06E502F5A 0x2952BA56  
		static void update_navmesh_blocking_object(Any p0, float p1, float p2, float p3, float p4, float p5, float p6,
			float p7, Any p8)
		{
			invoke<Void>(0x109E99373F290687, p0, p1, p2, p3, p4, p5, p6, p7, p8);
		} // 0x109E99373F290687 0x4E9776D0  
		static void remove_navmesh_blocking_object(Any p0) { invoke<Void>(0x46399A7895957C0E, p0); }
		// 0x46399A7895957C0E 0x098602B0  
		static bool does_navmesh_blocking_object_exist(Any p0) { return invoke<bool>(0x0EAEB0DB4B132399, p0); }
		// 0x0EAEB0DB4B132399 0x4B67D7EE  
		static float _0x29c24bfbed8ab8fb(float p0, float p1) { return invoke<float>(0x29C24BFBED8AB8FB, p0, p1); }
		// 0x29C24BFBED8AB8FB 0x3FE8C5A0  
		static float _0x8abe8608576d9ce3(float p0, float p1, float p2, float p3)
		{
			return invoke<float>(0x8ABE8608576D9CE3, p0, p1, p2, p3);
		} // 0x8ABE8608576D9CE3 0x3ED21C90  
		static float _0x336511a34f2e5185(float left, float right)
		{
			return invoke<float>(0x336511A34F2E5185, left, right);
		} // 0x336511A34F2E5185 0xA07C5B7D  
		static float _0x3599d741c9ac6310(float p0, float p1, float p2, float p3)
		{
			return invoke<float>(0x3599D741C9AC6310, p0, p1, p2, p3);
		} // 0x3599D741C9AC6310 0x76751DD4  
		static float
			calculate_travel_distance_between_points(float x1, float y1, float z1, float x2, float y2, float z2)
		{
			return invoke<float>(0xADD95C7005C4A197, x1, y1, z1, x2, y2, z2);
		} // 0xADD95C7005C4A197 0xB114489B  
	}

	namespace controls
	{
		static bool is_control_enabled(int inputGroup, int control)
		{
			return invoke<bool>(0x1CEA6BFDF248E5D9, inputGroup, control);
		} // 0x1CEA6BFDF248E5D9 0x9174AF84  
		static bool is_control_pressed(int inputGroup, int control)
		{
			return invoke<bool>(0xF3A21BCD95725A4A, inputGroup, control);
		} // 0xF3A21BCD95725A4A 0x517A4384  
		static bool is_control_released(int inputGroup, int control)
		{
			return invoke<bool>(0x648EE3E7F38877DD, inputGroup, control);
		} // 0x648EE3E7F38877DD 0x1F91A06E  
		static bool is_control_just_pressed(int inputGroup, int control)
		{
			return invoke<bool>(0x580417101DDB492F, inputGroup, control);
		} // 0x580417101DDB492F 0x4487F579  
		static bool is_control_just_released(int inputGroup, int control)
		{
			return invoke<bool>(0x50F940259D3841E6, inputGroup, control);
		} // 0x50F940259D3841E6 0x2314444B  
		static int get_control_value(int inputGroup, int control)
		{
			return invoke<int>(0xD95E79E8686D2C27, inputGroup, control);
		} // 0xD95E79E8686D2C27 0xC526F3C6  
		static float get_control_normal(int inputGroup, int control)
		{
			return invoke<float>(0xEC3C9B8D5327B563, inputGroup, control);
		} // 0xEC3C9B8D5327B563 0x5DE226A5  
		static void _0x5b73c77d9eb66e24(bool p0) { invoke<Void>(0x5B73C77D9EB66E24, p0); } // 0x5B73C77D9EB66E24  
		static float _0x5b84d09cec5209c5(int inputGroup, int control)
		{
			return invoke<float>(0x5B84D09CEC5209C5, inputGroup, control);
		} // 0x5B84D09CEC5209C5 0xC49343BB  
		static bool _set_control_normal(int inputGroup, int control, float amount)
		{
			return invoke<bool>(0xE8A25867FBA3B05E, inputGroup, control, amount);
		} // 0xE8A25867FBA3B05E  
		static bool is_disabled_control_pressed(int inputGroup, int control)
		{
			return invoke<bool>(0xE2587F8CBBD87B1D, inputGroup, control);
		} // 0xE2587F8CBBD87B1D 0x32A93544  
		static bool is_disabled_control_just_pressed(int inputGroup, int control)
		{
			return invoke<bool>(0x91AEF906BCA88877, inputGroup, control);
		} // 0x91AEF906BCA88877 0xEE6ABD32  
		static bool is_disabled_control_just_released(int inputGroup, int control)
		{
			return invoke<bool>(0x305C8DCD79DA8B0F, inputGroup, control);
		} // 0x305C8DCD79DA8B0F 0xD6A679E1  
		static float get_disabled_control_normal(int inputGroup, int control)
		{
			return invoke<float>(0x11E65974A982637C, inputGroup, control);
		} // 0x11E65974A982637C 0x66FF4FAA  
		static float _0x4f8a26a890fd62fb(int inputGroup, int control)
		{
			return invoke<float>(0x4F8A26A890FD62FB, inputGroup, control);
		} // 0x4F8A26A890FD62FB 0xF2A65A4C  
		static int _0xd7d22f5592aed8ba(int p0) { return invoke<int>(0xD7D22F5592AED8BA, p0); }
		// 0xD7D22F5592AED8BA 0x0E8EF929  
		static bool _is_input_disabled(int inputGroup) { return invoke<bool>(0xA571D46727E2B718, inputGroup); }
		// 0xA571D46727E2B718  
		static bool _is_input_just_disabled(int inputGroup) { return invoke<bool>(0x13337B38DB572509, inputGroup); }
		// 0x13337B38DB572509  
		static bool _set_cursor_location(float x, float y) { return invoke<bool>(0xFC695459D4D0E219, x, y); }
		// 0xFC695459D4D0E219  
		static bool _0x23f09eadc01449d6(bool p0) { return invoke<bool>(0x23F09EADC01449D6, p0); } // 0x23F09EADC01449D6  
		static bool _0x6cd79468a1e595c6(int inputGroup) { return invoke<bool>(0x6CD79468A1E595C6, inputGroup); }
		// 0x6CD79468A1E595C6  
		static const char* get_control_instructional_button(int inputGroup, int control, Player p2)
		{
			return invoke<const char*>(0x0499D7B09FC9B407, inputGroup, control, p2);
		} // 0x0499D7B09FC9B407 0x3551727A  
		static const char* _0x80c2fd58d720c801(int inputGroup, int control, bool p2)
		{
			return invoke<const char*>(0x80C2FD58D720C801, inputGroup, control, p2);
		} // 0x80C2FD58D720C801 0x3EE71F6A  
		static void _0x8290252fff36acb5(int p0, int red, int green, int blue)
		{
			invoke<Void>(0x8290252FFF36ACB5, p0, red, green, blue);
		} // 0x8290252FFF36ACB5  
		static void _0xcb0360efefb2580d(Any p0) { invoke<Void>(0xCB0360EFEFB2580D, p0); } // 0xCB0360EFEFB2580D  
		static void set_pad_shake(int p0, int duration, int frequency)
		{
			invoke<Void>(0x48B3886C1358D0D5, p0, duration, frequency);
		} // 0x48B3886C1358D0D5 0x5D38BD2F  
		static void _0x14d29bb12d47f68c(Any p0, Any p1, Any p2, Any p3, Any p4)
		{
			invoke<Void>(0x14D29BB12D47F68C, p0, p1, p2, p3, p4);
		} // 0x14D29BB12D47F68C  
		static void stop_pad_shake(Any p0) { invoke<Void>(0x38C16A305E8CDC8D, p0); } // 0x38C16A305E8CDC8D 0x8F75657E  
		static void _0xf239400e16c23e08(Any p0, Any p1) { invoke<Void>(0xF239400E16C23E08, p0, p1); }
		// 0xF239400E16C23E08 0x7D65EB6E  
		static void _0xa0cefcea390aab9b(Any p0) { invoke<Void>(0xA0CEFCEA390AAB9B, p0); } // 0xA0CEFCEA390AAB9B  
		static bool is_look_inverted() { return invoke<bool>(0x77B612531280010D); } // 0x77B612531280010D 0x313434B2  
		static bool _0xe1615ec03b3bb4fd() { return invoke<bool>(0xE1615EC03B3BB4FD); } // 0xE1615EC03B3BB4FD  
		static int get_local_player_aim_state() { return invoke<int>(0xBB41AFBBBC0A0287); }
		// 0xBB41AFBBBC0A0287 0x81802053  
		static Any _0x59b9a7af4c95133c() { return invoke<Any>(0x59B9A7AF4C95133C); } // 0x59B9A7AF4C95133C  
		static bool _0x0f70731baccfbb96() { return invoke<bool>(0x0F70731BACCFBB96); } // 0x0F70731BACCFBB96  
		static bool _0xfc859e2374407556() { return invoke<bool>(0xFC859E2374407556); } // 0xFC859E2374407556  
		static void set_playerpad_shakes_when_controller_disabled(bool toggle)
		{
			invoke<Void>(0x798FDEB5B1575088, toggle);
		} // 0x798FDEB5B1575088 0xA86BD91F  
		static void set_input_exclusive(int inputGroup, int control)
		{
			invoke<Void>(0xEDE476E5EE29EDB1, inputGroup, control);
		} // 0xEDE476E5EE29EDB1 0x4E8E29E6  
		static void disable_control_action(int inputGroup, int control, bool disable)
		{
			invoke<Void>(0xFE99B66D079CF6BC, inputGroup, control, disable);
		} // 0xFE99B66D079CF6BC 0x3800C0DC  
		static void enable_control_action(int inputGroup, int control, bool enable)
		{
			invoke<Void>(0x351220255D64C155, inputGroup, control, enable);
		} // 0x351220255D64C155 0xD2753551  
		static void disable_all_control_actions(int inputGroup) { invoke<Void>(0x5F4B6931816E599B, inputGroup); }
		// 0x5F4B6931816E599B 0x16753CF4  
		static void enable_all_control_actions(int inputGroup) { invoke<Void>(0xA5FFE9B05F199DE7, inputGroup); }
		// 0xA5FFE9B05F199DE7 0xFC2F119F  
		static bool _0x3d42b92563939375(const char* p0) { return invoke<bool>(0x3D42B92563939375, p0); }
		// 0x3D42B92563939375 0xD2C80B2E  
		static bool _0x4683149ed1dde7a1(const char* p0) { return invoke<bool>(0x4683149ED1DDE7A1, p0); }
		// 0x4683149ED1DDE7A1 0xBBFC9050  
		static void _0x643ed62d5ea3bebd() { invoke<Void>(0x643ED62D5EA3BEBD); } // 0x643ED62D5EA3BEBD 0x42140FF9  
		static void _disable_input_group(int inputGroup) { invoke<Void>(0x7F4724035FDCA1DD, inputGroup); }
		// 0x7F4724035FDCA1DD 0x2CEDE6C5  
	}

	namespace datafile
	{
		static void _0xad6875bbc0fc899c(Blip x) { invoke<Void>(0xAD6875BBC0FC899C, x); }
		// 0xAD6875BBC0FC899C 0x621388FF  
		static void _0x6cc86e78358d5119() { invoke<Void>(0x6CC86E78358D5119); } // 0x6CC86E78358D5119  
		static bool _0xfccae5b92a830878(Any p0) { return invoke<bool>(0xFCCAE5B92A830878, p0); } // 0xFCCAE5B92A830878  
		static bool _0x15ff52b809db2353(Any p0) { return invoke<bool>(0x15FF52B809DB2353, p0); } // 0x15FF52B809DB2353  
		static bool _0xf8cc1ebe0b62e29f(Any p0) { return invoke<bool>(0xF8CC1EBE0B62E29F, p0); } // 0xF8CC1EBE0B62E29F  
		static bool _0x22da66936e0fff37(Any p0) { return invoke<bool>(0x22DA66936E0FFF37, p0); }
		// 0x22DA66936E0FFF37 0xB41064A4  
		static bool _0x8f5ea1c01d65a100(Any p0) { return invoke<bool>(0x8F5EA1C01D65A100, p0); }
		// 0x8F5EA1C01D65A100 0x9DB63CFF  
		static bool _0xc84527e235fca219(const char* p0, bool p1, const char* p2, Any* p3, Any* p4, const char* type,
			bool p6)
		{
			return invoke<bool>(0xC84527E235FCA219, p0, p1, p2, p3, p4, type, p6);
		} // 0xC84527E235FCA219 0xF09157B0  
		static bool _0xa5efc3e847d60507(const char* p0, const char* p1, const char* p2, const char* p3, bool p4)
		{
			return invoke<bool>(0xA5EFC3E847D60507, p0, p1, p2, p3, p4);
		} // 0xA5EFC3E847D60507 0xD96860FC  
		static bool _0x648e7a5434af7969(const char* p0, Any* p1, bool p2, Any* p3, Any* p4, Any* p5, const char* type)
		{
			return invoke<bool>(0x648E7A5434AF7969, p0, p1, p2, p3, p4, p5, type);
		} // 0x648E7A5434AF7969 0x459F2683  
		static bool _0x4645de9980999e93(const char* p0, const char* p1, const char* p2, const char* p3,
			const char* type)
		{
			return invoke<bool>(0x4645DE9980999E93, p0, p1, p2, p3, type);
		} // 0x4645DE9980999E93 0xDBB83E2B  
		static bool _0x692d808c34a82143(const char* p0, float p1, const char* type)
		{
			return invoke<bool>(0x692D808C34A82143, p0, p1, type);
		} // 0x692D808C34A82143 0xBB6321BD  
		static bool _0xa69ac4ade82b57a4(int p0) { return invoke<bool>(0xA69AC4ADE82B57A4, p0); }
		// 0xA69AC4ADE82B57A4 0xE8D56DA2  
		static bool _0x9cb0bfa7a9342c3d(int p0, bool p1) { return invoke<bool>(0x9CB0BFA7A9342C3D, p0, p1); }
		// 0x9CB0BFA7A9342C3D 0xCB6A351E  
		static bool _0x52818819057f2b40(int p0) { return invoke<bool>(0x52818819057F2B40, p0); }
		// 0x52818819057F2B40 0xA4D1B30E  
		static bool _0x01095c95cd46b624(int p0) { return invoke<bool>(0x01095C95CD46B624, p0); }
		// 0x01095C95CD46B624 0xB8515B2F  
		static bool _load_ugc_file(const char* filename) { return invoke<bool>(0xC5238C011AF405E4, filename); }
		// 0xC5238C011AF405E4 0x660C468E  
		static void datafile_create() { invoke<Void>(0xD27058A1CA2B13EE); } // 0xD27058A1CA2B13EE 0x95F8A221  
		static void datafile_delete() { invoke<Void>(0x9AB9C1CFC8862DFB); } // 0x9AB9C1CFC8862DFB 0xDEF31B0A  
		static void _0x2ed61456317b8178() { invoke<Void>(0x2ED61456317B8178); } // 0x2ED61456317B8178 0x4E03F632  
		static void _0xc55854c7d7274882() { invoke<Void>(0xC55854C7D7274882); } // 0xC55854C7D7274882 0xF11F956F  
		static const char* datafile_get_file_dict() { return invoke<const char*>(0x906B778CA1DC72B6); }
		// 0x906B778CA1DC72B6 0x86DDF9C2  
		static bool _0x83bcce3224735f05(const char* filename) { return invoke<bool>(0x83BCCE3224735F05, filename); }
		// 0x83BCCE3224735F05 0x768CBB35  
		static bool _0x4dfdd9eb705f8140(bool* p0) { return invoke<bool>(0x4DFDD9EB705F8140, p0); }
		// 0x4DFDD9EB705F8140 0x0B4087F7  
		static bool datafile_is_save_pending() { return invoke<bool>(0xBEDB96A7584AA8CF); }
		// 0xBEDB96A7584AA8CF 0x5DCD0796  
		static void _object_value_add_boolean(Any* objectData, const char* key, bool value)
		{
			invoke<Void>(0x35124302A556A325, objectData, key, value);
		} // 0x35124302A556A325 0x9B29D99B  
		static void _object_value_add_integer(Any* objectData, const char* key, int value)
		{
			invoke<Void>(0xE7E035450A7948D5, objectData, key, value);
		} // 0xE7E035450A7948D5 0xEFCF554A  
		static void _object_value_add_float(Any* objectData, const char* key, float value)
		{
			invoke<Void>(0xC27E1CC2D795105E, objectData, key, value);
		} // 0xC27E1CC2D795105E 0xE972CACF  
		static void _object_value_add_string(Any* objectData, const char* key, const char* value)
		{
			invoke<Void>(0x8FF3847DADD8E30C, objectData, key, value);
		} // 0x8FF3847DADD8E30C 0xD437615C  
		static void _object_value_add_vector3(Any* objectData, const char* key, float valueX, float valueY,
			float valueZ)
		{
			invoke<Void>(0x4CD49B76338C7DEE, objectData, key, valueX, valueY, valueZ);
		} // 0x4CD49B76338C7DEE 0x75FC6C3C  
		static Any* _object_value_add_object(Any* objectData, const char* key)
		{
			return invoke<Any*>(0xA358F56F10732EE1, objectData, key);
		} // 0xA358F56F10732EE1 0x96A8E05F  
		static Any* _object_value_add_array(Any* objectData, const char* key)
		{
			return invoke<Any*>(0x5B11728527CA6E5F, objectData, key);
		} // 0x5B11728527CA6E5F 0x03939B8D  
		static bool _object_value_get_boolean(Any* objectData, const char* key)
		{
			return invoke<bool>(0x1186940ED72FFEEC, objectData, key);
		} // 0x1186940ED72FFEEC 0x8876C872  
		static int _object_value_get_integer(Any* objectData, const char* key)
		{
			return invoke<int>(0x78F06F6B1FB5A80C, objectData, key);
		} // 0x78F06F6B1FB5A80C 0xA6C68693  
		static float _object_value_get_float(Any* objectData, const char* key)
		{
			return invoke<float>(0x06610343E73B9727, objectData, key);
		} // 0x06610343E73B9727 0xA92C1AF4  
		static const char* _object_value_get_string(Any* objectData, const char* key)
		{
			return invoke<const char*>(0x3D2FD9E763B24472, objectData, key);
		} // 0x3D2FD9E763B24472 0x942160EC  
		static Vector3 _object_value_get_vector3(Any* objectData, const char* key)
		{
			return invoke<Vector3>(0x46CD3CB66E0825CC, objectData, key);
		} // 0x46CD3CB66E0825CC 0xE84A127A  
		static Any* _object_value_get_object(Any* objectData, const char* key)
		{
			return invoke<Any*>(0xB6B9DDC412FCEEE2, objectData, key);
		} // 0xB6B9DDC412FCEEE2 0xC9C13D8D  
		static Any* _object_value_get_array(Any* objectData, const char* key)
		{
			return invoke<Any*>(0x7A983AA9DA2659ED, objectData, key);
		} // 0x7A983AA9DA2659ED 0x1F2F7D00  
		static int _object_value_get_type(Any* objectData, const char* key)
		{
			return invoke<int>(0x031C55ED33227371, objectData, key);
		} // 0x031C55ED33227371 0x2678342A  
		static void _array_value_add_boolean(Any* arrayData, bool value)
		{
			invoke<Void>(0xF8B0F5A43E928C76, arrayData, value);
		} // 0xF8B0F5A43E928C76 0x08174B90  
		static void _array_value_add_integer(Any* arrayData, int value)
		{
			invoke<Void>(0xCABDB751D86FE93B, arrayData, value);
		} // 0xCABDB751D86FE93B 0xF29C0B36  
		static void _array_value_add_float(Any* arrayData, float value)
		{
			invoke<Void>(0x57A995FD75D37F56, arrayData, value);
		} // 0x57A995FD75D37F56 0xE4302123  
		static void _array_value_add_string(Any* arrayData, const char* value)
		{
			invoke<Void>(0x2F0661C155AEEEAA, arrayData, value);
		} // 0x2F0661C155AEEEAA 0xF3C01350  
		static void _array_value_add_vector3(Any* arrayData, float valueX, float valueY, float valueZ)
		{
			invoke<Void>(0x407F8D034F70F0C2, arrayData, valueX, valueY, valueZ);
		} // 0x407F8D034F70F0C2 0x16F464B6  
		static Any* _array_value_add_object(Any* arrayData) { return invoke<Any*>(0x6889498B3E19C797, arrayData); }
		// 0x6889498B3E19C797 0xC174C71B  
		static bool _array_value_get_boolean(Any* arrayData, int arrayIndex)
		{
			return invoke<bool>(0x50C1B2874E50C114, arrayData, arrayIndex);
		} // 0x50C1B2874E50C114 0xA2E5F921  
		static int _array_value_get_integer(Any* arrayData, int arrayIndex)
		{
			return invoke<int>(0x3E5AE19425CD74BE, arrayData, arrayIndex);
		} // 0x3E5AE19425CD74BE 0xBB120CFC  
		static float _array_value_get_float(Any* arrayData, int arrayIndex)
		{
			return invoke<float>(0xC0C527B525D7CFB5, arrayData, arrayIndex);
		} // 0xC0C527B525D7CFB5 0x08AD2CC2  
		static const char* _array_value_get_string(Any* arrayData, int arrayIndex)
		{
			return invoke<const char*>(0xD3F2FFEB8D836F52, arrayData, arrayIndex);
		} // 0xD3F2FFEB8D836F52 0x93F985A6  
		static Vector3 _array_value_get_vector3(Any* arrayData, int arrayIndex)
		{
			return invoke<Vector3>(0x8D2064E5B64A628A, arrayData, arrayIndex);
		} // 0x8D2064E5B64A628A 0x80E3DA55  
		static Any* _array_value_get_object(Any* arrayData, int arrayIndex)
		{
			return invoke<Any*>(0x8B5FADCC4E3A145F, arrayData, arrayIndex);
		} // 0x8B5FADCC4E3A145F 0xECE81278  
		static int _array_value_get_size(Any* arrayData) { return invoke<int>(0x065DB281590CEA2D, arrayData); }
		// 0x065DB281590CEA2D 0xA8A21766  
		static int _array_value_get_type(Any* arrayData, int arrayIndex)
		{
			return invoke<int>(0x3A0014ADB172A3C5, arrayData, arrayIndex);
		} // 0x3A0014ADB172A3C5 0xFA2402C8  
	}

	namespace fire
	{
		static int start_script_fire(float X, float Y, float Z, int maxChildren, bool isGasFire)
		{
			return invoke<int>(0x6B83617E04503888, X, Y, Z, maxChildren, isGasFire);
		} // 0x6B83617E04503888 0xE7529357  
		static void remove_script_fire(int fireHandle) { invoke<Void>(0x7FF548385680673F, fireHandle); }
		// 0x7FF548385680673F 0x6B21FE26  
		static Any start_entity_fire(Entity entity) { return invoke<Any>(0xF6A9D9708F6F23DF, entity); }
		// 0xF6A9D9708F6F23DF 0x8928428E  
		static void stop_entity_fire(Entity entity) { invoke<Void>(0x7F0DD2EBBB651AFF, entity); }
		// 0x7F0DD2EBBB651AFF 0xCE8C9066  
		static bool is_entity_on_fire(Entity entity) { return invoke<bool>(0x28D3FED7190D3A0B, entity); }
		// 0x28D3FED7190D3A0B 0x8C73E64F  
		static int get_number_of_fires_in_range(float x, float y, float z, float radius)
		{
			return invoke<int>(0x50CAD495A460B305, x, y, z, radius);
		} // 0x50CAD495A460B305 0x654D93B7  
		static void stop_fire_in_range(float x, float y, float z, float radius)
		{
			invoke<Void>(0x056A8A219B8E829F, x, y, z, radius);
		} // 0x056A8A219B8E829F 0x725C7205  
		static bool get_closest_fire_pos(Vector3* outPosition, float x, float y, float z)
		{
			return invoke<bool>(0x352A9F6BCF90081F, outPosition, x, y, z);
		} // 0x352A9F6BCF90081F 0xC4977B47  
		static void add_explosion(float x, float y, float z, int explosionType, float damageScale, bool isAudible,
			bool isInvisible, float cameraShake)
		{
			invoke<Void>(0xE3AD2BDBAEE269AC, x, y, z, explosionType, damageScale, isAudible, isInvisible, cameraShake);
		} // 0xE3AD2BDBAEE269AC 0x10AF5258  
		static void add_owned_explosion(Ped ped, float x, float y, float z, int explosionType, float damageScale,
			bool isAudible, bool isInvisible, float cameraShake)
		{
			invoke<Void>(0x172AA1B624FA1013, ped, x, y, z, explosionType, damageScale, isAudible, isInvisible,
				cameraShake);
		} // 0x172AA1B624FA1013 0x27EE0D67  
		static void add_explosion_with_user_vfx(float x, float y, float z, int explosionType, Hash explosionFx,
			float damageScale, bool isAudible, bool isInvisible, float cameraShake)
		{
			invoke<Void>(0x36DD3FE58B5E5212, x, y, z, explosionType, explosionFx, damageScale, isAudible, isInvisible,
				cameraShake);
		} // 0x36DD3FE58B5E5212 0xCF358946  
		static bool is_explosion_in_area(int explosionType, float x1, float y1, float z1, float x2, float y2, float z2)
		{
			return invoke<bool>(0x2E2EBA0EE7CED0E0, explosionType, x1, y1, z1, x2, y2, z2);
		} // 0x2E2EBA0EE7CED0E0 0xFB40075B  
		static Any _0x6070104b699b2ef4(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6)
		{
			return invoke<Any>(0x6070104B699B2EF4, p0, p1, p2, p3, p4, p5, p6);
		} // 0x6070104B699B2EF4  
		static bool is_explosion_in_sphere(int explosionType, float x, float y, float z, float radius)
		{
			return invoke<bool>(0xAB0F816885B0E483, explosionType, x, y, z, radius);
		} // 0xAB0F816885B0E483 0xD455A7F3  
		static bool is_explosion_in_angled_area(int explosionType, float x1, float y1, float z1, float x2, float y2,
			float z2, float angle)
		{
			return invoke<bool>(0xA079A6C51525DC4B, explosionType, x1, y1, z1, x2, y2, z2, angle);
		} // 0xA079A6C51525DC4B 0x0128FED9  
		static Entity _get_ped_inside_explosion_area(int explosionType, float x1, float y1, float z1, float x2,
			float y2, float z2, float radius)
		{
			return invoke<Entity>(0x14BA4BA137AF6CEC, explosionType, x1, y1, z1, x2, y2, z2, radius);
		} // 0x14BA4BA137AF6CEC 0xAEC0D176  
	}

	namespace decisionevent
	{
		static void set_decision_maker(Ped ped, Hash name) { invoke<Void>(0xB604A2942ADED0EE, ped, name); }
		// 0xB604A2942ADED0EE 0x19CEAC9E  
		static void clear_decision_maker_event_response(Hash name, int type)
		{
			invoke<Void>(0x4FC9381A7AEE8968, name, type);
		} // 0x4FC9381A7AEE8968 0x07ABD94D  
		static void block_decision_maker_event(Hash name, int type) { invoke<Void>(0xE42FCDFD0E4196F7, name, type); }
		// 0xE42FCDFD0E4196F7 0x57506EA6  
		static void unblock_decision_maker_event(Hash name, int type) { invoke<Void>(0xD7CD9CF34F2C99E8, name, type); }
		// 0xD7CD9CF34F2C99E8 0x62A3161D  
		static ScrHandle add_shocking_event_at_position(int type, float x, float y, float z, float duration)
		{
			return invoke<ScrHandle>(0xD9F8455409B525E9, type, x, y, z, duration);
		} // 0xD9F8455409B525E9 0x0B30F779  
		static ScrHandle add_shocking_event_for_entity(int type, Entity entity, float duration)
		{
			return invoke<ScrHandle>(0x7FD8F3BE76F89422, type, entity, duration);
		} // 0x7FD8F3BE76F89422 0xA81B5B71  
		static bool is_shocking_event_in_sphere(int type, float x, float y, float z, float radius)
		{
			return invoke<bool>(0x1374ABB7C15BAB92, type, x, y, z, radius);
		} // 0x1374ABB7C15BAB92 0x2F98823E  
		static bool remove_shocking_event(ScrHandle event) { return invoke<bool>(0x2CDA538C44C6CCE5, event); }
		// 0x2CDA538C44C6CCE5 0xF82D5A87  
		static void remove_all_shocking_events(bool p0) { invoke<Void>(0xEAABE8FDFA21274C, p0); }
		// 0xEAABE8FDFA21274C 0x64DF6282  
		static void remove_shocking_event_spawn_blocking_areas() { invoke<Void>(0x340F1415B68AEADE); }
		// 0x340F1415B68AEADE 0xA0CE89C8  
		static void suppress_shocking_events_next_frame() { invoke<Void>(0x2F9A292AD0A3BD89); }
		// 0x2F9A292AD0A3BD89 0x4CC674B5  
		static void suppress_shocking_event_type_next_frame(int type) { invoke<Void>(0x3FD2EC8BF1F1CF30, type); }
		// 0x3FD2EC8BF1F1CF30 0xA0FDCB82  
		static void suppress_agitation_events_next_frame() { invoke<Void>(0x5F3B7749C112D552); }
		// 0x5F3B7749C112D552 0x80340396  
	}

	namespace zone
	{
		static int get_zone_at_coords(float x, float y, float z) { return invoke<int>(0x27040C25DE6CB2F4, x, y, z); }
		// 0x27040C25DE6CB2F4 0xC9018181  
		static int get_zone_from_name_id(const char* zoneName) { return invoke<int>(0x98CD1D2934B76CC1, zoneName); }
		// 0x98CD1D2934B76CC1 0x8EC68304  
		static int get_zone_popschedule(int zoneId) { return invoke<int>(0x4334BC40AA0CB4BB, zoneId); }
		// 0x4334BC40AA0CB4BB 0x20AB2FC9  
		static const char* get_name_of_zone(float x, float y, float z)
		{
			return invoke<const char*>(0xCD90657D4C30E1CA, x, y, z);
		} // 0xCD90657D4C30E1CA 0x7875CE91  
		static void set_zone_enabled(int zoneId, bool toggle) { invoke<Void>(0xBA5ECEEA120E5611, zoneId, toggle); }
		// 0xBA5ECEEA120E5611 0x04E21B03  
		static int get_zone_scumminess(int zoneId) { return invoke<int>(0x5F7B268D15BA0739, zoneId); }
		// 0x5F7B268D15BA0739 0xB2FB5C4C  
		static void override_popschedule_vehicle_model(int scheduleId, Hash vehicleHash)
		{
			invoke<Void>(0x5F7D596BAC2E7777, scheduleId, vehicleHash);
		} // 0x5F7D596BAC2E7777 0x3F0A3680  
		static void clear_popschedule_override_vehicle_model(int scheduleId)
		{
			invoke<Void>(0x5C0DE367AA0D911C, scheduleId);
		} // 0x5C0DE367AA0D911C 0x7A72A24E  
		static Hash get_hash_of_map_area_at_coords(float x, float y, float z)
		{
			return invoke<Hash>(0x7EE64D51E8498728, x, y, z);
		} // 0x7EE64D51E8498728 0xB5C5C99B  
	}

	namespace rope
	{
		static Object add_rope(float x, float y, float z, float rotX, float rotY, float rotZ, float length,
			int ropeType, float maxLength, float minLength, float p10, bool p11, bool p12,
			bool rigid, float p14, bool breakWhenShot, Any* unkPtr)
		{
			return invoke<Object>(0xE832D760399EB220, x, y, z, rotX, rotY, rotZ, length, ropeType, maxLength, minLength,
				p10, p11, p12, rigid, p14, breakWhenShot, unkPtr);
		} // 0xE832D760399EB220 0xA592EC74  
		static void delete_rope(Object* rope) { invoke<Void>(0x52B4829281364649, rope); }
		// 0x52B4829281364649 0x748D72AF  
		static void delete_child_rope(Object rope) { invoke<Void>(0xAA5D6B1888E4DB20, rope); }
		// 0xAA5D6B1888E4DB20 0xB19B4706  
		static bool does_rope_exist(Object* rope) { return invoke<bool>(0xFD5448BE3111ED96, rope); }
		// 0xFD5448BE3111ED96 0x66E4A3AC  
		static void rope_draw_shadow_enabled(Object* rope, bool toggle)
		{
			invoke<Void>(0xF159A63806BB5BA8, rope, toggle);
		} // 0xF159A63806BB5BA8 0x51523B8C  
		static void load_rope_data(Object rope, const char* rope_preset)
		{
			invoke<Void>(0xCBB203C04D1ABD27, rope, rope_preset);
		} // 0xCBB203C04D1ABD27 0x9E8F1644  
		static void pin_rope_vertex(Object rope, int vertex, float x, float y, float z)
		{
			invoke<Void>(0x2B320CF14146B69A, rope, vertex, x, y, z);
		} // 0x2B320CF14146B69A 0xAE1D101B  
		static void unpin_rope_vertex(Object rope, int vertex) { invoke<Void>(0x4B5AE2EEE4A8F180, rope, vertex); }
		// 0x4B5AE2EEE4A8F180 0xB30B552F  
		static int get_rope_vertex_count(Object rope) { return invoke<int>(0x3655F544CD30F0B5, rope); }
		// 0x3655F544CD30F0B5 0x5131CD2C  
		static void attach_entities_to_rope(Object rope, Entity ent1, Entity ent2, float ent1_x, float ent1_y,
			float ent1_z, float ent2_x, float ent2_y, float ent2_z, float length,
			bool p10, bool p11, const char* boneName1, const char* boneName2)
		{
			invoke<Void>(0x3D95EC8B6D940AC3, rope, ent1, ent2, ent1_x, ent1_y, ent1_z, ent2_x, ent2_y, ent2_z, length,
				p10, p11, boneName1, boneName2);
		} // 0x3D95EC8B6D940AC3 0x7508668F  
		static void attach_rope_to_entity(Object rope, Entity entity, float x, float y, float z, bool p5)
		{
			invoke<Void>(0x4B490A6832559A65, rope, entity, x, y, z, p5);
		} // 0x4B490A6832559A65 0xB25D9536  
		static void detach_rope_from_entity(Object rope, Entity entity)
		{
			invoke<Void>(0xBCF3026912A8647D, rope, entity);
		} // 0xBCF3026912A8647D 0x3E720BEE  
		static void rope_set_update_pinverts(Object rope) { invoke<Void>(0xC8D667EE52114ABA, rope); }
		// 0xC8D667EE52114ABA 0xEAF291A0  
		static void _0xdc57a637a20006ed(Any p0, Any p1) { invoke<Void>(0xDC57A637A20006ED, p0, p1); }
		// 0xDC57A637A20006ED 0x80DB77A7  
		static void _0x36ccb9be67b970fd(Any p0, bool p1) { invoke<Void>(0x36CCB9BE67B970FD, p0, p1); }
		// 0x36CCB9BE67B970FD 0xC67D5CF6  
		static bool _0x84de3b5fb3e666f0(Any* p0) { return invoke<bool>(0x84DE3B5FB3E666F0, p0); }
		// 0x84DE3B5FB3E666F0 0x7A18BB9C  
		static Vector3 get_rope_last_vertex_coord(Object rope) { return invoke<Vector3>(0x21BB0FBD3E217C2D, rope); }
		// 0x21BB0FBD3E217C2D 0x91F6848B  
		static Vector3 get_rope_vertex_coord(Object rope, int vertex)
		{
			return invoke<Vector3>(0xEA61CA8E80F09E4D, rope, vertex);
		} // 0xEA61CA8E80F09E4D 0x84374452  
		static void start_rope_winding(Object rope) { invoke<Void>(0x1461C72C889E343E, rope); }
		// 0x1461C72C889E343E 0x5187BED3  
		static void stop_rope_winding(Object rope) { invoke<Void>(0xCB2D4AB84A19AA7C, rope); }
		// 0xCB2D4AB84A19AA7C 0x46826B53  
		static void start_rope_unwinding_front(Object rope) { invoke<Void>(0x538D1179EC1AA9A9, rope); }
		// 0x538D1179EC1AA9A9 0xFC0DB4C3  
		static void stop_rope_unwinding_front(Object rope) { invoke<Void>(0xFFF3A50779EFBBB3, rope); }
		// 0xFFF3A50779EFBBB3 0x2EEDB18F  
		static void rope_convert_to_simple(Object rope) { invoke<Void>(0x5389D48EFA2F079A, rope); }
		// 0x5389D48EFA2F079A 0x43E92628  
		static void rope_load_textures() { invoke<Void>(0x9B9039DBF2D258C1); } // 0x9B9039DBF2D258C1 0xBA97CE91  
		static bool rope_are_textures_loaded() { return invoke<bool>(0xF2D0E6A75CC05597); }
		// 0xF2D0E6A75CC05597 0x5FDC1047  
		static void rope_unload_textures() { invoke<Void>(0x6CE36C35C1AC8163); } // 0x6CE36C35C1AC8163 0x584463E0  
		static bool _0x271c9d3aca5d6409(Object rope) { return invoke<bool>(0x271C9D3ACA5D6409, rope); }
		// 0x271C9D3ACA5D6409  
		static void _0xbc0ce682d4d05650(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9,
			Any p10, Any p11, Any p12, Any p13)
		{
			invoke<Void>(0xBC0CE682D4D05650, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13);
		} // 0xBC0CE682D4D05650 0x106BA127  
		static void _0xb1b6216ca2e7b55e(Any p0, bool p1, bool p2) { invoke<Void>(0xB1B6216CA2E7B55E, p0, p1, p2); }
		// 0xB1B6216CA2E7B55E 0x7C6F7668  
		static void _0xb743f735c03d7810(Any p0, Any p1) { invoke<Void>(0xB743F735C03D7810, p0, p1); }
		// 0xB743F735C03D7810 0x686672DD  
		static float _get_rope_length(Object rope) { return invoke<float>(0x73040398DFF9A4A6, rope); }
		// 0x73040398DFF9A4A6 0xFD309DC8  
		static void rope_force_length(Object rope, float length) { invoke<Void>(0xD009F759A723DB1B, rope, length); }
		// 0xD009F759A723DB1B 0xABF3130F  
		static void rope_reset_length(Object rope, float length) { invoke<Void>(0xC16DE94D9BEA14A0, rope, length); }
		// 0xC16DE94D9BEA14A0 0xC8A423A3  
		static void apply_impulse_to_cloth(float posX, float posY, float posZ, float vecX, float vecY, float vecZ,
			float impulse)
		{
			invoke<Void>(0xE37F721824571784, posX, posY, posZ, vecX, vecY, vecZ, impulse);
		} // 0xE37F721824571784 0xA2A5C9FE  
		static void set_damping(Object rope, int vertex, float value)
		{
			invoke<Void>(0xEEA3B200A6FEB65B, rope, vertex, value);
		} // 0xEEA3B200A6FEB65B 0xCFB37773  
		static void activate_physics(Entity entity) { invoke<Void>(0x710311ADF0E20730, entity); }
		// 0x710311ADF0E20730 0x031711B8  
		static void set_cgoffset(Object rope, float x, float y, float z)
		{
			invoke<Void>(0xD8FA3908D7B86904, rope, x, y, z);
		} // 0xD8FA3908D7B86904 0x59910AB2  
		static Vector3 get_cgoffset(Object rope) { return invoke<Vector3>(0x8214A4B5A7A33612, rope); }
		// 0x8214A4B5A7A33612 0x49A11F0D  
		static void set_cg_at_boundcenter(Object rope) { invoke<Void>(0xBE520D9761FF811F, rope); }
		// 0xBE520D9761FF811F 0xA5B55421  
		static void break_entity_glass(Any p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7,
			float p8, Any p9, bool p10)
		{
			invoke<Void>(0x2E648D16F6E308F3, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10);
		} // 0x2E648D16F6E308F3 0xD0E0402F  
		static void set_disable_breaking(Object rope, bool enabled) { invoke<Void>(0x5CEC1A84620E7D5B, rope, enabled); }
		// 0x5CEC1A84620E7D5B 0xEE77C326  
		static void _0xcc6e963682533882(Any p0) { invoke<Void>(0xCC6E963682533882, p0); } // 0xCC6E963682533882  
		static void set_disable_frag_damage(Object object, bool toggle)
		{
			invoke<Void>(0x01BA3AED21C16CFB, object, toggle);
		} // 0x01BA3AED21C16CFB 0x97269DC8  
	}

	namespace water
	{
		static bool get_water_height(float x, float y, float z, float height)
		{
			return invoke<bool>(0xF6829842C06AE524, x, y, z, height);
		} // 0xF6829842C06AE524 0xD864E17C  
		static bool get_water_height_no_waves(float x, float y, float z, float* height)
		{
			return invoke<bool>(0x8EE6B53CE13A9794, x, y, z, height);
		} // 0x8EE6B53CE13A9794 0x262017F8  
		static bool test_probe_against_water(float x1, float y1, float z1, float x2, float y2, float z2,
			Vector3* result)
		{
			return invoke<bool>(0xFFA5D878809819DB, x1, y1, z1, x2, y2, z2, result);
		} // 0xFFA5D878809819DB 0xAA4AE00C  
		static bool test_probe_against_all_water(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7)
		{
			return invoke<bool>(0x8974647ED222EA5F, p0, p1, p2, p3, p4, p5, p6, p7);
		} // 0x8974647ED222EA5F 0x4A962D55  
		static bool test_vertical_probe_against_all_water(float x, float y, float z, Any p3, float* height)
		{
			return invoke<bool>(0x2B3451FA1E3142E2, x, y, z, p3, height);
		} // 0x2B3451FA1E3142E2 0x4C71D143  
		static void modify_water(float x, float y, float radius, float height)
		{
			invoke<Void>(0xC443FD757C3BA637, x, y, radius, height);
		} // 0xC443FD757C3BA637 0xC49E005A  
		static int _add_current_rise(float x, float y, float z, float radius, float unk)
		{
			return invoke<int>(0xFDBF4CDBC07E1706, x, y, z, radius, unk);
		} // 0xFDBF4CDBC07E1706  
		static void _remove_current_rise(int p0) { invoke<Void>(0xB1252E3E59A82AAF, p0); } // 0xB1252E3E59A82AAF  
		static void _set_current_intensity(float intensity) { invoke<Void>(0xB96B00E976BE977F, intensity); }
		// 0xB96B00E976BE977F  
		static float _get_current_intensity() { return invoke<float>(0x2B2A2CC86778B619); } // 0x2B2A2CC86778B619  
		static void _reset_current_intensity() { invoke<Void>(0x5E5E99285AE812DB); } // 0x5E5E99285AE812DB  
	}

	namespace worldprobe
	{
		static int start_shape_test_los_probe(float x1, float y1, float z1, float x2, float y2, float z2, int flags,
			Entity p7, int p8)
		{
			return invoke<int>(0x7EE9F5D83DD4F90E, x1, y1, z1, x2, y2, z2, flags, p7, p8);
		} // 0x7EE9F5D83DD4F90E 0xEFAF4BA6  
		static int _start_shape_test_ray(float x1, float y1, float z1, float x2, float y2, float z2, int flags,
			Entity entity, int p8)
		{
			return invoke<int>(0x377906D8A31E5586, x1, y1, z1, x2, y2, z2, flags, entity, p8);
		} // 0x377906D8A31E5586 0x8251485D  
		static int start_shape_test_bounding_box(Entity entity, int flags1, int flags2)
		{
			return invoke<int>(0x052837721A854EC7, entity, flags1, flags2);
		} // 0x052837721A854EC7 0xCEEAD94B  
		static int start_shape_test_box(float x, float y, float z, float x1, float y2, float z2, float rotX, float rotY,
			float rotZ, Any p9, Any p10, Any entity, Any p12)
		{
			return invoke<int>(0xFE466162C4401D18, x, y, z, x1, y2, z2, rotX, rotY, rotZ, p9, p10, entity, p12);
		} // 0xFE466162C4401D18 0x249BC876  
		static int start_shape_test_bound(Entity entity, int flags1, int flags2)
		{
			return invoke<int>(0x37181417CE7C8900, entity, flags1, flags2);
		} // 0x37181417CE7C8900 0x13BC46C0  
		static int start_shape_test_capsule(float x1, float y1, float z1, float x2, float y2, float z2, float radius,
			int flags, Entity entity, int p9)
		{
			return invoke<int>(0x28579D1B8F8AAC80, x1, y1, z1, x2, y2, z2, radius, flags, entity, p9);
		} // 0x28579D1B8F8AAC80 0x591EA833  
		static int _start_shape_test_capsule_2(float x1, float y1, float z1, float x2, float y2, float z2, float radius,
			int flags, Entity entity, Any p9)
		{
			return invoke<int>(0xE6AC6C45FBE83004, x1, y1, z1, x2, y2, z2, radius, flags, entity, p9);
		} // 0xE6AC6C45FBE83004 0x4559460A  
		static int _start_shape_test_surrounding_coords(Vector3* pVec1, Vector3* pVec2, int flag, Entity entity,
			int flag2)
		{
			return invoke<int>(0xFF6BE494C7987F34, pVec1, pVec2, flag, entity, flag2);
		} // 0xFF6BE494C7987F34  
		static int get_shape_test_result(int rayHandle, bool* hit, Vector3* endCoords, Vector3* surfaceNormal,
			Entity* entityHit)
		{
			return invoke<int>(0x3D87450E15D98694, rayHandle, hit, endCoords, surfaceNormal, entityHit);
		} // 0x3D87450E15D98694 0xF3C2875A  
		static int _get_shape_test_result_ex(int rayHandle, bool* hit, Vector3* endCoords, Vector3* surfaceNormal,
			Hash* materialHash, Entity* entityHit)
		{
			return invoke<int>(0x65287525D951F6BE, rayHandle, hit, endCoords, surfaceNormal, materialHash, entityHit);
		} // 0x65287525D951F6BE 0x4301E10C  
		static void _shape_test_result_entity(Entity entityHit) { invoke<Void>(0x2B3334BCA57CD799, entityHit); }
		// 0x2B3334BCA57CD799 0xEC2AAF06  
	}

	namespace network
	{
		static bool network_is_signed_in() { return invoke<bool>(0x054354A99211EB96); }
		// 0x054354A99211EB96 0xADD0B40F  
		static bool network_is_signed_online() { return invoke<bool>(0x1077788E268557C2); }
		// 0x1077788E268557C2 0x6E5BDCE2  
		static bool _0xbd545d44cce70597() { return invoke<bool>(0xBD545D44CCE70597); } // 0xBD545D44CCE70597  
		static Any _0xebcab9e5048434f4() { return invoke<Any>(0xEBCAB9E5048434F4); } // 0xEBCAB9E5048434F4  
		static Any _0x74fb3e29e6d10fa9() { return invoke<Any>(0x74FB3E29E6D10FA9); } // 0x74FB3E29E6D10FA9  
		static Any _0x7808619f31ff22db() { return invoke<Any>(0x7808619F31FF22DB); } // 0x7808619F31FF22DB  
		static Any _0xa0fa4ec6a05da44e() { return invoke<Any>(0xA0FA4EC6A05DA44E); } // 0xA0FA4EC6A05DA44E  
		static bool _network_are_ros_available() { return invoke<bool>(0x85443FF4C328F53B); }
		// 0x85443FF4C328F53B 0x3FB40673  
		static bool _network_is_psn_available() { return invoke<bool>(0x8D11E61A4ABF49CC); } // 0x8D11E61A4ABF49CC  
		static bool network_is_cloud_available() { return invoke<bool>(0x9A4CF4F48AD77302); }
		// 0x9A4CF4F48AD77302 0xC7FF5AFC  
		static bool _0x67a5589628e0cff6() { return invoke<bool>(0x67A5589628E0CFF6); } // 0x67A5589628E0CFF6 0x66EC713F  
		static Any _0xba9775570db788cf() { return invoke<Any>(0xBA9775570DB788CF); } // 0xBA9775570DB788CF 0x358D1D77  
		static bool network_is_host() { return invoke<bool>(0x8DB296B814EDDA07); } // 0x8DB296B814EDDA07 0xE46AC10F  
		static Any _0xa306f470d1660581() { return invoke<Any>(0xA306F470D1660581); } // 0xA306F470D1660581  
		static bool _0x4237e822315d8ba9() { return invoke<bool>(0x4237E822315D8BA9); } // 0x4237E822315D8BA9  
		static bool network_have_online_privileges() { return invoke<bool>(0x25CB5A9F37BFD063); }
		// 0x25CB5A9F37BFD063 0xEF63BFDF  
		static bool _0x1353f87e89946207() { return invoke<bool>(0x1353F87E89946207); } // 0x1353F87E89946207  
		static bool _0x72d918c99bcacc54(Any p0) { return invoke<bool>(0x72D918C99BCACC54, p0); }
		// 0x72D918C99BCACC54 0x1F88819D  
		static bool _0xaeef48cdf5b6ce7c(Any p0, Any p1) { return invoke<bool>(0xAEEF48CDF5B6CE7C, p0, p1); }
		// 0xAEEF48CDF5B6CE7C 0x2D817A5E  
		static bool _0x78321bea235fd8cd(Any p0, bool p1) { return invoke<bool>(0x78321BEA235FD8CD, p0, p1); }
		// 0x78321BEA235FD8CD  
		static bool _0x595f028698072dd9(Any p0, Any p1, bool p2)
		{
			return invoke<bool>(0x595F028698072DD9, p0, p1, p2);
		} // 0x595F028698072DD9 0xBB54AA3D  
		static bool _0x83f28ce49fbbffba(Any p0, Any p1, bool p2)
		{
			return invoke<bool>(0x83F28CE49FBBFFBA, p0, p1, p2);
		} // 0x83F28CE49FBBFFBA  
		static Any* _0x76bf03fadbf154f5() { return invoke<Any*>(0x76BF03FADBF154F5); } // 0x76BF03FADBF154F5  
		static Any _0x9614b71f8adb982b() { return invoke<Any>(0x9614B71F8ADB982B); } // 0x9614B71F8ADB982B  
		static Any _0x5ea784d197556507() { return invoke<Any>(0x5EA784D197556507); } // 0x5EA784D197556507  
		static Any _0xa8acb6459542a8c8() { return invoke<Any>(0xA8ACB6459542A8C8); } // 0xA8ACB6459542A8C8  
		static void _0x83fe8d7229593017() { invoke<Void>(0x83FE8D7229593017); } // 0x83FE8D7229593017  
		static bool network_can_bail() { return invoke<bool>(0x580CE4438479CC61); } // 0x580CE4438479CC61 0x60E1FEDF  
		static void network_bail() { invoke<Void>(0x95914459A87EBA28); } // 0x95914459A87EBA28 0x87D79A04  
		static void _0x283b6062a2c01e9b() { invoke<Void>(0x283B6062A2C01E9B); } // 0x283B6062A2C01E9B 0x96E28FE2  
		static bool network_can_access_multiplayer(int* loadingState)
		{
			return invoke<bool>(0xAF50DA1A3F8B1BA4, loadingState);
		} // 0xAF50DA1A3F8B1BA4 0xA520B982  
		static ScrHandle network_is_multiplayer_disabled() { return invoke<ScrHandle>(0x9747292807126EDA); }
		// 0x9747292807126EDA 0x05518C0F  
		static bool network_can_enter_multiplayer() { return invoke<bool>(0x7E782A910C362C25); }
		// 0x7E782A910C362C25 0x4A23B9C9  
		static Any network_session_enter(Any p0, Any p1, Any p2, int maxPlayers, Any p4, Any p5)
		{
			return invoke<Any>(0x330ED4D05491934F, p0, p1, p2, maxPlayers, p4, p5);
		} // 0x330ED4D05491934F 0x543CD2BE  
		static bool network_session_friend_matchmaking(int p0, int p1, int maxPlayers, bool p3)
		{
			return invoke<bool>(0x2CFC76E0D087C994, p0, p1, maxPlayers, p3);
		} // 0x2CFC76E0D087C994 0x4E53202A  
		static bool network_session_crew_matchmaking(int p0, int p1, int p2, int maxPlayers, bool p4)
		{
			return invoke<bool>(0x94BC51E9449D917F, p0, p1, p2, maxPlayers, p4);
		} // 0x94BC51E9449D917F 0xD7624E6B  
		static bool network_session_activity_quickmatch(Any p0, Any p1, Any p2, Any p3)
		{
			return invoke<bool>(0xBE3E347A87ACEB82, p0, p1, p2, p3);
		} // 0xBE3E347A87ACEB82 0x3F75CC38  
		static bool network_session_host(int p0, int maxPlayers, bool p2)
		{
			return invoke<bool>(0x6F3D4ED9BEE4E61D, p0, maxPlayers, p2);
		} // 0x6F3D4ED9BEE4E61D 0x6716460F  
		static bool network_session_host_closed(int p0, int maxPlayers)
		{
			return invoke<bool>(0xED34C0C02C098BB7, p0, maxPlayers);
		} // 0xED34C0C02C098BB7 0x8AC9EA19  
		static bool network_session_host_friends_only(int p0, int maxPlayers)
		{
			return invoke<bool>(0xB9CFD27A5D578D83, p0, maxPlayers);
		} // 0xB9CFD27A5D578D83 0x26864403  
		static bool network_session_is_closed_friends() { return invoke<bool>(0xFBCFA2EA2E206890); }
		// 0xFBCFA2EA2E206890 0x56E75FE4  
		static bool network_session_is_closed_crew() { return invoke<bool>(0x74732C6CA90DA2B4); }
		// 0x74732C6CA90DA2B4 0xA95299B9  
		static bool network_session_is_solo() { return invoke<bool>(0xF3929C2379B60CCE); }
		// 0xF3929C2379B60CCE 0x3D2C1916  
		static bool network_session_is_private() { return invoke<bool>(0xCEF70AA5B3F89BA1); }
		// 0xCEF70AA5B3F89BA1 0xDB67785D  
		static bool network_session_end(bool p0, bool p1) { return invoke<bool>(0xA02E59562D711006, p0, p1); }
		// 0xA02E59562D711006 0xBCACBEA2  
		static void network_session_kick_player(Player player) { invoke<Void>(0xFA8904DC5F304220, player); }
		// 0xFA8904DC5F304220 0x1E20138A  
		static bool _network_session_is_player_voted_to_kick(Player player)
		{
			return invoke<bool>(0xD6D09A6F32F49EF1, player);
		} // 0xD6D09A6F32F49EF1 0x8A559D26  
		static Any _0x59df79317f85a7e0() { return invoke<Any>(0x59DF79317F85A7E0); } // 0x59DF79317F85A7E0  
		static Any _0xffe1e5b792d92b34() { return invoke<Any>(0xFFE1E5B792D92B34); } // 0xFFE1E5B792D92B34  
		static void _network_sctv_slots(int p0) { invoke<Void>(0x49EC8030F5015F8B, p0); }
		// 0x49EC8030F5015F8B 0x3C3E2AB6  
		static void _network_session_set_max_players(int playerType, int playerCount)
		{
			invoke<Void>(0x8B6A4DD0AF9CE215, playerType, playerCount);
		} // 0x8B6A4DD0AF9CE215 0x5F29A7E0  
		static int _network_session_get_unk(int p0) { return invoke<int>(0x56CE820830EF040B, p0); }
		// 0x56CE820830EF040B 0x36EAD960  
		static void _0xcae55f48d3d7875c(Any p0) { invoke<Void>(0xCAE55F48D3D7875C, p0); }
		// 0xCAE55F48D3D7875C 0x5BE529F7  
		static void _0xf49abc20d8552257(Any p0) { invoke<Void>(0xF49ABC20D8552257, p0); }
		// 0xF49ABC20D8552257 0x454C7B67  
		static void _0x4811bbac21c5fcd5(Any p0) { invoke<Void>(0x4811BBAC21C5FCD5, p0); }
		// 0x4811BBAC21C5FCD5 0xE5961511  
		static void _0x5539c3ebf104a53a(bool p0) { invoke<Void>(0x5539C3EBF104A53A, p0); }
		// 0x5539C3EBF104A53A 0xAE396263  
		static void _0x702bc4d605522539(Any p0) { invoke<Void>(0x702BC4D605522539, p0); }
		// 0x702BC4D605522539 0x913FD7D6  
		static void _0x3f52e880aaf6c8ca(bool p0) { invoke<Void>(0x3F52E880AAF6C8CA, p0); }
		// 0x3F52E880AAF6C8CA 0xB3D9A67F  
		static void _0xf1eea2dda9ffa69d(Any p0) { invoke<Void>(0xF1EEA2DDA9FFA69D, p0); }
		// 0xF1EEA2DDA9FFA69D 0x6CC062FC  
		static void _0x1153fa02a659051c() { invoke<Void>(0x1153FA02A659051C); } // 0x1153FA02A659051C 0x57F9BC83  
		static void _network_session_hosted(bool p0) { invoke<Void>(0xC19F6C8E7865A6FF, p0); }
		// 0xC19F6C8E7865A6FF 0xF3768F90  
		static void network_add_followers(int* p0, int p1) { invoke<Void>(0x236406F60CF216D6, p0, p1); }
		// 0x236406F60CF216D6 0x0EC62629  
		static void network_clear_followers() { invoke<Void>(0x058F43EC59A8631A); } // 0x058F43EC59A8631A 0x5E557307  
		static void _network_get_server_time(int* hours, int* minutes, int* seconds)
		{
			invoke<Void>(0x6D03BFBD643B2A02, hours, minutes, seconds);
		} // 0x6D03BFBD643B2A02 0x74E8C53E  
		static void _0x600f8cb31c7aab6e(Any p0) { invoke<Void>(0x600F8CB31C7AAB6E, p0); }
		// 0x600F8CB31C7AAB6E 0x959E43A3  
		static bool network_x_affects_gamers(Any p0) { return invoke<bool>(0xE532D6811B3A4D2A, p0); }
		// 0xE532D6811B3A4D2A 0x7771AB83  
		static bool network_find_matched_gamers(Any p0, float p1, float p2, float p3)
		{
			return invoke<bool>(0xF7B2CFDE5C9F700D, p0, p1, p2, p3);
		} // 0xF7B2CFDE5C9F700D 0xA13045D4  
		static bool network_is_finding_gamers() { return invoke<bool>(0xDDDF64C91BFCF0AA); }
		// 0xDDDF64C91BFCF0AA 0xA6DAA79F  
		static Any _0xf9b83b77929d8863() { return invoke<Any>(0xF9B83B77929D8863); } // 0xF9B83B77929D8863 0xBEDC4503  
		static int network_get_num_found_gamers() { return invoke<int>(0xA1B043EE79A916FB); }
		// 0xA1B043EE79A916FB 0xF4B80C7E  
		static bool network_get_found_gamer(Any* p0, Any p1) { return invoke<bool>(0x9DCFF2AFB68B3476, p0, p1); }
		// 0x9DCFF2AFB68B3476 0xA08C9141  
		static void network_clear_found_gamers() { invoke<Void>(0x6D14CCEE1B40381A); } // 0x6D14CCEE1B40381A 0x6AA9A154  
		static bool _0x85a0ef54a500882c(Any* p0) { return invoke<bool>(0x85A0EF54A500882C, p0); }
		// 0x85A0EF54A500882C 0x42BD0780  
		static Any _0x2cc848a861d01493() { return invoke<Any>(0x2CC848A861D01493); } // 0x2CC848A861D01493 0xBEB98840  
		static Any _0x94a8394d150b013a() { return invoke<Any>(0x94A8394D150B013A); } // 0x94A8394D150B013A 0x08029970  
		static Any _0x5ae17c6b0134b7f1() { return invoke<Any>(0x5AE17C6B0134B7F1); } // 0x5AE17C6B0134B7F1 0xC871E745  
		static bool _0x02a8bec6fd9af660(Any* p0, Any p1) { return invoke<bool>(0x02A8BEC6FD9AF660, p0, p1); }
		// 0x02A8BEC6FD9AF660 0xB5ABC4B4  
		static void _0x86e0660e4f5c956d() { invoke<Void>(0x86E0660E4F5C956D); } // 0x86E0660E4F5C956D 0x3F7EDBBD  
		static void network_is_player_animation_drawing_synchronized() { invoke<Void>(0xC6F8AB8A4189CF3A); }
		// 0xC6F8AB8A4189CF3A 0x3D6360B5  
		static void network_session_cancel_invite() { invoke<Void>(0x2FBF47B1B36D36F9); }
		// 0x2FBF47B1B36D36F9 0x20317535  
		static void network_session_force_cancel_invite() { invoke<Void>(0xA29177F7703B5644); }
		// 0xA29177F7703B5644 0x3FD49D3B  
		static bool network_has_pending_invite() { return invoke<bool>(0xAC8C7B9B88C4A668); }
		// 0xAC8C7B9B88C4A668 0x0C207D6E  
		static Any _0xc42dd763159f3461() { return invoke<Any>(0xC42DD763159F3461); } // 0xC42DD763159F3461 0xFBBAC350  
		static Any _0x62a0296c1bb1ceb3() { return invoke<Any>(0x62A0296C1BB1CEB3); } // 0x62A0296C1BB1CEB3 0x0907A6BF  
		static bool network_session_was_invited() { return invoke<bool>(0x23DFB504655D0CE4); }
		// 0x23DFB504655D0CE4 0x6A0BEA60  
		static void network_session_get_inviter(int* networkHandle) { invoke<Void>(0xE57397B4A3429DD0, networkHandle); }
		// 0xE57397B4A3429DD0 0xE9C6B3FD  
		static Any _0xd313de83394af134() { return invoke<Any>(0xD313DE83394AF134); } // 0xD313DE83394AF134 0x3EA9D44C  
		static Any _0xbdb6f89c729cf388() { return invoke<Any>(0xBDB6F89C729CF388); } // 0xBDB6F89C729CF388  
		static void network_suppress_invite(bool toggle) { invoke<Void>(0xA0682D67EF1FBA3D, toggle); }
		// 0xA0682D67EF1FBA3D 0x323DC78C  
		static void network_block_invites(bool toggle) { invoke<Void>(0x34F9E9049454A7A0, toggle); }
		// 0x34F9E9049454A7A0 0xD156FD1A  
		static void _0xcfeb8af24fc1d0bb(bool p0) { invoke<Void>(0xCFEB8AF24FC1D0BB, p0); } // 0xCFEB8AF24FC1D0BB  
		static void _0xf814fec6a19fd6e0() { invoke<Void>(0xF814FEC6A19FD6E0); } // 0xF814FEC6A19FD6E0 0x32B7A076  
		static void _network_block_kicked_players(bool p0) { invoke<Void>(0x6B07B9CE4D390375, p0); }
		// 0x6B07B9CE4D390375 0x0FCE995D  
		static void _0x7ac752103856fb20(bool p0) { invoke<Void>(0x7AC752103856FB20, p0); }
		// 0x7AC752103856FB20 0xA639DCA2  
		static Any _0x74698374c45701d2() { return invoke<Any>(0x74698374C45701D2); } // 0x74698374C45701D2 0x70ED476A  
		static void _0x140e6a44870a11ce() { invoke<Void>(0x140E6A44870A11CE); } // 0x140E6A44870A11CE 0x50507BED  
		static void network_session_host_single_player(int p0) { invoke<Void>(0xC74C33FCA52856D5, p0); }
		// 0xC74C33FCA52856D5 0xF3B1CA85  
		static void network_session_leave_single_player() { invoke<Void>(0x3442775428FD2DAA); }
		// 0x3442775428FD2DAA 0xC692F86A  
		static bool network_is_game_in_progress() { return invoke<bool>(0x10FAB35428CCC9D7); }
		// 0x10FAB35428CCC9D7 0x09B88E3E  
		static bool network_is_session_active() { return invoke<bool>(0xD83C2B94E7508980); }
		// 0xD83C2B94E7508980 0x715CB8C4  
		static bool network_is_in_session() { return invoke<bool>(0xCA97246103B63917); }
		// 0xCA97246103B63917 0x4BC4105E  
		static bool network_is_session_started() { return invoke<bool>(0x9DE624D2FC4B603F); }
		// 0x9DE624D2FC4B603F 0x9D854A37  
		static bool network_is_session_busy() { return invoke<bool>(0xF4435D66A8E2905E); }
		// 0xF4435D66A8E2905E 0x8592152D  
		static bool network_can_session_end() { return invoke<bool>(0x4EEBC3694E49C572); }
		// 0x4EEBC3694E49C572 0xE1FCCDBA  
		static void network_session_mark_visible(bool p0) { invoke<Void>(0x271CC6AB59EBF9A5, p0); }
		// 0x271CC6AB59EBF9A5 0x7017257D  
		static Any network_session_is_visible() { return invoke<Any>(0xBA416D68C631496A); }
		// 0xBA416D68C631496A 0x4977AC28  
		static void network_session_block_join_requests(bool p0) { invoke<Void>(0xA73667484D7037C3, p0); }
		// 0xA73667484D7037C3 0xE6EEF8AF  
		static void network_session_change_slots(int p0, bool p1) { invoke<Void>(0xB4AB419E0D86ACAE, p0, p1); }
		// 0xB4AB419E0D86ACAE 0x6BB93227  
		static Any _0x53afd64c6758f2f9() { return invoke<Any>(0x53AFD64C6758F2F9); } // 0x53AFD64C6758F2F9  
		static void network_session_voice_host() { invoke<Void>(0x9C1556705F864230); } // 0x9C1556705F864230 0x345C2980  
		static void network_session_voice_leave() { invoke<Void>(0x6793E42BE02B575D); }
		// 0x6793E42BE02B575D 0xE566C7DA  
		static void _network_voice_connect_to_player(Any* globalPtr) { invoke<Void>(0xABD5E88B8A2D3DB2, globalPtr); }
		// 0xABD5E88B8A2D3DB2 0x9DFD89E6  
		static void network_set_keep_focuspoint(bool p0, Any p1) { invoke<Void>(0x7F8413B7FC2AA6B9, p0, p1); }
		// 0x7F8413B7FC2AA6B9 0x075321B5  
		static void _0x5b8ed3db018927b1(Any p0) { invoke<Void>(0x5B8ED3DB018927B1, p0); }
		// 0x5B8ED3DB018927B1 0x6EFC2FD0  
		static bool _0x855bc38818f6f684() { return invoke<bool>(0x855BC38818F6F684); } // 0x855BC38818F6F684 0x60AA4AA1  
		static Any _0xb5d3453c98456528() { return invoke<Any>(0xB5D3453C98456528); } // 0xB5D3453C98456528  
		static bool _0xef0912ddf7c4cb4b() { return invoke<bool>(0xEF0912DDF7C4CB4B); } // 0xEF0912DDF7C4CB4B 0x132CA01E  
		static bool network_send_text_message(const char* message, int* networkHandle)
		{
			return invoke<bool>(0x3A214F2EC889B100, message, networkHandle);
		} // 0x3A214F2EC889B100 0xAFFEA720  
		static void network_set_activity_spectator(bool toggle) { invoke<Void>(0x75138790B4359A74, toggle); }
		// 0x75138790B4359A74 0xFC9AD060  
		static Any network_is_activity_spectator() { return invoke<Any>(0x12103B9E0C9F92FB); }
		// 0x12103B9E0C9F92FB 0xAF329720  
		static void network_set_activity_spectator_max(int maxSpectators)
		{
			invoke<Void>(0x9D277B76D1D12222, maxSpectators);
		} // 0x9D277B76D1D12222 0x74E0BC0A  
		static int network_get_activity_player_num(bool p0) { return invoke<int>(0x73E2B500410DA5A2, p0); }
		// 0x73E2B500410DA5A2 0x31F951FD  
		static bool network_is_activity_spectator_from_handle(int* networkHandle)
		{
			return invoke<bool>(0x2763BBAA72A7BCB9, networkHandle);
		} // 0x2763BBAA72A7BCB9 0x58F1DF7D  
		static Any network_host_transition(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5)
		{
			return invoke<Any>(0xA60BB5CE242BB254, p0, p1, p2, p3, p4, p5);
		} // 0xA60BB5CE242BB254 0x146764FB  
		static bool network_do_transition_quickmatch(Any p0, Any p1, Any p2, Any p3)
		{
			return invoke<bool>(0x71FB0EBCD4915D56, p0, p1, p2, p3);
		} // 0x71FB0EBCD4915D56 0x2FF65C0B  
		static bool network_do_transition_quickmatch_async(Any p0, Any p1, Any p2, Any p3)
		{
			return invoke<bool>(0xA091A5E44F0072E5, p0, p1, p2, p3);
		} // 0xA091A5E44F0072E5 0x47D61C99  
		static bool network_do_transition_quickmatch_with_group(Any p0, Any p1, Any p2, Any p3, Any* p4, Any p5)
		{
			return invoke<bool>(0x9C4AB58491FDC98A, p0, p1, p2, p3, p4, p5);
		} // 0x9C4AB58491FDC98A 0x5CE60A11  
		static Any network_join_group_activity() { return invoke<Any>(0xA06509A691D12BE4); }
		// 0xA06509A691D12BE4 0x0D7E5CF9  
		static void _0xb13e88e655e5a3bc() { invoke<Void>(0xB13E88E655E5A3BC); } // 0xB13E88E655E5A3BC 0x36A5F2DA  
		static Any _0x6512765e3be78c50() { return invoke<Any>(0x6512765E3BE78C50); } // 0x6512765E3BE78C50  
		static Any _0x0dbd5d7e3c5bec3b() { return invoke<Any>(0x0DBD5D7E3C5BEC3B); } // 0x0DBD5D7E3C5BEC3B  
		static bool _0x5dc577201723960a() { return invoke<bool>(0x5DC577201723960A); } // 0x5DC577201723960A  
		static bool _0x5a6aa44ff8e931e6() { return invoke<bool>(0x5A6AA44FF8E931E6); } // 0x5A6AA44FF8E931E6  
		static void _0x261e97ad7bcf3d40(bool p0) { invoke<Void>(0x261E97AD7BCF3D40, p0); }
		// 0x261E97AD7BCF3D40 0x7EF353E1  
		static void _0x39917e1b4cb0f911(bool p0) { invoke<Void>(0x39917E1B4CB0F911, p0); }
		// 0x39917E1B4CB0F911 0xF60986FC  
		static void network_set_transition_creator_handle(Any* p0) { invoke<Void>(0xEF26739BCD9907D5, p0); }
		// 0xEF26739BCD9907D5 0x1DD01FE7  
		static void network_clear_transition_creator_handle() { invoke<Void>(0xFB3272229A82C759); }
		// 0xFB3272229A82C759 0x8BB336F7  
		static bool network_invite_gamers_to_transition(Any* p0, Any p1)
		{
			return invoke<bool>(0x4A595C32F77DFF76, p0, p1);
		} // 0x4A595C32F77DFF76 0x5332E645  
		static void network_set_gamer_invited_to_transition(int* networkHandle)
		{
			invoke<Void>(0xCA2C8073411ECDB6, networkHandle);
		} // 0xCA2C8073411ECDB6 0x17F1C69D  
		static Any network_leave_transition() { return invoke<Any>(0xD23A1A815D21DB19); }
		// 0xD23A1A815D21DB19 0x3A3599B7  
		static Any network_launch_transition() { return invoke<Any>(0x2DCF46CB1A4F0884); }
		// 0x2DCF46CB1A4F0884 0xE3570BA2  
		static void _0xa2e9c1ab8a92e8cd(bool p0) { invoke<Void>(0xA2E9C1AB8A92E8CD, p0); } // 0xA2E9C1AB8A92E8CD  
		static void network_bail_transition() { invoke<Void>(0xEAA572036990CD1B); } // 0xEAA572036990CD1B 0xB59D74CA  
		static bool network_do_transition_to_game(bool p0, int maxPlayers)
		{
			return invoke<bool>(0x3E9BB38102A589B0, p0, maxPlayers);
		} // 0x3E9BB38102A589B0 0x1B2114D2  
		static bool network_do_transition_to_new_game(bool p0, int maxPlayers, bool p2)
		{
			return invoke<bool>(0x4665F51EFED00034, p0, maxPlayers, p2);
		} // 0x4665F51EFED00034 0x58AFBE63  
		static bool network_do_transition_to_freemode(Any* p0, Any p1, bool p2, int players, bool p4)
		{
			return invoke<bool>(0x3AAD8B2FCA1E289F, p0, p1, p2, players, p4);
		} // 0x3AAD8B2FCA1E289F 0xC7CB8ADF  
		static bool network_do_transition_to_new_freemode(Any* p0, Any* p1, int players, bool p3, bool p4, bool p5)
		{
			return invoke<bool>(0x9E80A5BA8109F974, p0, p1, players, p3, p4, p5);
		} // 0x9E80A5BA8109F974 0xAD13375E  
		static Any network_is_transition_to_game() { return invoke<Any>(0x9D7696D8F4FA6CB7); }
		// 0x9D7696D8F4FA6CB7 0x17146B2B  
		static Any network_get_transition_members(Any* p0, Any p1) { return invoke<Any>(0x73B000F7FBC55829, p0, p1); }
		// 0x73B000F7FBC55829 0x31F19263  
		static void network_apply_transition_parameter(Any p0, Any p1) { invoke<Void>(0x521638ADA1BA0D18, p0, p1); }
		// 0x521638ADA1BA0D18 0xCEE79711  
		static void _0xebefc2e77084f599(Any p0, const char* p1, bool p2)
		{
			invoke<Void>(0xEBEFC2E77084F599, p0, p1, p2);
		} // 0xEBEFC2E77084F599 0xE0C28DB5  
		static bool network_send_transition_gamer_instruction(int* networkHandle, const char* p1, int p2, int p3,
			bool p4)
		{
			return invoke<bool>(0x31D1D2B858D25E6B, networkHandle, p1, p2, p3, p4);
		} // 0x31D1D2B858D25E6B 0x468B0884  
		static bool network_mark_transition_gamer_as_fully_joined(Any* p0)
		{
			return invoke<bool>(0x5728BB6D63E3FF1D, p0);
		} // 0x5728BB6D63E3FF1D 0x03383F57  
		static Any network_is_transition_host() { return invoke<Any>(0x0B824797C9BF2159); }
		// 0x0B824797C9BF2159 0x0C0900BC  
		static bool network_is_transition_host_from_handle(int* networkHandle)
		{
			return invoke<bool>(0x6B5C83BA3EFE6A10, networkHandle);
		} // 0x6B5C83BA3EFE6A10 0x0E2854C4  
		static bool network_get_transition_host(int* networkHandle)
		{
			return invoke<bool>(0x65042B9774C4435E, networkHandle);
		} // 0x65042B9774C4435E 0x73098D40  
		static bool network_is_in_transition() { return invoke<bool>(0x68049AEFF83D8F0A); }
		// 0x68049AEFF83D8F0A 0xC3CDB626  
		static bool network_is_transition_started() { return invoke<bool>(0x53FA83401D9C07FE); }
		// 0x53FA83401D9C07FE 0x7917E111  
		static Any network_is_transition_busy() { return invoke<Any>(0x520F3282A53D26B7); }
		// 0x520F3282A53D26B7 0xA357A2C6  
		static Any network_is_transition_matchmaking() { return invoke<Any>(0x292564C735375EDF); }
		// 0x292564C735375EDF 0x8262C70E  
		static Any _0xc571d0e77d8bbc29() { return invoke<Any>(0xC571D0E77D8BBC29); } // 0xC571D0E77D8BBC29  
		static void network_open_transition_matchmaking() { invoke<Void>(0x2B3A8F7CA3A38FDE); }
		// 0x2B3A8F7CA3A38FDE 0xC71E607B  
		static void network_close_transition_matchmaking() { invoke<Void>(0x43F4DBA69710E01E); }
		// 0x43F4DBA69710E01E 0x82D32D07  
		static Any _0x37a4494483b9f5c9() { return invoke<Any>(0x37A4494483B9F5C9); } // 0x37A4494483B9F5C9 0xC901AA9F  
		static void _0x0c978fda19692c2c(bool p0, bool p1) { invoke<Void>(0x0C978FDA19692C2C, p0, p1); }
		// 0x0C978FDA19692C2C  
		static Any _0xd0a484cb2f829fbe() { return invoke<Any>(0xD0A484CB2F829FBE); } // 0xD0A484CB2F829FBE  
		static void network_set_transition_activity_id(Any p0) { invoke<Void>(0x30DE938B516F0AD2, p0); }
		// 0x30DE938B516F0AD2 0xCCA9C022  
		static void network_change_transition_slots(Any p0, Any p1) { invoke<Void>(0xEEEDA5E6D7080987, p0, p1); }
		// 0xEEEDA5E6D7080987 0x1E5F6AEF  
		static void _0x973d76aa760a6cb6(bool p0) { invoke<Void>(0x973D76AA760A6CB6, p0); }
		// 0x973D76AA760A6CB6 0x0532DDD2  
		static bool network_has_player_started_transition(Player player)
		{
			return invoke<bool>(0x9AC9CCBFA8C29795, player);
		} // 0x9AC9CCBFA8C29795 0x4ABD1E59  
		static bool network_are_transition_details_valid(Any p0) { return invoke<bool>(0x2615AA2A695930C1, p0); }
		// 0x2615AA2A695930C1 0xCDEBCCE7  
		static bool network_join_transition(Player player) { return invoke<bool>(0x9D060B08CD63321A, player); }
		// 0x9D060B08CD63321A 0xB054EC4B  
		static bool network_has_invited_gamer_to_transition(Any* p0) { return invoke<bool>(0x7284A47B3540E6CF, p0); }
		// 0x7284A47B3540E6CF 0x4F41DF6B  
		static bool _0x3f9990bf5f22759c(Any* p0) { return invoke<bool>(0x3F9990BF5F22759C, p0); } // 0x3F9990BF5F22759C  
		static bool network_is_activity_session() { return invoke<bool>(0x05095437424397FA); }
		// 0x05095437424397FA 0x577DAA8A  
		static void _network_block_invites_2(bool p0) { invoke<Void>(0x4A9FDE3A5A6D0437, p0); }
		// 0x4A9FDE3A5A6D0437 0x18F03AFD  
		static bool _network_send_presence_invite(int* networkHandle, Any* p1, Any p2, Any p3)
		{
			return invoke<bool>(0xC3C7A6AFDB244624, networkHandle, p1, p2, p3);
		} // 0xC3C7A6AFDB244624 0x8B99B72B  
		static bool _network_send_presence_transition_invite(Any* p0, Any* p1, Any p2, Any p3)
		{
			return invoke<bool>(0xC116FF9B4D488291, p0, p1, p2, p3);
		} // 0xC116FF9B4D488291 0x877C0E1C  
		static bool _0x1171a97a3d3981b6(Any* p0, Any* p1, Any p2, Any p3)
		{
			return invoke<bool>(0x1171A97A3D3981B6, p0, p1, p2, p3);
		} // 0x1171A97A3D3981B6  
		static Any _0x742b58f723233ed9(Any p0) { return invoke<Any>(0x742B58F723233ED9, p0); }
		// 0x742B58F723233ED9 0x5E832444  
		static int network_get_num_presence_invites() { return invoke<int>(0xCEFA968912D0F78D); }
		// 0xCEFA968912D0F78D 0x3FDA00F3  
		static bool network_accept_presence_invite(Any p0) { return invoke<bool>(0xFA91550DF9318B22, p0); }
		// 0xFA91550DF9318B22 0xE5DA4CED  
		static bool network_remove_presence_invite(Any p0) { return invoke<bool>(0xF0210268DB0974B1, p0); }
		// 0xF0210268DB0974B1 0x93C665FA  
		static Any network_get_presence_invite_id(Any p0) { return invoke<Any>(0xDFF09646E12EC386, p0); }
		// 0xDFF09646E12EC386 0xD50DF46C  
		static Any network_get_presence_invite_inviter(Any p0) { return invoke<Any>(0x4962CC4AA2F345B7, p0); }
		// 0x4962CC4AA2F345B7 0x19EC65D9  
		static bool network_get_presence_invite_handle(Any p0, Any* p1)
		{
			return invoke<bool>(0x38D5B0FEBB086F75, p0, p1);
		} // 0x38D5B0FEBB086F75 0xB2451429  
		static Any network_get_presence_invite_session_id(Any p0) { return invoke<Any>(0x26E1CD96B0903D60, p0); }
		// 0x26E1CD96B0903D60 0xC5E0C989  
		static Any _0x24409fc4c55cb22d(Any p0) { return invoke<Any>(0x24409FC4C55CB22D, p0); }
		// 0x24409FC4C55CB22D 0xA4302183  
		static Any _0xd39b3fff8ffdd5bf(Any p0) { return invoke<Any>(0xD39B3FFF8FFDD5BF, p0); }
		// 0xD39B3FFF8FFDD5BF 0x51B2D848  
		static Any _0x728c4cc7920cd102(Any p0) { return invoke<Any>(0x728C4CC7920CD102, p0); }
		// 0x728C4CC7920CD102 0x4677C656  
		static bool _0x3dbf2df0aeb7d289(Any p0) { return invoke<bool>(0x3DBF2DF0AEB7D289, p0); }
		// 0x3DBF2DF0AEB7D289 0xF5E3401C  
		static bool _0x8806cebfabd3ce05(Any p0) { return invoke<bool>(0x8806CEBFABD3CE05, p0); }
		// 0x8806CEBFABD3CE05 0x7D593B4C  
		static bool network_has_follow_invite() { return invoke<bool>(0x76D9B976C4C09FDE); }
		// 0x76D9B976C4C09FDE 0xE96CFE7D  
		static Any network_action_follow_invite() { return invoke<Any>(0xC88156EBB786F8D5); }
		// 0xC88156EBB786F8D5 0xAB969F00  
		static Any network_clear_follow_invite() { return invoke<Any>(0x439BFDE3CD0610F6); }
		// 0x439BFDE3CD0610F6 0x3242F952  
		static void _0xebf8284d8cadeb53() { invoke<Void>(0xEBF8284D8CADEB53); } // 0xEBF8284D8CADEB53 0x9773F36A  
		static void network_remove_transition_invite(Any* p0) { invoke<Void>(0x7524B431B2E6F7EE, p0); }
		// 0x7524B431B2E6F7EE 0xFDE84CB7  
		static void network_remove_all_transition_invite() { invoke<Void>(0x726E0375C7A26368); }
		// 0x726E0375C7A26368 0xF7134E73  
		static void _0xf083835b70ba9bfe() { invoke<Void>(0xF083835B70BA9BFE); } // 0xF083835B70BA9BFE 0xC47352E7  
		static bool network_invite_gamers(Any* p0, Any p1, Any* p2, Any* p3)
		{
			return invoke<bool>(0x9D80CD1D0E6327DE, p0, p1, p2, p3);
		} // 0x9D80CD1D0E6327DE 0x52FB8074  
		static bool network_has_invited_gamer(Any* p0) { return invoke<bool>(0x4D86CD31E8976ECE, p0); }
		// 0x4D86CD31E8976ECE 0xEC651BC0  
		static bool network_get_currently_selected_gamer_handle_from_invite_menu(Any* p0)
		{
			return invoke<bool>(0x74881E6BCAE2327C, p0);
		} // 0x74881E6BCAE2327C 0x72BA00CE  
		static bool network_set_currently_selected_gamer_handle_from_invite_menu(Any* p0)
		{
			return invoke<bool>(0x7206F674F2A3B1BB, p0);
		} // 0x7206F674F2A3B1BB 0xFD95899E  
		static void _0x66f010a4b031a331(Any* p0) { invoke<Void>(0x66F010A4B031A331, p0); } // 0x66F010A4B031A331  
		static bool _0x44b37cdcae765aae(Any p0, Any* p1) { return invoke<bool>(0x44B37CDCAE765AAE, p0, p1); }
		// 0x44B37CDCAE765AAE  
		static void _0x0d77a82dc2d0da59(Any* p0, Any* p1) { invoke<Void>(0x0D77A82DC2D0DA59, p0, p1); }
		// 0x0D77A82DC2D0DA59 0x0808D4CC  
		static bool fillout_pm_player_list(int* networkHandle, Any p1, Any p2)
		{
			return invoke<bool>(0xCBBD7C4991B64809, networkHandle, p1, p2);
		} // 0xCBBD7C4991B64809 0xCE40F423  
		static bool fillout_pm_player_list_with_names(Any* p0, Any* p1, Any p2, Any p3)
		{
			return invoke<bool>(0x716B6DB9D1886106, p0, p1, p2, p3);
		} // 0x716B6DB9D1886106 0xB8DF604E  
		static bool using_network_weapontype(Any p0) { return invoke<bool>(0xE26CCFF8094D8C74, p0); }
		// 0xE26CCFF8094D8C74 0xF49C1533  
		static bool _0x796a87b3b68d1f3d(Any* p0) { return invoke<bool>(0x796A87B3B68D1F3D, p0); } // 0x796A87B3B68D1F3D  
		static Any _0x2fc5650b0271cb57() { return invoke<Any>(0x2FC5650B0271CB57); } // 0x2FC5650B0271CB57 0xA812B6CB  
		static Any _0x01abce5e7cbda196() { return invoke<Any>(0x01ABCE5E7CBDA196); } // 0x01ABCE5E7CBDA196  
		static Any _0x120364de2845daf8(Any* p0, Any p1) { return invoke<Any>(0x120364DE2845DAF8, p0, p1); }
		// 0x120364DE2845DAF8 0xF30E5814  
		static Any _0xfd8b834a8ba05048() { return invoke<Any>(0xFD8B834A8BA05048); } // 0xFD8B834A8BA05048 0xC6609191  
		static bool network_is_chatting_in_platform_party(int* networkHandle)
		{
			return invoke<bool>(0x8DE9945BCC9AEC52, networkHandle);
		} // 0x8DE9945BCC9AEC52 0x51367B34  
		static bool network_is_in_party() { return invoke<bool>(0x966C2BC2A7FE3F30); } // 0x966C2BC2A7FE3F30 0xF9D7D67D  
		static bool network_is_party_member(int* networkHandle)
		{
			return invoke<bool>(0x676ED266AADD31E0, networkHandle);
		} // 0x676ED266AADD31E0 0x1D0C929D  
		static Any _0x2bf66d2e7414f686() { return invoke<Any>(0x2BF66D2E7414F686); } // 0x2BF66D2E7414F686 0x9156EFC0  
		static Any _0x14922ed3e38761f0() { return invoke<Any>(0x14922ED3E38761F0); } // 0x14922ED3E38761F0 0x8FA6EE0E  
		static void _0xfa2888e3833c8e96() { invoke<Void>(0xFA2888E3833C8E96); } // 0xFA2888E3833C8E96 0x7F70C15A  
		static void _0x25d990f8e0e3f13c() { invoke<Void>(0x25D990F8E0E3F13C); } // 0x25D990F8E0E3F13C  
		static void _0x77faddcbe3499df7(Any p0) { invoke<Void>(0x77FADDCBE3499DF7, p0); }
		// 0x77FADDCBE3499DF7 0x8179C48A  
		static void _0xf1b84178f8674195(Any p0) { invoke<Void>(0xF1B84178F8674195, p0); }
		// 0xF1B84178F8674195 0x41702C8A  
		static int network_get_random_int() { return invoke<int>(0x599E4FA1F87EB5FF); }
		// 0x599E4FA1F87EB5FF 0x208DD848  
		static int _network_get_random_int_in_range(int rangeStart, int rangeEnd)
		{
			return invoke<int>(0xE30CF56F1EFA5F43, rangeStart, rangeEnd);
		} // 0xE30CF56F1EFA5F43 0xF9B6426D  
		static bool network_player_is_cheater() { return invoke<bool>(0x655B91F1495A9090); }
		// 0x655B91F1495A9090 0xA51DC214  
		static Any _network_player_is_gay() { return invoke<Any>(0x172F75B6EE2233BA); }
		// 0x172F75B6EE2233BA 0x1720ABA6  
		static bool network_player_is_badsport() { return invoke<bool>(0x19D8DA0E5A68045A); }
		// 0x19D8DA0E5A68045A 0xA19708E3  
		static bool _network_is_player_in_script(Player player, int p1, Hash scriptHash)
		{
			return invoke<bool>(0x46FB3ED415C7641C, player, p1, scriptHash);
		} // 0x46FB3ED415C7641C 0xF9A51B92  
		static bool bad_sport_player_left_detected(int* networkHandle, int event, int amountReceived)
		{
			return invoke<bool>(0xEC5E3AF5289DCA81, networkHandle, event, amountReceived);
		} // 0xEC5E3AF5289DCA81 0x4C2C6B6A  
		static void _0xe66c690248f11150(Entity p0, Any p1) { invoke<Void>(0xE66C690248F11150, p0, p1); }
		// 0xE66C690248F11150 0x4818ACD0  
		static void network_set_this_script_is_network_script(int lobbySize, bool p1, int playerId)
		{
			invoke<Void>(0x1CA59E306ECB80A5, lobbySize, p1, playerId);
		} // 0x1CA59E306ECB80A5 0x470810ED  
		static bool _network_is_this_script_marked(Any p0, bool p1, Any p2)
		{
			return invoke<bool>(0xD1110739EEADB592, p0, p1, p2);
		} // 0xD1110739EEADB592  
		static bool network_get_this_script_is_network_script() { return invoke<bool>(0x2910669969E9535E); }
		// 0x2910669969E9535E 0xD9BF6549  
		static int _network_get_num_participants_host() { return invoke<int>(0xA6C90FBC38E395EE); }
		// 0xA6C90FBC38E395EE 0xCCD8C02D  
		static int network_get_num_participants() { return invoke<int>(0x18D0456E86604654); }
		// 0x18D0456E86604654 0x3E25A3C5  
		static int network_get_script_status() { return invoke<int>(0x57D158647A6BFABF); }
		// 0x57D158647A6BFABF 0x2BE9235A  
		static void network_register_host_broadcast_variables(int* vars, int sizeofVars)
		{
			invoke<Void>(0x3E9B2F01C50DF595, vars, sizeofVars);
		} // 0x3E9B2F01C50DF595 0xDAF3B0AE  
		static void network_register_player_broadcast_variables(int* vars, int numVars)
		{
			invoke<Void>(0x3364AA97340CA215, vars, numVars);
		} // 0x3364AA97340CA215 0xBE3D32B4  
		static void _0x64f62afb081e260d() { invoke<Void>(0x64F62AFB081E260D); } // 0x64F62AFB081E260D 0xA71A1D2A  
		static bool _0x5d10b3795f3fc886() { return invoke<bool>(0x5D10B3795F3FC886); } // 0x5D10B3795F3FC886 0x0B739F53  
		static int network_get_player_index(Player player) { return invoke<int>(0x24FB80D107371267, player); }
		// 0x24FB80D107371267 0xBE1C1506  
		static int network_get_participant_index(int index) { return invoke<int>(0x1B84DF6AF2A46938, index); }
		// 0x1B84DF6AF2A46938 0xC4D91094  
		static Player network_get_player_index_from_ped(Ped ped) { return invoke<Player>(0x6C0E2E0125610278, ped); }
		// 0x6C0E2E0125610278 0x40DBF464  
		static int network_get_num_connected_players() { return invoke<int>(0xA4A79DD2D9600654); }
		// 0xA4A79DD2D9600654 0xF7952E62  
		static bool network_is_player_connected(Player player) { return invoke<bool>(0x93DC1BE4E1ABE9D1, player); }
		// 0x93DC1BE4E1ABE9D1 0x168EE2C2  
		static int _0xcf61d4b4702ee9eb() { return invoke<int>(0xCF61D4B4702EE9EB); } // 0xCF61D4B4702EE9EB 0xF4F13B06  
		static bool network_is_participant_active(int p0) { return invoke<bool>(0x6FF8FF40B6357D45, p0); }
		// 0x6FF8FF40B6357D45 0x4E2C348B  
		static bool network_is_player_active(Player player) { return invoke<bool>(0xB8DFD30D6973E135, player); }
		// 0xB8DFD30D6973E135 0x43657B17  
		static bool network_is_player_a_participant(Any p0) { return invoke<bool>(0x3CA58F6CB7CBD784, p0); }
		// 0x3CA58F6CB7CBD784 0xB08B6992  
		static bool network_is_host_of_this_script() { return invoke<bool>(0x83CD99A1E6061AB5); }
		// 0x83CD99A1E6061AB5 0x6970BA94  
		static Any network_get_host_of_this_script() { return invoke<Any>(0xC7B4D79B01FA7A5C); }
		// 0xC7B4D79B01FA7A5C 0x89EA7B54  
		static int network_get_host_of_script(const char* scriptName, int p1, int p2)
		{
			return invoke<int>(0x1D6A14F1F9A736FC, scriptName, p1, p2);
		} // 0x1D6A14F1F9A736FC 0x9C95D0BB  
		static void network_set_mission_finished() { invoke<Void>(0x3B3D11CD9FFCDFC9); }
		// 0x3B3D11CD9FFCDFC9 0x3083FAD7  
		static bool network_is_script_active(const char* scriptName, Player player, bool p2, Any p3)
		{
			return invoke<bool>(0x9D40DF90FAD26098, scriptName, player, p2, p3);
		} // 0x9D40DF90FAD26098 0x4A65250C  
		static int network_get_num_script_participants(Any* p0, Any p1, Any p2)
		{
			return invoke<int>(0x3658E8CD94FC121A, p0, p1, p2);
		} // 0x3658E8CD94FC121A 0x8F7D9F46  
		static int _0x638a3a81733086db() { return invoke<int>(0x638A3A81733086DB); } // 0x638A3A81733086DB 0xDB8B5D71  
		static bool _0x1ad5b71586b94820(Player p0, Any* p1, Any p2)
		{
			return invoke<bool>(0x1AD5B71586B94820, p0, p1, p2);
		} // 0x1AD5B71586B94820 0xCEA55F4C  
		static void _0x2302c0264ea58d31() { invoke<Void>(0x2302C0264EA58D31); } // 0x2302C0264EA58D31 0x8DCFE77D  
		static void _0x741a3d8380319a81() { invoke<Void>(0x741A3D8380319A81); } // 0x741A3D8380319A81 0x331D9A27  
		static Player participant_id() { return invoke<Player>(0x90986E8876CE0A83); } // 0x90986E8876CE0A83 0x9C35A221  
		static int participant_id_to_int() { return invoke<int>(0x57A3BDDAD8E5AA0A); } // 0x57A3BDDAD8E5AA0A 0x907498B0  
		static int network_get_destroyer_of_network_id(int netId, Hash* weaponHash)
		{
			return invoke<int>(0x7A1ADEEF01740A24, netId, weaponHash);
		} // 0x7A1ADEEF01740A24 0x4FCA6436  
		static bool _network_get_desroyer_of_entity(Any p0, Any p1, Hash* weaponHash)
		{
			return invoke<bool>(0x4CACA84440FA26F6, p0, p1, weaponHash);
		} // 0x4CACA84440FA26F6 0x28A45454  
		static Entity network_get_entity_killer_of_player(Player player, Hash* weaponHash)
		{
			return invoke<Entity>(0x42B2DAA6B596F5F8, player, weaponHash);
		} // 0x42B2DAA6B596F5F8 0xA7E7E04F  
		static void network_resurrect_local_player(float x, float y, float z, float heading, bool unk, bool changetime)
		{
			invoke<Void>(0xEA23C49EAA83ACFB, x, y, z, heading, unk, changetime);
		} // 0xEA23C49EAA83ACFB 0xF1F9D4B4  
		static void network_set_local_player_invincible_time(int time) { invoke<Void>(0x2D95C7E2D7E07307, time); }
		// 0x2D95C7E2D7E07307 0xFEA9B85C  
		static bool network_is_local_player_invincible() { return invoke<bool>(0x8A8694B48715B000); }
		// 0x8A8694B48715B000 0x8DE13B36  
		static void network_disable_invincible_flashing(int player, bool p1)
		{
			invoke<Void>(0x9DD368BF06983221, player, p1);
		} // 0x9DD368BF06983221 0x8D27280E  
		static void _0x524ff0aeff9c3973(Any p0) { invoke<Void>(0x524FF0AEFF9C3973, p0); }
		// 0x524FF0AEFF9C3973 0xB72F086D  
		static bool _0xb07d3185e11657a5(Entity p0) { return invoke<bool>(0xB07D3185E11657A5, p0); }
		// 0xB07D3185E11657A5 0xEDA68956  
		static int network_get_network_id_from_entity(Entity entity) { return invoke<int>(0xA11700682F3AD45C, entity); }
		// 0xA11700682F3AD45C 0x9E35DAB6  
		static Entity network_get_entity_from_network_id(int netId)
		{
			return invoke<Entity>(0xCE4E5D9B0A4FF560, netId);
		} // 0xCE4E5D9B0A4FF560 0x5B912C3F  
		static bool network_get_entity_is_networked(Entity entity) { return invoke<bool>(0xC7827959479DCC78, entity); }
		// 0xC7827959479DCC78 0xD7F934F4  
		static bool network_get_entity_is_local(Entity entity) { return invoke<bool>(0x0991549DE4D64762, entity); }
		// 0x0991549DE4D64762 0x813353ED  
		static void network_register_entity_as_networked(Entity entity) { invoke<Void>(0x06FAACD625D80CAA, entity); }
		// 0x06FAACD625D80CAA 0x31A630A4  
		static void network_unregister_networked_entity(Entity entity) { invoke<Void>(0x7368E683BB9038D6, entity); }
		// 0x7368E683BB9038D6 0x5C645F64  
		static bool network_does_network_id_exist(int netID) { return invoke<bool>(0x38CE16C96BD11344, netID); }
		// 0x38CE16C96BD11344 0xB8D2C99E  
		static bool network_does_entity_exist_with_network_id(Entity entity)
		{
			return invoke<bool>(0x18A47D074708FD68, entity);
		} // 0x18A47D074708FD68 0x1E2E3177  
		static bool network_request_control_of_network_id(int netId) { return invoke<bool>(0xA670B3662FAFFBD0, netId); }
		// 0xA670B3662FAFFBD0 0x9262A60A  
		static bool network_has_control_of_network_id(int netId) { return invoke<bool>(0x4D36070FE0215186, netId); }
		// 0x4D36070FE0215186 0x92E77D21  
		static bool network_request_control_of_entity(Entity entity)
		{
			return invoke<bool>(0xB69317BF5E782347, entity);
		} // 0xB69317BF5E782347 0xA05FEBD7  
		static bool network_request_control_of_door(int doorID) { return invoke<bool>(0x870DDFD5A4A796E4, doorID); }
		// 0x870DDFD5A4A796E4 0xF60DAAF6  
		static bool network_has_control_of_entity(Entity entity) { return invoke<bool>(0x01BF60A500E28887, entity); }
		// 0x01BF60A500E28887 0x005FD797  
		static bool network_has_control_of_pickup(Pickup pickup) { return invoke<bool>(0x5BC9495F0B3B6FA6, pickup); }
		// 0x5BC9495F0B3B6FA6 0xF7784FC8  
		static bool network_has_control_of_door(Hash doorHash) { return invoke<bool>(0xCB3C68ADB06195DF, doorHash); }
		// 0xCB3C68ADB06195DF 0x136326EC  
		static bool _network_has_control_of_pavement_stats(Hash doorHash)
		{
			return invoke<bool>(0xC01E93FAC20C3346, doorHash);
		} // 0xC01E93FAC20C3346  
		static int veh_to_net(Vehicle vehicle) { return invoke<int>(0xB4C94523F023419C, vehicle); }
		// 0xB4C94523F023419C 0xF17634EB  
		static int ped_to_net(Ped ped) { return invoke<int>(0x0EDEC3C276198689, ped); }
		// 0x0EDEC3C276198689 0x86A0B759  
		static int obj_to_net(Object object) { return invoke<int>(0x99BFDC94A603E541, object); }
		// 0x99BFDC94A603E541 0x1E05F29F  
		static Vehicle net_to_veh(int netHandle) { return invoke<Vehicle>(0x367B936610BA360C, netHandle); }
		// 0x367B936610BA360C 0x7E02FAEA  
		static Ped net_to_ped(int netHandle) { return invoke<Ped>(0xBDCD95FC216A8B3E, netHandle); }
		// 0xBDCD95FC216A8B3E 0x87717DD4  
		static Object net_to_obj(int netHandle) { return invoke<Object>(0xD8515F5FEA14CB3F, netHandle); }
		// 0xD8515F5FEA14CB3F 0x27AA14D8  
		static Entity net_to_ent(int netHandle) { return invoke<Entity>(0xBFFEAB45A9A9094A, netHandle); }
		// 0xBFFEAB45A9A9094A 0x5E149683  
		static void network_get_local_handle(int* networkHandle, int bufferSize)
		{
			invoke<Void>(0xE86051786B66CD8E, networkHandle, bufferSize);
		} // 0xE86051786B66CD8E 0x08023B16  
		static void network_handle_from_user_id(const char* userId, int* networkHandle, int bufferSize)
		{
			invoke<Void>(0xDCD51DD8F87AEC5C, userId, networkHandle, bufferSize);
		} // 0xDCD51DD8F87AEC5C 0x74C2C1B7  
		static void network_handle_from_member_id(const char* memberId, int* networkHandle, int bufferSize)
		{
			invoke<Void>(0xA0FD21BED61E5C4C, memberId, networkHandle, bufferSize);
		} // 0xA0FD21BED61E5C4C 0x9BFC9FE2  
		static void network_handle_from_player(Player player, int* networkHandle, int bufferSize)
		{
			invoke<Void>(0x388EB2B86C73B6B3, player, networkHandle, bufferSize);
		} // 0x388EB2B86C73B6B3 0xD3498917  
		static Hash _network_hash_from_player_handle(Player player) { return invoke<Hash>(0xBC1D768F2F5D6C05, player); }
		// 0xBC1D768F2F5D6C05  
		static Hash _network_hash_from_gamer_handle(int* networkHandle)
		{
			return invoke<Hash>(0x58575AC3CF2CA8EC, networkHandle);
		} // 0x58575AC3CF2CA8EC  
		static void network_handle_from_friend(Player friendIndex, int* networkHandle, int bufferSize)
		{
			invoke<Void>(0xD45CB817D7E177D2, friendIndex, networkHandle, bufferSize);
		} // 0xD45CB817D7E177D2 0x3B0BB3A3  
		static bool network_gamertag_from_handle_start(int* networkHandle)
		{
			return invoke<bool>(0x9F0C0A981D73FA56, networkHandle);
		} // 0x9F0C0A981D73FA56 0xEBA00C2A  
		static bool network_gamertag_from_handle_pending() { return invoke<bool>(0xB071E27958EF4CF0); }
		// 0xB071E27958EF4CF0 0xF000828E  
		static bool network_gamertag_from_handle_succeeded() { return invoke<bool>(0xFD00798DBA7523DD); }
		// 0xFD00798DBA7523DD 0x89C2B5EA  
		static const char* network_get_gamertag_from_handle(int* networkHandle)
		{
			return invoke<const char*>(0x426141162EBE5CDB, networkHandle);
		} // 0x426141162EBE5CDB 0xA18A1B26  
		static int _0xd66c9e72b3cc4982(Any* p0, Any p1) { return invoke<int>(0xD66C9E72B3CC4982, p0, p1); }
		// 0xD66C9E72B3CC4982  
		static Any _0x58cc181719256197(Any p0, Any p1, Any p2) { return invoke<Any>(0x58CC181719256197, p0, p1, p2); }
		// 0x58CC181719256197  
		static bool network_are_handles_the_same(int* netHandle1, int* netHandle2)
		{
			return invoke<bool>(0x57DBA049E110F217, netHandle1, netHandle2);
		} // 0x57DBA049E110F217 0x45975AE3  
		static bool network_is_handle_valid(int* networkHandle, int bufferSize)
		{
			return invoke<bool>(0x6F79B93B0A8E4133, networkHandle, bufferSize);
		} // 0x6F79B93B0A8E4133 0xF0996C6E  
		static Player network_get_player_from_gamer_handle(int* networkHandle)
		{
			return invoke<Player>(0xCE5F689CF5A0A49D, networkHandle);
		} // 0xCE5F689CF5A0A49D 0x2E96EF1E  
		static const char* network_member_id_from_gamer_handle(int* networkHandle)
		{
			return invoke<const char*>(0xC82630132081BB6F, networkHandle);
		} // 0xC82630132081BB6F 0x62EF0A63  
		static bool network_is_gamer_in_my_session(int* networkHandle)
		{
			return invoke<bool>(0x0F10B05DDF8D16E9, networkHandle);
		} // 0x0F10B05DDF8D16E9 0x59127716  
		static void network_show_profile_ui(int* networkHandle) { invoke<Void>(0x859ED1CEA343FCA8, networkHandle); }
		// 0x859ED1CEA343FCA8 0xF00A20B0  
		static const char* network_player_get_name(Player player)
		{
			return invoke<const char*>(0x7718D2E2060837D2, player);
		} // 0x7718D2E2060837D2 0xCE48F260  
		static const char* network_player_get_userid(Player player, const char* userID)
		{
			return invoke<const char*>(0x4927FC39CD0869A0, player, userID);
		} // 0x4927FC39CD0869A0 0x4EC0D983  
		static bool network_player_is_rockstar_dev(Player player) { return invoke<bool>(0x544ABDDA3B409B6D, player); }
		// 0x544ABDDA3B409B6D 0xF6659045  
		static bool _network_player_something(Player player) { return invoke<bool>(0x565E430DB3B05BEC, player); }
		// 0x565E430DB3B05BEC 0xD265B049  
		static bool network_is_inactive_profile(Any* p0) { return invoke<bool>(0x7E58745504313A2E, p0); }
		// 0x7E58745504313A2E 0x95481343  
		static int network_get_max_friends() { return invoke<int>(0xAFEBB0D5D8F687D2); }
		// 0xAFEBB0D5D8F687D2 0x048171BC  
		static int network_get_friend_count() { return invoke<int>(0x203F1CFD823B27A4); }
		// 0x203F1CFD823B27A4 0xA396ACDE  
		static const char* network_get_friend_name(int friendIndex)
		{
			return invoke<const char*>(0xE11EBBB2A783FE8B, friendIndex);
		} // 0xE11EBBB2A783FE8B 0x97420B6D  
		static const char* _network_get_friend_name_from_index(int friendIndex)
		{
			return invoke<const char*>(0x4164F227D052E293, friendIndex);
		} // 0x4164F227D052E293  
		static bool network_is_friend_online(const char* name) { return invoke<bool>(0x425A44533437B64D, name); }
		// 0x425A44533437B64D 0xE0A42430  
		static bool _network_is_friend_online_2(int* networkHandle)
		{
			return invoke<bool>(0x87EB7A3FFCB314DB, networkHandle);
		} // 0x87EB7A3FFCB314DB  
		static bool network_is_friend_in_same_title(const char* friendName)
		{
			return invoke<bool>(0x2EA9A3BEDF3F17B8, friendName);
		} // 0x2EA9A3BEDF3F17B8 0xC54365C2  
		static bool network_is_friend_in_multiplayer(const char* friendName)
		{
			return invoke<bool>(0x57005C18827F3A28, friendName);
		} // 0x57005C18827F3A28 0x400BDDD9  
		static bool network_is_friend(int* networkHandle) { return invoke<bool>(0x1A24A179F9B31654, networkHandle); }
		// 0x1A24A179F9B31654 0x2DA4C282  
		static bool network_is_pending_friend(Any p0) { return invoke<bool>(0x0BE73DA6984A6E33, p0); }
		// 0x0BE73DA6984A6E33 0x5C85FF81  
		static bool network_is_adding_friend() { return invoke<bool>(0x6EA101606F6E4D81); }
		// 0x6EA101606F6E4D81 0xBB7EC8C4  
		static bool network_add_friend(int* networkHandle, const char* message)
		{
			return invoke<bool>(0x8E02D73914064223, networkHandle, message);
		} // 0x8E02D73914064223 0x20E5B3EE  
		static bool network_is_friend_index_online(int friendIndex)
		{
			return invoke<bool>(0xBAD8F2A42B844821, friendIndex);
		} // 0xBAD8F2A42B844821 0x94AE7172  
		static void _0x1b857666604b1a74(bool p0) { invoke<Void>(0x1B857666604B1A74, p0); } // 0x1B857666604B1A74  
		static bool _0x82377b65e943f72d(Any p0) { return invoke<bool>(0x82377B65E943F72D, p0); }
		// 0x82377B65E943F72D 0xB802B671  
		static bool network_can_set_waypoint() { return invoke<bool>(0xC927EC229934AF60); }
		// 0xC927EC229934AF60 0x009E68F3  
		static Any _0xb309ebea797e001f(Any p0) { return invoke<Any>(0xB309EBEA797E001F, p0); }
		// 0xB309EBEA797E001F 0x5C0AB2A9  
		static Any _0x26f07dd83a5f7f98() { return invoke<Any>(0x26F07DD83A5F7F98); } // 0x26F07DD83A5F7F98 0x9A176B6E  
		static bool network_has_headset() { return invoke<bool>(0xE870F9F1F7B4F1FA); } // 0xE870F9F1F7B4F1FA 0xA7DC5657  
		static void _0x7d395ea61622e116(bool p0) { invoke<Void>(0x7D395EA61622E116, p0); }
		// 0x7D395EA61622E116 0x5C05B7E1  
		static Any _0xc0d2af00bcc234ca() { return invoke<Any>(0xC0D2AF00BCC234CA); } // 0xC0D2AF00BCC234CA  
		static bool network_gamer_has_headset(Any* p0) { return invoke<bool>(0xF2FD55CB574BCC55, p0); }
		// 0xF2FD55CB574BCC55 0xD036DA4A  
		static bool network_is_gamer_talking(int* p0) { return invoke<bool>(0x71C33B22606CD88A, p0); }
		// 0x71C33B22606CD88A 0x99B58DBC  
		static bool network_can_communicate_with_gamer(int* player) { return invoke<bool>(0xA150A4F065806B1F, player); }
		// 0xA150A4F065806B1F 0xD05EB7F6  
		static bool network_is_gamer_muted_by_me(int* p0) { return invoke<bool>(0xCE60DE011B6C7978, p0); }
		// 0xCE60DE011B6C7978 0x001B4046  
		static bool network_am_i_muted_by_gamer(Any* p0) { return invoke<bool>(0xDF02A2C93F1F26DA, p0); }
		// 0xDF02A2C93F1F26DA 0x7685B333  
		static bool network_is_gamer_blocked_by_me(Any* p0) { return invoke<bool>(0xE944C4F5AF1B5883, p0); }
		// 0xE944C4F5AF1B5883 0x3FDCC8D7  
		static bool network_am_i_blocked_by_gamer(Any* p0) { return invoke<bool>(0x15337C7C268A27B2, p0); }
		// 0x15337C7C268A27B2 0xD19B312C  
		static bool _0xb57a49545ba53ce7(Any* p0) { return invoke<bool>(0xB57A49545BA53CE7, p0); } // 0xB57A49545BA53CE7  
		static bool _0xcca4318e1ab03f1f(Any* p0) { return invoke<bool>(0xCCA4318E1AB03F1F, p0); } // 0xCCA4318E1AB03F1F  
		static bool _0x07dd29d5e22763f1(Any* p0) { return invoke<bool>(0x07DD29D5E22763F1, p0); } // 0x07DD29D5E22763F1  
		static bool _0x135f9b7b7add2185(Any* p0) { return invoke<bool>(0x135F9B7B7ADD2185, p0); } // 0x135F9B7B7ADD2185  
		static bool network_is_player_talking(Player player) { return invoke<bool>(0x031E11F3D447647E, player); }
		// 0x031E11F3D447647E 0xDA9FD9DB  
		static bool network_player_has_headset(Player player) { return invoke<bool>(0x3FB99A8B08D18FD6, player); }
		// 0x3FB99A8B08D18FD6 0x451FB6B6  
		static bool network_is_player_muted_by_me(Player player) { return invoke<bool>(0x8C71288AE68EDE39, player); }
		// 0x8C71288AE68EDE39 0x7A21050E  
		static bool network_am_i_muted_by_player(Player player) { return invoke<bool>(0x9D6981DFC91A8604, player); }
		// 0x9D6981DFC91A8604 0xE128F2B0  
		static bool network_is_player_blocked_by_me(Player player) { return invoke<bool>(0x57AF1F8E27483721, player); }
		// 0x57AF1F8E27483721 0xAE4F4560  
		static bool network_am_i_blocked_by_player(Player player) { return invoke<bool>(0x87F395D957D4353D, player); }
		// 0x87F395D957D4353D 0x953EF45E  
		static float network_get_player_loudness(Any p0) { return invoke<float>(0x21A1684A25C2867F, p0); }
		// 0x21A1684A25C2867F 0xF2F67014  
		static void network_set_talker_proximity(float p0) { invoke<Void>(0xCBF12D65F95AD686, p0); }
		// 0xCBF12D65F95AD686 0x67555C66  
		static Any network_get_talker_proximity() { return invoke<Any>(0x84F0F13120B4E098); }
		// 0x84F0F13120B4E098 0x19991ADD  
		static void network_set_voice_active(bool toggle) { invoke<Void>(0xBABEC9E69A91C57B, toggle); }
		// 0xBABEC9E69A91C57B 0x8011247F  
		static void _0xcfeb46dcd7d8d5eb(bool p0) { invoke<Void>(0xCFEB46DCD7D8D5EB, p0); }
		// 0xCFEB46DCD7D8D5EB 0x1A3EA6CD  
		static void network_override_transition_chat(bool p0) { invoke<Void>(0xAF66059A131AA269, p0); }
		// 0xAF66059A131AA269 0xCAB21090  
		static void network_set_team_only_chat(bool toggle) { invoke<Void>(0xD5B4883AC32F24C3, toggle); }
		// 0xD5B4883AC32F24C3 0x3813019A  
		static void _0x6f697a66ce78674e(int team, bool toggle) { invoke<Void>(0x6F697A66CE78674E, team, toggle); }
		// 0x6F697A66CE78674E 0xC8CC9E75  
		static void network_set_override_spectator_mode(bool toggle) { invoke<Void>(0x70DA3BF8DACD3210, toggle); }
		// 0x70DA3BF8DACD3210 0xA0FD42D3  
		static void _0x3c5c1e2c2ff814b1(bool p0) { invoke<Void>(0x3C5C1E2C2FF814B1, p0); }
		// 0x3C5C1E2C2FF814B1 0xC9DDA85B  
		static void _0x9d7afcbf21c51712(bool p0) { invoke<Void>(0x9D7AFCBF21C51712, p0); } // 0x9D7AFCBF21C51712  
		static void _0xf46a1e03e8755980(bool p0) { invoke<Void>(0xF46A1E03E8755980, p0); }
		// 0xF46A1E03E8755980 0xD33AFF79  
		static void _0x6a5d89d7769a40d8(bool p0) { invoke<Void>(0x6A5D89D7769A40D8, p0); }
		// 0x6A5D89D7769A40D8 0x4FFEFE43  
		static void network_override_chat_restrictions(Player player, bool toggle)
		{
			invoke<Void>(0x3039AE5AD2C9C0C4, player, toggle);
		} // 0x3039AE5AD2C9C0C4 0x74EE2D8B  
		static void _network_override_send_restrictions(Player player, bool toggle)
		{
			invoke<Void>(0x97DD4C5944CC2E6A, player, toggle);
		} // 0x97DD4C5944CC2E6A  
		static void _network_chat_mute(bool p0) { invoke<Void>(0x57B192B4D4AD23D5, p0); }
		// 0x57B192B4D4AD23D5 0x2F98B405  
		static void network_override_receive_restrictions(Player player, bool toggle)
		{
			invoke<Void>(0xDDF73E2B1FEC5AB4, player, toggle);
		} // 0xDDF73E2B1FEC5AB4 0x95F1C60D  
		static void _0x0ff2862b61a58af9(bool p0) { invoke<Void>(0x0FF2862B61A58AF9, p0); }
		// 0x0FF2862B61A58AF9 0x1BCD3DDF  
		static void network_set_voice_channel(Any p0) { invoke<Void>(0xEF6212C2EFEF1A23, p0); }
		// 0xEF6212C2EFEF1A23 0x3974879F  
		static void network_clear_voice_channel() { invoke<Void>(0xE036A705F989E049); }
		// 0xE036A705F989E049 0x9ECF722A  
		static void is_network_vehicle_been_damaged_by_any_object(float x, float y, float z)
		{
			invoke<Void>(0xDBD2056652689917, x, y, z);
		} // 0xDBD2056652689917 0xF1E84832  
		static void _0xf03755696450470c() { invoke<Void>(0xF03755696450470C); } // 0xF03755696450470C 0x7F9B9052  
		static void _0x5e3aa4ca2b6fb0ee(Any p0) { invoke<Void>(0x5E3AA4CA2B6FB0EE, p0); }
		// 0x5E3AA4CA2B6FB0EE 0x7BBEA8CF  
		static void _0xca575c391fea25cc(Any p0) { invoke<Void>(0xCA575C391FEA25CC, p0); }
		// 0xCA575C391FEA25CC 0xE797A4B6  
		static void _0xadb57e5b663cca8b(Player p0, float* p1, float* p2)
		{
			invoke<Void>(0xADB57E5B663CCA8B, p0, p1, p2);
		} // 0xADB57E5B663CCA8B 0x92268BB5  
		static bool _network_is_text_chat_active() { return invoke<bool>(0x5FCF4D7069B09026); } // 0x5FCF4D7069B09026  
		static void shutdown_and_launch_single_player_game() { invoke<Void>(0x593850C16A36B692); }
		// 0x593850C16A36B692 0x92B7351C  
		static void network_set_friendly_fire_option(bool toggle) { invoke<Void>(0xF808475FA571D823, toggle); }
		// 0xF808475FA571D823 0x6BAF95FA  
		static void network_set_rich_presence(int p0, Any p1, Any p2, Any p3)
		{
			invoke<Void>(0x1DCCACDCFC569362, p0, p1, p2, p3);
		} // 0x1DCCACDCFC569362 0x932A6CED  
		static void _network_set_rich_presence_2(int p0, const char* gxtLabel)
		{
			invoke<Void>(0x3E200C2BCF4164EB, p0, gxtLabel);
		} // 0x3E200C2BCF4164EB 0x017E6777  
		static int network_get_timeout_time() { return invoke<int>(0x5ED0356A0CE3A34F); }
		// 0x5ED0356A0CE3A34F 0xE1F86C6A  
		static void _network_respawn_coords(Player player, float x, float y, float z, bool p4, bool p5)
		{
			invoke<Void>(0x9769F811D1785B03, player, x, y, z, p4, p5);
		} // 0x9769F811D1785B03 0xBE6A30C3  
		static void _0xbf22e0f32968e967(Player player, bool p1) { invoke<Void>(0xBF22E0F32968E967, player, p1); }
		// 0xBF22E0F32968E967 0x22E03AD0  
		static void _0x715135f4b82ac90d(Entity entity) { invoke<Void>(0x715135F4B82AC90D, entity); }
		// 0x715135F4B82AC90D 0xCEAE5AFC  
		static bool _network_player_is_in_clan() { return invoke<bool>(0x579CCED0265D4896); }
		// 0x579CCED0265D4896 0xF5F4BD95  
		static bool network_clan_player_is_active(int* networkHandle)
		{
			return invoke<bool>(0xB124B57F571D8F18, networkHandle);
		} // 0xB124B57F571D8F18 0xAB8319A3  
		static bool network_clan_player_get_desc(int* clanDesc, int bufferSize, int* networkHandle)
		{
			return invoke<bool>(0xEEE6EACBE8874FBA, clanDesc, bufferSize, networkHandle);
		} // 0xEEE6EACBE8874FBA 0x6EE4A282  
		static bool _0x7543bb439f63792b(int* clanDesc, int bufferSize)
		{
			return invoke<bool>(0x7543BB439F63792B, clanDesc, bufferSize);
		} // 0x7543BB439F63792B 0x54E79E9C  
		static void _0xf45352426ff3a4f0(int* clanDesc, int bufferSize, int* networkHandle)
		{
			invoke<Void>(0xF45352426FF3A4F0, clanDesc, bufferSize, networkHandle);
		} // 0xF45352426FF3A4F0 0xF633805A  
		static int _get_num_membership_desc() { return invoke<int>(0x1F471B79ACC90BEF); }
		// 0x1F471B79ACC90BEF 0x807B3450  
		static bool network_clan_get_membership_desc(int* memberDesc, int p1)
		{
			return invoke<bool>(0x48DE78AF2C8885B8, memberDesc, p1);
		} // 0x48DE78AF2C8885B8 0x3369DD1F  
		static bool network_clan_download_membership(int* networkHandle)
		{
			return invoke<bool>(0xA989044E70010ABE, networkHandle);
		} // 0xA989044E70010ABE 0x8E8CB520  
		static bool network_clan_download_membership_pending(Any* p0) { return invoke<bool>(0x5B9E023DC6EBEDC0, p0); }
		// 0x5B9E023DC6EBEDC0 0x1FDB590F  
		static bool _network_is_clan_membership_finished_downloading() { return invoke<bool>(0xB3F64A6A91432477); }
		// 0xB3F64A6A91432477 0x83ED8E08  
		static bool network_clan_remote_memberships_are_in_cache(int* p0)
		{
			return invoke<bool>(0xBB6E6FEE99D866B2, p0);
		} // 0xBB6E6FEE99D866B2 0x40202867  
		static int network_clan_get_membership_count(int* p0) { return invoke<int>(0xAAB11F6C4ADBC2C1, p0); }
		// 0xAAB11F6C4ADBC2C1 0x25924010  
		static bool network_clan_get_membership_valid(int* p0, Any p1)
		{
			return invoke<bool>(0x48A59CF88D43DF0E, p0, p1);
		} // 0x48A59CF88D43DF0E 0x48914F6A  
		static bool network_clan_get_membership(int* p0, int* clanMembership, int p2)
		{
			return invoke<bool>(0xC8BC2011F67B3411, p0, clanMembership, p2);
		} // 0xC8BC2011F67B3411 0xCDC4A590  
		static bool network_clan_join(int clanDesc) { return invoke<bool>(0x9FAAA4F4FC71F87F, clanDesc); }
		// 0x9FAAA4F4FC71F87F 0x79C916C5  
		static bool _network_clan_animation(const char* animDict, const char* animName)
		{
			return invoke<bool>(0x729E3401F0430686, animDict, animName);
		} // 0x729E3401F0430686 0xBDA90BAC  
		static bool _0x2b51edbefc301339(int p0, const char* p1) { return invoke<bool>(0x2B51EDBEFC301339, p0, p1); }
		// 0x2B51EDBEFC301339 0x8E952B12  
		static Any _0xc32ea7a2f6ca7557() { return invoke<Any>(0xC32EA7A2F6CA7557); } // 0xC32EA7A2F6CA7557 0x966C90FD  
		static bool _0x5835d9cd92e83184(Any* p0, Any* p1) { return invoke<bool>(0x5835D9CD92E83184, p0, p1); }
		// 0x5835D9CD92E83184 0xBA672146  
		static bool _0x13518ff1c6b28938(Any p0) { return invoke<bool>(0x13518FF1C6B28938, p0); }
		// 0x13518FF1C6B28938 0x7963FA4D  
		static bool _0xa134777ff7f33331(Any p0, Any* p1) { return invoke<bool>(0xA134777FF7F33331, p0, p1); }
		// 0xA134777FF7F33331 0x88B13CDC  
		static void _0x113e6e3e50e286b0(Any p0) { invoke<Void>(0x113E6E3E50E286B0, p0); }
		// 0x113E6E3E50E286B0 0xD6E3D5EA  
		static Any network_get_primary_clan_data_clear() { return invoke<Any>(0x9AA46BADAD0E27ED); }
		// 0x9AA46BADAD0E27ED 0xE22445DA  
		static void network_get_primary_clan_data_cancel() { invoke<Void>(0x042E4B70B93E6054); }
		// 0x042E4B70B93E6054 0x455DDF5C  
		static bool network_get_primary_clan_data_start(Any* p0, Any p1)
		{
			return invoke<bool>(0xCE86D8191B762107, p0, p1);
		} // 0xCE86D8191B762107 0x89DB0EC7  
		static Any network_get_primary_clan_data_pending() { return invoke<Any>(0xB5074DB804E28CE7); }
		// 0xB5074DB804E28CE7 0xA4EF02F3  
		static Any network_get_primary_clan_data_success() { return invoke<Any>(0x5B4F04F19376A0BA); }
		// 0x5B4F04F19376A0BA 0x068A054E  
		static bool network_get_primary_clan_data_new(Any* p0, Any* p1)
		{
			return invoke<bool>(0xC080FF658B2E41DA, p0, p1);
		} // 0xC080FF658B2E41DA 0x9B8631EB  
		static void set_network_id_can_migrate(int netId, bool toggle)
		{
			invoke<Void>(0x299EEB23175895FC, netId, toggle);
		} // 0x299EEB23175895FC 0x47C8E5FF  
		static void set_network_id_exists_on_all_machines(int netId, bool toggle)
		{
			invoke<Void>(0xE05E81A888FA63C8, netId, toggle);
		} // 0xE05E81A888FA63C8 0x68D486B2  
		static void _set_network_id_sync_to_player(int netId, Player player, bool toggle)
		{
			invoke<Void>(0xA8A024587329F36A, netId, player, toggle);
		} // 0xA8A024587329F36A 0x4D15FDB1  
		static void network_set_entity_can_blend(Entity entity, bool toggle)
		{
			invoke<Void>(0xD830567D88A1E873, entity, toggle);
		} // 0xD830567D88A1E873 0xDE8C0DB8  
		static void _network_set_entity_invisible_to_network(Entity entity, bool toggle)
		{
			invoke<Void>(0xF1CA12B18AEF5298, entity, toggle);
		} // 0xF1CA12B18AEF5298 0x09CBC4B0  
		static void set_network_id_visible_in_cutscene(int netId, bool p1, bool p2)
		{
			invoke<Void>(0xA6928482543022B4, netId, p1, p2);
		} // 0xA6928482543022B4 0x199E75EF  
		static void _0xaaa553e7dd28a457(bool p0) { invoke<Void>(0xAAA553E7DD28A457, p0); } // 0xAAA553E7DD28A457  
		static void _0x3fa36981311fa4ff(int netId, bool state) { invoke<Void>(0x3FA36981311FA4FF, netId, state); }
		// 0x3FA36981311FA4FF 0x00AE4E17  
		static bool _network_can_network_id_be_seen(int netId) { return invoke<bool>(0xA1607996431332DF, netId); }
		// 0xA1607996431332DF 0xEA5176C0  
		static void set_local_player_visible_in_cutscene(bool p0, bool p1) { invoke<Void>(0xD1065D68947E7B6E, p0, p1); }
		// 0xD1065D68947E7B6E 0x59F3479B  
		static void set_local_player_invisible_locally(bool p0) { invoke<Void>(0xE5F773C1A1D9D168, p0); }
		// 0xE5F773C1A1D9D168 0x764F6222  
		static void set_local_player_visible_locally(bool p0) { invoke<Void>(0x7619364C82D3BF14, p0); }
		// 0x7619364C82D3BF14 0x324B56DB  
		static void set_player_invisible_locally(Player player, bool toggle)
		{
			invoke<Void>(0x12B37D54667DB0B8, player, toggle);
		} // 0x12B37D54667DB0B8 0x18227209  
		static void set_player_visible_locally(Player player, bool toggle)
		{
			invoke<Void>(0xFAA10F1FAFB11AF2, player, toggle);
		} // 0xFAA10F1FAFB11AF2 0xBA2BB4B4  
		static void fade_out_local_player(bool p0) { invoke<Void>(0x416DBD4CD6ED8DD2, p0); }
		// 0x416DBD4CD6ED8DD2 0x8FA7CEBD  
		static void network_fade_out_entity(Entity entity, bool normal, bool slow)
		{
			invoke<Void>(0xDE564951F95E09ED, entity, normal, slow);
		} // 0xDE564951F95E09ED 0x47EDEE56  
		static void network_fade_in_entity(Entity entity, bool state)
		{
			invoke<Void>(0x1F4ED342ACEFE62D, entity, state);
		} // 0x1F4ED342ACEFE62D 0x9B9FCD02  
		static bool _0x631dc5dff4b110e3(Any p0) { return invoke<bool>(0x631DC5DFF4B110E3, p0); } // 0x631DC5DFF4B110E3  
		static bool _0x422f32cc7e56abad(Any p0) { return invoke<bool>(0x422F32CC7E56ABAD, p0); } // 0x422F32CC7E56ABAD  
		static bool is_player_in_cutscene(Player player) { return invoke<bool>(0xE73092F4157CD126, player); }
		// 0xE73092F4157CD126 0xE0A619BD  
		static void set_entity_visible_in_cutscene(Any p0, bool p1, bool p2)
		{
			invoke<Void>(0xE0031D3C8F36AB82, p0, p1, p2);
		} // 0xE0031D3C8F36AB82 0xDBFB067B  
		static void set_entity_locally_invisible(Entity entity) { invoke<Void>(0xE135A9FF3F5D05D8, entity); }
		// 0xE135A9FF3F5D05D8 0x51ADCC5F  
		static void set_entity_locally_visible(Entity entity) { invoke<Void>(0x241E289B5C059EDC, entity); }
		// 0x241E289B5C059EDC 0x235A57B3  
		static bool is_damage_tracker_active_on_network_id(int netID)
		{
			return invoke<bool>(0x6E192E33AD436366, netID);
		} // 0x6E192E33AD436366 0x597063BA  
		static void activate_damage_tracker_on_network_id(int netID, bool p1)
		{
			invoke<Void>(0xD45B1FFCCD52FF19, netID, p1);
		} // 0xD45B1FFCCD52FF19 0x95D07BA5  
		static bool is_sphere_visible_to_another_machine(float p0, float p1, float p2, float p3)
		{
			return invoke<bool>(0xD82CF8E64C8729D8, p0, p1, p2, p3);
		} // 0xD82CF8E64C8729D8 0x23C5274E  
		static bool is_sphere_visible_to_player(Any p0, float p1, float p2, float p3, float p4)
		{
			return invoke<bool>(0xDC3A310219E5DA62, p0, p1, p2, p3, p4);
		} // 0xDC3A310219E5DA62 0xE9FCFB32  
		static void reserve_network_mission_objects(int amount) { invoke<Void>(0x4E5C93BD0C32FBF8, amount); }
		// 0x4E5C93BD0C32FBF8 0x391DF4F3  
		static void reserve_network_mission_peds(int amount) { invoke<Void>(0xB60FEBA45333D36F, amount); }
		// 0xB60FEBA45333D36F 0x54998C37  
		static void reserve_network_mission_vehicles(int amount) { invoke<Void>(0x76B02E21ED27A469, amount); }
		// 0x76B02E21ED27A469 0x5062875E  
		static bool can_register_mission_objects(int amount) { return invoke<bool>(0x800DD4721A8B008B, amount); }
		// 0x800DD4721A8B008B 0x7F85DFDE  
		static bool can_register_mission_peds(int amount) { return invoke<bool>(0xBCBF4FEF9FA5D781, amount); }
		// 0xBCBF4FEF9FA5D781 0xCCAA5CE9  
		static bool can_register_mission_vehicles(int amount) { return invoke<bool>(0x7277F1F2E085EE74, amount); }
		// 0x7277F1F2E085EE74 0x818B6830  
		static bool can_register_mission_entities(int ped_amt, int vehicle_amt, int object_amt, int pickup_amt)
		{
			return invoke<bool>(0x69778E7564BADE6D, ped_amt, vehicle_amt, object_amt, pickup_amt);
		} // 0x69778E7564BADE6D 0x83794008  
		static int get_num_reserved_mission_objects(bool p0) { return invoke<int>(0xAA81B5F10BC43AC2, p0); }
		// 0xAA81B5F10BC43AC2 0x16A80CD6  
		static int get_num_reserved_mission_peds(bool p0) { return invoke<int>(0x1F13D5AE5CB17E17, p0); }
		// 0x1F13D5AE5CB17E17 0x6C25975C  
		static int get_num_reserved_mission_vehicles(bool p0) { return invoke<int>(0xCF3A965906452031, p0); }
		// 0xCF3A965906452031 0xA9A308F3  
		static int _0x12b6281b6c6706c0(bool p0) { return invoke<int>(0x12B6281B6C6706C0, p0); }
		// 0x12B6281B6C6706C0 0x603FA104  
		static int _0xcb215c4b56a7fae7(bool p0) { return invoke<int>(0xCB215C4B56A7FAE7, p0); }
		// 0xCB215C4B56A7FAE7 0xD8FEC4F8  
		static int _0x0cd9ab83489430ea(bool p0) { return invoke<int>(0x0CD9AB83489430EA, p0); }
		// 0x0CD9AB83489430EA 0x20527695  
		static Any _0xc7be335216b5ec7c() { return invoke<Any>(0xC7BE335216B5EC7C); } // 0xC7BE335216B5EC7C 0x8687E285  
		static Any _0x0c1f7d49c39d2289() { return invoke<Any>(0x0C1F7D49C39D2289); } // 0x0C1F7D49C39D2289 0x744AC008  
		static Any _0x0afce529f69b21ff() { return invoke<Any>(0x0AFCE529F69B21FF); } // 0x0AFCE529F69B21FF 0xC3A12135  
		static Any _0xa72835064dd63e4c() { return invoke<Any>(0xA72835064DD63E4C); } // 0xA72835064DD63E4C 0x6A036061  
		static int get_network_time() { return invoke<int>(0x7A5487FE9FAA6B48); } // 0x7A5487FE9FAA6B48 0x998103C2  
		static int _0x89023fbbf9200e9f() { return invoke<int>(0x89023FBBF9200E9F); } // 0x89023FBBF9200E9F 0x98AA48E5  
		static bool has_network_time_started() { return invoke<bool>(0x46718ACEEDEAFC84); }
		// 0x46718ACEEDEAFC84 0x4538C4A2  
		static int get_time_offset(int timeA, int timeB) { return invoke<int>(0x017008CCDAD48503, timeA, timeB); }
		// 0x017008CCDAD48503 0x2E079AE6  
		static bool is_time_less_than(int timeA, int timeB) { return invoke<bool>(0xCB2CF5148012C8D0, timeA, timeB); }
		// 0xCB2CF5148012C8D0 0x50EF8FC6  
		static bool is_time_more_than(int timeA, int timeB) { return invoke<bool>(0xDE350F8651E4346C, timeA, timeB); }
		// 0xDE350F8651E4346C 0xBBB6DF61  
		static bool is_time_equal_to(int timeA, int timeB) { return invoke<bool>(0xF5BC95857BD6D512, timeA, timeB); }
		// 0xF5BC95857BD6D512 0x8B4D1C06  
		static int get_time_difference(int timeA, int timeB) { return invoke<int>(0xA2C6FC031D46FFF0, timeA, timeB); }
		// 0xA2C6FC031D46FFF0 0x5666A837  
		static const char* get_time_as_string(int time) { return invoke<const char*>(0x9E23B1777A927DAD, time); }
		// 0x9E23B1777A927DAD 0x8218944E  
		static int _get_posix_time() { return invoke<int>(0x9A73240B49945C76); } // 0x9A73240B49945C76 0xF2FDF2E0  
		static void _get_date_and_time_from_unix_epoch(int unixEpoch, Any* timeStructure)
		{
			invoke<Void>(0xAC97AF97FA68E5D5, unixEpoch, timeStructure);
		} // 0xAC97AF97FA68E5D5 0xBB7CCE49  
		static void network_set_in_spectator_mode(bool toggle, Ped playerPed)
		{
			invoke<Void>(0x423DE3854BB50894, toggle, playerPed);
		} // 0x423DE3854BB50894 0x5C4C8458  
		static void _0x419594e137637120(bool p0, Any p1, bool p2) { invoke<Void>(0x419594E137637120, p0, p1, p2); }
		// 0x419594E137637120 0x54058F5F  
		static void _0xfc18db55ae19e046(bool p0) { invoke<Void>(0xFC18DB55AE19E046, p0); }
		// 0xFC18DB55AE19E046 0xA7E36020  
		static void _0x5c707a667df8b9fa(bool p0, Any p1) { invoke<Void>(0x5C707A667DF8B9FA, p0, p1); }
		// 0x5C707A667DF8B9FA 0x64235620  
		static bool network_is_in_spectator_mode() { return invoke<bool>(0x048746E388762E11); }
		// 0x048746E388762E11 0x3EAD9DB8  
		static void network_set_in_mp_cutscene(bool p0, bool p1) { invoke<Void>(0x9CA5DE655269FEC4, p0, p1); }
		// 0x9CA5DE655269FEC4 0x8434CB43  
		static bool network_is_in_mp_cutscene() { return invoke<bool>(0x6CC27C9FA2040220); }
		// 0x6CC27C9FA2040220 0x4BB33316  
		static bool network_is_player_in_mp_cutscene(Player player) { return invoke<bool>(0x63F9EE203C3619F2, player); }
		// 0x63F9EE203C3619F2 0x56F961E4  
		static void set_network_vehicle_respot_timer(int netId, int time)
		{
			invoke<Void>(0xEC51713AB6EC36E8, netId, time);
		} // 0xEC51713AB6EC36E8 0x2C30912D  
		static void _set_network_object_non_contact(Object object, bool toggle)
		{
			invoke<Void>(0x6274C4712850841E, object, toggle);
		} // 0x6274C4712850841E 0xEA235081  
		static void use_player_colour_instead_of_team_colour(bool toggle) { invoke<Void>(0x5FFE9B4144F9712F, toggle); }
		// 0x5FFE9B4144F9712F 0x4DD46DAE  
		static bool _0x21d04d7bc538c146(Any p0) { return invoke<bool>(0x21D04D7BC538C146, p0); } // 0x21D04D7BC538C146  
		static void _0x77758139ec9b66c7(bool p0) { invoke<Void>(0x77758139EC9B66C7, p0); } // 0x77758139EC9B66C7  
		static int network_create_synchronised_scene(float x, float y, float z, float xRot, float yRot, float zRot,
			int p6, int p7, int p8, float p9)
		{
			return invoke<int>(0x7CD6BC4C2BBDD526, x, y, z, xRot, yRot, zRot, p6, p7, p8, p9);
		} // 0x7CD6BC4C2BBDD526 0xB06FE3FE  
		static void network_add_ped_to_synchronised_scene(Ped ped, int netScene, const char* animDict,
			const char* animnName, float speed, float speedMultiplier,
			int duration, int flag, float playbackRate, Any p9)
		{
			invoke<Void>(0x742A637471BCECD9, ped, netScene, animDict, animnName, speed, speedMultiplier, duration, flag,
				playbackRate, p9);
		} // 0x742A637471BCECD9 0xB386713E  
		static void network_add_entity_to_synchronised_scene(Entity entity, int netScene, const char* animDict,
			const char* animName, float speed, float speedMulitiplier,
			int flag)
		{
			invoke<Void>(0xF2404D68CBC855FA, entity, netScene, animDict, animName, speed, speedMulitiplier, flag);
		} // 0xF2404D68CBC855FA 0x10DD636C  
		static void _network_force_local_use_of_synced_scene_camera(int netScene, const char* animDict,
			const char* animName)
		{
			invoke<Void>(0xCF8BD3B0BD6D42D7, netScene, animDict, animName);
		} // 0xCF8BD3B0BD6D42D7 0xBFFE8B5C  
		static void network_attach_synchronised_scene_to_entity(int netScene, Entity entity, int bone)
		{
			invoke<Void>(0x478DCBD2A98B705A, netScene, entity, bone);
		} // 0x478DCBD2A98B705A 0x3FE5B222  
		static void network_start_synchronised_scene(int netScene) { invoke<Void>(0x9A1B3FCDB36C8697, netScene); }
		// 0x9A1B3FCDB36C8697 0xA9DFDC40  
		static void network_stop_synchronised_scene(int netScene) { invoke<Void>(0xC254481A4574CB2F, netScene); }
		// 0xC254481A4574CB2F 0x97B1CDF6  
		static int _network_convert_synchronised_scene_to_synchronized_scene(int netScene)
		{
			return invoke<int>(0x02C40BF885C567B6, netScene);
		} // 0x02C40BF885C567B6 0x16AED87B  
		static void _0xc9b43a33d09cada7(Any p0) { invoke<Void>(0xC9B43A33D09CADA7, p0); } // 0xC9B43A33D09CADA7  
		static Any _0xfb1f9381e80fa13f(int p0, Any p1) { return invoke<Any>(0xFB1F9381E80FA13F, p0, p1); }
		// 0xFB1F9381E80FA13F 0x0679CE71  
		static bool _0x5a6ffa2433e2f14c(Player player, float p1, float p2, float p3, float p4, float p5, float p6,
			float p7, int flags)
		{
			return invoke<bool>(0x5A6FFA2433E2F14C, player, p1, p2, p3, p4, p5, p6, p7, flags);
		} // 0x5A6FFA2433E2F14C 0xC62E77B3  
		static bool _0x4ba92a18502bca61(Player player, float p1, float p2, float p3, float p4, float p5, float p6,
			float p7, float p8, float p9, float p10, int flags)
		{
			return invoke<bool>(0x4BA92A18502BCA61, player, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, flags);
		} // 0x4BA92A18502BCA61 0x74D6B13C  
		static Any _0x3c891a251567dfce(Any* p0) { return invoke<Any>(0x3C891A251567DFCE, p0); }
		// 0x3C891A251567DFCE 0x90700C7D  
		static void _0xfb8f2a6f3df08cbe() { invoke<Void>(0xFB8F2A6F3DF08CBE); } // 0xFB8F2A6F3DF08CBE 0x44BFB619  
		static void network_get_respawn_result(int randomInt, Vector3* coordinates, float* heading)
		{
			invoke<Void>(0x371EA43692861CF1, randomInt, coordinates, heading);
		} // 0x371EA43692861CF1 0xDDFE9FBC  
		static Any _0x6c34f1208b8923fd(Any p0) { return invoke<Any>(0x6C34F1208B8923FD, p0); }
		// 0x6C34F1208B8923FD 0x03287FD2  
		static void _0x17e0198b3882c2cb() { invoke<Void>(0x17E0198B3882C2CB); } // 0x17E0198B3882C2CB 0x408A9436  
		static void _0xfb680d403909dc70(Any p0, Any p1) { invoke<Void>(0xFB680D403909DC70, p0, p1); }
		// 0xFB680D403909DC70 0xFFB2ADA1  
		static void network_end_tutorial_session() { invoke<Void>(0xD0AFAFF5A51D72F7); }
		// 0xD0AFAFF5A51D72F7 0xBA57E53E  
		static Any network_is_in_tutorial_session() { return invoke<Any>(0xADA24309FE08DACF); }
		// 0xADA24309FE08DACF 0x34DD7B28  
		static Any _0xb37e4e6a2388ca7b() { return invoke<Any>(0xB37E4E6A2388CA7B); } // 0xB37E4E6A2388CA7B 0x755A2B3E  
		static Any _0x35f0b98a8387274d() { return invoke<Any>(0x35F0B98A8387274D); } // 0x35F0B98A8387274D 0xA003C40B  
		static Any _0x3b39236746714134(Any p0) { return invoke<Any>(0x3B39236746714134, p0); }
		// 0x3B39236746714134 0x5E1020CC  
		static bool _network_is_player_equal_to_index(Player player, int index)
		{
			return invoke<bool>(0x9DE986FC9A87C474, player, index);
		} // 0x9DE986FC9A87C474 0xE66A0B40  
		static void _0xbbdf066252829606(Any p0, bool p1) { invoke<Void>(0xBBDF066252829606, p0, p1); }
		// 0xBBDF066252829606 0x72052DB3  
		static bool _0x919b3c98ed8292f9(Any p0) { return invoke<bool>(0x919B3C98ED8292F9, p0); }
		// 0x919B3C98ED8292F9 0xB0313590  
		static void network_override_clock_time(int Hours, int Minutes, int Seconds)
		{
			invoke<Void>(0xE679E3E06E363892, Hours, Minutes, Seconds);
		} // 0xE679E3E06E363892 0xC077BCD6  
		static void network_clear_clock_time_override() { invoke<Void>(0xD972DF67326F966E); }
		// 0xD972DF67326F966E 0xC4AEAF49  
		static bool network_is_clock_time_overridden() { return invoke<bool>(0xD7C95D322FF57522); }
		// 0xD7C95D322FF57522 0x2465296D  
		static Any network_add_entity_area(float p0, float p1, float p2, float p3, float p4, float p5)
		{
			return invoke<Any>(0x494C8FB299290269, p0, p1, p2, p3, p4, p5);
		} // 0x494C8FB299290269 0x51030E5B  
		static Any _network_add_entity_angled_area(float p0, float p1, float p2, float p3, float p4, float p5, float p6)
		{
			return invoke<Any>(0x376C6375BA60293A, p0, p1, p2, p3, p4, p5, p6);
		} // 0x376C6375BA60293A  
		static Any _0x25b99872d588a101(float p0, float p1, float p2, float p3, float p4, float p5)
		{
			return invoke<Any>(0x25B99872D588A101, p0, p1, p2, p3, p4, p5);
		} // 0x25B99872D588A101 0x4C2C2B12  
		static bool network_remove_entity_area(Any p0) { return invoke<bool>(0x93CF869BAA0C4874, p0); }
		// 0x93CF869BAA0C4874 0xEAB97F25  
		static bool _0xe64a3ca08dfa37a9(Any p0) { return invoke<bool>(0xE64A3CA08DFA37A9, p0); }
		// 0xE64A3CA08DFA37A9 0x69956127  
		static bool _0x4df7cfff471a7fb1(Any p0) { return invoke<bool>(0x4DF7CFFF471A7FB1, p0); }
		// 0x4DF7CFFF471A7FB1 0xCB1CD6D3  
		static bool _0x4a2d4e8bf4265b0f(Any p0) { return invoke<bool>(0x4A2D4E8BF4265B0F, p0); }
		// 0x4A2D4E8BF4265B0F 0xC6D53AA0  
		static void _network_set_network_id_dynamic(int netID, bool toggle)
		{
			invoke<Void>(0x2B1813ABA29016C5, netID, toggle);
		} // 0x2B1813ABA29016C5 0x155465EE  
		static bool _network_request_cloud_background_scripts() { return invoke<bool>(0x924426BFFD82E915); }
		// 0x924426BFFD82E915 0x29532731  
		static bool _has_bg_script_been_downloaded() { return invoke<bool>(0x8132C0EB8B2B3293); } // 0x8132C0EB8B2B3293  
		static void network_request_cloud_tunables() { invoke<Void>(0x42FB3B532D526E6C); }
		// 0x42FB3B532D526E6C 0xD760CAD5  
		static bool _has_tunables_been_downloaded() { return invoke<bool>(0x0467C11ED88B7D28); } // 0x0467C11ED88B7D28  
		static Any _0x10bd227a753b0d84() { return invoke<Any>(0x10BD227A753B0D84); } // 0x10BD227A753B0D84 0x231CFD12  
		static bool network_does_tunable_exist(const char* tunableContext, const char* tunableName)
		{
			return invoke<bool>(0x85E5F8B9B898B20A, tunableContext, tunableName);
		} // 0x85E5F8B9B898B20A 0x9FCE9C9A  
		static bool network_access_tunable_int(const char* tunableContext, const char* tunableName, int* value)
		{
			return invoke<bool>(0x8BE1146DFD5D4468, tunableContext, tunableName, value);
		} // 0x8BE1146DFD5D4468 0xE4B3726A  
		static bool network_access_tunable_float(const char* tunableContext, const char* tunableName, float* value)
		{
			return invoke<bool>(0xE5608CA7BC163A5F, tunableContext, tunableName, value);
		} // 0xE5608CA7BC163A5F 0x41E8912A  
		static bool network_access_tunable_bool(const char* tunableContext, const char* tunableName)
		{
			return invoke<bool>(0xAA6A47A573ABB75A, tunableContext, tunableName);
		} // 0xAA6A47A573ABB75A 0x8A04E1FE  
		static bool _network_does_tunable_exist_hash(Hash tunableContext, Hash tunableName)
		{
			return invoke<bool>(0xE4E53E1419D81127, tunableContext, tunableName);
		} // 0xE4E53E1419D81127  
		static bool _network_access_tunable_int_hash(Hash tunableContext, Hash tunableName, int* value)
		{
			return invoke<bool>(0x40FCE03E50E8DBE8, tunableContext, tunableName, value);
		} // 0x40FCE03E50E8DBE8  
		static bool _network_access_tunable_float_hash(Hash tunableContext, Hash tunableName, float* value)
		{
			return invoke<bool>(0x972BC203BBC4C4D5, tunableContext, tunableName, value);
		} // 0x972BC203BBC4C4D5  
		static bool _network_access_tunable_bool_hash(Hash tunableContext, Hash tunableName)
		{
			return invoke<bool>(0xEA16B69D93D71A45, tunableContext, tunableName);
		} // 0xEA16B69D93D71A45  
		static bool _network_access_tunable_bool_hash_fail_val(Hash tunableContext, Hash tunableName, bool defaultValue)
		{
			return invoke<bool>(0xC7420099936CE286, tunableContext, tunableName, defaultValue);
		} // 0xC7420099936CE286  
		static int _get_tunables_content_modifier_id(Hash contentHash)
		{
			return invoke<int>(0x187382F8A3E0A6C3, contentHash);
		} // 0x187382F8A3E0A6C3 0xA78571CA  
		static Any _0x7db53b37a2f211a0() { return invoke<Any>(0x7DB53B37A2F211A0); } // 0x7DB53B37A2F211A0 0x053BB329  
		static void network_reset_body_tracker() { invoke<Void>(0x72433699B4E6DD64); } // 0x72433699B4E6DD64 0x3914463F  
		static Any _0xd38c4a6d047c019d() { return invoke<Any>(0xD38C4A6D047C019D); } // 0xD38C4A6D047C019D 0x17CBC608  
		static bool _0x2e0bf682cc778d49(Any p0) { return invoke<bool>(0x2E0BF682CC778D49, p0); }
		// 0x2E0BF682CC778D49 0xBFAA349B  
		static bool _0x0ede326d47cd0f3e(Ped ped, Player player)
		{
			return invoke<bool>(0x0EDE326D47CD0F3E, ped, player);
		} // 0x0EDE326D47CD0F3E 0xBEB7281A  
		static Any network_explode_vehicle(Vehicle vehicle, bool isAudible, bool isInvisible, bool p3)
		{
			return invoke<Any>(0x301A42153C9AD707, vehicle, isAudible, isInvisible, p3);
		} // 0x301A42153C9AD707 0x0E1B38AE  
		static void _0xcd71a4ecab22709e(Entity entity) { invoke<Void>(0xCD71A4ECAB22709E, entity); }
		// 0xCD71A4ECAB22709E 0xBC54371B  
		static void _0xa7e30de9272b6d49(Ped ped, float x, float y, float z, float p4)
		{
			invoke<Void>(0xA7E30DE9272B6D49, ped, x, y, z, p4);
		} // 0xA7E30DE9272B6D49 0x644141C5  
		static void _0x407091cf6037118e(int netID) { invoke<Void>(0x407091CF6037118E, netID); } // 0x407091CF6037118E  
		static void network_set_property_id(Any p0) { invoke<Void>(0x1775961C2FBBCB5C, p0); }
		// 0x1775961C2FBBCB5C 0x5A74E873  
		static void network_clear_property_id() { invoke<Void>(0xC2B82527CA77053E); } // 0xC2B82527CA77053E 0x38BC35C8  
		static void _0x367ef5e2f439b4c6(int p0) { invoke<Void>(0x367EF5E2F439B4C6, p0); }
		// 0x367EF5E2F439B4C6 0x53C9563C  
		static void _0x94538037ee44f5cf(bool p0) { invoke<Void>(0x94538037EE44F5CF, p0); }
		// 0x94538037EE44F5CF 0x6B97075B  
		static void _0xbd0be0bfc927eac1() { invoke<Void>(0xBD0BE0BFC927EAC1); } // 0xBD0BE0BFC927EAC1  
		static bool _0x237d5336a9a54108(Any p0) { return invoke<bool>(0x237D5336A9A54108, p0); } // 0x237D5336A9A54108  
		static bool _network_copy_ped_blend_data(Ped ped, Player player)
		{
			return invoke<bool>(0x99B72C7ABDE5C910, ped, player);
		} // 0x99B72C7ABDE5C910  
		static Any _0xf2eac213d5ea0623() { return invoke<Any>(0xF2EAC213D5EA0623); } // 0xF2EAC213D5EA0623 0x965EA007  
		static Any _0xea14eef5b7cd2c30() { return invoke<Any>(0xEA14EEF5B7CD2C30); } // 0xEA14EEF5B7CD2C30 0xEEFC8A55  
		static void _0xb606e6cc59664972(Any p0) { invoke<Void>(0xB606E6CC59664972, p0); }
		// 0xB606E6CC59664972 0x866D1B67  
		static Any _0x1d4dc17c38feaff0() { return invoke<Any>(0x1D4DC17C38FEAFF0); } // 0x1D4DC17C38FEAFF0 0xED4A272F  
		static Any _0x662635855957c411(Any p0) { return invoke<Any>(0x662635855957C411, p0); }
		// 0x662635855957C411 0x4ACF110C  
		static Any _0xb4271092ca7edf48(Any p0) { return invoke<Any>(0xB4271092CA7EDF48, p0); }
		// 0xB4271092CA7EDF48 0x1AA3A0D5  
		static Any _0xca94551b50b4932c(Any p0) { return invoke<Any>(0xCA94551B50B4932C, p0); }
		// 0xCA94551B50B4932C 0x37877757  
		static Any _0x2a7776c709904ab0(Any p0) { return invoke<Any>(0x2A7776C709904AB0, p0); }
		// 0x2A7776C709904AB0 0x1CF89DA5  
		static Any _0x6f44cbf56d79fac0(Any p0, Any p1) { return invoke<Any>(0x6F44CBF56D79FAC0, p0, p1); }
		// 0x6F44CBF56D79FAC0 0x16E53875  
		static void _0x58c21165f6545892(const char* p0, const char* p1) { invoke<Void>(0x58C21165F6545892, p0, p1); }
		// 0x58C21165F6545892 0x365C50EE  
		static Any _0x2eac52b4019e2782() { return invoke<Any>(0x2EAC52B4019E2782); } // 0x2EAC52B4019E2782 0x25E2DBA9  
		static void set_store_enabled(bool toggle) { invoke<Void>(0x9641A9FF718E9C5E, toggle); }
		// 0x9641A9FF718E9C5E 0xC1F6443B  
		static bool _0xa2f952104fc6dd4b(Any p0) { return invoke<bool>(0xA2F952104FC6DD4B, p0); }
		// 0xA2F952104FC6DD4B 0x1FDC75DC  
		static void _0x72d0706cd6ccdb58() { invoke<Void>(0x72D0706CD6CCDB58); } // 0x72D0706CD6CCDB58 0xCA7A0A49  
		static Any _0x722f5d28b61c5ea8(Any p0) { return invoke<Any>(0x722F5D28B61C5EA8, p0); }
		// 0x722F5D28B61C5EA8 0x44A58B0A  
		static Any _0x883d79c4071e18b3() { return invoke<Any>(0x883D79C4071E18B3); } // 0x883D79C4071E18B3 0xD32FA11F  
		static void _0x265635150fb0d82e() { invoke<Void>(0x265635150FB0D82E); } // 0x265635150FB0D82E 0xA7FA70AE  
		static void _0x444c4525ece0a4b9() { invoke<Void>(0x444C4525ECE0A4B9); } // 0x444C4525ECE0A4B9 0xCC7DCE24  
		static Any _0x59328eb08c5ceb2b() { return invoke<Any>(0x59328EB08C5CEB2B); } // 0x59328EB08C5CEB2B 0x70F6D3AD  
		static void _0xfae628f1e9adb239(Any p0, Any p1, Any p2) { invoke<Void>(0xFAE628F1E9ADB239, p0, p1, p2); }
		// 0xFAE628F1E9ADB239  
		static Any _0xc64ded7ef0d2fe37(Any* p0) { return invoke<Any>(0xC64DED7EF0D2FE37, p0); }
		// 0xC64DED7EF0D2FE37 0x2B7B57B3  
		static bool _0x4c61b39930d045da(Any p0) { return invoke<bool>(0x4C61B39930D045DA, p0); }
		// 0x4C61B39930D045DA 0xBAF52DD8  
		static bool _0x3a3d5568af297cd5(Any p0) { return invoke<bool>(0x3A3D5568AF297CD5, p0); }
		// 0x3A3D5568AF297CD5 0x9B9AFFF1  
		static void _download_check() { invoke<Void>(0x4F18196C8D38768D); } // 0x4F18196C8D38768D 0xC38E9DB0  
		static Any _0xc7abac5de675ee3b() { return invoke<Any>(0xC7ABAC5DE675EE3B); } // 0xC7ABAC5DE675EE3B 0x32A4EB22  
		static Any network_enable_motion_drugged() { return invoke<Any>(0x0B0CC10720653F3B); }
		// 0x0B0CC10720653F3B 0x9262744C  
		static Any _0x8b0c2964ba471961() { return invoke<Any>(0x8B0C2964BA471961); } // 0x8B0C2964BA471961  
		static Any _0x88b588b41ff7868e() { return invoke<Any>(0x88B588B41FF7868E); } // 0x88B588B41FF7868E  
		static Any _0x67fc09bc554a75e5() { return invoke<Any>(0x67FC09BC554A75E5); } // 0x67FC09BC554A75E5  
		static void _0x966dd84fb6a46017() { invoke<Void>(0x966DD84FB6A46017); } // 0x966DD84FB6A46017  
		static bool _0x152d90e4c1b4738a(Any* p0, Any* p1) { return invoke<bool>(0x152D90E4C1B4738A, p0, p1); }
		// 0x152D90E4C1B4738A 0x08243B79  
		static Any _0x9fedf86898f100e9() { return invoke<Any>(0x9FEDF86898F100E9); } // 0x9FEDF86898F100E9 0x798D6C27  
		static Any _0x5e24341a7f92a74b() { return invoke<Any>(0x5E24341A7F92A74B); } // 0x5E24341A7F92A74B 0xE69E8D0D  
		static Any _0x24e4e51fc16305f9() { return invoke<Any>(0x24E4E51FC16305F9); } // 0x24E4E51FC16305F9 0x742075FE  
		static Any _0xfbc5e768c7a77a6a() { return invoke<Any>(0xFBC5E768C7A77A6A); } // 0xFBC5E768C7A77A6A 0xCE569932  
		static Any _0xc55a0b40ffb1ed23() { return invoke<Any>(0xC55A0B40FFB1ED23); } // 0xC55A0B40FFB1ED23 0x82146BE9  
		static void _0x17440aa15d1d3739() { invoke<Void>(0x17440AA15D1D3739); } // 0x17440AA15D1D3739 0x133FF2D5  
		static bool _0x9bf438815f5d96ea(Any p0, Any p1, Any* p2, Any p3, Any p4, Any p5)
		{
			return invoke<bool>(0x9BF438815F5D96EA, p0, p1, p2, p3, p4, p5);
		} // 0x9BF438815F5D96EA 0xCBA7242F  
		static bool _0x692d58df40657e8c(Any p0, Any p1, Any p2, Any* p3, Any p4, bool p5)
		{
			return invoke<bool>(0x692D58DF40657E8C, p0, p1, p2, p3, p4, p5);
		} // 0x692D58DF40657E8C  
		static bool _0x158ec424f35ec469(const char* p0, bool p1, const char* contentType)
		{
			return invoke<bool>(0x158EC424F35EC469, p0, p1, contentType);
		} // 0x158EC424F35EC469 0xDED82A6E  
		static bool _0xc7397a83f7a2a462(Any* p0, Any p1, bool p2, Any* p3)
		{
			return invoke<bool>(0xC7397A83F7A2A462, p0, p1, p2, p3);
		} // 0xC7397A83F7A2A462  
		static bool _0x6d4cb481fac835e8(Any p0, Any p1, Any* p2, Any p3)
		{
			return invoke<bool>(0x6D4CB481FAC835E8, p0, p1, p2, p3);
		} // 0x6D4CB481FAC835E8 0x40CF0783  
		static bool _0xd5a4b59980401588(Any p0, Any p1, Any* p2, Any* p3)
		{
			return invoke<bool>(0xD5A4B59980401588, p0, p1, p2, p3);
		} // 0xD5A4B59980401588 0x4609D596  
		static bool _0x3195f8dd0d531052(Any p0, Any p1, Any* p2, Any* p3)
		{
			return invoke<bool>(0x3195F8DD0D531052, p0, p1, p2, p3);
		} // 0x3195F8DD0D531052 0x4C2C0D1F  
		static bool _0xf9e1ccae8ba4c281(Any p0, Any p1, Any* p2, Any* p3)
		{
			return invoke<bool>(0xF9E1CCAE8BA4C281, p0, p1, p2, p3);
		} // 0xF9E1CCAE8BA4C281 0x9EFBD5D1  
		static bool _0x9f6e2821885caee2(Any p0, Any p1, Any p2, Any* p3, Any* p4)
		{
			return invoke<bool>(0x9F6E2821885CAEE2, p0, p1, p2, p3, p4);
		} // 0x9F6E2821885CAEE2 0xA6D8B798  
		static bool _0x678bb03c1a3bd51e(Any p0, Any p1, Any p2, Any* p3, Any* p4)
		{
			return invoke<bool>(0x678BB03C1A3BD51E, p0, p1, p2, p3, p4);
		} // 0x678BB03C1A3BD51E 0x67E74842  
		static bool set_balance_add_machine(Any* p0, Any* p1) { return invoke<bool>(0x815E5E3073DA1D67, p0, p1); }
		// 0x815E5E3073DA1D67 0xE123C7AC  
		static bool set_balance_add_machines(Any* p0, Any p1, Any* p2)
		{
			return invoke<bool>(0xB8322EEB38BE7C26, p0, p1, p2);
		} // 0xB8322EEB38BE7C26 0x22C33603  
		static bool _0xa7862bc5ed1dfd7e(Any p0, Any p1, Any* p2, Any* p3)
		{
			return invoke<bool>(0xA7862BC5ED1DFD7E, p0, p1, p2, p3);
		} // 0xA7862BC5ED1DFD7E 0x37F5BD93  
		static bool network_get_background_loading_recipients(Any p0, Any p1, Any* p2, Any* p3)
		{
			return invoke<bool>(0x97A770BEEF227E2B, p0, p1, p2, p3);
		} // 0x97A770BEEF227E2B 0x1CFB3F51  
		static bool _0x5324a0e3e4ce3570(Any p0, Any p1, Any* p2, Any* p3)
		{
			return invoke<bool>(0x5324A0E3E4CE3570, p0, p1, p2, p3);
		} // 0x5324A0E3E4CE3570 0x87D1E6BD  
		static void _0xe9b99b6853181409() { invoke<Void>(0xE9B99B6853181409); } // 0xE9B99B6853181409 0x021D5A94  
		static Any _0xd53acdbef24a46e8() { return invoke<Any>(0xD53ACDBEF24A46E8); } // 0xD53ACDBEF24A46E8 0x4908A514  
		static Any _0x02ada21ea2f6918f() { return invoke<Any>(0x02ADA21EA2F6918F); } // 0x02ADA21EA2F6918F 0x50296140  
		static Any _0x941e5306bcd7c2c7() { return invoke<Any>(0x941E5306BCD7C2C7); } // 0x941E5306BCD7C2C7 0x3970B0DA  
		static Any _0xc87e740d9f3872cc() { return invoke<Any>(0xC87E740D9F3872CC); } // 0xC87E740D9F3872CC 0xC1487110  
		static Any _0xedf7f927136c224b() { return invoke<Any>(0xEDF7F927136C224B); } // 0xEDF7F927136C224B 0xCC2356E3  
		static Any _0xe0a6138401bcb837() { return invoke<Any>(0xE0A6138401BCB837); } // 0xE0A6138401BCB837 0x2DE69817  
		static Any _0x769951e2455e2eb5() { return invoke<Any>(0x769951E2455E2EB5); } // 0x769951E2455E2EB5 0x81BD8D3B  
		static Any _0x3a17a27d75c74887() { return invoke<Any>(0x3A17A27D75C74887); } // 0x3A17A27D75C74887 0x8E1D8F78  
		static void _0xba96394a0eecfa65() { invoke<Void>(0xBA96394A0EECFA65); } // 0xBA96394A0EECFA65 0x0D35DD93  
		static const char* _get_content_user_id(int p0) { return invoke<const char*>(0xCD67AD041A394C9C, p0); }
		// 0xCD67AD041A394C9C 0x8F3137E6  
		static bool _0x584770794d758c18(Any p0, Any* p1) { return invoke<bool>(0x584770794D758C18, p0, p1); }
		// 0x584770794D758C18  
		static bool _0x8c8d2739ba44af0f(Any p0) { return invoke<bool>(0x8C8D2739BA44AF0F, p0); } // 0x8C8D2739BA44AF0F  
		static Any _0x703f12425eca8bf5(Any p0) { return invoke<Any>(0x703F12425ECA8BF5, p0); }
		// 0x703F12425ECA8BF5 0xB9137BA7  
		static bool _0xaeab987727c5a8a4(Any p0) { return invoke<bool>(0xAEAB987727C5A8A4, p0); }
		// 0xAEAB987727C5A8A4 0x9FEEAA9C  
		static int _get_content_category(int p0) { return invoke<int>(0xA7BAB11E7C9C6C5A, p0); }
		// 0xA7BAB11E7C9C6C5A 0x5E8A7559  
		static const char* _get_content_id(Any p0) { return invoke<const char*>(0x55AA95F481D694D2, p0); }
		// 0x55AA95F481D694D2 0x331AEABF  
		static const char* _get_root_content_id(Any p0) { return invoke<const char*>(0xC0173D6BFF4E0348, p0); }
		// 0xC0173D6BFF4E0348 0x0E5E8E5C  
		static Any _0xbf09786a7fcab582(Any p0) { return invoke<Any>(0xBF09786A7FCAB582, p0); }
		// 0xBF09786A7FCAB582 0xA5A0C695  
		static int _get_content_description_hash(Any p0) { return invoke<int>(0x7CF0448787B23758, p0); }
		// 0x7CF0448787B23758 0x91534C6E  
		static Any _0xbaf6babf9e7ccc13(Any p0, Any p1) { return invoke<Any>(0xBAF6BABF9E7CCC13, p0, p1); }
		// 0xBAF6BABF9E7CCC13 0x744A9EA5  
		static void _0xcfd115b373c0df63(Any p0, Any* p1) { invoke<Void>(0xCFD115B373C0DF63, p0, p1); }
		// 0xCFD115B373C0DF63 0xA19A238D  
		static Any _get_content_file_version(Any p0, Any p1) { return invoke<Any>(0x37025B27D9B658B1, p0, p1); }
		// 0x37025B27D9B658B1 0xFF7D44E6  
		static bool _0x1d610eb0fea716d9(Any p0) { return invoke<bool>(0x1D610EB0FEA716D9, p0); } // 0x1D610EB0FEA716D9  
		static bool _0x7fcc39c46c3c03bd(Any p0) { return invoke<bool>(0x7FCC39C46C3C03BD, p0); } // 0x7FCC39C46C3C03BD  
		static Any _0x32dd916f3f7c9672(Any p0) { return invoke<Any>(0x32DD916F3F7C9672, p0); }
		// 0x32DD916F3F7C9672 0xA2C5BD9D  
		static bool _0x3054f114121c21ea(Any p0) { return invoke<bool>(0x3054F114121C21EA, p0); }
		// 0x3054F114121C21EA 0xA850DDE1  
		static bool _0xa9240a96c74cca13(Any p0) { return invoke<bool>(0xA9240A96C74CCA13, p0); }
		// 0xA9240A96C74CCA13 0x8F6754AE  
		static Any _0x1accfba3d8dab2ee(Any p0, Any p1) { return invoke<Any>(0x1ACCFBA3D8DAB2EE, p0, p1); }
		// 0x1ACCFBA3D8DAB2EE 0x1E34953F  
		static Any _0x759299c5bb31d2a9(Any p0, Any p1) { return invoke<Any>(0x759299C5BB31D2A9, p0, p1); }
		// 0x759299C5BB31D2A9 0x771FE190  
		static Any _0x87e5c46c187fe0ae(Any p0, Any p1) { return invoke<Any>(0x87E5C46C187FE0AE, p0, p1); }
		// 0x87E5C46C187FE0AE 0x3276D9D3  
		static Any _0x4e548c0d7ae39ff9(Any p0, Any p1) { return invoke<Any>(0x4E548C0D7AE39FF9, p0, p1); }
		// 0x4E548C0D7AE39FF9 0x41A0FB02  
		static bool _0x70ea8da57840f9be(Any p0) { return invoke<bool>(0x70EA8DA57840F9BE, p0); }
		// 0x70EA8DA57840F9BE 0x11DC0F27  
		static bool _0x993cbe59d350d225(Any p0) { return invoke<bool>(0x993CBE59D350D225, p0); }
		// 0x993CBE59D350D225 0x0DEB3F5A  
		static Any _0x171df6a0c07fb3dc(Any p0, Any p1) { return invoke<Any>(0x171DF6A0C07FB3DC, p0, p1); }
		// 0x171DF6A0C07FB3DC 0x84315226  
		static Any _0x7fd2990af016795e(Any* p0, Any* p1, Any p2, Any p3, Any p4)
		{
			return invoke<Any>(0x7FD2990AF016795E, p0, p1, p2, p3, p4);
		} // 0x7FD2990AF016795E 0x38FC2EEB  
		static Any _0x5e0165278f6339ee(Any p0) { return invoke<Any>(0x5E0165278F6339EE, p0); }
		// 0x5E0165278F6339EE 0x1C4F9FDB  
		static bool _0x2d5dc831176d0114(Any p0) { return invoke<bool>(0x2D5DC831176D0114, p0); }
		// 0x2D5DC831176D0114 0xA69AE16C  
		static bool _0xebfa8d50addc54c4(Any p0) { return invoke<bool>(0xEBFA8D50ADDC54C4, p0); }
		// 0xEBFA8D50ADDC54C4 0xF50BC67A  
		static bool _0x162c23ca83ed0a62(Any p0) { return invoke<bool>(0x162C23CA83ED0A62, p0); }
		// 0x162C23CA83ED0A62 0xB3BBD241  
		static Any _0x40f7e66472df3e5c(Any p0, Any p1) { return invoke<Any>(0x40F7E66472DF3E5C, p0, p1); }
		// 0x40F7E66472DF3E5C 0x70A2845C  
		static bool _0x5a34cd9c3c5bec44(Any p0) { return invoke<bool>(0x5A34CD9C3C5BEC44, p0); }
		// 0x5A34CD9C3C5BEC44 0x346B506C  
		static void _0x68103e2247887242() { invoke<Void>(0x68103E2247887242); } // 0x68103E2247887242 0x0095DB71  
		static bool _0x1de0f5f50d723caa(Any* p0, Any* p1, Any* p2)
		{
			return invoke<bool>(0x1DE0F5F50D723CAA, p0, p1, p2);
		} // 0x1DE0F5F50D723CAA 0xAD334B40  
		static bool _0x274a1519dfc1094f(Any* p0, bool p1, Any* p2)
		{
			return invoke<bool>(0x274A1519DFC1094F, p0, p1, p2);
		} // 0x274A1519DFC1094F 0x980D45D7  
		static bool _0xd05d1a6c74da3498(Any* p0, bool p1, Any* p2)
		{
			return invoke<bool>(0xD05D1A6C74DA3498, p0, p1, p2);
		} // 0xD05D1A6C74DA3498 0x48CCC328  
		static Any _0x45e816772e93a9db() { return invoke<Any>(0x45E816772E93A9DB); } // 0x45E816772E93A9DB 0x8E664EFD  
		static Any _0x299ef3c576773506() { return invoke<Any>(0x299EF3C576773506); } // 0x299EF3C576773506 0x611E0BE2  
		static Any _0x793ff272d5b365f4() { return invoke<Any>(0x793FF272D5B365F4); } // 0x793FF272D5B365F4 0xF0211AC1  
		static Any _0x5a0a3d1a186a5508() { return invoke<Any>(0x5A0A3D1A186A5508); } // 0x5A0A3D1A186A5508 0x1F0DD8AF  
		static void _0xa1e5e0204a6fcc70() { invoke<Void>(0xA1E5E0204A6FCC70); } // 0xA1E5E0204A6FCC70 0x405ECA16  
		static bool _0xb746d20b17f2a229(Any* p0, Any* p1) { return invoke<bool>(0xB746D20B17F2A229, p0, p1); }
		// 0xB746D20B17F2A229 0x9567392B  
		static Any _0x63b406d7884bfa95() { return invoke<Any>(0x63B406D7884BFA95); } // 0x63B406D7884BFA95 0xF79FFF3C  
		static Any _0x4d02279c83be69fe() { return invoke<Any>(0x4D02279C83BE69FE); } // 0x4D02279C83BE69FE 0xA7F3F82B  
		static Any _0x597f8dba9b206fc7() { return invoke<Any>(0x597F8DBA9B206FC7); } // 0x597F8DBA9B206FC7 0x410C61D1  
		static bool _0x5cae833b0ee0c500(Any p0) { return invoke<bool>(0x5CAE833B0EE0C500, p0); }
		// 0x5CAE833B0EE0C500 0x0D4F845D  
		static void _0x61a885d3f7cfee9a() { invoke<Void>(0x61A885D3F7CFEE9A); } // 0x61A885D3F7CFEE9A 0xE13C1F7F  
		static void _0xf98dde0a8ed09323(bool p0) { invoke<Void>(0xF98DDE0A8ED09323, p0); }
		// 0xF98DDE0A8ED09323 0x213C6D36  
		static void _0xfd75dabc0957bf33(bool p0) { invoke<Void>(0xFD75DABC0957BF33, p0); }
		// 0xFD75DABC0957BF33 0x511E6F50  
		static bool _0xf53e48461b71eecb(Any p0) { return invoke<bool>(0xF53E48461B71EECB, p0); }
		// 0xF53E48461B71EECB 0xB4668B23  
		static bool _facebook_set_heist_complete(const char* heistName, int cashEarned, int xpEarned)
		{
			return invoke<bool>(0x098AB65B9ED9A9EC, heistName, cashEarned, xpEarned);
		} // 0x098AB65B9ED9A9EC 0x30B51753  
		static bool _facebook_set_create_character_complete() { return invoke<bool>(0xDC48473142545431); }
		// 0xDC48473142545431 0x02DAD93F  
		static bool _facebook_set_milestone_complete(int milestoneId)
		{
			return invoke<bool>(0x0AE1F1653B554AB9, milestoneId);
		} // 0x0AE1F1653B554AB9 0x2D947814  
		static bool _facebook_is_sending_data() { return invoke<bool>(0x62B9FEC9A11F10EF); }
		// 0x62B9FEC9A11F10EF 0x37A28C26  
		static bool _facebook_do_unk_check() { return invoke<bool>(0xA75E2B6733DA5142); }
		// 0xA75E2B6733DA5142 0x11E8B5CD  
		static bool _facebook_is_available() { return invoke<bool>(0x43865688AE10F0D7); }
		// 0x43865688AE10F0D7 0x429AEAB3  
		static int texture_download_request(int* PlayerHandle, const char* FilePath, const char* Name, bool p3)
		{
			return invoke<int>(0x16160DA74A8E74A2, PlayerHandle, FilePath, Name, p3);
		} // 0x16160DA74A8E74A2 0xAD546CC3  
		static Any _0x0b203b4afde53a4f(Any* p0, Any* p1, bool p2)
		{
			return invoke<Any>(0x0B203B4AFDE53A4F, p0, p1, p2);
		} // 0x0B203B4AFDE53A4F 0x1856D008  
		static Any _0x308f96458b7087cc(Any* p0, Any p1, Any p2, Any p3, Any* p4, bool p5)
		{
			return invoke<Any>(0x308F96458B7087CC, p0, p1, p2, p3, p4, p5);
		} // 0x308F96458B7087CC 0x68C9AF69  
		static void texture_download_release(int p0) { invoke<Void>(0x487EB90B98E9FB19, p0); }
		// 0x487EB90B98E9FB19 0xEE8D9E70  
		static bool texture_download_has_failed(int p0) { return invoke<bool>(0x5776ED562C134687, p0); }
		// 0x5776ED562C134687 0xE4547765  
		static const char* texture_download_get_name(int p0) { return invoke<const char*>(0x3448505B6E35262D, p0); }
		// 0x3448505B6E35262D 0xA40EF65A  
		static Any _0x8bd6c6dea20e82c6(Any p0) { return invoke<Any>(0x8BD6C6DEA20E82C6, p0); }
		// 0x8BD6C6DEA20E82C6 0x03225BA3  
		static Any _0x60edd13eb3ac1ff3() { return invoke<Any>(0x60EDD13EB3AC1FF3); } // 0x60EDD13EB3AC1FF3 0x4DEBC227  
		static bool network_is_cable_connected() { return invoke<bool>(0xEFFB25453D8600F9); }
		// 0xEFFB25453D8600F9 0x5C065D55  
		static Any _0x66b59cffd78467af() { return invoke<Any>(0x66B59CFFD78467AF); } // 0x66B59CFFD78467AF 0x0CA1167F  
		static Any _0x606e4d3e3cccf3eb() { return invoke<Any>(0x606E4D3E3CCCF3EB); } // 0x606E4D3E3CCCF3EB 0x424C6E27  
		static bool _is_rockstar_banned() { return invoke<bool>(0x8020A73847E0CA7D); } // 0x8020A73847E0CA7D 0xD3BBE42F  
		static bool _is_socialclub_banned() { return invoke<bool>(0xA0AD7E2AF5349F61); }
		// 0xA0AD7E2AF5349F61 0xBDBB5948  
		static bool _can_play_online() { return invoke<bool>(0x5F91D5D0B36AA310); } // 0x5F91D5D0B36AA310 0x97287D68  
		static Any _0x422d396f80a96547() { return invoke<Any>(0x422D396F80A96547); } // 0x422D396F80A96547 0xC6EA802E  
		static bool _0xa699957e60d80214(Any p0) { return invoke<bool>(0xA699957E60D80214, p0); }
		// 0xA699957E60D80214 0xFD261E30  
		static bool _0xc22912b1d85f26b1(Any p0, Any* p1, Any* p2)
		{
			return invoke<bool>(0xC22912B1D85F26B1, p0, p1, p2);
		} // 0xC22912B1D85F26B1 0x8570DD34  
		static Any _0x593570c289a77688() { return invoke<Any>(0x593570C289A77688); } // 0x593570C289A77688  
		static Any _0x91b87c55093de351() { return invoke<Any>(0x91B87C55093DE351); } // 0x91B87C55093DE351  
		static Any _0x36391f397731595d(Any p0) { return invoke<Any>(0x36391F397731595D, p0); } // 0x36391F397731595D  
		static Any _0xdeb2b99a1af1a2a6(Any p0) { return invoke<Any>(0xDEB2B99A1AF1A2A6, p0); } // 0xDEB2B99A1AF1A2A6  
		static void _0x9465e683b12d3f6b() { invoke<Void>(0x9465E683B12D3F6B); } // 0x9465E683B12D3F6B 0x273C6180  
		static void _0xb7c7f6ad6424304b() { invoke<Void>(0xB7C7F6AD6424304B); } // 0xB7C7F6AD6424304B 0x371BBA08  
		static void _0xc505036a35afd01b(bool p0) { invoke<Void>(0xC505036A35AFD01B, p0); }
		// 0xC505036A35AFD01B 0xA100CC97  
		static void _0x267c78c60e806b9a(Any p0, bool p1) { invoke<Void>(0x267C78C60E806B9A, p0, p1); }
		// 0x267C78C60E806B9A 0xBB2D33D3  
		static void _0x6bff5f84102df80a(Any p0) { invoke<Void>(0x6BFF5F84102DF80A, p0); } // 0x6BFF5F84102DF80A  
		static void _0x5c497525f803486b() { invoke<Void>(0x5C497525F803486B); } // 0x5C497525F803486B  
		static Any _0x6fb7bb3607d27fa2() { return invoke<Any>(0x6FB7BB3607D27FA2); } // 0x6FB7BB3607D27FA2  
		static void _0x45a83257ed02d9bc() { invoke<Void>(0x45A83257ED02D9BC); } // 0x45A83257ED02D9BC  
	}

	namespace networkcash
	{
		static void network_initialize_cash(int p0, int p1) { invoke<Void>(0x3DA5ECD1A56CBA6D, p0, p1); }
		// 0x3DA5ECD1A56CBA6D 0x66DA9935  
		static void network_delete_character(int characterIndex, bool p1, bool p2)
		{
			invoke<Void>(0x05A50AF38947EB8D, characterIndex, p1, p2);
		} // 0x05A50AF38947EB8D 0xA9F7E9C3  
		static void network_clear_character_wallet(Any p0) { invoke<Void>(0xA921DED15FDF28F5, p0); }
		// 0xA921DED15FDF28F5 0x19F0C471  
		static void network_give_player_jobshare_cash(int amount, int* networkHandle)
		{
			invoke<Void>(0xFB18DF9CB95E0105, amount, networkHandle);
		} // 0xFB18DF9CB95E0105 0xC6047FDB  
		static void network_receive_player_jobshare_cash(int value, int* networkHandle)
		{
			invoke<Void>(0x56A3B51944C50598, value, networkHandle);
		} // 0x56A3B51944C50598 0x4ED71C1A  
		static Any _0x1c2473301b1c66ba() { return invoke<Any>(0x1C2473301B1C66BA); } // 0x1C2473301B1C66BA 0xA27B9FE8  
		static void network_refund_cash(int index, const char* context, const char* reason, bool unk)
		{
			invoke<Void>(0xF9C812CD7C46E817, index, context, reason, unk);
		} // 0xF9C812CD7C46E817 0x07C92F21  
		static bool network_money_can_bet(Any p0, bool p1, bool p2)
		{
			return invoke<bool>(0x81404F3DC124FE5B, p0, p1, p2);
		} // 0x81404F3DC124FE5B 0x8474E6F0  
		static bool network_can_bet(Any p0) { return invoke<bool>(0x3A54E33660DED67F, p0); }
		// 0x3A54E33660DED67F 0xE3802533  
		static void network_earn_from_pickup(int amount) { invoke<Void>(0xED1517D3AF17C698, amount); }
		// 0xED1517D3AF17C698 0x70A0ED62  
		static void _network_earn_from_gang_pickup(int amount) { invoke<Void>(0xA03D4ACE0A3284CE, amount); }
		// 0xA03D4ACE0A3284CE 0x33C20BC4  
		static void _network_earn_from_armour_truck(int amount) { invoke<Void>(0xF514621E8EA463D0, amount); }
		// 0xF514621E8EA463D0 0x30B3EC0A  
		static void network_earn_from_crate_drop(int amount) { invoke<Void>(0xB1CC1B9EC3007A2A, amount); }
		// 0xB1CC1B9EC3007A2A 0xEAF04923  
		static void network_earn_from_betting(int amount, const char* p1)
		{
			invoke<Void>(0x827A5BA1A44ACA6D, amount, p1);
		} // 0x827A5BA1A44ACA6D 0xA0F7F07C  
		static void network_earn_from_job(int amount, const char* p1) { invoke<Void>(0xB2CC4836834E8A98, amount, p1); }
		// 0xB2CC4836834E8A98 0x0B6997FC  
		static void network_earn_from_mission_h(int amount, const char* heistHash)
		{
			invoke<Void>(0x61326EE6DF15B0CA, amount, heistHash);
		} // 0x61326EE6DF15B0CA 0x5E81F55C  
		static void network_earn_from_challenge_win(Any p0, Any* p1, bool p2)
		{
			invoke<Void>(0x2B171E6B2F64D8DF, p0, p1, p2);
		} // 0x2B171E6B2F64D8DF 0x2BEFB6C4  
		static void network_earn_from_bounty(int amount, int* networkHandle, Any* p2, Any p3)
		{
			invoke<Void>(0x131BB5DA15453ACF, amount, networkHandle, p2, p3);
		} // 0x131BB5DA15453ACF 0x127F2DAE  
		static void network_earn_from_import_export(Any p0, Any p1) { invoke<Void>(0xF92A014A634442D6, p0, p1); }
		// 0xF92A014A634442D6 0xF11FC458  
		static void network_earn_from_holdups(int amount) { invoke<Void>(0x45B8154E077D9E4D, amount); }
		// 0x45B8154E077D9E4D 0xE6B90E9C  
		static void network_earn_from_property(int amount, Hash propertyName)
		{
			invoke<Void>(0x849648349D77F5C5, amount, propertyName);
		} // 0x849648349D77F5C5 0x9BE4F7E1  
		static void network_earn_from_ai_target_kill(Any p0, Any p1) { invoke<Void>(0x515B4A22E4D3C6D7, p0, p1); }
		// 0x515B4A22E4D3C6D7 0x866004A8  
		static void network_earn_from_not_badsport(int amount) { invoke<Void>(0x4337511FA8221D36, amount); }
		// 0x4337511FA8221D36 0xCC068380  
		static void network_earn_from_rockstar(int amount) { invoke<Void>(0x02CE1D6AC0FC73EA, amount); }
		// 0x02CE1D6AC0FC73EA 0x5A3733CC  
		static void network_earn_from_vehicle(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7)
		{
			invoke<Void>(0xB539BD8A4C1EECF8, p0, p1, p2, p3, p4, p5, p6, p7);
		} // 0xB539BD8A4C1EECF8 0xF803589D  
		static void network_earn_from_personal_vehicle(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7,
			Any p8)
		{
			invoke<Void>(0x3F4D00167E41E0AD, p0, p1, p2, p3, p4, p5, p6, p7, p8);
		} // 0x3F4D00167E41E0AD 0x96B8BEE8  
		static void _network_earn_from_daily_objective(int p0, const char* p1, int p2)
		{
			invoke<Void>(0x6EA318C91C1A8786, p0, p1, p2);
		} // 0x6EA318C91C1A8786  
		static void _network_earn_from_ambient_job(int p0, const char* p1, Any* p2)
		{
			invoke<Void>(0xFB6DB092FBAE29E6, p0, p1, p2);
		} // 0xFB6DB092FBAE29E6  
		static void _network_earn_from_job_bonus(Any p0, Any* p1, Any* p2)
		{
			invoke<Void>(0x6816FB4416760775, p0, p1, p2);
		} // 0x6816FB4416760775  
		static bool network_can_spend_money(Any p0, bool p1, bool p2, bool p3, Any p4)
		{
			return invoke<bool>(0xAB3CAA6B422164DA, p0, p1, p2, p3, p4);
		} // 0xAB3CAA6B422164DA 0x5AA379D9  
		static bool _0x7303e27cc6532080(Any p0, bool p1, bool p2, bool p3, Any* p4, Any p5)
		{
			return invoke<bool>(0x7303E27CC6532080, p0, p1, p2, p3, p4, p5);
		} // 0x7303E27CC6532080  
		static void network_buy_item(Ped player, Hash item, Any p2, Any p3, bool p4, const char* item_name, Any p6,
			Any p7, Any p8, bool p9)
		{
			invoke<Void>(0xF0077C797F66A355, player, item, p2, p3, p4, item_name, p6, p7, p8, p9);
		} // 0xF0077C797F66A355 0xA07B6368  
		static void network_spent_taxi(int amount, bool p1, bool p2)
		{
			invoke<Void>(0x17C3A7D31EAE39F9, amount, p1, p2);
		} // 0x17C3A7D31EAE39F9 0x1F3DB3E3  
		static void network_pay_employee_wage(Any p0, bool p1, bool p2)
		{
			invoke<Void>(0x5FD5ED82CBBE9989, p0, p1, p2);
		} // 0x5FD5ED82CBBE9989 0xBE70849B  
		static void network_pay_utility_bill(Any p0, bool p1, bool p2) { invoke<Void>(0xAFE08B35EC0C9EAE, p0, p1, p2); }
		// 0xAFE08B35EC0C9EAE 0x451A2644  
		static void network_pay_match_entry_fee(int value, int* p1, bool p2, bool p3)
		{
			invoke<Void>(0x9346E14F2AF74D46, value, p1, p2, p3);
		} // 0x9346E14F2AF74D46 0x224A3488  
		static void network_spent_betting(Any p0, Any p1, Any* p2, bool p3, bool p4)
		{
			invoke<Void>(0x1C436FD11FFA692F, p0, p1, p2, p3, p4);
		} // 0x1C436FD11FFA692F 0xF8A07513  
		static void network_spent_in_stripclub(Any p0, bool p1, Any p2, bool p3)
		{
			invoke<Void>(0xEE99784E4467689C, p0, p1, p2, p3);
		} // 0xEE99784E4467689C 0x8957038E  
		static void network_buy_healthcare(int cost, bool p1, bool p2)
		{
			invoke<Void>(0xD9B067E55253E3DD, cost, p1, p2);
		} // 0xD9B067E55253E3DD 0x832150E5  
		static void network_buy_airstrike(int cost, bool p1, bool p2)
		{
			invoke<Void>(0x763B4BD305338F19, cost, p1, p2);
		} // 0x763B4BD305338F19 0x40470683  
		static void network_buy_heli_strike(int cost, bool p1, bool p2)
		{
			invoke<Void>(0x81AA4610E3FD3A69, cost, p1, p2);
		} // 0x81AA4610E3FD3A69 0x047547D4  
		static void network_spent_ammo_drop(Any p0, bool p1, bool p2) { invoke<Void>(0xB162DC95C0A3317B, p0, p1, p2); }
		// 0xB162DC95C0A3317B 0x4B643076  
		static void network_buy_bounty(int amount, Player victim, bool p2, bool p3)
		{
			invoke<Void>(0x7B718E197453F2D9, amount, victim, p2, p3);
		} // 0x7B718E197453F2D9 0xCB89CBE0  
		static void network_buy_property(float propertyCost, Hash propertyName, bool p2, bool p3)
		{
			invoke<Void>(0x650A08A280870AF6, propertyCost, propertyName, p2, p3);
		} // 0x650A08A280870AF6 0x7D479AAB  
		static void network_spent_heli_pickup(Any p0, bool p1, bool p2)
		{
			invoke<Void>(0x7BF1D73DB2ECA492, p0, p1, p2);
		} // 0x7BF1D73DB2ECA492 0x27EEBCAB  
		static void network_spent_boat_pickup(Any p0, bool p1, bool p2)
		{
			invoke<Void>(0x524EE43A37232C00, p0, p1, p2);
		} // 0x524EE43A37232C00 0xB241CABD  
		static void network_spent_bull_shark(Any p0, bool p1, bool p2) { invoke<Void>(0xA6DD8458CE24012C, p0, p1, p2); }
		// 0xA6DD8458CE24012C 0xDE7D398C  
		static void network_spent_cash_drop(int amount, bool p1, bool p2)
		{
			invoke<Void>(0x289016EC778D60E0, amount, p1, p2);
		} // 0x289016EC778D60E0 0x87BD1D11  
		static void network_spent_hire_mugger(Any p0, bool p1, bool p2)
		{
			invoke<Void>(0xE404BFB981665BF0, p0, p1, p2);
		} // 0xE404BFB981665BF0 0xE792C4A5  
		static void network_spent_robbed_by_mugger(int amount, bool p1, bool p2)
		{
			invoke<Void>(0x995A65F15F581359, amount, p1, p2);
		} // 0x995A65F15F581359 0xE6AAA0D5  
		static void network_spent_hire_mercenary(Any p0, bool p1, bool p2)
		{
			invoke<Void>(0xE7B80E2BF9D80BD6, p0, p1, p2);
		} // 0xE7B80E2BF9D80BD6 0x99CF02C4  
		static void network_spent_buy_wantedlevel(Any p0, Any* p1, bool p2, bool p3)
		{
			invoke<Void>(0xE1B13771A843C4F6, p0, p1, p2, p3);
		} // 0xE1B13771A843C4F6 0xE7CB4F95  
		static void network_spent_buy_offtheradar(Any p0, bool p1, bool p2)
		{
			invoke<Void>(0xA628A745E2275C5D, p0, p1, p2);
		} // 0xA628A745E2275C5D 0x20DDCF2F  
		static void network_spent_buy_reveal_players(Any p0, bool p1, bool p2)
		{
			invoke<Void>(0x6E176F1B18BC0637, p0, p1, p2);
		} // 0x6E176F1B18BC0637 0x2F7836E2  
		static void network_spent_carwash(Any p0, Any p1, Any p2, bool p3, bool p4)
		{
			invoke<Void>(0xEC03C719DB2F4306, p0, p1, p2, p3, p4);
		} // 0xEC03C719DB2F4306 0x8283E028  
		static void network_spent_cinema(Any p0, Any p1, bool p2, bool p3)
		{
			invoke<Void>(0x6B38ECB05A63A685, p0, p1, p2, p3);
		} // 0x6B38ECB05A63A685 0x1100CAF5  
		static void network_spent_telescope(Any p0, bool p1, bool p2) { invoke<Void>(0x7FE61782AD94CC09, p0, p1, p2); }
		// 0x7FE61782AD94CC09 0xAE7FF044  
		static void network_spent_holdups(Any p0, bool p1, bool p2) { invoke<Void>(0xD9B86B9872039763, p0, p1, p2); }
		// 0xD9B86B9872039763 0x1B3803B1  
		static void network_spent_buy_passive_mode(Any p0, bool p1, bool p2)
		{
			invoke<Void>(0x6D3A430D1A809179, p0, p1, p2);
		} // 0x6D3A430D1A809179 0x7E97C92C  
		static void network_spent_prostitutes(Any p0, bool p1, bool p2)
		{
			invoke<Void>(0xB21B89501CFAC79E, p0, p1, p2);
		} // 0xB21B89501CFAC79E 0x78436D07  
		static void network_spent_arrest_bail(Any p0, bool p1, bool p2)
		{
			invoke<Void>(0x812F5488B1B2A299, p0, p1, p2);
		} // 0x812F5488B1B2A299 0x5AEE2FC1  
		static void network_spent_pay_vehicle_insurance_premium(int amount, Hash vehicleModel, int* networkHandle,
			bool notBankrupt, bool hasTheMoney)
		{
			invoke<Void>(0x9FF28D88C766E3E8, amount, vehicleModel, networkHandle, notBankrupt, hasTheMoney);
		} // 0x9FF28D88C766E3E8 0x4E665BB2  
		static void network_spent_call_player(Any p0, Any* p1, bool p2, bool p3)
		{
			invoke<Void>(0xACDE7185B374177C, p0, p1, p2, p3);
		} // 0xACDE7185B374177C 0x1A89B5FC  
		static void network_spent_bounty(Any p0, bool p1, bool p2) { invoke<Void>(0x29B260B84947DFCC, p0, p1, p2); }
		// 0x29B260B84947DFCC 0x3401FC96  
		static void network_spent_from_rockstar(int bank, bool p1, bool p2)
		{
			invoke<Void>(0x6A445B64ED7ABEB5, bank, p1, p2);
		} // 0x6A445B64ED7ABEB5 0x54198922  
		static const char* process_cash_gift(int* p0, int* p1, const char* p2)
		{
			return invoke<const char*>(0x20194D48EAEC9A41, p0, p1, p2);
		} // 0x20194D48EAEC9A41 0xC5D8B1E9  
		static void network_spent_player_healthcare(Any p0, Any p1, bool p2, bool p3)
		{
			invoke<Void>(0x7C99101F7FCE2EE5, p0, p1, p2, p3);
		} // 0x7C99101F7FCE2EE5 0x3D96A21C  
		static void network_spent_no_cops(Any p0, bool p1, bool p2) { invoke<Void>(0xD5BB406F4E04019F, p0, p1, p2); }
		// 0xD5BB406F4E04019F 0x2E51C61C  
		static void network_spent_request_job(Any p0, bool p1, bool p2)
		{
			invoke<Void>(0x8204DA7934DF3155, p0, p1, p2);
		} // 0x8204DA7934DF3155 0xD57A5125  
		static void _network_spent_request_heist(Any p0, bool p1, bool p2)
		{
			invoke<Void>(0x9D26502BB97BFE62, p0, p1, p2);
		} // 0x9D26502BB97BFE62  
		static void network_buy_fairground_ride(int amountSpent, Any p1, bool p2, bool p3)
		{
			invoke<Void>(0x8A7B3952DD64D2B5, amountSpent, p1, p2, p3);
		} // 0x8A7B3952DD64D2B5 0xD9622D64  
		static bool _0x7c4fccd2e4deb394() { return invoke<bool>(0x7C4FCCD2E4DEB394); } // 0x7C4FCCD2E4DEB394  
		static int network_get_vc_bank_balance() { return invoke<int>(0x76EF28DA05EA395A); }
		// 0x76EF28DA05EA395A 0x16184FB5  
		static int network_get_vc_wallet_balance(int character) { return invoke<int>(0xA40F9C2623F6A8B5, character); }
		// 0xA40F9C2623F6A8B5 0x4F5B781C  
		static int network_get_vc_balance() { return invoke<int>(0x5CBAD97E059E1B94); }
		// 0x5CBAD97E059E1B94 0xADF8F882  
		static const char* _network_get_bank_balance_string() { return invoke<const char*>(0xA6FA3979BED01B81); }
		// 0xA6FA3979BED01B81  
		static bool _0xdc18531d7019a535(Any p0, Any p1) { return invoke<bool>(0xDC18531D7019A535, p0, p1); }
		// 0xDC18531D7019A535  
		static bool network_can_receive_player_cash(Any p0, Any p1, Any p2, Any p3)
		{
			return invoke<bool>(0x5D17BE59D2123284, p0, p1, p2, p3);
		} // 0x5D17BE59D2123284 0x41F5F10E  
		static Any _0xf70efa14fe091429(Any p0) { return invoke<Any>(0xF70EFA14FE091429, p0); }
		// 0xF70EFA14FE091429 0x8B755993  
		static bool _0xe260e0bb9cd995ac(Any p0) { return invoke<bool>(0xE260E0BB9CD995AC, p0); }
		// 0xE260E0BB9CD995AC 0x8F266745  
		static bool _0xe154b48b68ef72bc(Any p0) { return invoke<bool>(0xE154B48B68EF72BC, p0); }
		// 0xE154B48B68EF72BC 0x531E4892  
		static bool _0x6fcf8ddea146c45b(Any p0) { return invoke<bool>(0x6FCF8DDEA146C45B, p0); }
		// 0x6FCF8DDEA146C45B 0xB96C7ABE  
	}

	namespace dlc1
	{
		static int _get_num_decorations(int character) { return invoke<int>(0x278F76C3B0A8F109, character); }
		// 0x278F76C3B0A8F109 0x71D0CF3E  
		static bool _0xff56381874f82086(int p0, int p1, int* outComponent)
		{
			return invoke<bool>(0xFF56381874F82086, p0, p1, outComponent);
		} // 0xFF56381874F82086 0x2E9D628C  
		static void init_shop_ped_component(int* outComponent) { invoke<Void>(0x1E8C308FD312C036, outComponent); }
		// 0x1E8C308FD312C036 0xB818C7FC  
		static void init_shop_ped_prop(int* outProp) { invoke<Void>(0xEB0A2B758F7B850F, outProp); }
		// 0xEB0A2B758F7B850F 0xF5659E50  
		static int _0x50f457823ce6eb5f(int p0, int p1, int p2, int p3)
		{
			return invoke<int>(0x50F457823CE6EB5F, p0, p1, p2, p3);
		} // 0x50F457823CE6EB5F 0xC937FF3D  
		static int _get_num_props_from_outfit(int character, int p1, int p2, bool p3, int p4, int componentId)
		{
			return invoke<int>(0x9BDF59818B1E38C1, character, p1, p2, p3, p4, componentId);
		} // 0x9BDF59818B1E38C1 0x594E862C  
		static void get_shop_ped_query_component(int componentId, int* outComponent)
		{
			invoke<Void>(0x249E310B2D920699, componentId, outComponent);
		} // 0x249E310B2D920699 0xC0718904  
		static void get_shop_ped_component(Hash p0, Any* p1) { invoke<Void>(0x74C0E2A57EC66760, p0, p1); }
		// 0x74C0E2A57EC66760 0xB39677C5  
		static void get_shop_ped_query_prop(Any p0, Any* p1) { invoke<Void>(0xDE44A00999B2837D, p0, p1); }
		// 0xDE44A00999B2837D 0x1D3C1466  
		static void _0x5d5caff661ddf6fc(Any p0, Any* p1) { invoke<Void>(0x5D5CAFF661DDF6FC, p0, p1); }
		// 0x5D5CAFF661DDF6FC  
		static Hash get_hash_name_for_component(Entity entity, int componentId, int drawableVariant, int textureVariant)
		{
			return invoke<Hash>(0x0368B3A838070348, entity, componentId, drawableVariant, textureVariant);
		} // 0x0368B3A838070348 0xC8A4BF12  
		static Hash get_hash_name_for_prop(Entity entity, int componentId, int propIndex, int propTextureIndex)
		{
			return invoke<Hash>(0x5D6160275CAEC8DD, entity, componentId, propIndex, propTextureIndex);
		} // 0x5D6160275CAEC8DD 0x7D876DC0  
		static int _0xc17ad0e5752becda(Hash componentHash) { return invoke<int>(0xC17AD0E5752BECDA, componentHash); }
		// 0xC17AD0E5752BECDA 0x159751B4  
		static void get_variant_component(Hash componentHash, int componentId, Any* p2, Any* p3, Any* p4)
		{
			invoke<Void>(0x6E11F282F11863B6, componentHash, componentId, p2, p3, p4);
		} // 0x6E11F282F11863B6 0xE4FF7103  
		static int _get_num_forced_components(Hash componentHash)
		{
			return invoke<int>(0xC6B9DB42C04DD8C3, componentHash);
		} // 0xC6B9DB42C04DD8C3 0xCE70F183  
		static Any _0x017568a8182d98a6(Any p0) { return invoke<Any>(0x017568A8182D98A6, p0); } // 0x017568A8182D98A6  
		static void get_forced_component(Hash componentHash, int componentId, Any* p2, Any* p3, Any* p4)
		{
			invoke<Void>(0x6C93ED8C2F74859B, componentHash, componentId, p2, p3, p4);
		} // 0x6C93ED8C2F74859B 0x382C70BE  
		static void _0xe1ca84ebf72e691d(Any p0, Any p1, Any* p2, Any* p3, Any* p4)
		{
			invoke<Void>(0xE1CA84EBF72E691D, p0, p1, p2, p3, p4);
		} // 0xE1CA84EBF72E691D  
		static bool _0x341de7ed1d2a1bfd(Hash componentHash, Hash drawableSlotHash, int componentId)
		{
			return invoke<bool>(0x341DE7ED1D2A1BFD, componentHash, drawableSlotHash, componentId);
		} // 0x341DE7ED1D2A1BFD 0x8E2C7FD5  
		static int _0xf3fbe2d50a6a8c28(int character, bool p1)
		{
			return invoke<int>(0xF3FBE2D50A6A8C28, character, p1);
		} // 0xF3FBE2D50A6A8C28 0x1ECD23E7  
		static void get_shop_ped_query_outfit(Any p0, Any* outfit) { invoke<Void>(0x6D793F03A631FE56, p0, outfit); }
		// 0x6D793F03A631FE56 0x2F8013A1  
		static void get_shop_ped_outfit(Any p0, Any* p1) { invoke<Void>(0xB7952076E444979D, p0, p1); }
		// 0xB7952076E444979D 0xCAFE9209  
		static Any get_shop_ped_outfit_locate(Any p0) { return invoke<Any>(0x073CA26B079F956E, p0); }
		// 0x073CA26B079F956E 0x2798F56F  
		static bool _0xa9f9c2e0fde11cbb(Any p0, Any p1, Any* p2)
		{
			return invoke<bool>(0xA9F9C2E0FDE11CBB, p0, p1, p2);
		} // 0xA9F9C2E0FDE11CBB 0x6641A864  
		static bool _get_prop_from_outfit(Any outfit, int slot, Any* item)
		{
			return invoke<bool>(0x19F2A026EDF0013F, outfit, slot, item);
		} // 0x19F2A026EDF0013F 0x818534AC  
		static int get_num_dlc_vehicles() { return invoke<int>(0xA7A866D21CD2329B); } // 0xA7A866D21CD2329B 0x8EAF9CF6  
		static Hash get_dlc_vehicle_model(int dlcVehicleIndex)
		{
			return invoke<Hash>(0xECC01B7C5763333C, dlcVehicleIndex);
		} // 0xECC01B7C5763333C 0xA2201E09  
		static bool get_dlc_vehicle_data(int dlcVehicleIndex, int* outData)
		{
			return invoke<bool>(0x33468EDC08E371F6, dlcVehicleIndex, outData);
		} // 0x33468EDC08E371F6 0xCF428FA4  
		static int get_dlc_vehicle_flags(int dlcVehicleIndex)
		{
			return invoke<int>(0x5549EE11FA22FCF2, dlcVehicleIndex);
		} // 0x5549EE11FA22FCF2 0xAB12738C  
		static int get_num_dlc_weapons() { return invoke<int>(0xEE47635F352DA367); } // 0xEE47635F352DA367 0x2B757E6C  
		static bool get_dlc_weapon_data(int dlcWeaponIndex, int* outData)
		{
			return invoke<bool>(0x79923CD21BECE14E, dlcWeaponIndex, outData);
		} // 0x79923CD21BECE14E 0xD88EC8EA  
		static int get_num_dlc_weapon_components(int dlcWeaponIndex)
		{
			return invoke<int>(0x405425358A7D61FE, dlcWeaponIndex);
		} // 0x405425358A7D61FE 0x476B23A9  
		static bool get_dlc_weapon_component_data(int dlcWeaponIndex, int dlcWeapCompIndex, Any* ComponentDataPtr)
		{
			return invoke<bool>(0x6CF598A2957C2BF8, dlcWeaponIndex, dlcWeapCompIndex, ComponentDataPtr);
		} // 0x6CF598A2957C2BF8 0x4B83FCAF  
		static bool _is_dlc_data_empty(Any* dlcData) { return invoke<bool>(0xD4D7B033C3AA243C, dlcData); }
		// 0xD4D7B033C3AA243C 0x06396058  
		static bool is_dlc_vehicle_mod(Any modData) { return invoke<bool>(0x0564B9FF9631B82C, modData); }
		// 0x0564B9FF9631B82C 0x35BCA844  
		static int _0xc098810437312fff(int modData) { return invoke<int>(0xC098810437312FFF, modData); }
		// 0xC098810437312FFF 0x59352658  
	}

	namespace dlc2
	{
		static bool is_dlc_present(Hash dlcHash) { return invoke<bool>(0x812595A0644CE1DE, dlcHash); }
		// 0x812595A0644CE1DE 0x1F321943  
		static bool _0xf2e07819ef1a5289() { return invoke<bool>(0xF2E07819EF1A5289); } // 0xF2E07819EF1A5289 0x881B1FDB  
		static Any _0x9489659372a81585() { return invoke<Any>(0x9489659372A81585); } // 0x9489659372A81585 0xC2169164  
		static Any _0xa213b11dff526300() { return invoke<Any>(0xA213B11DFF526300); } // 0xA213B11DFF526300 0xF79A97F5  
		static bool _0x8d30f648014a92b5() { return invoke<bool>(0x8D30F648014A92B5); } // 0x8D30F648014A92B5 0xF69B729C  
		static bool get_is_loading_screen_active() { return invoke<bool>(0x10D0A8F259E93EC9); }
		// 0x10D0A8F259E93EC9 0x517B601B  
		static bool _nullify(Any* variable, Any unused) { return invoke<bool>(0x46E2B844905BC5F0, variable, unused); }
		// 0x46E2B844905BC5F0 0x6087C10C  
		static void _0xd7c10c4a637992c9() { invoke<Void>(0xD7C10C4A637992C9); } // 0xD7C10C4A637992C9  
		static void _load_mp_dlc_maps() { invoke<Void>(0x0888C3502DBBEEF5); } // 0x0888C3502DBBEEF5  
	}

	namespace system
	{
		static void wait(int* ms) { invoke<Void>(0x4EDE34FBADD967A6, ms); } // 0x4EDE34FBADD967A6 0x7715C03B  
		static int start_new_script(const char* scriptName, int stackSize)
		{
			return invoke<int>(0xE81651AD79516E48, scriptName, stackSize);
		} // 0xE81651AD79516E48 0x3F166D0E  
		static int start_new_script_with_args(const char* scriptName, Any* args, int argCount, int stackSize)
		{
			return invoke<int>(0xB8BA7F44DF1575E1, scriptName, args, argCount, stackSize);
		} // 0xB8BA7F44DF1575E1 0x4A2100E4  
		static int start_new_script_with_name_hash(Hash scriptHash, int stackSize)
		{
			return invoke<int>(0xEB1C67C3A5333A92, scriptHash, stackSize);
		} // 0xEB1C67C3A5333A92 0x8D15BE5D  
		static int start_new_script_with_name_hash_and_args(Hash scriptHash, Any* args, int argCount, int stackSize)
		{
			return invoke<int>(0xC4BB298BD441BE78, scriptHash, args, argCount, stackSize);
		} // 0xC4BB298BD441BE78 0xE38A3AD4  
		static int timera() { return invoke<int>(0x83666F9FB8FEBD4B); } // 0x83666F9FB8FEBD4B 0x45C8C188  
		static int timerb() { return invoke<int>(0xC9D9444186B5A374); } // 0xC9D9444186B5A374 0x330A9C0C  
		static void settimera(int value) { invoke<Void>(0xC1B1E9A034A63A62, value); } // 0xC1B1E9A034A63A62 0x35785333  
		static void settimerb(int value) { invoke<Void>(0x5AE11BC36633DE4E, value); } // 0x5AE11BC36633DE4E 0x27C1B7C6  
		static float timestep() { return invoke<float>(0x0000000050597EE2); } // 0x0000000050597EE2 0x50597EE2  
		static float sin(float value) { return invoke<float>(0x0BADBFA3B172435F, value); }
		// 0x0BADBFA3B172435F 0xBF987F58  
		static float cos(float value) { return invoke<float>(0xD0FFB162F40A139C, value); }
		// 0xD0FFB162F40A139C 0x00238FE9  
		static float sqrt(float value) { return invoke<float>(0x71D93B57D07F9804, value); }
		// 0x71D93B57D07F9804 0x145C7701  
		static float pow(float base, float exponent) { return invoke<float>(0xE3621CC40F31FE2E, base, exponent); }
		// 0xE3621CC40F31FE2E 0x85D134F8  
		static float vmag(float x, float y, float z) { return invoke<float>(0x652D2EEEF1D3E62C, x, y, z); }
		// 0x652D2EEEF1D3E62C 0x1FCF1ECD  
		static float vmag2(float x, float y, float z) { return invoke<float>(0xA8CEACB4F35AE058, x, y, z); }
		// 0xA8CEACB4F35AE058 0xE796E629  
		static float vdist(float x1, float y1, float z1, float x2, float y2, float z2)
		{
			return invoke<float>(0x2A488C176D52CCA5, x1, y1, z1, x2, y2, z2);
		} // 0x2A488C176D52CCA5 0x3C08ECB7  
		static float vdist2(float x1, float y1, float z1, float x2, float y2, float z2)
		{
			return invoke<float>(0xB7A628320EFF8E47, x1, y1, z1, x2, y2, z2);
		} // 0xB7A628320EFF8E47 0xC85DEF1F  
		static int shift_left(int value, int bitShift) { return invoke<int>(0xEDD95A39E5544DE8, value, bitShift); }
		// 0xEDD95A39E5544DE8 0x314CC6CD  
		static int shift_right(int value, int bitShift) { return invoke<int>(0x97EF1E5BCE9DC075, value, bitShift); }
		// 0x97EF1E5BCE9DC075 0x352633CA  
		static int floor(float value) { return invoke<int>(0xF34EE736CF047844, value); }
		// 0xF34EE736CF047844 0x32E9BE04  
		static int ceil(float value) { return invoke<int>(0x11E019C8F43ACC8A, value); }
		// 0x11E019C8F43ACC8A 0xD536A1DF  
		static int round(float value) { return invoke<int>(0xF2DB717A73826179, value); }
		// 0xF2DB717A73826179 0x323B0E24  
		static float to_float(int value) { return invoke<float>(0xBBDA792448DB5A89, value); }
		// 0xBBDA792448DB5A89 0x67116627  
	}

	namespace decorator
	{
		static bool decor_set_time(Entity entity, const char* propertyName, int timestamp)
		{
			return invoke<bool>(0x95AED7B8E39ECAA4, entity, propertyName, timestamp);
		} // 0x95AED7B8E39ECAA4 0xBBAEEF94  
		static bool decor_set_bool(Entity entity, const char* propertyName, bool value)
		{
			return invoke<bool>(0x6B1E8E2ED1335B71, entity, propertyName, value);
		} // 0x6B1E8E2ED1335B71 0x8E101F5C  
		static bool _decor_set_float(Entity entity, const char* propertyName, float value)
		{
			return invoke<bool>(0x211AB1DD8D0F363A, entity, propertyName, value);
		} // 0x211AB1DD8D0F363A  
		static bool decor_set_int(Entity entity, const char* propertyName, int value)
		{
			return invoke<bool>(0x0CE3AA5E1CA19E10, entity, propertyName, value);
		} // 0x0CE3AA5E1CA19E10 0xDB718B21  
		static bool decor_get_bool(Entity entity, const char* propertyName)
		{
			return invoke<bool>(0xDACE671663F2F5DB, entity, propertyName);
		} // 0xDACE671663F2F5DB 0xDBCE51E0  
		static float _decor_get_float(Entity entity, const char* propertyName)
		{
			return invoke<float>(0x6524A2F114706F43, entity, propertyName);
		} // 0x6524A2F114706F43  
		static int decor_get_int(Entity entity, const char* propertyName)
		{
			return invoke<int>(0xA06C969B02A97298, entity, propertyName);
		} // 0xA06C969B02A97298 0xDDDE59B5  
		static bool decor_exist_on(Entity entity, const char* propertyName)
		{
			return invoke<bool>(0x05661B80A8C9165F, entity, propertyName);
		} // 0x05661B80A8C9165F 0x74EF9C40  
		static bool decor_remove(Entity entity, const char* propertyName)
		{
			return invoke<bool>(0x00EE9F297C738720, entity, propertyName);
		} // 0x00EE9F297C738720 0xE0E2640B  
		static void decor_register(const char* propertyName, int type)
		{
			invoke<Void>(0x9FD90732F56403CE, propertyName, type);
		} // 0x9FD90732F56403CE 0x68BD42A9  
		static bool decor_is_registered_as_type(const char* propertyName, int type)
		{
			return invoke<bool>(0x4F14F9F870D6FBC8, propertyName, type);
		} // 0x4F14F9F870D6FBC8 0x7CF0971D  
		static void decor_register_lock() { invoke<Void>(0xA9D14EEA259F9248); } // 0xA9D14EEA259F9248 0x7F3F1C02  
		static bool _0x241fca5b1aa14f75() { return invoke<bool>(0x241FCA5B1AA14F75); } // 0x241FCA5B1AA14F75  
	}

	namespace socialclub
	{
		static int _get_total_sc_inbox_ids() { return invoke<int>(0x03A93FF1A2CA0864); }
		// 0x03A93FF1A2CA0864 0x6BE5DF29  
		static Hash _sc_inbox_message_init(int p0) { return invoke<Hash>(0xBB8EA16ECBC976C4, p0); }
		// 0xBB8EA16ECBC976C4 0x5ECF955D  
		static bool _is_sc_inbox_valid(int p0) { return invoke<bool>(0x93028F1DB42BFD08, p0); }
		// 0x93028F1DB42BFD08 0xD1ED1D48  
		static bool _sc_inbox_message_pop(int p0) { return invoke<bool>(0x2C015348CF19CA1D, p0); }
		// 0x2C015348CF19CA1D 0x19EE0CCB  
		static bool sc_inbox_message_get_data_int(int p0, const char* context, int* out)
		{
			return invoke<bool>(0xA00EFE4082C4056E, p0, context, out);
		} // 0xA00EFE4082C4056E 0x88068C7C  
		static bool _sc_inbox_message_get_data_bool(int p0, const char* p1)
		{
			return invoke<bool>(0xFFE5C16F402D851D, p0, p1);
		} // 0xFFE5C16F402D851D  
		static bool sc_inbox_message_get_data_string(int p0, const char* context, const char* out)
		{
			return invoke<bool>(0x7572EF42FC6A9B6D, p0, context, out);
		} // 0x7572EF42FC6A9B6D 0x15607620  
		static bool _sc_inbox_message_push(int p0) { return invoke<bool>(0x9A2C8064B6C1E41A, p0); }
		// 0x9A2C8064B6C1E41A 0xEBE420A4  
		static const char* _sc_inbox_message_get_string(int p0) { return invoke<const char*>(0xF3E31D16CBDCB304, p0); }
		// 0xF3E31D16CBDCB304 0x2C959AF9  
		static void _0xda024bdbd600f44a(int* networkHandle) { invoke<Void>(0xDA024BDBD600F44A, networkHandle); }
		// 0xDA024BDBD600F44A 0x0B9A3512  
		static void _0xa68d3d229f4f3b06(const char* p0) { invoke<Void>(0xA68D3D229F4F3B06, p0); }
		// 0xA68D3D229F4F3B06 0x75324674  
		static bool sc_inbox_message_get_ugcdata(Any p0, Any* p1) { return invoke<bool>(0x69D82604A1A5A254, p0, p1); }
		// 0x69D82604A1A5A254 0x88CA3BFC  
		static bool _0x6afd2cd753feef83(const char* playerName) { return invoke<bool>(0x6AFD2CD753FEEF83, playerName); }
		// 0x6AFD2CD753FEEF83 0x628F489B  
		static bool _0x87e0052f08bd64e6(Any p0, int* p1) { return invoke<bool>(0x87E0052F08BD64E6, p0, p1); }
		// 0x87E0052F08BD64E6 0xAB3346B5  
		static void _sc_inbox_get_emails(int offset, int limit) { invoke<Void>(0x040ADDCBAFA1018A, offset, limit); }
		// 0x040ADDCBAFA1018A  
		static Any _0x16da8172459434aa() { return invoke<Any>(0x16DA8172459434AA); } // 0x16DA8172459434AA  
		static bool _0x4737980e8a283806(int p0, Any* p1) { return invoke<bool>(0x4737980E8A283806, p0, p1); }
		// 0x4737980E8A283806  
		static void _0x44aca259d67651db(Any* p0, Any p1) { invoke<Void>(0x44ACA259D67651DB, p0, p1); }
		// 0x44ACA259D67651DB  
		static void sc_email_message_push_gamer_to_recip_list(Player* player)
		{
			invoke<Void>(0x2330C12A7A605D16, player);
		} // 0x2330C12A7A605D16 0x9A703A2B  
		static void sc_email_message_clear_recip_list() { invoke<Void>(0x55DF6DB45179236E); }
		// 0x55DF6DB45179236E 0xD094F11A  
		static void _0x116fb94dc4b79f17(const char* p0) { invoke<Void>(0x116FB94DC4B79F17, p0); }
		// 0x116FB94DC4B79F17 0xAF3C081B  
		static void _0xbfa0a56a817c6c7d(bool p0) { invoke<Void>(0xBFA0A56A817C6C7D, p0); }
		// 0xBFA0A56A817C6C7D 0x2FB9F53C  
		static Any _0xbc1cc91205ec8d6e() { return invoke<Any>(0xBC1CC91205EC8D6E); } // 0xBC1CC91205EC8D6E 0x6C5738AB  
		static Any _0xdf649c4e9afdd788() { return invoke<Any>(0xDF649C4E9AFDD788); } // 0xDF649C4E9AFDD788 0x468668F0  
		static bool _0x1f1e9682483697c7(Any p0, Any p1) { return invoke<bool>(0x1F1E9682483697C7, p0, p1); }
		// 0x1F1E9682483697C7 0x90C74343  
		static bool _0x287f1f75d2803595(Any p0, Any* p1) { return invoke<bool>(0x287F1F75D2803595, p0, p1); }
		// 0x287F1F75D2803595 0x3ACE6D6B  
		static bool _0x487912fd248efddf(Any p0, float p1) { return invoke<bool>(0x487912FD248EFDDF, p0, p1); }
		// 0x487912FD248EFDDF 0x579B4510  
		static bool _0x8416fe4e4629d7d7(const char* p0) { return invoke<bool>(0x8416FE4E4629D7D7, p0); }
		// 0x8416FE4E4629D7D7 0xDF45B2A7  
		static bool _sc_start_check_string_task(const char* string, int* taskHandle)
		{
			return invoke<bool>(0x75632C5ECD7ED843, string, taskHandle);
		} // 0x75632C5ECD7ED843 0xDF084A6B  
		static bool _sc_has_check_string_task_completed(int taskHandle)
		{
			return invoke<bool>(0x1753344C770358AE, taskHandle);
		} // 0x1753344C770358AE 0xFFED3676  
		static int _sc_get_check_string_status(int taskHandle) { return invoke<int>(0x82E4A58BABC15AE7, taskHandle); }
		// 0x82E4A58BABC15AE7 0xA796D7A7  
		static Any _0x85535acf97fc0969(Any p0) { return invoke<Any>(0x85535ACF97FC0969, p0); }
		// 0x85535ACF97FC0969 0x09497F31  
		static int _0x930de22f07b1cce3(Any p0) { return invoke<int>(0x930DE22F07B1CCE3, p0); }
		// 0x930DE22F07B1CCE3 0x4D8A6521  
		static bool _0xf6baaaf762e1bf40(const char* p0, int* p1) { return invoke<bool>(0xF6BAAAF762E1BF40, p0, p1); }
		// 0xF6BAAAF762E1BF40 0x7AA36406  
		static bool _0xf22ca0fd74b80e7a(Any p0) { return invoke<bool>(0xF22CA0FD74B80E7A, p0); }
		// 0xF22CA0FD74B80E7A 0xF379DCE4  
		static Any _0x9237e334f6e43156(Any p0) { return invoke<Any>(0x9237E334F6E43156, p0); }
		// 0x9237E334F6E43156 0x65D84665  
		static Any _0x700569dba175a77c(Any p0) { return invoke<Any>(0x700569DBA175A77C, p0); } // 0x700569DBA175A77C  
		static Any _0x1d4446a62d35b0d0(Any p0, Any p1) { return invoke<Any>(0x1D4446A62D35B0D0, p0, p1); }
		// 0x1D4446A62D35B0D0  
		static Any _0x2e89990ddff670c3(Any p0, Any p1) { return invoke<Any>(0x2E89990DDFF670C3, p0, p1); }
		// 0x2E89990DDFF670C3  
		static bool _0xd0ee05fe193646ea(Any* p0, Any* p1, Any* p2)
		{
			return invoke<bool>(0xD0EE05FE193646EA, p0, p1, p2);
		} // 0xD0EE05FE193646EA  
		static bool _0x1989c6e6f67e76a8(Any* p0, Any* p1, Any* p2)
		{
			return invoke<bool>(0x1989C6E6F67E76A8, p0, p1, p2);
		} // 0x1989C6E6F67E76A8  
		static Any _0x07c61676e5bb52cd(Any p0) { return invoke<Any>(0x07C61676E5BB52CD, p0); } // 0x07C61676E5BB52CD  
		static Any _0x8147fff6a718e1ad(Any p0) { return invoke<Any>(0x8147FFF6A718E1AD, p0); } // 0x8147FFF6A718E1AD  
		static bool _0x0f73393bac7e6730(Any* p0, int* p1) { return invoke<bool>(0x0F73393BAC7E6730, p0, p1); }
		// 0x0F73393BAC7E6730  
		static Any _0xd302e99edf0449cf(Any p0) { return invoke<Any>(0xD302E99EDF0449CF, p0); } // 0xD302E99EDF0449CF  
		static Any _0x5c4ebffa98bdb41c(Any p0) { return invoke<Any>(0x5C4EBFFA98BDB41C, p0); } // 0x5C4EBFFA98BDB41C  
		static Any _0xff8f3a92b75ed67a() { return invoke<Any>(0xFF8F3A92B75ED67A); } // 0xFF8F3A92B75ED67A 0xC96456BA  
		static Any _0x4a7d6e727f941747(Any* p0) { return invoke<Any>(0x4A7D6E727F941747, p0); }
		// 0x4A7D6E727F941747 0x8E7AEEB7  
		static bool _0x8cc469ab4d349b7c(int p0, const char* p1, Any* p2)
		{
			return invoke<bool>(0x8CC469AB4D349B7C, p0, p1, p2);
		} // 0x8CC469AB4D349B7C 0xE778B2A7  
		static bool _0x699e4a5c8c893a18(int p0, const char* p1, Any* p2)
		{
			return invoke<bool>(0x699E4A5C8C893A18, p0, p1, p2);
		} // 0x699E4A5C8C893A18 0xCE7D50A8  
		static bool _0x19853b5b17d77bca(Any p0, Any* p1) { return invoke<bool>(0x19853B5B17D77BCA, p0, p1); }
		// 0x19853B5B17D77BCA 0xD26CCA46  
		static bool _0x6bfb12ce158e3dd4(Any p0) { return invoke<bool>(0x6BFB12CE158E3DD4, p0); }
		// 0x6BFB12CE158E3DD4 0x24D84334  
		static bool _0xfe4c1d0d3b9cc17e(Any p0, Any p1) { return invoke<bool>(0xFE4C1D0D3B9CC17E, p0, p1); }
		// 0xFE4C1D0D3B9CC17E 0x8A023024  
		static Any _0xd8122c407663b995() { return invoke<Any>(0xD8122C407663B995); } // 0xD8122C407663B995 0x1C65B038  
		static bool _0x3001bef2feca3680() { return invoke<bool>(0x3001BEF2FECA3680); } // 0x3001BEF2FECA3680 0x4D4C37B3  
		static bool _0x92da6e70ef249bd1(const char* p0, int* p1) { return invoke<bool>(0x92DA6E70EF249BD1, p0, p1); }
		// 0x92DA6E70EF249BD1 0xAED95A6F  
		static void _0x675721c9f644d161() { invoke<Void>(0x675721C9F644D161); } // 0x675721C9F644D161 0x486867E6  
		static Entity _sc_get_nickname() { return invoke<Entity>(0x198D161F458ECC7F); } // 0x198D161F458ECC7F  
		static bool _0x225798743970412b(int* p0) { return invoke<bool>(0x225798743970412B, p0); } // 0x225798743970412B  
		static bool _0x418dc16fae452c1c(int p0) { return invoke<bool>(0x418DC16FAE452C1C, p0); } // 0x418DC16FAE452C1C  
	}

	namespace unk
	{
		static int _0xf2ca003f167e21d2() { return invoke<int>(0xF2CA003F167E21D2); } // 0xF2CA003F167E21D2 0x106C8317  
		static bool _0xef7d17bc6c85264c() { return invoke<bool>(0xEF7D17BC6C85264C); } // 0xEF7D17BC6C85264C 0xD87F3A9E  
		static void _0xb0c56bd3d808d863(bool p0) { invoke<Void>(0xB0C56BD3D808D863, p0); }
		// 0xB0C56BD3D808D863 0xC0B971EA  
		static Any _0x8aa464d4e0f6accd() { return invoke<Any>(0x8AA464D4E0F6ACCD); } // 0x8AA464D4E0F6ACCD 0x94BCAC7C  
		static void _is_in_loading_screen(bool p0) { invoke<Void>(0xFC309E94546FCDB5, p0); }
		// 0xFC309E94546FCDB5 0x7D90EEE5  
		static bool _is_ui_loading_multiplayer() { return invoke<bool>(0xC6DC823253FBB366); }
		// 0xC6DC823253FBB366 0x734CFEDA  
		static void _0xc7e7181c09f33b69(bool p0) { invoke<Void>(0xC7E7181C09F33B69, p0); }
		// 0xC7E7181C09F33B69 0x8C227332  
		static void _0xfa1e0e893d915215(bool p0) { invoke<Void>(0xFA1E0E893D915215, p0); }
		// 0xFA1E0E893D915215 0x5C350D78  
		static int _get_current_language_id() { return invoke<int>(0x2BDD44CC428A7EAE); } // 0x2BDD44CC428A7EAE  
		static int _get_user_language_id() { return invoke<int>(0xA8AE43AEC1A61314); } // 0xA8AE43AEC1A61314  
	}

	namespace unk1
	{
		static void _0x48621c9fca3ebd28(bool p0) { invoke<Void>(0x48621C9FCA3EBD28, p0); } // 0x48621C9FCA3EBD28  
		static void _0x81cbae94390f9f89() { invoke<Void>(0x81CBAE94390F9F89); } // 0x81CBAE94390F9F89  
		static void _0x13b350b8ad0eee10() { invoke<Void>(0x13B350B8AD0EEE10); } // 0x13B350B8AD0EEE10  
		static void _0x293220da1b46cebc(float p0, float p1, bool p2) { invoke<Void>(0x293220DA1B46CEBC, p0, p1, p2); }
		// 0x293220DA1B46CEBC  
		static void _0x208784099002bc30(const char* missionNameLabel, Any p1)
		{
			invoke<Void>(0x208784099002BC30, missionNameLabel, p1);
		} // 0x208784099002BC30  
		static void _0xeb2d525b57f42b40() { invoke<Void>(0xEB2D525B57F42B40); } // 0xEB2D525B57F42B40  
		static void _0xf854439efbb3b583() { invoke<Void>(0xF854439EFBB3B583); } // 0xF854439EFBB3B583  
		static void _0xaf66dcee6609b148() { invoke<Void>(0xAF66DCEE6609B148); } // 0xAF66DCEE6609B148  
		static void _0x66972397e0757e7a(Any p0, Any p1, Any p2) { invoke<Void>(0x66972397E0757E7A, p0, p1, p2); }
		// 0x66972397E0757E7A  
		static void _start_recording(int mode) { invoke<Void>(0xC3AC2FFF9612AC81, mode); } // 0xC3AC2FFF9612AC81  
		static void _stop_recording_and_save_clip() { invoke<Void>(0x071A5197D6AFC8B3); } // 0x071A5197D6AFC8B3  
		static void _stop_recording_and_discard_clip() { invoke<Void>(0x88BB3507ED41A240); } // 0x88BB3507ED41A240  
		static bool _0x644546ec5287471b() { return invoke<bool>(0x644546EC5287471B); } // 0x644546EC5287471B  
		static bool _is_recording() { return invoke<bool>(0x1897CA71995A90B4); } // 0x1897CA71995A90B4  
		static Any _0xdf4b952f7d381b95() { return invoke<Any>(0xDF4B952F7D381B95); } // 0xDF4B952F7D381B95  
		static Any _0x4282e08174868be3() { return invoke<Any>(0x4282E08174868BE3); } // 0x4282E08174868BE3  
		static bool _0x33d47e85b476abcd(bool p0) { return invoke<bool>(0x33D47E85B476ABCD, p0); } // 0x33D47E85B476ABCD  
	}

	namespace unk2
	{
		static void _0x7e2bd3ef6c205f09(const char* p0, bool p1) { invoke<Void>(0x7E2BD3EF6C205F09, p0, p1); }
		// 0x7E2BD3EF6C205F09  
		static bool _is_interior_rendering_disabled() { return invoke<bool>(0x95AB8B5C992C7B58); }
		// 0x95AB8B5C992C7B58  
		static void _0x5ad3932daeb1e5d3() { invoke<Void>(0x5AD3932DAEB1E5D3); } // 0x5AD3932DAEB1E5D3  
		static void _0xe058175f8eafe79a(bool p0) { invoke<Void>(0xE058175F8EAFE79A, p0); } // 0xE058175F8EAFE79A  
		static void _reset_editor_values() { invoke<Void>(0x3353D13F09307691); } // 0x3353D13F09307691  
		static void _activate_rockstar_editor() { invoke<Void>(0x49DA8145672B2725); } // 0x49DA8145672B2725  
	}

	namespace unk3
	{
		static int _network_shop_get_price(Hash hash, Hash hash2, bool p2)
		{
			return invoke<int>(0xC27009422FCCA88D, hash, hash2, p2);
		} // 0xC27009422FCCA88D  
		static Any _0x3c4487461e9b0dcb() { return invoke<Any>(0x3C4487461E9B0DCB); } // 0x3C4487461E9B0DCB  
		static Any _0x2b949a1e6aec8f6a() { return invoke<Any>(0x2B949A1E6AEC8F6A); } // 0x2B949A1E6AEC8F6A  
		static Any _0x85f6c9aba1de2bcf() { return invoke<Any>(0x85F6C9ABA1DE2BCF); } // 0x85F6C9ABA1DE2BCF  
		static Any _0x357b152ef96c30b6() { return invoke<Any>(0x357B152EF96C30B6); } // 0x357B152EF96C30B6  
		static bool _0xcf38dafbb49ede5e(Any* p0) { return invoke<bool>(0xCF38DAFBB49EDE5E, p0); } // 0xCF38DAFBB49EDE5E  
		static Any _0xe3e5a7c64ca2c6ed() { return invoke<Any>(0xE3E5A7C64CA2C6ED); } // 0xE3E5A7C64CA2C6ED  
		static bool _0x0395cb47b022e62c(Any* p0) { return invoke<bool>(0x0395CB47B022E62C, p0); } // 0x0395CB47B022E62C  
		static bool _network_shop_start_session(Any p0) { return invoke<bool>(0xA135AC892A58FC07, p0); }
		// 0xA135AC892A58FC07  
		static bool _0x72eb7ba9b69bf6ab() { return invoke<bool>(0x72EB7BA9B69BF6AB); } // 0x72EB7BA9B69BF6AB  
		static bool _0x170910093218c8b9(Any* p0) { return invoke<bool>(0x170910093218C8B9, p0); } // 0x170910093218C8B9  
		static bool _0xc13c38e47ea5df31(Any* p0) { return invoke<bool>(0xC13C38E47EA5DF31, p0); } // 0xC13C38E47EA5DF31  
		static bool _network_shop_get_transactions_enabled_for_character(int mpChar)
		{
			return invoke<bool>(0xB24F0944DA203D9E, mpChar);
		} // 0xB24F0944DA203D9E  
		static int _0x74a0fd0688f1ee45(int p0) { return invoke<int>(0x74A0FD0688F1EE45, p0); } // 0x74A0FD0688F1EE45  
		static bool _network_shop_session_apply_received_data(Any p0) { return invoke<bool>(0x2F41D51BA3BCD1F1, p0); }
		// 0x2F41D51BA3BCD1F1  
		static bool _network_shop_get_transactions_disabled() { return invoke<bool>(0x810E8431C0614BF9); }
		// 0x810E8431C0614BF9  
		static bool _0x35a1b3e1d1315cfa(bool p0, bool p1) { return invoke<bool>(0x35A1B3E1D1315CFA, p0, p1); }
		// 0x35A1B3E1D1315CFA  
		static bool _0x897433d292b44130(Any* p0, Any* p1) { return invoke<bool>(0x897433D292B44130, p0, p1); }
		// 0x897433D292B44130  
		static bool _network_shop_basket_start(Any* p0, int p1, int p2, int p3)
		{
			return invoke<bool>(0x279F08B1A4B29B7E, p0, p1, p2, p3);
		} // 0x279F08B1A4B29B7E  
		static bool _network_shop_basket_end() { return invoke<bool>(0xA65568121DF2EA26); } // 0xA65568121DF2EA26  
		static bool _network_shop_basket_add_item(Any* p0, Any p1) { return invoke<bool>(0xF30980718C8ED876, p0, p1); }
		// 0xF30980718C8ED876  
		static Any _network_shop_basket_is_full() { return invoke<Any>(0x27F76CC6C55AD30E); } // 0x27F76CC6C55AD30E  
		static bool _network_shop_basket_apply_server_data(Any p0, Any* p1)
		{
			return invoke<bool>(0xE1A0450ED46A7812, p0, p1);
		} // 0xE1A0450ED46A7812  
		static bool _network_shop_checkout_start(Any p0) { return invoke<bool>(0x39BE7CEA8D9CC8E6, p0); }
		// 0x39BE7CEA8D9CC8E6  
		static bool _network_shop_begin_service(int* id, Any p1, Hash transaction, int amount, Any p4, int p5)
		{
			return invoke<bool>(0x3C5FD37B5499582E, id, p1, transaction, amount, p4, p5);
		} // 0x3C5FD37B5499582E  
		static bool _network_shop_end_service(Any p0) { return invoke<bool>(0xE2A99A9B524BEFFF, p0); }
		// 0xE2A99A9B524BEFFF  
		static bool _0x51f1a8e48c3d2f6d(Any p0, bool p1, Any p2)
		{
			return invoke<bool>(0x51F1A8E48C3D2F6D, p0, p1, p2);
		} // 0x51F1A8E48C3D2F6D  
		static Any _0x0a6d923dffc9bd89() { return invoke<Any>(0x0A6D923DFFC9BD89); } // 0x0A6D923DFFC9BD89  
		static Any _network_shop_delete_set_telemetry_nonce_seed() { return invoke<Any>(0x112CEF1615A1139F); }
		// 0x112CEF1615A1139F  
		static bool _network_transfer_bank_to_wallet(int charStatInt, int amount)
		{
			return invoke<bool>(0xD47A2C1BA117471D, charStatInt, amount);
		} // 0xD47A2C1BA117471D  
		static bool _network_transfer_wallet_to_bank(int charStatInt, int amount)
		{
			return invoke<bool>(0xC2F7FE5309181C7D, charStatInt, amount);
		} // 0xC2F7FE5309181C7D  
		static Any _0x23789e777d14ce44() { return invoke<Any>(0x23789E777D14CE44); } // 0x23789E777D14CE44  
		static Any _0x350aa5ebc03d3bd2() { return invoke<Any>(0x350AA5EBC03D3BD2); } // 0x350AA5EBC03D3BD2  
		static bool _network_shop_cash_transfer_set_telemetry_nonce_seed() { return invoke<bool>(0x498C1E05CE5F7877); }
		// 0x498C1E05CE5F7877  
		static bool _network_shop_set_telemetry_nonce_seed(Any p0) { return invoke<bool>(0x9507D4271988E1AE, p0); }
		// 0x9507D4271988E1AE  
		static const char* _get_online_version() { return invoke<const char*>(0xFCA9373EF340AC0A); }
		// 0xFCA9373EF340AC0A  
	}
}