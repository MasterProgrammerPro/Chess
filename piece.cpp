#include "piece.h" 

Piece::Piece(int type, int color):
type(type),
color(color)
{
}

void Piece::move(int r, int c)
{
    this->row = r;
    this->column = c;
}