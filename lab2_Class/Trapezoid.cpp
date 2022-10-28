#define _CRT_SECURE_NO_WARNINGS
#include "trapezoid.h"
#include <stdio.h>
#include<math.h>

Trapezoid::Trapezoid() //����������� ��� ����������
{
	length.osnovanie[0] = 0;
	length.osnovanie[1] = 0;
	length.height[0] = 0;
}

Trapezoid::Trapezoid(int a, int b, int c) //����������� � �����������
{
	length.osnovanie[0] = a;
	length.osnovanie[1] = b;
	length.height[0] = c;
}

Trapezoid::Trapezoid(int a) //����������� � 1 ����������
{
	length.osnovanie[0] = a;
	length.osnovanie[1] = 1;
	length.height[0] = 1;
}

Trapezoid::~Trapezoid() //����������
{
}

void Trapezoid::setTrapezoid()
{
	printf(" ������� ������ ���������:");
	scanf("%d", &length.osnovanie[0]);
	printf(" ������� ������� ���������:");
	scanf("%d", &length.osnovanie[1]);
	printf(" ������� ������:");
	scanf("%d", &length.height[0]);
}

float Trapezoid::areaTrapezoid()
{
	float area;
	area = 0.5 * (length.osnovanie[0] + length.osnovanie[1]) * length.height[0];
	return area;
}

void Trapezoid::printTrapezoid()
{
	printf("\n ������ ��������� - %d", length.osnovanie[0]);
	printf("\n ������� ��������� - %d", length.osnovanie[1]);
	printf("\n ������ - %d", length.height[0]);
	printf("\n ������� - %.2f\n", areaTrapezoid());
}


