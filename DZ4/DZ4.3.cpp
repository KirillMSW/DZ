// DZ4.3.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
void couting(int*,int);
using namespace std;

int main()
{
	int n,a,b;
	cin >> n;
	int* arr = new int[n];
	for (int i = 0; i < n; i++)
	{
		arr[i] = i;
	}
	couting(arr, n);
	
	for (int i = 0; i < n; i++)
	{
		a = arr[i];
		arr[i] = arr[n-1-i];
		arr[n-1-i] = a;
	}
	couting(arr, n);
	system("pause");
    return 0;
}
void couting(int* arr,int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}
