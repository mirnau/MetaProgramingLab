#pragma once
#include <type_traits>



//CLASS SIMPLIFY
//Inte sann rekursion, rekursion saknas
template <class T>
struct SimplifyType
{
	using type = T;
};

template <class T>
struct SimplifyType<T*>
{
	using type = T;
};

template <class T>
struct SimplifyType<const T>
{
	using type = T;
};

template <class T>
struct SimplifyType<T&>
{
	using type = T;
};

template <class T>
struct SimplifyType<T[]>
{
	using type = T;
};

template<class T>
using SimplifyType_t = typename SimplifyType<T>::type;



//CLASS BASETYPE
//Rekursionen klarar alla kombinationer
template <class T>
struct BaseType
{
	using type = T;
};
template <class T>
struct BaseType<const T>
{
	using type = BaseType<T>::type;
};

template <class T>
struct BaseType<T*>
{
	using type = BaseType<T>::type;
};

template <class T>
struct BaseType<T&>
{
	using type = BaseType<T>::type;
};

template <class T>
struct BaseType<T[]>
{
	using type = BaseType<T>::type;
};

template <class T, int x>
struct BaseType<T[x]>
{
	using type = BaseType<T>::type;
};

template <class T, int x>
struct BaseType<const T[x]>
{
	//Intresset ligger bra på T, så det är vad vi skickar tillbaks.
	using type = BaseType<T>::type;
};

template<class T>
using BaseType_t = typename BaseType<T>::type;
