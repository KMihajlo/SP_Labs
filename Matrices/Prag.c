#include <stdio.h>

int main()
{
    int m, n, i, j, x, sum, r;
    scanf("%d", &x);
    scanf("%d %d", &m, &n);
    int a[m][n], b[m][n];
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for(i = 0; i < n; i++)
    {
        sum = 0;
        for(j = 0; j < m; j++)
        {
            sum = sum + a[j][i];
        }
        if(sum > x)
        {
            r = 1;
            for(j = 0; j < m; j++)
            {
                a[j][i] = r;
            }
        }
        if(sum < x)
        {
            r = -1;
            for(j = 0; j < m; j++)
            {
                a[j][i] = r;
            }
        }
        if(sum == x)
        {
            r = 0;
            for(j = 0; j < m; j++)
            {
                a[j][i] = r;
            }
        }
    }
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
