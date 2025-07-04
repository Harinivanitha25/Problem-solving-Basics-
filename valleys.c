#include <stdio.h>
int main()
{
    int n,count=0,sea=0;
    scanf("%d",&n);
    char arr[n]; 
    scanf("%s",arr);
    for(int i=0;i<n;i++)
    {   if(arr[i]=='U')
             sea++;
        else
             sea--;
        if(arr[i]=='U' && sea==0)
        {
            count++;
        }
    }
    printf("%d",count);
    return 0;
}