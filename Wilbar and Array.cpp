#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int n;
    cin>>n;

    long long int arr[n],arr2[n]={0},cnt=0;

    for(int i=0; i<n; i++)
    {
         cin>>arr[i];
        if(i!=0)
       cnt+=abs(arr[i]-arr[i-1]);
       else
        cnt+=abs(arr[i]);
    }
    cout<<cnt<<endl;

    return 0;
}
