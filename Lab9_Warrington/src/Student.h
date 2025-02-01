#ifndef STUDENT_H
#define STUDENT_H
#include "Course.h"
#include <string>
#include <iostream>
#include <vector>
using namespace std;

class Student{
	friend ostream& operator<<(ostream& outS, const Student& stu);
	public:  //member functions
		const Student& operator=(const Student& otherStu); //assignment operator
		Student(const Student& stu); //copy constructor
		double gpa_calc() const;
		void print() const;
		Student();
		Student(string fN, string lN);
		void gpa_override(double G);
		void setAddress(string addr);
		void addCourse(Course c);
	private:   //data members/characteristics
		vector<Course> my_classes;
		double gpa;
		string address;
		string email;
		string fName, lName;
};

#endif
