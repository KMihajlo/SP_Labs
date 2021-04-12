#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void my_sort(int* xArray, int xSize)
{
        int lPivot = xArray[xSize-1], i;
        int lIndexOfLargestElement = 0;
        for (i = 0; i < xSize-1; i++)
        {
                if (xArray[i] < lPivot)
                {
                        // Swap largest element with this
                        int lTmp = xArray[i];
                        xArray[i] = xArray[lIndexOfLargestElement];
                        xArray[lIndexOfLargestElement]  = lTmp;
                        lIndexOfLargestElement++;
                }
        }
        // swap pivot with xArray[lIndexOfLargestElement]
        int lTmp = xArray[lIndexOfLargestElement];
        xArray[lIndexOfLargestElement] = xArray[xSize-1];
        xArray[xSize-1] = lTmp;
        if (lIndexOfLargestElement > 1)
                my_sort(xArray, lIndexOfLargestElement);
        if (xSize-lIndexOfLargestElement-1 > 1)
                my_sort(xArray+lIndexOfLargestElement+1, xSize-lIndexOfLargestElement-1);
}

// не ја менувајте главната функција
int main() {
    int n, i;
    scanf("%d", &n);
    int *a = malloc(sizeof(int) * n);
    srand(time(NULL));
    for(i = 0; i < n; ++i) {
        a[i] = rand() % 10000;
    }


    my_sort(a, n);


    int sorted = 1;
    for(i = 0; i < n - 1; ++i) {
        if(a[i] > a[i + 1]) {
            sorted = 0;
            break;
        }
    }
    if(!sorted) {
        printf("NOT SORTED");
    } else {
        printf("SORTED");
    }
    free(a);
    return 0;
}
