#pragma once
#include "Figure.h"

class Square: public Figure
{
private:
	int side;

public:
	Square(); //Конструктор без параметров
	Square(int value_side);//Конструктор с параметрами
	~Square(); //Деструктор
	void set(); //прототипы методов
	void print();
	float area();
};




