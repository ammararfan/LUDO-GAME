#include "Dice.h"
#include"graphics.h"
void Dice::DrawDice(int Dn)
{
    int a = 40, b = 540;
    setfillstyle(1, WHITE);
    setcolor(DARKGRAY);
    bar(a, b, a + 80, b + 80);
    switch (Dn)
    {
    case 1:
    {
        setcolor(RED);
        setfillstyle(SOLID_FILL, RED);
        circle(a + 40, b + 40, 5);
        break;
    }
    case 2:
    {
        setcolor(RED);
        setfillstyle(SOLID_FILL, RED);
        circle(a + 30, b + 30, 5);
        setcolor(RED);
        setfillstyle(SOLID_FILL, RED);
        circle(a + 50, b + 50, 5);
        break;
    }
    case 3:
    {
        setcolor(RED);
        circle(a + 20, b + 20, 5);
        setfillstyle(1, RED);
        setcolor(RED);
        circle(a + 40, b + 40, 5);
        setfillstyle(1, RED);
        setcolor(RED);
        circle(a + 60, b + 60, 5);
        setfillstyle(1, RED);
        break;
    }
    case 4:
    {
        setcolor(RED);
        circle(a + 20, b + 20, 5);
        setfillstyle(1, RED);
        setcolor(RED);
        circle(a + 20, b + 60, 5);
        setfillstyle(1, RED);
        setcolor(RED);
        circle(a + 60, b + 20, 5);
        setfillstyle(1, RED);
        setcolor(RED);
        circle(a + 60, b + 60, 5);
        setfillstyle(1, RED);
        break;
    }
    case 5:
    {
        setcolor(RED);
        circle(a + 20, b + 20, 5);
        setfillstyle(1, RED);
        setcolor(RED);
        circle(a + 20, b + 60, 5);
        setfillstyle(1, RED);
        setcolor(RED);
        circle(a + 60, b + 20, 5);
        setfillstyle(1, RED);
        setcolor(RED);
        circle(a + 60, b + 60, 5);
        setfillstyle(1, RED);
        setcolor(RED);
        circle(a + 40, b + 40, 5);
        setfillstyle(1, RED);
        break;
    }
    case 6:
    {
        setcolor(RED);
        circle(a + 20, b + 20, 5);
        setfillstyle(1, RED);
        setcolor(RED);
        circle(a + 20, b + 60, 5);
        setfillstyle(1, RED);
        setcolor(RED);
        circle(a + 60, b + 20, 5);
        setfillstyle(1, RED);
        setcolor(RED);
        circle(a + 60, b + 60, 5);
        setfillstyle(1, RED);
        setcolor(RED);
        circle(a + 20, b + 40, 5);
        setfillstyle(1, RED);
        setcolor(RED);
        circle(a + 60, b + 40, 5);
        setfillstyle(1, RED);
        break;
    }



    default:
        break;
    }



}
