#ifndef USER_H
#define USER_H

#include <string>
using namespace std;

// Abstract class representing a generic user
class User {
protected:
    string name;
    string phoneNumber;

public:
    User(string name, string phoneNumber)
        : name(name), phoneNumber(phoneNumber) {
    }

    virtual ~User() {
    }

    // Pure Virtual Function (abstract class)
    virtual void display() const = 0;

    string getName() const { return name; };
    string getPhoneNumber() const { return phoneNumber; };

    void setName(string newName) { name = newName; };
    void setPhoneNumber(string newPhoneNumber) { phoneNumber = newPhoneNumber; };

    bool operator>(const User &other) const {
        return this->getName() > other.getName();
    }
};

#endif
