#include <stdio.h>
#define SIZE 100
int main()
{
    int a[SIZE], n, r, i, t = 1, temp, j, sum = 0;
    scanf("%d %d", &n, &r);

    for(i = 0; i < n; i++)
    {
        if(i >= r)
        {
            temp = r;
            a[i] = sum;
            for(j = i-1; temp > 1; temp--, j--)
            {
                sum = sum + a[j];
            }
        }
        else
        {
            a[i] = t;
            sum = sum + a[i];
        }
    }
    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}
