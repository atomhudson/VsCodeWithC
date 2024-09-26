#include<iostream>
using namespace std;

class C2;

class C1{
    int c1Val;
    friend void exchange(C1 &, C2 &);
public: 
    void intdata(int a){
        c1Val = a;
    }
    void display(void){
        cout << c1Val << endl;
    }
};

class C2{
    int c2Val;
    friend void exchange(C1 &, C2 &);
public: 
    void intdata(int a){
        c2Val = a;
    }
    void display(void){
        cout << c2Val << endl;
    }
};

// swapping using bitwise XOR operator
void exchange(C1 &x, C2 &y) {
    if (x.c1Val != y.c2Val) {  
        x.c1Val = x.c1Val ^ y.c2Val;
        y.c2Val = x.c1Val ^ y.c2Val;
        x.c1Val = x.c1Val ^ y.c2Val;
    }
}

int main() {
    C1 c1;
    C2 c2;
    
    c1.intdata(37);
    c2.intdata(64);
    
    cout << "Before exchange:" << endl;
    c1.display();
    c2.display();
    
    exchange(c1, c2);
    
    cout << "After exchange:" << endl;
    c1.display();
    c2.display();
    
    return 0;
}
