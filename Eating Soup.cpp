#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);

    int n,m;
    cin>>n>>m;

    if(n==m){
        cout<<0<<endl;
        return 0;
    }
    if(m==0){
        cout<<1<<endl;
        return 0;
    }
    cout<<min(m,n-m)<<endl;

  return 0;
}
