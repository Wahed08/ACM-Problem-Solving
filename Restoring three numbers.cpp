#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int arr[4],arr2[4];

    for(long i=0; i<4; i++)
    {
        cin>>arr[i];
        arr2[i]=arr[i];
    }
    sort(arr,arr+4);
    long long int k=arr[3];

    for(long i=0; i<3; i++)
    {
        cout<<k-arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}
