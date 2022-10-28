#pragma once

#include "Otrezok.h"

class Trapezoid
{
private:
	Otrezok length;

public:
	Trapezoid(); //����������� ��� ����������
	Trapezoid(int a, int b, int c);//����������� � �����������
	Trapezoid(int a);//����������� � 1 ����������
	~Trapezoid(); //����������
	void setTrapezoid(); //��������� �������
	void printTrapezoid();
	float areaTrapezoid();
};

