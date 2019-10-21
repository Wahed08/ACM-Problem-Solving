#include<bits/stdc++.h>
using namespace std;
 
int main()
{
 
    ios_base::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int t;
    cin>>t;
 
    while(t--)
    {
        long n,m,k;
        cin>>n>>m>>k;
 
        long arr[n];
        long val=m,x=0,y=0;
 
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        for(int i=0; i<n-1; i++)
        {
            val+=arr[i]-max(y,arr[i+1]-k);
            if(val<0)
            {
                x=1;
                break;
            }
        }
        if(x==1)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
 
 
    return 0;
}
