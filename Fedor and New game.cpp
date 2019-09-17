#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n,m,k,arr[1005],y=0;
    cin>>n>>m>>k;
 
    for(int i=0; i<=m; i++)
    {
        cin>>arr[i];
    }
    for(int i=0; i<m; i++)
    {
        int t=0;
        for(int j=0; j<n; j++){
            if(((arr[i]>>j) & 1)!=((arr[m]>>j) & 1))
            t++;
        }
        if(t<=k)
            y++;
    }
    cout<<y<<endl;
 
    return 0;
}
