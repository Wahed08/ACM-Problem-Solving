#include<stdio.h>
 #include<string.h>
 
int main()
 {
 
char p[100];
 
gets(p);
 
char  ch[] = {'H','Q','9','+'};
 
int ln = strlen(p);
 
int i=0;
 
for ( i=0; i<ln; i++)
 {
 
if( p[i]== 'H' || p[i]== 'Q' || p[i]== '9' )
 {
 printf("YES\n");
 return 0;
 }
 }
 printf("NO\n");
 
return 0;
 }
