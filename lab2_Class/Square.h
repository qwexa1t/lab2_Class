#pragma once
#include "Otrezok.h"

class Square
{
private:
	char color[20];
	Otrezok length;

public:
	Square(); //����������� ��� ����������
	Square(int value_storona);//����������� � �����������
	~Square(); //����������
	void setSquare(); //��������� �������
	void printSquare();
	int areaSquare();
};




