// Header file for person

#ifndef LABORATION2_UPPGIFT3_PERSON_H
#define LABORATION2_UPPGIFT3_PERSON_H

#include <vector>
#include <string>
using namespace std;
// Class for address
class Address {
private:
    string streetAddress; // Data-members
    string postNum;
    string city;

public:
    Address(); // The default constructor
    Address(string pStreetAddress, string pPostNum, string pCity);

    void setStreetAddress(string pStreetAddress); // Give members addresses
    void setPostNum(string pPostNum);
    void setCity(string pCity);

    string getStreetAddress() const; // Get addresses from the members
    string getPostNum() const;
    string getCity() const;

};
void showAddress(Address const &address);

// Class for name
class Name{
private:
    string firstName; // Members
    string lastName; // Only reachable via member functions

public:
    Name();
    Name(string pFirstName, string pLastName);

    void setFirstName(string pFirstName); // Set the first name
    void setLastName(string pLastName); // Set the last name

    // Used to get the first and last name, const because change is not needed
    string getFirstName() const;
    string getLastName() const;
};
void showName(Name const &name); // Outside class,it will use member function

// Class for person
class Person{
private:
    Name name; // Data members
    Address address;
    string persNr;
    int skoNr;

public:
    Person(); // Pre constructor
    Person(Name pName, Address pAddress, string pPersNr, int pSkoNr);// Constructor with parameters

    void setName(Name pName); // Set for Person
    void setAddress(Address pAddress);
    void setPersNr(string pPersNr);
    void setSkoNr(int pSkoNr);

    Name getName() const; // Get for Person
    Address getAddress() const;
    string getPersNr() const;
    int getSkoNr() const;

};
void showPerson(vector<Person> const &person); // Used to show all info
void addPerson(vector<Person> &person); // Add a new person into the list
void printMenu(vector<Person> &person); // Main menu

#endif //LABORATION2_UPPGIFT3_PERSON_H
