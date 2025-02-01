/*
 * point_test.cpp
 * Implementation of the point class
 *  Created on: Oct 23, 2024
 *      Author: andrew
 */

#include "Point.h"
#include <iostream>
#include <iomanip>
using namespace std;

// Default constructor
Point::Point() : x_coord(0), y_coord(0) {

}

// Constructor with parameters
Point::Point(double x, double y) : x_coord(x), y_coord(y) {

}

double Point::getX() const {

	return x_coord; // Retrieve the x
}

double Point::getY() const { return y_coord; }  // Retrieve the y

//Print point as a string
void Point::print() const {
    cout << Point::to_string() << endl;
}

//Create function to format the point as a string
string Point::to_string() const {
	ostringstream oss;  // Create a string stream for formatted output
	    oss << fixed << setprecision(2);  // Apply formatting
	    oss << "(" << x_coord << ", " << y_coord << ")";  // Build the string
	    return oss.str();  // Return the formatted string
}
