#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,k,sum=0;
    cin>>n>>k;
    int arr[n],arr2[n],arr3[n];

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    for(int i=0; i<n; i++)
    {
        cin>>arr2[i];
    }
    for(int i=0; i<n; i++)
    {
        arr3[i]=arr[i]-arr2[i];
    }
    vector< pair<int,int> >vec;

    for(int i=0; i<n; i++)
    {
        vec.push_back({arr3[i],i});
    }
    sort(vec.begin(),vec.end());

    for(int i=0; i<k; i++)
    {
        sum+=arr[vec[i].second];
    }
     for(int i=k; i<n; i++)
    {
        sum+=min(arr[vec[i].second],arr2[vec[i].second]);
    }
    cout<<sum<<endl;

    return 0;
}
