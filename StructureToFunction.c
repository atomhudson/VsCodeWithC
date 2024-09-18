#include<stdio.h>
struct student { int roll; float cgpa; char name[100]; };
void printInfo(struct student s1);

int main() {
    struct student s1 = {1664, 9.2, "Prashant"};
    printInfo(s1);
    return 0;
}
//Call By Value
void printInfo(struct student s1){
    printf("Student Roll Number: %d\n",s1.roll);
    printf("Student CGPA: %.2f\n",s1.cgpa);
    printf("Student Name: %s\n",s1.name);
}
