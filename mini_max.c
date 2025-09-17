#include <stdio.h>
int main()
{
    long int minsum=0,maxsum=0;
    int arr[5];
    for(int i=0;i<5;i++)
     scanf("%d",&arr[i]);
    long int min=arr[0],max=arr[0];
    for(int i=1;i<5;i++)
    {
        if(min>arr[i])
         min=arr[i];
        else if(max<arr[i])
         max=arr[i];
    }
    if(min!=max)
    {
    for(int i=0;i<5;i++)
    {
        if(arr[i]!=min)
          minsum=minsum+arr[i];
        if(arr[i]!=max)
          maxsum=maxsum+arr[i];
    }}
    else {
    {
        minsum=min*4;
        maxsum=minsum;
    }
    }
    printf("%ld %ld",maxsum,minsum);
    return 0;
}
