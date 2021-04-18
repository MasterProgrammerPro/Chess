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