#include "pch.h"
#include <iostream>
#include "windows.h"
#include<string>

using namespace std;

class Student
{
protected:
	string name;
	string surname;
	string group;

public:
	virtual void set()
	{  
		cout << "Введите имя студента:" << endl;
		cin >> name;
		cout << "Введите фамилию студента:" << endl;
		cin >> surname;
		cout << "Введите группу студента:" << endl;
		cin >> group;

	}
	virtual void get()
	{
		cout << "Меня зовут " <<surname<<" "<<name<<" я студент группы "<<group<< endl;
	}
};

class Headman : public Student
{
protected:
	string email;
	string phone;
public:
	void set()
	{
		cout << "Введите имя старосты:" << endl;
		cin >> name;
		cout << "Введите фамилию старосты:" << endl;
		cin >> surname;
		cout << "Введите группу старосты:" << endl;
		cin >> name;
		cout << "Введите email старосты:" << endl;
		cin >> email;
		cout << "Введите телефон старосты:" << endl;
		cin >> phone;

	}
	void get()
	{
		cout << "Меня зовут " << surname << " " << name << " я староста группы " << group << endl;
		cout << "Мой email:"<< email << endl;
		cout << "Мой телефон:" << phone << endl;
	}
};


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	system("color 0A");
	Student a;
	Headman b;
	a.set();
	a.get();
	b.set();
	b.get();

	system("pause");
	return 0;
}
