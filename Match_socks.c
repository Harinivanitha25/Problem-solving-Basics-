#include <stdio.h>

int main()
{  int n,count=0;
scanf("%d",&n);
int arr[n],freq[100]={0};
for(int i=0;i<n;i++)
{scanf("%d",&arr[i]);
 freq[arr[i]]++;
}
for(int i=0;i<100;i++)
{   
    int val=freq[i]/2;
    count=count+val;
}
printf("%d",count);
    return 0;
}