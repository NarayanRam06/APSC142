#include <stdio.h>
#include "printPaceTable.h"

void printPaceTable(double paceTable[ROWS][COLS], double distances[]) {
    printf("This is the time in minutes that it would take to complete each distance:\n");
    for (int j = 0; j < COLS; j++) {
        printf("%5.1f km\t", distances[j]);
    }
    printf("\n----------------------------------------------------------------------------------------\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%5.2f\t\t", paceTable[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void printPaceTable2(double paceTable[ROWS][COLS], double distances[]) {
    char timeString[] = "0:00:00";//A placeholder string for when the minutes are converted to
    // h:mm:ss format
    printf("This is the time in h:mm:ss that it would take to complete each distance:\n");
    for (int j = 0; j < COLS; j++) {//using j for COLS but does not matter
        printf("%5.1f km\t", distances[j]);
    }
    printf("\n----------------------------------------------------------------------------------------\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            timeToString(timeString, paceTable[i][j]);
            printf("%s\t\t", timeString);
        }
        printf("\n");
    }
    printf("\n");
}