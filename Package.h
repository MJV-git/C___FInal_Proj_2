#ifndef PACKAGE_H
#define PACKAGE_H
#include <string>
using namespace std;

//declarations of variables
class Package {
    private:
    string name, address, city, state,rName,rAddress,rCity, rState;
    int zipcode, rZipcode;

    double weight = 0;
    double pricePerOz = 0.9;

    public:
    Package();

    //setters for debugging
    void setName(string n);
    void setAddress(string a);
    void setCity(string c);
    void setState(string s);
    void setRName(string rn);
    void setRAddress(string ra);
    void setRCity(string rc);
    void setZipcode(int z);
    void setRZipcode(int rz);

    //functions to display information about objects created
    void DisplayInfo() const;
    void DisplayPrice() const;
    //function to modify price per oz private variable
    void setPricePerOz(double p);
    //function to display weight
    void DisplayWeight() const;
    //function to calculate cost
    void CalculateCost() const;

};

class TwoDayPackage : public Package {
    public:
    TwoDayPackage();
};

class OvernightPackage : public Package {
    public:
    OvernightPackage();
};




#endif //PACKAGE_H
