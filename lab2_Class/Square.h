#pragma once
#include "Otrezok.h"

class Square
{
private:
	Otrezok length;

public:
	Square(); //Конструктор без параметров
	Square(int value_storona);//Конструктор с параметрами
	~Square(); //Деструктор
	void setSquare(); //прототипы методов
	void printSquare();
	int areaSquare();
};




