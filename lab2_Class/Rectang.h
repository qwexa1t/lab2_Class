#pragma once

class Rectang
{
private:
	int length;
	int width;

public:
	Rectang(); //����������� ��� ����������
	Rectang(int value_length,int value_width);//����������� � �����������
	Rectang(int value_length);//����������� � 1 ����������
	~Rectang(); //����������
	void set(); //��������� �������
	void print();
	int area();
};


