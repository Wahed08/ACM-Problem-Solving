#include<stdio.h>
int main()
{
    int i=0,n,j,c1=0,c2=0,c=0;
    int a[1000];
    int b[14] = { 4,7,44,47,74,77,444,447,474,744,777,774,747,477};
 
 
 
    scanf("%d",&n);
 
    for ( i=0; i<14; i++)
    {
        if ( n%b[i]==0)
        {
            printf("YES\n");
            return 0;
        }
    }
 
    while(n>0)
    {
        a[i]=n%10;
 
        i++;
        if (n%10==4)
            c1++;
        if(n%10==7)
            c2++;
        n=n/10;
        c++;
    }
 
    if ((c1+c2)==c )
        printf("YES\n");
 
    else
        printf("NO\n");
 
 
    return 0;
}
