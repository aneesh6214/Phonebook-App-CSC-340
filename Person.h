#ifndef PERSON_H
#define PERSON_H

#include "User.h"
#include <string>
using namespace std;

class Person : public User {
private:
    string birthday;

public:
    Person(string name, string phoneNumber, string birthday)
        : User(name, phoneNumber), birthday(birthday) {
    }

    // Overridden display method (to make concrete)
    void display() const override;

    string getBirthday() const { return birthday; };

    void setBirthday(string newBirthday) { birthday = newBirthday; };
};

#endif
