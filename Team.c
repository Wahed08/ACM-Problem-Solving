#include<stdio.h>
 
int main()
{
    int i,j,k,n,x;
    int flag=0;
 
    scanf("%d",&n);
 
    for(x=0; x<n; x++)
    {
        scanf("%d%d%d",&i,&j,&k);
 
    if(i+j+k>=2)
    {
        flag++;
    }
    }
    printf("%d\n",flag);
 
    return 0;
}
