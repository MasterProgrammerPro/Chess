#include "board.h"

Board::Board():
nRow(N_ROW),
nColumn(N_COL)
{
    this->board = new int*[N_ROW];
    for(int i = 0; i < N_ROW; i++)
        this->board[i] = new int[N_COL];
}

Board::~Board()
{
    for(int i = 0; i < N_ROW; i++)
        delete board[i];
    delete board;
    
}

void Board::Initialize()
{
    for(int i = 0; i < this->nRow; i++)
    {
        for(int j = 0; j < this->nColumn; j++)
        {
            this->board[i][j] = EMPTY;
        }
    }

    // should add pieces
}