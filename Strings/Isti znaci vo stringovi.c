#include <stdio.h>
#include <string.h>
#include <ctype.h>
int sporedba(char *a, char *b)
{
    int i = 0, k = 0;
    while(*(a+i) != '\0')
    {
        if(toupper(*(a+i)) == toupper(*(b+i)))
        {
            *(a+i) = '*';
            *(b+i) = '*';
            k++;
        }
        i++;
    }
    return k;
}
int main()
{
    char a[100], b[100], ch;
    int i;
    for(i = 0; i < 100 && (ch = getchar())!='\n'; i++)
    {
        a[i] = ch;
    }
    a[i] = '\0';
    for(i = 0; i < 100 && (ch = getchar())!='\n'; i++)
    {
        b[i] = ch;
    }
    b[i] = '\0';

    printf("%d\n", sporedba(&a, &b));
    printf("%s\n", a);
    printf("%s\n", b);
    return 0;
}
