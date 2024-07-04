// Person list functions

#include "personList.h"
#include <iostream>

void PersonList::setFileName(string pFileName) {
    fileName = pFileName;
}
void PersonList::addPerson(Person const &p) {
    persons.push_back(p); // Place name in vector
}
Person PersonList::getPerson(int index) const {
    return persons[index];
}
int PersonList::countPerson() {
    return  persons.size();
}
void PersonList::sortPersNr() {
    sort(persons.begin(), persons.end(), persNrLT);
}
void PersonList::sortName() {
    sort(persons.begin(), persons.end());
}
void PersonList::sortShoeNr() {
    sort(persons.begin(), persons.end(), shoeNrLT);
}
void PersonList::readFromFile() {
    persons.clear();
    ifstream inf(fileName.c_str());
    Person tempPerson;
    while(inf >> tempPerson){
        persons.push_back(tempPerson);
    }
    inf.close();
}
void PersonList::writeToFile() const {
    ofstream of(fileName.c_str());
    for (const auto &i : persons) {
        of << i << endl;
    }
}
// Comparing
bool persNrLT(const Person &p1, const Person &p2) {
    return p1.getPersNr() < p2.getPersNr();
}
bool shoeNrLT (const Person &p1, const Person &p2) {
    return p1.getSkoNr() > p2.getSkoNr();
}
