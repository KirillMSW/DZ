// DZ5.4.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
void couting(int**, int);
void filling(int**, int);

int main()
{
	int n;
	cin >> n;
	int* arr = new int[n,n];
	int* newarr = new int[n,n];
	filling(&arr, n);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			newarr[j, i] = arr[i, n - j];
		}
	} 
	couting(&arr, n);
	cout << endl;
	couting(&newarr, n);
	system("pause");
	return 0;
}
void couting(int** arr, int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << arr[j, i] << " ";
		}
		cout << endl;
	}
}
void filling(int** arr, int n)
{
	int a = 1;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			*arr[j, i] = a;
			a++;
		}
	}
}

