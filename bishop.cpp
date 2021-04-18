#include "bishop.h"

Bishop::Bishop(COLOR color, int number):
Piece(BISHOP, color)
{
    // Hard coding initial positions
    if(number == 0)
    {
        this->column = 2;
    }
    else
    {
        this->column = 5;
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

bool Bishop::canMoveTo(int r, int c)
{
    bool result = false;
    int dr = abs(this->row - r), dc = abs(this->column - c);

    if( (dr == dc && dr != 0) )
    {
        result = true;
    }

    return result;
}