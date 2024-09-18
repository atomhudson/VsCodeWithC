#include<stdio.h>
void doWork(int a,int b, int *sum, int *product, int *avg);
int main() {
    int a = 3, b = 5;
    int sum, product, avg;
    // printf("Sum: %d\n",sum);
    // printf("Product: %d\n",product);
    // printf("Avg: %d\n",avg);
    doWork(a,b, &sum, &product, &avg);
    printf("Sum: %d\n",sum);
    printf("Product: %d\n",product);
    printf("Avg: %d\n",avg);

    return 0;
}

void doWork(int a,int b, int *sum ,int *product, int *avg){
    *sum = a + b;
    *product = a * b;
    *avg = (a+b) / 2;
}