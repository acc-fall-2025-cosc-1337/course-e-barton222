#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"

TEST_CASE("Test first player set to X")
{
    TicTacToe game;
    game.start_game("X");
    REQUIRE(game.get_player() == "X");
}

TEST_CASE("Test first player set to O")
{
    TicTacToe game;
    game.start_game("O");
    REQUIRE(game.get_player() == "O");
}

TEST_CASE("Test tie game")
{
    TicTacToe game;
    game.start_game("X");

    game.mark_board(1);
    game.mark_board(2);
    game.mark_board(3);
    game.mark_board(5);
    game.mark_board(4);
    game.mark_board(6);
    game.mark_board(8);
    game.mark_board(7);
    game.mark_board(9);

    REQUIRE(game.game_over() == true);
    REQUIRE(game.get_winner() == "C");
}

TEST_CASE("Test win by first column")
{
    TicTacToe game;
    game.start_game("X");

    game.mark_board(1);
    game.mark_board(2);
    game.mark_board(4);
    game.mark_board(5);
    game.mark_board(7);

    REQUIRE(game.game_over() == true);
    REQUIRE(game.get_winner() == "X");
}

TEST_CASE("Test TicTacToe winner returns valid value")
{
    TicTacToe game;
    game.start_game("X");

    game.mark_board(1);
    game.mark_board(4);
    game.mark_board(2);
    game.mark_board(5);
    game.mark_board(3);

    REQUIRE(game.game_over() == true);
    REQUIRE((game.get_winner() == "X" || game.get_winner() == "O" || game.get_winner() == "C"));
}

TEST_CASE("Test TicTacToeManager get winner totals")
{
    TicTacToeManager manager;

    TicTacToe game1;
    game1.start_game("X");
    game1.mark_board(1);
    game1.mark_board(4);
    game1.mark_board(2);
    game1.mark_board(5);
    game1.mark_board(3);
    REQUIRE(game1.game_over() == true);
    manager.save_game(game1);

    TicTacToe game2;
    game2.start_game("O");
    game2.mark_board(1);
    game2.mark_board(4);
    game2.mark_board(2);
    game2.mark_board(5);
    game2.mark_board(7);
    game2.mark_board(6);
    REQUIRE(game2.game_over() == true);
    manager.save_game(game2);

    TicTacToe game3;
    game3.start_game("X");
    game3.mark_board(1);
    game3.mark_board(2);
    game3.mark_board(3);
    game3.mark_board(5);
    game3.mark_board(4);
    game3.mark_board(6);
    game3.mark_board(8);
    game3.mark_board(7);
    game3.mark_board(9);
    REQUIRE(game3.game_over() == true);
    REQUIRE(game3.get_winner() == "C");
    manager.save_game(game3);

    int x_wins = 0, o_wins = 0, ties = 0;
    manager.get_winner_total(o_wins, x_wins, ties);

    REQUIRE(x_wins == 1);
    REQUIRE(o_wins == 1);
    REQUIRE(ties == 1);
}
