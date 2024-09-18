#include<stdio.h>

int SumofNNaturalNumber(int n);

int main() {

    int n = 5;

    int result = SumofNNaturalNumber(n);

    printf("Sum of N Natural Number is: %d",result);

    return 0;
}
int SumofNNaturalNumber(int n){
    if (n == 1){

        return 1;

    }

    return n + SumofNNaturalNumber(n-1);
}