// 8varClass3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <locale.h>
#include <string>

const int SIZE = 10;
using namespace std;

struct WordCard {
	string word;
	string translate;
};

class Dictionary {
public:
	string name_book;
	int number_of_card = 0;
	WordCard WC1[SIZE];
	void createCard();
	void ShowCard();
	void searchCard(string);
	//void joinCard();
	void delCard(int);


	int operator+(const Dictionary & v) {
		int j, i = 0;
		//int x, y = 0;
		int new_number_card = number_of_card + v.number_of_card;
		for (j=number_of_card; j < new_number_card; j++)
		{
			WC1[j].word = v.WC1[i].word;
			WC1[j].translate = v.WC1[i].translate;
			i = i + 1;
		}
		number_of_card = new_number_card;
		return 0;
	}

	
	int operator=(const Dictionary & v) {
		int j, i = 0;
		for (j = 0; j < v.number_of_card; j++) {
			WC1[j].word = v.WC1[i].word;
			WC1[j].translate = v.WC1[i].translate;
			i = i + 1;
		}
		number_of_card = v.number_of_card;
		return 0;
	}


	int operator*(const Dictionary & v) {
		int k = 0, i, j, b, n = 0, new_number_of_card;
		int narr[10];
		string jo;
		new_number_of_card = v.number_of_card;
		for (i = 0; i < number_of_card; i++)
		{
			for (j = 0; j < new_number_of_card; j++)
			{
				jo = v.WC1[j].word;
				if (WC1[i].word == jo) {
					narr[n] = i;
					n++;
				}
			}
		}
		for (i = 0; i < n; i++)
		{
			b = narr[i];
			cout << b;
			for (j = 0; j < b; j++)
			{
				WC1[j].word = WC1[b].word;
				WC1[j].translate = WC1[b].translate;
			}
			k++;
		}
		number_of_card = n;
		return 0;
	}

	int operator/(const Dictionary & v) {
		int k = 0, flag = 0, i, j, b, n = 0, new_number_of_card;
		int narr[10];
		string jo;
		new_number_of_card = v.number_of_card;
		for (i = 0; i < number_of_card; i++) {
			flag = 0;
			for (j = 0; j < new_number_of_card; j++)
			{
				jo = v.WC1[j].word;
				if (flag==1)
				{
					narr[n] = i;
					n++;
				}
			}
			for (i = 0; i < n; i++)
			{
				b = narr[i];
				cout << b;
				for (j = 0; j < b; j++)
				{
					WC1[j].word = WC1[b].word;
					WC1[j].translate = WC1[b].translate;
				}
				k++;
			}
			number_of_card = n + 1;
			return 0;
		}
	}


};

void Dictionary::delCard(int DelMark) {
	for (int i = DelMark; i <= number_of_card; i++) {
		WC1[i].word = WC1[i + 1].word;
		WC1[i].translate = WC1[i + 1].translate;
	}
	number_of_card--;
}
void Dictionary::ShowCard() {
	for (int n = 0; n < number_of_card; n++) {
		cout << "Слово:" << WC1[n].word << endl;
		cout << "Перевод:" << WC1[n].translate << endl;
		cout << endl;
	}
}
void Dictionary::createCard() {
	cout << "word:";
	cin >> WC1[number_of_card].word;
	string wrd1 = WC1[number_of_card].word;
	cout << "translate:";
	cin >> WC1[number_of_card].translate;
	string trn1 = WC1[number_of_card].translate;
	number_of_card++;
	cout << endl;

	int n;
	n = number_of_card;
		for (int i = 0; i < --n; i++)
		{

			string wrd2 = WC1[i].word;
			string trn2 = WC1[i].translate;

			if ((wrd1 == wrd2) && (trn1 == trn2))
			{
				//cout << "Номер проверяемого :" << i << endl;
				//cout << "Наш номер капрты:" << number_of_card << endl;
				cout << "Такая карточка уже существует!!!" << endl;
				WC1[i].word = WC1[i].word;
				WC1[i].translate = WC1[i].translate;
				number_of_card--;
			}
			else
			{
				cout << "Новая карточка УРА!!!" << endl;
			}
	}
}

