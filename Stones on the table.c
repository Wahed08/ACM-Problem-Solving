#include<stdio.h>
int main()
 
{
    int n,i,a=0,b=0,c=0;
    scanf("%d\n",&n);
 
    char s[n];
 
    gets(s);
 
    for ( i=0; i<n;i++ )
    {
 
        if ( s[i]=='R')  while(s[i+1]=='R')
        {
 
            a++;
            i++;
        }
 
         if ( s[i]=='G')  while(s[i+1]=='G')
        {
 
            b++;
            i++;
        }
 
         if ( s[i]=='B')  while(s[i+1]=='B')
        {
 
            c++;
            i++;
        }
    }
  
    printf("%d\n",a+b+c);
 
   
