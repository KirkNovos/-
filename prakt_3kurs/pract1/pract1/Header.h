#pragma once
#include<iostream>
#include<string>
#define _CRT_SECURE_NO_DEPRECATE
#define _CRT_NONSTDC_NO_DEPRECATE


using namespace std;

class Array {
protected:
	static const int max_size = 100;
public:
	Array() {}
	virtual void Plus(Array&, Array&) {};
	virtual void Enter() {};
};







class Hex : public Array
{
	unsigned char* chr;
	unsigned int count;
public:
	Hex()
	{
		chr = new unsigned char;
		for (int i = 0; i < 4; i++)
			chr[i] = *"0";
	}

	Hex(unsigned int n)
	{
		chr = new unsigned char;
		count = n;
		for (unsigned int i = 0; i < n; i++)
			chr[i] = *"0";
	}

	void Enter()
	{
		string str;
		bool pr = true;
		while (pr == true)
		{
			cout << "Введите 16-и битовую строку " << endl;
			cin >> str;
			count = str.size();
			for (unsigned int i = 0; i < count; i++)
			{
				if ((str.at(i) != *"0") && (str.at(i) != *"1") && (str.at(i) != *"2") && (str.at(i) != *"3") && (str.at(i) != *"4") && (str.at(i) != *"5") && (str.at(i) != *"6") && (str.at(i) != *"7") && (str.at(i) != *"8") && (str.at(i) != *"9") && (str.at(i) != *"a") && (str.at(i) != *"b") && (str.at(i) != *"c") && (str.at(i) != *"d") && (str.at(i) != *"e") && (str.at(i) != *"f"))
				{
					cout << "Ошибка. Введены некоректные данные. Повторите ввод!" << endl;
					i = count;
					cin.clear();
					pr = true;
					while (cin.get() != '\n') {}
					break;
					
				}
				else
				{
					pr = false;
				}
			}
			chr = new unsigned char;
			for (unsigned int i = 0; i < count; i++)
				chr[i] = str.at(i);
		}
	}




	string Plus(Hex& H)
	{
		string str;
		int z = 0, xxx = 0, yyy = 0, ccc = 0, ooo = 0, countMax = 0, countMin = 0;
		unsigned int i;
		if (count > H.count) {
			i = count;
			z = count - H.count;
			for (int j = z; j > 0; j++) {
				H.chr = '0' + H.chr;
			}
		}
		else {
			i = H.count;
			z = H.count - count;
			for (int j = z; j > 0; j++) {
				chr = '0' + chr;
			}
		}
		while (i > 0)
		{
			i--;
			if (chr[i] == *"0") xxx = 0; if (chr[i] == *"1") xxx = 1;	if (chr[i] == *"2") xxx = 2;	if (chr[i] == *"3") xxx = 3;	if (chr[i] == *"4") xxx = 4;	if (chr[i] == *"5") xxx = 5;	if (chr[i] == *"6") xxx = 6;	if (chr[i] == *"7") xxx = 7;	if (chr[i] == *"8") xxx = 8;	if (chr[i] == *"9") xxx = 9;	if (chr[i] == *"a") xxx = 10;	if (chr[i] == *"b") xxx = 11;	if (chr[i] == *"c") xxx = 12;	if (chr[i] == *"d") xxx = 13;	if (chr[i] == *"e") xxx = 14;	if (chr[i] == *"f") xxx = 15;
			if (H.chr[i] == *"0") yyy = 0; if (H.chr[i] == *"1") yyy = 1;	if (H.chr[i] == *"2") yyy = 2;	if (H.chr[i] == *"3") yyy = 3;	if (H.chr[i] == *"4") yyy = 4;	if (H.chr[i] == *"5") yyy = 5;	if (H.chr[i] == *"6") yyy = 6;	if (H.chr[i] == *"7") yyy = 7;	if (H.chr[i] == *"8") yyy = 8; if (H.chr[i] == *"9") yyy = 9; if (H.chr[i] == *"a") yyy = 10; if (H.chr[i] == *"b") yyy = 11; if (H.chr[i] == *"c") yyy = 12; if (H.chr[i] == *"d") yyy = 13; if (H.chr[i] == *"e") yyy = 14; if (H.chr[i] == *"f") yyy = 15;
			ooo = (xxx + yyy + ccc) % 16;
			ccc = (int)(xxx + yyy + ccc) / 16;
			if (ooo == 1) str = *"1" + str;	if (ooo == 2) str = *"2" + str;	if (ooo == 3) str = *"3" + str;	if (ooo == 4) str = *"4" + str;	if (ooo == 5) str = *"5" + str;	if (ooo == 6) str = *"6" + str;	if (ooo == 7) str = *"7" + str;	if (ooo == 8) str = *"8" + str; if (ooo == 9) str = *"9" + str; if (ooo == 10) str = *"a" + str; if (ooo == 11) str = *"b" + str; if (ooo == 12) str = *"c" + str; if (ooo == 13) str = *"d" + str; if (ooo == 14) str = *"e" + str; if (ooo == 15) str = *"f" + str;
		}
		if (ccc != 0)	str = *"1" + str;
		return str;
	}
};






