// Test-file to run name.cpp
// Testing set, get and both constructor

#include <iostream>
#include "name.h"

int main() {
    // Via set and get
    {
        Name name; // Object of the class
        showName(name);

        cout << endl;
        name.setFirstName("Arthur");
        name.setLastName("Morgan");
        showName(name);
    }
    cout << "Press ENTER to continue to the next part!" << endl;
    cin.get();

    // Pre-Constructor
    {
        Name name1;
        showName(name1);
    }
    cout << "Press ENTER to continue to the next part!" << endl;
    cin.get();

    // Constructor with parameters
    {
        Name name2("James", "Bond");
        showName(name2);
    }
    return 0;
}