#include <stdio.h>

int main()
{
    int n,i,j;
    scanf("%d",&n);
    for(i=n-1;i>=0;i--)
    {
        for(j=0;j<i;j++)
          printf(" ");
        for(j=i;j<n;j++)
          printf("#");
        printf("\n");
    }

    return 0;
}