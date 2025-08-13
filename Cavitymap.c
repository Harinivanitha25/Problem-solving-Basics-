#include <stdio.h>
int main()
{
    int n,current;
    scanf("%d",&n);
    int arr[n][n];
    for(int i=0; i<n; i++)
    {  
        scanf("%d",&current);
        int j=n-1;
          while(current>0)
             {  arr[i][j]=current%10;
               current=current/10;
               j--;
             }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
         { if(i!=0 && i!=n-1 && j!=0 && j!=n-1 && arr[i][j]>arr[i][j-1] && arr[i][j]>arr[i][j+1] && arr[i][j]>arr[i-1][j] && arr[i][j]>arr[i+1][j])
              printf("X");
            else
              printf("%d",arr[i][j]);
         } 
         printf("\n");
    }
    

    return 0;
}