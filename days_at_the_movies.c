#include <stdio.h>
#include <stdlib.h>
int reverse(int n)
{
    int rev=0,rem;
    while(n>0)
    {
       rem=n%10;
       rev=rev*10+rem;
       n=n/10;
    }
    return rev;
}
int main()
{
    int start,end,k,minus,count=0;
    scanf("%d%d%d",&start,&end,&k);
    for(int i=start;i<=end;i++)
    {
        minus=abs(i-(reverse(i)));
        if(minus%k==0)
          count++;
        
    }
    printf("%d",count);
    return 0;
}