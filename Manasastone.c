
#include <stdio.h>
int main()
{   int testcase;
    scanf("%d",&testcase);
    while(testcase--)
    {
    int n,a,b;
    scanf("%d%d%d",&n,&a,&b);
    if(a==b)
    {printf("%d\n",(n-1)*a);
    continue;
    }
    if(a>b)
    {
        int temp=a;
        a=b;
        b=temp;
    }
    int start=n-1,end=0;
    do
    {   printf("%d ",start*a+end*b);
        start--;
        end++;
    }while(end<n);
    printf("\n");
}
    return 0;
}