#pragma once
#include <iostream>
using namespace std;

class human
{
	char* name;
	double height;
	double weight;

public:
	human(char* n, double h, double w);
	~human();
	human(const human& other);
	void operator= (const human& other);

	void drawName()
	{
		cout << "–¼‘O‚Í " << name << endl;
	}

	double get_height()
	{
		return height;
	}

	double get_weight()
	{
		return weight;
	}

	void grow_fat(double value);
	void slim_off(double value);
};
