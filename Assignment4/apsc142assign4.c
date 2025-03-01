#include <stdio.h>
#include <stdlib.h>

#define STR_MAX_LEN 11//10+1

int main(void) {
    //Instantiating values - Code taken from Lab 7, task 2
    FILE *houses = NULL;//initialize the file pointer
    houses = fopen("C:\\Users\\Narayan Ramachandran\\CLionProjects\\APSC142\\Assignment4\\houses.txt", "w");//make the file
    if (houses == NULL) {
        printf("The file was not found to write to\n");
        return 1; //Non-zero return to show error has occurred
    } else {//write to the file
        fprintf(houses, "5\n"
                        "103 4 120\n"
                        "137 3 93\n"
                        "209 5 142\n"
                        "77 4 80\n"
                        "213 3 75\n"
                        "77\n"
                        "103\n"
                        "209\n");
        fclose(houses);//close the file
    }
    //Open file for reading
    fopen("C:\\Users\\Narayan Ramachandran\\CLionProjects\\APSC142\\Assignment4\\houses.txt", "r");//make the file
    //read number of houses
    int numHouses;
    fscanf(houses, "%d",&numHouses);
    //check if there are 0 houses
    if (numHouses == 0) {
        printf("There are no homes");
        return 1;
    }

    int **houseInfo = (int **) malloc(5 * sizeof(int*));
    for (int i = 0; i < 5; i++) {
        houseInfo[i] = (int *) malloc(5 * sizeof(int));
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 3; j++) {
            fscanf(houses,"%d",&houseInfo[i][j]);
            //printf("%d ",houseInfo[i][j]);
        }
        //printf("\n");
    }

    for (int j = 0; j < 5;j++) {
        houseInfo[j][3] = houseInfo[j][2]/houseInfo[j][1];
        houseInfo[j][4] = 0;
        //printf("%d ",houseInfo[j][3]);
    }

    int temp;
    int toSort = 0;
    for (int i = 0; i < 5;i++) {
        fscanf(houses,"%d",&temp);
        //printf("%d\n",temp);
        for (int j = 0;j < 5;j++) {
            if (temp == houseInfo[j][0]) {
                houseInfo[j][4] = 1;
                toSort++;
            }
        }
        temp = -1;
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ",houseInfo[i][j]);
        }
        printf("\n");
    }
    fclose(houses);

    int **sortedArr = (int **) malloc(5 * sizeof(int*));
    for (int i = 0; i < 5; i++) {
        sortedArr[i] = (int *) malloc(5 * sizeof(int));
    }

    //add to new list
    for (int i = 0;i < 5;i++) {
        if (houseInfo[i][4]==1) {
            sortedArr[toSort-1]=houseInfo[i];
            toSort-=1;
        }
    }

    int *tempArr = (int *) malloc(5 * sizeof(int));
    for (int i = 2; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            if (sortedArr[j][3] > sortedArr[j+1][3]) {
                tempArr = sortedArr[j];
                sortedArr[j] = sortedArr[j+1];
                sortedArr[j+1] = tempArr;
            }

        }
    }


    FILE *sorted = NULL;
    sorted = fopen("C:\\Users\\Narayan Ramachandran\\CLionProjects\\APSC142\\Assignment4\\sorted.txt", "w");//make the file

    if (sorted == NULL) {
        printf("The file was not found to write to\n");
        return 1; //Non-zero return to show error has occurred
    }
    for (int i = 0; i < 3; i++) {
        fprintf(sorted,"%d\n",sortedArr[i][0]);
    }

    free(tempArr);
    free(sortedArr);
    free(houseInfo);
    fclose(sorted);
    return 0;
}
