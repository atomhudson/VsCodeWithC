#include<iostream>
using namespace std;

// Abstract class (with pure virtual function)
class Shape {
    public:
        virtual void draw() = 0;  // Pure virtual function (abstract)
};

class Circle : public Shape {
    public:
        void draw() override {
            cout << "Drawing a Circle" << endl;
        }
};

class Rectangle : public Shape {
    public:
        void draw() override {
            cout << "Drawing a Rectangle" << endl;
        }
};

int main() {
    // Abstract class cannot be instantiated directly
    // Shape shape;   // This will throw an error

    // Creating instances of derived classes
    Circle c;
    Rectangle r;

    // Using abstraction to call the draw function
    c.draw();   // Output: Drawing a Circle
    r.draw();   // Output: Drawing a Rectangle

    return 0;
}
