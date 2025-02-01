//============================================================================
// Name        : Lab4_Warrington.cpp
// Author      : Andrew Warrington
// Date		   : 9/20/2024
// Description : Complete code for CSC155 Week 5 Lab 4
//============================================================================

#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0)); // Set the random seed -- pseudo-random numbers.

    // Title and rules of the game.
    cout << "****************" << endl;
    cout << "The Game of Nim!" << endl;
    cout << "****************" << endl;

    cout << "Two players alternately take marbles from a pile. In each move, a player chooses how many marbles to take." << endl;
    cout << "The player must take at least one but at most half of the marbles. Then the other player takes a turn." << endl;
    cout << "The player who takes the last marble loses!" << endl;
    cout << endl;

    // Random initial size of the pile.
    int numMarbles = rand() % 91 + 10;

    // Determine first turn: Computer or Player.
    int turn = rand() % 2;

    // Determine computer intelligence: smart or dumb.
    bool smart = rand() % 2;

    // Computer intelligence level
    if(smart){
    	cout << "Careful...this computer is pretty smart." << endl;
    }
    else{
    	cout << "This computer is not so smart...you got this!" << endl;
    }

    // Starting number of marbles
    cout << "There are " << numMarbles << " marbles on the table." << endl;

    // Play until only 1 marble remains.
    int choice;
    while (numMarbles > 1) {
        if (turn == 1) {
            // Player's turn
            cout << "Player's turn." << endl;
            cout << "Player, how many marbles would you like? (1 to " << numMarbles / 2 << ")" << endl;
            cin >> choice;

            // Validate player's choice
            while (choice > numMarbles / 2 || choice <= 0) {
                cout << "Invalid choice. Please enter a number between 1 and " << numMarbles / 2 << ": " << endl;
                cin >> choice;
            }

            numMarbles -= choice;
            turn = 0; // Alternate turns
        } else {
        	// Computer's turn
        	cout << "Computer's turn." << endl;
        	if(smart){
        	    int ideal = pow(2, floor(log2(numMarbles))) - 1; // The smart strategy, leave opponent with pile one less than a power of two
        	    if (numMarbles > ideal) {
        	        choice = numMarbles - ideal;
        	    } else {
        	        choice = rand() % (numMarbles / 2) + 1; // Otherwise, random number
        	    }
        	} else {
        	    choice = rand() % (numMarbles / 2) + 1; // Otherwise, random number
        	}
        	cout << "Computer wants " << choice << " marble(s)." << endl;
        	numMarbles -= choice;
        	turn = 1;  //Alternate turns
        }
        cout << "There are " << numMarbles << " marble(s) left." << endl;
    }


    // Whoever has to to take the last marble loses
    if(turn == 1){
    	cout << "******Player loses!******" << endl;
    }
    else{
    	cout << "******Computer loses!******" << endl;
    }

    return 0;
}
