#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    long long int n,sum,flag;
    cin>>n;
    long long int arr[n],arr2[n],arr3[n];
 
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
 
    for(int i=0; i<n; i++)
    {
        if(i==0)
        {
            arr2[i]=abs(arr[0]-arr[n-1]);
            arr3[i]=abs(arr[0]-arr[1]);
        }
        else if(i==n-1)
        {
            arr2[i]=abs(arr[0]-arr[n-1]);
            arr3[i]=abs(arr[n-2]-arr[n-1]);
        }
        else
        {
            arr2[i]=max(abs(arr[i]-arr[0]),abs(arr[i]-arr[n-1]));
            arr3[i]=min(abs(arr[i]-arr[i+1]),abs(arr[i]-arr[i-1]));
        }
    }
    for(int i=0; i<n; i++)
    {
        cout<<arr3[i]<<" "<<arr2[i]<<endl;
    }
 
 
    return 0;
}
