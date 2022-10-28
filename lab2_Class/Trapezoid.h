#pragma once

#include "Otrezok.h"

class Trapezoid
{
public:
	char color[20];
	Otrezok length;

	Trapezoid initTrapezoid(int a, int b, int c);
	Trapezoid setTrapezoid(Trapezoid trapezoid1);
	float areaTrapezoid(Trapezoid trapezoid1);
	void printTrapezoid(Trapezoid trapezoid1);
};

