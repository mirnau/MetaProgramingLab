#pragma once
#include <type_traits>

template <class T>
struct RAC
{
	using type = T;
};

template <class T>
struct RAC<T const>
{
	using type = RAC<T>::type;
};

template <class T>
struct RAC<T const*>
{
	using type = RAC<T*>::type;
};


template <class T>
struct RAC<T const**>
{
	using type = RAC<T**>::type;
};


template <class T>
struct RAC<T const***>
{
	using type = RAC<T***>::type;
};