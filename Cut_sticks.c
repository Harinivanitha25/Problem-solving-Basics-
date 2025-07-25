#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    } 
    while (1)
    { int count = 0;
    int min = 1001;
    for(int i = 0; i < n; i++)
     { if (arr[i] > 0) {
            count++;
        if (arr[i] < min) 
        { min = arr[i];
         }
        } 
        }
        if (count == 0)
            break;
        printf("%d\n", count);
    for (int i = 0; i < n; i++) 
    {  if (arr[i] > 0)
         arr[i] -= min;
     }
}
}
