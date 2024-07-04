//
// Created by Admin on 2019-02-10.

#include "personList.h"

#ifndef LABORATION3_USERINTERFACE_H
#define LABORATION3_USERINTERFACE_H

class UserInterface {
private:
    PersonList personlist;

    void menu();
    void addPerson();
    void printList();
    void saveOnFile();
    void readFromFile();
    void sortByName();
    void sortByPersNr();
    void sortByShoeSize();

public:
    void run();
};

#endif //LABORATION3_USERINTERFACE_H
