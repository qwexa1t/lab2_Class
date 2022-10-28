#pragma once
#include "Otrezok.h"

class Triangle
{
public:
	char color[20];
	Otrezok length;
	char type;

	//прототипы функций
	Triangle initTriangle(int a, int b);
	Triangle setTriangle(Triangle triangle1);
	float  areaTriangle(Triangle triangle1);
	void printTriangle(Triangle triangle1);

};




