#ifndef __QUEEN_H__
#define __QUEEN_H__

#include "piece.h"

#define QUEEN 2

class Queen: public Piece
{
    public:
        Queen(COLOR color);

        bool canMoveTo(int r, int c);

    protected:
    
};
#endif
