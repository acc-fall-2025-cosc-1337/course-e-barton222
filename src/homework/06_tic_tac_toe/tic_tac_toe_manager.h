#ifndef TIC_TAC_TOE_MANAGER_H
#define TIC_TAC_TOE_MANAGER_H

#include <vector>
#include "tic_tac_toe.h"

class TicTacToeManager
{
public:
    void save_game(TicTacToe game);
    void get_winner_total(int& o, int& x, int& t);

private:
    void update_winner_count(std::string winner);

    std::vector<TicTacToe> games;
    int x_win = 0;
    int o_win = 0;
    int ties = 0;
};

#endif
