// DZ2.1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int a=0, count=0;
	float sum = 0;
	do
	{

		cin >> a;
		sum += a;
		count++;
		
	} while (a != 0);
	count--;
	cout << "Numbers typed: " << count << endl << "Sum: " << sum << endl << "Average: " << sum / count << endl;
	system("pause");

    return 0;
}

