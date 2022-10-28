#pragma once

#include "Otrezok.h"

class Trapezoid
{
private:
	Otrezok length;

public:
	Trapezoid(); //Конструктор без параметров
	Trapezoid(int a, int b, int c);//Конструктор с параметрами
	Trapezoid(int a);//Конструктор с 1 параметром
	~Trapezoid(); //Деструктор
	void setTrapezoid(); //прототипы методов
	void printTrapezoid();
	float areaTrapezoid();
};

