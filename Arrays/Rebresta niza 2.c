#include <stdio.h>
// REBRESTA NIZA
int main()
{
    int n,a[100],i,k, t, r;
    scanf("%d",&n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i=0;i<n;i++)
    {
        k = 0;
        r = 0;
        t = 0;
        if(i == 0)
        {
            continue;
        }
        else
        {
            if(i == (n-1))
            {
                if(a[i] > a[i-1])
                {
                    k++;
                }
                else if(a[i] < a[i-1])
                {
                    t++;
                }
                else
                    r = 1;
            }
            else
            {
                if((a[i] > a[i-1]) && (a[i] > a[i+1]))
                {
                    k++;
                }
                else if((a[i] < a[i-1]) && (a[i] < a[i+1]))
                {
                    t++;
                }
                else
                    r = 1;
                }
            }
    }
    if(n % 2 == 0)
    {
        if((t-k) == 1 || (k-t) == 1)
        {
            printf("Nizata e rebresta\n");
        }
        else
        {
            printf("Ne e rebresta.\n");
        }
    }
    else if(n % 2 != 0)
    {
        if(t == k)
        {
            printf("Nizata e rebresta.\n");
        }
        else
        {
            printf("Nizata ne e rebresta\n");
        }
    }
    else if(r == 1)
    {
        printf("Ne e rebresta.\n");
    }
    return 0;
}

