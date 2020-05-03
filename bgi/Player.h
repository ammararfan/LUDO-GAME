#pragma once
#include<iostream>
#include<string.h>
#include"Piece.h"
using namespace std;
class Player:public Piece
{
	Position* P;
	string Name;
	Color C;
	int Team;
public:
	void SetName();
	void SetColor();
	void SetTeamNum();
	string GetName();
	Color GetColor();
	int GeteamNum();

};

