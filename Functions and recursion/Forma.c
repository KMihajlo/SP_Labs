#include <stdio.h>
void forma(int x)
{
    int i, k, j;
    for(i = 1; i <= x; i++)
    {
        if(i == 1)
        {
            printf("%d", i);
        }
        else
        {
            for(j = i-1; j > 0; j--)
            {
                printf("1");
            }
            printf("%d", i);
            for(j = i-1; j > 0; j--)
            {
                printf("1");
            }
        }
        printf("\n");
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    forma(n);
    return 0;
}
