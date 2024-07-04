//
// Created by Admin on 2019-02-10.
#include "userInterface.h"

void UserInterface::run() {
    menu();
}
void UserInterface::menu() {
    bool repeat = true;
    do {
        cout << "MAIN MENU" << endl << endl;
        cout << "1: Add a person." << endl;
        cout << "2: Print the list of people." << endl;
        cout << "3: Save to the file." << endl;
        cout << "4: Read from file." << endl;
        cout << "5: Sort by name." << endl;
        cout << "6: Sort by social security number." << endl;
        cout << "7: Sort by shoe size." << endl;
        cout << "q: Exit program." << endl;

        char ch;
        cin >> ch;
        cin.get();
        switch (ch) {
            case '1': addPerson();
                break;
            case '2': printList();
                break;
            case '3': saveOnFile();
                break;
            case '4': readFromFile();
                break;
            case '5': sortByName();
                break;
            case '6': sortByPersNr();
                break;
            case '7': sortByShoeSize();
                break;
            case 'q': repeat = false;
                break;
            default:
                cout << "Invalid input!" << endl;
        }
    }while(repeat && cin);
}
void UserInterface::addPerson() {
    string firstName;
    cout << "First Name: ";
    getline(cin, firstName);
    string lastName;
    cout << "Last Name: ";
    getline(cin, lastName);
    Name name{firstName, lastName};

    string streetAddress;
    cout << "Street address: ";
    getline(cin, streetAddress);
    string postNum;
    cout << "Zip code: ";
    getline(cin, postNum);
    string city;
    cout << "City: ";
    getline(cin, city);
    Address address{streetAddress, postNum, city};

    string persNr;
    cout << "Social security number: ";
    getline(cin, persNr);

    int shoeNr;
    cout << "Shoe size: ";
    cin >> shoeNr;
    cin.get();

    personlist.addPerson(Person(name, address, persNr, shoeNr));
}
void UserInterface::printList() {
    for(int i = 0; i < personlist.countPerson(); i++)
    {
        Person p = personlist.getPerson(i);
        cout << "Name         : ";
        showName (p.getName());
        cout << "Address      : ";
        showAddress (p.getAddress());
        cout << "Social number: " << p.getPersNr() << endl;
        cout << "Shoe size    : " << p.getSkoNr() << endl << endl;
    }
}
void UserInterface::saveOnFile() {
    cout << "SAVE ON FILE!" << endl << endl;
    cout << "Filename: " << endl;
    string fileName;
    getline(cin, fileName);
    personlist.setFileName(fileName);
    personlist.writeToFile();
}
void UserInterface::readFromFile() {
    cout << "READ FROM FILE!" << endl << endl;
    cout << "Filename: " << endl;
    string fileName;
    getline(cin, fileName);
    personlist.setFileName(fileName);
    personlist.readFromFile();
}
void UserInterface::sortByName() {
    cout << "Sorted by name!" << endl;
    personlist.sortName();
}
void UserInterface::sortByPersNr() {
    cout << "Sorted by social security number!" << endl;
    personlist.sortShoeNr();
}
void UserInterface::sortByShoeSize() {
    cout << "Sorted by shoe size!" << endl;
    personlist.sortShoeNr();
}