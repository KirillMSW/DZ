// DZ3.1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include<iostream>
using namespace std;
int main()
{
	int a, b, c;
	cin >> a;
	b = 0;
	c = 0;

	for (int i = 0; i < 5; i++)
	{
		b = a % 2;
		a /= 2;
		c += b;
	}
	cout << c << " ";
	system("pause");
	return 0;
}
