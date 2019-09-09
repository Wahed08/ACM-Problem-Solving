#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int count=0;
    int ln,one=0,zero=0;
 
    scanf("%s",str);
 
    ln=strlen(str);
 
    for(int i=0; i<ln; i++)
    {
 
        if(str[i]=='1')
        {
            one++;
            zero=0;
 
        }
        else
        {
            one=0;
            zero++;
        }
 
        if(one==7 || zero==7)
        {
            count=1;
            break;
        }
    }
    if(count==1)
        printf("YES\n");
    else
        printf("NO\n");
 
    return 0;
}
