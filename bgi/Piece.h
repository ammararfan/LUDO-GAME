#pragma once
#include"Player.h"
#include"Position.h"
enum Color { red = 0, blue = 1, yellow = 2, green = 3, pink = 4, orange = 5, brown = 6, purple = 7 };
class Board;
class Piece
{
	Position P;   //Composition
	Color Col;
	Board* B;
	bool Iskill;        // Is on Board or At Home
	bool IsSafe;     // Is on stop or not
	int count;         
public:
	virtual void Draw();
	virtual void UnDraw();
	void Move();
};

