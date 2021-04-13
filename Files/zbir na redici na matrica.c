#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#define MAX 100
int main()
{
    int m, n, i, j, sum;
    char c;
    int a[MAX][MAX];
    FILE *fp, *ptr;
    fp = fopen("primer_datoteka.txt", "r");
    ptr = fopen("primer2.txt", "w");
    if(fp == NULL)
    {
        printf("GRESHKA");
        exit(1);
    }

    fscanf(fp, "%d %d", &m, &n);
    for(i = 0; i < m&&!feof(fp); i++)
    {
        sum = 0;
        for(j = 0; j < n&&!feof(fp); j++)
        {
            fscanf(fp, "%d", &a[i][j]);
            sum = sum + a[i][j];
        }
        if(sum > 10)
        {
            fprintf(ptr,"%d\n", sum);
        }
    }

    fclose(ptr);
    fclose(fp);

    ptr = fopen("primer2.txt", "r");
    while((c = fgetc(ptr))!= EOF)
    {
        printf("%c", c);
    }
    fclose(ptr);
    return 0;
}
