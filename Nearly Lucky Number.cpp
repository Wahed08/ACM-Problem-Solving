#include<iostream>
#include<string.h>
 
using namespace std;
int main()
{
    long int n;
    int Count=0;
    char str[10000];
    cin>>str;
    int len=strlen(str);
 
    for(int i=0; i<len; i++)
    {
        if(str[i]=='4')
            Count++;
 
        else if(str[i]=='7')
            Count++;
            }
 
    if(Count==4)
        cout<<"YES"<<endl;
    else if(Count==7)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
 
    return 0;
}
