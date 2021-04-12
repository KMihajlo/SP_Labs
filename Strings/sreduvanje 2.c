#include <stdio.h>
#include <string.h>
#include <ctype.h>

void swap(char *xp, char *yp)
{
    char temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void bubbleSort(char arr[], int n)
{
   int i, j;
   for (i = 0; i < n-1; i++)

       // Last i elements are already in place
       for (j = 0; j < n-i-1; j++)
           if (arr[j] > arr[j+1])
              swap(&arr[j], &arr[j+1]);
}

void sort(char *c)
{
    int i,j=0,k,flag;
    for(i=0;*(c+i)!='\0';i++)
    {
        if(isupper(*(c+i)))
        {
            *(c+i)=tolower(*(c+i));
        }
    }
    for(i=0;*(c+i)!='\0';i++)
    {
        flag=1;
        for(k=0;k<j;k++)
        {
            if(*(c+i)==*(c+k))
            {
                flag=0;
            }
        }
        if(flag)
        {
            if(isalpha(*(c+i)))
            {
                *(c+j)=*(c+i);
                j++;
            }
        }
    }
    *(c+j)='\0';
    bubbleSort(c,strlen(c));
}

int main()
{
    char firstStr[100];
    int i=0;
    char l;
    while((l=getchar())!='\n')
    {
        *(firstStr+i)=l;
        i++;
    }
    *(firstStr+i)='\0';

    sort(firstStr);

    printf("%s",firstStr);


}
