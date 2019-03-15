#pragma once

#ifndef CLASS
#define CLASS


#include <string>
#include <locale>

using namespace std;

class angle {
public:
	double graduce;
};

class triangle {
public:
	void ReadT();
	void Type();
	double Square();
	double Perimeter();
	double Hight();

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