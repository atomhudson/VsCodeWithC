#include<iostream> 

using namespace std; 

class Test { 
	int value; 
public: 
	Test (int v = 0) {value = v;} 
	int getValue() { return value; } 
}; 

int main() { 
	const Test t; 
	// cout << t.getValue(); 
	return 0; 
}
// Compilation Error 
// getValue() is non const function 
// and we are trying to call with const object of class

// Correct code
// #include<iostream> 

// using namespace std; 

// class Test { 
// 	int value; 
// public: 
// 	Test (int v = 0) {value = v;} 
// 	int getValue() const { return value; } 
// }; 

// int main() { 
// 	const Test t; 
// 	cout << t.getValue(); 
// 	return 0; 
// }