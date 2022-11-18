#pragma once
#include "Figure.h"

class Square: public Figure
{
private:
	int side;

public:
	Square(); //����������� ��� ����������
	Square(int value_side);//����������� � �����������
	~Square(); //����������
	void set(); //��������� �������
	void print();
	float area();
};




