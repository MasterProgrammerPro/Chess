#ifndef __BISHOP_H__
#define __BISHOP_H__

#include "piece.h"

#define BISHOP 4

class Bishop: public Piece
{
    public:
        Bishop(COLOR color, int number);

        bool canMoveTo(int r, int c);

    protected:

};
#endif
