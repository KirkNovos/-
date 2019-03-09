#include "pch.h"
#include <iostream>
#include "Ellipse.h"
using namespace std;
Ellipse::Ellipse(float x, float a, float b)
{
	y = sqrt(pow(b, 2)*(1 - pow(x, 2) / pow(a, 2)));
}
void Ellipse::func(){
	cout <<"έλλθορ:"<< y<<endl;
}