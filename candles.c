#include <stdio.h>

int main()
{
    int n,i,j;
    scanf("%d",&n);
    int arr[n],count=0,max=0;
    for(i=0;i<n;i++)
    {
      scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    { if(arr[i]>max)
           max=arr[i];
    }
    for(j=0;j<n;j++)
      { if(arr[j]==max)
         count++;}
    printf("%d",count);
    return 0;
}