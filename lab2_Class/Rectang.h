#pragma once

#include "Otrezok.h"

class Rectang
{
private:
	Otrezok length;
public:
	Rectang(); //����������� ��� ����������
	Rectang(int a,int b);//����������� � �����������
	Rectang(int a);//����������� � 1 ����������
	~Rectang(); //����������
	void setRectang(); //��������� �������
	void printRectang();
	int areaRectang();
};


