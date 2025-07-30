#include <stdio.h>
int check(int r,int c,int (*ob)[2],int k)
{
    for(int i=0; i<k; i++)
    {    for(int j=0; j<1; j++)
        {    if(ob[i][j]== r && ob[i][j+1]== c )
                return 0;
        }
    }
    return 1;
}
int main()
{
    int n,k,rq,cq,count=0;
    scanf("%d%d%d%d",&n,&k,&rq,&cq);
    int ob[k][2];
    for(int i=0; i<k; i++)
    {    for(int j=0; j<2; j++)
        {
            scanf("%d",&ob[i][j]);
        }
    }
    for(int i=rq+1; i<=n; i++)
    {    if(check(i,cq,ob,k)==1)
            count++;
        else
            break;
    }
    for(int i=rq-1; i>0; i--)
    {
        if(check(i,cq,ob,k)==1)
            count++;
        else
            break;
    }
    for(int i=cq+1; i<=n; i++)
    {
        if(check(i,cq,ob,k)==1)
            count++;
        else
            break;
    }
    for(int i=cq-1; i>0; i--)
    {
        if(check(i,cq,ob,k)==1)
            count++;
        else
            break;
    }
    for(int i=rq+1,j=cq+1; i<=n && j<=n; i++,j++)
    {
        if(check(i,j,ob,k)==1)
            count++;
        else
            break;
    }
    for(int i=rq-1,j=cq-1; i>0 && j>0; i--,j--)
    {
        if(check(i,j,ob,k)==1)
            count++;
        else
            break;
    }
    for(int i=rq-1,j=cq+1; i>0 && j<=n; i--,j++)
    {
        if(check(i,j,ob,k)==1)
            count++;
        else
            break;
    }
    for(int i=rq+1,j=cq-1; i<=n && j>0; i++,j--)
    {
        if(check(i,j,ob,k)==1)
            count++;
        else
            break;
    }

    printf("%d",count);

    return 0;
}