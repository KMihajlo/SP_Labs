#include <stdio.h>

int main()
{
    int m, n, i, j, sum = 0;
    scanf("%d %d", &m, &n);
    int a[m][n];

    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
            sum = sum + a[i][j];
        }
    }
    printf("sum = %d", sum);
    return 0;
}
