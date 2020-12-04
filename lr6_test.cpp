#include <iostream>
#include"windows.h"
#include "math.h"
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	double x = 2.0, y;
	while (x < 3)
	{
		y = exp(x) + abs(x) + x * x;
		cout << y << endl;
		x += 0.1;
	}
}
