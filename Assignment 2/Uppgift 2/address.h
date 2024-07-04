// Header file for addressTest.cpp

#ifndef LABORATION2_UPPGIFT2_ADDRESS_H
#define LABORATION2_UPPGIFT2_ADDRESS_H
#include <string>

using namespace std;

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

#endif //LABORATION2_UPPGIFT2_ADDRESS_H
