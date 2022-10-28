#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <locale>
#include <math.h>
#include <cstring>
#include <windows.h>
#include <ctype.h>
#include "Square.h"
#include "Otrezok.h"
#include "Rectang.h"
#include "Triangle.h"
#include "Trapezoid.h"
#include "Circle.h"

int main()
{
	setlocale(LC_ALL, "Russian");
	//Подключение Русского языка
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int N;

	do
	{
		printf("\n Программа для вычисления площади различных фигур");
		printf("\n Выберите фигуру: ");
		printf("\n 1) Квадрат");
		printf("\n 2) Прямоугольник");
		printf("\n 3) Треугольник");
		printf("\n 4) Трапеция");
		printf("\n 5) Круг");
		printf("\n 6) Завершить программу");
		printf("\n\n Введите номер фигуры: ");
		while (scanf("%d", &N) != 1 || N <= 0 || N > 6)
		{
			while (getchar() != '\n');
			printf("\n Вы ввели Неверный номер. Повторите попытку.\n");
			printf("\n Введите номер фигуры: ");
		}
		switch (N)
		{
		 case 1:
		 {
			printf("\n Вы выбрали квадрат \n");
			printf("\n Пример \n");
			//Вызов конструктора без параметров
			Square* square1 = new Square; //Выделение Динамической памяти объекту класса Square
			(*square1).printSquare(); //Вывод площади квадрата на экран
			printf("\n\n Введите данные: \n\n");
			(*square1).setSquare(); //Установка значений
			(*square1).printSquare();
			delete square1; //Освобождение памяти 
			break;
		 }
		 case 2:
		 {
			 printf("\n Вы выбрали Прямоугольник \n");
			 printf("\n Пример \n");
			 //Вызов конструктора с 2 параметрами
			 Rectang* rectang1 = new Rectang(2,6); //Выделение Динамической памяти объекту класса Rectang
			 rectang1->printRectang(); //Вывод площади квадрата на экран
			 printf("\n\n Введите данные: \n\n");
			 rectang1->setRectang(); //Установка значений
			 rectang1->printRectang();
			 delete rectang1; //освобождение памяти
			 break;
		 }
		 case 3:
		 {
			break;
		 }
		 case 4:
		 {
			break;
		 }
		 case 5:
		 {
			break;
		 }

		}

	} while (N != 6);
}