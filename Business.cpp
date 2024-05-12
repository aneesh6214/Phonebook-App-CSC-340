#include "Business.h"
#include <iostream>

Business::Business(string name, string phoneNumber, string address)
    : User(name, phoneNumber), address(address) {
}

void Business::display() const {
    cout << "Business Name: " << name << " | Phone Number: " << phoneNumber << " | Address: " << address << endl;
}
