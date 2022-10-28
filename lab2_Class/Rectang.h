#pragma once

#include "Otrezok.h"

class Rectang
{
private:
	Otrezok length;
public:
	Rectang(); //Конструктор без параметров
	Rectang(int a,int b);//Конструктор с параметрами
	Rectang(int a);//Конструктор с 1 параметром
	~Rectang(); //Деструктор
	void setRectang(); //прототипы методов
	void printRectang();
	int areaRectang();
};


