#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);

    int n,k;
    cin>>n>>k;

    long arr[n];
    vector<long>vec;

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    long sum=arr[n-1]-arr[0];

    for(int i=1; i<n; i++){
        vec.push_back(arr[i-1]-arr[i]);
    }
    sort(vec.begin(),vec.end());

    for(int i=0; i<k-1; i++){
        sum+=vec[i];
    }
    cout<<sum<<endl;

    return 0;
}
