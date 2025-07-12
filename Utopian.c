#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int given[n];
    for(int i=0;i<n;i++)
      scanf("%d",&given[i]);
    int arr[60];
    arr[0]=1;
    for(int i=1;i<60;i++)
    {   if(i%2!=0)
         arr[i]=arr[i-1]*2;
       else
          arr[i]=arr[i-1]+1;
    }
    for(int i=0;i<n;i++)
    {
        printf("%d\n",arr[given[i]]);
    }
    return 0;
}