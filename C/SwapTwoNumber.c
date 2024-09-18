#include<stdio.h>
void swap(int a,int b);
void _swap(int *a,int *b);
int main() {
    int a = 5;
    int b = 6;

    printf("a = %d & b = %d\n",a,b);

    swap(a,b);
    printf("Call by Value\n");
    printf("a = %d & b = %d\n",a,b);

    _swap(&a,&b);
    printf("Call by Reffrence\n");
    printf("a = %d & b = %d\n",a,b);

    return 0;
}

// Call by Value;
void swap(int a,int b ){
    int temp = b;
    b = a;
    a = temp;
    printf("a = %d & b = %d\n",a,b);
}

// Call by Reference
void _swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp; 
    printf("a = %d & b = %d\n",*a,*b);
}