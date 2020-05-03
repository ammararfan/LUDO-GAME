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
	void SetName(string n);
	void SetColor(Color c);
	void SetTeamNum(int n);
	string GetName();
	Color GetColor();
	int GeteamNum();

};

