#ifndef __KING_H__
#define __KING_H__

#include "piece.h"

#define KING 1

class King: public Piece
{
    public:
        King(COLOR color);

    protected:
        bool alreadyMoved;
        
};

#endif
