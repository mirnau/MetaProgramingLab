#pragma once
#include <type_traits>

static int AddFun(int x, int y)
{
	if (x == 0)
	{
		return y;
	}
	else
	{
		return AddFun(x - 1, y + 1);
	}
}

template <int x, int y>
struct Add
{
	static const int value = Add<x - 1, y + 1>::value; 
};

template <int y>
struct Add<0, y>
{
	static const int value = y;
};

//static void foo()
//{
//	static_assert(Add<3, 5>::value == 8);
//
//	int x2 = Add<3, 5>::value
//
//}


