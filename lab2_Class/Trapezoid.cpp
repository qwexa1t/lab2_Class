#define _CRT_SECURE_NO_WARNINGS
#include "trapezoid.h"
#include <stdio.h>
#include<math.h>

Trapezoid::Trapezoid() //����������� ��� ����������
{
	lower_base = 0;
	upper_base = 0;
	height = 0;
}

Trapezoid::Trapezoid(int value_lower_base, int value_upper_base, int value_height) //����������� � �����������
{
	lower_base = value_lower_base;
	upper_base = value_upper_base;
	height = value_height;
}

Trapezoid::Trapezoid(int value_lower_base) //����������� � 1 ����������
{
	lower_base = value_lower_base;
	upper_base = 1;
	height = 1;
}

Trapezoid::~Trapezoid() //����������
{
}

void Trapezoid::set()
{
	printf(" ������� ������ ���������:");
	scanf("%d", &lower_base);
	printf(" ������� ������� ���������:");
	scanf("%d", &upper_base);
	printf(" ������� ������:");
	scanf("%d", &height);
}

float Trapezoid::area()
{
	return 0.5 * (lower_base + upper_base) * height;
}

void Trapezoid::print()
{
	printf("\n ������ ��������� - %d", lower_base);
	printf("\n ������� ��������� - %d", upper_base);
	printf("\n ������ - %d", height);
	printf("\n ������� - %.2f\n", area());
}


