#include "stdio.h"

#define ARRAY_LENGTH 10000

int main() {
    int myArray[ARRAY_LENGTH]; //a
    for (int i = 0; i < ARRAY_LENGTH; i++){
        myArray[i] = i;
    }
    int desiredValue;
    int startIndex = 0;
    int endIndex = sizeof(myArray)/sizeof(myArray[0])-1;
    int middleIndex = (endIndex + startIndex) / 2;
    int iteration = 0;//to keep track of how many actions the search needs

    setbuf(stdout, NULL); // Fix CLion bug: Show printf and scanf in the order called.
    printf("Enter the desired value to be searched for\n");
    scanf("%d", &desiredValue);

    printf ("iteration start middle end\n");
    //printf ("%5d %5d %5d\n",startIndex, middleIndex, endIndex);
    while(1) {
        iteration++;
        middleIndex = (endIndex + startIndex) / 2;
        printf ("%8d %5d %5d %5d\n",iteration, startIndex, middleIndex, endIndex);

        if (desiredValue < myArray[middleIndex]) {
            endIndex = middleIndex-1;
        } else if (desiredValue > myArray[middleIndex]) {
            startIndex = middleIndex+1;
        } else {
            break;
        }
    }

    return 0;
}