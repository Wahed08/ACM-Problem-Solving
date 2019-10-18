#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    long long int arr[n];
 
    for(long i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    for(long i=0; i<n; i++)
    {
        if(arr[i]%2==0)
        {
            arr[i]=arr[i]-1;
        }
        else
            arr[i]=arr[i];
    }
    for(long i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
 
 
    return 0;
}
