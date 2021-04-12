#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void my_sort(int *a, int n)
{
    int i, j, temp;
    for(i = 0; i < n; i++)
    {
        for(j = i+1; j < n; j++)
        {
            if(*(a+i) > *(a+j))
            {
                temp = *(a+i);
                *(a+i) = *(a+j);
                *(a+j) = temp;
            }
        }
    }
}
int main()
{
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
