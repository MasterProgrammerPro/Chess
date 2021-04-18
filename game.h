#ifndef __GAME_H__
#define __GAME_H__

#include "board.h"

class Game
{
    public:

    private:
        Board board;
        int turn;
        int fiftyMoveRule;
        bool mated;
};


#endif