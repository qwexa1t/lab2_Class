#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include<math.h>
#include "Rectang.h"


Rectang initRectang(int a, int b)
{
	Rectang rectang1;
	rectang1.length.storona[0] = a;
	rectang1.length.storona[1] = b;
	return rectang1;

}

Rectang setRectang(Rectang rectang1)
{
	printf(" ������� �����:");
	scanf("%d", &rectang1.length.storona[0]);
	printf(" ������� ������:");
	scanf("%d", &rectang1.length.storona[1]);
	return rectang1;
}

int areaRectang(Rectang rectang1)
{
	int area;
	area = rectang1.length.storona[0] * rectang1.length.storona[1];
	return area;
}

void printRectang(Rectang rectang1)
{
	printf("\n ����� �������������� - %d", rectang1.length.storona[0]);
	printf("\n ������ �������������� - %d", rectang1.length.storona[1]);
	printf("\n ������� - %d\n", areaRectang(rectang1));
}
