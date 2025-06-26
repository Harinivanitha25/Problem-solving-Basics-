#include <stdio.h>
int main()
{
   int n,i,j,d,m,sum,count=0;
   scanf("%d",&n);
   int arr[n];
   for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
   scanf("%d %d",&d,&m);
   for(i=0;i<n;i++)
   {   sum=0;
       for(j=i;j<i+m;j++)
       {
           sum=sum+arr[j];
       }
       if(sum==d)
        count++;
   }
   printf("%d",count);
    return 0;
}