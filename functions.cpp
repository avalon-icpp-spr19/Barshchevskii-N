#include <iostream>
#include <cmath>
#include "Header.hpp"
using namespace std;

void cube()
{
	for (int i = 1; i < 11; ++i)
	{
		cout << pow(i, 3) << endl;
	}

}
void cubeN(int n)
{
	for (int i = 1; i < n+1; ++i)
	{
		cout << pow(i, 3) << endl;
	}
}
double CylinderVolume(int a, int b)
{
	double S, V;
	S = 3.14 * pow(a, 2);
	V = S * b;
	return V;
}
int min(int a, int b)
{
	int temp;
	if (a > b)
	{
		temp = b;
	}
	else
	{
		temp = a;
	}
	return temp;
}
int min4(int a, int b, int c, int d)
{
	int temp;
	temp = min(a, b);
	temp = min(temp, c);
	temp = min(temp, d);
	return temp;
}
int main()
{
	setlocale(0, "");
	/*
	Задание №1
	Написать функцию, которая выводит в консоль кубы первых 10 натуральных чисел.
	Довавьте в написанную функию параметр n, чтобы она выводила кубы n первых первых натуральных чисел.
	Задание №2
	Напишите функцию, которая вычисляет объем цилиндра.
	Ее параметрами должны быть радус и высота, которые вводятся с клавиатуры.
	Задание №3
	Напишите функцию min(a, b), вычисляющую минимум двух чисел.
	Затем напишите функцию min4(a, b, c, d), вычисляющую минимум 4 чисел с помощью функции min.
	Считайте четыре целых числа из консоли и выведите их минимум.
	Тестовые данные				Ожидаемый результат
	1 2 3 4						1
	4 3 2 1						1
	9 5 1 7						1
	7 3 5 9						3
	Задание №4
	Добавить в проект файл Date.hpp
	Реализовать функции которые объявлены в файле Date.hpp
	При выполнении задания можно использовать свои вспомогательные функции.
	Продемонстрировать работы всех написанных функций в main().
	*/
	cube();

	int n;
	cout << endl;
	cout << "n:";
	cin >> n;
	cubeN(n);
	cout << endl;


	int r, h;
	cout << "Радиус:";
	cin >> r;
	cout << "Высота:";
	cin >> h;
	double v1 = CylinderVolume(r, h);
	cout << "Объём: " << v1 << endl;
	cout << endl;

	int a1, b1, min1;
	cout << "a:";
	cin >> a1;
	cout << "b:";
	cin >> b1;
	min1 = min(a1, b1);
	cout << "Минимальное:" << min1 << endl;
	cout << endl;

	int a, b, c, d, min;
	cout << "a:";
	cin >> a;
	cout << "b:";
	cin >> b;
	cout << "c:";
	cin >> c;
	cout << "d:";
	cin >> d;
	min = min4(a, b, c, d);
	cout << "Минимальное:" << min << endl;

}
