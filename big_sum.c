#include <stdio.h>

int main()
{
  int n,i;
  scanf("%d",&n);
  long int arr[n],sum=0;
  for(i=0;i<n;i++)
  {
      scanf("%ld",&arr[i]);
      sum=sum+arr[i];
  }
  printf("%ld",sum);
}