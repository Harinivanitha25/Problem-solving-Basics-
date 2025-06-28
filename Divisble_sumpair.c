#include <stdio.h>
int main()
{
   int n,count=0,k;
   scanf("%d %d",&n,&k);
   int arr[n],i,j;
   for(i=0;i<n;i++)
     scanf("%d",&arr[i]);
   for(i=0;i<n;i++)
   {
       for(j=i+1;j<n;j++)
       {
           if((arr[i]+arr[j])%k==0)
             count++;
       }
   }
   printf("%d",count);
    return 0;
}