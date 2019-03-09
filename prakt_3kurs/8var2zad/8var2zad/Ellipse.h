#pragma once
#ifndef Ellipse_h
#define Ellipse_h
#include "Function.h"
class Ellipse : public Function{
public:
	Ellipse(float, float, float);
	virtual void func();
private:
	float y;
};
#endif