#include <stdio.h>
#include <string.h>
/* Include the String Library */

#define ARRAY_LENGTH_MAX 30

int main() {
    char myString[ARRAY_LENGTH_MAX] = "WELCOME TO SMITH ENGINEERING";// Memory Length = 28+1
    printf("%s\n", myString);
    char alpString[ARRAY_LENGTH_MAX] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";// Memory Length = 26+1
    int alpCount[ARRAY_LENGTH_MAX];//need to set this to all zeros


    int myStringLength = strnlen(myString, ARRAY_LENGTH_MAX);
    int alpStringLength = strnlen(alpString, ARRAY_LENGTH_MAX);
    printf("myStringLength = %d\n", myStringLength); //to show how the null character is ignored
    printf("alpStringLength = %d\n", alpStringLength); //to show how the null character is ignored

    for (int j = 0; j < alpStringLength; j++) {
        alpCount[j] = 0;
    }

    for (int i = 0; i < myStringLength;i++) {

        for (int j = 0; j < alpStringLength;j++) {

            if (myString[i] == alpString[j]) {
                alpCount[j]++;

            }
        }
    }

    for (int i = 0; i < alpStringLength; i++) {
        printf(" %c",alpString[i]);
    }
    printf("\n");
    for (int i = 0; i < alpStringLength; i++) {
        printf(" %d",alpCount[i]);
    }
    printf("\n");
    return 0;
}