#include <stdio.h>

int main()
{
  int alice=0,bob=0,i,j;
  int a[3],b[3];
  for(i=0;i<3;i++)
  { scanf("%d",&a[i]);}
   for(i=0;i<3;i++)
  { scanf("%d",&b[i]);}
  for(j=0;j<3;j++)
  {
      if(a[j]>b[j])
        alice+=1;
      else if(a[j]<b[j])
        bob+=1;
      else
        continue;
  }
  printf("%d %d",alice,bob);
}