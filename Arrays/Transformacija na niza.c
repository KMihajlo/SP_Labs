#include <stdio.h>
#define SIZE 100
int main()
{
    int a[SIZE], b[SIZE], c[SIZE], n, i, k = -1, t = -1;
    scanf("%d", &n);
    a[n];
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if(a[i] % 2 == 0)
        {
            k++;
            b[k] = a[i];
        }
        else
        {
            t++;
            c[t] = a[i];
        }
    }
    for(i = 0; i <= k; i++)
    {
        printf("%d ", b[i]);
    }
    for(i = 0; i <= t; i++)
    {
        printf("%d ", c[i]);
    }
    return 0;
}
