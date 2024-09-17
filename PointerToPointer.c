// Pointer To Pointer: It means that a value that stores the memory address of another pointer.

#include<stdio.h>
int main() {
    float price = 100.00;
    float *ptr = &price;
    float **pptr = &ptr;
    printf("%f \n", **pptr);
    return 0;
}

//  price = 100.00 at address = address1
//  ptr = address1 at address = address2
//  pptr = address2 at address = address3

//  How to retrive the data or value of price using pointer to pointer 
// *pptr will give the value address1
// *(*pptr) => *(address1) => 100.00