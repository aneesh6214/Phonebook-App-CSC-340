#ifndef BUSINESS_H
#define BUSINESS_H

#include "User.h"
#include <string>
using namespace std;

class Business : public User
{
private:
    string address;
    string website;

public:
    Business(string name, string phoneNumber, string address, string website);

    // Overridden display method (to make concrete)
    void display() const override;

    string getAddress() const; //Commit Test
    string getWebsite() const;

    void setAddress(string newAddress);
    void setWebsite(string newWebsite);
};

#endif
