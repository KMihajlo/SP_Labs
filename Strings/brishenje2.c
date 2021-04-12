#include <stdio.h>
#include <string.h>
#define MAX 100

int deleteStr(char* str1, char* str2)
{
    int poz,i,j,flag=0;
    for(i=0;*(str1+i)!='\0';i++)
    {
        if(strncmp(str1+i,str2,strlen(str2))==0)
        {
            flag=1;
            poz=i;
            //printf("%d",poz);
            break;
        }
    }
    if(flag){
        j=poz+strlen(str2);
        //printf("%d",j);
        for(i=poz;*(str1+j)!='\0';i++,j++)
        {
           // printf("%d",j);
            *(str1+i)=*(str1+j);
            //printf("%s\n",str1);

        }
        *(str1+i)='\0';
        return 1;
    }
    else
    {
        return 0;
    }

}

int main() {
    char firstStr[MAX], secondStr[MAX];
    int i=0;
    char l;
    //gets(firstStr);
    //gets(secondStr);
    while((l=getchar())!='\n')
    {
        *(firstStr+i)=l;
        i++;
    }
    *(firstStr+i)='\0';
    i=0;
    while((l=getchar())!='\n')
    {
        *(secondStr+i)=l;
        i++;
    }
    *(secondStr+i)='\0';
    if (deleteStr(firstStr, secondStr))
        puts(firstStr);
    else
        printf("String not found\n");
    return 0;
}
