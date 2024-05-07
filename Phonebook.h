#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include "LinkedList.h"
using namespace std;

class PhoneBook
{
private:
    LinkedList users;

public:
    PhoneBook() {}

    void addUser(User *user);
    User *findUserByName(string name);
    void removeUserByName(string name);
    void sortUsersByName();
};

#endif
