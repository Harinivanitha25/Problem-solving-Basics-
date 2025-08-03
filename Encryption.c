#include <stdio.h>
#include <math.h>
int main()
{
    char str[82];
    scanf("%s",str);
    int length=0;
    for(length=0;str[length]!='\0';length++);
    int row=(int)sqrt(length);
    if(length!=row*row)
    {
    for(int i=0;i<=row;i++)
    {  int l=i;
     while(i<length)
      {  if(str[i]!=' ')
           printf("%c",str[i]);
          i=i+row+1;
      }
      i=l;
      printf(" ");
    }}
    else
    { for(int i=0;i<row;i++)
    {  int l=i;
     while(i<length)
      {  if(str[i]!=' ')
           printf("%c",str[i]);
          i=i+row;
      }
      i=l;
      printf(" ");
    }
        
    }
    
    return 0;
}