#include<iostream>
using namespace std;
class student {
    string name;  // Private member
    public:
        int age;
        bool gender;
    // Default constructor
    student() {
        cout << "Default Constructor" << endl;
    }
    // Parameterized constructor
    student(string s, int a, int g) {
        cout << "Parameterized Constructor" << endl;
        name = s;
        age = a;
        gender = g;
    }
    // Copy Constructore
    student(student &a){
        cout << "Copy Constructor" << endl;
        name = a.getName();
        age = a.age;
        gender = a.gender;
    }
    // Setter for name
    void setName(string s) {
        name = s;
    }
    // Getter for name
    string getName() {
        return name;
    }
    ~student(){
        cout<<"Destructor called"<<endl;
    }
};
void printInfo(student a[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "a[" << i << "]th Student name: " << a[i].getName() << endl;
        cout << "a[" << i << "]th Student age: " << a[i].age << endl;
        cout << "a[" << i << "]th Student gender: " << (a[i].gender ? "Male" : "Female") << endl;
    }
}
int main()
{
    student a[3];  // Correct array declaration

    // Input student information
    for (int i = 0; i < 3; i++) {
        string s;
        cout << "Enter Student Name for a[" << i << "]: ";
        cin >> s;
        a[i].setName(s);

        cout << "Enter Student Age for a[" << i << "]: ";
        cin >> a[i].age;

        cout << "Enter Student Gender (1 for Male, 0 for Female) for a[" << i << "]: ";
        cin >> a[i].gender;
    }
    // Print student information
    printInfo(a, 3);
    student b("Urvi", 23 , 1);
    cout<< "Name: "<<b.getName()<<endl;
    cout<< "Age: "<<b.age<<endl;
    cout<< "Gender: "<<b.gender<<endl;
    student c = b;
    return 0;
}