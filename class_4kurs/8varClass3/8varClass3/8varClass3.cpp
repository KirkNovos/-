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
	void joinCard();
	void delCard(int);
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
	int DelMark, j = 0, n = 0, key = 1;
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

		}
	} while (key != 0);

	//std::cout << "Hello World!\n"; 
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
