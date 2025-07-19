#include <stdio.h>

int main()
{
    int n,k,max=100;
    scanf("%d%d",&n,&k);
    int arr[n],i=0;
    for(int i=0;i<n;i++)
      scanf("%d",&arr[i]);
    while(i<n)
    {  
         i=(i+k)%n;
           max=max-1;
        if(arr[i]==1)
           max=max-2;
        if(i==0)
            break;
    }
    printf("%d",max);
    return 0;
}