//============================================================================
// Name        : Lab5_Warrington.cpp
// Author      : Andrew Warrington
// Date		   : 9/27/2024
// Description : Complete code for Week 6 Lab 5
//============================================================================

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;


// Declare prototype
void process(string name);

int main() {
    string myName;
    cout << "Please enter your name: ";

    // Allow program to read the space between first and last name
    getline(cin, myName);

    cout << "Your name is: " << myName << endl;

    // Call the function
    process(myName);

    return 0;
}

// Prototype function
void process(string name){

	// Store the length of the name
    int nameLength = name.size();

    // Initialize odd and even line numbers
    int oddNum = 1;
    int evenNum = 2;

    // Find first and last name separation
    int spaceLocation = name.find(' ');

    // Iterate over every character in the name
    for (int i = 0; i < nameLength; i++){

    	// The first name is marked by odd line numbers
    	if(i < spaceLocation){

    		// Adjust spacing once line numbers get to double digits
        	if(oddNum > 9){
        		cout << oddNum << setw(i + 1) << char(toupper(name[i])) << endl;
        		oddNum += 2;
        	}
        	else{
        		cout << oddNum << setw(i + 2) << char(toupper(name[i])) << endl;
        		oddNum += 2;
        	}
        }

    	// The last name is marked by even line numbers
        else if(i > spaceLocation){

        	// Adjust spacing once line numbers get past double digits
        	if(evenNum > 8){
        		cout << evenNum << setw(i + 1) << char(toupper(name[i])) << endl;
        		evenNum += 2;
        	}
        	else{
        		cout << evenNum << setw(i + 2) << char(toupper(name[i])) << endl;
        		evenNum += 2;
        		}
        	}
        else{
        	cout << " " << endl;
        }
    }
}

