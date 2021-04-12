#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX 100

int main()
{
    int i, k = 0;
    char a[MAX], ch;
    for(i = 0; i < MAX && (ch = getchar())!='\n'; i++)
    {
        a[i] = ch;
    }
    a[i] = '\0';

    for(i = 0; a[i] != '\0'; i++)
    {
        if(k == 1)
        {
            if(isdigit(a[i]) == 1)
            {
                printf("%c\n", a[i]);
                break;
            }
            printf("%c", a[i]);
        }
        if(isdigit(a[i]) == 1)
        {
            printf("%c", a[i]);
            k = 1;
        }
    }
    if(k == 0)
    {
        printf("Nema cifri\n");
    }
    return 0;
}
