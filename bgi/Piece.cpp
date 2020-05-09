#include "Piece.h"
#include"Board.h"
Piece::Piece(Color C, Position P, Board* b)
{
    Col = C;
    p = P;
    B = b;          
    Org = P;
    IsOut = false;
    IsSafe = false;
    setPositions();
}
Color Piece::GetColor()
{
    return Col;
}
void Piece::Move(Position Ep)
{
    B->Move(p, Ep);
    p = Ep;
}
void Piece::setPositions()
{
    if (Col == green)
        SP.setPositions(3, 1);
    else if (Col == yellow)
        SP.setPositions(1, 5);
    else if (Col == Cyan)
        SP.setPositions(1, 11);
    else if (Col == purple)
        SP.setPositions(5, 13);
    else if (Col == blue)
        SP.setPositions(7, 9);
    else if (Col == red)
        SP.setPositions(7, 3);
}

void Piece::UnDraw()
{
    int s = 50;
    int x1 = p.c * s, y1 = p.r * s, x2 = (p.c + 1) * s - 0, y2 = (p.r + 1) * s - 0;
    setfillstyle(SOLID_FILL, WHITE);
    bar(x1, y1, x2, y2);
}
void Piece::Draw()
{
    int rdim = 50, cdim = 50;
    if (Col == green)
    {
        setcolor(GREEN);
        setfillstyle(INTERLEAVE_FILL, GREEN);
        pieslice(p.c * rdim + 25, p.r * rdim + 25, 0, 360, 15);
    }
    else if (Col == red)
    {
        setcolor(RED);
        setfillstyle(INTERLEAVE_FILL, RED);
        pieslice(p.c * rdim + 25, p.r * rdim + 25, 0, 360, 15);
    }
    else if (Col == yellow)
    {
        setcolor(YELLOW);
        setfillstyle(INTERLEAVE_FILL, YELLOW);
        pieslice(p.c * rdim + 25, p.r * rdim + 25, 0, 360, 15);
    }
    else if (Col == blue)
    {
        setcolor(BLUE);
        setfillstyle(INTERLEAVE_FILL, BLUE);
        pieslice(p.c * rdim + 25, p.r * rdim + 25, 0, 360, 15);
    }
    else if (Col == purple)
    {
        setcolor(MAGENTA);
        setfillstyle(INTERLEAVE_FILL, MAGENTA);
        pieslice(p.c * rdim + 25, p.r * rdim + 25, 0, 360, 15);
    }
    else if (Col == Cyan)
    {
        setcolor(CYAN);
        setfillstyle(INTERLEAVE_FILL, CYAN);
        pieslice(p.c * rdim + 25, p.r * rdim + 25, 0, 360, 15);
    }

}
bool Piece::IsLegal(int i, Position Ep)
{
    int SriG = 3, SciG = 1;
    int dr = Ep.r - p.r, dc = Ep.c - p.c;
    if ((abs(dr) + abs(dc)) == i)
    {
        return true;
    }
    return false;
}


