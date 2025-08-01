#include <stdio.h>
int main()
{   int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
    long int b,w,bc,wc,z;
    scanf("%ld%ld%ld%ld%ld",&b,&w,&bc,&wc,&z);
    if(bc>(wc+z))
    {
        printf("%ld\n",((b+w)*wc)+(b*z));
    }
    else if(wc>(bc+z))
    {
        printf("%ld\n",((b+w)*bc)+(w*z));
    }
    else
    {
        printf("%ld\n",(b*bc)+(w*wc));
    }
    }
    return 0;
