// DZ2.2.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int a, b, sum=0;
	cin >> a >> b;
	if (a > b)
	{
		int c;
		c = a;
		a = b;
		b = c;
	}
	if (a % 2 == 0)
	{
		a--;
	}
	if (b % 2 == 1)
	{
		b-=2;
	}
 	while (a < b)
	{
		a += 2;
		sum += a;
	}
	cout << sum;
 
	system("pause");
    return 0;
}

