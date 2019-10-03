#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int x,y,z,a,b,c,cnt=0;
    cin>>x>>y>>z>>a>>b>>c;
 
    if(a-x>=0)
    {
        cnt++;
    }
    if(a-x+b>=y)
    {
        cnt++;
    }
    if(a-x+b-y+c>=z)
    {
        cnt++;
    }
    if(cnt==3)
    {
        cout<<"YES"<<endl;
    }
    else
        cout<<"NO"<<endl;
 
    return 0;
}
