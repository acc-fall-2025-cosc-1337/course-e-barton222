#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include <iostream>
using std::cin;
using std::cout;

int main()
{
    TicTacToeManager manager;
    TicTacToe game;
    string player;
    char choice = 'Y';

    while (choice == 'Y' || choice == 'y')
    {
        cout << "Enter first player (X or O): ";
        cin >> player;
        while (player != "X" && player != "O")
        {
            cout << "Invalid input. Enter X or O: ";
            cin >> player;
        }

        game.start_game(player);
        int position;

        while (!game.game_over())
        {
            game.display_board();
            cout << "Player " << game.get_player() << ", enter position (1-9): ";
            cin >> position;

            while (position < 1 || position > 9)
            {
                cout << "Invalid position. Enter number 1-9: ";
                cin >> position;
            }

            game.mark_board(position);
        }

        game.display_board();
        cout << "Game over! Winner: " << game.get_winner() << "\n";

        manager.save_game(game);

        int x_wins, o_wins, ties;
        manager.get_winner_total(o_wins, x_wins, ties);

        cout << "\nRunning Score Totals:\n";
        cout << "X wins: " << x_wins << "\n";
        cout << "O wins: " << o_wins << "\n";
        cout << "Ties  : " << ties << "\n\n";

        cout << "Play again? (Y/N): ";
        cin >> choice;
    }

    cout << "Thanks for playing!\n";
    return 0;
}
