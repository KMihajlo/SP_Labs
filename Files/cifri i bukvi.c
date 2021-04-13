#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    int i = 0, j = 0;
    char c;
    FILE *fp;
    fp = fopen("primer_datoteka.txt", "r");

    if(fp == NULL)
    {
        printf("GRESHKA.\n");
        exit(1);
    }

    while((c = fgetc(fp)) != EOF)
    {
        if(isalpha(c) != 0)
        {
            i++;
        }
        if(isdigit(c) != 0)
        {
            j++;
        }
    }
    printf("%.2f", (double)j/i);
    fclose(fp);
    return 0;
}
