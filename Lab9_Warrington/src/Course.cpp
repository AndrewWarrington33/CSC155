#include <iostream>
#include <string>
#include <vector>
#include "Student.h"
using namespace std;


Course::Course(){			       
  name = "";
  hours = 0;
  grade = 'N';
}

Course::Course(string n, int h){
  name = n;
  hours = h;
  grade = 'N';
}

Course::Course(string n, int h, char g){
  name = n;
  hours = h;
  grade = g;
}

void Course::changeGrade(char c){
  grade = c;
}

char Course::getGrade() const{
  return grade;
}

int Course::getHours() const{
  return hours;
}

void Course::print() const{
  cout << "Course: " << name << "\nHours: " << hours << "\nGrade: " << grade << endl;
}

ostream& operator<<(ostream& o, const Course& c){
	string theCourse = "";
	theCourse += "Course: " + c.name + "\nHours: "
			  + to_string(c.hours) + "\nGrade: "
			  + c.grade + "\n";
	o << theCourse;
	return o;

}

