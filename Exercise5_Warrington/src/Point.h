#ifndef POINT_H_
#define POINT_H_

#include <string>
using namespace std;

class Point {

	public:
		Point();                    // Default constructor
		Point(double x, double y);         // Constructor w parameters

		double getX() const;            // Access x-coordinate
		double getY() const;            // Access y-coordinate

		void print() const;          // Print the point
		string to_string() const;    // Convert point to string

	private:
		double x_coord;                 // Store x-coordinate
		double y_coord;                 // Store y-coordinate
};

#endif /* POINT_H_ */

