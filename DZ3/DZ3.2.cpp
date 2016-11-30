// DZ3.2.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>;
using namespace std;

int main()
{
	int a;
	int arr[4];
	cin >> a;
	for (int i = 3; i >= 0; i--)
	{
		arr[i] = a % 10;
		a = (a - arr[i]) / 10;
	}
	if ( arr[0]==arr[3] )
	{
		if ( arr[1]==arr[2] )
		{
			cout << "+ ";
		}
		else
		{
			cout << "- ";
		}
	}
	else
	{
		cout << "- ";
	}
	system("pause");
	return 0;
}
