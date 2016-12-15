// DZ3.4.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int a, sum = 0;
	bool tr=0;
	cin >> a;
	for (int i = 1; i <= a / 2; i++)
	{
		if (a%i == 0)
		{
			sum += i;
		}
	}
	if (sum == a)
	{
		tr = 1;
	}
	cout << tr << " ";
	system("pause");
    return 0;
}

