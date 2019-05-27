#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,sum=0;
    cin>>n;
    int arr[n];

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);

    for(int i=0; i<n; i+=2)
    {
        if(arr[i]==arr[i+1])
        {
            sum+=0;
        }
        else
        {
            sum+=arr[i+1]-arr[i];
        }
    }
    cout<<sum<<endl;

    return 0;
}
