#include<bits/stdc++.h>
using namespace std;

long long int query(long long int k)
{
    if(k % 2 == 0)
        return k/ 2;
    else
        return query(k-1)-k;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);

    int t;
    cin>>t;
    while(t--){
        long long int l,r,sum;
        cin>>l>>r;

        cout<<query(r)-query(l-1)<<endl;
    }

  return 0;
}
