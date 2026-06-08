#pragma once
using namespace std;

struct Vector2
{
	double x;
	double y;
};

struct Vector3
{
	double width;
	double heigth;
	double lenght;
};

class car
{
	char* name;
	int number;
	Vector3 carSize;
	Vector2 nowPos;
	double fuelEfficiency;
	double fuelTunk;
	double remainingFuel;

public:
	car(char* n, int num, Vector3 size, Vector2 nowPos, double fuelEfficiency, double tunk, double remainingFuel);
	~car();
	car(const car& other);
	void operator= (const car& other);

	Vector2 checkPosition()
	{
		return nowPos;
	}

	void drawCarName()
	{
		cout << "ŽÔ‚Ì–¼‘O‚Í " << name << endl;
	}

	void move()
	{

	}

	void refueling(double oil)
	{
		remainingFuel += oil;
	}


};