#pragma once

template<class T, class CT>
class Iter {
	friend class Iter<T, const T>;

	T* _ptr = nullptr;
public:

	Iter(T* p) :_ptr(p) {}

	//void contstructor
	Iter() :_ptr(nullptr) {}

	//copy constructor
	Iter(const Iter& other) : _ptr(other._ptr) {}

	//Copy constructor
	template <typename T, typename = std::enable_if_t<std::is_const<CT>::value == true>>
	Iter(const Iter<T, T>& other) : _ptr(other._ptr) {} //rad 3
};
