#include <iostream>
#include "Extention.hpp"
using namespace std;
using namespace ext;

enum Month
{
	January = 1,
	February,
	March,
	April,
	May,
	June,
	July,
	August,
	September,
	October,
	Novemver,
	December
};

enum DateFormat
{
	MonthAsInt,
	MonthAsString
};

enum Season
{
	Winter,
	Spring,
	Summer,
	Autumn
};

struct Date
{
	int year;
	int month;
	int day;
};

bool DateCorrect(int d, int m, int y)
{
	bool result = false;
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
	return result;
}

Date RandomDate()
{ 
	Date date;
	bool r;
	do
	{
		date.day = GetRandomValue(1, 31, false);
		date.month = GetRandomValue(1, 12, false);
		date.year = GetRandomValue(0, 2018, false);
		r = DateCorrect(date.day, date.month, date.year);
	} while (!r);
	return date;
}


int main()
{
	setlocale(LC_ALL, "");
	int n;
	int s = 0;
	int sum = 0;
	int s2[100000]{};
	bool r;
	Date dates[23];
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < 23; ++j)
		{
			dates[j] = RandomDate();
			//cout << dates[j].day << "." << dates[j].month << "." << dates[j].year << endl;
		}
		//cout << endl;
		for (int i1 = 0; i1 < 23; ++i1)
		{
			if (s2[i] == 1)
			{
				break;
			}
			for (int j1 = 0; j1 < 23; ++j1)
			{
				if (i1 != j1 && dates[i1].day == dates[j1].day && dates[i1].month == dates[j1].month) ++s;
				if (s >= 1)
				{
					s2[i] = 1;
					s = 0;
					break;
				}
			}
		}
	}
	for (int i = 0; i < n; ++i)
	{
		sum = sum + s2[i];
	}
}