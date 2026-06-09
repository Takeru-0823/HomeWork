#include <iostream>
#include "Goblin.h"
using namespace std;

Gonblin::Gonblin(int h, int a)
{
	if (h < 0) hp = 0;
	else hp = h;

	if (a < 0) attack = 0;
	else attack = a;
}

void Gonblin::Attack(Character& target)
{
	cout << "ƒSƒuƒŠƒ“‚ÌUŒ‚I" << endl;
	int damage = attack + (rand() % 5 - 2);
	target.TakeDamage(damage);
}
