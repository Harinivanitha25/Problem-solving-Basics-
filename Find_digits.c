#include <stdio.h>

int main()
{
    int n;
    int number,rem,count;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {  count=0;
       scanf("%d",&number);
       int a=number;
         while(number>0)
     {   
           rem=number%10;
           if(rem!=0 && a%rem==0)
              count++;
           number=number/10;
        }
        printf("%d\n",count);
    
    } 
    return 0;
}
