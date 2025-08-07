#include <stdio.h>
int main()
{
    int p,d,finish,cost;
    scanf("%d%d%d%d",&p,&d,&finish,&cost);
    int sum=p,count=0;
    while(sum<=cost)
    {   cost=cost-sum;
        count++;
        if(sum-d>=finish)
            sum=sum-d;
        else
            sum=finish;
    }
    printf("%d",count);
    return 0;
}