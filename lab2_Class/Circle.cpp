#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include<math.h>
#define PI 3.14
#include "Circle.h"


Circle::Circle() //Конструктор без параметров
{
	length.radius[0] = 1;
}

Circle::Circle(int a) //Конструктор с параметрами
{
	length.radius[0] = a;
}

Circle::~Circle() //Деструктор
{
}

void Circle::setCircle()
{
	printf(" Введите Радиус:");
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
	printf("\n Радиус - %d", length.radius[0]);
	printf("\n Площадь - %.2f\n", areaCircle());
}
