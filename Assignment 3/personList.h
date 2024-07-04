//
// Created by Admin on 2019-02-08.
//

#ifndef LABORATION3_PERSONLIST_H
#define LABORATION3_PERSONLIST_H

#include "person.h"
#include <iostream>
#include <fstream>

class PersonList {
private:
    vector<Person> persons;
    string fileName;
public:

    // Get and set fileName
    void setFileName(string pFileName);
    string getFileName() const {return fileName;}

    // add, read persons (vector)
    void addPerson(Person const &p);
    Person getPerson(int index) const;
    int countPerson();

    // Sort the list
    void sortPersNr();
    void sortName();
    void sortShoeNr();

    // Read from file and write to file
    void readFromFile();
    void writeToFile() const;

};
bool persNrLT(const Person &p1, const Person &p2);
bool shoeNrLT (const Person &p1, const Person &p2);

#endif //LABORATION3_PERSONLIST_H
