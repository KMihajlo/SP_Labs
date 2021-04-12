#include <stdio.h>

int max(int x, int y)
{
    if(x > y)
    {
        return x;
    }
    else
        return y;
}
int min(int x, int y)
{
    if(x < y)
    {
        return x;
    }
    else
        return y;
}
int nzs(int x, int y)
{
    static int r = 0;
    if((y % x) == 0 && (y % (y-r)) == 0)
    {
        return y;
    }
    else
    {
        r++;
        return nzs(x, y+1);
    }
}
void bla(int x)
{
    int i, a[x+1];
    for(i = 0; i < x; i++)
    {
        a[i] = nzs(min(a[i], a[i+1]), max(a[i], a[i+1]));
    }
}
int main()
{
    int i, n, m;
    scanf("%d", &n);
    int a[n];
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i = 1; i < n; i++)
    {
        bla(n-i);
    }
    return 0;
}
