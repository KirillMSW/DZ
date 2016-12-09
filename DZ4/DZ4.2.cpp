// DZ4.2.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	srand(time(0));
	int n;
	cin >> n;
	int* arr = new int[n];
	for (int i = 0; i < n; i++)
	{	
		arr[i] = 1 + rand() % 10;
	}
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] != arr[n - 1])
		{
			count++;
		}
	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl << count;
	system("pause");
    return 0;
}

