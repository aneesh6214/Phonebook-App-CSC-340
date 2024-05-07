#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "Node.h"
using namespace std;

class LinkedList
{
private:
    Node *head;

public:
    LinkedList() : head(nullptr) {}
    ~LinkedList();

    void insert(User *user);
    Node *linearSearch(string name) const;
    Node *binarySearch(string name) const;
    void sort();
};

#endif
