#include "Board.h"

void Board6Player()
{
	int s = 50;
	for (int y = 0; y < 15; y++)
	{
		for (int x = 0; x < 9; x++)
		{
			int x1 = x * s, y1 = y * s, x2 = (x + 1) * s - 0, y2 = (y + 1) * s - 0;
			//if ((x + y) % 2 == 0)
			if ((y >= 0 && y < 3) && (x >= 0 && x < 3))
			{
				setfillstyle(SOLID_FILL, GREEN);
				bar(y1, x1, y2, x2);
			}
			else if (y == 1 && x == 3)
			{
				setfillstyle(SOLID_FILL, BROWN);
				bar(y1, x1, y2, x2);
			}
			else if (y == 3 && x == 7)
			{
				setfillstyle(SOLID_FILL, BROWN);
				bar(y1, x1, y2, x2);
			}

			else if (y == 9 && x == 7)
			{
				setfillstyle(SOLID_FILL, BROWN);
				bar(y1, x1, y2, x2);
			}
			else if (y == 5 && x == 1)
			{
				setfillstyle(SOLID_FILL, BROWN);
				bar(y1, x1, y2, x2);
			}
			else if (y == 11 && x == 1)
			{
				setfillstyle(SOLID_FILL, BROWN);
				bar(y1, x1, y2, x2);
			}
			else if (y == 13 && x == 5)
			{
				setfillstyle(SOLID_FILL, BROWN);
				bar(y1, x1, y2, x2);
			}



			else if ((y >= 0 && y < 3) && (x >= 6 && x <= 8))
			{
				setfillstyle(SOLID_FILL, RED);
				bar(y1, x1, y2, x2);
			}
			else if ((y >= 6 && y <= 8) && (x >= 6 && x <= 8))
			{
				setfillstyle(SOLID_FILL, BLUE);
				bar(y1, x1, y2, x2);
			}
			else if ((y >= 6 && y <= 8) && (x >= 0 && x <= 2))
			{
				setfillstyle(SOLID_FILL, YELLOW);
				bar(y1, x1, y2, x2);
			}
			else if ((y >= 12 && y <= 14) && (x >= 6 && x <= 8))
			{
				setfillstyle(SOLID_FILL, MAGENTA);
				bar(y1, x1, y2, x2);
			}
			else if ((y >= 12 && y <= 14) && (x >= 0 && x <= 2))
			{
				setfillstyle(SOLID_FILL, CYAN);
				bar(y1, x1, y2, x2);
			}
			else if ((y > 0 && y < 14) && (x == 4))
			{
				setfillstyle(SOLID_FILL, DARKGRAY);
				bar(y1, x1, y2, x2);
				if (y == 1 || y == 2)
				{
					setfillstyle(SOLID_FILL, GREEN);
					bar(y1, x1, y2, x2);
				}
				if (y == 12 || y == 13)
				{
					setfillstyle(SOLID_FILL, MAGENTA);
					bar(y1, x1, y2, x2);
				}
			}
			else if (y == 4 && (x > 0 && x < 8))
			{
				setfillstyle(SOLID_FILL, DARKGRAY);
				bar(y1, x1, y2, x2);
				if (x == 1 || x == 2)
				{
					setfillstyle(SOLID_FILL, YELLOW);
					bar(y1, x1, y2, x2);
				}
				if (x == 6 || x == 7)
				{
					setfillstyle(SOLID_FILL, RED);
					bar(y1, x1, y2, x2);
				}
			}
			else if (y == 10 && (x > 0 && x < 8))
			{
				setfillstyle(SOLID_FILL, DARKGRAY);
				bar(y1, x1, y2, x2);

				if (x == 1 || x == 2)
				{
					setfillstyle(SOLID_FILL, CYAN);
					bar(y1, x1, y2, x2);
				}
				if (x == 7 || x == 6)
				{
					setfillstyle(SOLID_FILL, BLUE);
					bar(y1, x1, y2, x2);
				}
			}
			else
			{
				setfillstyle(SOLID_FILL, WHITE);
				bar(y1, x1, y2, x2);
			}
			setcolor(BLACK);
			rectangle(y1, x1, y2, x2);
		}
	}
}
void Board::DisplayPieces()
{
	for (int i = 0; i < 15; i++)
	{
		for (int c = 0; c < 9; c++)
		{
			if (B[i][c] != nullptr)
			{
				B[i][c]->Draw();
			}
		}
	}
}
void Board::init()
{

	for (int i = 0; i < 15; i++)
	{
		for (int c = 0; c < 9; c++)
		{
			B[i][c] = nullptr;
		}
	}
	Nop = 6;
	//player  = new Player[Nop];
	
	Turn = green;
	for (int y = 0; y < 15; y++)
	{
		for (int x = 0; x < 9; x++)
		{
			//	int x1 = x * s, y1 = y * s, x2 = (x + 1) * s - 0, y2 = (y + 1) * s - 0;
				//if ((x + y) % 2 == 0)
			if ((y >= 0 && y < 3) && (x >= 0 && x < 3))
			{
				/*setfillstyle(SOLID_FILL, GREEN);
				bar(y1, x1, y2, x2);*/
			}
			else if (y == 1 && x == 3)
			{
				/*setfillstyle(SOLID_FILL, BROWN);
				bar(y1, x1, y2, x2);*/
			}
			else if (y == 3 && x == 7)
			{
				/*setfillstyle(SOLID_FILL, BROWN);
				bar(y1, x1, y2, x2);*/
			}

			else if (y == 9 && x == 7)
			{
				/*setfillstyle(SOLID_FILL, BROWN);
				bar(y1, x1, y2, x2);*/
			}
			else if (y == 5 && x == 1)
			{
				/*setfillstyle(SOLID_FILL, BROWN);
				bar(y1, x1, y2, x2);*/
			}
			else if (y == 11 && x == 1)
			{
				/*setfillstyle(SOLID_FILL, BROWN);
				bar(y1, x1, y2, x2);*/
			}
			else if (y == 13 && x == 5)
			{
				/*setfillstyle(SOLID_FILL, BROWN);
				bar(y1, x1, y2, x2);*/
			}



			else if ((y >= 0 && y < 3) && (x >= 6 && x <= 8))
			{
				/*setfillstyle(SOLID_FILL, RED);
				bar(y1, x1, y2, x2);*/
			}
			else if ((y >= 6 && y <= 8) && (x >= 6 && x <= 8))
			{

			}
			else if ((y >= 6 && y <= 8) && (x >= 0 && x <= 2))
			{
			}
			else if ((y >= 12 && y <= 14) && (x >= 6 && x <= 8))
			{

			}
			else if ((y >= 12 && y <= 14) && (x >= 0 && x <= 2))
			{

			}
			else if ((y > 0 && y < 14) && (x == 4))
			{
				/*setfillstyle(SOLID_FILL, DARKGRAY);
				bar(y1, x1, y2, x2);
				if (y == 1 || y == 2)
				{
					setfillstyle(SOLID_FILL, GREEN);
					bar(y1, x1, y2, x2);
				}
				if (y == 12 || y == 13)
				{
					setfillstyle(SOLID_FILL, MAGENTA);
					bar(y1, x1, y2, x2);
				}*/
			}
			else if (y == 4 && (x > 0 && x < 8))
			{
				/*setfillstyle(SOLID_FILL, DARKGRAY);
				bar(y1, x1, y2, x2);
				if (x == 1 || x == 2)
				{
					setfillstyle(SOLID_FILL, YELLOW);
					bar(y1, x1, y2, x2);
				}
				if (x == 6 || x == 7)
				{
					setfillstyle(SOLID_FILL, RED);
					bar(y1, x1, y2, x2);
				}*/
			}
			else if (y == 10 && (x > 0 && x < 8))
			{
				/*setfillstyle(SOLID_FILL, DARKGRAY);
				bar(y1, x1, y2, x2);

				if (x == 1 || x == 2)
				{
					setfillstyle(SOLID_FILL, CYAN);
					bar(y1, x1, y2, x2);
				}
				if (x == 7 || x == 6)
				{
					setfillstyle(SOLID_FILL, BLUE);
					bar(y1, x1, y2, x2);
				}*/
			}
			else
			{

				B[y][x] = new Piece(White, Position(y, x), this);
			}
		}
	}

	B[0][1] = new Piece(green, Position(0, 1), this);
	B[1][0] = new Piece(green, Position(1, 0), this);
	B[1][2] = new Piece(green, Position(1, 2), this);
	B[2][1] = new Piece(green, Position(2, 1), this);

	Player P1(B[0][1], B[1][0], B[1][2], B[2][1]);


	B[6][1] = new Piece(red, Position(6, 1), this);
	B[7][0] = new Piece(red, Position(7, 0), this);
	B[8][1] = new Piece(red, Position(8, 1), this);
	B[7][2] = new Piece(red, Position(7, 2), this);
	Player P2(B[6][1], B[7][0], B[8][1], B[7][2]);


	B[6][7] = new Piece(blue, Position(6, 7), this);
	B[7][6] = new Piece(blue, Position(7, 6), this);
	B[7][8] = new Piece(blue, Position(7, 8), this);
	B[8][7] = new Piece(blue, Position(8, 7), this);
	Player P3(B[6][7], B[7][6], B[7][8], B[8][7]);


	B[0][7] = new Piece(yellow, Position(0, 7), this);
	B[1][6] = new Piece(yellow, Position(1, 6), this);
	B[2][7] = new Piece(yellow, Position(2, 7), this);
	B[1][8] = new Piece(yellow, Position(1, 8), this);

	Player P4(B[0][7], B[1][6], B[2][7], B[1][8]);

	B[6][13] = new Piece(purple, Position(6, 13), this);
	B[7][12] = new Piece(purple, Position(7, 12), this);
	B[8][13] = new Piece(purple, Position(8, 13), this);
	B[7][14] = new Piece(purple, Position(7, 14), this);
	Player P5(B[6][13], B[7][12], B[8][13], B[7][14]);


	B[0][13] = new Piece(Cyan, Position(0, 13), this);
	B[1][12] = new Piece(Cyan, Position(1, 12), this);
	B[2][13] = new Piece(Cyan, Position(2, 13), this);
	B[1][14] = new Piece(Cyan, Position(1, 14), this);

	Player P6(B[0][13], B[1][12], B[2][13], B[1][14]);
	/*B[3][1] = new Piece(brown, Position(3, 1), this);
	B[3][1] = new Piece(brown, Position(3, 1), this);
	B[3][1] = new Piece(brown, Position(3, 1), this);
	B[3][1] = new Piece(brown, Position(3, 1), this);
	B[3][1] = new Piece(brown, Position(3, 1), this);
	B[3][1] = new Piece(brown, Position(3, 1), this);*/

}
int Board::RollDice()
{
	return 0;
}
bool Board::IsValidSelection()
{

	if (B[S.r][S.c] != nullptr)
		return B[S.r][S.c]->GetColor() == Turn;
	else
		return false;


}
bool Board::IsValidDestination(int DICE)
{
	int a;
	if (S.r > E.r && S.c < E.c)
	{
		a = (S.r - E.r) + (E.c - S.c);
	}
	if (S.r < E.r && S.c < E.c)
	{
		a = (E.r - S.r) + (E.c - S.c);
	}
	if (S.r < E.r && S.c > E.c)
	{
		a = (E.r - S.r) + (S.c - E.c);
	}
	if (S.r > E.r && S.c > E.c)
	{
		a = (S.r - E.r) + (S.c - E.c);
	}
	if (S.r < E.r && S.c == E.c)
	{
		a = E.r - S.r;
	}
	if (S.r > E.r && S.c == E.c)
	{
		a = S.r - E.r;
	}
	if (S.r == E.r && S.c < E.c)
	{
		a = E.c - S.c;

	}
	if (S.r == E.r && S.c > E.c)
	{
		a = S.c - E.c;

	}
	return((B[E.r][E.c] != nullptr && (B[E.r][E.c]->GetColor() == White || B[E.r][E.c]->GetColor() != Turn) && (a == DICE)));
	//return B[E.r][E.c] == nullptr || B[E.r][E.c]->GetColor() != Turn;
}
void Board::PrintBoard()
{
	Board6Player();
}
void Board::MoveToSafe()
{
	if (Turn == green)
	{

	}
}
void Board::Play()
{
	init();
	PrintBoard();
	D.DrawDice(5);
	DisplayPieces();
	do
	{
		PrintBoard();
		DisplayPieces();
		DisplayMessage();
	x:
		int Di= D.GenerateNum();
		Di = 6;

		D.DrawDice(Di);
		do
		{

			do
			{
				SelectPiece();
				if (Di == 6 && B[S.r][S.c]->IsOut == false)
				{
					B[S.r][S.c]->IsOut = true;
					B[S.r][S.c]->Move(B[S.r][S.c]->SP);
					PrintBoard();
					DisplayPieces();
					goto x;
				}
				if (IsValidSelection() != true)             //iskill false && kai
				{
					B[S.r][S.c]->IsOut = true;
					B[S.r][S.c]->Move(B[S.r][S.c]->SP);
					PrintBoard();
					DisplayPieces();
					goto x;
				}
				if (IsValidSelection() != true)             //iskill false && kai saath
					cout << "Invalid destination";
			} while (!IsValidSelection());
			
			SelectDestination();
			if (IsValidDestination(Di) != true)
			{
				cout << "Invalid Destination";
			}
		} while (!IsValidDestination(Di));
		B[S.r][S.c]->Move(E);
		if (Di == 6)
		{
			PrintBoard();
			DisplayPieces();
			goto x;
		}
		if (KillHappen())
			DisplayKillMessage();
		if (IsWin())
		{

		}
		TurnChange();
	} while (!GameOver());
	DisplayWinnerMessage();
}
void Board::Move()
{

}
void Board::UpdateBoard()
{

}
bool Board::IsWin()
{
	return true;
}
void Board::TurnChange()
{
	if (Turn == green)
	{
		Turn = yellow;
	}
	else if (Turn == yellow)
	{
		Turn = Cyan;
	}
	else if (Turn == Cyan)
	{
		Turn = purple;
	}
	else if (Turn == purple)
	{
		Turn = blue;
	}
	else if (Turn == blue)
	{
		Turn = red;
	}
	else if (Turn == red)
	{
		Turn = green;
	}



}
void Board::DisplayMessage()
{
	outtextxy(200, 540, "                                                                                     ");
	if (Turn == green)
	{
		setcolor(GREEN);
		outtextxy(200, 540, "Green");
	}
	if (Turn == yellow)
	{
		setcolor(YELLOW);
		outtextxy(200, 540, "Yellow");
	}
	if (Turn == Cyan)
	{
		setcolor(CYAN);
		outtextxy(200, 540, "Cyan");
	}
	if (Turn == purple)
	{
		setcolor(MAGENTA);
		outtextxy(200, 540, "Purple");
	}
	if (Turn == blue)
	{
		setcolor(BLUE);
		outtextxy(200, 540, "Blue");
	}
	if (Turn == red)
	{
		setcolor(RED);
		outtextxy(200, 540, "Red");
	}
}
void Board::DisplayWinnerMessage()
{

}
bool Board::IsLocoSafe(Position Lame)
{
	if ((Lame.r == 1 && Lame.c == 3) || (Lame.r == 5 && Lame.c == 1) || (Lame.r == 11 && Lame.c == 1)
		||(Lame.r == 13 && Lame.c == 5) || (Lame.r == 9 && Lame.c == 7) || (Lame.r == 3 && Lame.c == 7))
		return true;
	else return false;
}
void Board::DisplayKillMessage()
{
	outtextxy(50, 50, "Life without Life is AfterLife......");
}
void Board::SelectPiece()
{
	while (!ismouseclick(WM_LBUTTONDOWN))
	{
		delay(500);
	}
	getmouseclick(WM_LBUTTONDOWN, S.c, S.r);

	cout << S.r << " " << S.c << endl;
	S.r = S.r / 50;
	S.c = S.c / 50;
	cout << S.r << " " << S.c;
}
void Board::SelectDestination()
{
	while (!ismouseclick(WM_LBUTTONDOWN))              //mapping abhi karni hai
	{
		delay(500);
	}
	getmouseclick(WM_LBUTTONDOWN, E.c, E.r);

	cout << E.r << " " << E.c << endl;
	E.r = E.r / 50;
	E.c = E.c / 50;
	cout << E.r << " " << E.c;

}
bool Board::KillHappen()
{
	return false;
}
bool  Board::GameOver()
{
	return false;
}
void Board::Move(Position s, Position e)
{
	B[e.r][e.c] = B[s.r][s.c];
	/*B[e.r][e.c]->Draw();
	B[s.r][s.c]->UnDraw();*/
	B[s.r][s.c] = nullptr;
}
//bool Board::IsLegal(Position Ep)
//{
//
//}