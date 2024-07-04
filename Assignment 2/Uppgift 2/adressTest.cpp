// Testing adress class
// Get, set, pre constructor and constructor with parameters tested

#include <iostream>
#include "address.h"

int main() {
    // Via set and get
    {
        Address address; // Pre constructor
        showAddress(address); // tries get

        cout << endl; // set
        address.setStreetAddress("Spoonerstreet 17");
        address.setPostNum("143 77");
        address.setCity("Quahog");
        showAddress(address);
    }
    cout << "Press ENTER to continue to the next part!" << endl;
    cin.get();

    {
        Address address1("Evergreen 742", "172 89", "Springfield"); // Constructor with parameters
        showAddress(address1);
    }
    return 0;
}
