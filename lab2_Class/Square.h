#pragma once

class Square
{
private:
	int side;

public:
	Square(); //����������� ��� ����������
	Square(int value_side);//����������� � �����������
	~Square(); //����������
	void set(); //��������� �������
	void print();
	int area();
};




