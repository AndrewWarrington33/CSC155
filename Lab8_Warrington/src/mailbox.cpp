 /*
 * mailbox.cpp
 * Implementation of the mailbox class
 *  Created on: Nov 1, 2024
 *      Author: andrew
 */

#include "mailbox.h"
#include "message.h"
#include <iostream>
#include <vector>

using namespace std;

Mailbox::Mailbox() : messageCount(0) {
}

void Mailbox::add_message(Message m) {
    inbox.push_back(m); // append the inbox vector with an element that is of the message class
    messageCount++; // update the message count by 1
}

Message Mailbox::get_message(int i) const {
    if (i >= 0 && i < messageCount) {
        return inbox[i]; // get the message at 0 in the inbox vector and print it
    } else {
        cerr << "Index out of bounds" << endl;
        return Message();
    }
}

void Mailbox::remove_message(int i) {
    if (i >= 0 && i < messageCount) {
        inbox.erase(inbox.begin() + i); // remove a message located at index i in the inbox
        messageCount--; // update message count after removing one email
    } else {
        cerr << "Index out of bounds" << endl;
    }
}

void Mailbox::print() {
	    if (inbox.empty()) {
	        cout << "No messages in your inbox" << endl;
	    } else {
	        for (const auto& email : inbox) {
	            email.print();  // call Message::print() on each Message object in the inbox
	            cout << "-----------------" << endl;  // separate messages
	        }
	    }
	}
