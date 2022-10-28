#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include<math.h>
#include "Triangle.h"

Triangle::Triangle() //Конструктор без параметров
{
	length.storona[0] = 0;
	length.height[0] = 0;
}

Triangle::Triangle(int a,int b) //Конструктор с параметрами
{
	length.storona[0] = a;
	length.height[0] = b;
}

Triangle::~Triangle() //Деструктор
{
}

void Triangle::setTriangle()
{
	printf(" Введите сторону:");
	scanf("%d", &length.storona[0]);
	printf(" Введите Высоту:");
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
	printf("\n Сторона - %d", length.storona[0]);
	printf("\n Высота - %d", length.height[0]);
	printf("\n Площадь - %.2f\n", areaTriangle());
}


