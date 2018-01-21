#pragma once

namespace memory
{
	template <typename T>
	static T get_value(const std::vector<DWORD> offsets)
	{
		const auto address = get_mp_pointer(offsets);

		if (!address)
			return NULL;

		return *reinterpret_cast<T*>(address);
	}

	template <typename T>
	static void set_value(const std::vector<DWORD> offsets, T value)
	{
		const auto address = get_mp_pointer(offsets);

		if (!address)
			return;

		*reinterpret_cast<T*>(address) = value;
	}
}