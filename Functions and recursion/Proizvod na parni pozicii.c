#include <stdio.h>
int proizvod(int x)
{
    int i, temp, j = 0, k, p = 1, s = 0;
    temp = x;
    while(temp)
    {
        j++;
        s++;
        temp = temp / 10;
    }
    temp = x;
    while(temp)
    {
        if(j % 2 == 0)
        {
            k = (temp % 100) / 10;
            p = p * k;
            temp = temp / 100;
        }
        else
        {
            if(s == 1)
            {
                break;
            }
            else
            {
                k = (temp % 100) / 10;
                p = p * k;
                s = s - 2;
                temp = temp / 100;
            }
        }
    }
    return p;
}
int main()
{
    int n;
    scanf("%d", &n);

    printf("%d\n", proizvod(n));
    return 0;
}
