#include "Person.h"
#include <iostream>

void Person::display() const {
    cout << "Person Name: " << name << " | Phone Number: " << phoneNumber << " | Birthday: " << birthday << endl;
}
