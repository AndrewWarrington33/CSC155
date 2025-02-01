/*
 * mailbox.h
 *
 *  Created on: Nov 3, 2024
 *      Author: andrew
 */

#ifndef MAILBOX_H_
#define MAILBOX_H_
#include "message.h"
#include <vector>

class Mailbox{

public:
		Mailbox(); //default constructor
		void add_message(Message m);
		Message get_message(int i) const;
		void remove_message(int i);
		void print();

	private:
		int messageCount;
		vector<Message> inbox; // vector data member
};


#endif /* MAILBOX_H_ */
