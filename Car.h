#pragma once

struct Vector2
{
	double x;
	double y;
};

class car
{
	char* name;
	int number;
	double width;
	double length;
	double height;
	Vector2 nowPos;
	double fuelEfficiency;
	double tunk;
	double remainingFuel;

public:

	Vector2 checkPosition()
	{
		return nowPos;
	}

	void move()
	{

	}

	void refueling(double oil)
	{
		remainingFuel += oil;
	}


};