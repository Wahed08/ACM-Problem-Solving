#include<bits/stdc++.h>
#define Size 100000
using namespace std;
 
int main()
{
    int n,arr[Size],prr[Size];
    int ans=0,price=INT_MAX;
    cin>>n;
 
    for(int i=0; i<n; i++)
    {
        cin>>arr[i]>>prr[i];
    }
 
    for(int i=0; i<n; i++)
    {
        price=min(price,prr[i]);
        ans+=price*arr[i];
    }
    cout<<ans<<endl;
 
 
    return 0;
}
