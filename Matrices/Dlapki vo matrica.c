#include <stdio.h>

int main()
{
    int m, n, i, j;
    scanf("%d %d", &m, &n);
    int a[m][n];
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(i == 0)
            {
                if(j == 0)
                {
                    if(a[i][j] < a[i][j+1] && a[i][j] < a[i+1][j])
                    {
                        printf("%d ", a[i][j]);
                    }
                }
                if(j == n-1)
                {
                    if(a[i][j] < a[i][j-1] && a[i][j] < a[i+1][j])
                    {
                        printf("%d ", a[i][j]);
                    }
                }
                if(j != 0 && j != n-1)
                {
                    if(a[i][j] < a[i][j-1] && a[i][j] < a[i][j+1] && a[i][j] < a[i+1][j])
                    {
                        printf("%d ", a[i][j]);
                    }
                }
            }
            if(j == 0)
            {
                if(i == m-1)
                {
                    if(a[i][j] < a[i-1][j] && a[i][j] < a[i][j+1])
                    {
                        printf("%d ", a[i][j]);
                    }
                }
                if(i != 0 && i != m-1)
                {
                    if(a[i][j] < a[i-1][j] && a[i][j] < a[i+1][j] && a[i][j] < a[i][j+1])
                    {
                        printf("%d ", a[i][j]);
                    }
                }
            }
            if(i == m-1)
            {
                if(j == n-1)
                {
                    if(a[i][j] < a[i][j-1] && a[i][j] < a[i-1][j])
                    {
                        printf("%d ", a[i][j]);
                    }
                }
                if(j != 0 && j != n-1)
                {
                    if(a[i][j] < a[i][j-1] && a[i][j] < a[i-1][j] && a[i][j] < a[i][j+1])
                    {
                        printf("%d ", a[i][j]);
                    }
                }
            }
            if(j == n-1)
            {
                if(i != 0 && i != m-1)
                {
                    if(a[i][j] < a[i-1][j] && a[i][j] < a[i][j-1] && a[i][j] < a[i+1][j])
                    {
                        printf("%d ", a[i][j]);
                    }
                }
            }
            if(i != 0 && j != 0 && i != m-1 && j != n-1)
            {
                if(a[i][j] < a[i][j-1] && a[i][j] < a[i-1][j] && a[i][j] < a[i][j+1] && a[i][j] < a[i+1][j])
                    {
                        printf("%d ", a[i][j]);
                    }
            }
        }
    }
    return 0;
}
