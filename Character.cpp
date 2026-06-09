#include <iostream>
#include "Character.h"
using namespace std;

int Character::GetHP() const
{
	return hp;
}

void Character::TakeDamage(int damage)
{
	cout << damage << " ƒ_ƒ[ƒW‚ð—^‚¦‚½" << endl;
	hp -= damage;
	if (hp < 0) hp = 0;
}

void Character::Attack(Character& character)
{

}