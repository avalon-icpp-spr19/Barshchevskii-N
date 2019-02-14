#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

/* TODO
Используя заголовочный файл <limits>, std::cout, sizeof() и управляющие последовательности
cоставьте следующую таблицу
Тип переменной		|    Размер,	|	    Значение	 	 |  Количество
|     байт	|  Минимальное	|  Максимальное  | значимых бит
-------------------------------------------------------------------------------------------
bool			|	1	|     false	|      true      |	1
unsigned short		|	2	|	0	|      65535	 |	16
short
unsigned int
int
unsigned long
long
unsigned long long
long long
char
float
double
для справки использовать http://www.cplusplus.com/reference/limits/numeric_limits/
*/

int main()
{
	setlocale(0, ""); // включение адекватного отображения кириллицы в консоль
	std::cout << std::boolalpha; // настройка консоли, вывод булевых типов как true / false
	sizeof(int); // возвращает байтовый размер переменной типа int
	std::numeric_limits<int>::max(); // возвращает максимальное значение которое может хранить переменная типа int
	std::numeric_limits<int>::max(); // возвращает минимальное значение которое может хранить переменная типа int
	std::numeric_limits<int>::digits; // возвращает количество значимых бит переменной типа int


	cout << "Тип переменной" << setw(10) << setw(10) << "|  " << "Размер," << setw(2) << "|" << setw(20) << "    Значение" << setw(25) 
		<< "|  " << setw(10) << "Количество" << endl;

	cout << setw(25) << "|   " << "байт" << setw(4) << "|" << setw(10) << "  Минимальное" << setw(11) << "|  " << setw(14) 
		<< "Максимальное" << setw(5) << "|" << setw(2) << "значимых бит" << endl;

	cout << "--------------------------------------------------------------------------------" << endl;

	cout << "bool" << setw(18) << "|" << setw(5) << sizeof(bool) << setw(6) << "|" << setw(10) << std::numeric_limits<bool>::min() 
		<< setw(12) << "|" << setw(10) << std::numeric_limits<bool>::max() << setw(11) << "|" << setw(7) 
		<< std::numeric_limits<bool>::digits << endl;

	cout << "unsigned short" << setw(8) << "|" << setw(5) << sizeof(unsigned short) << setw(6) << "|" << setw(8) 
		<< std::numeric_limits<unsigned short>::min() << setw(14) << "|" << setw(10) << std::numeric_limits<unsigned short>::max() 
		<< setw(11) << "|" << setw(7) << std::numeric_limits<unsigned short>::digits << endl;

	cout << "short" << setw(17) << "|" << setw(5) << sizeof(short) << setw(6) << "|" << setw(10)
		<< std::numeric_limits<short>::min() << setw(12) << "|" << setw(10) << std::numeric_limits<short>::max() 
		<< setw(11) << "|" << setw(7) << std::numeric_limits<short>::digits << endl;

	cout << "unsigned int" << setw(10) << "|" << setw(5) << sizeof(unsigned int) << setw(6) << "|" << setw(8) 
		<< std::numeric_limits<unsigned int>::min() << setw(14) << "|" << setw(13) << std::numeric_limits<unsigned int>::max()
		<< setw(8) << "|" << setw(7) << std::numeric_limits<unsigned int>::digits << endl;

	cout << "int" << setw(19) << "|" << setw(5) << sizeof(int) << setw(6) << "|" << setw(13) 
		<< std::numeric_limits<int>::min() << setw(9) << "|" << setw(13) << std::numeric_limits<int>::max() 
		<< setw(8) << "|" << setw(7) << std::numeric_limits<int>::digits << endl;

	cout << "unsigned long" << setw(9) << "|" << setw(5) << sizeof(unsigned long) << setw(6) << "|" << setw(8) 
		<< std::numeric_limits<unsigned long>::min() << setw(14) << "|" << setw(13) << std::numeric_limits<unsigned long>::max() 
		<< setw(8) << "|" << setw(7) << std::numeric_limits<unsigned long>::digits << endl;

	cout << "long" << setw(18) << "|" << setw(5) << sizeof(long) << setw(6) << "|" << setw(10) 
		<< std::numeric_limits<long>::min() << setw(11) << "|" << setw(10) << std::numeric_limits<long>::max()
		<< setw(11) << "|" << setw(7) << std::numeric_limits<long>::digits << endl;

	cout << "unsigned long long" << setw(4) << "|" << setw(5) << sizeof(unsigned long long) << setw(6) << "|" << setw(10)
		<< std::numeric_limits<unsigned long long>::min() << setw(12) << "|" << setw(10) << std::numeric_limits<unsigned long long>::max()
		<< setw(1) << "|" << setw(7) << std::numeric_limits<unsigned long long>::digits << endl;

	cout << "long long" << setw(13) << "|" << setw(5) << sizeof(long long) << setw(6) << "|" 
		<< std::numeric_limits<long long>::min() << setw(2) << "|" << setw(10) << std::numeric_limits<long long>::max() 
		<< setw(2) << "|" << setw(7) << std::numeric_limits<long long>::digits << endl;

	cout << "float" << setw(17) << "|" << setw(5) << sizeof(float) << setw(6) << "|" << setw(10) 
		<< std::numeric_limits<float>::min() << setw(11) << "|" << setw(10) << std::numeric_limits<float>::max() 
		<< setw(10) << "|" << setw(7) << std::numeric_limits<float>::digits << endl;

	cout << "double" << setw(16) << "|" << setw(5) << sizeof(double) << setw(6) << "|" << setw(10) 
		<< std::numeric_limits<double>::min() << setw(10) << "|" << setw(10) << std::numeric_limits<double>::max() 
		<< setw(9) << "|" << setw(7) << std::numeric_limits<double>::digits << endl;

}