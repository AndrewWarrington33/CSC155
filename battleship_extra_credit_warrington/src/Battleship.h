#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include "Player.h"
#include "Computer.h"

using namespace std;

class Battleship {
private:
    Player player;
    Computer computer;
    int playerShipsSunk;
    int computerShipsSunk;

public:
    Battleship() {
        playerShipsSunk = 0;
        computerShipsSunk = 0;
    }

    void place_ships() {
        player.initialize_ships();
        computer.initialize_ships();
        player.initialize_boards();
        computer.initialize_boards();
    }

    void player_turn() {
        int row, col;
        cout << "Enter your guess (row and column): ";
        cin >> row >> col;
        player.check_guess(row, col);
        if (computer.check_status()) {
            cout << "Player's board after your turn:" << endl;
            player.display_boards();
        }
    }

    void computer_turn() {
        computer.check_guess(player);
        if (player.check_status()) {
            cout << "Computer's board after its turn:" << endl;
            computer.display_boards();
        }
    }

    void play_game() {
        place_ships();

        while (playerShipsSunk < 5 && computerShipsSunk < 5) {
            player_turn();
            if (computerShipsSunk < 5) {
                computer_turn();
            }
        }

        if (playerShipsSunk == 5) {
            cout << "Game Over! The Computer Wins!" << endl;
        } else if (computerShipsSunk == 5) {
            cout << "Congratulations! You Win!" << endl;
        }
    }
};
