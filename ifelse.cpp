#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "");
	/* ������� 1
	���� ��� ����������� ����� A, B, C. ����������, ���������� �� ����������� � ������ ���������.
	���� ����������� ����������, �������� ������ ��, ����� �������� ������ ���.
	����������� � ��� ��� �����, �� ������� �� ����� ������.
	�������� ������				��������� ���������
	1 1 1						��
	1 2 4						���
	12 7 5						���
	7 10 3						���
	4 5 8						��
	*/
	int A, B, C;
	cin >> A >> B >> C;
	if ((A + B > C) && (A + C > B) && (B + C > A))
	{
		cout << "��" << endl;
	}
	else
	{
		cout << "���" << endl;
	}
	/* ������� 2
	�������� ���, ��������� ���������� ��������������� ������� ��������� �� ��������� ������������.
	��������, ��� 10, ������� ���������� �������, ��� 1 � �������, ��� 2 � �������.
	������������ ����������� switch.
	�������� ������			��������� ���������
	1					�����
	2					�����
	10					������
	101					�����
	1255					������
	*/
	int rub;
	cin >> rub;
	switch (rub % 100)
	{
	case 11:
	case 12:
	case 13:
	case 14:
		cout << rub << " ������" << endl;
		break;
	default:
		switch (rub % 10)
		{
		case 1:
			cout << rub << " �����" << endl;
			break;
		case 2:
		case 3:
		case 4:
			cout << rub << " �����" << endl;
			break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 0:
			cout << rub << " ������" << endl;
			break;
		}
	}
	/* ������� 3
	� ����������� ���� ����� � ������ ������������� � ������ ��� ����� ��� ���������� ������ �������:
	// �������� ������, �������� � ����������.
	// true ��� 1, false ��� 0
	bool enemyInFront;
	bool isBoss;
	int robotHealth;
	// ��� ����
	bool shouldFire = true;
	if (enemyInFront == true)
	{
	if (isBoss == true)
	{
	if (robotHealth < 50) shouldFire = false;
	if (robotHealth > 100) shouldFire = true;
	}
	}
	else
	{
	shouldFire = false;
	}
	if(shouldFire)
	{
	cout << "Fire" << endl;
	}
	��������� ��� ����, ������ ���������� �������� ���������.
	�������� ������		��������� ���������
	false false 10
	false true 60
	true false 10			Fire
	true true 10
	true true 60			Fire
	*/
	bool enemyInFront;
	bool isBoss;
	int robotHealth;
	cin >> enemyInFront >> isBoss >> robotHealth;
	bool shouldFire = enemyInFront && (!isBoss || robotHealth >= 50);
	if (shouldFire)
	{
		cout << "Fire" << endl;
	}
	else
	{
		cout << " " << endl;
	}


	/* ������� 4
	�� � ����� � ����� ������ ������� ����� ������ ���������� ������� � ���������.
	��� ����� ������ ���������� ������ �� ��� ������ �� ����������� �����.
	�����������, ��� �� ����� ������ � ���, ��� �� ���� ������ �������� ���� ���������.
	�� ����������, ��� ������ �� ��� ������ ������� ������ ����������� ������ ������.
	������� ���� ������ � �������� ��������� ������ ����� �� ������� ��������������, � �������, �� ���� ������ �������� ������������ � ����������� ������.
	���� ����� ������ ��� ������ ������� ������ �� ����, �� ��������� � if - ��, � ������� ����������� ��� ������ ���.
	���������� �� ������ ������ ������, �� � �������������� ���������� �������� � ����������� ��������� ������� ��������.
	�������� ������		��������� ���������
	1 2 3				2
	5 5 5				5
	2 2 9				2
	1 5 5				5
	4 5 6				5
	*/
	int num1, num2, num3;
	cin >> num1 >> num2 >> num3;
	int min = (num1 > num2) ? num2 : num1;
	min = (min > num3) ? num3 : min;
	int max = (num1 > num2) ? num1 : num2;
	max = (max > num3) ? max : num3;
	cout << num1 + num2 + num3 - min - max << endl;
	/* ������� 5
	�������� ������, ������� ��������� ����������� ������������� ���� �� ��������� ������������� ������.
	������������ ������ ������ � ������� ����, �����, ���.
	�������� ������				��������� ���������
	1 1 1992					true
	30 6 1992					true
	31 7 1992					true
	31 9 1994					false
	32 1 1992					false
	1 13 1992					false
	29 2 1993					false
	29 2 2004					true
	29 2 1900					false
	29 2 2000					true
	*/
	int d, m, y;
	bool result = false;
	cin >> d >> m >> y;
	bool IsLeapYear = (y % 400 == 0) || (y % 100 != 0) && (y % 4 == 0);
	switch (m)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		if (d <= 31) result = true;
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		if (d <= 30) result = true;
		break;
	case 2:
		if ((IsLeapYear && d <= 29) || (!IsLeapYear && d <= 28)) result = true;
		break;
	}
	if (result == true)
	{
		cout << "true" << endl;
	}
	else
	{
		cout << "false" << endl;

	}
	/* ������� 6
	��������� ����� ����� �� ���������, ����������� ��� ���������.
	���� ��� ��������� ������ ��������� �����, �������� ������, ������� ����������
	����� �� ����� ������� � ������ ������ �� ������ ����� �����.
	������ ���������� � 1. ������������ ������ ���������� ��������� � �������� ������ � ������� x1x2.
	x1 - ����� ������ �� �����������, x2 - ����� ������ �� ���������
	�������� ������				��������� ���������
	54 14						true
	11 88						true
	36 61						false
	18 71						false
	23 67						true
	*/
	int number1, number2, x1, x2, z1, z2;
	cin >> number1 >> number2;
	x1 = number1 / 10;
	x2 = number1 % 10;
	z1 = number2 / 10;
	z2 = number2 % 10;
	if (abs(x1 - z1) == abs(x2 - z2) || x1 == z1 || x2 == z2)
	{
		cout << "true" << endl;
	}
	else
	{
		cout << "false" << endl;

	}
}