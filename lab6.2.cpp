#include "pch.h"
#include <iostream>
#include<string>
#include "windows.h"

using namespace std;

class Alive 
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

class Animal : public Alive
{
public:
	void act()
	{
		cout << "Я бегу" << endl;
	}

};
class Bird : public Alive
{
public:
	void act()
	{
		cout << "Я лечу" << endl;
	}

};

class Fish : public Alive
{
public:
	void act()
	{
		cout << "Я плыву" << endl;
	}

};


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	system("color 0A");

	Bird a;
	cout << "Птица" << endl;
	a.set();
	a.out();
	a.act();
	cout << endl;

	Fish b;
	cout << "Рыба" << endl;
	b.set();
	b.out();
	b.act();
	cout << endl;

	Animal c;
	cout << "Животное" << endl;
	c.set();
	c.out();
	c.act();

	system("pause");
	return 0;
}
