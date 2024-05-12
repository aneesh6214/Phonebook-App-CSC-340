#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "Node.h"
#include <iostream>
using namespace std;

class LinkedList {
private:
    Node *head;
    Node *tail;
    int size;

    void swapNodes(Node *first, Node *second);

public:
    LinkedList() : head(nullptr), tail(nullptr), size(0) {
    }

    //~LinkedList();

    void push_back(User *user);

    void push_back(Node *node);

    void removeByName(const string &name);

    void display() const;

    Node *linearSearchName(const string &name) const;

    Node *linearSearchPhone(const string &phoneNumber) const;

    void loadFromFile(const string &filename);

    void sort();

    //void insert_before(User *user, Node *beforeNode);

    Node *getHead() const { return head; }
    Node *getTail() const { return tail; }
    int getSize() const { return size; }
    void setHead(Node *node) { head = node; }
    void setTail(Node *node) { tail = node; }
    void setSize(int newSize) { size = newSize; }
};

#endif // LINKEDLIST_H
