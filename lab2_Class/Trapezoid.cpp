#define _CRT_SECURE_NO_WARNINGS
#include "trapezoid.h"
#include <stdio.h>
#include<math.h>

Trapezoid::Trapezoid() //Конструктор без параметров
{
	lower_base = 0;
	upper_base = 0;
	height = 0;
}

Trapezoid::Trapezoid(int value_lower_base, int value_upper_base, int value_height) //Конструктор с параметрами
{
	lower_base = value_lower_base;
	upper_base = value_upper_base;
	height = value_height;
}

Trapezoid::Trapezoid(int value_lower_base) //Конструктор с 1 параметром
{
	lower_base = value_lower_base;
	upper_base = 1;
	height = 1;
}

Trapezoid::~Trapezoid() //Деструктор
{
}

void Trapezoid::set()
{
	printf(" Введите Нижнее Основание:");
	scanf("%d", &lower_base);
	printf(" Введите Верхнее Основание:");
	scanf("%d", &upper_base);
	printf(" Введите Высоту:");
	scanf("%d", &height);
}

float Trapezoid::area()
{
	return 0.5 * (lower_base + upper_base) * height;
}

void Trapezoid::print()
{
	printf("\n Нижнее Основание - %d", lower_base);
	printf("\n Верхнее Основание - %d", upper_base);
	printf("\n Высота - %d", height);
	printf("\n Площадь - %.2f\n", area());
}


