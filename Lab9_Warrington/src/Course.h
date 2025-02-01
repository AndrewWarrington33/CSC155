#ifndef COURSE_H
#define COURSE_H
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Course{
	friend ostream& operator<<(ostream& o, const Course& c);
	public:
		void print() const;
		Course();
		Course(string n, int h);
		Course(string n, int h, char g);
		void changeGrade(char c);
		char getGrade() const;
		int getHours() const;
	private:
		string name;
		int hours;
		char grade;
};

#endif
