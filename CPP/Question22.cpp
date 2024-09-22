#include <iostream> 
using namespace std; 

int fun(int a, int b = 1, int c =2) 
{ 
	return (a + b + c); 
} 

int main() 
{ 

    // Not Allowed
    // cout << fun(1,,);
	cout << fun(1); 
    cout << fun(1,2,4); 
	return 0; 
} 
