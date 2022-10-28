#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include<math.h>
#include "Square.h"


Square::Square() //Конструктор без параметров
{
	length.storona[0] = 4;

}

Square::Square(int value_storona) //Конструктор с параметрами
{
	length.storona[0] = value_storona;

}

Square::~Square() //Деструктор
{

}

void Square::setSquare()
{
	printf(" Введите сторону:");
	scanf("%d", &length.storona[0]);
}

int Square::areaSquare()
{
	int area;
	area = length.storona[0] * length.storona[0];
	return area;
}

void Square::printSquare()
{
	printf("\n Сторона - %d", length.storona[0]);
	printf("\n Площадь - %d\n", areaSquare());
}
