#include <stdio.h>

int main()
{
    int i, j, n, k, v, sum, temp = 10000;
    scanf("%d", &n);
    int a[n][n];

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    int t = n, p = n;
    v = 0;
    while(t != 0)
    {
        k = p-1;
        sum = 0;
        for(j = 0; j < t; j++)
        {
            sum = sum + a[v][k];
            k--;
            v++;
        }

        if(sum < temp)
        {
            temp = sum;
        }
        t--;
        v = v - t;
    }
    printf("%d\n", temp);
    return 0;
}
