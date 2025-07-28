#include <stdio.h>
int main()
{
    int n,count=0,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    i=0;
    while(i<n)
    {
        if((i+2)<n && arr[i+2]!=1)
         { i=i+2;
           count+=1;
         }
         else if((i+1)<n && arr[i+1]!=1 )
         { count+=1;
            i=i+1;
         }
         else
         {
             break;
         }
    }
    printf("%d",count);
    return 0;
}