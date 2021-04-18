#include "king.h"

King::King(COLOR color):
Piece(KING, color),
alreadyMoved(false)
{
    // Hard coding initial positions
    this->column = 4;
    if(color == WHITE)
    {
        this->row = 0;
    }
    else
    {
        this->row = 7;
    }
}

bool King::canMoveTo(int r, int c)
{
    bool result = false;
    int dr = abs(this->row - r), dc = abs(this->column - c);

    if( (dr == 0 && dc == 1) || (dr == 1 && dc == 0) || (dr == 1 && dc == 1) )
    {
        result = true;
    }

    return result;
}