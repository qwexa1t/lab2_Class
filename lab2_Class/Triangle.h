#pragma once
#include "Otrezok.h"

class Triangle
{
private:
	Otrezok length;

public:
	Triangle(); //����������� ��� ����������
	Triangle(int a,int b);//����������� � �����������
	~Triangle(); //����������
	void setTriangle(); //��������� �������
	void printTriangle();
	float areaTriangle();
};









