#include "User.h"
using namespace std;

User::User(string name, string phoneNumber) : name(name), phoneNumber(phoneNumber) {}

string User::getName() const {
    return name;
}

string User::getPhoneNumber() const {
    return phoneNumber;
}

void User::setName(string newName) {
    name = newName;
}

void User::setPhoneNumber(string newPhoneNumber) {
    phoneNumber = newPhoneNumber;
}
