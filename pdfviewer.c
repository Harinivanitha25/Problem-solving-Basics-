#include <stdio.h>
int main()
{
    int al[26],height,sum=0,count=0;
    for(int i=0;i<26;i++)
      scanf("%d",&al[i]);
    char str[10];
    scanf("%s",str);
    for(int i=0;str[i]!='\0';i++)
    {
        height=((int)str[i])-97;
        if(al[height]>sum)
          sum=al[height];
        count++;
    }
    printf("%d",count*sum);
    return 0;
}