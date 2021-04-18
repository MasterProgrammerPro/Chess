#ifndef __PIECE_H__
#define __PIECE_H__

#include <cstdlib>

#define WHITE 0
#define BLACK 1

class Piece
{    
    public:
        void move(int r, int c);
        bool canMoveTo(int r, int c);
    
    protected:
        Piece(int type, int color);
        
        int type;
        int color;
        int row;
        int column;
};


#endif