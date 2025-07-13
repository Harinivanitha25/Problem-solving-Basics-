#include <stdio.h>
int main()
{   int total;
    scanf("%d",&total);
    int result[total];
    for(int i=0;i<total;i++)
    {
       int n,k,count=0;
       scanf("%d%d",&n,&k);
       int arr[n];
       for(int j=0;j<n;j++)
       { scanf("%d",&arr[j]);
         if(arr[j]<=0)
            count++;
       }
       if(count<k)
         result[i]=1;
        else
         result[i]=0;
    }
    for(int i=0;i<total;i++)
    { if(result[i]==1)
         printf("YES");
      else
         printf("NO");
    }
    return 0;
}