/*
 * message.h
 *
 *  Created on: Nov 1, 2024
 *      Author: andrew
 */

#ifndef MESSAGE_H
#define MESSAGE_H

#include <string>
#include "ccc_time.h"
using namespace std;

class Message{
	public:
		Message(); //default constructor
		Message(string s, string r); //constructor
		Message(string s, string r, string m);  //another variation of a constructor.
		Message(string s, string r, string m, Time& t);  //another variation of a constructor.

		void append(string m);  //mutator
		string to_string() const; //convert the Message into a string
		void print() const;  //use to_string()
		void setTime(Time& t);  //mutator


	private:  //data members
		string sender;
		string recipient;
		string message;
		Time stamp;
};
	
#endif
