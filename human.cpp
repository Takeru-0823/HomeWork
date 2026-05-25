#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "Human.h"
using namespace std;

human::human(char* n, double h, double w)
{
	name = new char[strlen(n) + 1];
	strcpy(name, n);
	height = h;
	weight = w;
}

human::~human()
{
	if (name != nullptr)
	{
		delete[] name;
		name = nullptr;
	}
}

human::human(const human& other)
{
	name = new char[strlen(other.name) + 1];
	strcpy(name, other.name);
	height = other.height;
	weight = other.weight;
}

void human::operator= (const human& other)
{
	delete[] name;

	name = new char[strlen(other.name) + 1];
	strcpy(name, other.name);
	height = other.height;
	weight = other.weight;
}

void human::grow_fat(double value)
{
	weight += value;
}

void human::slim_off(double value)
{
	weight -= value;
}
