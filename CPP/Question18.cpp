#include<iostream>

using namespace std;

class A
{
	public:
	virtual void fun() {cout << "A" << endl ;}
};
class B: public A
{
	public:
	virtual void fun() {cout << "B" << endl;}
};
class C: public B
{
	public:
	virtual void fun() {cout << "C" << endl;}
};

int main()
{
	A *a = new C;
	A *b = new B;
	a->fun(); // C
	b->fun(); // B
	return 0;
}
