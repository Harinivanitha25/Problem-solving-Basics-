#include <stdio.h>

int main()
{
    int n,k,q;
    scanf("%d%d%d",&n,&k,&q);
    int arr[n],qu[q],i;
    for( i=0;i<n;i++)
      scanf("%d",&arr[i]);
    for( i=0;i<q;i++)
      scanf("%d",&qu[i]);
       k = k % n;

    for(i = 0; i < q; i++) {
        int index = (qu[i] - k + n) % n;
        printf("%d\n", arr[index]);
    }
    return 0;
}