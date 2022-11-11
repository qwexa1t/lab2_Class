#pragma once
#include "Otrezok.h"

class Circle
{
private:
	Otrezok length;

public:
	Circle(); //Конструктор без параметров
	Circle(int a);//Конструктор с параметрами
	~Circle(); //Деструктор
	void setCircle(); //прототипы методов
	void printCircle();
	float areaCircle();
};




