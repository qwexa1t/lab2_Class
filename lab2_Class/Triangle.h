#pragma once
#include "Figure.h"

class Triangle : public Figure
{
private:
	int side;
	int height;

public:
	Triangle(); //Конструктор без параметров
	Triangle(int value_side,int value_height);//Конструктор с параметрами
	~Triangle(); //Деструктор
	void set(); //прототипы методов
	void print();
	float area();
};









