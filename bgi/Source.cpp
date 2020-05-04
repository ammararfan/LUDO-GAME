#include"Board.h"
#include"graphics.h"
#include<iostream>
using namespace std;

void Board4Player()
{
	int s = 40;
	for (int y = 0; y < 15; y++)
	{
		for (int x = 0; x < 15; x++)
		{
			int x1 = x * s, y1 = y * s, x2 = (x + 1) * s - 0, y2 = (y + 1) * s - 0;
			if ((y == 0 || y == 1 || y == 2 || y == 3 || y == 4 || y == 5) && (x == 0 || x == 1 || x == 2 || x == 3 || x == 4 || x == 5))
			{
				setfillstyle(SOLID_FILL, GREEN);
				bar(y1, x1, y2, x2);
			}
			else if ((y == 0 || y == 1 || y == 2 || y == 3 || y == 4 || y == 5) && (x == 9 || x == 10 || x == 11 || x == 12 || x == 13 || x == 14))
			{
				setfillstyle(SOLID_FILL, BLUE);
				bar(y1, x1, y2, x2);
			}

			else if ((y == 9 || y == 10 || y == 11 || y == 12 || y == 13 || y == 14) && (x == 0 || x == 1 || x == 2 || x == 3 || x == 4 || x == 5))
			{
				setfillstyle(SOLID_FILL, YELLOW);
				bar(y1, x1, y2, x2);
			}
			else if ((y == 9 || y == 10 || y == 11 || y == 12 || y == 13 || y == 14) && (x == 9 || x == 10 || x == 11 || x == 12 || x == 13 || x == 14))
			{
				setfillstyle(SOLID_FILL, RED);
				bar(y1, x1, y2, x2);
			}
			else if ((y == 6 || y == 7 || y == 8) && (x == 6 || x == 7 || x == 8))
			{
				setfillstyle(SOLID_FILL, DARKGRAY);
				bar(y1, x1, y2, x2);
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
	setfillstyle(SOLID_FILL, GREEN);
	bar(40, 240, 80, 280);
	setcolor(BLACK);
	rectangle(40, 240, 80, 280);
	for (int i = 1; i <= 5; i++)
	{
		bar(i*40, 280, i*40+40, 320);
		setcolor(BLACK);
		rectangle(i * 40, 280, i * 40 + 40, 320);
	}
	setfillstyle(SOLID_FILL, GREEN);
	bar(80, 320, 120, 360);
	setcolor(BLACK);
	rectangle(80, 320, 120, 360);



	setfillstyle(SOLID_FILL, YELLOW);
	bar(320, 40, 360, 80);
	setcolor(BLACK);
	rectangle(320, 40, 360, 80);
	for (int i = 1; i <= 5; i++)
	{
		bar(280, i*40,320, i*40+40);
		setcolor(BLACK);
		rectangle(280, i * 40, 320, i * 40 + 40);
	}
	setfillstyle(SOLID_FILL, YELLOW);
	bar(240, 80, 280, 120);
	setcolor(BLACK);
	rectangle(240, 80, 280, 120);


	setfillstyle(SOLID_FILL, RED);
	bar(520, 320, 560, 360);
	setcolor(BLACK);
	rectangle(520, 320, 560, 360);
	for (int i = 9; i <= 13; i++)
	{
		bar(i*40,280, i*40+40,320);
		setcolor(BLACK);
		rectangle(i * 40, 280, i * 40 + 40, 320);
	}
	setfillstyle(SOLID_FILL, RED);
	bar(480, 240, 520, 280);
	setcolor(BLACK);
	rectangle(480, 240, 520, 280);



	setfillstyle(SOLID_FILL, BLUE);
	bar(240, 520, 280, 560);
	setcolor(BLACK);
	rectangle(240, 520, 280, 560);
	for (int i = 9; i <= 13; i++)
	{
		bar(280, i*40, 320, i * 40 + 40);
		setcolor(BLACK);
		rectangle(280, i * 40, 320, i * 40 + 40);
	}
	setfillstyle(SOLID_FILL, BLUE);
	bar(320, 480, 360, 520);
	setcolor(BLACK);
	rectangle(320, 480, 360, 520);

}
int main()
{
	initwindow(800, 800, "Lodu");
	Board B;
	B.Play();
	delay(100000000000000000);
	return 0;
}