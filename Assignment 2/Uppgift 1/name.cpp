// name.cpp
// Definition-file for class::name and showName

#include "name.h"
#include <iostream>

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
    cout << "First name : " << name.getFirstName() << endl;
    cout << "Last name  : " << name.getLastName() << endl;
}

