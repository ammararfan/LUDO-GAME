#pragma once
#include"Player.h"
#include"graphics.h"
#include"Position.h"
enum Color { green = 0, yellow = 1, Cyan = 2, purple = 3, blue = 4, red = 5, White = -1,brown=-2 };
class Board;
class Piece
{
	Position p;   //Composition
	Position Org;
	Color Col;
	Board* B;
	bool IsOut;        // Is on Board or At Home
	bool IsSafe;     // Is on stop or not
	int count;
	friend class Board;
public:
	Position SP;
	Piece() {}
	Piece(Color C, Position P, Board* b);
	void setPositions();
	virtual void Draw();
	virtual void UnDraw();
	void Move(Position E);
	Color GetColor();
	bool IsLegal(int i, Position Ep);
};

