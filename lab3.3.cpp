#include "pch.h"
#include "windows.h"
#include <iostream>
#include <string>
#include<cmath>

using namespace std;

class Complex 
{
	
public:
	double Re, Im;
	void set() 
	{
		cout << "Введите действительную часть:";
		cin >> Re;
		cout << "Введите мнимую часть:" ;
		cin >> Im;
	}
	void get() 
	{
		cout << "Число: " << Re;
		if (Im < 0) 
		{
			cout << Im << "i" << endl;
		}
		else 
		{
			cout << "+" << Im << "i" << endl;
		}
	}
	void modul() 
	{
		cout << "Модуль:" << sqrt(Re*Re + Im * Im) << endl;
	}
	void arg()
	{
		cout << "Аргумент:" << (Im / Re) << endl;
	}
	
};
	int main()
	{
		SetConsoleCP(1251);
		SetConsoleOutputCP(1251);
		system("color 0A");

		Complex  a;
		a.set();
		a.get();
		a.modul();
		a.arg();

		system("pause");
		return 0;
	}