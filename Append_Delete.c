#include <stdio.h>
#include<string.h>
int main()
{   char str[100],str1[100];
    int clength=0,plength,i=0,j=0;
    scanf("%[^\n]s",str);
    getchar();
    scanf("%[^\n]s",str1);
    scanf("%d",&plength);
    while(str[i]!='\0')
    {   
         while(str1[j]!='\0')
         {
            if(str[i]==str1[j])
             {i++;j++;clength++;}
            else
             { break;
             }
         }
         break;
    }
    int del=strlen(str)-clength;
    int app=strlen(str1)-clength;
    int mlength=del+app;
   if (plength == mlength)
    printf("Yes");
else if (plength > mlength) {
    if ((plength - mlength) % 2 == 0 || plength >= strlen(str) + strlen(str1))
        printf("Yes");
    else
        printf("No");
} else
    printf("No");
    
    return 0;
}
