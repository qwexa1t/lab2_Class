#pragma once

#include "Otrezok.h"

class Rectang
{
public:
	char color[20];
	Otrezok length;

	//��������� �������
	Rectang initRectang(int a, int b);
	Rectang setRectang(Rectang rectang1);
	int areaRectang(Rectang rectang1);
	void printRectang(Rectang rectang1);

};

