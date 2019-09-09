#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,ln;
    char str[100];
 
    scanf("%d",&n);
 
    while(n--)
    {
        scanf("%s",str);
 
        ln=strlen(str);
 
        if(ln>10)
        {
            printf("%c%d%c\n",str[0],ln-2,str[ln-1]);
        }
        else
        {
            printf("%s\n",str);
        }
    }
 
    return 0;
}
