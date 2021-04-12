#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX 100

int del(char *a, char *b)
{
    int t = strlen(b), s = 0, r = strlen(a), x = 0;
    int i = 0, j = 0, k = 0;
    while(*(a+i) != '\0')
    {
        if(*(a+i) == *(b+j))
        {
            int u = i;
            while(*(a+u) != '\0')
            {
                if(u+1 == r-x)
                {
                    *(a+u) = '\0';
                    break;
                }
                else
                {
                    *(a+u) = *(a+(u+1));
                }
                u++;
            }
            s++;
            k = 1;
            j++;
            i--;
            x++;
        }
        else
        {
            if(*(b+j) == '\0')
            {
                if(s == t)
                {
                    return 1;
                }
            }
            else
                s = 0; j = 0;
        }
        i++;
    }
    if(k == 0)
    {
        return 0;
    }
}
int main()
{
    int i;
    char s1[MAX], s2[MAX], ch;
    for(i = 0; i < MAX && (ch = getchar())!='\n'; i++)
    {
        s1[i] = ch;
    }
    s1[i] = '\0';
    for(i = 0; i < MAX && (ch = getchar())!='\n'; i++)
    {
        s2[i] = ch;
    }
    s2[i] = '\0';

    if(del(&s1, &s2) == 1)
    {
        printf("%s\n", s1);
    }
    else
        printf("Ne e najdena niza.");
    return 0;
}
