#pragma once

class Circle
{
private:
	int radius;

public:
	Circle(); //����������� ��� ����������
	Circle(int value_radius);//����������� � �����������
	~Circle(); //����������
	void set(); //��������� �������
	void print();
	float area();
};




