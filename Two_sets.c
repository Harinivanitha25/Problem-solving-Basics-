#include <stdio.h>
#define min(a,b) (a)>(b)?(b):(a)
int gcd_fun(int a,int b)
{
    int min1=min(a,b);
    for(int i=min1;i>=1;i--)
     {
         if(a%i==0 && b%i==0)
            return i;
     }
 return 1;
}
int lcm_fun(int a, int b) {
    return (a * b) / gcd_fun(a, b);
}
int main()
{
    int n,m,i,lcm,gcd,count=0;
    scanf("%d%d",&n,&m);
    int a[n],b[m];
    for(i=0;i<n;i++)
      scanf("%d",&a[i]);
    for(i=0;i<m;i++)
      scanf("%d",&b[i]);
    int resultgcd=b[0],resultlcm=a[0];
    for(i=1;i<m;i++)
        resultgcd=gcd_fun(b[i],resultgcd);
    for(i=1;i<n;i++)
        resultlcm=lcm_fun(a[i],resultlcm);
    for(i=resultlcm;i<=resultgcd;i++)
    {
        if(resultgcd%i==0 && i%resultlcm==0)
         count++;
    }
    printf("%d",count);
    return 0;
}