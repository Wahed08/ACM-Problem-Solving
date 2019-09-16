#include<iostream>
#include<string.h>
#include<algorithm>
#include<vector>
#include<bits/stdc++.h>
 
 
using namespace std;
int main()
{
    string str;
    getline(cin,str);
    set<char>s;
    for(int i=0; i<str.size(); i++)
    {
        if(str[i]>=97 && str[i]<=122)
        {
            s.insert(str[i]);
        }
    }
    cout<<s.size()<<endl;
 
    return 0;
}
 
