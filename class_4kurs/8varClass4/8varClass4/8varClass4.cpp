// 8varClass4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <string>
#include <locale>

using namespace std;

class triangle {
public:
		void ReadT();
		//void Perimeter();
		double Perimeter();
		void angle();

	//triangle() {

		double a = 0;
		double b = 0;
		double c = 0;
	//}
};

class RightAngle: public triangle {
public:
	//RightAngle():triangle(){}
	//RightAngle(double a,double b,double c):triangle(a,b,c){}

	void Square() {
		//sq = sqrt((a+b+c) / 2 * ((a + b + c) / 2 - a)*((a + b + c) / 2 - b)*((a + b + c) / 2 - c));
		sq = sqrt(Perimeter() / 2 * (Perimeter() / 2 - a)*(Perimeter() / 2 - b)*(Perimeter() / 2 - c));
		cout << "Площадь:" << sq << endl;
		cout << "PRMTR:" << Perimeter() << endl;
	};
	double sq;
};

void triangle::ReadT() {
	while (true)
	{
		cout << "Введите сторону а: ";
		cin >> a;
		if (cin.peek() == '\n') {
			cin.get();
			break;
		}
		else {
			cout << "Ошибка повторите ввод:" << endl;
			cin.clear();
			while (cin.get() != '\n') {}
		}
	}

	while (true)
	{
		cout << "Введите сторону b: ";
		cin >> b;
		if (cin.peek() == '\n') {
			cin.get();
			break;
		}
		else {
			cout << "Ошибка повторите ввод:" << endl;
			cin.clear();
			while (cin.get() != '\n') {}
		}
	}

	while (true)
	{
		cout << "Введите сторону c: ";
		cin >> c;
		if (cin.peek() == '\n') {
			cin.get();
			break;
		}
		else {
			cout << "Ошибка повторите ввод:" << endl;
			cin.clear();
			while (cin.get() != '\n') {}
		}
	}



	if ((a < b + c) && (b < a + c) && (c < a + b)) {
		cout << "Треугольник существует!" << endl;
	}
	else {
		cout << "Треугольник не существует повторите ввод!" << endl;
		ReadT();
	}

}

double triangle::Perimeter() {
	return a + b + c;
	//int per= a + b + c;
	//cout << "Периметр:" << per << endl;
}

void triangle::angle() {
	double PI = 3.14159265;

	double param_a = (((b*b) + (c*c) - (a*a)) / (2 * b*c));
	double param_b = (((a*a) + (c*c) - (b*b)) / (2 * a*c));

	int alpha = round(acos(param_a)*180.0 / PI);
	int beta = round(acos(param_b)*180.0 / PI);
	int gamma = 180 - (alpha + beta);

	//alpha.graduce = round(alpha.graduce);
	//beta.graduce = round(beta.graduce);
	//gamma.graduce = round(gamma.graduce);

	cout << "Угол альфа:" << alpha << endl;
	cout << "Угол бета:" << beta << endl;
	cout << "Угол гамма:" << gamma << endl;
}

/*
void RightAngle::Square() {
	sq = sqrt(Perimeter() / 2 * (Perimeter() / 2 - a)*(Perimeter() / 2 - b)*(Perimeter() / 2 - c));
	cout << "Площадь:" << sq << endl;
	cout << "PRMTR:" << Perimeter() << endl;
}
*/

int main()
{
	setlocale(LC_ALL, "Russian");
	triangle tr;
	RightAngle ra;

	int key = 1;
	do {
		cout << "1.Ввод/Изменение" << endl;
		cout << "2.Периметр" << endl;
		cout << "3.Площадь" << endl;
		cout << "4.Углы треугольника" << endl;
		cout << "5.Выход" << endl;
		cin >> key;
		switch (key) {
		case 1:
			tr.ReadT();
			break;
		case 2:
			cout<<"Периметр:"<<tr.Perimeter()<<endl;
			//tr.Perimeter();
			break;
		case 3:
			ra.Square();
			break;
		case 4:
			tr.angle();
			break;
		}

	} while (key != 5);
	return 0;
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
