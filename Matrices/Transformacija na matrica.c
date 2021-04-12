#include <stdio.h>

int main()
{
    int m, n, i, j, max, min;
    scanf("%d", &n);
    int a[n][n];
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    max = -1;
    min = 100;
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(i != j)
            {
                if(j > i)
                {
                    if(a[i][j] > max)
                    {
                        max = a[i][j];
                    }
                }
                if(i > j)
                {
                    if(a[i][j] < min)
                    {
                        min = a[i][j];
                    }
                }
            }
        }
    }
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(i != j)
            {
                if(j > i)
                {
                    a[i][j] = max;
                }
                if(i > j)
                {
                    a[i][j] = min;
                }
            }
        }
    }
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
