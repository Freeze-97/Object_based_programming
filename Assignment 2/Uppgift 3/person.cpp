//
// person.cpp
// Person member functions added with Address and Name

#include "person.h"
#include <iostream>
using namespace std;

// Address member functions
Address::Address() {
    streetAddress = "Empty";
    postNum = "Empty";
    city = "Empty";
}
Address::Address(string pStreetAddress, string pPostNum, string pCity) {
    streetAddress = pStreetAddress;
    postNum = pPostNum;
    city = pCity;
}
void Address::setStreetAddress(string pStreetAddress) {
    streetAddress = pStreetAddress;
}
void Address::setPostNum(string pPostNum) {
    postNum = pPostNum;
}
void Address::setCity(string pCity) {
    city = pCity;
}
string Address::getStreetAddress() const {
    return streetAddress;
}
string Address::getPostNum() const {
    return postNum;
}
string Address::getCity() const {
    return city;
}
void showAddress(Address const &address) {
    cout << address.getStreetAddress() << ", ";
    cout << address.getPostNum() << ", ";
    cout << address.getCity() << endl;
}

// Name member functions
Name::Name(){
    firstName = "Empty";
    lastName = "Empty";
}
Name::Name(string pFirstName, string pLastName) {
    firstName = pFirstName;
    lastName = pLastName;
}
void Name::setFirstName(string pFirstName) {
    firstName = pFirstName;
}
void Name::setLastName(string pLastName) {
    lastName = pLastName;
}
string Name::getFirstName() const {
    return firstName;
}
string Name::getLastName() const {
    return lastName;
}
void showName(Name const &name){
    cout << name.getFirstName() << " ";
    cout << name.getLastName() << endl;
}

// All functions for person
Person::Person() {
    persNr = "Empty";
    skoNr = 0;
}
Person::Person(Name pName, Address pAddress, string pPersNr, int pSkoNr) {
    name = pName;
    address = pAddress;
    persNr = pPersNr;
    skoNr = pSkoNr;
}

void Person::setName(Name pName) {
    name = pName;
}
void Person::setAddress(Address pAddress) {
    address = pAddress;
}

void Person::setPersNr(string pPersNr) {
    persNr = pPersNr;
}
void Person::setSkoNr(int pSkoNr) {
    skoNr = pSkoNr;
}
Name Person::getName() const {
    return name;
}
Address Person::getAddress() const {
    return address;
}
string Person::getPersNr() const {
    return persNr;
}
int Person::getSkoNr() const {
    return skoNr;
}
void showPerson(vector<Person> const &person) {
    for(const auto &e: person){ // Print every person in the vector
        cout << "Name         : ";
        showName(e.getName());
        cout << "Address      : ";
        showAddress(e.getAddress());
        cout << "Social number: " << e.getPersNr() << endl;
        cout << "Shoe size    : " << e.getSkoNr() << endl << endl;
    }

}
void printMenu(vector<Person> &person) {
    // Menu with 3 options
    bool repeat = true;
    do{
        cout << "1. Add a person" << endl;
        cout << "2. Print list of person" << endl;
        cout << "3. Quit" << endl;
        char ch;
        cin >> ch;
        cin.get(); // Clear Enter

        switch(ch){
            case '1': addPerson(person);
                break;
            case '2': showPerson(person);
                break;
            case '3': repeat = false;
                break;
            default: cout << "Invalid input, please try again." << endl;
        }
    }while(repeat); // Stop repeating if user press 3
}
void addPerson(vector<Person> &person) {
    // All variables used for constructor
    string first_name, last_name, street_address, post_num, theCity, pers_nr;
    int shoeSize;

    // User enters all information
    cout << "Enter first name    : " << endl;
    cin >> first_name;
    cout << "Enter last name     : " << endl;
    cin >> last_name;
    cin.get(); // Clear Enter
    cout << "Enter street address: " << endl;
    getline(cin, street_address); // Input with space is possible
    cout << "Enter zip code      : " << endl;
    getline(cin, post_num);
    cout << "Enter city          : " << endl;
    getline(cin, theCity);
    cout << "Enter social number : " << endl;
    cin >> pers_nr;
    cin.get();
    cout << "Enter shoe size     : " << endl;
    cin >> shoeSize;
    cin.get();

    // The new person which will be added
    Person newPerson(Name(first_name, last_name), Address(street_address, post_num, theCity), pers_nr, shoeSize);
    person.push_back(newPerson);
}

