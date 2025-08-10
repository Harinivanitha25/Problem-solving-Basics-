#include <stdio.h>
int main()
{
    int n,t,min;
    scanf("%d%d",&n,&t);
    int width[n],cases[t][2];
    for(int i=0;i<n;i++)
     scanf("%d",&width[i]);
    for(int i=0;i<t;i++)
    {
    for(int j=0;j<2;j++)
      scanf("%d",&cases[i][j]);
    }
    for(int i=0;i<t;i++)
    {  min=n;
        for(int j=cases[i][0];j<=cases[i][1];j++)
        {  
            if(min>width[j])
               min=width[j];
        
        }
        printf("%d\n",min);
    }
    return 0;
}