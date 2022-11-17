#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include<math.h>
#include "Square.h"


Square::Square() //Конструктор без параметров
{
	side = 4;
}

Square::Square(int value_side) //Конструктор с параметрами
{
	side = value_side;
}

Square::~Square() //Деструктор
{
}

void Square::set()
{
	printf(" Введите сторону:");
	scanf("%d", &side);
}

int Square::area()
{
	return side * side;
}

void Square::print()
{
	printf("\n Сторона - %d", side);
	printf("\n Площадь - %d\n", area());
}
