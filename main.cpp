#include <iostream>
#include "Package.h"
using namespace std;

int main() {
    int shippingType;


    cout << "Welcome to COP2334 Shipping" << endl << endl;
    cout << "Please Select a Shipping Option:" << endl << endl;
    cout << "1. Standard Shipping ($0.90 per Oz)" << endl << endl;
    cout << "2. 2 Day Delivery Shipping ($1.50 per Oz)" << endl << endl;
    cout << "3. Overnight Shipping (3.00 per Oz)" << endl << endl;
    cin >> shippingType;
    switch (shippingType) {
        case 1: new Package(); break;
        case 2: new TwoDayPackage; break;
        case 3: new OvernightPackage; break;
    }
    cout << "Please enter the shipping information:" << endl << endl;
    cout << "Enter Recipient Name:" << endl;
    getline(cin, );



}
