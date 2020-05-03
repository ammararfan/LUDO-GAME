#include "Board.h"

void Board::init()
{
	//Ps = new Piece * [Nop];


}
int Board::RollDice()
{
	return 0;
}
bool Board::IsValidSelection()
{
	



	return false;
}
bool Board::IsValidDestination()
{
	return false;
}
void Board::PrintBoard()
{

}
void Board::Play()
{

}
void Board::Move()
{

}
void Board::UpdateBoard()
{

}
void Board::IsWin()
{

}
void Board::TurnChange()
{

}
void Board::DisplayMessage()
{

}
void Board::DisplayWinnerMessage()
{

}
void Board::DisplayKillMessage()
{

}
void Board::SelectPiece()
{
	while (!ismouseclick(WM_LBUTTONDOWN))              //mapping abhi karni hai
	{
		delay(500);
	}
	getmouseclick(WM_LBUTTONDOWN, S.c, S.r);

	cout << S.r << " " << S.c << endl;
	S.r = S.r / (800 / 8);
	S.c = S.c / (800 / 8);
	cout << S.r<< " " << S.c;
}
void Board::SelectDestination()
{

}
bool Board ::KillHappen()
{
	return false;
}

void  Board::GameOver()
{

}