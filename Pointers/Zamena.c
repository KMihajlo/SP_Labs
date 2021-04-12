#include <stdio.h>
void zamena(int *a, int *b)
{
    int i;
    i = *a;
    *a = *b;
    *b = i;
}
int main()
{
    int n, i, j, k;
    scanf("%d", &n);
    int a[n];
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i = 0; i < n-1; i++)
    {
        k = 0;
        for(j = a[i]; j > 0; j--)
        {
            if(a[i] % j == 0)
            {
                if(a[i+1] % j == 0)
                {
                    k++;
                }
            }
        }
        if(k == 1)
        {
            zamena(&a[i], &a[i+1]);
            i++;
        }
    }
    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}
