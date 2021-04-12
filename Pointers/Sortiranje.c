#include <stdio.h>
void sort(int *a, int n)
{
    int i, j, tmp;

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if( *(a+i) > *(a+j))
            {
                tmp = *(a+i);
                *(a+i) = *(a+j);
                *(a+j) = tmp;
           }
        }
    }
}
void combine(int *a, int *b, int *c, int n)
{
    int i = 0, k = 0, j = 0;
    while (i < n && j < n)
    {
        if (*(a+i) < *(b+j))
        {
            *(c+(k++)) = *(a+(i++));
        }
        else
        {
            *(c+(k++)) = *(b+(j++));
        }
    }
    while (i < n)
    {
        *(c+(k++)) = *(a+(i++));
    }

    while (j < n)
    {
        *(c+(k++)) = *(b+(j++));
    }
}
int main()
{
    int n, i;
    scanf("%d", &n);
    int a[n], b[n], c[n];
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i = 0; i < n; i++)
    {
        scanf("%d", &b[i]);
    }

    sort(&a, n);
    sort(&b, n);
    combine(&a, &b, &c, n);
    for(i = 0; i < n*2; i++)
    {
        printf("%d ", c[i]);
    }
    printf("\n");
    return 0;
}
