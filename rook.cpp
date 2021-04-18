#include "rook.h"

Rook::Rook(COLOR color, int number):
Piece(ROOK, color),
alreadyMoved(false)
{
    // Hard coding initial positions
    if(number == 0)
    {
        this->column = 0;
    }
    else
    {
        this->column = 7;
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

bool Rook::canMoveTo(int r, int c)
{
    bool result = false;
    int dr = abs(this->row - r), dc = abs(this->column - c);

    if( (dr == 0 && dc != 0) || (dr != 0 && dc == 0) )
    {
        result = true;
    }

    return result;
}