#include<iostream>
using namespace std;

class Base {
private:
    // Private members are only accessible within this class
    int privateData;

    protected:
        // Protected members are accessible within this class and derived classes
        int protectedData;

    public:
        // Public members are accessible everywhere
        int publicData;

    // Constructor to initialize values
    Base() {
        privateData = 1;
        protectedData = 2;
        publicData = 3;
    }

    // Public method to access private data
    int getPrivateData() {
        return privateData;
    }

    // Public method to set private data
    void setPrivateData(int value) {
        privateData = value;
    }
};
// Derived class demonstrating access to protected and public members
class Derived : public Base {
public:
    void accessBaseMembers() {
        // privateData is not accessible here
        // protectedData is accessible within the derived class
        protectedData = 5;

        // publicData is accessible
        publicData = 6;
    }

    void showData() {
        cout << "Protected Data: " << protectedData << endl;
        cout << "Public Data: " << publicData << endl;
    }
};
int main() {
    Base baseObj;

    // Access public members directly
    cout << "Public Data (from base class): " << baseObj.publicData << endl;

    // Access private data via public method
    cout << "Private Data (from base class): " << baseObj.getPrivateData() << endl;

    // Set new value for private data using public method
    baseObj.setPrivateData(10);
    cout << "Updated Private Data (from base class): " << baseObj.getPrivateData() << endl;

    Derived derivedObj;
    derivedObj.accessBaseMembers();
    derivedObj.showData();

    return 0;
}
