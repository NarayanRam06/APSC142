#include <stdio.h>

#define ARRAY_LENGTH 5

int main() {
    int startArray[ARRAY_LENGTH] = {4, 1, 3, 2, 0};
    //startArray will remain unchanged

    int temp; //to shift elements
    int swapMade = 1; //for Bubble Sort
    int smallestIndex = 0; // for Selection Sort
    int insertionElement = 0; //for Insertion Sort

    //Next 3 arrays to be sorted as named
    int bubArray[ARRAY_LENGTH];
    int selArray[ARRAY_LENGTH];
    int insArray[ARRAY_LENGTH];

    //initialize all 3 arrays to the same start:
    for (int i = 0; i < ARRAY_LENGTH; i++) {
        bubArray[i] = startArray[i];
        selArray[i] = startArray[i];
        insArray[i] = startArray[i];
    }

    printf("Start:\n");
    //Here is a program to print your array after each main loop iteration
    for (int p = 0; p < ARRAY_LENGTH; p++) {
        printf("%3d", startArray[p]);
    }
    printf("\n");


    //Bubble sort is started for you
    printf("Bubble Sort:\n");
    while (1) {
        swapMade = 0;
        for (int i = 0; i < ARRAY_LENGTH - 1; i++) {
            if (bubArray[i] > bubArray[i + 1]) {
                temp = bubArray[i+1];
                bubArray[i+1]=bubArray[i];
                bubArray[i]=temp;
                swapMade = 1;
            }
        }
        if (!swapMade) {
            break;
        }
        for (int p = 0; p < ARRAY_LENGTH; p++) {
            printf("%3d", bubArray[p]);
        }
        printf("\n");
    } //end of while(1) for Bubble Sort

    printf("Selection Sort:\n");

    for (int i = 0;i<ARRAY_LENGTH-1;i++) {
        smallestIndex = i;
        for (int j=i+1;j < ARRAY_LENGTH;j++) {
            if (selArray[j] < selArray[smallestIndex]) {
                smallestIndex = j;
            }
        }
        temp = selArray[i];
        selArray[i] = selArray[smallestIndex];
        selArray[smallestIndex] = temp;
        for (int p = 0; p < ARRAY_LENGTH; p++) {
            printf("%3d", selArray[p]);
        }
        printf("\n");
    }

    printf("Insertion Sort:\n");

    for (int i = 1; i < ARRAY_LENGTH ;i++) {
        insertionElement = insArray[i];
        for (int j = 0; j < i;j++) {
            if (insertionElement<insArray[j]) {
                temp = insArray[i];
                insArray[i] = insArray[j];
                insArray[j] = temp;
            }
        }
        for (int p = 0; p < ARRAY_LENGTH; p++) {
            printf("%3d", insArray[p]);
        }
        printf("\n");
    }

    return 0;
}