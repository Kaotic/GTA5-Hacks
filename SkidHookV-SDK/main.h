#pragma once

typedef void(*t_keyboard_fn)(DWORD key, WORD repeats, BYTE scan_code, BOOL is_extended, BOOL is_with_alt,
	BOOL was_down_before, BOOL is_up_now);

void __declspec(dllimport) register_script(HMODULE handle, void(*script)());
void __declspec(dllimport) remove_script(HMODULE handle);
void __declspec(dllimport) script_wait(HMODULE handle, DWORD ms);
static void wait(const DWORD ms) { script_wait(g_handle, ms); }
void __declspec(dllimport) native_init(uint64_t hash);
void __declspec(dllimport) native_push64(uint64_t value);
__declspec(dllimport) uint64_t * native_call(); 
__declspec(dllimport) bool is_key_pressed(DWORD key);
__declspec(dllimport) bool is_key_just_up(DWORD key);
__declspec(dllimport) uintptr_t get_mp_pointer(std::vector<DWORD> offsets);
__declspec(dllimport) char* get_pattern(const char* sig, int count, int index, int offset);
__declspec(dllimport) __int64* get_global_ptr(int index);