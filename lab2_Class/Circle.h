#pragma once

class Circle
{
private:
	int radius;

public:
	Circle(); //Конструктор без параметров
	Circle(int value_radius);//Конструктор с параметрами
	~Circle(); //Деструктор
	void set(); //прототипы методов
	void print();
	float area();
};




