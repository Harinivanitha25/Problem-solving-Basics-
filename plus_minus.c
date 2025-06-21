#include <stdio.h>

int main()
{
    int n,i;
    scanf("%d",&n);
    float negative=0,positive=0,zero=0,total=n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]>0)
           positive+=1;
        else if(arr[i]<0)
           negative+=1;
        else
           zero+=1;
    }
    printf("%f\n%f\n%f",positive/total,negative/total,zero/total);
    return 0;
}