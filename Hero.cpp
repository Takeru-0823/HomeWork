#include <iostream>
#include "Character.h"
#include "Hero.h"
using namespace std;

Hero::Hero(int h, int a)
{
	hp = h;
	attack = a;
}

void Hero::Attack(Character& target)
{
	cout << "攻撃！" << endl;
	int damage = attack;
	if (rand() % 5 == 0)
	{
		cout << "クリティカル！" << endl;
		damage *= 2;
	}
	target.TakeDamage(damage);
}