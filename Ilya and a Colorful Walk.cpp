#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,sum=0,cnt=0;
    cin>>n;
    int arr[n];

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int k=arr[n-1];
    int m=arr[0];

    for(int i=0; i<n-1; i++)
    {
        if(arr[i]!=k)
        {
            sum=n-(i+1);
            break;
        }
    }
    for(int i=n-1; i>=0; i--){
        if(arr[i]!=m){
            cnt=n-(n-(i+1))-1;
            break;
        }
    }
    cout<<max(cnt,sum)<<endl;

    return 0;
}
