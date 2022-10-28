#pragma once
#include "Otrezok.h"

class Triangle
{
private:
	Otrezok length;

public:
	Triangle(); //Конструктор без параметров
	Triangle(int a,int b);//Конструктор с параметрами
	~Triangle(); //Деструктор
	void setTriangle(); //прототипы методов
	void printTriangle();
	float areaTriangle();
};









