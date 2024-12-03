//
// Created by helve on 12/2/2024.
//

#include "Package.h"

#include <iostream>
#include <ostream>

Package::Package(): name("NULL"), address("NULL"), city("NULL"), state("NULL"), rName("NULL"), rAddress("NULL"), rCity("NULL"), rState("NULL"), zipcode(0), rZipcode(0){
    cout << "Please enter the shipping information:" << endl << endl;
    cout << "Enter Recipient Name:" << endl;
    cin.ignore();
    getline(cin, rName);
    cout << "Enter Recipient Address:" << endl;
    getline(cin,rAddress);
    cout << "Enter Recipient City:" << endl;
    getline(cin, rCity);
    cout << "Enter Recipient State:" << endl;
    getline(cin, rState);
    cout << "Enter Recipient Zipcode:" << endl;
    cin >> rZipcode;
    cout << "Enter Return Address Information:" << endl << endl;
    cout << "Enter Sender Name:" << endl;
    cin.ignore();
    getline(cin,name);
    cout << "Enter Sender Address:" << endl;
    getline(cin,address);
    cout << "Enter Sender City:" << endl;
    getline(cin,city);
    cout << "Enter Sender State:" << endl;
    getline(cin,state);
    cout << "Enter Sender Zipcode:" << endl;
    cin >> zipcode;
    cout << "Enter Weight of Package(in Oz):" << endl;
    cin >> weight;

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
    cout << "Recipient Zipcode: " << rZipcode << endl << endl;
}

void Package::DisplayPrice() const {
    cout << "----Package Price Information----" << endl << endl;
    cout << "$" << pricePerOz << " Per Oz";
}

void Package::DisplayWeight() const {
    cout << "----Package Weight Information----" << endl << endl;
    cout << "Weight: " << weight << endl;
}

void Package::CalculateCost() const {
    cout << "Cost: $" << weight * pricePerOz << endl << endl;
}
