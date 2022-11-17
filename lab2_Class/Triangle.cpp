#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include<math.h>
#include "Triangle.h"

Triangle::Triangle() //����������� ��� ����������
{
	side = 0;
	height = 0;
}

Triangle::Triangle(int value_side,int value_height) //����������� � �����������
{
	side = value_side;
	height = value_height;
}

Triangle::~Triangle() //����������
{
}

void Triangle::set()
{
	printf(" ������� �������:");
	scanf("%d", &side);
	printf(" ������� ������:");
	scanf("%d", &height);
}

float Triangle::area()
{
	return 0.5 * side * height;
}

void Triangle::print()
{
	printf("\n ������� - %d", side);
	printf("\n ������ - %d", height);
	printf("\n ������� - %.2f\n", area());
}


