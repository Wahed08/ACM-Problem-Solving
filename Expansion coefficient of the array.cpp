#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);

    ll n,i;
    cin>>n;
    ll arr[n];

    for(i=1; i<=n; i++)
    {
        cin>>arr[i];
    }
    ll sum=INT_MAX;

    for(i=1; i<=n; i++)
    {
        sum=min(sum,arr[i]/max(i-1,n-i));
    }
    cout<<sum<<endl;


    return 0;
}
