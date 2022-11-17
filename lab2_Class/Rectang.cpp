#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include<math.h>
#include "Rectang.h"

Rectang::Rectang() //Конструктор без параметров
{
	length = 0;
	width = 0;
}

Rectang::Rectang(int value_length,int value_width) //Конструктор с параметрами
{
	length = value_length;
	width = value_width;
}

Rectang::Rectang(int value_length) //Конструктор с 1 параметром
{
	length = value_length;
	width = 1;
}

Rectang::~Rectang() //Деструктор
{
}

void Rectang::set()
{
	printf(" Введите Длину:");
	scanf("%d", &length);
	printf(" Введите Ширину:");
	scanf("%d", &width);
}

int Rectang::area()
{
	return length * width;
}

void Rectang::print()
{
	printf("\n Длина прямоугольника - %d", length);
	printf("\n Ширина прямоугольника - %d", width);
	printf("\n Площадь - %d\n", area());
}


