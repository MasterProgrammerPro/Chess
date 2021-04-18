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