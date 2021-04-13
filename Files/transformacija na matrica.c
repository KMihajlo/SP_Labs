#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define MAX 100
int main()
{
    int i, j, m, n;
    char t;
    float a[MAX][MAX], b[MAX][MAX];
    FILE *fp, *ptr;
    fp = fopen("primer_datoteka.txt", "r");
    ptr = fopen("primer2.txt", "w");
    if(fp == NULL)
    {
        printf("GRESHKA");
        exit(1);
    }

    fscanf(fp, "%d %d", &m, &n);
    fprintf(ptr, "%d %d\n", n, m);

    for(i = 0; i < m&&!feof(fp); i++)
    {
        for(j = 0; j < n&&!feof(fp); j++)
        {
            fscanf(fp, "%f", &a[i][j]);
            b[j][i] = a[i][j];
        }
    }
    for(i = 0; i < n&&!feof(fp); i++)
    {
        for(j = 0; j < m&&!feof(fp); j++)
        {
            fprintf(ptr, "%.1f\n", b[i][j]);
        }
    }
    fclose(ptr);
    fclose(fp);

    ptr = fopen("primer2.txt", "r");
    while((t = fgetc(ptr)) != EOF)
    {
        printf("%c", t);
    }
    fclose(ptr);
    return 0;
}
