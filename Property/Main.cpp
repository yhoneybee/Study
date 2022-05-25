#include <iostream>
#include <vector>
#include "Property.h"
#include "Property.cpp"

using namespace std;

template<template <typename A, typename B> typename C>
class MyClass
{
};

template<typename A, typename B>
class MyClass1
{
};

template<typename A>
class MyClass2
{
};

int main()
{
	unsigned long long* dp = new unsigned long long[30];

	// Big - O

	// CheckNode(node)
	// CheckNode(node->left)
	// CheckNode(node->right)

	// DP : ���?
	// ���ÿ����÷��� ����
	// �ݺ��� �������� ����������

	// �޸𸮿� ������� ������ �̷�� ������ �����Ͽ� �ݺ����� ������ ȸ����

	dp[0] = 1;

	// ���� ���Ϸ��°� : dp [ i ]
	// dp [ i - 1 ]
	// dp [ i - 2 ]
	// 1 1 2
	// �� + ����

	// 5

	// 1 * 1 = 1 
	// 1 * 2 = 2
	// 2 * 3

	// 1 * 2 * 3
	// 1 * 2 * 3 * 4
	// 1 * 2 * 3 * 4 * 5

	for (size_t i = 1; i < 30; i++)
	{
		dp[i] = dp[i - 1] * i;
	}


	//MyClass<MyClass1> myClass;
	//MyClass1<int, float> myClass1;
	//MyClass2<int> myClass2;

	//int a = 0;
	//Property<int> A(a, GET(cout << "GET " << variable << "\n";), SET(cout << value << " SET\n"; variable = value;));
	//A = 10;
	//A = 20;
	//A = 30;
	//A = 40;
	//A = 50;

	//cout << A << "\n";

	return 0;
}