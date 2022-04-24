#include <iostream>
#include "Property.h"
#include "Property.cpp"

using namespace std;

int main()
{
	int a = 0;

	Property<int> A(a, GET(cout << "GET " << variable << "\n";), SET(cout << value << " SET\n"; variable = value;));

	A = 10;
	A = 20;
	A = 30;
	A = 40;
	A = 50;

	cout << A << "\n";

	return 0;
}