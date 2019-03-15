#include "pch.h"
#include <iostream>
#include "Class.h"
#include <string>
#include <cmath>
#include <sstream>
#include <locale>


#define PI 3.14159265

using namespace std;

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
				cout << "Ошибка введите целое число:" << endl;
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
				cout << "Ошибка введите целое число:" << endl;
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
				cout << "Ошибка введите целое число:" << endl;
				cin.clear();
				while (cin.get() != '\n') {}
			}
		}
	if ((a < b + c) && (b < a + c) && (c < a + b)) {
		cout << "Треугольник существует" << endl;
	}
	else {
		cout << "Всё говно давай по новой" << endl;
	}
}

double triangle::Perimeter() {
	return a + b + c;
}

double triangle::Hight() {
	ha = 2 * (Square() / a);
	hb = 2 * (Square() / b);
	hc = 2 * (Square() / c);
	cout << "Высота1:" <<ha<< endl;
	cout << "Высота2:" << hb << endl;
	cout << "Высота3:" << hc << endl;
	//return ha, hb, hc;
}

double triangle::Square() {
	return sqrt(Perimeter() / 2 * (Perimeter() / 2 - a)*(Perimeter() / 2 - b)*(Perimeter() / 2 - c));
}

void triangle::Type() {

	double param_a= (((b*b) + (c*c) - (a*a)) / (2 * b*c));
	double param_b = (((a*a) + (c*c) - (b*b)) / (2 * a*c));
	
	alpha.graduce = (acos(param_a)*180.0/PI);
	beta.graduce = (acos(param_b)*180.0/PI);
	gamma.graduce = 180 - (alpha.graduce + beta.graduce);

	alpha.graduce = round(alpha.graduce);
	beta.graduce = round(beta.graduce);
	gamma.graduce = round(gamma.graduce);
	if ((alpha.graduce == 90) || (beta.graduce == 90) || (gamma.graduce == 90)) {
		cout << "прямоугольный" << endl;
	}
	
	if ((a==b)||(b==c)||(c==a)) {
		cout << "Равнобедренный" << endl;
	}

	if ((a==b)&&(b==c)) {
		cout << "Равносторонний" << endl;
	}
	//cout << "alpha:"<<alpha.graduce<<endl;
	//cout << "beta:" << beta.graduce << endl;
	//cout << "gamma:" << gamma.graduce << endl;
}