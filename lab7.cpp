#include "pch.h"
#include <iostream>
#include<string>
#include "windows.h"

using namespace std;

class Human 
{
protected:
	string name;
	string surname;
	string midname;
	int age;
public:
	Human() : name(""), surname(""), midname(""), age(0) {};

	Human(string surname, string name, string midname, int age) :
		name(name), surname(surname), midname(midname), age(age) {};

	virtual void print() = 0;

	~Human() {}
};

class Student : public Human 
{
	bool on_lesson;
public:
	Student() : Human(), on_lesson(false) {};

	Student(string surname, string name, string midname, int age, bool on_lesson) :
		Human(surname, name, midname, age), on_lesson(on_lesson) {};

	void print() 
	{
		cout << "Имя: " << surname << " " << name << " " << midname << endl;
		cout << "Возраст: " << age << endl;
		cout << "Находится на уроке? " << on_lesson << endl;
	}

	~Student() {};
};

class Boss : public Human {
	int number_of_workers;
public:
	Boss() : Human(), number_of_workers(0) {};

	Boss(string surname, string name, string midname, int age, int number_of_workers) :
		Human(surname, name, midname, age), number_of_workers(number_of_workers) {};

	void print() 
	{
		cout << "Имя : " << surname << " " << name << " " << midname << endl;
		cout << "Возраст: " << age << endl;
		cout << "Кол-во рабочих: " << number_of_workers << endl;
	}

	~Boss() {};
};

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	system("color 0A");

	string surname, name, midname;
	int age, number_of_workers;
	bool on_lesson;

	

	cout << "Студент:" << endl;
	cout << "Введите фамилию: ";
	cin >> surname;
	cout << "Введите имя: ";
	cin >> name;
	cout << "Введите отчество: ";
	cin >> midname;
	cout << "Введите возарст: ";
	cin >> age;
	cout << "Находится на уроке? (1 - да, 0 - нет): ";
	cin >> on_lesson;

	Student s(surname, name, midname, age, on_lesson);

	cout << endl << "Босс:" << endl;
	cout << "Введите фамилию: ";
	cin >> surname;
	cout << "Введите имя: ";
	cin >> name;
	cout << "Введите отчество: ";
	cin >> midname;
	cout << "Введите возарст: ";
	cin >> age;
	cout << "Введите кол-во рабочих: ";
	cin >> number_of_workers;

	Boss b(surname, name, midname, age, number_of_workers);
	s.print();
	b.print();

	system("pause");
	return 0;
}
