#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int na,nb;
    cin>>na>>nb;

    long long int arr[na],arr2[nb],k,m;
    cin>>k>>m;

    for(long i=0; i<na; i++)
    {
        cin>>arr[i];
    }
    for(long i=0; i<nb; i++)
    {
        cin>>arr2[i];
    }
    long sum=0;

    if(arr[k-1]<arr2[nb-m])
    {
        cout<<"YES"<<endl;
    }

    else
        cout<<"NO"<<endl;

    return 0;
}
