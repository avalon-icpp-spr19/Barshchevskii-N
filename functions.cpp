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
	������� �1
	�������� �������, ������� ������� � ������� ���� ������ 10 ����������� �����.
	�������� � ���������� ������ �������� n, ����� ��� �������� ���� n ������ ������ ����������� �����.
	������� �2
	�������� �������, ������� ��������� ����� ��������.
	�� ����������� ������ ���� ����� � ������, ������� �������� � ����������.
	������� �3
	�������� ������� min(a, b), ����������� ������� ���� �����.
	����� �������� ������� min4(a, b, c, d), ����������� ������� 4 ����� � ������� ������� min.
	�������� ������ ����� ����� �� ������� � �������� �� �������.
	�������� ������				��������� ���������
	1 2 3 4						1
	4 3 2 1						1
	9 5 1 7						1
	7 3 5 9						3
	������� �4
	�������� � ������ ���� Date.hpp
	����������� ������� ������� ��������� � ����� Date.hpp
	��� ���������� ������� ����� ������������ ���� ��������������� �������.
	������������������ ������ ���� ���������� ������� � main().
	*/
	cube();

	int n;
	cout << endl;
	cout << "n:";
	cin >> n;
	cubeN(n);
	cout << endl;


	int r, h;
	cout << "������:";
	cin >> r;
	cout << "������:";
	cin >> h;
	double v1 = CylinderVolume(r, h);
	cout << "�����: " << v1 << endl;
	cout << endl;

	int a1, b1, min1;
	cout << "a:";
	cin >> a1;
	cout << "b:";
	cin >> b1;
	min1 = min(a1, b1);
	cout << "�����������:" << min1 << endl;
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
	cout << "�����������:" << min << endl;

}
