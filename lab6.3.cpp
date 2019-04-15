#include "pch.h"
#include <iostream>
#include<string>
#include "windows.h"

using namespace std;

class Animal
{
protected:
	string name;
	int year;
public:
	void set()
	{
		cout << "Введите имя:";
		cin >> name;
		cout << "Введите возраст:";
		cin >> year;
	}
	void out()
	{
		cout << "Я " << name << " мне " << year << endl;
	}
	virtual void act() = 0;
};
class Dog : public Animal
{
public:
	void act()
	{
		cout << "Гав Гав Гав!!!" << endl;
	}

};

class Cat : public Animal
{
public:
	void act()
	{
		cout << "Мяяяу!!!" << endl;
	}

};


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	system("color 0A");

	Dog a;
	cout << "Cобака" << endl;
	a.set();
	a.out();
	a.act();
	cout << endl;

	Cat b;
	cout << "Кот" << endl;
	b.set();
	b.out();
	b.act();
	cout << endl;

	system("pause");
	return 0;
}
