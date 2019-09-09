#include<stdio.h>
int main()
{
    int n,k,i;
    int arr[100];
    int flag;
 
    scanf("%d%d",&n,&k);
 
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    flag=0;
    for(i=0; i<n; i++)
    {
        if(arr[i]>=arr[k-1] && arr[i]>0)
        {
            flag++;
        }
    }
 
    printf("%d\n",flag);
 
    return 0;
}
