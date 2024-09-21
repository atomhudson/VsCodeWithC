#include<iostream>
using namespace std;

class Test{
    public:
        Test();
};

Test::Test() {
	cout<<"Constructor Called \n";
}

int main()
{
	cout<<"Start \n";
    // creating function t1 which has a return type of Test not creating object of class test or not a constructor call.
	Test t1();
	cout<<"End \n";
	return 0;
}
// Start 
// End