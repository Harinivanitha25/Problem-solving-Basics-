#include <stdio.h>
int index(int i,int n,int *arr)
{ 
  for(int j=0;j<n;j++)
    {
        if(arr[j]==i)
          return j+1;
    }
    return 0;
    
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],i=1;
    for(int i=0;i<n;i++)
     scanf("%d",&arr[i]);
    for(i=1;i<=n;i++)
    printf("%d\n",(index(index(i,n,arr),n,arr)));
    return 0;
}