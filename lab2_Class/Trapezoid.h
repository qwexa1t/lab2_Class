#pragma once
#include "Figure.h"

class Trapezoid : public Figure
{
private:
	int lower_base;
	int upper_base;
	int height;

public:
	Trapezoid(); //����������� ��� ����������
	Trapezoid(int value_lower_base, int value_upper_base, int value_height);//����������� � �����������
	Trapezoid(int value_lower_base);//����������� � 1 ����������
	~Trapezoid(); //����������
	void set(); //��������� �������
	void print();
	float area();
};

