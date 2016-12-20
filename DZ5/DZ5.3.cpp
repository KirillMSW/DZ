// DZ5.3.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int x, d;
	int arr[10];
	cout << "Enter x: ";
	cin >> x;
	cout << "Enter d: ";
	cin >> d;
	for (int i = 0; i < 10; i++)
	{
		arr[i] = x + d*i;
	}
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	system("pause");
    return 0;
}

