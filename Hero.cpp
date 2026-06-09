#include <iostream>
#include "Hero.h"
using namespace std;

Hero::Hero(int h, int a)
{
	if (h < 0) hp = 0;
	else hp = h;

	if (a < 0) attack = 0;
	else attack = a;
}

void Hero::Attack(Character& target)
{
	cout << "プレイヤーの攻撃！" << endl;
	int damage = attack;
	if (rand() % 5 == 0)
	{
		cout << "クリティカル！" << endl;
		damage *= 2;
	}
	target.TakeDamage(damage);
}