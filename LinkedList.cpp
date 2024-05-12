#include "LinkedList.h"
using namespace std;

void LinkedList::swapNodes(Node *first, Node *second) {
    if (first == second) return;

    User *tempUser = first->getUser();
    first->setUser(second->getUser());
    second->setUser(tempUser);
}

void LinkedList::push_back(User *user) {
    Node *newNode = new Node(user);
    push_back(newNode);
}

void LinkedList::push_back(Node *node) {
    if (head == nullptr) {
        head = tail = node;
    } else {
        tail->setNext(node);
        node->setPrev(tail);
        tail = node;
    }
    node->setNext(nullptr);
    size++;
}

void LinkedList::display() const {
    int count = 1;
    Node *current = head;
    while (current != nullptr) {
        cout << "ENTRY " << count << " || ";
        current->getUser()->display();
        current = current->getNext();
        count++;
    }
}

Node *LinkedList::linearSearch(const string &name) const {
    Node *current = head;
    while (current != nullptr) {
        if (current->getUser()->getName() == name) {
            return current;
        }
        current = current->getNext();
    }
    return nullptr;
}

void LinkedList::sort() {
    if (head == nullptr || head->getNext() == nullptr) return;

    bool swapped;
    do {
        swapped = false;
        Node *current = head;
        while (current->getNext() != nullptr) {
            Node *next = current->getNext();
            if (*current->getUser() > *next->getUser()) {
                swapNodes(current, next);
                swapped = true;
            }
            current = next;
        }
    } while (swapped);
}
