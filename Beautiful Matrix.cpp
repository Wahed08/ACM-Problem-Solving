#include<stdio.h>
#include<stdlib.h>
#define row 5
#define col 5
int main()
{
    int i,j,arr[row][col];
 
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            if(arr[i][j]!=0){
                printf("%d\n",abs(i-2)+abs(j-2));
            }
        }
    }
 
    return 0;
}
