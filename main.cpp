#include "PhoneBook.h"
#include "TestBusinessAndPerson.h"
#include "TestLinkedList.h"

int main() {
    PhoneBook myPhoneBook;
    cout << "===============================================" << endl;
    cout << " === Welcome to the phonebook application! === " << endl;
    cout << "===============================================" << endl;
    myPhoneBook.runMenu();
    //testBusiness();
    //testPerson();
    //runLinkedListTests();
    return 0;
}
