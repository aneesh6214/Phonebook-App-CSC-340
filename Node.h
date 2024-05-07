#ifndef NODE_H
#define NODE_H

#include "User.h"
using namespace std;

class Node
{
public:
    User *user;
    Node *next;

    Node(User *data) : user(data), next(nullptr) {}
    Node(User *data, Node *nextUser) : user(data), next(nextUser) {}
};

#endif
