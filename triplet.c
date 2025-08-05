#include <stdio.h>
#include<stdbool.h>
int check(int n,int* arr,int value)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==value)
          return true;
    }
    return false;
}
int main()
{
    int n,d,count=0;
    scanf("%d%d",&n,&d);
    int arr[n];
    for(int i=0;i<n;i++)
       scanf("%d",&arr[i]);
    for(int i=0;i<n;i++)
    {  if(check(n,arr,(arr[i]+d)) && check(n,arr,(arr[i]+2*d)))
           count++;
    }
     printf("%d",count);
    return 0;
}
