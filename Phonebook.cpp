#include "PhoneBook.h"
#include "Person.h"
#include "Business.h"
#include <iostream>
#include <limits>
#include <string>
using namespace std;

enum MenuOption {
    EXIT = 0,
    PRINT_BOOK,
    SEARCH_BY_NAME,
    SEARCH_BY_PHONE_NUMBER,
    ADD_ENTRY,
    REMOVE_ENTRY,
    LOAD_FROM_FILE,
    SORT_BY_NAME
};

void PhoneBook::runMenu() {
    int choice = 0;
    do {
        cout << "Options\n";
        cout << "------------------\n";
        cout << "(1) - Print phonebook\n";
        cout << "(2) - Search by name\n";
        cout << "(3) - Search by phone number\n";
        cout << "(4) - Add entry to phonebook\n";
        cout << "(5) - Remove entry from phonebook\n";
        cout << "(6) - Load new phonebook from file\n";
        cout << "(7) - Sort phonebook by name\n";
        cout << "(0) - Exit\n";
        cout << "Select an option --> ";
        cin >> choice;

        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        switch (choice) {
            case PRINT_BOOK:
                users.display();
                break;
            case SEARCH_BY_NAME: {
                string name;
                cout << "Enter name to search: ";
                getline(cin, name);
                Node *result = users.linearSearchName(name);
                if (result) {
                    result->getUser()->display();
                } else {
                    cout << "No entry found with the name: " << name << endl;
                }
                break;
            }
            case SEARCH_BY_PHONE_NUMBER: {
                string phoneNumber;
                cout << "Enter phone number to search: ";
                getline(cin, phoneNumber);
                Node *result = users.linearSearchPhone(phoneNumber);
                if (result) {
                    result->getUser()->display();
                } else {
                    cout << "No entry found with the phone number: " << phoneNumber << endl;
                }
                break;
            }
            case ADD_ENTRY: {
                string type, name, phone, extra;
                cout << "Enter type (person/business): ";
                getline(cin, type);
                cout << "Enter name: ";
                getline(cin, name);
                cout << "Enter phone number: ";
                getline(cin, phone);
                if (type == "person") {
                    cout << "Enter birthday: ";
                    getline(cin, extra);
                    users.push_back(new Person(name, phone, extra));
                } else if (type == "business") {
                    cout << "Enter address: ";
                    getline(cin, extra);
                    users.push_back(new Business(name, phone, extra));
                } else {
                    cout << "Invalid type entered." << endl;
                }
                break;
            }
            case REMOVE_ENTRY: {
                string name;
                cout << "Enter the name of the entry to remove: ";
                getline(cin, name);
                users.removeByName(name);
                break;
            }
            case LOAD_FROM_FILE: {
                string filename;
                cout << "Enter (absolute) file path to load from: ";
                getline(cin, filename);
                cout << filename << endl;
                users.loadFromFile(filename);
                break;
            }
            case SORT_BY_NAME:
                users.sort();
                cout << "Phonebook was sorted by name." << endl;
                break;
            case EXIT:
                cout << "Exiting Phonebook App.\n";
                break;
            default:
                cout << "Invalid option, please try again.\n";
                break;
        }
    } while (choice != EXIT);
}
