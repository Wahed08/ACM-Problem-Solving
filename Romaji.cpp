#include <bits/stdc++.h>
 
using namespace std;
 
bool vow(char x)
{
if(x=='a' || x=='e' || x=='o' || x=='u' || x=='i')
    return true ;
    return false;
}
string inp;
int sz;
 
int main()
{
    cin>>inp;inp+='x';
    sz=inp.size();
 
    for(int i=0;i<sz-1;i++)
    {
        if (( vow(inp[i+1])==1) )i++;
        else if (( vow(inp[i])!=1)&& (inp[i]!='n'))
        {
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
    return 0;
}
