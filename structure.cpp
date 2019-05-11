#include <iostream>
#include <limits>
#include <string>
#include "Extention.hpp"
using namespace std;
using namespace ext;
enum Color
{
	Red,
	Orange,
	Yellow,
	Green,
	Blue,
	Indigo,
	Violet,
};
struct Triangle
{
	Color color;
	int st[3];
};
struct Point
{
	float x;
	float y;
};
struct Circle
{
	int R;
	Point p;
};
struct Date
{
	int day;
	int month;
	int year;
};
int main()
{
	setlocale(0, "");
	/*
	Задание №1
	Создать структуру Point, содержащую два поля x, y типа float.
	Создать и проинициализировать переменную типа Point.
	Создать переменную типа Point и проинициализировать ее данными с клавиатуры.
	Вывести на экран значения x, y вышеобъявленных переменных.
	Написать программу, которая определеяет принадлежит ли заданная точка кругу заданного радиуса.
	Координаты точки и радиус пользователь вводит с клавиатуры.
	Для хранения координат точки использовать структуру Point.
	Написать программу, которая по двум заданным точкам - концам отрезка находит точку середины отрезка.
	Координаты точек пользователь вводит с клавиатуры.
	Для хранения координат точек использовать структуру Point.
	Рассчитанную точку середины отрезка также хранить как структуру Point.
	Вывести координаты полученной точки в консоль.
	*/
	Point point1 = { 10,10 };
	Point point2;
	cin >> point2.x >> point2.y;
	cout << point1.x << " " << point2.x << endl;
	int r;
	cin >> r;
	Point point3;
	cin >> point3.x >> point3.y;
	if (point3.x*point3.x + point3.y*point3.y > r*r)
	{
		cout << "Точка не принадлежит окружности" << endl;
	}
	else
	{
		cout << "Точка принадлежит окружности" << endl;

	}
	Point point4;
	Point point5;
	cin >> point4.x >> point4.y;
	cin >> point5.x >> point5.y;
	Point middlepoint;
	middlepoint.x = (point4.x + point5.x) / 2;
	middlepoint.y = (point4.y + point5.y) / 2;
	cout << middlepoint.x << " " << middlepoint.y;
	/*
	Задание №2
	Создать структуру Circle, содержащую одно поле типа int - радиус и второе поле типа Point - центр окружности.
	Создать и проинициализировать переменную типа Circle.
	Создать переменную типа Circle и проинициализировать ее данными введенными с клавиатуры.
	Вывести на экран данные, сохраненные в вышеобъявленных переменных.
	Даны две переменные типа Circle.
	Написать программу, которая определяет пересекаются ли окружности,
	описанные данными переменными.
	*/
	Circle circle = { 10,{ 2,2 } };
	Circle circle1;
	cin >> circle1.R >> circle1.p.x >> circle1.p.y;
	cout << circle.R << " " << circle.p.x << " " << circle.p.y << endl;
	cout << circle1.R << " " << circle1.p.x << " " << circle1.p.y << endl;
	float length;
	length = sqrt((circle.p.x - circle1.p.x)*(circle.p.x - circle1.p.x) + (circle.p.y - circle1.p.y)*(circle.p.y - circle1.p.y));
	if ((abs(circle.R) + abs(circle1.R)) < length)
	{
		cout << "Окружности не пересекаются" << endl;
	}
	else
	{
		cout << "Окружности пересекаются"<< endl;
	}

	/*
	Задание №3
	Создать перечисление (enum) Color, для хранения 7 цветов радуги.
	Создать структуру Triangle, содержащее поле типа Color
	и массив для хранения трех элементов типа int (длины сторон).
	Создать и проинициализировать переменную типа Triangle корректными данными.
	Вывести на экран данные, сохраненные в вышеобъявленной переменной.
	Значение поля Color вывести в текстовом виде. (использовать конструкцию switch).
	Рассчитать и вывести на экран периметр вышеобъявленного треугольника.
	*/
	Triangle triangle = { Blue, {3,4,5} };
	cout << triangle.color << " " << triangle.st[0] << triangle.st[1] << triangle.st[2] << endl;
	switch (triangle.color)
	{
	case 0:
		cout <<"Red" << endl;
		break;
	case 1:
		cout <<"Orange" << endl;
		break;
	case 2:
		cout <<"Yellow" << endl;
		break;
	case 3:
		cout <<"Green" << endl;
		break;
	case 4:
		cout <<"Blue" << endl;
		break;
	case 5:
		cout <<"Indigo" << endl;
		break;
	case 6:
		cout <<"Violet" << endl;
		break;
	}
	int p = triangle.st[0] + triangle.st[1] + triangle.st[2];
	cout << p << endl;
	/*
	Задание №4
	Создать массив из 20 элеметнов типа Point.
	Проинициализировать его точками со случайными значениями координат в пределах от 0 до 100.
	Выведите на экран координаты:
	- точки с наименьшей x координатой
	- двух точек, расстояние между которыми минимально.
	*/
	Point point6[20];
	float minx = 100;
	for (int i = 0; i < 20; ++i)
	{
		point6[i].x = GetRandomValue(0, 100, true);
		point6[i].y = GetRandomValue(0, 100, true);
		if (point6[i].x < minx) minx = point6[i].x;
	}
	for (int i = 0; i < 20; ++i)
	{
		if (minx == point6[i].x)
		{
			cout << point6[i].x << point6[i].y << endl;
			break;
		}
	}
	float minl = numeric_limits<float>::max();
	float l, l1;
	for (int i = 0; i < 20; ++i)
	{
		for (int j = 0; j < 20; ++j)
		{
			l = sqrt((point6[i].x - point6[j].x)*(point6[i].x - point6[j].x) + (point6[i].y - point6[j].y)*(point6[i].y - point6[j].y));
			if ((l < minl) && (i!=j))
			{
				minl = l;
			}
		}
	}
	for (int i = 0; i < 20; ++i)
	{
		for (int j = 0; j < 20; ++j)
		{
			l = sqrt((point6[i].x - point6[j].x)*(point6[i].x - point6[j].x) + (point6[i].y - point6[j].y)*(point6[i].y - point6[j].y));
			if (l == minl)
			{
				cout << point6[i].x << point6[i].y << endl;
				cout << point6[j].x << point6[j].y << endl;
				break;
			}
		}
	}
		/*
		Задание №5
		Создать массив из 100 элементов типа Triangle.
		Проинициализировать его случайными значениями (длина стороны от 1 до 10).
		При инициализации проверять, что треугольник с такими длинами сторон может существовать.
		(Длина каждой стороны должна быть строго меньше длин суммы двух других сторон).
		Обработать полученный массив треугольников и вывести на экран следующую информацию:
		- вывести на экран все треугольники, периметр которых превышает значение, введенное с клавиатуры.
		Если подходящих треугольников нет, вывести соответствующее сообщение.
		- количество треугольников каждого цвета
		*/
	Triangle arrtriangle[100];
	for (int i = 0; i < 100; ++i)
	{
		while ((arrtriangle[i].st[0] > arrtriangle[i].st[1] + arrtriangle[i].st[2]) || (arrtriangle[i].st[1] > arrtriangle[i].st[0] + arrtriangle[i].st[2]) || (arrtriangle[i].st[2] > arrtriangle[i].st[1] + arrtriangle[i].st[0]))
	{
	arrtriangle[i].st[0] = GetRandomValue(0, 10, true);
	arrtriangle[i].st[1] = GetRandomValue(0, 10, true);
	arrtriangle[i].st[2] = GetRandomValue(0, 10, true);
	}
	}
	int per;
	cin >> per;
	for (int i = 0; i < 100; ++i)
	{
		if (per < arrtriangle[i].st[0] + arrtriangle[i].st[1] + arrtriangle[i].st[2])
		{
			cout << arrtriangle[i].st[0] << " " << arrtriangle[i].st[1] << " " << arrtriangle[i].st[2] << endl;
		}
	}
		/*
		Задание №6
		Написать программу, которая проверяет правильность заданных значений даты.
		Дату хранить с использованием структуры.
		Тестовые данные				Ожидаемый результат
		1 1 1992					Дата корректна
		30 6 1992					Дата корректна
		31 7 1992					Дата коррентна
		31 9 1994					Дата некорректна
		32 1 1992					Дана некорректна
		1 13 1992					Дата некорректна
		29 2 1993					Дата некорректна
		29 2 2004					Дата корректна
		29 2 1900					Дата некоррентна
		29 2 2000					Дата корректна
		*/
		Date date;
	bool result = false;
	cin >> date.day >> date.month >> date.year;
	bool IsLeapYear = (date.year % 400 == 0) || (date.year % 100 != 0) && (date.year % 4 == 0);
	switch (date.month)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		if (date.day <= 31) result = true;
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		if (date.day <= 30) result = true;
		break;
	case 2:
		if ((IsLeapYear && date.day <= 29) || (!IsLeapYear && date.day <= 28)) result = true;
		break;
	}
	if (result == true)
	{
		cout << "Дата корректна" << endl;
	}
	else
	{
		cout << "Дата некоррентна" << endl;

	}
}
