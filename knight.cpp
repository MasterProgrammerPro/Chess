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