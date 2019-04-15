
#include "pch.h"
#include "windows.h"
#include "Complex.h"
#include <iostream>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	system("color 0A");

	Complex a;
	a.set();
	a.out();
	a.plus();
	a.minus();
	a.multiplication();
	a.division();
	
	system("pause");
	return 0;
}
