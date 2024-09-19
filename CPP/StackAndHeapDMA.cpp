#include<iostream>
using namespace std;

// add() and main() are stored in stack and pop out as they completes its execution.a
int add(int a1,int a2){
    return a1+a2;
}
int main(){

    int a = 2;
    int b = 3;
    int sum = add(a,b);
    cout<< sum <<endl;


    int c = 10; // Stored in stack
    int *p = new int(); // allocate memory in heap
    *p = 10;
    delete(p); // deallocate memory

    p = new int[4]; // allocated memory arr of size 4 in heap and p points to the address of that array to heap
    delete[] p; // deallocate memory for p array
    p = NULL; // delete pointer p
    
    return 0;
} 