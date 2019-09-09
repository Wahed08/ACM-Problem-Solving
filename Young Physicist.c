 #include<stdio.h>
int main()
{
    int n,x,y,z,sum,i;
    int a=0,b=0,c=0;
 
    scanf("%d",&n);
    sum=0;
 
    for(i=0; i<n; i++)
    {
        scanf("%d%d%d",&x,&y,&z);
        a=a+x;
        b=b+y;
        c=c+z;
    }
    if(a==0 && b==0 && c==0)
        printf("YES\n");
    else
        printf("NO\n");
 
    return 0;
}
