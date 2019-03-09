#include "pch.h"
#include <iostream>
#include "Hyberbola.h"
using namespace std;
Hyber::Hyber(float x, float a, float b)
{
	y = sqrt(pow(b, 2)*(pow(x, 2) / pow(a, 2) - 1));
}
void Hyber::func() {
	cout <<"Гипербола:"<< y<<endl;
}