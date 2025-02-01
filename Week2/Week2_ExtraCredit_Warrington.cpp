//============================================================================
// Name        : Permutations_Warrington.cpp
// Author      : Andrew Warrington
// Date         : 9/8/2024
// Description : Generates and displays all permutations of a three-digit number
//============================================================================

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    // Prompt the user to enter a three-digit number
    int number;
    cout << "Please enter a three-digit number: ";
    cin >> number;

    // Extract digits from the number
    int hundreds = number / 100;
    int tens = (number / 10) % 10;
    int units = number % 10;

    // Create a vector to hold the digits
    vector<int> digits = {hundreds, tens, units};

    // Generate and display all permutations
    cout << "The permutations are:" << endl;

    // Use std::next_permutation to generate permutations
    sort(digits.begin(), digits.end()); // Ensure we start with the smallest permutation
    do {
        cout << digits[0] << digits[1] << digits[2] << endl;
    } while (next_permutation(digits.begin(), digits.end()));

    return 0;
}
