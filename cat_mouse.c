#include <stdio.h>
#include <stdlib.h>
int main()
{
   int q,c1,c2;
   scanf("%d",&q);
   int arr[q][3];
   for(int i=0;i<q;i++)
   {
       for(int j=0;j<3;j++)
         scanf("%d",&arr[i][j]);
   }
   for(int i=0;i<q;i++)
   {
       c1=abs(arr[i][2]-arr[i][0]);
       c2=abs(arr[i][2]-arr[i][1]);
       if(c1>c2)
         printf("Cat A\n");
       else if(c2>c1)
         printf("Cat B\n");
       else
         printf("Mouse C\n");
   }
    return 0;
}