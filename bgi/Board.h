#pragma once
#include"Player.h"
class Piece;
class Board
{
protected:
	Piece* Ps;
	int Nop;
	Player* Ps;
	int Dice;
public:
	void init(); //init the arrays , Turn, NOP ,Pieces etc
	int RollDice(); //returns random num from 1-6; In case of Three 6 return 0
	bool IsValidSelection(); //checks for valid piece selection
	bool IsValidDestination(); //checks for valid destination
	void PrintBoard();   //Prints the Board
	void Play();     //Main Flow in this function
	void Move(); //Updates The Board (Pieces Array)
	void UpdateBoard(); // Move function
	void IsWin(); // Checks for is win (all 4 pugi?)
	void TurnChange(); // changes turn
	void DisplayMessage(); //Displays player Name and color;
	void DisplayWinnerMessage(); //Displays the list of Winners Accordingly;
	void DisplayKillMessage(); //Displays which piece is killed;
	void SelectPiece(); //Select Piece
	void SelectDestination();//Select Destination
	void GameOver();//Check for Game over condition;
};

