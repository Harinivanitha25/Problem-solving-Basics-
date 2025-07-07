#include <stdio.h>
int main()
{
    int b,key,mouse,max=0;
    scanf("%d%d%d",&b,&key,&mouse);
    int keyarr[key],mousearr[mouse];
    for(int i=0;i<key;i++)
      scanf("%d",&keyarr[i]);
    for(int i=0;i<mouse;i++)
      scanf("%d",&mousearr[i]);  
    for(int i=0;i<key;i++)
    {
        for(int j=0;j<mouse;j++)
        {
            if(keyarr[i]+mousearr[j]>max && keyarr[i]+mousearr[j]<=b)
               max=keyarr[i]+mousearr[j];
        }
    }
    if(max==0)
       printf("-1");
    else
      printf("%d",max);

    return 0;
}