#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include<math.h>
#include "Triangle.h"

Triangle::Triangle() //Конструктор без параметров
{
	side = 0;
	height = 0;
}

Triangle::Triangle(int value_side,int value_height) //Конструктор с параметрами
{
	side = value_side;
	height = value_height;
}

Triangle::~Triangle() //Деструктор
{
}

void Triangle::set()
{
	printf(" Введите сторону:");
	scanf("%d", &side);
	printf(" Введите Высоту:");
	scanf("%d", &height);
}

float Triangle::area()
{
	return 0.5 * side * height;
}

void Triangle::print()
{
	printf("\n Сторона - %d", side);
	printf("\n Высота - %d", height);
	printf("\n Площадь - %.2f\n", area());
}


