#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "Car.h"
using namespace std;


car::car(char* n, int num, Vector3 size, Vector2 pos, double efficiency, double tunk, double fuel)
{
	name = new char[strlen(n) + 1];
	strcpy(name, n);
	number = num;
	carSize = size;
	nowPos = pos;
	fuelEfficiency = efficiency;
	fuelTunk = tunk;
	remainingFuel = fuel;
}

car::~car()
{
	delete[] name;
	name = nullptr;
}

car::car(const car& other)
{
	name = new char[strlen(other.name) + 1];
	strcpy(name, other.name);
	number = other.number;
	carSize = other.carSize;
	nowPos = other.nowPos;
	fuelEfficiency = other.fuelEfficiency;
	fuelTunk = other.fuelTunk;
	remainingFuel = other.remainingFuel;
}

void car::operator= (const car& other)
{
	delete[] name;

	name = new char[strlen(other.name) + 1];
	strcpy(name, other.name);
	number = other.number;
	carSize = other.carSize;
	nowPos = other.nowPos;
	fuelEfficiency = other.fuelEfficiency;
	fuelTunk = other.fuelTunk;
	remainingFuel = other.remainingFuel;
}
