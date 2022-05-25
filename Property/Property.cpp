#include "Property.h"

template<class T>
Property<T>::Property(T& variable, function<void(const T&)> getter, function<void(T&, const T&)> setter)
	: variable(variable), getter(getter), setter(setter)
{
}

template<class T>
Property<T>::Property(T& variable)
	: variable(variable)
{
}

template<class T>
T& Property<T>::operator=(const T& value)
{
	Setter(variable, value);
	return variable;
}

template<class T>
inline const T& Property<T>::Getter() const
{
	getter(variable);
	return variable;
}

template<class T>
void Property<T>::Setter(T& variable, const T& value)
{
	setter(variable, value);
}
