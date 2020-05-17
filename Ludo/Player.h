#pragma once
#include<iostream>
#include"Piece.h"
using namespace std;
class Piece;
class Player
{
	Piece** Goti;
	//Position P;
	//string Name;
	friend class Board;
public:
	bool isWin;
	int count;
	//void SetName(string n);
	Player() {
		count = 4;
		isWin = false;
	}
	Player(Piece *p1, Piece* p2, Piece* p3, Piece *p4)
	{
		Goti = new Piece * [4];
		Goti[0] = p1;
		Goti[1] = p2;
		Goti[2] = p3;
		Goti[3] = p4;
		count = 4;
		isWin = false;
	}
	

};

