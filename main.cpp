#include <iostream>
#include "Package.h"
using namespace std;

/*Changelog since presentation:
 *CHANGES WILL BE MARKED WITH ########### COMMENT
 *ADDED COMMENTS AND DOCUMENTATION
 *ADDED INPUT VALIDATION FOR ZIPCODES
 *ADDED INPUT VALIDATION FOR PACKAGE WEIGHT
 */

int main() {
    //declare shipping type variable for switch statement
    int shippingType;
    //declare package variable pointers
    Package *package1;
    TwoDayPackage *package2;
    OvernightPackage *package3;
    //user prompts
    cout << "Welcome to COP2334 Shipping" << endl << endl;
    cout << "Please Select a Shipping Option:" << endl << endl;
    cout << "1. Standard Shipping ($0.90 per Oz)" << endl;
    cout << "2. 2 Day Delivery Shipping ($1.50 per Oz)" << endl;
    cout << "3. Overnight Shipping ($3.00 per Oz)" << endl;
    cin >> shippingType;
    //switch statement which creates new package object
    switch (shippingType) {
        case 1:
            package1 = new Package;
            package1->DisplayInfo();
            package1->DisplayPrice();
            package1->CalculateCost();
        break;
        case 2:
            package2 = new TwoDayPackage;
            package2->DisplayInfo();
            package2->DisplayPrice();
            package2->CalculateCost();
        break;
        case 3:
            package3 = new OvernightPackage;
            package3->DisplayInfo();
            package3->DisplayPrice();
            package3->CalculateCost();
        break;
        default:
            cout << "Invalid Option" << endl << endl;
        break;
    }
}
