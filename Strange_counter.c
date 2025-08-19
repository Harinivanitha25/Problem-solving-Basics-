#include <stdio.h>
int main()
{
    long int n,value=3,i=value;
    scanf("%ld",&n);
    while(i<n)
    {
        value=value*2;
        i=i+value;
    }
    long int prev=i-value;
    long int offset=n-prev;
    printf("%ld",value-offset+1);
    return 0;
}