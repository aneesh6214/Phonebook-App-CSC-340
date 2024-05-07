#ifndef USER_H
#define USER_H

#include <string>
using namespace std;

// Abstract class representing a generic user
class User
{
protected:
    string name;
    string phoneNumber;

public:
    User(string name, string phoneNumber);
    virtual ~User() {}

    // Pure Virtual Function (abstract class)
    virtual void display() const = 0;

    string getName() const;
    string getPhoneNumber() const;

    void setName(string newName);
    void setPhoneNumber(string newPhoneNumber);
};

#endif
