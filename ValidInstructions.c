#include<stdio.h>
int main() {
    int a = 22;
    int b = a;
    int c = b + 1;
    int d = 1, e;
    printf("a: %d\n",a);
    printf("b: %d\n",b);
    printf("c: %d\n",c);
    printf("d: %d\n",d);
    printf("e: %d\n",e);

    // Invalid Instructions
    // int oldage = 22;
    // int newAge = oldage + years;
    // int year = 23;

    // Invalid Instructions
    // int x = y = z = 4;

    int x,y,z;
    x = y = z = 4;

    printf("x= %d\n",x);
    printf("y= %d\n",y);
    printf("z= %d\n",z);

    printf("Modulo: %d\n", 5 % -2);
    printf(" %d ", 5.0 / 2);
    return 0;
}