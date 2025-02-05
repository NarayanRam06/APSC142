
#include <stdio.h>

#define ROWS 10
#define COLS 10



int main() {

//Declare your <empty> array using ROWS and COLS for sizing
    int myArray[ROWS][COLS]={};

    printf("My Multiplication Table:\n");

//Write code to fill in your array AND print your array

    for (int i = 1; i < ROWS+1;i++) {

        for (int j = 1; j < COLS+1;j++) {
            myArray[i-1][j-1] = i * j;
        }
    }
    for (int i = 0; i < ROWS;i++) {

        for (int j = 0; j < COLS;j++) {
            printf(" %3d",myArray[i][j]);
        }
        printf("\n");
    }

    return 0;
}
