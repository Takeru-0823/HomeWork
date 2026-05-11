#include <iostream>
#include "Human.h"
using namespace std;

const int NAME_MAX = 16;

int main()
{
	char name[NAME_MAX + 1] = "四條尊";

	human human(name, 165, 50);

	human.drawName();

	cout << "身長は " << human.get_height() << endl;

	cout << "体重は " << human.get_weight() << endl;

	human.grow_fat(5);

	cout << "体重は " << human.get_weight() << endl;

}
