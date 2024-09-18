// String Using Pointers

// Store string in memory and the assigned address is stored in the char pointer 'str'
// If String is initialized using pointer than it can be reinitialized.

#include<stdio.h>
#include<string.h>
int main() {
    char *str = "Hello World";
    // like this 
    puts(str);
    str = "Hello";
    puts(str);
    str = "World";
    puts(str);

    char cannotChange[] = "Hello World";
    puts(cannotChange);
    int cannotChangeLength = strlen(cannotChange);
    printf("%d",cannotChangeLength);
    // cannotChange = "Hello"; //it can not be reinitialized 
    return 0;
}