#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include<math.h>
#include "Square.h"


Square::Square() //����������� ��� ����������
{
	length.storona[0] = 4;

}

Square::Square(int value_storona) //����������� � �����������
{
	length.storona[0] = value_storona;

}

Square::~Square() //����������
{

}

void Square::setSquare()
{
	printf(" ������� �������:");
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
	printf("\n ������� - %d", length.storona[0]);
	printf("\n ������� - %d\n", areaSquare());
}
