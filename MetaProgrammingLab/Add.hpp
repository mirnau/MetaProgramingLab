#pragma once
template <int x, int y>

struct Add
{
	int AddFun(int x, int y)
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

	static const int value = Add<x - 1, y + 1>::value;
};