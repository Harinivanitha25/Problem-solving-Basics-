#include <stdio.h>

int main()
{
    int n,i,next,d;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);
    for(i=0;i<n;i++)
    {
        if(arr[i]>37)
        {   d=5-(arr[i]%5);
            next=arr[i]+d;
            if((next-arr[i])<3)
              arr[i]=next;
        }
    }
    for(i=0;i<n;i++)
      printf("%d ",arr[i]);
    return 0;
}