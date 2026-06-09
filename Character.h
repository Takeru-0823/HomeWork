#pragma once

class Character
{
protected:
	int hp;
	int attack;

public:
	int GetHP() const;
	void TakeDamage(int damage);
	virtual void Attack(Character& character);
};