#include <limits>
#include <string>
#include <iostream>
using namespace std;

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

int main()
{
	setlocale(0, "");
	Triangle triangle = { Blue,{ 3,4,5 } };
	cout << triangle.color << " " << triangle.st[0] << triangle.st[1] << triangle.st[2];
	switch (triangle.color)
	{
	case 0:
		cout << "Red" << endl;
		break;
	case 1:
		cout << "Orange" << endl;
		break;
	case 4:
		cout << Color::Blue<< endl;
		break;

	}
}