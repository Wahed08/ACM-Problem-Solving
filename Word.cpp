#include<iostream>
#include<string.h>
 
using namespace std;
int main()
{
    char str[105];
    cin>>str;
 
    int x=0,y=0;
    int len=strlen(str);
 
    for(int i=0; i<len; i++)
    {
        if(str[i]>=97 && str[i]<=122)
        {
            x++;
        }
        else if(str[i]>=65 && str[i]<=90)
            y++;
    }
    for(int i=0; i<len; i++)
    {
        if(x>y)
        {
            if(str[i]>=65 && str[i]<=90)
                str[i]=str[i]+32;
        }
        else if(y>x)
        {
            if(str[i]>=97 && str[i]<=122)
                str[i]=str[i]-32;
        }
        else if(x==y)
        {
            if(str[i]>=65 && str[i]<=90)
                str[i]=str[i]+32;
        }
    }
    cout<<str<<endl;
 
    return 0;
}
