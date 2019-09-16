#include<bits/stdc++.h>
 
using namespace std;
int main()
{
    int n,sum=0,flag;
    int arr[100000];
    cin>>n;
 
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
 
    for(int i=0; i<n; i++){
        if(arr[n-1]!=arr[i]){
            sum+=arr[n-1]-arr[i];
        }
    }
    cout<<sum<<endl;
 
    return 0;
}
