// DZ4.1.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int* arr = new int[n];
	int* arr2 = new int[n];
	int* arr3 = new int[n];
	for (int i = 0; i < n; i++)// ��������� ������� ����������������� �������(��� �������� ��������)
	{
		arr[i] = i;
	}
	for (int i = n-1; i >=0; i--)// ��������� ������� ����������������� �������(��� �������� ��������)
	{
		arr2[i] = i;	
	}
	int p = n-1;
	for (int i = 0; i < n; i++)
	{
		arr3[i] = arr[i] + arr2[p];
		p--;
	}
	for (int i = 0; i < n; i++)
	{
		cout << arr3[i] << " ";
	}
	system ("pause");
    return 0;
}

