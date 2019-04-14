// 8var3Class.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <string>
#include <locale.h>


using namespace std;

//const int n=10;

struct WordCard
{
	char eng_word;
	char translate;
};

class Dictionary
{
public:
	Dictionary();
	void CreateBook();
	//Dictionary(char n[]);
	void JoinBook();
	void DelBook();
	void writeName();
	void createCard();
	void delCard();
	void searchName();
	~Dictionary();

private:
	char name_book;
	WordCard Cards[];
};





/*
Dictionary::Dictionary(char n[]) {
	strcpy(this->name_book,n);
}
istream &operator>>(istream &stream, Dictionary &ob)
{
	cout << "Введите название вашего словаря:" << endl;
	stream>>ob.name_book;
}
*/

void Dictionary::CreateBook() {
	cout << "Введите название словаря:";
	cin >> name_book;
	//cout << "Введите кол-во карточек в словаре:";
	//cin >> n;
}

int main()
{
	setlocale(LC_ALL, "RUS");
    std::cout << "Hello World!\n"; 
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
