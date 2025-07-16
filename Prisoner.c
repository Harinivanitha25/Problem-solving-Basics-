#include <stdio.h>
int main()
{
    int n,i,j,pri,candy,start;
    scanf("%d",&n);
    int result[n];
    for( i=0;i<n;i++)
    {  
        scanf("%d%d%d",&pri,&candy,&start);
        for(j=1;j<candy;j++)
          start++;
        if(start%pri==0)
          result[i]=pri;
        else
         result[i]=start%pri;
        
    }
  for(i=0;i<n;i++)
    printf("%d\n",result[i]);
    return 0;
}