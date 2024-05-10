#include "Person.h"
#include <iostream>

Person::Person(string name, string phoneNumber, string birthday)
    : User(name, phoneNumber), birthday(birthday) {}

void Person::display() const {
    cout << "Person Name: " << name << " || Phone Number: " << phoneNumber << " || Birthday: " << birthday << endl;
}

string Person::getBirthday() const {
    return birthday;
}

void Person::setBirthday(string newBirthday) {
    birthday = newBirthday;
}
