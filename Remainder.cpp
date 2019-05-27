#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);

    ll n,x,y,sum=0;
    cin>>n>>x>>y;

    string str;
    cin>>str;
    for(int i=n-x; i<n; i++)
    {
        if(str[i]=='1' && i!=n-y-1)
            sum++;
    }
    if(str[n-y-1]=='0')
        sum++;

    cout<<sum<<endl;

    return 0;
}
