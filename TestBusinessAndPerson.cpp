#include "TestBusinessAndPerson.h"
#include "Business.h"
#include "Person.h"
#include <iostream>
using namespace std;

void testBusiness() {
    cout << "\n\n";
    Business b("ABC Corp", "123456789", "123 Biz St");
    cout << "=== Testing Business Constructor and Display === " << endl;
    cout << "Expected: Business Name: ABC Corp || Phone Number: 123456789 || Address: 123 Biz St" << endl;
    cout << "Actual: ";
    b.display(); 
    
    b.setAddress("124 Biz St");
    cout << "After setAddress (Expected Address: 124 Biz St):" << endl;
    b.display();
}

void testPerson() {
    cout << "\n\n";
    Person p("John Doe", "987654321", "1990-01-01");
    cout << "=== Testing Person Constructor and Display === " << endl;
    cout << "Expected: Person Name: John Doe || Phone Number: 987654321 || Birthday: 1990-01-01" << endl;
    p.display();
    
    p.setBirthday("1991-01-01");
    cout << "After setBirthday (Expected Birthday: 1991-01-01):" << endl;
    p.display();
}
