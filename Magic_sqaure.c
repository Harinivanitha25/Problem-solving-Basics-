#include <stdio.h>
#include <stdlib.h>
int main()
{   int min=10000,val=0;
    int arr[3][3], magic[8][3][3] = {
        {{8,1,6}, {3,5,7}, {4,9,2}},
        {{6,1,8}, {7,5,3}, {2,9,4}},
        {{4,9,2}, {3,5,7}, {8,1,6}},
        {{2,9,4}, {7,5,3}, {6,1,8}},
        {{8,3,4}, {1,5,9}, {6,7,2}},
        {{4,3,8}, {9,5,1}, {2,7,6}},
        {{6,7,2}, {1,5,9}, {8,3,4}},
        {{2,7,6}, {9,5,1}, {4,3,8}}
    };
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
          scanf("%d",&arr[i][j]);
    }
    for(int k=0;k<8;k++)
   {  val=0;
       for(int i=0;i<3;i++)
     {
        for(int j=0;j<3;j++)
        {
            val=val+(abs((arr[i][j])-(magic[k][i][j])));
        }
           
    }
      if(min>val)
       min=val;
   }
    printf("%d",min);
    return 0;
}