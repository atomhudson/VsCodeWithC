#include<iostream>
using namespace std;

class Car {
    private:
    // Private variables, encapsulated
    string company;
    string model;
    int year;

    public:
    // Public setter and getter functions to access private data

    void setCompany(string comp) {
        company = comp;
    }

    void setModel(string mod) {
        model = mod;
    }
    void setYear(int yr) {
        if (yr > 1885) {  // Validating year (encapsulated logic)
            year = yr;
        } else {
            cout << "Invalid year!" << endl;
        }
    }

    string getCompany() {
        return company;
    }

    string getModel() {
        return model;
    }

    int getYear() {
        return year;
    }
};

int main() {
    Car myCar;
    // Using encapsulated functions to set and get private variables
    myCar.setCompany("Tesla");
    myCar.setModel("Model S");
    myCar.setYear(2022);

    cout << "Car Company: " << myCar.getCompany() << endl;
    cout << "Car Model: " << myCar.getModel() << endl;
    cout << "Car Year: " << myCar.getYear() << endl;

    return 0;
}
