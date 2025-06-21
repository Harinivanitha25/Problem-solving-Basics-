#include <stdio.h>
int main()
{  char str[50],ans[50];
   scanf("%s",str);
   if(str[8]=='P'&& (str[0]!='1'||str[1]!='2'))
    {  if(str[1]<'8')
         str[0]=str[0]+1;
       else
         str[0]=str[0]+2;
       if(str[1]!='8'&&str[1]!='9')
          str[1]=str[1]+2;
       else
         str[1]=str[1]-8;
       str[9]=' ';
       str[8]=' ';
    }
   if(str[8]=='P'&& str[0]=='1'&&str[1]=='2')
    {str[9]=' ';
       str[8]=' ';
    }    
    if(str[8]=='A'&& str[0]=='1'&&str[1]=='2')
    {  str[0]='0';
       str[1]='0';
       str[9]=' ';
       str[8]=' ';
    }
    else
    {
         str[9]=' ';
       str[8]=' ';
    }
    printf("%s",str); 
    return 0;
}