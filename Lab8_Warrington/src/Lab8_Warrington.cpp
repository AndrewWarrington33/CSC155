//============================================================================
// Name        : Lab8_Warrington.cpp
// Author      : Andrew Warrington
// Date		   : 11/1/2024
// Description : CSC155 Lab 8 Driver Program
//============================================================================

#include <iostream>
#include "Mailbox.h"
using namespace std;

int main() {

	Mailbox myMail;

	Message message1("Jim", "Bob", "Hello, see ya later!");

	myMail.add_message(message1);

	Message message2("Alice", "Suzie", "I'm running late!");

	Time message2TimeUpdate(6, 21, 44);

	message2.setTime(message2TimeUpdate);

	myMail.add_message(message2);

	myMail.get_message(0).print(); //Message print function

	myMail.print();

	myMail.remove_message(0); //Remove the first Message from the Mailbox

	myMail.print(); //Mailbox print function

	return 0;
}
