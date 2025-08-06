#include <stdio.h>
int main()
{
   int n,dis;
   scanf("%d",&n);
   int arr[n],min=100000;
   for(int i=0;i<n;i++)
     scanf("%d",&arr[i]);
   for(int i=0;i<n;i++)
   {
       for(int j=i+1;j<n;j++)
       {
           if(arr[i]==arr[j])
           {
               dis=j-i;
               if(dis<min)
                 min=dis;
           }
       }
   }
   if(min==100000)
     printf("-1");
    else
     printf("%d",min);
    return 0;
}