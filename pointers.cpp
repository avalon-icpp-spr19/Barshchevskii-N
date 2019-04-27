#include <iostream>
#include <limits>
#include <string>
#include "Extention.hpp"
using namespace std;
using namespace ext;
int main()
{
	/*
	Задание №1
	int val = 10;
	выведите адрес переменной val
	cout << &val << endl;
	создайте указатель для хранения адреса переменной val
	int * ptr = &val;
	сохраните адрес переменной val в созданный указатель
	ptr = &val;
	выведите значение переменной val, используя указатель
	cout << *ptr << endl;
	Пусть объявлены следующие переменные:
	unsigned int a = 5U;
	double b = 0.8;
	const float f = 0.5F;
	const long long ll = 123LL;
	Объявите и проинициализируйте указатели на вышеобъявленные переменные.
	unsigned int * ptra = &a;
	double  * ptrb = &b;
	const float * ptrf = &f;
	const long long * ptrll = &ll;
	Какой размер имеют объявленные указатели? Проверьте с помощью оператора sizeof
	4
	С помощью объявленных указателей:
	увеличьте значение переменной a на 1
	*ptra = *ptra + 1;
	присвойте переменной b значение 0.25
	*ptrb = 0.25;
	выведите удвоенное значение переменной f
	*ptrf = *ptrf * 2;
	выведите посчитайте остатот от деления на 10 переменной ll
	cout << *ptrll % 10 << endl;
	Задание №2
	Что выведет на экран следующий код?
	Прокоментируйте каждую строку, запишите промежуточные значения переменных.
	#include <iostream>
	using namespace std;
	int main()
	{
	int t[4] = {8,4,2,1}; инициализация целочисленного массива из 4-х элементов
	int *p1 = t + 2, *p2 = p1 - 1; инициализация указателей, в к которых им присваивается элемент массива(нулевой элемент +- число)
	p1++; указателю присваивается следующий элемент массива
	cout << *p1 - t[p1 - p2] << endl; от значения последнего элемента массива вычитается разность его индексов, на которые указывают указатели p1 и p2
	}
	int data[] = {1,2,3,4,5};
	Объявите указатель на первый элемент массива
	С помощью цикла for и объвленного указателя выведите каждый элемент массива в консоль.
	С помощью цикла for и объвленного указателя увеличьте каждый элемент массива в 2 раза
	и посчитайте сумму получившихся элементов массива.
	Выведите полученный результат.
	*/
	int data[] = { 1,2,3,4,5 };
	int * ptrd = data;
	for (int i = 0; i < 5; ++i)
	{
		ptrd = data + i;
		cout << *ptrd << endl;
	}
	int sum = 0;
	for (int i = 0; i < 5; ++i)
	{
		ptrd = data + i;
		*ptrd = *ptrd + 2;
		sum = sum + *ptrd;
	}
	cout << sum << endl;
	cout << endl;
	/*
	Заданий №3
	1.	Сгенерировать массив из 20 рандомных элементов из диапазона [-100, 100].
	2.	Объявите указатель на первый элемент массива.
	3.	С помощью цикла for и объявленного указателя выведите массив в консоль.
	4.	Используя дополнительный указатель найдите максимальный элемент массива.
	5.	Выведите его индекс и значение. (Для вывода индекса использовать арифметику указателей).
	При обходе массива использовать указатели, запрещено обращаться к элементам массива по индексам.
	*/
	int arr3[20];
	for (int i = 0; i < 20; ++i)
	{
		arr3[i] = GetRandomValue(-100, 100, true);
	}
	int *ptrd3 = arr3;
	for (int i = 0; i < 20; ++i)
	{
		ptrd3 = arr3 + i;
		cout << *ptrd3 << endl;
	}
	int *maxptr3 = arr3;
	int ind;
	for (int i = 0; i < 20; ++i)
	{ 
		ptrd3 = arr3 + i;
		if (*maxptr3 < *ptrd3)
		{
			maxptr3 = ptrd3;
			ind = i;
		}
	}
	cout << *maxptr3 << endl;
	cout << ind << endl;

	/*
	Задание №4
	Пусть задан некоторый символьный массив, проинициализированный строковым литералом.
	Например const char data[] = "abcdefghijklmnopqrstuvwxyz";
	Пользователь вводит с клавиатуры один символ.
	Необходимо вывести позицию, на которой введенный пользователем символ встретился первый раз.
	Если введенного символа в строке нет вывести -1.
	Тестовые данные			Ожидаемый результат
	d				4
	z				26
	!				-1
	*/
	const char data1[] = "abcdefghijklmnopqrstuvwxyz";
	char symb;
	int ind4;
	cin >> symb;
	const char *ptrd4 = data1;
	for (int i=0; i < 26; i++)
	{
		if (symb == *(ptrd4 + i))
		{
			ind4 = i + 1;
			break;
		}
		else
		{
			ind4 = -1;
		}
	}
	cout << ind4 << endl;

	/*
	Задание №5
	Написать программу, которая сравнивает две строки, которые вводит пользователь.
	Сравнение реализовать посимвольно.
	Если введенные строки равны, вывести 1, если строки не равны вывести 0.
	Строки могут быть разных размеров. Размер введенной строки не может превышать 256 символов.
	Строки, введенные пользователем можно получить следующим образом:
	#include <iostream>
	using namespace std;
	int main()
	{
	char line[256];
	cin.getline(line, 256);
	}
	*/
		int n = 1;
	char l1[256];
	cin.getline(l1, 256);
	char l2[256];
	cin.getline(l2, 256);
	char * ptr5_1 = l1;
	char * ptr5_2 = l2;
	while (*ptr5_1 != '\0' || *ptr5_2 != '\0')
	{
		if (*ptr5_1 != *ptr5_2)
		{
			n = 0;
		}
		++ptr5_1;
		++ptr5_2;
	}
	cout << n;
}
