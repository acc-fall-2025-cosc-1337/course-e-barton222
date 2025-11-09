#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H

#include <string>
#include <vector>
#include <iostream>

using std::string;
using std::vector;

class TicTacToe
{
public:
    void start_game(string first_player);
    void mark_board(int position);
    bool game_over();
    void display_board() const;
    string get_player() const { return player; }
    string get_winner() const { return winner; }

private:
    string player;
    vector<string> pegs{9, " "};
    string winner;

    void set_next_player();
    bool check_board_full();
    void clear_board();

    bool check_column_win();
    bool check_row_win();
    bool check_diagonal_win();
    void set_winner();
};

#endif
