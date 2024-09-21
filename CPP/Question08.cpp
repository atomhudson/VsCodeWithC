#include<iostream>
using namespace std;

class Test {
	int value;
    public:
	    Test(int v);
};

Test::Test(int v) {
	value = v;
}

int main() {
	// Test t[100];
	return 0;
}
// Compiler error because of non presence of non parametrized constructor.
// correct code is this:
// #include<iostream>
// using namespace std;

// class Test {
// 	int value;
// public:
// 	Test(int v = 0);
// };

// Test::Test(int v) {
// 	value = v;
// }

// int main() {
// 	Test t[100];
// 	return 0;
// }
