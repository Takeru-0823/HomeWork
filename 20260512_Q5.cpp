#include <iostream>
#include "Car.h"
using namespace std;

const int NAME_MAX = 16;

int main()
{
	car car;

	car.move();

	cout << "xÀ•W‚Í " << car.checkPosition().x << "yÀ•W‚Í " << car.checkPosition().y <<endl;

	car.refueling(50);
}