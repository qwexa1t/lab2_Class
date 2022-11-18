#pragma once
#include "Figure.h"

class Circle : public Figure
{
private:
	int radius;

public:
	Circle(); //����������� ��� ����������
	Circle(int value_radius);//����������� � �����������
	~Circle(); //����������
	void set(); //��������� �������
	void print();
	float area();
};




