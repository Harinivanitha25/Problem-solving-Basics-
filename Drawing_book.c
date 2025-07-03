#include <stdio.h>
#define min(a,b) (a)<(b)?(a):(b)
int main()
{   
    int n,k;
    scanf("%d %d",&n,&k);
    int first,last;
    first=k/2;
    if(n%2==0 && n-k==1)
      last=1;
    else
      last=(n-k)/2;
      
    printf("%d",min(first,last));
    return 0;
}