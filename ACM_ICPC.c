#include <stdio.h>
int check(long long int a,long long int b)
{
    long long int add=a+b,rem,count=0;
    while(add>0)
    {
        rem=add%10;
        if(rem>0)
          count++;
        add=add/10;
    }
    return count;
}
int main()
{
    int n,sub;
    scanf("%d%d",&n,&sub);
    long long int arr[n],freq[1001]={0};
    for(int i=0;i<n;i++)
    {
        scanf("%lld",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            freq[check(arr[i],arr[j])]++;
        }   
    }
    int max=0;
    for(int i=1000;i>0;i--)
    {
       if(freq[i]>0)
         { printf("%d\n%lld",i,freq[i]);
          break;}
    }
    
   return 0; 
}