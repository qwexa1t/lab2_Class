#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include<math.h>
#include "Square.h"


Square::Square() //����������� ��� ����������
{
	side = 4;
}

Square::Square(int value_side) //����������� � �����������
{
	side = value_side;
}

Square::~Square() //����������
{
}

void Square::set()
{
	printf(" ������� �������:");
	scanf("%d", &side);
}

int Square::area()
{
	return side * side;
}

void Square::print()
{
	printf("\n ������� - %d", side);
	printf("\n ������� - %d\n", area());
}
