#pragma once

template <typename T>
static void native_push(T val)
{
	UINT64 val64 = 0;
	if (sizeof(T) > sizeof(UINT64))
	{
		throw "error, value size > 64 bit";
	}
	*reinterpret_cast<T *>(&val64) = val; // &val + sizeof(dw) - sizeof(val)
	native_push64(val64);
}

static void push()
{
}

template <typename First, typename... Args>
static void push(First first, Args ... args)
{
	native_push(first);
	push(args...);
}

template <typename Return, typename... Args>
static Return invoke(const UINT64 hash, Args ... args)
{
	native_init(hash);

	push(args...);

	return *reinterpret_cast<Return*>(native_call());
}