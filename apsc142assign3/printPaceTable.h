//
// Created by Narayan Ramachandran on 2/5/2025.
//

#ifndef APSC142ASSIGN3_PRINTPACETABLE_H
#define APSC142ASSIGN3_PRINTPACETABLE_H

#define ROWS 5
#define COLS 6

//Description: A function to print the 2D pace table with a consistent header for testing.
//Preconditions: The input array paceTable must be a 2D array with all values initialized. The
// input array distances must be a 1D array with all values initialized.
//Postconditions: The contents of paceTable are printed in minutes to the console. No input
// arrays are modified.
void printPaceTable(double paceTable[ROWS][COLS], double distances[]);

//Description: A function to print the 2D pace table with the times in h:mm:ss format
//Preconditions: The array paceTable must be a 2D array with all values initialized. The input
// array distances must be a 1D array with all values initialized.
//Postconditions: the contents of paceTable are printed in h:mm:ss to the console. No input
// arrays are modified.
void printPaceTable2(double paceTable[ROWS][COLS], double distances[]);

void timeToString(char timeString[], double timeInMinutes);

#endif //APSC142ASSIGN3_PRINTPACETABLE_H
