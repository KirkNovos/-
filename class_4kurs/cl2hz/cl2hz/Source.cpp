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
			cout << "������� ������� �: ";
			cin >> a;
			if (cin.peek() == '\n') {
				cin.get();
				break;
			}
			else {
				cout << "������ ������� ����� �����:" << endl;
				cin.clear();
				while (cin.get() != '\n') {}
			}
		}

		while (true)
		{
			cout << "������� ������� b: ";
			cin >> b;
			if (cin.peek() == '\n') {
				cin.get();
				break;
			}
			else {
				cout << "������ ������� ����� �����:" << endl;
				cin.clear();
				while (cin.get() != '\n') {}
			}
		}

		while (true)
		{
			cout << "������� ������� c: ";
			cin >> c;
			if (cin.peek() == '\n') {
				cin.get();
				break;
			}
			else {
				cout << "������ ������� ����� �����:" << endl;
				cin.clear();
				while (cin.get() != '\n') {}
			}
		}


	
	if ((a < b + c) && (b < a + c) && (c < a + b)) {
		cout << "����������� ����������" << endl;
	}
	else {
		cout << "������ ������������ �� ����������!" << endl;
		ReadT();
	}

}

double triangle::Perimeter() {
	return a + b + c;
}

void triangle::Hight() {
	ha = 2 * (Square() / a);
	hb = 2 * (Square() / b);
	hc = 2 * (Square() / c);
	cout << "������1:" <<ha<< endl;
	cout << "������2:" << hb << endl;
	cout << "������3:" << hc << endl;
}

double triangle::Square() {
	return sqrt(Perimeter() / 2 * (Perimeter() / 2 - a)*(Perimeter() / 2 - b)*(Perimeter() / 2 - c));
}

void triangle::Type() {

	double param_a= (((b*b) + (c*c) - (a*a)) / (2 * b*c));
	double param_b = (((a*a) + (c*c) - (b*b)) / (2 * a*c));
	
	alpha.graduce = (acos(param_a)*180.0/3.14159265358979323846);
	beta.graduce = (acos(param_b)*180.0/ 3.14159265358979323846);
	gamma.graduce = 180 - (alpha.graduce + beta.graduce);
	float a1,b1,g1;
	a1= acos(param_a)*180.0 / 3.14159265358979323846;
	alpha.minute = (a1 - floor(a1)) * 60;
	b1= acos(param_b)*180.0 / 3.14159265358979323846;
	beta.minute = (b1 - floor(b1)) * 60;
	g1 = 180 - (a1 + b1);
	beta.minute = (g1 - floor(g1)) * 60;


	//cout << "a1" << a1 << endl;
	//cout << "b1" << b1 << endl;
	//cout << "g1" << g1 << endl;

	//alpha.graduce = round(alpha.graduce);
	//beta.graduce = round(beta.graduce);
	//gamma.graduce = round(gamma.graduce);
	
	if ((alpha.graduce == 90) || (beta.graduce == 90) || (gamma.graduce == 90)) {
		cout << "�������������" << endl;
	}
	
	if ((a==b)||(b==c)||(c==a)) {
		cout << "��������������" << endl;
	}

	if ((a==b)&&(b==c)) {
		cout << "��������������" << endl;
	}
	cout << "alpha:"<<"�������:"<<alpha.graduce<<" ������:"<<alpha.minute<<endl;
	cout << "beta:" <<"�������:"<< beta.graduce << " ������:" << beta.minute << endl;
	cout << "gamma:" <<"�������:"<< gamma.graduce << " ������:" << gamma.minute << endl;
}