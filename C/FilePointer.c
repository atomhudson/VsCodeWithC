// File Pointer:
// FILE is a (hidden) structure that needs tp be created for opening a file.
// A FILE ptr that points to this structure and is used to access the file.
// File Opening
// FILE *fptr;
// fptr = fopen("filename",mode);
// mode --> read("r"), write("w"), append("a"), read in binary("rb") , write in binary("wb")
// Reading from a File
// char ch;
// fscanf(fptr,"%c",&ch);
// Closing a File
// fclose(fptr);
// EOF (End of File)
#include<stdio.h>

int main() {
    FILE *fptr;
    fptr = fopen("D:/C Programming/VsCodeWithC/text.txt", "r");
    // fptr = fopen("D:/C Programming/VsCodeWithC/text.txt", "w"); // Use this for writing
    if (fptr == NULL) {
        printf("File Doesn't Exist\n");
    } else {
        char ch[200];  // Buffer to store the string
        fscanf(fptr, "%s", ch);  // Read the first string from the file
        printf("String = %s\n", ch);
        // Reading characters using fgetc()
        char cha;
        cha = fgetc(fptr);
        printf("Character = %c", cha);
        // Read the file until EOF
        while (cha != EOF) {
            printf("%c", cha);
            cha = fgetc(fptr);  // Get the next character
        }   
        fclose(fptr);  // Close the file
    }
    return 0;
}
