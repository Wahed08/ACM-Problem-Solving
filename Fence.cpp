#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n,k,mn=INT_MAX,flag,sum;
    cin>>n>>k;
    int arr[150005];
 
    arr[0]=0;
    for(int i=1; i<=n; i++)
    {
        cin>>arr[i];
    }
 
    for(int i=1; i<=n; i++)
    {
        arr[i]+=arr[i-1];
    }
 
    for(int i=1; i<=n-k+1; i++)
    {
        sum=arr[i+k-1]-arr[i-1];
        if(mn>sum)
        {
            mn=sum;
            flag=i;
        }
    }
    cout<<flag<<endl;
 
 
    return 0;
}
