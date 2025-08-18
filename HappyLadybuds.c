#include <stdio.h>

int main()
{   int t;
    scanf("%d",&t);
    for(int k=0;k<t;k++)
    {
    int n,flag=0,freq[31]={0};
    scanf("%d",&n);
    char str[n];
    scanf("%s",str);
    for(int i=0;i<n;i++)
       freq[(int)str[i]-65]++;
    for(int i=0;i<27;i++)
    {   
        if(freq[i]==1)
        {
            printf("NO\n");  flag=1;
            break;
        }
       
    }
     if(freq[30]==0 && flag!=1)
        {  
            for(int i=0;i<n;i++)
            { if((i>0&& str[i]==str[i-1])||(i<n-1 && str[i]==str[i+1])) 
                continue;
             else 
              {  printf("NO\n");
                 flag=1;
                 break;}
    } 
        }
    if(flag==0)
     printf("YES\n");
    }
    return 0;
}
