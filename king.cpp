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
