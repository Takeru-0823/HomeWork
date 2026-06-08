#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Character.h"
#include "Hero.h"
#include "Goblin.h"
using namespace std;

void ShowHP(const Character& character)
{
	cout << "HP " << character.GetHP() << endl;
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
		hero.Attack(goblin);
		cout << "ゴブリン";
		ShowHP(goblin);
		cout << endl;

		if (goblin.GetHP() <= 0)
		{
			p_win = true;
			break;
		}

		cout << "ゴブリンのターン" << endl;
		goblin.Attack(hero);
		cout << "プレイヤー";
		ShowHP(hero);
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