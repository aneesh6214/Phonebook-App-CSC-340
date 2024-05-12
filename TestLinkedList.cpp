#include "TestLinkedList.h"
#include "LinkedList.h"
#include "Person.h"
#include "Business.h"
#include <iostream>
using namespace std;

void runLinkedListTests() {
    cout << "===========================" << endl;
    cout << "=== Testing Linked List ===" << endl;
    cout << "===========================" << endl << endl;

    cout << "=== push_back() Test ===" << endl;
    push_backTest();

    cout << "=== linearSearch() Test ===" << endl;
    runLinearSearchTest();

    cout << "=== sort() Test ===" << endl;
    runSortTest();
}

void push_backTest() {
    LinkedList list;

    User *person1 = new Person("John Doe", "555-1234", "1990-01-01");
    User *business1 = new Business("Doe Enterprises", "555-5678", "100 Doe St");

    list.push_back(person1);
    list.push_back(business1);

    cout << "List after adding two users:" << endl;
    list.display();
}

void runLinearSearchTest() {
    LinkedList list;
    User *person = new Person("John Doe", "555-1234", "1990-01-01");
    User *person2 = new Person("Jane Doe", "555-2345", "1992-02-02");
    User *business = new Business("Doe Enterprises", "555-5678", "100 Doe St");
    User *business2 = new Business("Moe Enterprises", "551-2423", "101 Moe St");

    list.push_back(person);
    list.push_back(person2);
    list.push_back(business);
    list.push_back(business2);

    // Search for a person
    cout << "Searching for John Doe" << endl;
    Node *personResult = list.linearSearch("John Doe");
    if (personResult != nullptr) {
        cout << "Person found: ";
        personResult->getUser()->display();
    } else {
        cout << "Person not found." << endl;
    }

    // Search for a business
    cout << "Searching for Doe Enterprises" << endl;
    Node *businessResult = list.linearSearch("Doe Enterprises");
    if (businessResult != nullptr) {
        cout << "Business found: ";
        businessResult->getUser()->display();
    } else {
        cout << "Business not found." << endl;
    }

    // Cleanup
    delete person;
    delete business;
}

void runSortTest() {
    LinkedList list;

    // Random objects generated using chatgpt
    list.push_back(new Person("Charlie Johnson", "555-1010", "1985-07-15"));
    list.push_back(new Business("Alpha Enterprises", "555-5678", "100 Alpha St"));
    list.push_back(new Person("Eve Smith", "555-1717", "1992-10-10"));
    list.push_back(new Business("Delta Services", "555-1928", "200 Delta Ave"));
    list.push_back(new Person("Bob Clark", "555-1234", "1990-01-01"));

    cout << "List before sorting:" << endl;
    list.display();

    list.sort();

    cout << "\nList after sorting:" << endl;
    list.display();
}

