#include <iostream> 
using namespace std; 

class Fraction 
{ 
    private: 
	    int den; 
	    int num; 
    public: 
        void print() { 
            cout << num << "/" << den; 
        } 
        Fraction() { 
            num = 1; den = 1;
        } 
        int &Den() { 
            return den; 
        } 
        int &Num() { 
            return num; 
        } 
}; 

int main() 
{ 
    Fraction f1; 
    f1.Num() = 7; 
    f1.Den() = 9; 
    f1.print(); 
    return 0; 
} 
