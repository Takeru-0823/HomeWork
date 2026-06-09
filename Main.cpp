#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Hero.h"
#include "Goblin.h"
using namespace std;

void ShowHP(const Character& character)
{
	cout << "HP " << character.GetHP() << endl;
}

void AttackTurn(Character& attacker, Character& target)
{
	attacker.Attack(target);
	cout << "相手の";
	ShowHP(target);
}

int main()
{
	srand((unsigned int)time(NULL));

	bool p_win = false;
	Hero hero(100, 20);
	Gonblin goblin(130, 20);

	while (true)
	{
		cout << "プレイヤーのターン" << endl;
		AttackTurn(hero, goblin);
		cout << endl;

		if (goblin.GetHP() <= 0)
		{
			p_win = true;
			break;
		}

		cout << "ゴブリンのターン" << endl;
		AttackTurn(goblin, hero);
		cout << endl;

		if (hero.GetHP() <= 0)
		{
			break;
		}
	}

	if (p_win)
	{
		cout << "プレイヤーの勝ち！" << endl;
	}
	else
	{
		cout << "ゴブリンの勝ち！" << endl;
	}
}