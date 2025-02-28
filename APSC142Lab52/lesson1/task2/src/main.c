#include <stdio.h>
#include <stdlib.h>

#define STR_MAX_LEN 11//10+1
#define STUDENT_COUNT 7

int main() {
    FILE *pFile = NULL;//initialize the file pointer
    pFile = fopen("myNamesFile.txt", "w");//make the file
    if (pFile == NULL) {
        printf("The file was not found to write to\n");
        return 1; //Non-zero return to show error has occurred
    } else {//write to the file
        fprintf(pFile, "Arnold Ralphie Dorothy Carlos Keesha Phoebe Tim");
        fclose(pFile);//close the file
    }

    pFile = fopen("myNamesFile.txt", "r");
    char ch[10];
    int numNames = 1;
    if (pFile!=NULL) {
        printf("The Student names are:\n");
        while (1) {
            if (fscanf(pFile,"%s",ch) == EOF) {
                break;
            }
            printf("%2d %s\n",numNames,ch);
            numNames++;

        }
        fclose(pFile);
        printf("The file has been closed.\n");
        pFile = NULL;
        printf("The pointer has been set to \"NULL\".\n");
    }
    /*Check for a null pointer*/
        /*Loop to read and print the file contents*/
        /*Close the file, nullify the pointer, print*/
    return 0;
}


//Arnold Ralphie Dorothy Carlos Keesha Phoebe Tim
