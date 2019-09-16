#include<iostream>
#include<bits/stdc++.h>
 
using namespace std;
int main()
{
    int n;
    cin>>n;
    string str;
    cin>>str;
 
    set<char>s;
    for(int i=0; i<str.size(); i++)
    {
        if(str[i]>=65 && str[i]<=90)
        {
            str[i]=str[i]+32;
        }
    }
    for(int i=0; i<str.size(); i++)
    {
        if(str[i]>=97 && str[i]<=122)
        {
            s.insert(str[i]);
        }
    }
    if(s.size()==26)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
 
 
    return 0;
}
 
