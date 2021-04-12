#include <stdio.h>
#define SIZE 100
int main()
{
    int n, i, j, m = 100, a[SIZE], b[SIZE], c[SIZE], t, k, sum;
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        k = -1;
        sum = 0;
        scanf("%d", &m);
        for(j = 0; j < m; j++)
        {
            scanf("%d", &a[j]);
        }
        for(j = 0, t = m-1; j < m; j++, t--)
        {
            if(j == t)
            {
                continue;
            }
            else if(a[j] == a[t])
            {
                if(k <= m/2)
                {
                    k++;
                    b[k] = a[j];
                }
            }
        }
        for(j = 0; j <= k/2; j++)
        {
            sum = sum + (b[j]+b[j]);
        }
        printf("%d\n", sum);
    }
    return 0;
}
