//============================================================================
// Name        : Exercise5_Warrington.cpp
// Author      : Andrew Warrington
// Date        : 10/23/2024
// Description : Complete code for CSC155 Exercise 5
//============================================================================

#include <iostream>
#include <iomanip>
#include "Point.h"
#include <cmath>
using namespace std;

//Calculate the mid point of both points
Point midpoint(Point p1, Point p2){

	Point mid((p1.getX() + p2.getX())/2, (p1.getY() + p2.getY())/2);
	return mid;
}

//Calculate the distance for both points
double distance(Point p1, Point p2){

	double x_diff = (p1.getX() - p2.getX());
	double y_diff = (p1.getY() - p2.getY());

	return sqrt(pow(x_diff, 2.0) + pow(y_diff, 2.0));
}

int main() {

	cout << fixed << setprecision(2);

	double x1;
	double x2;
	double y1;
	double y2;

	cout << "Enter the x and y coordinates of the first point (two numbers separated by a space): ";
	cin >> x1 >> y1;
	cout << "Enter the x and y coordinates of the first point (two numbers separated by a space): ";
	cin >> x2 >> y2;



	Point p(x1, y1);
	Point q(x2, y2);
	p.print();
	q.print();


	Point midP = midpoint(p, q);


	cout << "The midpoint of " << p.to_string() << " and " << q.to_string() << " is "
			<< midP.to_string() << endl;
	cout << "Distance: " << distance(p, q) << endl;

	return 0;
}
