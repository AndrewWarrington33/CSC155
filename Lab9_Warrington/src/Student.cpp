#include <iostream>
#include <vector>
#include <string>
#include "Student.h"
using namespace std;

void Student::gpa_override(double G){
  gpa = G;
}

double Student::gpa_calc() const{
  char g;
  int h, total_h = 0;
  double points = 0;
  for(int i = 0; i < my_classes.size(); i++){
    g = my_classes[i].getGrade();
    h = my_classes[i].getHours();
    total_h += h;
    switch(g){
		case 'A':
		  points += 4*h;
		  break;
		case 'B':
		  points += 3*h;
		  break;
		case 'C':
		  points += 2*h;
		  break;
		case 'D':
		  points += 1*h;
		  break;
    }
  }
  return points/total_h;
}


Student::Student(string fN, string lN){
  fName = fN;
  lName = lN;
  address = "N/A";
  gpa = 0;
}

Student::Student(){
  fName = "N/A";
  lName = "N/A";
  address = "N/A";
  gpa = 0;
}


const Student& Student::operator=(const Student& otherStu){ //assignment operator
	if(this != &otherStu){  //we don't want self assignment
		fName = otherStu.fName;
		lName = otherStu.lName;
		address = otherStu.address;
		gpa = 88;
	}
	return *this;
}


Student::Student(const Student& stu){ //copy constructor
	fName = stu.fName;
	lName = stu.lName;
	address = "Nowhere";
	//gpa = stu.gpa;
	gpa = 4.0;
}

ostream& operator<<(ostream& outS, const Student& stu){
	outS << "Name: " << stu.fName << " " << stu.lName << "\nAddress: " << stu.address
		 << "\nGPA = " << stu.gpa << endl;
	return outS;
}

void Student::setAddress(string addr){
  address = addr;
}
  
void Student::addCourse(Course c){
  my_classes.push_back(c);
}

void Student::print() const{
  cout << "Student: " << fName << " " << lName << "\nCourses:\n";
  for(int i = 0; i < my_classes.size(); i++)
    my_classes[i].print();
  cout << "Address: " << address << "\nGPA = " << gpa_calc() << endl;
}

