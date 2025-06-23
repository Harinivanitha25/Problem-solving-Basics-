#include <stdio.h>

int main()
{
    int s,t,a,b,m,n,i,app1=0,ora1=0;
    scanf("%d %d %d %d %d %d",&s,&t,&a,&b,&m,&n);
    int app[m],ora[n];
    for(i=0;i<m;i++)
     {  scanf("%d",&app[i]);
         app[i]=app[i]+a;
     }
    for(i=0;i<n;i++)
      { scanf("%d",&ora[i]);
          ora[i]=ora[i]+b;
      }
    for(i=0;i<m;i++)
    { 
        if(s<=app[i]&& app[i]<=t)
          app1++;
    }
    for(i=0;i<n;i++)
    {
        if(s<=ora[i] && ora[i]<=t)
          ora1++;
    }
    printf("%d %d",app1,ora1);
    return 0;
}