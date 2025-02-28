#include <stdio.h>
#include <stdlib.h>

int main() {
    setbuf(stdout, NULL); // Fix CLion bug: Show printf and scanf in the order called.
    int count = 1;//starting with one makes it easier to initialize before going into the while loop
    int *pIntArr = (int *) malloc(count * sizeof(int));//Space for an array of variable size.

    int in;
    if (pIntArr != NULL) {//only continue if memory was allocated
        printf("Enter numbers one at a time with a return and use a negative number to end:\n");
        for (int i = 0; i<count;i++) {
            scanf("%d",&in);
            if (in < 0) {
                break;
            } else {
                pIntArr[i] = in;
                printf("The updated array is:",pIntArr[i]);
                for (int j = 0; j<count;j++) {
                    printf("%3d",pIntArr[j]);
                }
                printf("\n");
                count++;
//                int *pTempArr = (int *) malloc(count * sizeof(int));
//                if (pIntArr != NULL) {
//                    pIntArr = pTempArr;
//                }
                pIntArr = realloc(pIntArr,count * sizeof(int));
            }
        }
        /* Exit the loop if the number is less than 0 */

            /* Add the new number and print your updated array */

            /*Use a temporary pointer to re-allocate memory*/
        printf("The program has ended\n");

        /* Free your pointer */
        free(pIntArr);
    } else {//if memory could not be initially allocated to pIntArr
        printf("Memory could not be allocated.\n");
    }//else

    return 0;
}