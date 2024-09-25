#include <iostream>
using namespace std;

int count = 0;

class Number {
public:
    Number() {
        count++;
        cout << "This is the time when constructor is called for object number " << count << endl;
    }

    ~Number() {
        cout << "This is the time when destructor is called for object number " << count << endl;
        count--;
    }
};

int main() {
    cout << "We are inside our main function" << endl;

    cout << "Creating first object num1" << endl;
    Number num1;
    {
        cout << "Entering this block" << endl;
        cout << "Creating two more objects" << endl;
        Number num2 , num3; 
        cout << "Exiting this block" << endl;
    } 
    cout << "Back to Main" << endl;

    return 0;
}

/*
Destructor never takes an argument nor does it return any value
*/
