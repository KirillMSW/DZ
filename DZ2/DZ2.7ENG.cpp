// DZ2.7.cpp: îïðåäåëÿåò òî÷êó âõîäà äëÿ êîíñîëüíîãî ïðèëîæåíèÿ.
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
	int manp=0, comp=0;//ïåðåìåííûå äëÿ ïîäñ÷åòà î÷êîâ ÷åëîâåêà è êîìïüþòåðà
	int random=0;
	bool t = rand()%2;
	if (t == 0)
	{
		cout << "Computer's turn is firs" << endl << endl;
		for (int i = 0; i < 4; i++)
		{
			
			comp = computer(random, comp);
			manp = man(random, manp);
		}
	}
	else
	{
		cout << "Your turn is first" << endl << endl;
		for (int i = 0; i < 4; i++)
		{
			manp = man(random, manp);
			comp = computer(random, comp);
		}
	}
	if (comp > manp)
	{
		cout << "Computer has won the game. Final score " << comp << ":" << manp << endl;
	}
	else
	{
		cout << "You've won the game. Final score " << manp << ":" << comp << endl;
 	}
	system("pause");
    return 0;
}
int computer(int random,int comp)
{
	cout << "Computer's turn" << endl;
	random = 1 + rand() % 6;
	comp += random;
	cubes(random);
	cout << endl << "Computer scored " << random << ". " << "Total " << comp << "." << endl << endl;
	return comp;
}
int man(int random, int manp)
{
	bool null;//empty var for getch
	cout << "Your turn" << endl << "Press any key to throw the dice";
	null=_getch();
	cout << endl;
	random = 1 + rand() % 6;
	manp += random;
	cubes(random);
	cout << endl << "You scored " << random << ". " << "Total " << manp << "." << endl << endl;
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
