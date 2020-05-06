#pragma once
struct Position
{
	int r, c;

	Position() {}
	Position(int R, int C) :r(R), c(C)
	{

	}
	void setPositions(int r1, int c1)
	{
		r = r1;
		c = c1;
	}
};