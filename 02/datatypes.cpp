﻿const float PI = 3.14159F;
const unsigned int DAYSINTHEYEAR = 365U;
const unsigned char DAYSINTHEWEEK = 7;
int main()
{
	/* Объявление переменных.
	* Объявите следующие переменные:
	* 1. Целочисленная переменная "а";
	* 2. Беззнаковая целочисленная переменная "b";
	* 3. Целочисленная переменная "c", размером в два раза меньше, чем значение
	* типа "int";
	* 4. Целочисленную переменную "d", размером один байт;
	* 5. Вещественную переменную "e", размером 4 байта;
	*/
	int a;
	unsigned int b;
	short int c;
	char d;
	float e;

	/* Инициализация переменных.
	* Выполните инициализацию переменных следующим образом:
	* 1. Все биты значения переменной "a" должны назодиться в значении 0;
	* 2. Все биты значения переменной "b" должны находиться в значении 1;
	* 3. Переменная "c" должна содержать размер типа "long long";
	* 4. Переменная "d" должная содержать максимально возможное значение своего
	* типа;
	*/
	a = 0;
	b = 0xFFFFFFFF;
	c = sizeof(long long int);
	d = 127;

	/* Инициализация переменных с помощью литералов
	* Выполнить объявление и инициализацию переменных следующим образом
	* 1. Объявить целочисленную переменную и проинициализировать ее десятичным литералом;
	* 2. Объявить константную целочисленную переменную, размером в два раза меньше, чем int и проинициализировать ее шестнадцатиричным литералом
	* 3. Объявить константную целочисленную переменную, размером в два раза больше, чем int и проинициализировать ее восьмиричным литералом
	* 4. Объявить целочисленную переменную, размером в один байт и проинициализировать ее двоичным литералом
	* 5. Объявить переменную типа char и проинициализировать ее символом 'f'
	* 6. Объявить беззнаковую переменную любого типа и проинициализировать ее подходящим литералом
	* 7. Объявить константную целочисленную переменную, размером в два раза больше, чем int и проинициализировать ее подходящим литералом
	*/
	int a1 = 1;
	const short int A2 = 0xF;
	const long long int A3 = 07;
	char a4 = 0b101;
	char a5 = 'f';
	unsigned int a6 = 15U;
	const long long int a7 = 20LL;
	/*
	*	Какой тип переменной был бы правильным для хранения следующей информации?
	*		ваш возраст
	*		площадь ващего заднего двора
	*		количество звезд в галактике
	*		средний уровень выпадения осадков за январь
	*
	*	Создайте подходящие информативные имена переменных для хранения этой информации
	*/
	unsigned char age;
	float area;
	long double NumberOfStars;
	unsigned char JanAvRainfall;
	/*
	*	Объявите глобальную константу для числа pi, равного 3.14159
	*	Объявите переменную типа float и инициализируйте ее, используя константу pi.
	*	Объявите глобальную константу, которая содержит значения дней в году
	*	Объявите глобальную константу, которая содержит значения дней в неделе
	*	Вам необходимо посчитать количество целых недель в году.
	*	Объявите переменную подходящего типа и проинициализируйте ее с помощью ранее объявленных констант
	*/
	float pi1 = PI;
	int week = DAYSINTHEYEAR / DAYSINTHEWEEK;
	unsigned int b = DAYSINTHEYEAR;
	unsigned int b = DAYSINTHEWEEK;
}
