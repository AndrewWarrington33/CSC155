//============================================================================
// Name        : Lab9_Warrington.cpp
// Author      : Andrew Warrington
// Date        : 11/15/2024
// Description : Driver program for Course and Student classes
//============================================================================

#include <vector>
#include <iostream>
#include "Student.h"
#include "Course.h"

int main() {

    // Test Student default constructor
    Student student1;

    // Test Student parameterized constructors
    Student Andrew("Andrew", "Warrington");
    Andrew.setAddress("456 Sesame St, Boston, MA 02116");

    Student Katie("Katie", "Johnson");
    Katie.setAddress("123 Happy Ln, Des Plaines, IL 60016");

    // Test Student os operator
    cout << "Testing Student output operator (operator<<):\n";
    cout << Andrew << endl;
    cout << Katie << endl;

    // Test the assignment operator (operator=)
    cout << "Testing assignment operator (operator=):\n";
    student1 = Andrew;
    cout << "student1:\n" << student1 << endl;

    // Test copy constructor
    cout << "Testing copy constructor:\n";
    Student student4 = Andrew;
    cout << "student4:\n" << student4 << endl;

    // Test Course parameterized constructors and functions
    Course CSC155("CSC 155", 3);
    CSC155.changeGrade('A');
    Course MAT144("MAT 144", 3);
    MAT144.changeGrade('A');
    Course MAT251("MAT 251", 4);
    MAT251.changeGrade('A');
    Course BIO101("BIO 101", 4);
    BIO101.changeGrade('A');
    Course CHEM101("CHEM 101", 4);
    CHEM101.changeGrade('A');

    // Test default Course constructor
    cout << "\nTesting default Course constructor:\n";
    Course defaultCourse;
    cout << "Default course: " << defaultCourse << endl;

    // Test getGrade and getHours for courses
    cout << "\nTesting Course getGrade() and getHours():\n";
    cout << "CSC155 Grade: " << CSC155.getGrade() << ", Hours: " << CSC155.getHours() << endl;
    cout << "MAT144 Grade: " << MAT144.getGrade() << ", Hours: " << MAT144.getHours() << endl;

    // Test Course print() function
    cout << "\nTesting Course print() function:\n";
    CSC155.print();
    MAT144.print();
    MAT251.print();

    // Test Student addCourse and print functions
    Andrew.addCourse(CSC155);
    Andrew.addCourse(MAT144);
    Andrew.addCourse(MAT251);

    Katie.addCourse(BIO101);
    Katie.addCourse(CHEM101);

    // Test GPA calculation and GPA override
    cout << "\nTesting GPA calculation and override:\n";
    Andrew.gpa_calc();  // Store GPA value
    Katie.gpa_calc();   // Store GPA value

    cout << "\nTesting Student addCourse() and print() functions:\n";
    Andrew.print();  // Print GPA after calculation
    Katie.print();   // Print GPA after calculation

    // Override GPAs
    Katie.gpa_override(3.9);
    Andrew.gpa_override(3.7);

    cout << "Katie's GPA after override: " << Katie << endl;
    cout << "Andrew's GPA after override: " << Andrew << endl;

    return 0;
}
