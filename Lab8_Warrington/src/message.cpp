/*
 * message.cpp
 * Implementation of the Message class.
 * Author: andrew
 */

#include "message.h"
#include <iostream>
#include <string>
using namespace std;

//default constructor.
Message::Message(){
	sender = "";
	recipient = "";
	message = "";
	stamp = Time();   //there is no time stamp yet.
}

Message::Message(string s, string r){
	sender = s;
	recipient = r;
	message = "";
	stamp = Time();   //set the time of this Message to the current time (now).
}

// Constructor with sender, recipient, and message
Message::Message(string s, string r, string m) : sender(s), recipient(r), message(m), stamp(Time()) {}

// Constructor with sender, recipient, message, and time
Message::Message(string s, string r, string m, Time& t) : sender(s), recipient(r), message(m), stamp(t) {}


void Message::append(string m){

	message += m;

}

void Message::print() const{

	cout << to_string() << endl;
}

string Message::to_string() const{
	string theMessage = "From: " + sender + "\n";
	theMessage += "To: " + recipient + "\n";
	theMessage += "Message: " + message + "\n";
	theMessage += "Timestamp: " + stamp.to_string() + "\n";

	return theMessage;
}


void Message::setTime(Time& t){
	stamp = t;
}
