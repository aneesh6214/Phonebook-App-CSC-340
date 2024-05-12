#ifndef NODE_H
#define NODE_H

#include "User.h"
using namespace std;

class Node {
private:
    User *user;
    Node *next;
    Node *prev;

public:
    Node(User *data, Node *nextNode = nullptr, Node *prevNode = nullptr)
        : user(data), next(nextNode), prev(prevNode) {
    }

    User *getUser() const { return user; }
    Node *getNext() const { return next; }
    Node *getPrev() const { return prev; }

    void setUser(User *newUser) { user = newUser; }
    void setNext(Node *newNext) { next = newNext; }
    void setPrev(Node *newPrev) { prev = newPrev; }
};
#endif
