#pragma once
#include<iostream>
using namespace std;
class Dice
{
	int Num;
public:
	int GenerateNum()
	{
		return rand() % 6 + 1;
	}
	void DrawDice();
};

