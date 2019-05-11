#include <iostream>
#include <iomanip>
#include <limits>
#include <string>
#include "Date.hpp"
namespace ext
{
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
		Month month;
		int day;
	};

	unsigned int countJND(Date date)
	{
		int a, y, m, JDN;
		a = (14 - date.month) / 12;
		y = date.year + 4800 - a;
		m = date.month + 12 * a - 3;
		JDN = date.day + (153 * m + 2) / 5 + 365 * y + y / 4 - y / 100 + y / 400 - 32045;
		return JDN;
	}

	int countDistance(Date from, Date to)
	{
		int dif = countJND(to) - countJND(from);
		return dif;
	}

	Season getSeason(Date date)
	{
		switch (date.month)
		{
		case Month::January:
		case Month::February:
		case Month::December:
			return Season::Winter;
		case Month::March:
		case Month::April:
		case Month::May:
			return Season::Spring;
		case Month::June:
		case Month::July:
		case Month::August:
			return Season::Summer;
		case Month::September:
		case Month::October:
		case Month::Novemver:
			return Season::Autumn;
		default:
			break;
		}
	}

	bool isSame(Date lhs, Date rhs)
	{
		bool EqualDates = false;
		if (lhs.day == rhs.day && lhs.month == rhs.month && lhs.year == rhs.year)
		{
			EqualDates = true;
		}
		return EqualDates;
	}

	void swap(Date * lhs, Date * rhs)
	{
		Date temp = *lhs;
		*lhs = *rhs;
		*rhs = temp;
	}

	

	/*
	Возвращает указатель на большую дату
	*/
	Date * max(Date * lhs, Date * rsh)
	{
		if (countJND(*lhs) < countJND(*rsh))
		{
			return rsh;
		}
		else
		{
			return lhs;
		}
	}

	/*
	Возвращает указатель на меньшую дату
	*/
	Date * min(Date * lhs, Date * rsh)
	{
		if (countJND(*lhs) > countJND(*rsh))
		{
			return rsh;
		}
		else
		{
			return lhs;
		}
	}

	/*
	Возвращает указатель на минимальную дату в переданном массиве дат
	*/
	Date * getMinDate(Date dates[], int size)
	{
		Date *minDate;
		*minDate = {31, ext::Month::December,0XFFFFFFFF};
		for (int i = 0; i < size; ++i)
		{
			minDate = min(minDate, &dates[i]);
		}
		return minDate;
	}

	/*
	Возвращает указатель на максимальную дату в переданном массиве дат
	*/
	Date * getMaxDate(Date dates[], int size)
	{
		Date *maxDate;
		*maxDate = { 0, ext::Month::January,0 };
		for (int i = 0; i < size; ++i)
		{
			maxDate = max(maxDate, &dates[i]);
		}
		return maxDate;
	}

	/*
	Проверяет может ли существовать дата с передаваемыми значениями.
	В случае успеха возвращает true, и заполняет дату по переданному адресу.
	Если дата с переданными параметрами существовать не может,
	возвращает false.
	*/
	bool tryFillDate(Date * date, int year, int month, int day)
	{

	}
using namespace std;
int main()
{
	


}