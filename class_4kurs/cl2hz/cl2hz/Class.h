#pragma once

#ifndef CLASS
#define CLASS


#include <string>
#include <locale>

using namespace std;

class angle {
public:
	int graduce;
	int minute;
};

class triangle {
public:
	void ReadT();
	void Type();
	void Hight();
	double Square();
	double Perimeter();

private:
	double a=0;
	double b=0;
	double c=0;
	double ha, hc, hb;
	angle alpha;
	angle beta;
	angle gamma;
};

#endif