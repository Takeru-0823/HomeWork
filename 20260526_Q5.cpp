#include <iostream>
#include "Human.h"
using namespace std;

const int NAME_MAX = 16;

void Show(human human)
{
	human.drawName();
}

int main()
{
	char name[NAME_MAX + 1] = "human";
	char myName[NAME_MAX + 1] = "takeru";

	human a(name, 160, 50);

	human takeru(myName, 165, 40);

	a = takeru;

	Show(a);
}