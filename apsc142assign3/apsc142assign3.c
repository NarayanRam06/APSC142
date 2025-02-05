#include <stdio.h>
#include <string.h>
//#include "printPaceTable.h"

#define ROWS 5
#define COLS 6

//calculate and every value for the passed in array of length N from the
//starting value, start, and incrementing linearly to the ending value, end.
void populateArray(double array[], double start, double end, int N) {
    for (int i = 0;i < N;i++) {
        array[i] = start+((end-start)/(N-1))*i;
    }
}

//calculate every value in your 2D array paceTable[ROWS][COLS] based on
//the given 1D arrays distances[] and pacesInMinutes[]
void populatePaceTable(double paceTable[ROWS][COLS], double pacesInMinutes[ROWS], double distances[COLS]) {
    for (int i = 0; i < ROWS;i++) {
        for (int j = 0; j < COLS;j++) {
            //min/km * km = min
            paceTable[i][j] = pacesInMinutes[i]*distances[j];
        }
    }
}

//update the global string timeString based on the input double
//timeInMinutes. This allows the array contenst to be printed in the more readable
//hours:minutes:seconds (h:mm:ss) format as a string. For example: 142.25 minutes
//is 2:22:15 in h:mm:ss. You can assume the input time is between 0 and 600.
void timeToString(char timeString[], double timeInMinutes){
    int tmi = (int) timeInMinutes;
    int hours = tmi / 60;
    timeString[0] = '0' + hours;
    int minutes = tmi % 60;
    timeString[2] = '0'+ (minutes / 10);
    timeString[3] = '0'+ minutes % 10;
    double seconds = ((int)(timeInMinutes*100))%100;
    timeString[5] = '0' +(seconds/100*60/10);
    timeString[6] = '0'+ (int) (seconds/100*60) % 10;

}

int main(void) {
    double distances[COLS] = {1.0,2.0,5.0,10.0,21.1,42.2};
    double pacesInMinutes[ROWS];
    double paceTable[ROWS][COLS];
    populateArray(pacesInMinutes,6.0,4.0,ROWS);
    populatePaceTable(paceTable,pacesInMinutes,distances);
    //printPaceTable(paceTable,distances);
    //printPaceTable2(paceTable,distances);
}
