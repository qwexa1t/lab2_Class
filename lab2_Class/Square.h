#pragma once
#include "Otrezok.h"

class Square
{
private:
	char color[20];
	Otrezok length;

public:
	Square(); //Конструктор без параметров
	Square(int value_storona);//Конструктор с параметрами
	~Square(); //Деструктор
	void setSquare(); //прототипы методов
	void printSquare();
	int areaSquare();
};




