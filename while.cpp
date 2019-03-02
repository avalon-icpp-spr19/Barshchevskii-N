#include <iostream>

using namespace std;

int main()
{	
	/*
	������� 1
	��������� �������� �� ���� ������������������ ����� ��������������� �����,
	������ ����� �������� ��������. ������������������ ����������� ������ 0,
	��� ���������� �������� ��������� ������ ��������� ���� ������.
	�������� ���������� � ���������� ������� ������ ������������������
	�������� ������       ��������� ���������
	1 2 -3 4 -5 0					-5 4
	1 9 -3 -3 2 1	0				-3 9
	1 2 5 4 3 5 4 5 0			1 5
	*/
	int min1 = 1000000;
	int max1 = -1000000;
	while (true)
	{
		int number;
		cin >> number;
		if (number == 0) break;
		if (number < min1) min1 = number;
		if (number > max1) max1 = number;
	}
	cout << min1 << ' ' << max1 << endl;
	/*
	������� 2
	��������� �������� �� ���� ������������������ ����� ��������������� �����,
	������ ����� �������� ��������. ������������������ ����������� ������ 0,
	��� ���������� �������� ��������� ������ ��������� ���� ������.
	����������, ����� ���������� ��������� ���� ������������������, ����� �� ����������� ��������.
	������ ������� ������
	�������� ������������������ ����������� �����, �������������� ������ 0
	(���� ����� 0 � ������������������ �� ������, � ������ ��� ������� �� ���������).
	�������� ������				��������� ���������
	1 2 3 4 5 0					  1
	1 2 3 3 2 1	0				  2
	1 2 5 4 3 5 4 5 0			3
	*/
	int max2 = -1000000;
	int count2 = 0;
	while (true)
	{
		int number;
		cin >> number;
		if (number == 0) break;
		if (number > max2)
		{
			max2 = number;
			count2 = 0;
		}
		if (number == max2) ++count2;
	}
	cout << count2 << endl;
	/*
	������� 3
	���� ����� ��������������� ����� N.
	����� �����, ������������ ���� �� ����������� �������, ��� � N, �� � �������� �������.
	�������� ������				��������� ���������
	1234						      4321
	5555						      5555
	15							      51
	987654321					    123456789
	*/
	int count3 = 1;
	int number3, a;
	int newnumber3 = 0;
	cin >> number3;
	while (true)
	{
		a = number3 % 10;
		number3 = number3 / 10;
		newnumber3 = newnumber3 * 10 + a;
		if (number3 == 0) break;
		++count3;
	}
	cout << newnumber3 << endl;
	/*
	������� 4
	������� ����������� ������� ������, ������������� �������� �����.
	�������� ������				��������� ���������
	1							        2
	2							        4
	15							      16
	100							      128
	*/
	int number4, st1;
	int st = 0;
	cin >> number4;
	while (true)
	{
		if (pow(st,2) <= number4)
		{
			++st;
		}
		else
		{
			break;
		}
	}
	cout << pow(st, 2) << endl;
	/*
	������� 5
	������������������ ��������� ������������ ���:
	F(0) = 0, F(1) = 1, �, F(n) = F(n-1) + F(n-2).
	�� ������� ����� N ���������� N-� ����� ��������� F(N).
	�������� ������				��������� ���������
	0							        0
	1							        1
	2							        1
	3							        2
	4							        3
	6							        8
	10							      55
	25							      75025
	*/
	/*
	������� 6 (��������������)
	������� ������������������ ���������� ��������� ����������,
	���� �� ������ ������ ����������� � ������������ �������� ������������������.
	������ � ��������� ������� ������������������ �� �������� ���������� �����������.
	���� ������������������ ����������� �����, ������������� ������ 0.
	���������� ���������� ������� ��������� ���������� � ���� ������������������.
	������ ������� ������
	�������� ������������������ ����������� �����, �������������� ������ 0
	(���� ����� 0 � ������������������ �� ������, � ������ ��� ������� �� ���������).
	�������� ������				��������� ���������
	1 2 3 2 1 0					  1
	1 2 2 1 0					    0
	1 3 5 4 4 6 1 0				2
	1 9 8 7 7 8 5 9 0			2
	*/
}