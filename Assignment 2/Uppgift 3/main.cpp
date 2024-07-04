// Main.cpp for class Person
// name.cpp and address.cpp classes included via person header and person.cpp

#include "person.h"
#include <iostream>

int main() {
    // Create a vector and add 3 pre-made people into the list
    vector<Person> person;
    Person person1(Name("Arthur", "Morgan"), Address("Evergreen 742", "172 89", "Springfield"), "19951212-7763", 43);
    Person person2(Name("John", "Smith"), Address("Bayberry 234", "165 90", "London"), "19870605-9831", 45);
    Person person3(Name("James", "Rose"), Address("Brook Lane 76", "111 23", "Chicago"), "19820623-5320", 44);

    person.push_back(person1); // Add them to the vector
    person.push_back(person2);
    person.push_back(person3);

    printMenu(person); // Main menu
    return 0;
}