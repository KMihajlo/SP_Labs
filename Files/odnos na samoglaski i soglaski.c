#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
int sam(char c)
{
    if(c == 'a' || c == 'A' || c == 'e' || c == 'E' || c == 'i' || c == 'I' || c == 'o' || c == 'O' || c == 'u' || c == 'U')
    {
        return 1;
    }
    else
        return 0;
}
int sog(char c)
{
    if(c != 'a' && c != 'A' && c != 'e' && c != 'E' && c != 'i' && c != 'I' && c != 'o' && c != 'O' && c != 'u' && c != 'U' && c != '.' && c != ',' && c != ' ' && c != '\n' && c != '?' && c != '\0')
    {
        return 1;
    }
    else
        return 0;
}
int main()
{
    char c;
    int i = 0, j = 0;
    FILE *fp;
    fp = fopen("primer_datoteka.txt", "r");

    if(fp == NULL)
    {
        printf("GRESHKA\n");
        exit(1);
    }

    while((c = fgetc(fp)) != EOF)
    {
        i = i + sam(c);
        j = j + sog(c);
    }
    printf("Odnos na samoglaski/soglaski %d / %d = %.2f", i, j, (float)i/j);
    fclose(fp);
    return 0;
}
