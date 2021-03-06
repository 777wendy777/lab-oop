#include "pch.h"
#include <iostream>
#include <string>
#include <queue>
#include <Windows.h>
using namespace std;

class Client 
{
	string name;
	string car;
public:
	Client(string& name, string& car) : name(name), car(car) {};

	void getData()
	{
		cout << endl << "Имя: " << name << endl;
		cout << "Авто: " << car << endl;
	}	
};

int main() 
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	system("color 0A");
	queue<Client> q;	

	for (int i = 0; i < 3; i++) 
	{
		string name, car;
		cout << "Клиент " << i + 1 << endl;
		cout << "Введите имя: ";
		cin >> name;
		cout << "Введите модель автомобиля: ";
		cin >> car;
		q.push(Client(name, car));	
	}

	cout << "Queue" << endl;
	for (int i = 1; !q.empty(); i++) 
	{
		cout << i;
		q.front().getData();	
		q.pop();	
	}

	system("pause");
	return 0;
}

