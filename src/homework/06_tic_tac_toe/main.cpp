#include "tic_tac_toe.h"
#include <iostream>
using std::cin;
using std::cout;

int main()
{
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

        cout << "Play again? (Y/N): ";
        cin >> choice;
    }

    cout << "Thanks for playing!\n";
    return 0;
}
