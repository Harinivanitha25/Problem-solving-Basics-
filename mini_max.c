#include <stdio.h>

int main()
{
    int n=5,i,j;

    int arr[n],sum,min,max=0;
    for(i=0;i<n;i++)
    {
      scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {  sum=0;
       for(j=0;j<n;j++)
        { if(j!=i)
            sum=sum+arr[j];
        }
        if(i==0)
         min=sum;
        if(sum<min)
          min=sum;
        if(sum>max)
          max=sum;
    }
    printf("%d %d",min,max);
    return 0;
}