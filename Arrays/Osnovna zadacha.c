#include <stdio.h>
#define SIZE 100
int main()
{
    int b[SIZE], i, n, c[SIZE], k = 0;
    char a[11];
    for(i = 0; i < 11; i++)
    {
        if(i == 0)
        {
            a[i] = 'S';
            k++;
        }
        if(i == 1 || i == 5)
        {
            a[i] = 'T';
            k++;
        }
        if(i == 2 || i == 7)
        {
            a[i] = 'R';
            k++;
        }
        if(i == 3 || i == 6)
        {
            a[i] = 'U';
            k++;
        }
        if(i == 4)
        {
            a[i] = 'K';
            k++;
        }
        if(i == 8)
        {
            a[i] = 'N';
            k++;
        }
        if(i == 9)
        {
            a[i] = 'O';
            k++;
        }
    }
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &b[i]);
        if(b[i] % 2 == 0)
        {
            c[i] = 1;
        }
        else
        {
            c[i] = 0;
        }
    }
    for(i = 0; i <= k; i++)
    {
        if(i == k)
        {
            printf("%c\n", a[i]);
        }
        else
        {
            printf("%c ", a[i]);
        }
    }
    for(i = 0; i < n; i++)
    {
        printf("%d ", c[i]);
    }
    return 0;
}
