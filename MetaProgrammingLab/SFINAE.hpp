#pragma once

template <typename T, typename = std::enable_if_t<std::is_nothrow_copy_constructible<T>::value>>
bool NoThrowCopyConstructible(T)
{
	return true;
}

template <typename T, typename = std::enable_if_t<std::is_nothrow_copy_constructible<T>::value == false>>
bool NoThrowCopyConstructible(T&)
{
	return false;
}