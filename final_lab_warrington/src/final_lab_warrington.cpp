//============================================================================
// Name        : final_lab_warrington.cpp
// Author      : Andrew Warrington
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <stdio.h>
#include <ctime>
#include <stdlib.h>
#include <cmath>
using namespace std;

const int ROWS = 20; // 20x20 2D array
const int COLS = 20; // 20x20 2D array
const int NUMBERS = 100;

// check if a cell is a peak
bool isPeak(int board[ROWS][COLS], int i, int j, bool &isMax) {
    int value = board[i][j];
    int neighbors[8] = {0};
    int count = 0;

    // check neighbors cell neighbors (8)
    for (int r = i - 1; r <= i + 1; ++r) {
        for (int c = j - 1; c <= j + 1; ++c) {
            if (r < 0 || r >= ROWS || c < 0 || c >= COLS || (r == i && c == j))
                continue;
            neighbors[count++] = board[r][c];
        }
    }

    bool allGreater = true, allLess = true;
    for (int k = 0; k < count; ++k) {
        if (neighbors[k] >= value) allGreater = false;
        if (neighbors[k] <= value) allLess = false;
    }

    if (allGreater) {
        isMax = true;
        return true;  // peak maximum
    } else if (allLess) {
        isMax = false;
        return true;  // peak minimum
    }
    return false;  // not a peak
}

int main() {
    int board[ROWS][COLS];
    srand(time(0));

    // initialize board and display with random numbers
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            board[i][j] = rand() % NUMBERS + 1;
            printf("%3d ", board[i][j]);
        }
        cout << endl;
    }

    cout << "CORNERS" << endl;

    // check corners
    bool isMax = false;
    // top-left corner (0,0)
    if (isPeak(board, 0, 0, isMax)) {
        cout << "Peak " << (isMax ? "max: " : "min: ") << board[0][0] << " at (0, 0)" << endl;
    }

    // top-right corner (0, COLS-1)
    if (isPeak(board, 0, COLS-1, isMax)) {
        cout << "Peak " << (isMax ? "max: " : "min: ") << board[0][COLS-1] << " at (0, " << COLS-1 << ")" << endl;
    }

    // bottom-left corner (ROWS-1, 0)
    if (isPeak(board, ROWS-1, 0, isMax)) {
        cout << "Peak " << (isMax ? "max: " : "min: ") << board[ROWS-1][0] << " at (" << ROWS-1 << ", 0)" << endl;
    }

    // bottom-right corner (ROWS-1, COLS-1)
    if (isPeak(board, ROWS-1, COLS-1, isMax)) {
        cout << "Peak " << (isMax ? "max: " : "min: ") << board[ROWS-1][COLS-1] << " at (" << ROWS-1 << ", " << COLS-1 << ")" << endl;
    }

    cout << "SIDES" << endl;

    // check sides (excluding corners)
    // top side
    for (int j = 1; j < COLS - 1; ++j) {
        if (isPeak(board, 0, j, isMax)) {
            cout << "Peak " << (isMax ? "max: " : "min: ") << board[0][j] << " at (0, " << j << ")" << endl;
        }
    }

    // bottom side
    for (int j = 1; j < COLS - 1; ++j) {
        if (isPeak(board, ROWS-1, j, isMax)) {
            cout << "Peak " << (isMax ? "max: " : "min: ") << board[ROWS-1][j] << " at (" << ROWS-1 << ", " << j << ")" << endl;
        }
    }

    // left side
    for (int i = 1; i < ROWS - 1; ++i) {
        if (isPeak(board, i, 0, isMax)) {
            cout << "Peak " << (isMax ? "max: " : "min: ") << board[i][0] << " at (" << i << ", 0)" << endl;
        }
    }

    // right side
    for (int i = 1; i < ROWS - 1; ++i) {
        if (isPeak(board, i, COLS-1, isMax)) {
            cout << "Peak " << (isMax ? "max: " : "min: ") << board[i][COLS-1] << " at (" << i << ", " << COLS-1 << ")" << endl;
        }
    }

    cout << "INNER CELLS" << endl;

    // Check inside cells (excluding edges)
    for (int i = 1; i < ROWS - 1; ++i) {
        for (int j = 1; j < COLS - 1; ++j) {
            if (isPeak(board, i, j, isMax)) {
                cout << "Peak " << (isMax ? "max: " : "min: ") << board[i][j] << " at (" << i << ", " << j << ")" << endl;
            }
        }
    }

    return 0;
}
