#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include<math.h>
#include "Triangle.h"

Triangle::Triangle() //����������� ��� ����������
{
	length.storona[0] = 0;
	length.height[0] = 0;
}

Triangle::Triangle(int a,int b) //����������� � �����������
{
	length.storona[0] = a;
	length.height[0] = b;
}

Triangle::~Triangle() //����������
{
}

void Triangle::setTriangle()
{
	printf(" ������� �������:");
	scanf("%d", &length.storona[0]);
	printf(" ������� ������:");
	scanf("%d", &length.height[0]);
}

float Triangle::areaTriangle()
{
	float  area;
	area = 0.5 * length.storona[0] * length.height[0];
	return area;
}

void Triangle::printTriangle()
{
	printf("\n ������� - %d", length.storona[0]);
	printf("\n ������ - %d", length.height[0]);
	printf("\n ������� - %.2f\n", areaTriangle());
}


