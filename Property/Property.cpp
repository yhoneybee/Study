#include "Property.h"

template<typename T>
Property<T>::Property(T& variable, function<void(const T&)> getter, function<void(T&, const T&)> setter)
	: variable(variable), getter(getter), setter(setter)
{
}

template<typename T>
T& Property<T>::operator=(const T& value)
{
	Setter(variable, value);
	return variable;
}

template<typename T>
inline const T& Property<T>::Getter() const
{
	getter(variable);
	return variable;
}

template<typename T>
void Property<T>::Setter(T& variable, const T& value)
{
	setter(variable, value);
}
