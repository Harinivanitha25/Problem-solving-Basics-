#include <stdio.h>
int main()
{
    int n,i,countmin=0,countmax=0;
    scanf("%d",&n);
    int rec[n];
    for(i=0;i<n;i++)
      scanf("%d",&rec[i]);
    int max=rec[0],min=rec[0];
    for(i=1;i<n;i++)
    {  if(rec[i]>max)
       {
           max=rec[i];
           countmax++;
       }
       if(rec[i]<min)
       {
           min=rec[i];
           countmin++;
       }
    }
    printf("%d %d",countmax,countmin);
    return 0;
}