#include <stdio.h>

int main()
{   
    int start,last,k;
    scanf("%d",&k);
    for(int j=0;j<k;j++)
    {
    scanf("%d%d",&start,&last);
    int count=0,i=1;
    while((i*i)<=last)
    {
        if((i*i)>=start && (i*i)<=last)
         count++;
         i++;
    }
    printf("%d\n",count);
    }
    return 0;
}