#ifndef PACKAGE_H
#define PACKAGE_H
#include <string>
using namespace std;


class Package {
    private:
    string name, address, city, state,rName,rAddress,rCity, rState;
    int zipcode, rZipcode;

    double weight = 0;
    const double pricePerOz = 0.9;

    public:
    Package();

    void setName(string n);
    void setAddress(string a);
    void setCity(string c);
    void setState(string s);
    void setRName(string rn);
    void setRAddress(string ra);
    void setRCity(string rc);
    void setZipcode(int z);
    void setRZipcode(int rz);


    void DisplayInfo() const;
    void DisplayPrice() const;

    void DisplayWeight() const;
    void CalculateCost() const;

};

class TwoDayPackage : public Package {
    private:
    double pricePerOz = 1.5;
};

class OvernightPackage : public Package {
    private:
    double pricePerOz = 3.0;
};




#endif //PACKAGE_H
