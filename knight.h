#ifndef __KNIGHT_H__
#define __KNIGHT_H__

#include "piece.h"

#define KNIGHT 5

class Knight: public Piece
{
    public:
        Knight(COLOR color, int number);

        bool canMoveTo(int r, int c);

    protected:
    
};

#endif
