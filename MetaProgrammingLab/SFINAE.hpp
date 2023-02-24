#pragma once

template <typename T, typename = std::enable_if_t<std::is_nothrow_copy_constructible_v<T>>>
bool NoThrowCopyConstructible(T)
{
	return true;
}

template <typename T, typename = std::enable_if_t<!std::is_nothrow_copy_constructible_v<T>>>
bool NoThrowCopyConstructible(T&)
{
	return false;
}