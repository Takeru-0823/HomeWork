#include <iostream>
#include "Character.h"
#include "Goblin.h"
using namespace std;

Gonblin::Gonblin(int h, int a)
{
	hp = h;
	attack = a;
}

void Gonblin::Attack(Character& target)
{
	cout << "UŒ‚I" << endl;
	int damage = attack + (rand() % 5 - 2);
	target.TakeDamage(damage);
}
