#pragma once
#include"Player.h"
#include"graphics.h"
#include"Position.h"
enum Color { red = 0, blue = 1, yellow = 2, green = 3, Cyan = 4, purple = 5,White=-1 };
class Board;
class Piece
{
	Position p;   //Composition
	Color Col;
	Board* B;
	bool Iskill;        // Is on Board or At Home
	bool IsSafe;     // Is on stop or not
	int count;         
public:
	Piece() {}
	Piece(Color C,Position P);
	virtual void Draw();
	//virtual void UnDraw();
	void Move(Position E);
	Color GetColor();
};

