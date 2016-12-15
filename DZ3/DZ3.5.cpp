// DZ3.5.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
int sumof(int, int);
using namespace std;


int main()
{
	int a,b,sum=0,summ=0;
	bool tr = 0;
	cin >> a >> b;
	sum=sumof(sum, a);
	summ=sumof(summ, b);
	if (sum == b, summ == a)
	{
		tr = 1;
	}
	cout << tr << endl;
	system("pause");
    return 0;
}
int sumof(int sum, int a)
{
	
	for (int i = 1; i <= a / 2; i++)
	{
		if (a%i == 0)
		{
			sum += i;
		}
	}
	return sum;
}