void Dictionary::searchCard(string wrd) {
	for (int i = 0; i < number_of_card; i++)
	{
		string wrd2 = WC1[i].word;
		string trn2 = WC1[i].translate;
		if (wrd==wrd2)
		{
			cout << "слово:" << wrd2 << endl;
			cout << "перевод:" << trn2 << endl;
			cout << endl;
		}
		else
		{
			cout << "такого слова нет!" << endl;
			cout << endl;
		}
	}
}


int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	int DelMark, j = 0, n, m, key = 1;
	int x, y, z;
	int number_of_book = 0;
	string wrd;
	Dictionary arr[10];

	do {

		cout << "1.Создание нового словаря" << endl;
		cout << "2.Создание карточки слова(сделать выбор словаря)" << endl;
		cout << "3.Выбор словаря" << endl;
		cout << "4.Показ карточки слова (сделать выбор словаря)" << endl;
		cout << "5.Удаление карточки (сделать выбор словаря)" << endl;
		cout << "6.Переименовать словарь (сделать выбор словаря)" << endl;
		cout << "7.Поиск слова (сделать выбор словаря)" << endl;
		cout << "8.Слияние двух словарей" << endl;
		cout << "9.Пересечение двух словарей" << endl;
		cout << "10.Удаление словаря" << endl;
		cout << "0.Выход" << endl;

		cin >> key;
		switch (key)
		{
		case 1:
			cout << "Введите название словаря:";
			cin >> arr[number_of_book].name_book;
			cout << endl;
			number_of_book++;
			break;
		case 2:
			cout << "Заполните новую карточку словаря:" << endl;
			arr[j].createCard();
			break;
		case 3:
			cout << "Введите с каким словарём работать (номер словаря):";
			cin >> j;
			cout << "Выбранный словарь:" << arr[j].name_book << endl;
			cout << endl;
			break;
		case 4:
			arr[j].ShowCard();
			break;
		case 5:
			arr[j].ShowCard();
			cout << "Номер карточки:";
			cin >> DelMark;
			arr[j].delCard(DelMark);
			break;
		case 6:
			cout << "Введите новое название словаря:";
			cin >> arr[j].name_book;
			break;
		case 7:
			cout << "Введите слово для поиска карточки:";
			cin >> wrd;
			cout << endl;
			arr[j].searchCard(wrd);
			break;
		case 8:
			cout << "Введите название обьединённого словаря:";
			cin >> arr[number_of_book].name_book;
			cout << endl;
			//number_of_book++;
			
			cout << "Введите номер первого словаря:"; 
			cin >> x;
			cout << "Введите номер второго словаря:";
			cin >> y;
			cout << "Выбранный словарь 1:" << arr[x].name_book << endl;
			cout << "Выбранный словарь 2:" << arr[y].name_book << endl;


			z = number_of_book++;
			arr[z] = arr[x];
			arr[z] + arr[y];
			break;

		case 9:
			cout << "Введите название пересечённого словаря:";
			cin >> arr[number_of_book].name_book;
			cout << endl;
			cout << "Введите номер первого словаря:";
			cin >> x;
			cout << "Введите номер второго словаря:";
			cin >> y;
			cout << "Выбранный словарь 1:" << arr[x].name_book << endl;
			cout << "Выбранный словарь 2:" << arr[y].name_book << endl;
			z = number_of_book++;
			arr[z] = arr[x];
			arr[z] * arr[y];
			break;
		case 10:
			cout << "Введите название пересечённого словаря:";
			cin >> arr[number_of_book].name_book;
			cout << endl;
			cout << "Введите номер первого словаря:";
			cin >> x;
			cout << "Введите номер второго словаря:";
			cin >> y;
			cout << "Выбранный словарь 1:" << arr[x].name_book << endl;
			cout << "Выбранный словарь 2:" << arr[y].name_book << endl;
			int z = number_of_book++;
			arr[z] = arr[x];
			arr[z] / arr[y];
			break;
		}

	} while (key != 0);

}
