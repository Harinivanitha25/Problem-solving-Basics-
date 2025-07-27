#include <stdio.h>
int main()
{
    char str[100],count_a=0,count=0;
    scanf("%s",str);
    long int n,result;
    scanf("%ld",&n);
    for(int i=0;str[i]!='\0';i++)
    {   count++;
        if(str[i]=='a')
          count_a++;
    }
    if(count_a!=0)
    { result=(n/count)*count_a;
    if(n%count!=0)
    {  int j=n%count,k;
       for(int i=0;i<j;i++)
       {
           if(str[i]=='a')
              k++;
       }
       printf("%ld",result+k);
    }
    else
      printf("%ld",result);
    }
    else
     printf("0");
    return 0;
}