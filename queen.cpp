#include "queen.h"


Queen::Queen(COLOR color):
Piece(QUEEN, color)
{
    // Hard coding initial positions
    this->column = 3;
    if(color == WHITE)
    {
        this->row = 0;
    }
    else
    {
        this->row = 7;
    }
}

bool Queen::canMoveTo(int r, int c)
{
    bool result = false;
    int dr = abs(this->row - r), dc = abs(this->column - c);

    if( (dr == 0 && dc != 0) || (dr != 0 && dc == 0) || (dr == dc && dr != 0) )
    {
        result = true;
    }

    return result;
}