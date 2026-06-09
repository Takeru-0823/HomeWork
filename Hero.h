#pragma once
#include "Character.h"

class Hero : public Character
{
public:
	Hero(int h, int a);
	void Attack(Character& target);
};