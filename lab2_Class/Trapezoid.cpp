#define _CRT_SECURE_NO_WARNINGS
#include "trapezoid.h"
#include <stdio.h>
#include<math.h>

Trapezoid initTrapezoid(int a, int b, int c)
{
	Trapezoid trapezoid1;
	trapezoid1.length.osnovanie[0] = a;
	trapezoid1.length.osnovanie[1] = b;
	trapezoid1.length.height[0] = c;
	return trapezoid1;
}
Trapezoid setTrapezoid(Trapezoid trapezoid1)
{
	printf(" ������� ������ ���������:");
	scanf("%d", &trapezoid1.length.osnovanie[0]);
	printf(" ������� ������� ���������:");
	scanf("%d", &trapezoid1.length.osnovanie[1]);
	printf(" ������� ������:");
	scanf("%d", &trapezoid1.length.height[0]);

	return trapezoid1;
}
float areaTrapezoid(Trapezoid trapezoid1)
{
	float area;
	area = 0.5 * (trapezoid1.length.osnovanie[0] + trapezoid1.length.osnovanie[1]) * trapezoid1.length.height[0];
	return area;
}
void printTrapezoid(Trapezoid trapezoid1)
{
	printf("\n  ������ ��������� - %d", trapezoid1.length.osnovanie[0]);
	printf("\n  ������� ��������� - %d", trapezoid1.length.osnovanie[1]);
	printf("\n  ������ - %d", trapezoid1.length.height[0]);
	printf("\n ������� - %.2f\n", areaTrapezoid(trapezoid1));
}

