// DZ2.7.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <conio.h>
int computer(int, int);
int man(int, int);
void cubes(int);
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	int manp=0, comp=0;//переменные для подсчета очков человека и компьютера
	int random=0;
	bool t = rand()%2;
	if (t == 0)
	{
		cout << "Первым ходит компьютер" << endl << endl;
		for (int i = 0; i < 4; i++)
		{
			
			comp = computer(random, comp);
			manp = man(random, manp);
		}
	}
	else
	{
		cout << "Первым ходите вы" << endl << endl;
		for (int i = 0; i < 4; i++)
		{
			manp = man(random, manp);
			comp = computer(random, comp);
		}
	}
	if (comp > manp)
	{
		cout << "Компьютер выиграл со счетом " << comp << ":" << manp << endl;
	}
	else
	{
		cout << "Вы выиграли со счетом " << manp << ":" << comp << endl;
 	}
	system("pause");
    return 0;
}
int computer(int random,int comp)
{
	cout << "Ход компьютера" << endl;
	random = 1 + rand() % 6;
	comp += random;
	cubes(random);
	cout << endl << "Выпало " << random << ". " << "Всего " << comp << "." << endl << endl;
	return comp;
}
int man(int random, int manp)
{
	bool null;
	cout << "Ваш ход" << endl << "Нажмите любую клавишу чтобы сделать бросок";
	null=_getch();
	cout << endl;
	random = 1 + rand() % 6;
	manp += random;
	cubes(random);
	cout << endl << "Выпало " << random << ". " << "Всего " << manp << "." << endl << endl;
	return manp;
}
void cubes(int random)
{
	switch (random)
	{
	case 1:cout << "---------" << endl
				<< "!       !" << endl
				<< "!   @   !" << endl
				<< "!       !" << endl
				<< "!_______!" << endl;
		break;

	case 2:cout << "---------" << endl
				<< "!      @!" << endl
				<< "!       !" << endl
				<< "!@      !" << endl
				<< "!_______!" << endl;
		break;

	case 3:cout << "---------" << endl
				<< "!     @ !" << endl
				<< "!   @   !" << endl
				<< "! @     !" << endl
				<< "!_______!" << endl;
		break;

	case 4:cout << "---------" << endl
				<< "! @   @ !" << endl
				<< "!       !" << endl
				<< "! @   @ !" << endl
				<< "!_______!" << endl;
		break;

	case 5:cout << "---------" << endl
				<< "! @   @ !" << endl
				<< "!   @   !" << endl
				<< "! @   @ !" << endl
				<< "!_______!" << endl;
		break;
			
	case 6:cout << "---------" << endl
				<< "! @   @ !" << endl
				<< "! @   @ !" << endl
				<< "! @   @ !" << endl
				<< "!_______!" << endl;
		break;
	}
}