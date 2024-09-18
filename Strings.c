// Strings : A character array terminted by a '\0' (null character)
// null character denotes string termination

// Example char name[] = {'H','E','L','L','O','\0'};

#include<stdio.h>

void printString(char arr[]);
int main() {
    // char name[] = {'A','p','n','a','a','\0'};
    // char name[] = "Prashant";
    
    char firstName[] = "Prashant";
    char lastName[] = "Saini";

    printString(firstName);
    printString(lastName);

    //  %s String Format Specifier

    printf("%s",firstName);

    char name[15];
    printf("Enter your name: ");
    scanf("%s",name);
    printf("Your Name is: %s",name);
    return 0;
}

void printString(char arr[]){
    for (int i = 0; arr[i] != '\0'; i++)
    {
        printf("%c",arr[i]);
    }
    printf("\n");
}