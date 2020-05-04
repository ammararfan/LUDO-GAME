#include "Piece.h"
Piece::Piece(Color C, Position P)
{
	Col = C;
	p = P;
}
Color Piece::GetColor()
{
	return Col;
}
void Piece::Draw()
{
   int rdim = 50, cdim = 50;
   if (Col == green)
   {
       setcolor(GREEN);
       setfillstyle(INTERLEAVE_FILL, GREEN);
       pieslice(p.c * rdim + 20, p.r * rdim + 30, 0, 360, 15);
   }
   else if (Col == red)
   {
       setcolor(RED);
       setfillstyle(INTERLEAVE_FILL, RED);
       pieslice(p.c * rdim + 20, p.r * rdim + 30, 0, 360, 15);
   }
   else if (Col == yellow)
   {
       setcolor(YELLOW);
       setfillstyle(INTERLEAVE_FILL, YELLOW);
       pieslice(p.c * rdim + 20, p.r * rdim + 30, 0, 360, 15);
   }
   else if (Col == blue)
   {
       setcolor(BLUE);
       setfillstyle(INTERLEAVE_FILL, BLUE);
       pieslice(p.c * rdim + 20, p.r * rdim + 30, 0, 360, 15);
   }
   else if (Col == purple)
   {
       setcolor(MAGENTA);
       setfillstyle(INTERLEAVE_FILL, MAGENTA);
       pieslice(p.c * rdim + 20, p.r * rdim + 30, 0, 360, 15);
   }
   else if (Col == Cyan)
   {
       setcolor(CYAN);
       setfillstyle(INTERLEAVE_FILL, CYAN);
       pieslice(p.c * rdim + 20, p.r * rdim + 30, 0, 360, 15);
   }
       
}

