#define _CRT_SECURE_NO_WARNINGS
#include "trapezoid.h"
#include <stdio.h>
#include<math.h>

Trapezoid::Trapezoid() //Конструктор без параметров
{
	length.osnovanie[0] = 0;
	length.osnovanie[1] = 0;
	length.height[0] = 0;
}

Trapezoid::Trapezoid(int a, int b, int c) //Конструктор с параметрами
{
	length.osnovanie[0] = a;
	length.osnovanie[1] = b;
	length.height[0] = c;
}

Trapezoid::Trapezoid(int a) //Конструктор с 1 параметром
{
	length.osnovanie[0] = a;
	length.osnovanie[1] = 1;
	length.height[0] = 1;
}

Trapezoid::~Trapezoid() //Деструктор
{
}

void Trapezoid::setTrapezoid()
{
	printf(" Введите Нижнее Основание:");
	scanf("%d", &length.osnovanie[0]);
	printf(" Введите Верхнее Основание:");
	scanf("%d", &length.osnovanie[1]);
	printf(" Введите Высоту:");
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
	printf("\n Нижнее Основание - %d", length.osnovanie[0]);
	printf("\n Верхнее Основание - %d", length.osnovanie[1]);
	printf("\n Высота - %d", length.height[0]);
	printf("\n Площадь - %.2f\n", areaTrapezoid());
}


