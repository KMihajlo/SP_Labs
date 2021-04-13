#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    int i, t = 0;
    char ch[80];

    FILE *ptr;
    FILE *fp;
    fp = fopen("primer_datoteka.txt", "r");

    if(fp == NULL)
    {
        printf("GRESHKA");
        exit(1);
    }
    ptr = fopen("primer2.txt", "w");
    if(ptr == NULL)
    {
        printf("GERSHKA");
        exit(1);
    }
    while(!feof(fp))
    {
        fgets(ch, 80, fp);
        for(i = 0; ch[i] != '\0'; i++)
        {
            t++;
        }
        fprintf(ptr, "%d\n", i);
        fputs(ch, ptr);
    }

    fclose(ptr);
    fclose(fp);

    ptr = fopen("primer2.txt", "r");
    if(ptr == NULL)
    {
        printf("GRESHKA");
        exit(1);
    }
    while(!feof(ptr))
    {
        fgets(ch, 80, ptr);
        puts(ch);
    }
    fclose(ptr);
    return 0;
}
