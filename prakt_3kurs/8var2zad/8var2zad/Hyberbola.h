#pragma once
#ifndef Hyberbola_h
#define Hyberbola_h
#include "Function.h"
class Hyber : public Function {
public:
	Hyber(float, float, float);
	virtual void func();
private:
	float y;
};
#endif