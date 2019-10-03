#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    long long int n,c,sum=0;
    cin>>n>>c;
 
    long long int arr[n];
 
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
 
    for(int i=0; i<n; i++)
    {
        if(i==0)
            sum++;
        else
        {
            if(arr[i]-arr[i-1]<=c)
                sum++;
            else
                sum=1;
            }
    }
    cout<<sum<<endl;
 
    return 0;
}
