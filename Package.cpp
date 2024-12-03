//
// Created by helve on 12/2/2024.
//

#include "Package.h"

#include <iostream>
#include <ostream>

Package::Package(): name("NULL"), address("NULL"), city("NULL"), state("NULL"), rName("NULL"), rAddress("NULL"), rCity("NULL"), rState("NULL"), zipcode(0), rZipcode(0){

}

void Package::setName(string n) {
    name=n;
}

void Package::setAddress(string a) {
    address=a;
}

void Package::setCity(string c) {
    city=c;
}

void Package::setState(string s) {
    state=s;
}

void Package::setRName(string rn) {
    rName=rn;
}

void Package::setRAddress(string ra) {
    rAddress=ra;
}

void Package::setRCity(string rc) {
    rCity=rc;
}

void Package::setZipcode(int z) {
    zipcode=z;
}

void Package::setRZipcode(int rz) {
    rZipcode=rz;
}

void Package::DisplayInfo() const {
    cout << "----Package Sender Information----" << endl << endl;
    cout << "Name: " << name << endl;
    cout << "Address: " << address << endl;
    cout << "City: " << city << endl;
    cout << "State: " << state << endl;
    cout << "Zipcode: " << zipcode << endl << endl;
    cout << "----Package Recipient Information----" << endl << endl;
    cout << "Recipient Name: " << rName << endl;
    cout << "Recipient Address: " << rAddress << endl;
    cout << "Recipient City: " << rCity << endl;
    cout << "Recipient State: " << rState << endl;
    cout << "Recipient Zipcode: " << rZipcode << endl;
}

void Package::DisplayPrice() const {
    cout << "----Package Price Information----" << endl << endl;
    cout << "$" << pricePerOz << " Per Oz";
}

void Package::DisplayWeight() const {
    cout << "----Package Weight Information----" << endl << endl;
    cout << "Weight: " << weight << endl;
}

double Package::CalculateCost() const {
    return pricePerOz * weight;
}
