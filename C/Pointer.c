// Pointers : A variable that stores the memory address of another variables
// * it represents the value at address
// & it represent the address of variable
// _age it represent the value which is store on that *ptr value at address;

#include<stdio.h>
int main() {

    // We declare that age is 22, and Suppose it stores at the memmory location of 2010.
    int age = 22;
    // Now we declare a pointer (*ptr) which store the memmory location of age variable that is 2010.
    int *ptr = &age;
    // Now we declare a variable to see what value is stored on that pointer(*ptr) or memory address which is stored in that pointer.
    int _age = *ptr;


    printf("%d\n", age);

    printf("%p\n", &age);
    // printf("%d\n", ptr);
    printf("%p\n", ptr);
    // printf("%u\n", ptr);
    printf("%p\n", &ptr);

    printf("%d\n",_age);


    return 0;
}