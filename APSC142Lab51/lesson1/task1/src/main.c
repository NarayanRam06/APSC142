#include <stdio.h>
#include <string.h>
#define LENGTH1 6
#define LENGTH_NAME 11

int main() {
    setbuf(stdout, NULL); // Fix CLion bug: Show printf and scanf in the order called.
/* TODO */
    char myString[] = "Hello";

    printf("Char[]: ");
    for (int i = 0;i < strlen(myString);i++) {
        printf("%c",myString[i]);
    }

    printf("\nString: ");
    for (int i = 0;i < strlen(myString);i++) {
        printf("%c",myString[i]);
    }

    printf("\nTell me your name Human.\n");
    fgets(myString,6,stdin);

    printf("Hello ");
    for (int i = 0;i < strlen(myString);i++) {
        printf("%c",myString[i]);
    }
    printf("\n\n");
    return 0;
}