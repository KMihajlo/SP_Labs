#include <stdio.h>

int brojnacifri(int x)
{
    int r = 1;
    while(x)
    {
        r = r * 10;
        x = x / 10;
    }
    return r/10;
}
int obraten(int x)
{
    int p = 0, temp, k = 0, t = 1;

    if(x < 10)
    {
        return x;
    }
    else
    {
        return x%10 * brojnacifri(x) + obraten(x/10);
    }
}
int main()
{
    int n, sum = 0, temp, v = 1, g = 1;
    scanf("%d", &n);

    sum = obraten(n) + n;

    if(obraten(sum) == sum)
    {
        printf("Palindrom\n");
    }
    else
    {
        printf("NE\n");
    }
}
