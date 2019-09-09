#include<stdio.h>
int main()
{
    long int k,n,w,t;
    scanf("%ld%ld%ld",&k,&n,&w);
 
    t =k*((w*(w+1))/2);
 
    if( (t-n)>0)
      printf("%ld",(t-n));
    else
        printf("0\n");
 
    return 0;
 
 
