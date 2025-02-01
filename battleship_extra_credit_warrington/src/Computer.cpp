#include <iostream>
#include <cstdlib>
#include <vector>
#include "Computer.h"
#include "Player.h"

using namespace std;

Computer::Computer() {}

void Computer::initialize_ships() {
    for (int i = 0; i < NUM_SHIPS; i++) {
        ships.push_back(0); // All ships initially have 0 hits
    }
}

void Computer::initialize_boards() {
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            board[i][j] = ' ';
            opponent_board[i][j] = ' ';
        }
    }

    srand(time(0));
    for (int i = 0; i < NUM_SHIPS; i++) {
        int row = rand() % 10;
        int col = rand() % 10;
        board[row][col] = 'S'; // Place a ship at a random position
    }
}

void Computer::display_boards() {
    cout << "Computer's Board\n";
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Computer's Opponent Board\n";
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            cout << opponent_board[i][j] << " ";
        }
        cout << endl;
    }
}

void Computer::check_guess(Player& player) {
    int row = rand() % 10;
    int col = rand() % 10;

    while (player.getOpponentBoardEntry(row, col) != ' ') {
        row = rand() % 10;
        col = rand() % 10;
    }

    cout << "Computer guesses: " << row << " " << col << endl;
    if (player.getBoardEntry(row, col) == 'S') {
        cout << "Computer hit your ship!" << endl;
        player.setOpponentBoardEntry(row, col, 'H');
        tallyHit(0, row, col); // This is just an example, assuming we're tracking one ship
    } else {
        cout << "Computer missed!" << endl;
        player.setOpponentBoardEntry(row, col, 'M');
    }
}

bool Computer::check_status() {
    int shipsSunk = 0;
    for (int i = 0; i < NUM_SHIPS; i++) {
        if (ships[i] == 1) {
            shipsSunk++;
        }
    }
    return shipsSunk == NUM_SHIPS;
}

void Computer::tallyHit(int shipNum, int row, int col) {
    ships[shipNum] = 1; // Mark the ship as hit (simplified)
}

void Computer::setOpponentBoardEntry(int r, int c, char v) {
    opponent_board[r][c] = v;
}

char Computer::getOpponentBoardEntry(int r, int c) {
    return opponent_board[r][c];
}

char Computer::getBoardEntry(int r, int c) {
    return board[r][c];
}
