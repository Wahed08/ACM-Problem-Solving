#include<stdio.h>
 
int main()
{
    int c=0;
    int l1=0,l2=0,l3=0;
 
    int n,i;
    int in;
    scanf("%d\n",&n);
 
    for ( i=0; i<n; i++)
    {
        scanf("%d",&in);
 
        if (in==1)
            l1++;
        if (in==2)
            l2++;
        if (in==3)
            l3++;
        if (in==4)
            c++;
 
    }
 
    if (l3>=l1)
    {
        c=c+l3;
        if (l2%2==0)
            c=c+l2/2;
        else
            c=c+l2/2+1;
 
        printf("%d\n",c);
        return 0;
    }
    else
    {
        c=c+l3;
        l1=l1-l3;
 
        if (l2%2==0)
        {
            c=c+l2/2;
        }
        else
        {
            c=c+l2/2+1;
            l1=l1-2;
        }
 
        if(l1>0)
        {
            if(l1%4==0)
                c=c+l1/4;
            else
                c=c+l1/4 +1;
            printf("%d\n",c);
            return 0;
        }
        printf("%d\n",c);
        return 0;
 
    }
}
