#include <stdio.h>
int main()
{  int t;
    scanf("%d",&t);
   for(int i=0;i<t;i++)
   {
   int n,c,m;
   scanf("%d%d%d",&n,&c,&m);
   int bar=n/c,wrapper=bar;
   while(wrapper>=m)
   {  int current=wrapper/m;
      bar=bar+current;
      wrapper=current+(wrapper%m);
   }
   printf("%d\n",bar);
   }
   return 0;
}