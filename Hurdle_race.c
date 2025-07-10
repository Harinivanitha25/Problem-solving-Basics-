#include <stdio.h>
int main()
{
    int n,max_height,max=0;
    scanf("%d%d",&n,&max_height);
    int arr[n];
    for(int i=0;i<n;i++)
     {  scanf("%d",&arr[i]);
         if(max<arr[i])
           max=arr[i];
     }
     if(max>max_height)
       printf("%d",max-max_height);
     else
       printf("0");
    return 0;
}