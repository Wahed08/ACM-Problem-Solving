#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    long long int n,m,gcd=0;
    cin>>n>>m;
    long long int arr[n],arr2[m];

    for(int i=1; i<=n; i++)
    {
        cin>>arr[i];
    }
    for(int i=1; i<=m; i++)
    {
        cin>>arr2[i];
    }

    for(int i=2; i<=n; i++)
    {
        gcd=__gcd(gcd,arr[i]-arr[i-1]);
    }

    for(int i=1; i<=m; i++)
        if(gcd%arr2[i]==0)
        {
            cout<<"YES"<<endl;
            cout<<arr[1]<<" "<<i<<endl;
            return 0;
        }
    cout<<"NO"<<endl;
}
