#include "pch.h"
#include "windows.h"
#include <iostream>
#include <string>
using namespace std;

class Child
{
private:
	string name;
	string surname;
	int age;
public:
	Child(string name, string surname, int age)//конструктор 
	{ 
		this->name = name;
		this->surname = surname;
		this->age = age;
	}

	void set()
	{
		cout << "Введите имя:";
		cin >> name;

		cout << "Введите фамилию:";
		cin >> surname;

		cout << "Возраст:";
		cin >> age;

	}
	void show()
	{
		cout << "Меня зовут " << surname << " " << name << " мне " << age << endl;
	}
	~Child() {};//деструктор 
	
};
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	system("color 0A");

	Child a("Иван","Иванов",5), b("Андрей", "Рыбаков", 8);;
	//a.set();
	a.show();

	//b.set();
	b.show();

	system("pause");
	return 0;
}
