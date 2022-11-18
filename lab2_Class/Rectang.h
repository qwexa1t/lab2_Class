#pragma once
#include "Figure.h"

class Rectang : public Figure
{
private:
	int length;
	int width;

public:
	Rectang(); //Конструктор без параметров
	Rectang(int value_length,int value_width);//Конструктор с параметрами
	Rectang(int value_length);//Конструктор с 1 параметром
	~Rectang(); //Деструктор
	void set(); //прототипы методов
	void print();
	float area();
};


