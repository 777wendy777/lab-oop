#include "pch.h"
#include <iostream>
#include <string>
#include <vector>
#include <Windows.h>
using namespace std;

int main() 
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	system("color 0A");
	
	string name;
	vector<string> students;
	int n;
	cout << "Введите кол-во студентов:";
	cin >> n;
	for (int i = 0; i < n; i++) 
	{
		cout << "Введите имя_фамилию_группу" << endl;
		cin >> name;
		students.push_back(name);
	}
	cout << "-------------------------------------------------"<<endl;
	for (int i = 0; i < n; i++)
	{
		cout << students[i] << endl;
	}

	system("pause");
	return 0;
}