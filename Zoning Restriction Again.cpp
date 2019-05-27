#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);

    int n,h,m;
    cin>>n>>h>>m;
    int arr[n];

    for(int i=1; i<=n; i++)
    {
        arr[i]=h;
    }

    for(int i=0; i<m; i++)
    {
        int l,r,x;
        cin>>l>>r>>x;

        for(int j=l; j<=r; j++)
        {
            arr[j]=min(arr[j],x);
        }
    }
    int sum=0;
    for(int i=1; i<=n; i++)
    {
        sum+=arr[i]*arr[i];
    }
    cout<<sum<<endl;

    return 0;
}
