#include <iostream>
#include "Human.h"
using namespace std;

human::human(char* n, double h, double w)
{
	name = n;
	height = h;
	weight = w;
}

human::human(const human& other)
{

}

void human::grow_fat(double value)
{
	weight += value;
}

void human::slim_off(double value)
{
	weight -= value;
}
