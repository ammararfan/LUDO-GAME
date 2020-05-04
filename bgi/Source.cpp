#include"Board.h"
#include"graphics.h"
#include<iostream>
using namespace std;
void Board6Player()
{
	int s = 70;
	for (int y = 0; y < 12; y++)
	{
		for (int x = 0; x < 7; x++)
		{
			int x1 = x * s, y1 = y * s, x2 = (x + 1) * s - 0, y2 = (y + 1) * s - 0;
			//if ((x + y) % 2 == 0)
			if ((y == 0 || y == 1) && (x == 0 || x == 1))
			{
				setfillstyle(SOLID_FILL, GREEN);
				bar(y1, x1, y2, x2);
			}
			else if (y == 1 && x == 2)
			{
				setfillstyle(SOLID_FILL, BROWN);
				bar(y1, x1, y2, x2);
			}
			else if (y == 2 && x == 5)
			{
				setfillstyle(SOLID_FILL, BROWN);
				bar(y1, x1, y2, x2);
			}
			else if (y == 6 && x == 4)
			{
				setfillstyle(SOLID_FILL, BROWN);
				bar(y1, x1, y2, x2);
			}
			else if (y == 5 && x == 2)
			{
				setfillstyle(SOLID_FILL, BROWN);
				bar(y1, x1, y2, x2);
			}

			else if (y == 9 && x == 1)
			{
				setfillstyle(SOLID_FILL, BROWN);
				bar(y1, x1, y2, x2);
			}
			else if (y == 10 && x == 4)
			{
				setfillstyle(SOLID_FILL, BROWN);
				bar(y1, x1, y2, x2);
			}



			else if ((y == 0 || y == 1) && (x == 5 || x == 6))
			{
				setfillstyle(SOLID_FILL, RED);
				bar(y1, x1, y2, x2);
			}
			else if ((y == 5 || y == 6) && (x == 5 || x == 6))
			{
				setfillstyle(SOLID_FILL, BLUE);
				bar(y1, x1, y2, x2);
			}
			else if ((y == 5 || y == 6) && (x == 0 || x == 1))
			{
				setfillstyle(SOLID_FILL, YELLOW);
				bar(y1, x1, y2, x2);
			}
			else if ((y == 10 || y == 11) && (x == 5 || x == 6))
			{
				setfillstyle(SOLID_FILL, MAGENTA);
				bar(y1, x1, y2, x2);
			}
			else if ((y == 10 || y == 11) && (x == 0 || x == 1))
			{
				setfillstyle(SOLID_FILL, CYAN);
				bar(y1, x1, y2, x2);
			}
			else if ((y > 0 && y < 11) && (x == 3))
			{
				setfillstyle(SOLID_FILL, DARKGRAY);
				bar(y1, x1, y2, x2);
				if (y == 1 || y == 2)
				{
					setfillstyle(SOLID_FILL, GREEN);
					bar(y1, x1, y2, x2);
				}
				if (y == 9 || y == 10)
				{
					setfillstyle(SOLID_FILL, MAGENTA);
					bar(y1, x1, y2, x2);
				}
			}
			else if (y == 3 && (x > 0 && x < 6))
			{
				setfillstyle(SOLID_FILL, DARKGRAY);
				bar(y1, x1, y2, x2);
				if (x == 1 || x == 2)
				{
					setfillstyle(SOLID_FILL, YELLOW);
					bar(y1, x1, y2, x2);
				}
				if (x == 4 || x == 5)
				{
					setfillstyle(SOLID_FILL, RED);
					bar(y1, x1, y2, x2);
				}
			}
			else if (y == 8 && (x > 0 && x < 6))
			{
				setfillstyle(SOLID_FILL, DARKGRAY);
				bar(y1, x1, y2, x2);

				if (x == 1 || x == 2)
				{
					setfillstyle(SOLID_FILL, CYAN);
					bar(y1, x1, y2, x2);
				}
				if (x == 4 || x == 5)
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
void Board4Player()
{
	int s = 70;
	for (int y = 0; y < 11; y++)
	{
		for (int x = 0; x < 11; x++)
		{
			int x1 = x * s, y1 = y * s, x2 = (x + 1) * s - 0, y2 = (y + 1) * s - 0;
			if ((y == 0 || y == 1 || y==2 || y==3) && (x == 0 || x == 1 || x==2 || x==3))
			{
				setfillstyle(SOLID_FILL, GREEN);
				bar(y1, x1, y2, x2);
			}
			else if ((y == 0 || y == 1 || y == 2 || y == 3) && (x == 7 || x == 8 || x == 9 || x == 10))
			{
				setfillstyle(SOLID_FILL, BLUE);
				bar(y1, x1, y2, x2);
			}

			else if ((y == 7 || y == 8 || y == 9 || y == 10) && (x == 0 || x == 1 || x == 2 || x == 3))
			{
				setfillstyle(SOLID_FILL, YELLOW);
				bar(y1, x1, y2, x2);
			}
			else if ((y == 7 || y == 8 || y == 9 || y == 10) && (x == 7 || x == 8 || x == 9 || x == 10))
			{
				setfillstyle(SOLID_FILL, RED);
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



}
int main()
{
	initwindow(1200, 800, "Lodu");

	Board4Player();

	delay(100000);
	return 0;
}