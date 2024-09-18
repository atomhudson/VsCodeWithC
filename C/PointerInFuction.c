#include<stdio.h>
void square(int n);
void _square(int* n);


int main() {
    int number  = 4;

    square(number);
    printf("number = %d\n", number);
    _square(&number);
    printf("number = %d\n", number);
    return 0;
}

// Call by Value
// It can perform any operation of n but there is no changes in the main method.
// Means if number = 4 and calling the square(n) the n = n * n become 16 no the number will always be is equal to 4;
void square(int n){
    n = n * n;
    printf("square = %d\n",n);
}

// Call by Refference
// It perform operation on the number also
void _square(int* n){
    *n = (*n) * (*n);
    printf("_square = %d\n", *n);
}