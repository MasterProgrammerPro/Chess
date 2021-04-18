#ifndef __PAWN_H__
#define __PAWN_H__

#include "piece.h"

#define PAWN 6

class Pawn: public Piece
{
    public:
        Pawn(COLOR color, int number);

    protected:
        bool alreadyMoved;
        bool justSprinted;
};
#endif
