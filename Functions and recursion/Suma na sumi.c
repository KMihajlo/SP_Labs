#include <stdio.h>
int suma(int a[], int i)
{
    if(i == 0)
    {
        return a[0];
    }
    else
    {
        return a[i] + suma(a, i-1);
    }
}
int main()
{
    int n, i, t = 0, j;
    scanf("%d", &n);
    int a[n], b[n];
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if(a[i] < 0)
            a[i] = 0;
    }
    b[0] = 0;
    for(i = 1; i < n; i++)
    {
        t = 0;
        for(j = 1; j <= i; j++)
        {
            t = t + suma(a, j-1);
        }
        b[i] = t;
    }
    for(i = 0; i < n; i++)
    {
        printf("%d ", b[i]);
    }
    return 0;
}
