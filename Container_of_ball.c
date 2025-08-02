#include <stdio.h>
void sort(int n,long int arr[])
{
    long int temp;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}
int main()
{   int q;
    scanf("%d",&q);
    for(int i=0;i<q;i++)
    {
    int n,flag=0;
    scanf("%d",&n);
    long int arr[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%ld",&arr[i][j]);
            
        }
    }
    long int sum,r[n],c[n];
    for(int i=0;i<n;i++)
    {   sum=0;
        for(int j=0;j<n;j++)
        {
            sum=sum+arr[i][j];
        }
        r[i]=sum;
    }
     for(int i=0;i<n;i++)
    {   sum=0;
        for(int j=0;j<n;j++)
        {
            sum=sum+arr[j][i];
        }
        c[i]=sum;
    }
    sort(n,r);
    sort(n,c);
    for(int i=0;i<n;i++)
    {
        if(c[i]!=r[i])
        {
            printf("Impossible\n");
            flag=1;
            break;
        }
    }
    if(flag==0)
     printf("Possible\n");
    }
    return 0;
}
