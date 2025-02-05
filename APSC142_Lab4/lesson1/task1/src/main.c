#include <stdio.h>

#define LENGTH 10

int main() {
    int myArray[LENGTH] = {2, 0, 5, 8, 9, 0, 6, -3, 11, 0};
    int num0s;
    int smallestElement;
    int largestElement;

    int myArrayLength;  //LENGTH was used in array declaration, but we still to use this variable.


//Give initial values to all variables. Calculate myArrayLength.
 myArrayLength = sizeof(myArray)/ sizeof(myArray[0]);
 num0s = 0;
 smallestElement = myArray[0];
 largestElement = myArray[0];
//Write code to find the requested information about the given array

    printf("myArray[] = {");
    for (int i = 0; i < myArrayLength;i++) {
        if (myArray[i] == 0){num0s++;}
        if (myArray[i] < smallestElement){smallestElement = myArray[i];}
        if (myArray[i] > largestElement){largestElement = myArray[i];}
        printf("%3d",myArray[i]);
    }
    printf("}\n");
    printf("The number of zeros is %3d.\n", num0s);
//Write your remaining prnt statements
    printf("The smallest element is %3d.\n", smallestElement);
    printf("The largest element is %3d.\n", largestElement);
    return 0;
}