#include <iostream>
#include <cstdlib>
#include "Player.h"
#include "Computer.h"

using namespace std;

Player::Player() {}

void Player::initialize_ships() {
    for (int i = 0; i < NUM_SHIPS; i++) {
        ships.push_back(0);
    }
}

void Player::initialize_boards() {
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

void Player::display_boards() {
    cout << "Player's Board\n";
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Player's Opponent Board\n";
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            cout << opponent_board[i][j] << " ";
        }
        cout << endl;
    }
}

void Player::check_guess(int row, int col) {
    if (board[row][col] == 'S') {
        cout << "You hit a ship!" << endl;
        opponent_board[row][col] = 'H';
    } else {
        cout << "You missed!" << endl;
        opponent_board[row][col] = 'M';
    }
}

bool Player::check_status() {
    int shipsSunk = 0;
    for (int i = 0; i < NUM_SHIPS; i++) {
        if (ships[i] == 1) {
            shipsSunk++;
        }
    }
    return shipsSunk == NUM_SHIPS;
}

void Player::setOpponentBoardEntry(int r, int c, char v) {
    opponent_board[r][c] = v;
}

char Player::getOpponentBoardEntry(int r, int c) {
    return opponent_board[r][c];
}

char Player::getBoardEntry(int r, int c) {
    return board[r][c];
}
