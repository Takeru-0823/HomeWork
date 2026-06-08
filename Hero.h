#pragma once

class Hero : public Character
{
public:
	Hero(int h, int a);
	void Attack(Character& target);
};