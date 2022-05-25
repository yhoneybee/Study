#pragma once
#include <iostream>
#include <functional>

using namespace std;

#define GET(func) [](auto& variable)->void {func}
#define SET(func) [](auto& variable, const auto& value)->void {func}

template<class T>
class Property
{
public:
	Property(T& variable, function<void(const T&)> getter, function<void(T&, const T&)> setter);
	Property() {}
	~Property() {}
private:
	Property(T& variable);
public:
	T& variable;
private:
	function<void(const T&)> getter;
	function<void(T&, const T&)> setter;
public:
	T& operator=(const T& value);
	operator const T& () const { return Getter(); }
private:
	const T& Getter() const;
	void Setter(T& variable, const T& value);
};
