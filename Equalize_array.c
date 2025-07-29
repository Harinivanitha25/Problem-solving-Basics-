#include <stdio.h>
int main()
{
    int n,max=0;
    scanf("%d",&n);
    int arr[n],freq[101]={0};
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        freq[arr[i]]++;
    }
    for(int i=0;i<100;i++)
    {
       if(max<freq[i])
          max=freq[i];
    }
    printf("%d",n-max);
    return 0;
}