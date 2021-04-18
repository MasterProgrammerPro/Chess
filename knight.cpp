#include "knight.h"


Knight::Knight(COLOR color, int number):
Piece(KNIGHT, color)
{
    // Hard coding initial positions
    if(number == 0)
    {
        this->column = 1;
    }
    else
    {
        this->column = 6;
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

bool Knight::canMoveTo(int r, int c)
{
    bool result = false;
    int dr = abs(this->row - r), dc = abs(this->column - c);

    if( (dr == 2 && dc == 1) || (dr == 1 && dc == 2) )
    {
        result = true;
    }

    return result;
}