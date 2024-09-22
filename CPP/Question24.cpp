#include<iostream> 
using namespace std; 

class Test 
{ 
    private: 
	    int x; 
	    static int count; 
    public: 
    	Test(int i = 0) : x(i) {} 
	    Test(const Test& rhs) : x(rhs.x) { ++count; } 
	    static int getCount() { return count; } 
}; 

int Test::count = 0; 

Test fun() 
{ 
	return Test(); 
} 

int main() 
{ 
	Test a = fun(); 
	cout<< Test::getCount(); 
	return 0; 
} 
