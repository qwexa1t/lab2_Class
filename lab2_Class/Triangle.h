#pragma once

class Triangle
{
private:
	int side;
	int height;

public:
	Triangle(); //����������� ��� ����������
	Triangle(int value_side,int value_height);//����������� � �����������
	~Triangle(); //����������
	void set(); //��������� �������
	void print();
	float area();
};









