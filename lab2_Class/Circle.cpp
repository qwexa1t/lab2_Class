#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include<math.h>
#define PI 3.14
#include "Circle.h"


Circle::Circle() //����������� ��� ����������
{
	length.radius[0] = 1;
}

Circle::Circle(int a) //����������� � �����������
{
	length.radius[0] = a;
}

Circle::~Circle() //����������
{
}

void Circle::setCircle()
{
	printf(" ������� ������:");
	scanf("%d", &length.radius[0]);
}

float Circle::areaCircle()
{
	float area;
	area = PI * length.radius[0] * length.radius[0];
	return area;
}

void Circle::printCircle()
{
	printf("\n ������ - %d", length.radius[0]);
	printf("\n ������� - %.2f\n", areaCircle());
}
