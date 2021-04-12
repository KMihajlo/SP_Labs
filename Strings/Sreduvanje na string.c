#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX 100
void sreduvanje(char *a)
{
    int i, t = strlen(a), b = 0;
    for(i = 0; a[i] != '\0'; i++)
    {
        if(a[i] == a[i+1])
        {
            int u = i;
            while(a[u] != '\0')
            {
                a[u] = a[u+1];
                u++;
            }
            int u = i;
            while(a[u] != '\0')
            {
                a[u] = a[u+1];
                u++;
            }
            i--;
            b++;
        }
        if(isalpha(a[i]) == 0)
        {
            int u = i;
            while(a[u] != '\0')
            {
                a[u] = a[u+1];
                u++;
            }
        }
    }
}
int main()
{
    int i;
    char a[MAX];
    for(i = 0; i < MAX && (ch = getchar())!='\n'; i++)
    {
        a[i] = ch;
    }
    a[i] = '\0';
    sreduvanje(&a);
    printf("%s\n", a);
    return 0;
}
