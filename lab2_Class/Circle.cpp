#define _CRT_SECURE_NO_WARNINGS
#include "Circle.h"
#include <stdio.h>
#include<math.h>
#define PI 3.14

�ircle init�ircle(int a)
{
	�ircle circle1;
	circle1.length.radius[0] = a;
	return circle1;
}
�ircle set�ircle(�ircle circle1)
{
	printf(" ������� ������:");
	scanf("%d", &circle1.length.radius[0]);
	return circle1;
}
float area�ircle(�ircle circle1)
{
	float area;
	area = PI * circle1.length.radius[0] * circle1.length.radius[0];
	return area;
}
void print�ircle(�ircle circle1)
{
	printf("\n ������ - %d", circle1.length.radius[0]);
	printf("\n ������� - %.2f\n", area�ircle(circle1));
}


