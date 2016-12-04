// DZ2.5.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
void filling(int*,int);

int main()
{
	int arr[10], arrr[15];
	int starr = sizeof (arr)/4;
	filling(arr,starr);
	int ndarr = sizeof(arrr) / 4;
	filling(arrr, ndarr);


	system("pause");
    return 0;
}
void filling(int* arr,int j)
{
	for (int i = 0; i < j; i++)
	{
		arr[i] = i;

	}
	for (int i = 0; i < j; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

