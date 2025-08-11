#include <stdio.h>
int main()
{
   int n,k,pages=1,count=0;
   scanf("%d%d",&n,&k);
   int arr[n];
   for(int i=0;i<n;i++)
     scanf("%d",&arr[i]);
   for(int i=0;i<n;i++)
   {   
       for(int j=1;j<=arr[i];j++)
       {  
          if(pages==j)
            count++;
           if(j%k==0 && j!=arr[i])
            pages++;
       }
       pages++;
   }
    printf("%d",count);
    return 0;
}