#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include<math.h>
#include "Rectang.h"

Rectang::Rectang() //����������� ��� ����������
{
	length = 0;
	width = 0;
}

Rectang::Rectang(int value_length,int value_width) //����������� � �����������
{
	length = value_length;
	width = value_width;
}

Rectang::Rectang(int value_length) //����������� � 1 ����������
{
	length = value_length;
	width = 1;
}

Rectang::~Rectang() //����������
{
}

void Rectang::set()
{
	printf(" ������� �����:");
	scanf("%d", &length);
	printf(" ������� ������:");
	scanf("%d", &width);
}

int Rectang::area()
{
	return length * width;
}

void Rectang::print()
{
	printf("\n ����� �������������� - %d", length);
	printf("\n ������ �������������� - %d", width);
	printf("\n ������� - %d\n", area());
}


