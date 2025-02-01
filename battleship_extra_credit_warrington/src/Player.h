#ifndef PLAYER_H
#define PLAYER_H

#include <vector>    // Include this for vector
#include <string>    // Include this for string

class Player {
private:
    std::vector<int> ships; // Use std::vector for the ships
    char board[10][10];
    char opponent_board[10][10];
    std::string name; // Use std::string for the name
    const int NUM_SHIPS = 5;

public:
    Player();

    void initialize_ships();
    void initialize_boards();
    void display_boards();
    void check_guess(int row, int col);
    bool check_status();
    void setOpponentBoardEntry(int r, int c, char v);
    char getOpponentBoardEntry(int r, int c);
    char getBoardEntry(int r, int c);
};

#endif
