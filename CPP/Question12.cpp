
#include<iostream> 

using namespace std; 

class Test { 
	int &t; 
public: 
    // Error:
	// Test (int &x) { t = x; } 
    // Modified code
    Test (int &x): t(x) { } 
	int getT() { return t; } 
}; 

int main() 
{ 
	int x = 20; 
	Test t1(x); 
	cout << t1.getT() << " "; 
	x = 30; 
	cout << t1.getT() << endl; 
	return 0; 
} 
