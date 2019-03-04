// pract1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>

#include "Header.h"
using namespace std;

int main()
{
	setlocale(.1251, "");
	Hex H1, H2;
	Octal O1, O2;
	int key = 0, kok = 0;
	while (key != 3)
	{
		cout << "Нажмите (1) если хотите сложить 16-и битовые строки" << endl
			<< "Нажмите (2) если хотите сложить 8-ми битовые строки" << endl
			<< "Нажмите (3) если хотите выйти" << endl;

		do
		{
			cin >> key;
			if (key != 1 || key != 2 || key != 3) {
				kok = 1;
			}
		} while (kok != 1);
		switch (key)
		{
		case 1:
		{
			H1.Enter();
			H2.Enter();
			cout << endl << "Сумма равна :" << H1.Plus(H2) << endl << endl; break;
		}
		case 2:
		{
			O1.Enter();
			O2.Enter();
			cout << endl << "Сумма равна :" << O1.Plus(O2) << endl << endl; break;
		}
		}
	}
	return 0;
}
