#include <stdio.h>
int main()
{
   int n,count;
   scanf("%d",&n);
   int arr[n],i,j,max=0,value;
   for(i=0;i<n;i++)
     scanf("%d",&arr[i]);
   for(i=0;i<n;i++)
   {   count=1;
       for(j=i+1;j<n;j++)
       { if(arr[i]==arr[j])
           count++;
       }
       if(count>max)
        { max=count;
          value=arr[i];
        }
   }
   printf("%d",value);
    return 0;
}