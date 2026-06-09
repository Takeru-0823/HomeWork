#pragma once
#include "Character.h"

class Gonblin : public Character
{
public:
	Gonblin(int h, int a);
	void Attack(Character& target);
};