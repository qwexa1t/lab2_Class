#pragma once

class Trapezoid
{
private:
	int lower_base;
	int upper_base;
	int height;

public:
	Trapezoid(); //Конструктор без параметров
	Trapezoid(int value_lower_base, int value_upper_base, int value_height);//Конструктор с параметрами
	Trapezoid(int value_lower_base);//Конструктор с 1 параметром
	~Trapezoid(); //Деструктор
	void set(); //прототипы методов
	void print();
	float area();
};

