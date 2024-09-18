#include<stdio.h>
int main() {
    // scanf() cannnot input multi-word string with space Ex: "This is Sentence". scanf() only take "This"
    // Here gets()-->(fgets()) or puts()

    // gets(): used to take input
    // puts(): used to print the output
    // gets(): outdated or deprecatted

    char str[100];
    gets(str);
    puts(str);

    // fgets(str, n , file)
    // str --> string
    // n --> size
    // file --> stdin (Standard input)
    fgets(str,100,stdin);
    puts(str);
    return 0;
}