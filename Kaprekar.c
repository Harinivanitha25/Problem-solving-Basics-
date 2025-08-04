#include <stdio.h>
int main()
{    int p,q,flag=0;
      scanf("%d %d",&p,&q);
    for(int i=p;i<=q;i++)
    {
     long int n=i,sq,rem,d=1,sum=0;
    long int a=n;
    sq=n*n;
    while(n>0)
    {
        d=d*10;
        n=n/10;
    }
    while(sq>0)
    {  
       rem=sq%d;
       sum=sum+rem;
       sq=sq/d;
    }
    if(sum==a)
    { printf("%ld ",a);
      flag=1;
    }
    }
    if(flag==0)
    {
        printf("INVALID RANGE");
    }
    return 0;
}