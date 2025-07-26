#include <stdio.h>
int main()
{
    int n,k;
    scanf("%d%d",&n,&k);
    int arr[n],freq[k];
    for(int i=0;i<k;i++)
        freq[i]=0;
    for(int i=0;i<n;i++)
    {  scanf("%d",&arr[i]);
       freq[(arr[i]%k)]++;
    }
    int count=0;
    if(freq[0]>0)
      count+=1;
    for(int i=1;i<=k/2;i++)
    { if(i==(k-i))
        count+=1;
      else
         count+=(freq[i]>freq[k-i]?freq[i]:freq[k-i]);
    }
    printf("%d",count);
    return 0;
}