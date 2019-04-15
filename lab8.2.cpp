#include "pch.h"
#include <iostream>
#include <cmath>
#include <Windows.h>
#include <list>
#include <string>
using namespace std;

class Complex 
{
	double re;
	double im;
public:
	Complex(double re, double im) : re(re), im(im) {}

	Complex(const Complex& c) 
	{
		re = c.re;
		im = c.im;
	}

	Complex operator= (const Complex& c) 
	{
		return Complex(c.re, c.im);
	}

	void setNumber(double re, double im) 
	{
		this->re = re;
		this->im = im;
	}

	double getModule() 
	{
		return sqrt(re * re + im * im);
	}

	void displayData() 
	{
		cout << re;
		if (im < 0)
		{
			cout << im << "i" << endl;
		}
		else 
		{
			cout << "+" << im << "i" << endl;
		}
		cout << "Модуль: " << getModule() << endl;
	}

	~Complex() {}
};

int main() 
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	system("color 0A");
	list<Complex> l;
	int n;
	cout << "Введите кол-во комплексных чисел:";
	cin >> n;
	for (int i = 0; i < n; i++) 
	{
		double re, im;
		cout << "Введите Re(x" << i + 1 << "): ";
		cin >> re;
		cout << "Введите Im(x" << i + 1 << "): ";
		cin >> im;
		l.push_back(Complex(re, im));
	}

	for (auto a : l)
	{
		cout << endl;
		a.displayData();
	}

	system("pause");
	return 0;
}