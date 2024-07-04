// Definition-file for address

#include "address.h"
#include <iostream>

Address::Address() {
    streetAddress = "Empty";
    postNum = "Empty";
    city = "Empty";
}
Address::Address(string pStreetAddress, string pPostNum, string pCity) {
    streetAddress = pStreetAddress;
    postNum = pPostNum;
    city = pCity;
}
void Address::setStreetAddress(string pStreetAddress) {
    streetAddress = pStreetAddress;
}
void Address::setPostNum(string pPostNum) {
    postNum = pPostNum;
}
void Address::setCity(string pCity) {
    city = pCity;
}
string Address::getStreetAddress() const {
    return streetAddress;
}
string Address::getPostNum() const {
    return postNum;
}
string Address::getCity() const {
    return city;
}
void showAddress(Address const &address) {
    cout << "Street Address : " << address.getStreetAddress() << endl;
    cout << "Post Number    : " << address.getPostNum() << endl;
    cout << "City           : " << address.getCity() << endl;
}


