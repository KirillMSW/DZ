// DZ3.3.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int a;
	int b = 2;
	cin >> a;
	while (b <= a)
	{
		bool tr = 1;
		for (int i = 2; i < b; i++)
		{
			tr *= b % i;
		}
		if (tr != false)
		{
			cout << b << " ";
		}
		b++;
	}
	system("pause");
    return 0;
}

