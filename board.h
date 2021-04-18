#ifndef __BOARD_H__
#define __BOARD_H__

#define N_ROW 8
#define N_COL 8
#define EMPTY 0

#include "piece.h"

class Board
{
    public:
        Board();
        ~Board();
        
        void Initialize();

    private:
        int nRow;
        int nColumn;
        int **board;
};

#endif