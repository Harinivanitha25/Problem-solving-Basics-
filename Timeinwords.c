#include <stdio.h>
int main()
{
    int h,m;
    char hour[59][20] = {
        "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten",
        "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen",
        "twenty", "twenty one", "twenty two", "twenty three", "twenty four", "twenty five", "twenty six", "twenty seven", "twenty eight", "twenty nine",
        };
    scanf("%d%d",&h,&m);
    if(m==00)
        printf("%s o' clock",hour[h-1]);
    else if(m>0 && m<30)
    {
        if(m==15)
            printf("quarter past %s",hour[h-1]);
        else if(m==01)
            printf("one minute past %s",hour[h-1]);
        else
            printf("%s minutes past %s",hour[m-1],hour[h-1]);
    }
    else if(m==30)
        printf("half past %s",hour[h-1]);
    else
    {     if(m==45)
            printf("quarter to %s",hour[h]);
          else
            printf("%s minutes to %s",hour[59-m],hour[h]);

    }
    return 0;
}