#include<bits/stdc++.h>
 
using namespace std;
int main()
{
    int n,m,x=0;
    cin>>n>>m;
 
    while(n<m)
    {
        if(m%2)
            m++;
        else
            m/=2;
        x++;
    }
    x=x+n-m;
 
    cout<<x<<endl;
 
    return 0;
}
