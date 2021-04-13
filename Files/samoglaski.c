#include <stdio.h>
#include <stdlib.h>
#define MAX 100
int main()
{
    int ch[MAX], i = 0, k = 0, t = 0, c;
    FILE *fp;
    fp = fopen("primer_datoteka.txt", "r");
    if(fp == NULL)
    {
        printf("Ne postoi datotekata.");
        exit(1);
    }

    while((c = fgetc(fp)) != EOF)
    {
        if(c == ' ' || c == '.' || c == ',')
        {
            k++;
        }
        if(c == '.')
        {
            t++;
        }
        i++;
    }
    printf("Characters: %d\nWords: %d\nLines: %d\n", i, k, t);
    fclose(fp);
}
