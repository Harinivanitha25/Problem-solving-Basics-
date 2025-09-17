#include <stdio.h>
int main()
{
   int n,numc=0,uc=0,lc=0,sc=0,count=0;
   scanf("%d",&n);
   char str[n];
   scanf("%s",str);
   for(int i=0;str[i]!='\0';i++)
   {
       if((int)str[i]<58 && (int)str[i]>47)
          numc++;
        if((int)str[i]<91 && (int)str[i]>64)
          lc++;
        if((int)str[i]<123 && (int)str[i]>96)
           uc++;
        if(str[i]=='!' || str[i]=='@' || str[i]=='#' || str[i]=='$'|| str[i]=='%'|| str[i]=='^'|| str[i]=='&'|| str[i]=='*' || str[i]=='('|| str[i]==')'|| str[i]=='-'|| str[i]=='+')
           sc++;
   }
   if(uc==0)
     count++;
   if(lc==0)
     count++;
   if(sc==0)
     count++;
   if(numc==0)
     count++;
    if(n+count<6)
      printf("%d",6-n);
    else
      printf("%d",count);
}
