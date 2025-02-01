//============================================================================
// Name        : Exam1_Warrington.cpp
// Author      : Andrew Warrington
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <fstream>
#include <vector>
#include <cstdlib>
using namespace std;



int main() {

	//Initialize the vector
	vector<int> intList(20);

	//Fill vector with 20 random integers
	int i;
	int evenSum;
	int oddSum;
	int total;
	double average;
	for(i=0;i<20;i++){
		intList[i] = rand() % 90 + 10;
		cout << intList[i] << " "; //Output them evenly spaced, one a single line
		if(i % 2 == 0){
			evenSum += intList[i]; //Compute sum of even indexed values
		}
		else{
			oddSum += intList[i]; //Compute sum of odd indexed values
		}
		total += intList[i];
	}

	average = total / 20;

	cout << "\nSum of even index values: " << evenSum; //Output sum of even indexed values
	cout << "\nSum of odd index values: " << oddSum;//Output sum of odd indexed values


	cout << "\nAverage of values in the vector: " << average;

	return 0;
}


