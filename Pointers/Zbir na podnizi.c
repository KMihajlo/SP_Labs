#include <stdio.h>
int sum(int *a, int b)
{
    int i, sum = 0;
    for(i = 0; i < b; i++)
    {
        sum = sum + *(a+i);
    }
    return sum;
}
int main()
{
    int n, i, id;
    scanf("%d", &n);
    int a[n];
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    scanf("%d", &id);
    if(id > n)
    {
        id = n;
    }
    printf("%d\n", sum(&a, id));
    return 0;
}
