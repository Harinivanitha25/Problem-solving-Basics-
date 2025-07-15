#include <stdio.h>
int main()
{
    int n,liked,shared=5,sum=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {   liked=shared/2;
        sum=sum+liked;
        shared=liked*3;
    }
  printf("%d",sum);
    return 0;
}