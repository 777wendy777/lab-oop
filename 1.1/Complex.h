#pragma once
#include<iostream>
#include<string>
using namespace std;

class Complex
{
private:
	double x1, x2, y1, y2;
public:
	void set();
	void out();
	void plus();
	void minus();
	void multiplication();
	void division();
};