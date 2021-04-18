#include "pawn.h"

Pawn::Pawn(COLOR color, int number):
Piece(PAWN, color),
alreadyMoved(false),
justSprinted(false)
{
    // Hard coding initial positions
    for(int i = 0; i < number; i++)
    {
        this->column = i;
    }
    
    if(color == WHITE)
    {
        this->row = 0;
    }
    else
    {
        this->row = 7;
    }
}

bool Pawn::canMoveTo(int r, int c)
{
    bool result = false;
    int dr = abs(this->row - r), dc = abs(this->column - c);

    if( (dr == 1 && dc == 0) || (this->alreadyMoved == 0 && dr == 2) )
    {
        result = true;
    }

    return result;
}