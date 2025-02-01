#ifndef COMPUTER_H
#define COMPUTER_H

#include <vector>    // Include this for vector
#include <string>    // Include this for string
#include "Player.h"

class Computer {
private:
    std::vector<int> ships; // Use std::vector for the ships
    char board[10][10];
    char opponent_board[10][10];
    const int NUM_SHIPS = 5;

public:
    Computer();

    void initialize_ships();
    void initialize_boards();
    void display_boards();
    void check_guess(Player& player);
    bool check_status();
    std::string sink_ship(int ship_num); // Use std::string for the return type
    void tallyHit(int shipNum, int row, int col);
    void setOpponentBoardEntry(int r, int c, char v);
    char getOpponentBoardEntry(int r, int c);
    char getBoardEntry(int r, int c);
};

#endif
