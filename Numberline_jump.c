#include <stdio.h>
int main()
{
   int x1,v1,x2,v2,flag=0;
   scanf("%d%d%d%d",&x1,&v1,&x2,&v2);
   int sum=(x1+x2+v1+v2)*1000;
       while(x1<sum && x2 <sum)
       {   x1=x1+v1;
           x2=x2+v2;
           if(x1==x2)
            {printf("YES");
             flag=1;
            break;}
       }
  
   if(flag==0)
    printf("NO");
}