// Header-file for name.cpp

#ifndef LABORATION2_NAME_H
#define LABORATION2_NAME_H
#include <string>
using namespace std;

class Name {
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
#endif