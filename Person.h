#ifndef PERSON_H
#define PERSON_H

#include "User.h"
#include <string>
using namespace std;

class Person : public User
{
private:
    string birthday;
    string homePhoneNumber;

public:
    Person(string name, string phoneNumber, string birthday);

    // Overridden display method (to make concrete)
    void display() const override;

    string getBirthday() const;
    string getHomePhoneNumber() const;

    void setBirthday(string newBirthday);
    void setHomePhoneNumber(string newHomePhoneNumber);
};

#endif
