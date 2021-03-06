#ifndef __ROOK_H__
#define __ROOK_H__

#include "piece.h"

#define ROOK 3

class Rook: public Piece
{
    public:
        Rook(COLOR color, int number);

        bool canMoveTo(int r, int c);

    protected:
        bool alreadyMoved;

};
#endif
