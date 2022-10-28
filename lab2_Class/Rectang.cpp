#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include<math.h>
#include "Rectang.h"

Rectang::Rectang() //Конструктор без параметров
{
	length.storona[0] = 0;
	length.storona[1] = 0;
}

Rectang::Rectang(int a,int b) //Конструктор с параметрами
{
	length.storona[0] = a;
	length.storona[1] = b;
}

Rectang::Rectang(int a) //Конструктор с 1 параметром
{
	length.storona[0] = a;
	length.storona[1] = 1;
}

Rectang::~Rectang() //Деструктор
{
}

void Rectang::setRectang()
{
	printf(" Введите Длину:");
	scanf("%d", &length.storona[0]);
	printf(" Введите Ширину:");
	scanf("%d", &length.storona[1]);
}

int Rectang::areaRectang()
{
	int area;
	area = length.storona[0] * length.storona[1];
	return area;
}

void Rectang::printRectang()
{
	printf("\n Длина прямоугольника - %d", length.storona[0]);
	printf("\n Ширина прямоугольника - %d", length.storona[1]);
	printf("\n Площадь - %d\n", areaRectang());
}


