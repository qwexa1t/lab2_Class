#pragma once
#include "Otrezok.h"

class Circle
{
private:
	Otrezok length;

public:
	Circle(); //����������� ��� ����������
	Circle(int a);//����������� � �����������
	~Circle(); //����������
	void setCircle(); //��������� �������
	void printCircle();
	float areaCircle();
};




