#pragma once
#include "Otrezok.h"

class Square
{
private:
	Otrezok length;

public:
	Square(); //����������� ��� ����������
	Square(int value_storona);//����������� � �����������
	~Square(); //����������
	void setSquare(); //��������� �������
	void printSquare();
	int areaSquare();
};




