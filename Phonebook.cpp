#include "PhoneBook.h"
#include <iostream>
using namespace std;

enum MenuOption
{
    SEARCH_BY_NAME = 1,
    SEARCH_BY_PHONE_NUMBER,
    ADD_ENTRY,
    REMOVE_ENTRY,
    LOAD_FROM_FILE,
    SORT_BY_NAME,
    EXIT
};

void PhoneBook::runMenu()
{
    int choice = 0;
    do
    {
        cout << "Options\n";
        cout << "------------------\n";
        cout << "(1) - Search by name\n";
        cout << "(2) - Search by phone number\n";
        cout << "(3) - Add entry to phonebook\n";
        cout << "(4) - Remove entry from phonebook\n";
        cout << "(5) - Load new phonebook from file\n";
        cout << "(6) - Sort phonebook by name\n";
        cout << "(7) - Exit\n";
        cout << "Select an option --> ";
        cin >> choice;

        switch (choice)
        {
        case SEARCH_BY_NAME:
            // Implement Search by name
            break;
        case SEARCH_BY_PHONE_NUMBER:
            // Implement Search by phone number
            break;
            case ADD_ENTRY: /*{
                string type, name, phoneNumber, birthday, address, website;
                cout << "Enter type (person/business): ";
                cin >> type;
                cout << "Enter name: ";
                cin.ignore(); // ignore newline left in the buffer
                getline(cin, name);
                cout << "Enter phone number: ";
                getline(cin, phoneNumber);

                if (type == "person") {
                    cout << "Enter birthday: ";
                    getline(cin, birthday);
                    addEntry(type, name, phoneNumber, birthday);
                } else if (type == "business") {
                    cout << "Enter address: ";
                    getline(cin, address);
                    addEntry(type, name, phoneNumber, address);
                } else {
                    cout << "Invalid type entered.\n";
                }

                break;
            }
            */
            break;
        case REMOVE_ENTRY:
            // Implement Remove entry
            break;
        case LOAD_FROM_FILE:
            // Implement Load from file
            break;
        case SORT_BY_NAME:
            // Implement Sort by name
            break;
        case EXIT:
            cout << "Exiting Phonebook App.\n";
            break;
        default:
            cout << "Invalid option, please try again.\n";
            break;
        }
    } while (choice != EXIT); // Use the enum for exit condition
}
