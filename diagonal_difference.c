#include <stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,j,sum=0,sum1=0;
    scanf("%d",&n);
    int arr[n][n];
    for(i=0;i<n;i++)
    { for(j=0;j<n;j++)
      {   scanf("%d",&arr[i][j]);
         if(i==j)
           sum=sum+arr[i][j];
         if((i+j)==(n-1))
           sum1=sum1+arr[i][j];
    }}
    printf("%d",abs(sum-sum1));
}