#include <iostream>
#include <limits>
#include <string>
#include "Extention.hpp"
using namespace std;
using namespace ext;
const int SIZE = 10;
int main()
{
	/*
	������� �1
	int val = 10;
	�������� ����� ���������� val
	cout << &val << endl;
	�������� ��������� ��� �������� ������ ���������� val
	int * ptr = &val;
	��������� ����� ���������� val � ��������� ���������
	ptr = &val;
	�������� �������� ���������� val, ��������� ���������
	cout << *ptr << endl;
	����� ��������� ��������� ����������:
	unsigned int a = 5U;
	double b = 0.8;
	const float f = 0.5F;
	const long long ll = 123LL;
	�������� � ������������������ ��������� �� ��������������� ����������.
	unsigned int * ptra = &a;
	double  * ptrb = &b;
	const float * ptrf = &f;
	const long long * ptrll = &ll;
	����� ������ ����� ����������� ���������? ��������� � ������� ��������� sizeof
	4
	� ������� ����������� ����������:
	��������� �������� ���������� a �� 1
	*ptra = *ptra + 1;
	��������� ���������� b �������� 0.25
	*ptrb = 0.25;
	�������� ��������� �������� ���������� f
	*ptrf = *ptrf * 2;
	�������� ���������� ������� �� ������� �� 10 ���������� ll
	cout << *ptrll % 10 << endl;


	������� �2
	��� ������� �� ����� ��������� ���?
	��������������� ������ ������, �������� ������������� �������� ����������.
	#include <iostream>
	using namespace std;
	int main()
	{
	int t[4] = {8,4,2,1}; ������������� �������������� ������� �� 4-� ���������
	int *p1 = t + 2, *p2 = p1 - 1; ������������� ����������, � � ������� �� ������������� ������� �������(������� ������� +- �����)
	p1++; ��������� ������������� ��������� ������� ������� 
	cout << *p1 - t[p1 - p2] << endl; �� �������� ���������� �������� ������� ���������� �������� ��� ��������, �� ������� ��������� ��������� p1 � p2
	}


	int data[] = {1,2,3,4,5};
	�������� ��������� �� ������ ������� �������
	� ������� ����� for � ����������� ��������� �������� ������ ������� ������� � �������.
	� ������� ����� for � ����������� ��������� ��������� ������ ������� ������� � 2 ����
	� ���������� ����� ������������ ��������� �������.
	�������� ���������� ���������.
	*/
	int data[] = { 1,2,3,4,5 };
	int * ptrd = data;

	/*
	������� �3
	1.	������������� ������ �� 20 ��������� ��������� �� ��������� [-100, 100].
	2.	�������� ��������� �� ������ ������� �������.
	3.	� ������� ����� for � ������������ ��������� �������� ������ � �������.
	4.	��������� �������������� ��������� ������� ������������ ������� �������.
	5.	�������� ��� ������ � ��������. (��� ������ ������� ������������ ���������� ����������).
	��� ������ ������� ������������ ���������, ��������� ���������� � ��������� ������� �� ��������.



	������� �4
	����� ����� ��������� ���������� ������, ��������������������� ��������� ���������.
	�������� const char data[] = "abcdefghijklmnopqrstuvwxyz";
	������������ ������ � ���������� ���� ������.
	���������� ������� �������, �� ������� ��������� ������������� ������ ���������� ������ ���.
	���� ���������� ������� � ������ ��� ������� -1.
	�������� ������			��������� ���������
	d				4
	z				26
	!				-1



	������� �5
	�������� ���������, ������� ���������� ��� ������, ������� ������ ������������.
	��������� ����������� �����������.
	���� ��������� ������ �����, ������� 1, ���� ������ �� ����� ������� 0.
	������ ����� ���� ������ ��������. ������ ��������� ������ �� ����� ��������� 256 ��������.
	������, ��������� ������������� ����� �������� ��������� �������:
	#include <iostream>
	using namespace std;
	int main()
	{
	char line[256];
	cin.getline(line, 256);
	}
	*/
}