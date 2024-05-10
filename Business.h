#ifndef BUSINESS_H
#define BUSINESS_H

#include "User.h"
#include <string>
using namespace std;

class Business : public User
{
private:
    string address;

public:
    Business(string name, string phoneNumber, string address);

    // Overridden display method (to make concrete)
    void display() const override;

    string getAddress() const; //Commit Test

    void setAddress(string newAddress);
};

#endif
