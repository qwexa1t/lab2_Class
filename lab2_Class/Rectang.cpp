#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include<math.h>
#include "Rectang.h"

Rectang::Rectang() //����������� ��� ����������
{
	length.storona[0] = 0;
	length.storona[1] = 0;
}

Rectang::Rectang(int a,int b) //����������� � �����������
{
	length.storona[0] = a;
	length.storona[1] = b;
}

Rectang::Rectang(int a) //����������� � 1 ����������
{
	length.storona[0] = a;
	length.storona[1] = 1;
}

Rectang::~Rectang() //����������
{
}

void Rectang::setRectang()
{
	printf(" ������� �����:");
	scanf("%d", &length.storona[0]);
	printf(" ������� ������:");
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
	printf("\n ����� �������������� - %d", length.storona[0]);
	printf("\n ������ �������������� - %d", length.storona[1]);
	printf("\n ������� - %d\n", areaRectang());
}