class Octal : public Array
{
	unsigned char* chr;
	unsigned int count;
public:
	Octal()
	{
		chr = new unsigned char;
		for (int i = 0; i < 4; i++)
			chr[i] = *"0";
	}

	Octal(unsigned int n)
	{
		chr = new unsigned char;
		count = n;
		for (unsigned int i = 0; i < n; i++)
			chr[i] = *"0";
	}

	void Enter()
	{
		string str;
		bool pr = true;
		while (pr == true)
		{
			cout << "Введите 8-ми битовую строку " << endl;
			cin >> str;
			count = str.size();
			for (unsigned int i = 0; i < count; i++)
			{
				if ((str.at(i) != *"0") && (str.at(i) != *"1") && (str.at(i) != *"2") && (str.at(i) != *"3") && (str.at(i) != *"4") && (str.at(i) != *"5") && (str.at(i) != *"6") && (str.at(i) != *"7"))
				{
					cout << "Ошибка. Введены некоректные данные. Повторите ввод!" << endl;
					i = count;
					cin.clear();
					pr = true;
					while (cin.get() != '\n') {}
					break;

				}
				else
				{
					pr = false;
				}
			}
			chr = new unsigned char;
			for (unsigned int i = 0; i < count; i++)
				chr[i] = str.at(i);
		}
	}

	string Plus(Octal& O)
	{
		string str;
		int xxx = 0, yyy = 0, ccc = 0, ooo = 0, countMax = 0, countMin = 0;
		unsigned int i = count;
		while (i > 0)
		{
			i--;
			if (chr[i] == *"1") xxx = 1;	if (chr[i] == *"2") xxx = 2;	if (chr[i] == *"3") xxx = 3;	if (chr[i] == *"4") xxx = 4;	if (chr[i] == *"5") xxx = 5;	if (chr[i] == *"6") xxx = 6;	if (chr[i] == *"7") xxx = 7;	if (chr[i] == *"0") xxx = 0;
			if (O.chr[i] == *"1") yyy = 1;	if (O.chr[i] == *"2") yyy = 2;	if (O.chr[i] == *"3") yyy = 3;	if (O.chr[i] == *"4") yyy = 4;	if (O.chr[i] == *"5") yyy = 5;	if (O.chr[i] == *"6") yyy = 6;	if (O.chr[i] == *"7") yyy = 7;	if (O.chr[i] == *"0") yyy = 0;
			ooo = (xxx + yyy + ccc) % 8;
			ccc = (int)(xxx + yyy + ccc) / 8;
			if (ooo == 1) str = *"1" + str;	if (ooo == 2) str = *"2" + str;	if (ooo == 3) str = *"3" + str;	if (ooo == 4) str = *"4" + str;	if (ooo == 5) str = *"5" + str;	if (ooo == 6) str = *"6" + str;	if (ooo == 7) str = *"7" + str;	if (ooo == 0) str = *"0" + str;
		}
		if (ccc != 0)	str = *"1" + str;
		return str;
	}
};