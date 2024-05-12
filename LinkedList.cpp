#include "LinkedList.h"
#include "Business.h"
#include "Person.h"
#include "Phonebook.h"
#include <fstream>
#include <sstream>

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

Node *LinkedList::linearSearchName(const string &name) const {
    Node *current = head;
    while (current != nullptr) {
        if (current->getUser()->getName() == name) {
            return current;
        }
        current = current->getNext();
    }
    return nullptr;
}

Node *LinkedList::linearSearchPhone(const string &phoneNumber) const {
    Node *current = head;
    while (current != nullptr) {
        if (current->getUser()->getPhoneNumber() == phoneNumber) {
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

void LinkedList::loadFromFile(const string &filename) {
    ifstream file(filename);
    if (!file.is_open()) {
        cout << "Failed to open file: " << filename << endl;
        return;
    }

    string line;
    while (getline(file, line)) {
        stringstream ss(line);
        string type, name, phone, extra;
        getline(ss, type, ',');
        getline(ss, name, ',');
        getline(ss, phone, ',');
        getline(ss, extra);

        if (type == "Person") {
            User *person = new Person(name, phone, extra);
            this->push_back(person);
        } else if (type == "Business") {
            User *business = new Business(name, phone, extra);
            this->push_back(business);
        }
    }

    file.close();
    cout << "Phonebook loaded from " << filename << endl;
}

void LinkedList::removeByName(const string &name) {
    Node *toRemove = linearSearchName(name);
    if (toRemove == nullptr) {
        cout << "No entry found with the name: " << name << endl;
        return;
    }

    if (toRemove->getPrev() != nullptr) {
        toRemove->getPrev()->setNext(toRemove->getNext());
    } else {
        head = toRemove->getNext();
    }

    if (toRemove->getNext() != nullptr) {
        toRemove->getNext()->setPrev(toRemove->getPrev());
    } else {
        tail = toRemove->getPrev();
    }

    delete toRemove->getUser();
    delete toRemove;
    size--;
    cout << "Entry removed: " << name << endl;
}
