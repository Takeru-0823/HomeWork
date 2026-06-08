#include <iostream>
#include "Car.h"
using namespace std;

const int NAME_MAX = 16;

void Show(car car)
{
	car.drawCarName();
}


//int main()
//{
//	char carName[NAME_MAX + 1] = "car";
//	char myCarName[NAME_MAX + 1] = "N-WGN";
//
//	Vector3 size = { 100, 200, 300 };
//	Vector2 pos = { 20, 40 };
//
//	car a(carName, 1111, size, pos, 90, 200, 40);
//	car myCar(myCarName, 9101, size, pos, 100, 300, 90);
//
//	a = myCar;
//
//	Show(myCar);
//}