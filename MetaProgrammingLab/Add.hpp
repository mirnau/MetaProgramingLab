#pragma once
#include <type_traits>

//1.1 ADDITION

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

//1.1.2 DEFINE A META-FUNCTION
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