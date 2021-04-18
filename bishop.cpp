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